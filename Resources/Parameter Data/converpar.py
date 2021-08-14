

from os import stat
import json

inputFile = open("StrTbl.c","r")
state = 0
old_state = -1
parCount = 0
paraJson =  {}
outPut = []

def ifdefCheck(txt):
    if -1 != txt.find("#if"):
        global state, old_state
        old_state = state
        state = 3
        return True
    else:
        return False

def endifCheck(txt):
    global state,old_state
    if -1 != txt.find("#endif"):
        state = old_state
        old_state = -1



def nameCheck(txt):
    global parCount, state, outPut,paraJson

    parCount = parCount-1
    posS = txt.find("(")
    posE = txt.rfind(")")
    text = txt[posS + 2:posE-1]
    if parCount % 2 == 1:
        txtJson = {
            "title": text,
            "description": text
        }
        paraJson["param"].append(txtJson)
    # else:
    #     txtJson = {
    #         "title": text,
    #         "description": text
    #     }
    #     paraJson["param"].append(txtJson)
    if(parCount <= 0):
        state = 0
        outPut.append(paraJson)

def normalCheck(txt):
    if -1 != txt.find("//"):
        txts = txt.split("//")
        if txts[0] == '' and -1 != txt.find(";"):
            strs = txts[1].split(';')
            if strs[0].isdigit():
                assert strs[1] != ""
                global paraJson 
                paraJson = {
                    "index" : strs[0],
                    "type" : "sys",
                    "lines" : strs[1],
                    "param" : []
                }
                global state
                state = 1

def typeCheck(txt):
    global parCount, state, paraJson
    if -1 == txt.find("[9]"):
        paraJson["type"] = "sys"
        parCount = 1*2
    else :#位参数        
        paraJson["type"] = "bin"
        parCount = 9*2
    state = 2


def CheckLine(num, txt):
    numbers = {
        1 : typeCheck,
        2 : nameCheck,
        3 : endifCheck
    }
    
    method = numbers.get(num, normalCheck)
    if method:
        if ifdefCheck(txt) :
            return
        method(txt)




while 1:
    lines = inputFile.readlines(10000)
    if not lines:
        outputFile = open("SystemParameter.json","w")
        outPut.sort(key = lambda x:x["index"])
        outputFile.write(json.dumps(outPut,ensure_ascii=False))
        inputFile.close()
        outputFile.close()
        break
    for line in lines:
        line = line.replace('\n','')
        CheckLine(state, line)
      