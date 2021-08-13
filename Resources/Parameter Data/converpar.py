

from os import stat


inputFile = open("StrTbl.c","r")
outputFile = open("parameter.cpp","w")
state = 0
old_state = -1
parCount = 0

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
    global parCount, state

    parCount = parCount-1
    posS = txt.find("(")
    posE = txt.rfind(")")
    text = txt[posS + 1:posE]
    if parCount % 2 == 1:
        outputFile.write(text) #CN
        if(parCount > 0):
            outputFile.write(';')
    # else:
    #     outputFile.write(text) #EN
    #     if(parCount > 0):
    #         outputFile.write(';')
    if(parCount <= 0):
        state = 0
        outputFile.write('\n')

def normalCheck(txt):
    if -1 != txt.find("//"):
        txts = txt.split("//")
        if txts[0] == '' and txts[1].isdigit():
            outputFile.write(txts[1] + ";")
            global state
            state = 1

def typeCheck(txt):
    global parCount, state
    if -1 == txt.find("[9]"):
        outputFile.write("SYS;")
        parCount = 1*2
    else :#位参数        
        outputFile.write("BIN;")
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
        inputFile.close()
        outputFile.close()
        break
    for line in lines:
        line = line.replace('\n','')
        CheckLine(state, line)
      