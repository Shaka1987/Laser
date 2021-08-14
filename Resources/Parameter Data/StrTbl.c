
/******************************************************************************
TODO:
不定长文本:nsz
定长文本:nszTxt
按钮:nszBtn
子按钮:nszSBtn
标题栏:nszTtl
Bar标题:nszBTtl
报表标题:nszRTtl

消息显示:nszMsg
报警    :nszAlm
参数说明:nszPar
诊断说明:nszDgn
提示说明:nszNote
...
******************************************************************************/

//GROUP:HEADER
#include "def.h"
#include "NcPar.h"

#if MACH_TYPE==MACH_LATHE
#define CHUNK_CN    "卡盘"
#else
#define CHUNK_CN    "主轴夹头"
#endif

const CHAR *const aszStrTable[][LG_NUM] =
{
	//LG_STR nszNull[LG_NUM]
	{CN("")
	EN("")},

	//LG_STR nszBlank[LG_NUM]
	{CN("")
	EN("")},

	//LG_STR nszNone[LG_NUM]
	{CN("无")
	EN("None")},

	//LG_STR nszExist[LG_NUM]
	{CN("存在")
	EN("Exist")},

	//LG_STR nszLeftRight[LG_NUM]
	{CN("\x11\x10")
	EN("\x11\x10")},

	//GROUP:一般
    //LG_STR anszSettingName[3][LG_NUM] =
    //0
    {CN("参数开关")
    EN("Parameter switch")},
    //1
    {CN("程序开关")
    EN("Program switch")},
    //2
//    {CN("自动段号")
//    EN("Auto. sequence number")},
    //3
//    {CN("核对停止(程序号)")
//    EN("Comparison and stop(Program number)")},
    //4
//    {CN("核对停止(段号)")
//    EN("Comparison and stop(Sequence number)")},
    //5
//    {CN("目标加工件数")
//    EN("Target parts")},

    {CN("操作权限级别")
    EN("Operate permission level")},

    //LG_STR anszSettingNote[3][LG_NUM] =
    //0
    {CN("0/1:关闭/打开写参数")
    EN("0/1:Disable/Enable parameter write")},
    //1
    {CN("0/1:关闭/打开写程序")
    EN("0/1:Disable/Enable program write")},
    //2
//    {CN("0/1:编辑程序时不插入/插入段号")
//    EN("0/1:Not insert/Insert sequence number")},
    //3
//    {CN("-1:核对停止功能关闭,需要设置段号")
//    EN("-1:Disable comparison and stop function")},
    //4
//    {CN("-1:核对停止功能关闭,需要设置程序号")
//    EN("-1:Disable comparison and stop function")},
    //5
//    {CN("0:所需的工件数无限大")
//    EN("0:No limitation to the number of parts")},

    //5
    {CN("0:无权限,4:用户,6:厂商")
    EN("0:No permistion,4:User,6:OEM")},

    //LG_STR nszToolLifeValid[LG_NUM] =
    {CN("有效")
    EN("Valid")},

    //LG_STR nszToolLifeExpired[LG_NUM] =
    {CN("已用完")
    EN("Expired")},

    //LG_STR nszToolLifeSkip[LG_NUM] =
    {CN("跳过")
    EN("Skip")},

	//203 LG_STR nszCopyToSys[LG_NUM] =
	{CN("复制到系统")
	 EN("CopyToNC")},

	//203 LG_STR nszCopyToUsb[LG_NUM] =
	{CN("复制到U盘")
	 EN("CopyToUsb")},

	//203 LG_STR nszMakeDir[LG_NUM] =
	{CN("新建目录")
	 EN("Make Dir.")},

	//203 LG_STR nszNew[LG_NUM] =
	{CN("新建")
	 EN("New")},

	//203 LG_STR nszBGEdit[LG_NUM] =
	{CN("后台编辑")
	 EN("BG.Edit")},

	//203 LG_STR nszSaveAs[LG_NUM] =
	{CN("另存为")
	 EN("SaveAS")},

	//203 LG_STR nszRename[LG_NUM] =
	{CN("重命名")
	 EN("Rename")},

    //1182 LG_STR nszPartsTargetNum[LG_NUM] =
    {CN("计件目标数")
    EN("Parts target num")},

	//203 LG_STR nszSignal[LG_NUM] =
	{CN("信号")
	 EN("Signal")},

	//203 LG_STR nszWave1[LG_NUM] =
	{CN("波形1")
	 EN("Wave 1")},
	//203 LG_STR nszWave2[LG_NUM] =
	{CN("波形2")
	 EN("Wave 2")},
	//203 LG_STR nszWave3[LG_NUM] =
	{CN("波形3")
	 EN("Wave 3")},
	//203 LG_STR nszWave4[LG_NUM] =
	{CN("波形4")
	 EN("Wave 4")},

    //203 LG_STR nszAxisSelect[LG_NUM] =
    {CN("轴选择:")
    EN("Axis select:")},

	//230 LG_STR nszTrialSerial[LG_NUM] =
	{CN("试用序列号")
	 EN("Trial Serial")},

	//230 LG_STR nszUseSerial[LG_NUM] =
	{CN("使用序列号")
	 EN("Use Serial")},

	//286 LG_STR nszOSearch[LG_NUM] =
	{CN("程序检索")
	 EN("O Search")},

	//286 LG_STR nszGotoLine[LG_NUM] =
	{CN("定位行")
	 EN("Goto\nLine")},

	//286 LG_STR nszSearch[LG_NUM] =
	{CN("搜索")
	 EN("Search")},

	//286 LG_STR nszFind[LG_NUM] =
	{CN("查找")
	 EN("Find")},

	//286 LG_STR nszPinyin[LG_NUM] =
	{CN("拼音")
	 EN("CHN")},

	//209 LG_STR nszDelete[LG_NUM] =
	{CN("删除")
	 EN("Delete")},

	//209 LG_STR nszPermitNeeded[LG_NUM] =
	{CN("所需权限")
	 EN("Permit Needed")},

	//286 LG_STR nszNcInputSelected[LG_NUM] =
	{CN("已选择输入")
	 EN("Selected input")},

	//286 LG_STR nszNcOutputSelected[LG_NUM] =
	{CN("已选择输出")
	 EN("Selected output")},

	//286 LG_STR nszNcInputting[LG_NUM] =
	{CN("系统正在输入")
	 EN("CNC Inputting")},

	//286 LG_STR nszNcOutputting[LG_NUM] =
	{CN("系统正在输出")
	 EN("CNC outputting")},

	//286 LG_STR nszNcInputFin[LG_NUM] =
	{CN("系统输入完成")
	 EN("CNC input finish")},

	//286 LG_STR nszNcOutputFin[LG_NUM] =
	{CN("系统输出完成")
	 EN("CNC output finish")},

	//286 LG_STR nszNcInputErr[LG_NUM] =
	{CN("系统输入错误")
	 EN("CNC input error")},

	//286 LG_STR nszNcOutputErr[LG_NUM] =
	{CN("系统输出错误")
	 EN("CNC output error")},

	//286 LG_STR nszNcClearing[LG_NUM] =
	{CN("系统正在清除")
	 EN("CNC Clearing")},

	//286 LG_STR nszNcClearFin[LG_NUM] =
	{CN("系统清除完成")
	 EN("CNC Clear finish")},

	//286 LG_STR nszNcClearErr[LG_NUM] =
	{CN("系统清除错误")
	 EN("CNC Clear error")},

	//243 LG_STR nszInputPortDef[LG_NUM] =
	{CN("输入口定义")
	 EN("Input")},

	//262 LG_STR nszOutputPortDef[LG_NUM] =
	{CN("输出口定义")
	 EN("Output")},

	//262 LG_STR nszUserDefIO[LG_NUM] =
	{CN("用户自定义IO")
	 EN("User define IO")},

	//243 LG_STR nszInputPort[LG_NUM] =
	{CN("输入口")
	 EN("Input")},

	//262 LG_STR nszOutputPort[LG_NUM] =
	{CN("输出口")
	 EN("Output")},

	//262 LG_STR nszWear[LG_NUM] =
	{CN("磨损")
	 EN(" Wear")},

	//262 LG_STR nszInput[LG_NUM] =
	{CN("输入")
	 EN("Input")},

	//262 LG_STR nszAbsInput[LG_NUM] =
	{CN("绝对输入")
	 EN("AbsInput")},

	//203 LG_STR nszAddInput[LG_NUM] =
	{CN("+输入")
	 EN("+Input")},

	//262 LG_STR nszFileContentHide[LG_NUM] =
	{CN("文件内容被隐藏")
	 EN("File content hide")},

	//9 LG_STR aaszFormatTxt[4][LG_NUM] =
    {CN("格式化注意事项:")   //0
     EN("Note for format:")},
	{CN("    1. 格式化后用户程序将无法恢复!")   //0
	 EN("    1.User's program will be lost.")},
	{CN("    2. 参数必须从出厂值或备份中恢复!")   //1
	 EN("    2.Parameters can be recovered from backups.")},
	{CN("    3. 格式化需要相应的权限.")   //2
	 EN("    3. Format need permission.")},

	//15 LG_STR aaszSerialNoLbl[4][LG_NUM] =
	{CN("特征码")   //0
	 EN("Property Code")},
	{CN("出厂编号")   //1
	 EN("Product ID")},
	{CN("授权码")   //2
	 EN("Lisence No.")},
	{CN("保修期")   //3
	 EN("Guarant")},

	//27 LG_STR aaszTimeLimTxt[4][LG_NUM] =
	{CN("注意: 1. 请检查当前时间是否与今天相符")   //0
	 EN("Note: 1.Check the \"Current Date\"")},
	{CN("      2. 一旦试用期限设定, 当前时间就")   //1
	 EN("      2.If the \"Trial End\" is set, the time")},
	{CN("        不能修改.")   //2
	 EN("        of the system will be unable to modify.")},
	{CN("      3.请选择使用厂商密码或UKey清试用期")   //3
	 EN("      3.Select password or UKey to clear Trial")},

	//31 LG_STR aszAbsCoor[LG_NUM] =
	{CN("绝对坐标")
	 EN("Abs.Coor")},

	//32 LG_STR aszActCoor[LG_NUM] =
	{CN("实际位置")
	 EN("Act.Pos")},

	//34 LG_STR aszAlarm[LG_NUM] =
	{CN("报警")
	 EN("Alarm")},

	//43 LG_STR aszCol[LG_NUM] =
	{CN("列")
	 EN("Col")},

	//43 LG_STR aszPage[LG_NUM] =
	{CN("页")
	 EN("Page")},

	//44 LG_STR aszContent[LG_NUM] =
	{CN("内容")
	 EN("Content")},

	//47 LG_STR aszCoorSys[LG_NUM] =
	{CN("坐标系")
	 EN("CoorSys")},

	//48 LG_STR aszCopyAs[LG_NUM] =
	{CN("将程序复制为")
	 EN("Copy as")},

	//49 LG_STR aszCount[LG_NUM] =
	{CN(" 计件")
	 EN("COUNT")},

	//50 LG_STR aszCounterLbl[4][LG_NUM] =
	{CN("本次工件总数:")   //0
	 EN("Single Count:")},
	{CN("本次时间总数:")   //1
	 EN("Single Time:")},
	{CN("累计工件总数:")   //2
	 EN("Total Count:")},
	{CN("累计时间总数:")   //3
	 EN("Total Time:")},

	//54 LG_STR aszCurDir[LG_NUM] =
	{CN("当前目录")
	 EN(".")},

	//55 LG_STR aszCurToolLib[LG_NUM] =
	{CN("刀具设置")
	 EN("Current Tool Library")},

	//56 LG_STR aszCurrent[LG_NUM] =
	{CN("当前值")
	 EN("Current")},

	//57 LG_STR aszDiskCapacity[LG_NUM] =
	{CN("存储容量")
	 EN("DiskCapacity")},

	//58 LG_STR aszExtrnHandl[LG_NUM] =
	{CN("外接手轮")
	 EN("ExtrnHandl")},

	//59 LG_STR aszFeed[LG_NUM] =
	{CN("进给")
	 EN("Feed")},

	//60 LG_STR aszFeedOvrd[LG_NUM] =
	{CN("进给倍率")
	 EN("FeedOvrd")},

    //  LG_STR aszJogOvrd[LG_NUM] =
    {CN("手动倍率")
    EN("JogOvrd")},

    //61 LG_STR aszFile[LG_NUM] =
    {CN("文件")
    EN("File")},

	//63 LG_STR aszFileChainAvail[LG_NUM] =
	{CN("文件链表正常!")
	 EN("file chain available!")},

	//64 LG_STR aszFileChainErr[LG_NUM] =
	{CN("文件链表错误!")
	 EN("file chain error!")},

	//65 LG_STR aszFileUsedSectNum[LG_NUM] =
	{CN("文件占用扇区数")
	 EN("file used sect num")},

	//66 LG_STR aszFolder[LG_NUM] =
	{CN("文件夹")
	 EN("Folder")},

	//67 LG_STR aszForwardDir[LG_NUM] =
	{CN("正向")
	 EN("Forward")},

	//68 LG_STR aszForwardRot[LG_NUM] =
	{CN("正")
	 EN("CW")},

	//69 LG_STR aszFreePrgNum[LG_NUM] =
	{CN("剩余程序数")
	 EN("Free Item")},

	//70 LG_STR aszFreeSectNum[LG_NUM] =
	{CN("空闲扇区数")
	 EN("Free sector num")},

	//71 LG_STR aszFreeSpace[LG_NUM] =
	{CN("剩余空间")
	 EN("Free")},

	//72 LG_STR aszROV[LG_NUM] =
	{CN("快速倍率")
	 EN("RapidOv")},

	//74 LG_STR aszHEX[LG_NUM] =
	{CN("HEX")
	 EN("HEX")},

	//75 LG_STR aszHandle[LG_NUM] =
	{CN("手轮")
	 EN("Hdl.")},

	//76 LG_STR aszHdlAxis[LG_NUM] =
	{CN("轴 选 择")
	 EN("Whl.Axis")},

	//77 LG_STR aszHdlOvrd[LG_NUM] =
	{CN("手轮倍率")
	 EN("Whl.Mult")},

	//79 LG_STR aszHori[LG_NUM] =
	{CN("水平")
	 EN("Hori")},

	//80 LG_STR aszIndex[LG_NUM] =
	{CN("序号")
	 EN("Index")},

	//81 LG_STR aszInputData[LG_NUM] =
	{CN("请输入数据:")
	 EN("Input the Data:")},

	//82 LG_STR aszInputFileName[LG_NUM] =
	{CN("请输入文件名")
	 EN("Input filename")},

	//84 LG_STR aszInputPassword[LG_NUM] =
	{CN("输入密码")
	 EN("Password")},

	//86 LG_STR aszInputProgPass[LG_NUM] =
	{CN("程序密码")
	 EN("Prog code")},

	//87 LG_STR aszInputPwdOEM[LG_NUM] =
	{CN("制造商密码")
	 EN("Factory code")},

	//90 LG_STR aszLeftCoor[LG_NUM] =
	{CN("剩余坐标")
	 EN("LeftCoor")},

	//91 LG_STR aszLenModify[LG_NUM] =
	{CN("请输入长度的修调值")
	 EN("Input length error")},

	//93 LG_STR aszLn[LG_NUM] =
	{CN("行")
	 EN("Ln")},

	//94 LG_STR aszMachCoor[LG_NUM] =
	{CN("机床坐标")
	 EN("MachCoor")},

	//95 LG_STR aszMachInfo[LG_NUM] =
	{CN("机 床 信 息")
	 EN("Machine Info.")},

	//96 LG_STR aszManuFeed[LG_NUM] =
	{CN("进给")
	 EN("Feed")},

	//97 LG_STR aszManuSpdl[LG_NUM] =
	{CN("主轴")
	 EN("Spdl")},

	//98 LG_STR aszName[LG_NUM] =
	{CN("名称")
	 EN("Name")},

	//99 LG_STR aszOff[LG_NUM] =
	{CN("关")
	 EN("OFF")},

	//100 LG_STR aszOffsetNo[LG_NUM] =
	{CN("刀  补")
	 EN("OfstNo.")},

	//102 LG_STR aszOn[LG_NUM] =
	{CN("开")
	 EN("ON")},

	//104 LG_STR aszOperFile[LG_NUM] =
	{CN("加工程序")
	 EN("FileName")},

	//107 LG_STR aszOvrd[LG_NUM] =
	{CN("倍率")
	 EN("Mult")},

	//108 LG_STR aszPanelHandl[LG_NUM] =
	{CN("面板手轮")
	 EN("PanelHandl")},

	//111 LG_STR aszPause[LG_NUM] =
	{CN("暂停")
	 EN("Pause")},

	//112 LG_STR aszPresetVal[LG_NUM] =
	{CN("预置值")
	 EN("Preset")},

	//113 LG_STR aszProg[LG_NUM] =
	{CN("程序")
	 EN("Prog")},

	//114 LG_STR aszProgName[LG_NUM] =
	{CN("程序名")
	 EN("Name")},

	//115 LG_STR aszRModify[LG_NUM] =
	{CN("请输入半径的修调值")
	 EN("Input radius error")},

	//117 LG_STR aszReady[LG_NUM] =
	{CN("就绪")
	 EN("RDY")},

	//118 LG_STR aszRecmdRage[LG_NUM] =
	{CN("推荐范围")
	 EN("Recmded.Range")},

	//119 LG_STR aszRelCoor[LG_NUM] =
	{CN("相对坐标")
	 EN("Rel.Coor")},

	//120 LG_STR aszRev[LG_NUM] =
	{CN("转速")
	 EN("Rev")},

	//121 LG_STR aszReverseDir[LG_NUM] =
	{CN("反向")
	 EN("Reverse")},

	//122 LG_STR aszReverseRot[LG_NUM] =
	{CN("反")
	 EN("CCW")},

	//127 LG_STR aszSpdl[LG_NUM] =
	{CN("主轴")
	 EN("Spdl")},

	//129 LG_STR aszSpdlOvrd[LG_NUM] =
	{CN("主轴倍率")
	 EN("SpdlOvrd")},

	//130 LG_STR aszSpdlRank[LG_NUM] =
	{CN("主轴档位")
	 EN("SpdlRank")},

	//131 LG_STR aszSpdlRev[LG_NUM] =
	{CN("转速")
	 EN("Rev.")},

	//132 LG_STR aszSpdlStop[LG_NUM] =
	{CN("停")
	 EN("S.")},

	//133 LG_STR aszStartPoint[LG_NUM] =
	{CN("进刀点")
	 EN("StartPt")},

	//134 LG_STR aszStepLen[LG_NUM] =
	{CN("点距")
	 EN("Inc.")},

	//135 LG_STR aszStop[LG_NUM] =
	{CN("停止")
	 EN("Stop")},

	//137 LG_STR aszTool[LG_NUM] =
	{CN("刀具")
	 EN("Tool")},

	//138 LG_STR aszToolCoor[LG_NUM] =
	{CN("机床坐标")
	 EN("Mach.Coor")},

	//139 LG_STR aszToolInfo[LG_NUM] =
	{CN("刀 具 信 息")
	 EN("Tool Info.")},

	//140 LG_STR aszToolNo[LG_NUM] =
	{CN("T")
	 EN("ToolNo")},

	//141 LG_STR aszToolScrnPos[LG_NUM] =
	{CN("刀具点位")
	 EN("Tool scrn pos.")},

	//142 LG_STR aszToolShapes[LG_NUM] =
	{CN("可选刀具形状")
	 EN("Tool shapes")},

	//143 LG_STR aszTotalSectNum[LG_NUM] =
	{CN("总扇区数")
	 EN("Total sector num")},

	//156 LG_STR aszUpLevel[LG_NUM] =
	{CN("返回上级")
	 EN("..")},

	//159 LG_STR aszUsedPrgNum[LG_NUM] =
	{CN("已存程序数")
	 EN("ExistItem")},

	//160 LG_STR aszUsedSect[LG_NUM] =
	{CN("已用扇区")
	 EN("UsedSect")},

	//161 LG_STR aszUsedSectNum[LG_NUM] =
	{CN("已用扇区数")
	 EN("Used sector num")},

	//163 LG_STR aszValue[LG_NUM] =
	{CN("数值")
	 EN("Value")},

	//164 LG_STR aszVarNo[LG_NUM] =
	{CN("变量号")
	 EN("VarNo")},

	//165 LG_STR aszVert[LG_NUM] =
	{CN("垂直")
	 EN("Vert")},

	//167 LG_STR aszWorkpieceCoor[LG_NUM] =
	{CN("工件坐标")
	 EN("Workpiece Coor.")},

	//168 LG_STR aszWorkpieceCoor1[LG_NUM] =
	{CN("工 件 坐 标")
	 EN("Workpiece Coor.")},

	//171 LG_STR aszZCoor[LG_NUM] =
	{CN("Z轴对刀点工件坐标")
	 EN("Current coor. in Z")},

     //GROUP:定长文本
	//360 LG_STR anszTxtTimeSet[6][LG_NUM] =
	{CN("年")   //0
	 EN("Year")},
	{CN("月")   //1
	 EN("Month")},
	{CN("日")   //2
	 EN("Day")},
	{CN("时")   //3
	 EN("Hour")},
	{CN("分")   //4
	 EN("Minute")},
	{CN("秒")   //5
	 EN("Second")},

	//19 LG_STR anszTxtSetPassword[4][LG_NUM] =
	{CN("当前密码级别")   //0
	 EN("Current password level")},
	{CN("选择密码级别")   //0
	 EN("Select password level")},
	{CN("新密码")   //1
	 EN("New password")},
	{CN("确认密码")   //2
	 EN("Retype")},

    //LG_STR nszTxtChannel[LG_NUM] =
	{CN("通道")
	 EN("Chn")},

    //LG_STR nszTxtHndlAxis[LG_NUM] =
	{CN("手轮轴选")
	 EN("HndlAxis")},

    //LG_STR nszTxtHndlMul[LG_NUM] =
	{CN("手轮倍率")
	 EN("HndlMul")},

    //LG_STR nszTxtHndlCheck[LG_NUM] =
	{CN("手轮调试")
	 EN("HndlChk")},

    //LG_STR nszTxtSysPar[LG_NUM] =
	{CN("系统参数")
	 EN("Sys.Par.")},

    //LG_STR nszTxtCoorSys[LG_NUM] =
	{CN("坐标系")
	 EN("Coor.Sys")},

    //LG_STR nszTxtAllProg[LG_NUM] =
	{CN("全部程序")
	 EN("All Prog.")},

    //LG_STR nszTxtToolOfs[LG_NUM] =
	{CN("刀具偏置")
	 EN("Tool Ofs")},

    //LG_STR nszTxtToolWear[LG_NUM] =
	{CN("刀具磨损")
	 EN("Tool Wear")},

    //LG_STR nszTxtToolLife[LG_NUM] =
	{CN("刀具寿命")
	 EN("Tool Life")},

    //LG_STR nszTxtPitchErr[LG_NUM] =
	{CN("螺距补偿")
	 EN("Pitch Err.")},

    //LG_STR nszTxtMacroVar[LG_NUM] =
	{CN("宏变量")
	 EN("Macro Var.")},

    //LG_STR nszTxtPlcPar[LG_NUM] =
	{CN("PLC参数")
	 EN("PLC Par.")},

    //LG_STR nszTxtPlcLadder[LG_NUM] =
	{CN("梯形图")
	 EN("PLC Lad.")},

	//1100 LG_STR nszTextUsrIO[LG_NUM] =
	{CN("自定义IO")
	 EN("User IO")},

	//1100 LG_STR nszTextJPGImage[LG_NUM] =
	{CN("JPG图片")
	 EN("JPG Image")},

	//1100 LG_STR nszTextUsrPage[LG_NUM] =
	{CN("自定义页面")
	 EN("User Page")},

    //LG_STR nszTxtRT[LG_NUM] =
	{CN("快速")
	 EN("RT")},

    //LG_STR nszTxtSBK[LG_NUM] =
	{CN("单段")
	 EN("SBK")},

    //LG_STR nszTxtINS[LG_NUM] =
	{CN("插入")
	 EN("INS")},

    //LG_STR nszTxtALT[LG_NUM] =
	{CN("修改")
	 EN("ALT")},

    //1171 LG_STR nszTxtPartTarget[LG_NUM] =
    {CN("计件目标")
    EN("PartGoal")},

	//1172 LG_STR nszTxtPartCount[LG_NUM] =
	{CN("计件数")
	 EN("PartCnt")},

	//1173 LG_STR nszTxtRunTime[LG_NUM] =
	{CN("运行时间")
	 EN("RunTime")},

	//1174 LG_STR nszTxtCycleTime[LG_NUM] =
	{CN("循环时间")
	 EN("CycTime")},

	//GROUP:F功能按钮
	//172 LG_STR aszBtnA[LG_NUM] =
	{CN("A")
	 EN("A")},

	//174 LG_STR aszBtnAddInput[LG_NUM] =
	{CN("+输入")
	 EN("+Input")},

	//175 LG_STR aszBtnAddr[LG_NUM] =
	{CN("地址")
	 EN("Address")},

	//176 LG_STR aszBtnAuto[LG_NUM] =
	{CN("自动")
	 EN("Auto")},

	//178 LG_STR aszBtnBackspace[LG_NUM] =
	{CN("前删")
	 EN("Backspace")},

	//180 LG_STR aszBtnBackupPLC[LG_NUM] =
	{CN("备份PLC")
	 EN("BackupPLC")},

	//182 LG_STR aszBtnBrowse[LG_NUM] =
	{CN("浏览")
	 EN("Browse")},

	//183 LG_STR aszBtnBrwSys[LG_NUM] =
	{CN("浏览程序")
	 EN("Brws.Sys")},

	//184 LG_STR aszBtnBrwUsb[LG_NUM] =
	{CN("浏览U文件")
	 EN("Brws.Usb")},

	//185 LG_STR aszBtnByte[LG_NUM] =
	{CN("1字节")
	 EN("BYTE")},

	//186 LG_STR aszBtnC[LG_NUM] =
	{CN("C")
	 EN("C")},

	//188 LG_STR aszBtnCInput[LG_NUM] =
	{CN("C.输入")
	 EN("C.Input")},

	//189 LG_STR aszBtnCancel[LG_NUM] =
	{CN("取  消")
	 EN("Cancel")},

	//190 LG_STR aszBtnCenterInput[LG_NUM] =
	{CN("中心点输入")
	 EN("CenterInput")},

	//191 LG_STR aszBtnChgPassword[LG_NUM] =
	{CN("修改密码")
	 EN("ChgPass")},

	//192 LG_STR aszBtnClass[LG_NUM] =
	{CN("分类列表")
	 EN("Classify")},

	//193 LG_STR aszBtnClrMachCoor[LG_NUM] =
	{CN("清机床坐标")
	 EN("ClrMachCor")},

	//194 LG_STR aszBtnClrMem[LG_NUM] =
	{CN("清内存")
	 EN("ClrMem")},

	//195 LG_STR aszBtnClrSglCnt[LG_NUM] =
	{CN("清本次件")
	 EN("ClrSglCnt")},

	//196 LG_STR aszBtnClrSglTime[LG_NUM] =
	{CN("清本次时")
	 EN("ClrSglTim")},

	//200 LG_STR aszBtnClrUKey[LG_NUM] =
	{CN("清除UKey")
	 EN("Clr UKey")},

	//201 LG_STR aszBtnCoorOffset[LG_NUM] =
	{CN("坐标偏置")
	 EN("CoorOfst")},

	//204 LG_STR aszBtnCountAndTime[LG_NUM] =
	{CN("计件计时")
	 EN("Counter")},

	//205 LG_STR aszBtnCurLevel[LG_NUM] =
	{CN("当前级")
	 EN("CurLevel")},

	//206 LG_STR aszBtnD[LG_NUM] =
	{CN("D")
	 EN("D")},

	//207 LG_STR aszBtnDNC[LG_NUM] =
	{CN("USB DNC")
	 EN("USB DNC")},

	//208 LG_STR aszBtnDWord[LG_NUM] =
	{CN("4字节")
	 EN("DWORD")},

	//209 LG_STR aszBtnDelBack[LG_NUM] =
	{CN("后删")
	 EN("DelBack")},

	//210 LG_STR aszBtnDelLine[LG_NUM] =
	{CN("删行")
	 EN("DelLine")},

	//213 LG_STR aszBtnDown[LG_NUM] =
	{CN("\x1f")
	 EN("\x1f")},

	//214 LG_STR aszBtnDownLevel[LG_NUM] =
	{CN("下一级")
	 EN("DnLevel")},

	//215 LG_STR aszBtnEdit[LG_NUM] =
	{CN("编辑")
	 EN("Edit")},

	//216 LG_STR aszBtnEnd[LG_NUM] =
	{CN("行尾")
	 EN("End")},

	//224 LG_STR aszBtnF[LG_NUM] =
	{CN("F")
	 EN("F")},

	//228 LG_STR aszBtnFindNext[LG_NUM] =
	{CN("查找\n下一个")
	 EN("Find\nNext")},

	//231 LG_STR aszBtnG[LG_NUM] =
	{CN("G")
	 EN("G")},

	//232 LG_STR aszBtnGlobal[LG_NUM] =
	{CN("全局变量")
	 EN("GlobalVar")},

	//233 LG_STR aszBtnGraph[LG_NUM] =
	{CN("图形显示")
	 EN("Graph")},

	//234 LG_STR aszBtnHandle[LG_NUM] =
	{CN("手轮")
	 EN("HD.Wheel")},

	//235 LG_STR aszBtnHome[LG_NUM] =
	{CN("行首")
	 EN("Home")},

	//236 LG_STR aszBtnImportFromUsb[LG_NUM] =
	{CN("从U盘导入")
	 EN("FromUsb")},

	//237 LG_STR aszBtnImportOEMPLC[LG_NUM] =
	{CN("导入厂家PLC")
	 EN("OEM PLC")},

	//238 LG_STR aszBtnImportPlc[LG_NUM] =
	{CN("导入PLC")
	 EN("ImportPLC")},

	//239 LG_STR aszBtnImportPrompt[LG_NUM] =
	{CN("导入说明")
	 EN("ImpPrompt")},

	//240 LG_STR aszBtnImportSysPLC[LG_NUM] =
	{CN("导入系统PLC")
	 EN("Sys PLC")},

	//241 LG_STR aszBtnInit[LG_NUM] =
	{CN("初始化")
	 EN("Init")},

	//242 LG_STR aszBtnInput[LG_NUM] =
	{CN("输入")
	 EN("Input")},

	//244 LG_STR aszBtnK[LG_NUM] =
	{CN("K")
	 EN("K")},

	//246 LG_STR aszBtnLadder[LG_NUM] =
	{CN("梯形图")
	 EN("Ladder")},

	//247 LG_STR aszBtnLeft[LG_NUM] =
	{CN("\x11")
	 EN("\x11")},

	//250 LG_STR aszBtnMachZero[LG_NUM] =
	{CN("回机床零")
	 EN("MachZero")},

	//251 LG_STR aszBtnMacro[LG_NUM] =
	{CN("宏程序")
	 EN("Macro")},

	//252 LG_STR aszBtnManage[LG_NUM] =
	{CN("管  理")
	 EN("Manage")},

	//253 LG_STR aszBtnManu[LG_NUM] =
	{CN("手动")
	 EN("Jog")},

	//254 LG_STR aszBtnMeasure[LG_NUM] =
	{CN("测量")
	 EN("Measure")},

	//255 LG_STR aszBtnModify[LG_NUM] =
	{CN("修  改")
	 EN("Modify")},

	//256 LG_STR aszBtnNextFile[LG_NUM] =
	{CN("下一程序")
	 EN("NextFile")},

	//257 LG_STR aszBtnOEMPass[LG_NUM] =
	{CN("厂商密码")
	 EN("OEMPass")},

	//258 LG_STR aszBtnOK[LG_NUM] =
	{CN("确定")
	 EN("OK")},

	//259 LG_STR aszBtnOffset[LG_NUM] =
	{CN("偏置")
	 EN("Offset")},

	//260 LG_STR aszBtnOnline[LG_NUM] =
	{CN("联机")
	 EN("Online")},

	//263 LG_STR aszBtnParam[LG_NUM] =
	{CN("参  数")
	 EN("Param")},

	//267 LG_STR aszBtnPitchErr[LG_NUM] =
	{CN("螺距补偿")
	 EN("PitchErr")},

	//268 LG_STR aszBtnPrevFile[LG_NUM] =
	{CN("上一程序")
	 EN("PrevFile")},

	//269 LG_STR aszBtnPrgAttr[LG_NUM] =
	{CN("程序属性")
	 EN("FileAttr")},

	//270 LG_STR aszBtnPrgChk[LG_NUM] =
	{CN("程序检查")
	 EN("PrgChk")},

	//271 LG_STR aszBtnProg[LG_NUM] =
	{CN("程序")
	 EN("Prog")},

	//272 LG_STR aszBtnProgEnd[LG_NUM] =
	{CN("程序尾")
	 EN("ProgEnd")},

	//273 LG_STR aszBtnProgHome[LG_NUM] =
	{CN("程序首")
	 EN("ProgHome")},

	//274 LG_STR aszBtnProgPass[LG_NUM] =
	{CN("程序密码")
	 EN("ProgPass")},

	//275 LG_STR aszBtnQuickInput[LG_NUM] =
	{CN("快速输入")
	 EN("QuickIn")},

	//276 LG_STR aszBtnR[LG_NUM] =
	{CN("R")
	 EN("R")},

	//278 LG_STR aszBtnRecoverPLC[LG_NUM] =
	{CN("恢复PLC")
	 EN("RecoverPLC")},

	//279 LG_STR aszBtnRecoverParam[LG_NUM] =
	{CN("恢复参数")
	 EN("RecoverPrm")},

	//281 LG_STR aszBtnRefPos[LG_NUM] =
	{CN("回进刀点")
	 EN("Ref.Pos.")},

	//282 LG_STR aszBtnRemoveUsb[LG_NUM] =
	{CN("移除U盘")
	 EN("RemovUsb")},

	//283 LG_STR aszBtnRepairTime[LG_NUM] =
	{CN("保修期")
	 EN("guarant")},

	//284 LG_STR aszBtnReport[LG_NUM] =
	{CN("详细列表")
	 EN("Details")},

	//287 LG_STR aszBtnRight[LG_NUM] =
	{CN("\x10")
	 EN("\x10")},

	//290 LG_STR aszBtnSaveCoor[LG_NUM] =
	{CN("记忆坐标")
	 EN("SaveCoor")},

	//291 LG_STR aszBtnSaveP1[LG_NUM] =
	{CN("保存P1")
	 EN("SaveP1")},

	//292 LG_STR aszBtnSaveP2[LG_NUM] =
	{CN("保存P2")
	 EN("SaveP2")},

	//293 LG_STR aszBtnSaveP3[LG_NUM] =
	{CN("保存P3")
	 EN("SaveP3")},

	//294 LG_STR aszBtnSaveToSys[LG_NUM] =
	{CN("存入系统")
	 EN("SavtoSys")},

	//295 LG_STR aszBtnSaveToUsb[LG_NUM] =
	{CN("存入U盘")
	 EN("SavtoUsb")},

	//296 LG_STR aszBtnSaveUKey[LG_NUM] =
	{CN("保存UKey")
	 EN("Save UKey")},

	//297 LG_STR aszBtnSaveX1[LG_NUM] =
	{CN("保存X1")
	 EN("SaveX1")},

	//298 LG_STR aszBtnSaveX2[LG_NUM] =
	{CN("保存X2")
	 EN("SaveX2")},

	//299 LG_STR aszBtnSaveY1[LG_NUM] =
	{CN("保存Y1")
	 EN("SaveY1")},

	//300 LG_STR aszBtnSaveY2[LG_NUM] =
	{CN("保存Y2")
	 EN("SaveY2")},

	//301 LG_STR aszBtnScale[LG_NUM] =
	{CN("图形定标")
	 EN("GrphScale")},

	//302 LG_STR aszBtnSerialNo[LG_NUM] =
	{CN("序列号")
	 EN("SerialNo")},

	//304 LG_STR aszBtnSimu[LG_NUM] =
	{CN("模  拟")
	 EN("Simu")},

	//305 LG_STR aszBtnSimuParam[LG_NUM] =
	{CN("图形参数")
	 EN("GraphSet")},

	//306 LG_STR aszBtnSpdlHndl[LG_NUM] =
	{CN("主轴&手轮")
	 EN("Spdl&Hndl")},

	//307 LG_STR aszBtnSpindle[LG_NUM] =
	{CN("主  轴")
	 EN("Spindle")},

	//308 LG_STR aszBtnStartSeg[LG_NUM] =
	{CN("起始段号")
	 EN("StartSeg")},

	//310 LG_STR aszBtnSymbol[LG_NUM] =
	{CN("符号")
	 EN("Symbol")},

	//311 LG_STR aszBtnSearch[LG_NUM] =
	{CN("搜索")
	 EN("Search")},

	//311 LG_STR aszBtnSearchNo[LG_NUM] =
	{CN("搜索号")
	 EN("Search No")},

	//312 LG_STR aszBtnT[LG_NUM] =
	{CN("T")
	 EN("T")},

	//314 LG_STR aszBtnTimeSet[LG_NUM] =
	{CN("时间设置")
	 EN("TimeSetting")},

	//315 LG_STR aszBtnToolModify[LG_NUM] =
	{CN("修  调")
	 EN("Modify")},

	//316 LG_STR aszBtnToolOffset[LG_NUM] =
	{CN("对  刀")
	 EN("Offset")},

	//317 LG_STR aszBtnToolParam[LG_NUM] =
	{CN("刀具参数")
	 EN("ToolParam")},

	//318 LG_STR aszBtnUART[LG_NUM] =
	{CN("串口通信")
	 EN("UART")},

	//319 LG_STR aszBtnUSBDNC[LG_NUM] =
	{CN("USB DNC")
	 EN("USB DNC")},

	//320 LG_STR aszBtnUartDNC[LG_NUM] =
	{CN("485 DNC")
	 EN("485 DNC")},

	//321 LG_STR aszBtnUartRecv[LG_NUM] =
	{CN("串口输入")
	 EN("UART IN")},

	//322 LG_STR aszBtnUartSend[LG_NUM] =
	{CN("串口输出")
	 EN("UART OUT")},

	//323 LG_STR aszBtnUartTest[LG_NUM] =
	{CN("串口检测")
	 EN("UartTest")},

	//324 LG_STR aszBtnUp[LG_NUM] =
	{CN("\x1e")
	 EN("\x1e")},

	//325 LG_STR aszBtnUpLevel[LG_NUM] =
	{CN("上一级")
	 EN("UpLevel")},

	//326 LG_STR aszBtnUsbExport[LG_NUM] =
	{CN("向U盘导出")
	 EN("Export")},

	//327 LG_STR aszBtnUsbImport[LG_NUM] =
	{CN("从U盘导入")
	 EN("Import")},

	//328 LG_STR aszBtnUsbManage[LG_NUM] =
	{CN("U盘管理")
	 EN("Usb Disk")},

	//329 LG_STR aszBtnUsePassword[LG_NUM] =
	{CN("使用密码")
	 EN("UsePasswd")},

	//330 LG_STR aszBtnUseUKey[LG_NUM] =
	{CN("使用UKey")
	 EN("Use UKey")},

	//331 LG_STR aszBtnUserParam[LG_NUM] =
	{CN("用户参数")
	 EN("UserParam")},

	//332 LG_STR aszBtnUserPass[LG_NUM] =
	{CN("用户密码")
	 EN("UserPass")},

	//333 LG_STR aszBtnWord[LG_NUM] =
	{CN("2字节")
	 EN("WORD")},

	//334 LG_STR aszBtnWorkCoor[LG_NUM] =
	{CN("工件坐标")
	 EN("WorkCoor")},

	//335 LG_STR aszBtnWorkZero[LG_NUM] =
	{CN("工件原点")
	 EN("AbsCr.Zro")},

	//336 LG_STR aszBtnX[LG_NUM] =
	{CN("X")
	 EN("X")},

	//342 LG_STR aszBtnY[LG_NUM] =
	{CN("Y")
	 EN("Y")},

	//1084 LG_STR aszAbs[LG_NUM] =
	{CN("绝对")
	 EN("Abs.")},

	//1085 LG_STR aszRel[LG_NUM] =
	{CN("相对")
	 EN("Rel.")},

	//1086 LG_STR aszAll[LG_NUM] =
	{CN("综合")
	 EN("ALL.")},

	//1087 LG_STR aszBtnDualChn[LG_NUM] =
	{CN("双通道")
	 EN("Dual-Chn")},

	//1088 LG_STR aszBtnQuadChn[LG_NUM] =
	{CN("四通道")
	 EN("Quad-Chn")},

	//1089 LG_STR aszProgram[LG_NUM] =
	{CN("程序")
	 EN("Program")},

	//1090 LG_STR aszGraph[LG_NUM] =
	{CN("图形")
	 EN("Graph")},

	//1091 LG_STR aszBtnOperate[LG_NUM] =
	{CN("(操作)")
	 EN("(Operate)")},

	//1092 LG_STR aszBtnLocalDir[LG_NUM] =
	{CN("本地目录")
	 EN("LocalDir")},

	//1093 LG_STR aszBtnUsbDir[LG_NUM] =
	{CN("U盘目录")
	 EN("UsbDir")},

	//1094 LG_STR aszBtnWeb[LG_NUM] =
	{CN("网络")
	 EN("Network")},

	//1095 LG_STR aszBtnUSB[LG_NUM] =
	{CN("USB")
	 EN("USB")},

	//1096 LG_STR aszBtnUart[LG_NUM] =
	{CN("串口")
	 EN("UART")},

	//1097 LG_STR aszBtnMdi[LG_NUM] =
	{CN("MDI")
	 EN("MDI")},

	//1099 LG_STR aszBtnCoorSys[LG_NUM] =
	{CN("坐标系")
	 EN("CoorSys")},

	//1100 LG_STR aszBtnMacroVar[LG_NUM] =
	{CN("宏变量")
	 EN("MacroVar")},

	//1100 LG_STR aszBtnUsrMacroVar[LG_NUM] =
	{CN("自定义\n宏变量")
	 EN("User\nMacroVar")},

	//1100 LG_STR aszBtnUsrInAlm[LG_NUM] =
	{CN("自定义\n输入报警")
	 EN("User\nInAlm")},

	//1100 LG_STR aszBtnUsrWaitAlm[LG_NUM] =
	{CN("自定义\n等待报警")
	 EN("User\nWaitAlm")},

	//1102 LG_STR aszBtnSysSet[LG_NUM] =
	{CN("系统设置")
	 EN("SysSet")},

	//1103 LG_STR aszBtnOperPanel[LG_NUM] =
	{CN("操作面板")
	 EN("OperPanel")},

	//1105 LG_STR aszBtnTime[LG_NUM] =
	{CN("时间")
	 EN("Time")},

	//1106 LG_STR aszBtnPwdProtect[LG_NUM] =
	{CN("密码保护")
	 EN("Protect")},

	//1107 LG_STR aszBtnSpdlPrm[LG_NUM] =
	{CN("主轴参数")
	 EN("SpdlPrm")},

	//1109 LG_STR aszBtnPLC[LG_NUM] =
	{CN("PLC")
	 EN("PLC")},

	//1110 LG_STR aszBtnPlcPrm[LG_NUM] =
	{CN("PLC参数")
	 EN("PLC Prm")},

	//1111 LG_STR aszBtnPlcSet[LG_NUM] =
	{CN("PLC设置")
	 EN("PLC Set")},

	//1112 LG_STR aszBtnAlarm[LG_NUM] =
	{CN("报警")
	 EN("Alarm")},

	//1113 LG_STR aszBtnAlarmHis[LG_NUM] =
	{CN("报警记录")
	 EN("Alarm His")},

	//1114 LG_STR aszBtnPlcDiag[LG_NUM] =
	{CN("PLC诊断")
	 EN("PLC Diag")},

	//1115 LG_STR aszBtnSysDiag[LG_NUM] =
	{CN("系统诊断")
	 EN("Sys.Diag")},

	//1115 LG_STR aszBtnRemoteDiag[LG_NUM] =
	{CN("远程诊断")
	 EN("Rem.Diag")},

	//1116 LG_STR aszBtnGraphPrm[LG_NUM] =
	{CN("图形参数")
	 EN("GraphPrm")},

	//1182 LG_STR aszBtnBGEdit[LG_NUM] =
	{CN("后台编辑")
	 EN("BG.Edit")},

	//1182 LG_STR nszBtnPOS[LG_NUM] =
	{CN("位置")
	 EN("POS")},

	//1182 LG_STR nszBtnPRG[LG_NUM] =
	{CN("程序")
	 EN("PRG")},

	//1182 LG_STR nszBtnOFT[LG_NUM] =
	{CN("刀补")
	 EN("OFT")},

	//1182 LG_STR nszBtnPAR[LG_NUM] =
	{CN("参数")
	 EN("PAR")},

	//1182 LG_STR nszBtnSET[LG_NUM] =
	{CN("设置")
	 EN("SET")},

	//1182 LG_STR nszBtnDGN[LG_NUM] =
	{CN("诊断")
	 EN("DGN")},

	//1182 LG_STR nszBtnGRH[LG_NUM] =
	{CN("图形")
	 EN("GRH")},

	//1182 LG_STR nszBtnALM[LG_NUM] =
	{CN("报警")
	 EN("ALM")},

	//1182 LG_STR nszBtnPLC[LG_NUM] =
	{CN("梯图")
	 EN("PLC")},

	//1182 LG_STR nszBtnUsrDef[LG_NUM] =
	{CN("用户\n自定义")
	 EN("User Def")},

	//1182 LG_STR nszBtnPrintScreen[LG_NUM] =
	{CN("截屏")
	 EN("Print\nScreen")},

	//1182 LG_STR nszBtnSysPar[LG_NUM] =
	{CN("系统参数")
	 EN("Nc Par.")},

	//1182 LG_STR nszBtnChnPar[LG_NUM] =
	{CN("通道参数")
	 EN("Chn Par.")},

	//1182 LG_STR nszBtnOpen[LG_NUM] =
	{CN("打开")
	 EN("Open")},

	//1182 LG_STR nszBtnAxisPlus[LG_NUM] =
	{CN("轴+")
	 EN("Axis+")},

	//1182 LG_STR nszBtnAxisMinus[LG_NUM] =
	{CN("轴-")
	 EN("Axis-")},

	//1182 LG_STR nszBtnFactorySet[LG_NUM] =
	{CN("出厂设置")
	 EN("FactorySet")},

	//1182 LG_STR nszBtnFactoryPar[LG_NUM] =
	{CN("出厂值")
	 EN("FactoryPar")},

	//230 LG_STR nszBtnFormat[LG_NUM] =
	{CN("格式化")
	 EN("Format")},

	//314 LG_STR nszBtnDataInOut[LG_NUM] =
	{CN("数据\n输入输出")
	 EN("Data\nIn Out")},

	//262 LG_STR nszBtnOutputPortDef[LG_NUM] =
	{CN("输出口\n定义")
	 EN("Output\nDef")},

	//243 LG_STR nszBtnInputPortDef[LG_NUM] =
	{CN("输入口\n定义")
	 EN("Input\nDef")},

	//243 LG_STR nszBtnIOOutline[LG_NUM] =
	{CN("输入输出\n一览")
	 EN("IO\nOutline")},

	//243 LG_STR nszBtnUserIODef[LG_NUM] =
	{CN("自定义\nIO")
	 EN("USRDEF\nIO")},

	//243 LG_STR nszBtnUserPage[LG_NUM] =
	{CN("自定义\n页面")
	 EN("USRDEF\nPage")},

	//243 LG_STR nszBtnServoDgn[LG_NUM] =
	{CN("伺服诊断")
	 EN("ServoDgn.")},

     //303 LG_STR nszBtnServoPar[LG_NUM] =
	{CN("伺服参数")
	 EN("ServoPar.")},

	//243 LG_STR nszBtnWaveDgn[LG_NUM] =
	{CN("波形诊断")
	 EN("WaveDgn.")},

	//243 LG_STR nszBtnWaveGrh[LG_NUM] =
	{CN("波形图形")
	 EN("WaveGrh.")},

	//243 LG_STR nszBtnWavePar[LG_NUM] =
	{CN("波形参数")
	 EN("WavePar.")},

	//1098 LG_STR nszBtnToolOfs[LG_NUM] =
	{CN("刀具偏置")
	 EN("ToolOfs")},

	//1098 LG_STR nszBtnToolWear[LG_NUM] =
	{CN("刀具磨损")
	 EN("ToolWear")},

	//1101 LG_STR nszBtnToolLife[LG_NUM] =
	{CN("刀具寿命")
	 EN("ToolLife")},

	//1101 LG_STR nszBtnDataProtect[LG_NUM] =
	{CN("数据保护")
	 EN("Data\nProtect")},

	//1101 LG_STR nszBtnSet[LG_NUM] =
	{CN("设置")
	 EN("SET")},

	//1101 LG_STR nszBtnPlc[LG_NUM] =
	{CN("PLC")
	 EN("PLC")},

	//1101 LG_STR nszBtnAlm[LG_NUM] =
	{CN("报警")
	 EN("ALM")},

	//1100 LG_STR nszBtnLocalVar[LG_NUM] =
	{CN("局部变量")
	 EN("Local\nVar")},

	//1100 LG_STR nszBtnGlobalVar[LG_NUM] =
	{CN("全局变量")
	 EN("Global\nVar")},

	//1100 LG_STR nszBtnNVVar[LG_NUM] =
	{CN("掉电记忆\n变量")
	 EN("NV-Var")},

	//1091 LG_STR nszSBtnOperate[LG_NUM] =
	{CN("[操作]")
	 EN("[OPER]")},

	//285 LG_STR nszSBtnReturn[LG_NUM] =
	{CN("[返回]")
	 EN("[Ret.]")},

	//285 LG_STR nszSBtnMore[LG_NUM] =
	{CN("[更多]")
	 EN("[More]")},

	//285 LG_STR nszSBtnMore1[LG_NUM] =
	{CN("[更多]\n1")
	 EN("[More]\n1")},

	//285 LG_STR nszSBtnMore2[LG_NUM] =
	{CN("[更多]\n2")
	 EN("[More]\n2")},

	//285 LG_STR nszSBtnMore3[LG_NUM] =
	{CN("[更多]\n3")
	 EN("[More]\n3")},

	//285 LG_STR nszSBtnMore4[LG_NUM] =
	{CN("[更多]\n4")
	 EN("[More]\n4")},

	//285 LG_STR nszSBtnMore5[LG_NUM] =
	{CN("[更多]\n5")
	 EN("[More]\n5")},

    //1182 LG_STR nszSBtnPreset[LG_NUM] =
    {CN("预置")
    EN("Preset")},

    //1182 LG_STR nszSBtnOrigin[LG_NUM] =
    {CN("原点")
    EN("Origin")},

	//1182 LG_STR nszSBtnClear[LG_NUM] =
	{CN("清除")
	 EN("Clear")},

	//1182 LG_STR nszSBtnMachClear[LG_NUM] =
	{CN("机床\n清除")
	 EN("Mach.\nClear")},

	//1182 LG_STR nszSBtnRelClear[LG_NUM] =
	{CN("相对\n清除")
	 EN("Rel.\nClear")},

    //1182 LG_STR nszSBtnRelCenter[LG_NUM] =
    {CN("相对\n分中")
    EN("Rel.\nCenter")},

    //1182 LG_STR nszSBtnPartsPreset[LG_NUM] =
    {CN("计件\n清零")
    EN("Parts\nPreset")},

    //1182 LG_STR nszSBtnRunTimePreset[LG_NUM] =
    {CN("计时\n清零")
    EN("RunTim\nPreset")},

    //1182 LG_STR nszSBtnPartsTarget[LG_NUM] =
    {CN("计件\n目标")
    EN("Parts\nTarget")},

	//1104 LG_STR nszSBtnPartTime[LG_NUM] =
	{CN("计件\n计时")
	 EN("Part\nTime")},

	//1104 LG_STR nszSBtnShowLoad[LG_NUM] =
	{CN("显示\n负载")
	 EN("Show\nLoad")},

	//1104 LG_STR nszSBtnProcessSet[LG_NUM] =
	{CN("加工\n设置")
	 EN("Procss\nSet")},

	//1104 LG_STR nszSBtnEncoderRst[LG_NUM] =
	{CN("编码器\n复位")
	 EN("Encoder\nReset")},

	//1104 LG_STR nszSBtnModal[LG_NUM] =
	{CN("模态")
	 EN("Modal")},

	//1104 LG_STR nszSBtnTFS[LG_NUM] =
	{CN("T,F,S")
	 EN("T,F,S")},

	//1104 LG_STR nszSBtnShowCoor[LG_NUM] =
	{CN("显示\n坐标")
	 EN("Show\nCoor.")},

	//1176 LG_STR nszSBtnLoad[LG_NUM] =
	{CN("负载")
	 EN("Load")},

	//264 LG_STR nszSBtnPassword[LG_NUM] =
	{CN("输入\n密码")
	 EN("Pass-\nword")},

	//230 LG_STR nszSBtnTrialSerial[LG_NUM] =
	{CN("试用\n序列号")
	 EN("Trial\nSerial")},

	//230 LG_STR nszSBtnUseSerial[LG_NUM] =
	{CN("使用\n序列号")
	 EN("Use\nSerial")},

	//314 LG_STR nszSBtnSetTime[LG_NUM] =
	{CN("设置\n时间")
	 EN("Set\nTime")},

	//286 LG_STR nszSBtnRewrite[LG_NUM] =
	{CN("重新\n输入")
	 EN("Retype")},

	//286 LG_STR nszSBtnOSearch[LG_NUM] =
	{CN("程序\n检索")
	 EN("O-\nSearch")},

	//286 LG_STR nszSBtnSearch[LG_NUM] =
	{CN("搜索")
	 EN("Search")},

	//227 LG_STR nszSBtnFind[LG_NUM] =
	{CN("查找")
	 EN("Find")},

	//286 LG_STR nszSBtnGotoLine[LG_NUM] =
	{CN("定位行")
	 EN("Goto\nLine")},

	//1182 LG_STR nszSBtnClearAll[LG_NUM] =
	{CN("清除\n全部")
	 EN("Clear\nAll")},

	//1182 LG_STR nszSBtnClearCurAxis[LG_NUM] =
	{CN("清除\n当前轴")
	 EN("Clear\nCurAxis")},

	//1182 LG_STR nszSBtnSelectClear[LG_NUM] =
	{CN("选择\n清除")
	 EN("Select\nClear")},

	//311 LG_STR nszSBtnSearchNo[LG_NUM] =
	{CN("搜索号")
	 EN("Find \n No.")},

	//179 LG_STR nszSBtnBackup[LG_NUM] =
	{CN("备份")
	 EN("Backup")},

	//277 LG_STR nszSBtnRecover[LG_NUM] =
	{CN("恢复")
	 EN("Recover")},

	//202 LG_STR nszSBtnCopy[LG_NUM] =
	{CN("复制")
	 EN("Copy")},
	//202 LG_STR nszSBtnPaste[LG_NUM] =
	{CN("粘贴")
	 EN("Paste")},
	//202 LG_STR nszSBtnCut[LG_NUM] =
	{CN("剪切")
	 EN("Cut")},
	//179 LG_STR nszSBtnBackupRecover[LG_NUM] =
	{CN("备份\n恢复")
	 EN("Backup\nRecov.")},

	//179 LG_STR nszSBtnBackupUser[LG_NUM] =
	{CN("备份\n用户")
	 EN("Backup\nUser")},

	//179 LG_STR nszSBtnBackupOEM[LG_NUM] =
	{CN("备份\n厂家")
	 EN("Backup\nOEM")},

	//179 LG_STR nszSBtnRecoverUser[LG_NUM] =
	{CN("恢复\n用户")
	 EN("Recov.\nUser")},

	//179 LG_STR nszSBtnRecoverOEM[LG_NUM] =
	{CN("恢复\n厂家")
	 EN("Recov.\nOEM")},

	//179 LG_STR nszSBtnRecoverDef[LG_NUM] =
	{CN("恢复\n默认值")
	 EN("Recov.\nDef.")},

	//203 LG_STR nszSBtnCopyToSys[LG_NUM] =
	{CN("复制\n到系统")
	 EN("Copy\nTo NC")},

	//203 LG_STR nszSBtnCopyToUsb[LG_NUM] =
	{CN("复制\n到U盘")
	 EN("Copy\nTo Usb")},

	//203 LG_STR nszSBtnAllToUsb[LG_NUM] =
	{CN("全部\n到U盘")
	 EN("All\nTo Usb")},

	//203 LG_STR nszSBtnAllToSys[LG_NUM] =
	{CN("全部\n到系统")
	 EN("All\nTo NC")},

	//203 LG_STR nszSBtnMakeDir[LG_NUM] =
	{CN("新建\n目录")
	 EN("Make\nDir.")},

	//203 LG_STR nszSBtnNew[LG_NUM] =
	{CN("新建")
	 EN("New")},

	//203 LG_STR nszSBtnSaveAs[LG_NUM] =
	{CN("另存为")
	 EN("SaveAS")},

	//203 LG_STR nszSBtnRename[LG_NUM] =
	{CN("重命名")
	 EN("Rename")},

	//1182 LG_STR nszSBtnBGEdit[LG_NUM] =
	{CN("后台\n编辑")
	 EN("BG\nEdit")},

	//203 LG_STR nszSBtnCamImport[LG_NUM] =
	{CN("凸轮\n导入")
	 EN("Cam\nImport")},

	//203 LG_STR nszSBtnFuncSelect[LG_NUM] =
	{CN("功能\n选择")
	 EN("Func.\nSelect")},

	//314 LG_STR nszSBtnSelect[LG_NUM] =
	{CN("选择")
	 EN("Select")},

	//314 LG_STR nszSBtnCancelSelect[LG_NUM] =
	{CN("取消\n选择")
	 EN("Cancel\nSelect")},

	//314 LG_STR nszSBtnSelectAll[LG_NUM] =
	{CN("全部\n选择")
	 EN("Select\nAll")},

	//314 LG_STR nszSBtnCancelAll[LG_NUM] =
	{CN("全部\n取消")
	 EN("Cancel\nAll")},

	//1130 LG_STR nszSBtnExec[LG_NUM] =
	{CN("执行")
	 EN("SExec")},

	//1130 LG_STR nszSBtnDataInput[LG_NUM] =
	{CN("数据\n输入")
	 EN("Data\nInput")},

	//1130 LG_STR nszSBtnDataOutput[LG_NUM] =
	{CN("数据\n输出")
	 EN("Data\nOutput")},

	//1130 LG_STR nszSBtnOutputToUsb[LG_NUM] =
	{CN("输出\n到U盘")
	 EN("Output\nToUSB")},

	//1130 LG_STR nszSBtnInputFromUsb[LG_NUM] =
	{CN("从U盘\n输入")
	 EN("Input\nFromUsb")},

	//1130 LG_STR nszSBtnOutputAllToUsb[LG_NUM] =
	{CN("输出\n全部")
	 EN("Output\nAll")},

	//1130 LG_STR nszSBtnInputAllFromUsb[LG_NUM] =
	{CN("全部\n输入")
	 EN("Input\nAll")},

	//LG_STR nszSBtnNULL[LG_NUM] =
	{CN("NULL")
	EN("NULL")},

	//LG_STR nszSBtnParSwitch[LG_NUM] =
	{CN("参数\n开关")
	EN("Param\nSwitch")},

	//LG_STR nszSBtnProgSwitch[LG_NUM] =
	{CN("程序\n开关")
	EN("Prog\nSwitch")},

	//1127 LG_STR nszSBtnProgPreview[LG_NUM] =
	{CN("程序\n预览")
	 EN("Prog\nPrevw")},

	//1127 LG_STR nszSBtnCCompzPreview[LG_NUM] =
	{CN("C刀补\n预览")
	 EN("C Compz\nPrevw")},

	//1127 LG_STR nszSBtnShowPreview[LG_NUM] =
	{CN("显示\n预览")
	 EN("Show\nPrevw")},

	//313 LG_STR nszSBtnSetTimeLim[LG_NUM] =
	{CN("设置\n试用期")
	 EN("Set\nTrial")},

	//197 LG_STR nszSBtnClrTimeLim[LG_NUM] =
	{CN("清除\n试用期")
	 EN("Cleal\nTrial")},

	//197 LG_STR nszSBtnDelAll[LG_NUM] =
	{CN("删除\n全部")
	 EN("Delete\nAll")},

	//197 LG_STR nszSBtnAutoCalc[LG_NUM] =
	{CN("自动\n计算")
	 EN("Auto\nCalc")},

	//197 LG_STR nszSBtnRoomIn[LG_NUM] =
	{CN("放大")
	 EN("Room\nIn")},

	//197 LG_STR nszSBtnRoomOut[LG_NUM] =
	{CN("缩小")
	 EN("Room\nOut")},

	//197 LG_STR nszSBtnRoomReset[LG_NUM] =
	{CN("缩放\n复位")
	 EN("Room\nReset")},

	//197 LG_STR nszSBtnMoveUp[LG_NUM] =
	{CN("上移")
	 EN("Move\nUp")},

	//197 LG_STR nszSBtnMoveDown[LG_NUM] =
	{CN("下移")
	 EN("Move\nDown")},

	//197 LG_STR nszSBtnMoveReset[LG_NUM] =
	{CN("移动\n复位")
	 EN("Move\nReset")},

	//197 LG_STR nszSBtnRotLeft[LG_NUM] =
	{CN("向左\n旋转")
	 EN("Rotate\nLeft")},

	//197 LG_STR nszSBtnRotRight[LG_NUM] =
	{CN("向右\n旋转")
	 EN("Rotate\nRight")},

	//197 LG_STR nszSBtnRotUp[LG_NUM] =
	{CN("向上\n旋转")
	 EN("Rotate\nUp")},

	//197 LG_STR nszSBtnRotDown[LG_NUM] =
	{CN("向下\n旋转")
	 EN("Rotate\nDown")},

	//197 LG_STR nszSBtnRotXP[LG_NUM] =
	{CN("X+\n旋转")
	 EN("X+\nRotate")},

	//197 LG_STR nszSBtnRotXN[LG_NUM] =
	{CN("X-\n旋转")
	 EN("X-\nRotate")},

	//197 LG_STR nszSBtnRotYP[LG_NUM] =
	{CN("Y+\n旋转")
	 EN("Y+\nRotate")},

	//197 LG_STR nszSBtnRotYN[LG_NUM] =
	{CN("Y-\n旋转")
	 EN("Y-\nRotate")},

	//197 LG_STR nszSBtnRotZP[LG_NUM] =
	{CN("Z+\n旋转")
	 EN("Z+\nRotate")},

	//197 LG_STR nszSBtnRotZN[LG_NUM] =
	{CN("Z-\n旋转")
	 EN("Z-\nRotate")},

	//197 LG_STR nszSBtnRotReset[LG_NUM] =
	{CN("旋转\n复位")
	 EN("Rotate\nReset")},

	//197 LG_STR nszSBtnXOYPlane[LG_NUM] =
	{CN("XOY\n平面")
	 EN("XOY\nPlane")},

	//197 LG_STR nszSBtnZOXPlane[LG_NUM] =
	{CN("ZOX\n平面")
	 EN("ZOX\nPlane")},

	//197 LG_STR nszSBtnYOZPlane[LG_NUM] =
	{CN("YOZ\n平面")
	 EN("YOZ\nPlane")},

	//197 LG_STR nszSBtnXYZPlane[LG_NUM] =
	{CN("XYZ\n平面")
	 EN("XYZ\nPlane")},

	//197 LG_STR nszSBtnXOZPlane[LG_NUM] =
	{CN("XOZ\n平面")
	 EN("XOZ\nPlane")},

	//197 LG_STR nszSBtnPlaneSelect[LG_NUM] =
     {CN("平面\n选择")
	 EN("Plane\nSelect")},

	//197 LG_STR nszSBtnRotate[LG_NUM] =
     {CN("旋转")
	 EN("Rotate")},

	//197 LG_STR nszSBtnLocate[LG_NUM] =
     {CN("定位")
	 EN("Locate")},

	//197 LG_STR nszSBtnAutoLoc[LG_NUM] =
	{CN("自动\n定位")
	 EN("Auto\nLoc")},

     //197 LG_STR nszSBtnLocCur[LG_NUM] =
	{CN("定位\n当前")
	 EN("Loc.\nCur.")},

	//197 LG_STR nszSBtnLocOrgn[LG_NUM] =
	{CN("定位\n原点")
	 EN("Loc.\nOrgn")},

	//197 LG_STR nszSBtnGotoClass[LG_NUM] =
	{CN("定位\n分类")
	 EN("Goto\nClass")},

	//197 LG_STR nszSBtnPageSel[LG_NUM] =
	{CN("[页面]")
	 EN("[Page]")},

	//197 LG_STR nszSBtnPage[LG_NUM] =
	{CN("页面")
	 EN("Page")},

	//197 LG_STR nszSBtnYAxisLocate[LG_NUM] =
	{CN("Y轴\n定位")
	 EN("Y-Axis\nLocate")},

	//LG_STR nszSBtnAxisServo[LG_NUM] =
	{CN("轴\n伺服")
	 EN("Axis\nServo")},

	//LG_STR nszSBtnSpeed[LG_NUM] =
	{CN("速度")
	 EN("Speed")},

	//LG_STR nszSBtnCompz[LG_NUM] =
	{CN("补偿")
	 EN("Compz")},

    //LG_STR nszSBtnZeroRet[LG_NUM] =
	{CN("回零")
	EN("ZeroRet")},

    //LG_STR nszSBtnCoorSys[LG_NUM] =
	{CN("坐标系")
	EN("CoorSys")},

    //LG_STR nszSBtnPosLim[LG_NUM] =
	{CN("限位")
	EN("PosLim")},

    //LG_STR nszSBtnHndl[LG_NUM] =
	{CN("手轮")
	EN("Hndl")},

    //LG_STR nszSBtnSpdl[LG_NUM] =
	{CN("主轴")
	EN("Spindl")},

    //LG_STR nszSBtnChunk[LG_NUM] =
	{CN("卡盘")
	EN("Chunk")},

    //LG_STR nszSBtnSpdlChunk[LG_NUM] =
	{CN("主轴\n夹头")
	EN("Spdl\nChunk")},

    //LG_STR nszSBtnTailStock[LG_NUM] =
	{CN("尾座")
	EN("Tail\nStock")},

    //LG_STR nszSBtnTool[LG_NUM] =
	{CN("刀架")
	EN("Tool")},

    //LG_STR nszSBtnLub[LG_NUM] =
	{CN("润滑")
	EN("Lub.")},

    //LG_STR nszSBtnSysCfg[LG_NUM] =
	{CN("系统\n配置")
	EN("System\nCfg")},

    //LG_STR nszSBtnProgram[LG_NUM] =
	{CN("程序")
	EN("Prog")},

    //LG_STR nszSBtnToolComp[LG_NUM] =
	{CN("刀补")
	EN("Tool\nOffset")},

    //LG_STR nszSBtnIO[LG_NUM] =
	{CN("IO")
	EN("IO")},

    //LG_STR nszSBtnPLC[LG_NUM] =
	{CN("PLC")
	EN("PLC")},

    //LG_STR nszSBtnThread[LG_NUM] =
	{CN("螺纹")
	EN("Thread")},

    //LG_STR nszSBtnCycle[LG_NUM] =
	{CN("固定\n循环")
	EN("Cycle")},

    //LG_STR nszSBtnTap[LG_NUM] =
	{CN("攻丝")
	EN("Tap")},

    //LG_STR nszSBtnPolygon[LG_NUM] =
	{CN("多边形")
	EN("Poly-\ngon")},

    //LG_STR nszSBtnSkip[LG_NUM] =
	{CN("跳过")
	EN("Skip")},

    //LG_STR nszSBtnPolar[LG_NUM] =
	{CN("极坐标")
	EN("Polar")},

    //LG_STR nszSBtnPosSw[LG_NUM] =
	{CN("位置\n开关")
	EN("PosSW")},

    //LG_STR nszSBtnMacro[LG_NUM] =
	{CN("宏程序")
	EN("Macro")},

    //LG_STR nszSBtnMultChn[LG_NUM] =
	{CN("多通道")
	EN("Mult-\nChn")},

	//197 LG_STR nszSBtnUpdateGrh[LG_NUM] =
	{CN("刷新\n图形")
	 EN("Update\nGrh")},

	//197 LG_STR nszSBtnStartTrace[LG_NUM] =
	{CN("开始\n跟踪")
	 EN("Start\nTrace")},

	//197 LG_STR nszSBtnStopTrace[LG_NUM] =
	{CN("停止\n跟踪")
	 EN("Stop\nTrace")},

	//203 LG_STR nszSBtnWave1[LG_NUM] =
	{CN("波形1")
	 EN("Wave 1")},

	//203 LG_STR nszSBtnWave2[LG_NUM] =
	{CN("波形2")
	 EN("Wave 2")},

	//203 LG_STR nszSBtnWave3[LG_NUM] =
	{CN("波形3")
	 EN("Wave 3")},

	//203 LG_STR nszSBtnWave4[LG_NUM] =
	{CN("波形4")
	 EN("Wave 4")},

	//203 LG_STR nszSBtnTimeUp[LG_NUM] =
	{CN("时间+")
	 EN("Time+")},

	//203 LG_STR nszSBtnTimeDown[LG_NUM] =
	{CN("时间-")
	 EN("Time-")},

	//203 LG_STR nszSBtnTimeLeft[LG_NUM] =
	{CN("时间\x1b")
	 EN("Time\x1b")},

	//203 LG_STR nszSBtnTimeRight[LG_NUM] =
	{CN("时间\x1a")
	 EN("Time\x1a")},

	//203 LG_STR nszSBtnTimeReset[LG_NUM] =
	{CN("时间\n复位")
	 EN("Time\nReset")},

     //1201 LG_STR nszSBtnImportFromUsb[LG_NUM] =
     {CN("从U盘\n导入")
     EN("Import\nFromUsb")},

     //1201 LG_STR nszSBtnInsert[LG_NUM] =
     {CN("插入")
     EN("Insert")},

	//209 LG_STR nszSBtnDelete[LG_NUM] =
	{CN("删除")
	 EN("Delete")},

	//209 LG_STR nszSBtnAppend[LG_NUM] =
	{CN("增加")
	 EN("Append")},

	//285 LG_STR nszSBtnAddUserDef[LG_NUM] =
	{CN("添加\n自定义")
	 EN("Add\nUsrDef")},

	//209 LG_STR nszSBtnChgStatus[LG_NUM] =
	{CN("修改\n状态")
	 EN("Chg\nStatus")},

     //209 LG_STR nszSBtnLifeClear[LG_NUM] =
     {CN("寿命\n重设")
     EN("Life\nClear")},

     //209 LG_STR nszSBtnScreenLock[LG_NUM] =
     {CN("屏幕\n锁住")
     EN("Screen\nLock")},

	//209 LG_STR nszSBtnChgPort[LG_NUM] =
	{CN("修改\n端口")
	 EN("Chg\nPort")},

	//209 LG_STR nszSBtnCenterInput[LG_NUM] =
	{CN("分中\n输入")
	 EN("1/2\nInput")},

	//209 LG_STR nszSBtn3PointCenter[LG_NUM] =
	{CN("三点\n定圆心")
	 EN("3Point\nCenter")},

	//209 LG_STR nszSBtnCInput[LG_NUM] =
	{CN("C输入")
	 EN("C Input")},

	//209 LG_STR nszSBtnAddCInput[LG_NUM] =
	{CN("+C输入")
	 EN("+C Input")},

	//209 LG_STR nszSBtnPosition1[LG_NUM] =
	{CN("位置1")
	 EN("POS1")},

	//209 LG_STR nszSBtnPosition2[LG_NUM] =
	{CN("位置2")
	 EN("POS2")},

	//209 LG_STR nszSBtnPosition3[LG_NUM] =
	{CN("位置3")
	 EN("POS3")},

	//209 LG_STR nszSBtnLevelInc[LG_NUM] =
	{CN("升级")
	 EN("Level+")},

	//209 LG_STR nszSBtnLevelDec[LG_NUM] =
	{CN("降级")
	 EN("Level-")},

	//209 LG_STR nszSBtnUpgradeSoft[LG_NUM] =
	{CN("升级\n软件")
	 EN("Upgrade\nSoftware")},

	//209 LG_STR nszSBtnUpgradePOPic[LG_NUM] =
	{CN("升级\n开机图")
	 EN("Upgrade\nPO-PIC")},

	//264 LG_STR nszSBtnDisableUpg[LG_NUM] =
	{CN("禁止\n升级")
	 EN("Disable\nUpgrade")},

	//264 LG_STR nszSBtnLevelPlus[LG_NUM] =
	{CN("级别+")
	 EN("Level+")},

	//264 LG_STR nszSBtnLevelMinus[LG_NUM] =
	{CN("级别-")
	 EN("Level-")},

	//102 LG_STR nszSBtnOn[LG_NUM] =
	{CN("开(1)")
	 EN("ON(1)")},

	//99 LG_STR nszSBtnOff[LG_NUM] =
	{CN("关(0)")
	 EN("OFF(0)")},

	//102 LG_STR nszSBtnContact[LG_NUM] =
	{CN("触点\n(2)")
	 EN("Contact\n(2)")},

    //GROUP:状态栏提示
	//366 LG_STR aszCannotBrwDir[LG_NUM] =
	{CN("文件夹不能被浏览")
	 EN("Folder can't be browsed")},

	//367 LG_STR aszCannotDelDir[LG_NUM] =
	{CN("不能删除文件夹")
	 EN("Unable to delete folder")},

	//368 LG_STR aszCopyFolder[LG_NUM] =
	{CN("文件夹不能复制")
	 EN("Folder can't be copied")},

	//369 LG_STR aszCopyToClipboardSucc[LG_NUM] =
	{CN("复制到剪切板")
	 EN("Copy to clipboard")},

	//374 LG_STR aszDirFull[LG_NUM] =
	{CN("目录区已满")
	 EN("Directory fulled")},

	//376 LG_STR aszFileExist_Replace[LG_NUM] =
	{CN("目标文件已存在,覆盖(ENTER)?")
	 EN("Destined filename be existed,Replace(ENTER)?")},

	//381 LG_STR aszInsertUsb[LG_NUM] =
	{CN("请插入U盘")
	 EN("Please insert Usb disk")},

	//382 LG_STR aszMaxDirDepth[LG_NUM] =
	{CN("当前已是最大可打开的目录深度")
	 EN("Be the most depth of Usb directory")},

	//383 LG_STR aszMsgDogErr[LG_NUM] =
	{CN("UKey错误!")
	 EN("UKey error")},

	//384 LG_STR aszMsgDogExist[LG_NUM] =
	{CN("UKey信息已存在")
	 EN("UKey info exist already")},

	//385 LG_STR aszMsgInsertDog[LG_NUM] =
	{CN("请插入UKey")
	 EN("Please Insert UKey")},

	//386 LG_STR aszMsgDogInsert[LG_NUM] =
	{CN("UKey已插入")
	 EN("UKey inserted")},

	//387 LG_STR aszMsgDogPermitErr[LG_NUM] =
	{CN("UKey权限错误!")
	 EN("UKey permit error")},

	//388 LG_STR aszMsgImportLadderFail[LG_NUM] =
	{CN("导入梯形图文件失败!")
	 EN("Fail to import ladder file!")},

	//389 LG_STR aszMsgImportPLCFail[LG_NUM] =
	{CN("导入PLC程序文件失败!")
	 EN("Fail to import PLC program file!")},

	//391 LG_STR aszMsgIsBackup[LG_NUM] =
	{CN("备份数据,无法修改!")
	 EN("Can't edit the backuped file.")},

	//392 LG_STR aszMsgLoadE01[LG_NUM] =
	{CN("按F1导入U盘根目录下E01.txt为报警内容!")
	 EN("F1:Load E01.txt to the content!")},

	//393 LG_STR aszMsgLoadUserPrm[LG_NUM] =
	{CN("按F1导入U盘根目录下UserPrm.txt为用户参数内容!")
	 EN("F1:Load UserPrm.txt to the content!")},

	//394 LG_STR aszMsgNoDogInfo[LG_NUM] =
	{CN("没有保存UKey信息")
	 EN("No saved UKey info.")},

	//395 LG_STR aszMsgNoOpenBackup[LG_NUM] =
	{CN("正在加工,无法浏览备份文件!")
	 EN("Can't open backup file when operating!")},

	//396 LG_STR aszMsgNotExistOrNoPermit[LG_NUM] =
	{CN("文件不存在或无访问权限!")
	 EN("File not exist or no permission!")},

	//397 LG_STR aszMsgNotFind[LG_NUM] =
	{CN("没有找到")
	 EN("Not found")},

	//401 LG_STR aszMsgOperating[LG_NUM] =
	{CN("正在加工,无法执行!")
	 EN("Can't Exec. when operating!")},

	//403 LG_STR aszMsgROFile[LG_NUM] =
	{CN("只读文件,不可修改")
	 EN("This is a read only file")},

	//404 LG_STR aszMsgReading[LG_NUM] =
	{CN("正在读取文件,请稍候...")
	 EN("Reading file...")},

	//405 LG_STR aszMsgToolModifyLim[LG_NUM] =
	{CN("加工时修调值不能超过1毫米!")
	 EN("The value can't greater then 1mm!")},

	//406 LG_STR aszNoEnoughMem[LG_NUM] =
	{CN("内存不足")
	 EN("Not enough memory!")},

	//407 LG_STR aszNumberErr[LG_NUM] =
	{CN("该数据填写有误")
	 EN("The inputted number error!")},

	//408 LG_STR aszOpenDirErr[LG_NUM] =
	{CN("U盘目录列表失败")
	 EN("Fail to list Usb directory")},

	//410 LG_STR aszPasswordChged[LG_NUM] =
	{CN("密码修改完成,请记住新密码")
	 EN("Password changed successfully")},

	//412 LG_STR aszPlcFormatErr[LG_NUM] =
	{CN("PLC文件数据格式错误")
	 EN("PLC file data error")},

	//413 LG_STR aszPlcTooLarge[LG_NUM] =
	{CN("PLC文件太大")
	 EN("PLC file too large")},

	//414 LG_STR aszPrevDirErr[LG_NUM] =
	{CN("U盘返回上级目录失败")
	 EN("Fail to return to parent Dir")},

	//415 LG_STR aszReadFail[LG_NUM] =
	{CN("读文件失败")
	 EN("Fail to read file")},

	//417 LG_STR aszTimeLimitCleared[LG_NUM] =
	{CN("清除时限完成! 请重新启动系统.")
	 EN("Time limit Cleared,please restart.")},

	//418 LG_STR aszTrialTimeLimit[LG_NUM] =
	{CN("试用期时间不能修改")
	 EN("No date modification at trial period")},

	//419 LG_STR aszUserErr[LG_NUM] =
	{CN("错误X")
	 EN("Err X")},

	//420 LG_STR aszWriteFail[LG_NUM] =
	{CN("写文件失败")
	 EN("Err:Fail to write file ")},

	//421 LG_STR aszXSaved[LG_NUM] =
	{CN("X向刀偏已保存")
	 EN("X Coor. Saved")},

	//422 LG_STR aszZSaved[LG_NUM] =
	{CN("Z向刀偏已保存")
	 EN("Z Coor. Saved")},

	//423 LG_STR aszZeroOffNot0[LG_NUM] =
	{CN("该轴零点偏置值不为0,请注意测量基准点!")
	 EN("Note:The axis value of zero offset NOT 0!")},

	//GROUP:yanghui
	//1117 LG_STR aszSize[LG_NUM] =
	{CN("大小")
	 EN("Size")},

	//1120 LG_STR aszDate[LG_NUM] =
	{CN("日期")
	 EN("Date")},

	//1120 LG_STR aszTime[LG_NUM] =
	{CN("时间")
	 EN("Time")},

	//1120 LG_STR aszModifyDate[LG_NUM] =
	{CN("修改日期")
	 EN("ModifyDate")},

	//1120 LG_STR aszNote[LG_NUM] =
	{CN("说明")
	 EN("Note")},

	//GROUP:标题
	//1121 LG_STR aszTitlePos[LG_NUM] =
	{CN("位置")
	 EN("POS")},

	//1122 LG_STR aszTitleProg[LG_NUM] =
	{CN("程序")
	 EN("PROG")},

	//1123 LG_STR aszTitleOfs[LG_NUM] =
	{CN("偏置")
	 EN("OFS")},

	//1123 LG_STR aszTitleSet[LG_NUM] =
	{CN("设置")
	 EN("SET")},

	//1124 LG_STR aszTitleSys[LG_NUM] =
	{CN("系统")
	 EN("SYSTEM")},

	//1125 LG_STR aszTitleMsg[LG_NUM] =
	{CN("信息")
	 EN("MSG")},

	//1126 LG_STR aszTitleGraph[LG_NUM] =
	{CN("图形")
	 EN("GRAPH")},

	//1126 LG_STR nszTtlPar[LG_NUM] =
	{CN("参数")
	 EN("PAR")},

	//1126 LG_STR nszTtlLad[LG_NUM] =
	{CN("梯图")
	 EN("LAD")},

	//1126 LG_STR nszTtlAlm[LG_NUM] =
	{CN("报警")
	 EN("ALM")},

	//1126 LG_STR nszTtlDgn[LG_NUM] =
	{CN("诊断")
	 EN("DGN")},

	//1126 LG_STR nszTtlUsr[LG_NUM] =
	{CN("用户")
	 EN("USR")},

	//1127 LG_STR aszProgPreview[LG_NUM] =
	{CN("程序预览")
	 EN("Program Preview")},

	//1128 LG_STR aszMemInfo[LG_NUM] =
	{CN("存储信息")
	 EN("Memory Information")},

	//1129 LG_STR aszUsedSpace[LG_NUM] =
	{CN("已用空间")
	 EN("Used Space")},

	//1130 LG_STR aszBtnSelExec[LG_NUM] =
	{CN("选择\n执行")
	 EN("Sel.\nExec")},

    //GROUP:PJS
	//1131 LG_STR aszType[LG_NUM] =
	{CN("类型")
	 EN("Type")},

	//1132 LG_STR aszCode[LG_NUM] =
	{CN("代码")
	 EN("Code")},

	//1137 LG_STR aszBtnHostDiag[LG_NUM] =
	{CN("主站诊断")
	 EN("Host Diag")},

	//1138 LG_STR aszBtnSlaveDiag[LG_NUM] =
	{CN("从站诊断")
	 EN("Slave Diag")},

	//1139 LG_STR aszMonday[LG_NUM] =
	{CN("一")
	 EN("Monday")},

	//1140 LG_STR aszTuesday[LG_NUM] =
	{CN("二")
	 EN("Tuesday")},

	//1141 LG_STR aszWednesday[LG_NUM] =
	{CN("三")
	 EN("Wednesday")},

	//1142 LG_STR aszThursday[LG_NUM] =
	{CN("四")
	 EN("Thursday")},

	//1143 LG_STR aszFriday[LG_NUM] =
	{CN("五")
	 EN("Friday")},

	//1144 LG_STR aszSaturday[LG_NUM] =
	{CN("六")
	 EN("Saturday")},

	//1145 LG_STR aszSunday[LG_NUM] =
	{CN("日")
	 EN("Sunday")},

	//1146 LG_STR aszJanuary[LG_NUM] =
	{CN("  一月")
	 EN("January")},

	//1147 LG_STR aszFebruary[LG_NUM] =
	{CN("  二月")
	 EN("February")},

	//1148 LG_STR aszMarch[LG_NUM] =
	{CN("  三月")
	 EN("March")},

	//1149 LG_STR aszApril[LG_NUM] =
	{CN("  四月")
	 EN("April")},

	//1150 LG_STR aszMay[LG_NUM] =
	{CN("  五月")
	 EN("March")},

	//1151 LG_STR aszJune[LG_NUM] =
	{CN("  六月")
	 EN("June")},

	//1152 LG_STR aszJuly[LG_NUM] =
	{CN("  七月")
	 EN("July")},

	//1153 LG_STR aszAugust[LG_NUM] =
	{CN("  八月")
	 EN("August")},

	//1154 LG_STR aszSeptember[LG_NUM] =
	{CN("  九月")
	 EN("September")},

	//1155 LG_STR aszOctober[LG_NUM] =
	{CN("  十月")
	 EN("October")},

	//1156 LG_STR aszNovember[LG_NUM] =
	{CN("十一月")
	 EN("November")},

	//1157 LG_STR aszDecember[LG_NUM] =
	{CN("十二月")
	 EN("December")},

	//1158 LG_STR aszPrevYear[LG_NUM] =
	{CN("上一年")
	 EN("PrevYear")},

	//1159 LG_STR aszNextYear[LG_NUM] =
	{CN("下一年")
	 EN("NextYear")},

	//1160 LG_STR aszPrevMonth[LG_NUM] =
	{CN("前一月")
	 EN("PrevMonth")},

	//1161 LG_STR aszNextMonth[LG_NUM] =
	{CN("后一月")
	 EN("NextMonth")},

	//1162 LG_STR aszToday[LG_NUM] =
	{CN("今天")
	 EN("Todya")},

	//1163 LG_STR aszNow[LG_NUM] =
	{CN("当前时间")
	 EN("Back to Now")},

	//1164 LG_STR aszSetDate[LG_NUM] =
	{CN("设置日期")
	 EN("SetDate")},

	//1165 LG_STR aszSetTime[LG_NUM] =
	{CN("设置时间")
	 EN("SetTime")},

	//1166 LG_STR aszX[LG_NUM] =
	{CN("X")
	 EN("X")},

	//1167 LG_STR aszY[LG_NUM] =
	{CN("Y")
	 EN("Y")},

	//1168 LG_STR aszZ[LG_NUM] =
	{CN("Z")
	 EN("Z")},

	//1169 LG_STR aszR[LG_NUM] =
	{CN("R")
	 EN("R")},

	//1170 LG_STR aszTip[LG_NUM] =
	{CN("T")
	 EN("T")},

	//LG_STR aszBtnAxisPrm[LG_NUM] =
	{CN("轴设置")
	EN("Axis Set")},

	//LG_STR aszBtnBusDev[LG_NUM] =
	{CN("总线设备")
	EN("Bus Dev.")},

	//LG_STR aszTvCheck[LG_NUM]	=
	{CN("奇偶校验(1:开  0:关)")
	  EN("Tv Check(1:ON  0:OFF")},

	//LG_STR aszInputUnit[LG_NUM]	=
	{CN("公英制编程(1:英制  0:公制)")
	  EN("Input Unit(1:INCH  0:MM")},

	//LG_STR aszSequenceNo[LG_NUM]	=
	{CN("自动序号(1:开  0:关)")
	  EN("Sequence No(1:ON  0:OFF")},

	//LG_STR aszPrmWrite[LG_NUM]  =
	{CN("参数开关(1:开  0:关)")
	  EN("Parameter Write(1:Enable  0:Disable")},

	//LG_STR aszProgWrite[LG_NUM] =
	{CN("程序开关(1:开  0:关)")
	  EN("Program Write(1:Enable  0:Disable")},

	//LG_STR aszPassWordSet[LG_NUM] =
	{CN("密码修改")
	EN("PassWord CHG")},

	  //LG_STR aszProtestLevel[LG_NUM] =
	{CN("保护级别")
	  EN("Protest Level")},

	//LG_STR aszPassWordLevel[LG_NUM] =
	{CN("密码等级:")
	  EN("PassWord Level:")},

	  //LG_STR aszLevel[4][LG_NUM] =
	{CN("0级密码")
	EN("0 Level:")},

	{CN("1级密码")
	EN("1 Level:")},

	{CN("2级密码")
	EN("2 Level:")},

	{CN("3级密码")
	EN("3 Level:")},

    //LG_STR aszModeSwitch[LG_NUM]
    {CN("模式切换")
    EN("MODE")},

    //LG_STR aszAxisIncStep[LG_NUM]
    {CN("各轴增量步距(mm)")
    EN("Axia inc.Step(mm)")},

    //LG_STR aszBlockSkip[LG_NUM]
    {CN("程序段跳转")
    EN("BLOCK SKIP")},

    //LG_STR aszSingleBlock[LG_NUM]
    {CN("单段")
    EN("SINGLE BLOCK")},

    //LG_STR aszMachineLock[LG_NUM]
    {CN("机床锁")
    EN("MACHINE LOCK")},

    //LG_STR aszDryRun[LG_NUM]
    {CN("空运行")
    EN("DRY RUN")},

    //LG_STR aszProtectKey[LG_NUM]
    {CN("保护键")
    EN("PROTECT KEY")},

    //LG_STR aszFeedHold[LG_NUM]
    {CN("进给保持")
    EN("FEED HOLD")},

    //GROUP:位置界面
	//1175 LG_STR aszRealVal[LG_NUM] =
	{CN("实际值")
	 EN("Real value")},

	//1176 LG_STR aszModal[LG_NUM] =
	{CN("模态")
	 EN("Modal")},

	//1176 LG_STR aszGModal[LG_NUM] =
	{CN("G码模态")
	 EN("G Modal")},

	//1177 LG_STR aszTFS[LG_NUM] =
	{CN("T,F,S")
	 EN("T,F,S")},

	//1178 LG_STR aszSetVal[LG_NUM] =
	{CN("设定值")
	 EN("Set value")},

     //1178 LG_STR aszAuxFunction[LG_NUM] =
    {CN("辅助功能")
    EN("Aux.Function")},

	//1179 LG_STR aszManu[LG_NUM] =
	{CN("手动")
	 EN("JOG")},

	//1180 LG_STR aszAuto[LG_NUM] =
	{CN("自动")
	 EN("MEM")},

	//1181 LG_STR aszMdi[LG_NUM] =
	{CN("MDI")
	 EN("MDI")},

	//1182 LG_STR aszEdit[LG_NUM] =
	{CN("编辑")
	 EN("EDT")},

     //1182 LG_STR aszDnc[LG_NUM] =
    {CN("DNC")
    EN("DNC")},

    //1182 LG_STR aszRef[LG_NUM] =
    {CN("回零")
    EN("REF")},

    //1182 LG_STR aszManuHndl[LG_NUM] =
    {CN("手脉")
    EN("HDL")},

    //1182 LG_STR aszManuInc[LG_NUM] =
    {CN("增量")
    EN("INC")},

	//GROUP:诊断界面
	//1183 LG_STR asz0[LG_NUM] =
	{CN("0")
	 EN("0")},

	//1184 LG_STR asz1[LG_NUM] =
	{CN("1")
	 EN("1")},

	//1185 LG_STR asz2[LG_NUM] =
	{CN("2")
	 EN("2")},

	//1186 LG_STR asz3[LG_NUM] =
	{CN("3")
	 EN("3")},

	//1187 LG_STR asz4[LG_NUM] =
	{CN("4")
	 EN("4")},

	//1188 LG_STR asz5[LG_NUM] =
	{CN("5")
	 EN("5")},

	//1189 LG_STR asz6[LG_NUM] =
	{CN("6")
	 EN("6")},

	//1190 LG_STR asz7[LG_NUM] =
	{CN("7")
	 EN("7")},

	//1191 LG_STR aszComment[LG_NUM] =
	{CN("注释")
	 EN("Comment")},

	//1192 LG_STR aszVersionInfo[LG_NUM] =
	{CN("版本信息")
	 EN("Ver.Info")},

	//1193 LG_STR aszBtnCommentMgr[LG_NUM] =
	{CN("注释管理")
	 EN("Comment")},

	//1194 LG_STR aszBtnFileMgr[LG_NUM] =
	{CN("文件管理")
	 EN("File Mgr")},

	//1195 LG_STR aszSymbol[LG_NUM] =
	{CN("符号")
	 EN("Symbol")},

	//1196 LG_STR aszCompanyName[LG_NUM] =
	{CN("公司名称")
	 EN("Company")},

	//1197 LG_STR aszProductName[LG_NUM] =
	{CN("产品名称")
	 EN("Product")},

	//1198 LG_STR aszVersion[LG_NUM] =
	{CN("版本")
	 EN("Version")},

	//1199 LG_STR aszRemark[LG_NUM] =
	{CN("备注")
	 EN("Remark")},

	//1200 LG_STR aszDirAddr[LG_NUM] =
	{CN("目录地址")
	 EN("DirAddr")},

	//1201 LG_STR aszImportToSys[LG_NUM] =
	{CN("导入\n到系统")
	 EN("Import\nToSys")},

	//1202 LG_STR aszExportToUsb[LG_NUM] =
	{CN("导出\n到U盘")
	 EN("Export\nToUsb")},

     //1202 LG_STR aszRST[LG_NUM] =
    {CN("复位")
    EN("RESET")},

    //1202 LG_STR nszESP[LG_NUM] =
	{CN("急停")
	 EN("ESP")},

    //1202 LG_STR nszAlarm[LG_NUM] =
	{CN("报警")
	 EN("ALM")},

	//1203 LG_STR nszAlarmPSFormat[LG_NUM] =
     {CN("O%04d程序段%d:%s")
     EN("O%d Block %d:%s")},

	//1202 LG_STR nszAlarmEPL[LG_NUM] =
	{CN("EPL通讯报警")
	 EN("EPL Communication alarm")},

    //1202 LG_STR nszAlarmEPLNoRdy[LG_NUM] =
	{CN("EPL未就绪")
	 EN("EPL not ready")},

    //1202 LG_STR nszNoRdy[LG_NUM] =
	{CN("未绪")
	 EN("NRDY")},

    //1202 LG_STR nszSvNoRdy[LG_NUM] =
	{CN("伺服未绪")
	 EN("SV NRDY")},

    //1202 LG_STR nszIONoRdy[LG_NUM] =
	{CN("IO站未绪")
	 EN("IO NRDY")},

     //1202 LG_STR aszSTL[LG_NUM] =
    {CN("运行")
    EN("STL")},

    //1202 LG_STR aszSPL[LG_NUM] =
    {CN("暂停")
    EN("SPL")},

    //1202 LG_STR aszOP[LG_NUM] =
    {CN("停止")
    EN("STP")},

    //LG_STR aszST[LG_NUM] =
    {CN("循环启动")
    EN("ST")},

    //LG_STR aszAxisInc[LG_NUM] =
    {CN("轴+")
    EN("Axis+")},

    //LG_STR aszAxisDec[LG_NUM] =
    {CN("轴-")
    EN("Axis-")},

	//LG_STR aszClearView[LG_NUM] =
	{CN("清屏")
    EN("ClearView")},

    //LG_STR aszAllAxis[LG_NUM] =
    {CN("所有轴")
    EN("AllAxis")},

    //LG_STR aszPhyStation[LG_NUM] =
    {CN("物理站号")
    EN("Phy No")},

    //LG_STR aszLogicStation[LG_NUM] =
    {CN("逻辑站号")
    EN("Logic No")},

    //LG_STR aszDevType[LG_NUM] =
    {CN("设备类型")
    EN("Dev. Type")},

    //LG_STR aszDevModelID[LG_NUM] =
    {CN("设备型号ID")
    EN("Dev. Model ID")},

    //LG_STR aszCurProg[LG_NUM] =
    {CN("当前程序")
    EN("Cur. Prog.")},

    //LG_STR aszRunStaus[LG_NUM] =
    {CN("运行状态")
    EN("Run Status")},

    //LG_STR aszCycleExec[LG_NUM] =
    {CN("执行周期")
    EN("Cycle Exec")},

    //LG_STR aszCycleMin[LG_NUM] =
    {CN("最大周期")
    EN("Cycle Min")},

    //LG_STR aszCycleMax[LG_NUM] =
    {CN("最小周期")
    EN("Cycle max")},

    //LG_STR aszCommandPC[LG_NUM] =
    {CN("指令PC")
    EN("Command PC")},
    //LG_STR aszRun[LG_NUM] =
    {CN("运行")
    EN("Run")},

    //LG_STR aszError[LG_NUM] =
    {CN("错误")
    EN("Error")},

    //LG_STR aszPlcRunStatus[LG_NUM] =
    {CN("PLC运行状态")
    EN("PLC Run Status")},

    //LG_STR aszPlcProgramStatus[LG_NUM] =
    {CN("PLC程序信息")
    EN("PLC Program Status")},

    //LG_STR aszBtnRun[LG_NUM] =
    {CN("运行")
    EN("Run")},

    //LG_STR aszBtnStop[LG_NUM] =
    {CN("停止")
    EN("Stop")},

    //LG_STR aszBtnExport[LG_NUM] =
    {CN("导出")
    EN("Export")},

    //-------------------------------------------------------------------------
    // 轴参数##AX
    //-------------------------------------------------------------------------
//0001;XYZA
	//LG_STR nszParAxisSet[9][LG_NUM] =
    {CN("各轴相关设置") //300+
    EN("Axis unit settings")},
	{CN("DIA 0/1:半径/直径编程")
    EN("DIA 0/1:radius/diameter program")},
	{CN("ROT 0/1:直线轴/旋转轴功能有效")
    EN("ROT 0/1:Straight/Rotation axis enable")},
	{CN("RRL 0/1:相对坐标不循环/以一周移动量循环")
    EN("RRL 0/1:Rel-coor. not/rounded by the amount of one rotation")},
    {CN("RABS 0/1:旋转轴绝对指令不就近/就近旋转")
    EN("RABS 0/1:Rotation axis abs-command Rotate in not/short path")},
    {CN("RABG 0/1:旋转轴绝对指令移动方向按相对值/按指令符号")
    EN("RABG 0/1:Rotation axis abs-command Rotate-dir in rel-position/sign")},
    {CN("RABM 0/1:旋转轴绝对指令移动量不进行/进行一周取模")
    EN("RABM 0/1:Rotation axis abs-command move-dist not/modulo with one rotation")},
	{CN("")
	EN("")},
	{CN("HID 0/1:坐标轴显示/不显示")
    EN("HID 0/1:Axis show/hide")},
//0002;XYZA
	//LG_STR nszParServoSet[9][LG_NUM] =
	{CN("伺服/电机控制相关设置")
	EN("Servo/Motor settings")},
	{CN("SVAC 0/1:伺服报警为常开/常闭")
    EN("SVAC 0/1:Servo alarm is normal open/close")},
	{CN("SSS 0/1:不/开放S型后速度平滑功能")
	EN("SSS 0/1:Disable/Enable S curve post-speed-smooth")},
	{CN("MD 0/1:电机移动方向正/负")
	EN("MD 0/1:motor move forward/backward")},
	{CN("JD 0/1:手动移动方向正/负(内置PLC时有效)")
    EN("JD 0/1:Jog move forward/backward(Embeded)")},
	{CN("SVPT 0/1:伺服为方向+脉冲/AB脉冲")
    EN("SVPT 0/1:Dir+pulse/AB pulse signal for servo")},
	{CN("GREX 0/1:指令电子齿轮比不/使用扩展模式")
	EN("GREX 0/1:Command Elec-gear not/use extand mode")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0003;XYZA
	//LG_STR nszParFbServoSet[9][LG_NUM] =
	{CN("伺服/电机反馈相关设置")
	EN("Servo/Motor feedback settings")},
	{CN("MFD 0/1:电机反馈方向正/负")
	EN("MFD 0/1:motor feedback forward/backward")},
	{CN("FGE 0/1:不/使用反馈齿轮比")
    EN("FGE 0/1:Disable/enable feedback Gear Ratio")},
	{CN("FIPC 位置到位检测时,检测反馈位置/指令位置")
	EN("FIPC 0/1:Check feedback/command position when In-position checking")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

//0012;XYZA
	//LG_STR nszParAxisName[LG_NUM] =
	{CN("各轴轴名称(1~3:XYZ,4~6:ABC,101:X1,165:XA)")
	EN("Axis name(1~3:XYZ,4~6:ABC)")},
//0013;XYZA
     //LG_STR nszParAxisFixPt[LG_NUM] =
    {CN("各轴小数点位数")
     EN("Axis float point number")},
//0014;XYZA
    //LG_STR nszParAxisPhyNo[LG_NUM] =
	{CN("各轴轴地址编号(物理编号)")
    EN("Axis physical address no.")},
//0034;XYZA
    //LG_STR nszParAxisPulseEncFbPort[LG_NUM] =
	{CN("各轴脉冲编码器反馈口(非总线轴有效)")
    EN("Axis pulse encoder feedback port(Not bus axis)")},
//0022;XYZA
    //LG_STR nszParAxisMotorCmdPulseRes[LG_NUM] =
	{CN("各轴电机一圈指令脉冲数")
    EN("Axis motor command pulse of a circle")},
//0032;XYZA
    //LG_STR nszParAxisEncCircleRes[LG_NUM] =
	{CN("各轴电机一圈反馈脉冲数")
    EN("Axis motor feedback pulse of a circle")},

    //LG_STR nszParAxisSVFbRounds[LG_NUM] =
	{CN("各轴伺服反馈循环圈数(0:不循环直到溢出)")
    EN("Axis servo feedback cycle rounds(0:overflow)")},

    //LG_STR nszParAxisRotFbRes[LG_NUM] =
	{CN("各轴(旋转轴时)反馈位置循环分辨率")
    EN("Rotation axis feedback resolution")},
//0016;XYZA
    //LG_STR nszParBasicAxisType[LG_NUM] =
	{CN("各轴在基本坐标系下的坐标轴")
    EN("Setting of each axis in the basic coordinate")},

    //1200+
	//LG_STR nszParMaxJogF[LG_NUM] =
	{CN("手动最大速度")
	EN("Max. Jog Feed")},
//0110;XYZA
	//LG_STR aszrRapidF[LG_NUM] =
	{CN("G00快速速度(mm/min)")
	EN("G00 rapid feed(mm/min)")},
//0111;XYZA
	//LG_STR aszrRapidF0[LG_NUM] =
	{CN("G00快速F0档速度(mm/min)")
	EN("G00 rapid feed F0(mm/min)")},
//0113;XYZA
	//LG_STR nszParRapidFL[LG_NUM] =
	{CN("G00快速加减速时的低速FL(mm/min)")
	EN("G00 rapid acc./dec low feed FL(mm/min)")},
//0122;XYZA
	//LG_STR nszParAxisCutTimeCnst[LG_NUM] =
	{CN("各轴切削加减速时间常数(ms)")
	EN("Axis cut time const(ms)")},
//0132;XYZA
    //LG_STR nszParJogTimeCnst[LG_NUM] =
    {CN("手动进给加减速时间常数(ms)")
     EN("Acc./dec. time constant In Jog(ms)")},
//0125;XYZA
	//LG_STR nszrDryRunF[LG_NUM] =
	{CN("空运行速度(mm/min)")
	EN("Dry run feed(mm/min)")},
//0120;XYZA
	//LG_STR aszrCutF[LG_NUM] =
	{CN("切削速度上限(mm/min)")
	EN("Cut max feed(mm/min)")},
//0131;XYZA
	//LG_STR aszrRapidJogF[LG_NUM] =
	{CN("手动快速速度(mm/min)")
	EN("Jog rapid feed(mm/min)")},
//0130;XYZA
	//LG_STR aszrJogF[LG_NUM] =
	{CN("手动速度(mm/min)")
	EN("Jog Feed(mm/min)")},
//0133;XYZA
	//LG_STR aszrJogFL[LG_NUM] =
	{CN("手动加减速时的低速FL(mm/min)")
	EN("Jog Acc./dec low feed FL(mm/min)")},

	//LG_STR nszParCutFL[LG_NUM] =
	{CN("切削加减速时的低速FL(mm/min)")
	EN("Cut Acc./dec low feed FL(mm/min)")},
//0123;XYZA
    //LG_STR nszParFeedOvMax[LG_NUM] =
    {CN("自动切削倍率输入上限")
     EN("Feed override max")},

	//LG_STR aszrAxisCutF[LG_NUM] =
	{CN("各轴最大切削速度(mm/min)")
	EN("Cut feed of axis(mm/min)")},
//0112;XYZA
	//LG_STR aszwRapidTimeCnst[LG_NUM] =
	{CN("G00快速加减速时间常数(ms)")
	EN("G00 rapid time const(ms)")},
//0114;XYZA
	//LG_STR aszwRapidJerkTime[LG_NUM] =
	{CN("G00快速加加速时间(ms)")
	EN("G00 rapid jerk time(ms)")},
//0121;XYZA
	//LG_STR aszwCutTimeCnst[LG_NUM] =
	{CN("切削加减速时间常数(ms)")
	EN("Cut feed time const(ms)")},
//0140;XYZA
    //LG_STR nszParRotAxisSpeedRatio[LG_NUM] =
    {CN("旋转轴速度增减速系数")
     EN("Rotation axis speed ratio")},
//0141;XYZA
    //LG_STR nszParSCurvePostSpeedSmoothRatio[LG_NUM] =
    {CN("S型后速度平滑系数")
     EN("S-Curve post-speed-smooth ratio")},
//0020;XYZA
	//LG_STR nszParAxisCMR[LG_NUM] =
	{CN("各轴指令电子齿轮比倍乘系数(从动轮侧齿数)")
	EN("Axis CMR(slave gear)")},
//0021;XYZA
	//LG_STR nszParAxisCMD[LG_NUM] =
	{CN("各轴指令电子齿轮比分频系数(电机侧齿数)")
	EN("Axis CMD(motor gear))")},
//0030;XYZA
	//LG_STR nszParAxisMulFb[LG_NUM] =
	{CN("各轴反馈输入倍乘系数(编码器侧齿数)")
	EN("Axis feedback multiplier(encoder gear)")},
//0031;XYZA
	//LG_STR nszParAxisDivFb[LG_NUM] =
	{CN("各轴反馈输入分频系数(从动轴侧齿数)")
	EN("Axis feedback divisor(slave gear)")},
//0060;XYZA
    //LG_STR nszParDAlmDI[LG_NUM] =
    {CN("各轴伺服报警输入口")
    EN("Servo alarm input port")},
//0061;XYZA
    //LG_STR nszParDEnableDO[LG_NUM] =
    {CN("各轴伺服使能输出口")
    EN("Servo Enable output port")},
//0062;XYZA
    //LG_STR nszParDEnableP[LG_NUM] =
	{CN("各轴使能打开或关闭指令的P编号")
	EN("Servo Enable or disable command P No.")},
//0063;XYZA
    //LG_STR nszParMBrakeDO[LG_NUM] =
    {CN("各轴电机开抱闸输出口")
    EN("Axis brake-off output port")},
//0064;XYZA
    //LG_STR nszParCoorSetupDlyTime[LG_NUM] =
    {CN("各轴伺服使能时,坐标建立延时(ms)")
    EN("Axis coordinate setup delay when servo-on from enable")},
//0065;XYZA
    //LG_STR nszParMBrakeDlyTime[LG_NUM] =
    {CN("各轴伺服使能到开抱闸延时(ms)")
    EN("Axis brake-off delay from enable")},
//0050;XYZA
    //LG_STR nszParAxisPosLoopGain[LG_NUM] =
    {CN("各轴伺服位置环增益(KP)(1/s)")
    EN("Axis servo position loop gain(KP)(1/s)")},
//0070;XYZA
    //LG_STR nszParRpdInPosDist[LG_NUM] =
    {CN("各轴G00到位检测距离")
    EN("Axis G00 in-position-dist")},
//0071;XYZA
    //LG_STR nszParCutInPosDist[LG_NUM] =
    {CN("各轴切削到位检测距离")
    EN("Axis cut in-position-dist")},

    //LG_STR nszParMaxLoad[LG_NUM] =
    {CN("各轴最大负载上限")
    EN("Axis max load limit")},
//0073;XYZA
    //LG_STR nszParCutLoadMax[LG_NUM] =
    {CN("各轴切削时的负载上限")
    EN("Axis cut load max")},
//0074;XYZA
    //LG_STR nszParLoadMaxTime[LG_NUM] =
    {CN("各轴到达负载上限最大时间(ms)")
    EN("Axis cut load max time(ms)")},

    //-------------------------------------------------------------------------
    // 螺距/间隙补偿##COMPS
    //-------------------------------------------------------------------------
//0200;1
    //LG_STR nszParCompNcSet[9][LG_NUM] =
    {CN("螺距/间隙补偿系统设置")
    EN("Pitch error/Gap compensation Nc settings")},
    {CN("UPIM 0/1:螺距补偿导入单位为um/mm")
	EN("UPIM 0/1:Pitch compensation unit is um/mm")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0201;XYZA
    //LG_STR nszParCompAxisSet[9][LG_NUM] =
    {CN("反向间隙补偿/螺距补偿各轴设置")
     EN("Pitch error/Gap compensation axis settings")},
    {CN("GAP 0/1:反向间隙补偿关闭/打开")
    EN("GAP 0/1:Gap compensation disable/enable")},
	{CN("PEC 0/1:螺距补偿关闭/打开")
    EN("PEC 0/1:Pitch error compensation disable/enable")},
	{CN("PCER 0/1:螺距误差补偿上电有效/回零后有效")
	EN("PCER 0/1:Pitch error compensation effective when power-on/zero return")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0210;XYZA
    //LG_STR nszParGapCompVal[LG_NUM] =
    {CN("反向间隙补偿量(mm)")
     EN("Gap compensation value(mm)")},
//0211;XYZA
    //LG_STR nszParGapCompMaxF[LG_NUM] =
    {CN("反向间隙速度上限")
     EN("Gap compensation max feed")},
//0213;XYZA
    //LG_STR nszParGapCompFL[LG_NUM] =
    {CN("反向间隙加速时的起始速度FL")
     EN("Gap compensation start feed")},
//0212;XYZA
    //LG_STR nszParGapCompTCnst[LG_NUM] =
    {CN("反向间隙加减速时间常数(ms)")
     EN("Gap compensation time constant(ms)")},
//0220;XYZA
    //LG_STR nszParPitchCompNoRef[LG_NUM] =
    {CN("参考点的螺距补偿点号")
     EN("Ref-position pitch compensation number")},
//0221;XYZA
    //LG_STR nszParPitchCompNoSmallest[LG_NUM] =
    {CN("最小位置的螺距补偿点号")
     EN("Smallest pitch compensation position number")},
//0222;XYZA
    //LG_STR nszParPitchCompNoLargest[LG_NUM] =
    {CN("最大位置的螺距补偿点号")
     EN("Largest pitch compensation position number")},
//0224;XYZA
    //LG_STR nszParPitchCompInterval[LG_NUM] =
    {CN("螺距补偿补偿点间隔距离")
     EN("Interval between pitch error compensation positions")},
//0223;XYZA
    //LG_STR nszParPitchCompRatio[LG_NUM] =
    {CN("螺距补偿补偿倍率百分比")
     EN("Pitch Compensation ratio percent")},
//0225;XYZA
    //LG_STR nszParPitchCompMaxF[LG_NUM] =
    {CN("螺距补偿速度上限")
     EN("Pitch compensation max feed")},
//0227;XYZA
    //LG_STR nszParPitchCompFL[LG_NUM] =
    {CN("螺距补偿起始速度FL")
     EN("Pitch compensation start feed")},
//0226;XYZA
    //LG_STR nszParPitchCompTCnst[LG_NUM] =
    {CN("螺距补偿加减速时间常数(ms)")
     EN("Pitch compensation time constant(ms)")},

    //-------------------------------------------------------------------------
    // 回零##REF ##HOME
    //-------------------------------------------------------------------------
//0300;XYZA
	//LG_STR nszParChnRefSet[9][LG_NUM] =
    {CN("回零相关设置")
    EN("Zero return settings")},
	{CN("MZ1 0/1:手动回零1键回零/需连续按键")
    EN("MZ1 0/1:Manual zero return one press/press continuously")},
	{CN("NWZ 0/1:回零后,使用G54~G59工件坐标系/不使用(使用坐标系相关参数)")
    EN("NWZ 0/1:Use/not use G54~G59 Coor. system when home finish")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0400;XYZA
	//LG_STR nszParCoorSysSet[9][LG_NUM] =
	{CN("坐标系相关设置")
	EN("coor. settings")},
	{CN("PZSW 0/1:上电时,用掉电前坐标系/G54坐标系建立工件坐标")
	EN("PZSW 0/1:Use power-off coor. system/G54 coor.sys setup work coor.")},
	{CN("")
	EN("")},
	{CN("GOFS 0/1:使用/不能使用G92或G50偏置")
    EN("GOFS 0/1:Use/not use G92 or G50")},
	{CN("RLC 0/1:复位不清除/清除G52")
    EN("RLC 0/1:No clear/clear G52 when RESET")},
	{CN("FLC 0/1:M30或M02时不清除/清除G52")
	EN("FLC 0/1:No clear/clear G52 when M30 or M02")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0302;XYZA
	//LG_STR nszParAxisRefSet[9][LG_NUM] =
    {CN("各轴回零相关设置")
    EN("Axis zero return settings")},
	{CN("ZEN 0/1:回零功能无效/有效")
    EN("ZEN 0/1:Disable/Enable axis zero return")},
	{CN("ANZ 0/1:首次自动运行不需要/需要回零")
    EN("ANZ 0/1:No /need zero return when auto run first")},
	{CN("ZDR 0/1:正向/负向回零")
	EN("ZDR 0/1:Zero return direction")},
	{CN("ZSC 0/1:回零减速开关为常开/常闭")
    EN("ZSC 0/1:DEC signal is normal open/close")},
	{CN("ZSR 0/1:回零后相对坐标不清零/清零")
    EN("ZSR 0/1:")},
	{CN("ZSA 0/1:回零后绝对坐标系清零/建立")
	EN("ZSA")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0310;XYZA
	//LG_STR nszParRefType[LG_NUM] =
	{CN("各轴回零方式(0:A,1:B,2:C,3:D)")
	EN("Home type(0:A,1:B,2:C,3:D)")},
//0311;XYZA
	//LG_STR nszParRefF[LG_NUM] =
	{CN("各轴回零快速速度(mm/min)")
	EN("Home rapid feed(mm/min)")},
//0313;XYZA
	//LG_STR nszParRefFL[LG_NUM] =
	{CN("各轴回零加减速时的低速FL(mm/min)")
	EN("Home low feed(mm/min)")},
//0312;XYZA
	//LG_STR nszParRefTimeCnst[LG_NUM] =
	{CN("各轴回零加减速时间常数(ms)")
	EN("Axis Home time const(ms)")},

	//LG_STR nszParRefPosCoor[LG_NUM] =
	{CN("参考点机床机床坐标")
	EN("value of the ref. machine position")},
//0411;XYZA
	//LG_STR nszParRefPosCoor2[LG_NUM] =
	{CN("第二参考点机床坐标")
	EN("value of the 2 ref. machine position")},
//0412;XYZA
	//LG_STR nszParRefPosCoor3[LG_NUM] =
	{CN("第三参考点机床坐标")
	EN("value of the 3 ref. machine position")},
//0413;XYZA
	//LG_STR nszParRefPosCoor4[LG_NUM] =
	{CN("第四参考点机床坐标")
	EN("value of the 4 ref. machine position")},
//0410;XYZA
	//LG_STR nszParRefPosAbs[LG_NUM] =
	{CN("各轴回零后自动设定的绝对坐标值")
	EN("ref. postion Absolute Coor.")},
//0023;XYZA
	//LG_STR nszParAxisLeadLen[LG_NUM] =
	{CN("各轴作为直线轴时,丝杆导程")
	EN("Axis screw lead when linear axis")},
//0024;XYZA
	//LG_STR nszParAxisRotAmount[LG_NUM] =
	{CN("各轴作为旋转轴时,一周移动量")
	EN("Move amount of one rotation when rotation axis")},
//0025;XYZA
	//LG_STR nszParAxisSpeedMax[LG_NUM] =
	{CN("各轴电机转速上限(rpm)")
	EN("Axis motor rotate speed max(rpm)")},
//0314;XYZA
    //LG_STR nszParDecDI[LG_NUM] =
    {CN("各轴回零减速开关输入口")
    EN("Home Dec. input port")},
//0320;XYZA
    //LG_STR nszParDecToPcMin[LG_NUM] =
    {CN("各轴减速开关到零点最小距离")
    EN("Distance from DEC to PC min.")},
//0321;XYZA
    //LG_STR nszParDecToPcMax[LG_NUM] =
    {CN("各轴减速开关到零点最大距离")
    EN("Distance from DEC to PC max.")},

    //-------------------------------------------------------------------------
    //限位 ##LIM ##500+
    //-------------------------------------------------------------------------
	//LG_STR nszParLimSet[9][LG_NUM] =
	{CN("限位相关设置")
	EN("position limit setting")},
	{CN("PCL 0/1:不/开放移动前软限位检测")
    EN("PCL 0/1:Disable/Enable software position limit check before movement")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0501;XYZA
	//LG_STR nszParAxisLimSet[9][LG_NUM] =
	{CN("各轴限位设置")
	EN("Axes position limit setting")},
	{CN("SLM1 0/1:第1软件限位功能无效/有效")
	EN("SLM1 0/1:Software position limit 1 disable/enable")},
	{CN("HLM 0/1:关闭/打开硬件限位功能")
	EN("HLM 0/1:Close/Open hardware position limit")},
	{CN("SLMZ 0/1:回零时,软限位无效/有效")
	EN("SLMZ 0/1:Softare position limit disable/enable when home")},
	{CN("HLMZ 0/1:回零时,硬限位无效/有效")
    EN("HLMZ 0/1:Hardware position limit disable/enable when home")},
	{CN("SLWC 0/1:用机床/工件坐标进行软限位")
	EN("SLWC 0/1:Use machine/work coor. for soft. limit")},
	{CN("")
	EN("")},
	{CN("PHLC 0/1:正向硬件限位为常开/常闭")
	EN("PHLC 0/1:Positive hard limit open/close type")},
	{CN("NHLC 0/1:负向硬件限位为常开/常闭")
	EN("PHLC 0/1:Negtive hard limit open/close type")},
//0502;XYZA
	//LG_STR nszParAxisLimSwSet[9][LG_NUM] =
	{CN("各轴软限位开关设置")
	EN("Axes position limit switch setting")},
	{CN("SLM2 0/1:第2软件限位功能无效/有效")
	EN("SLM2 0/1:Software position limit 2 disable/enable")},
	{CN("SLM3 0/1:第3软件限位功能无效/有效")
	EN("SLM3 0/1:Software position limit 3 disable/enable")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0503;1
	//LG_STR nszParAxisLimCtrlSet[9][LG_NUM] =
	{CN("软限位控制相关设置")
	EN("position limit control setting")},
	{CN("PSLM 0/1:移动前软限位检查关闭/开放")
	EN("PSLM 0/1:Software position limit check before movement OFF/ON")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0510;XYZA
	//LG_STR nszParPosSoftLim1[LG_NUM] =
	{CN("正向软限位坐标1")
	EN("Positive soft limit positon 1")},
//0511;XYZA
	//LG_STR nszParNegSoftLim1[LG_NUM] =
	{CN("负向软限位坐标1")
	EN("Negtive soft limit positon 1")},
//0512;XYZA
    //LG_STR nszParPosSoftLim2[LG_NUM] =
	{CN("正向软限位坐标2")
	EN("Positive soft limit positon 2")},
//0513;XYZA
	//LG_STR nszParNegSoftLim2[LG_NUM] =
	{CN("负向软限位坐标2")
	EN("Negtive soft limit positon 2")},
//0514;XYZA
    //LG_STR nszParPosSoftLim3[LG_NUM] =
	{CN("正向软限位坐标3")
	EN("Positive soft limit positon 3")},
//0515;XYZA
	//LG_STR nszParNegSoftLim3[LG_NUM] =
	{CN("负向软限位坐标3")
	EN("Negtive soft limit positon 3")},
//0520;XYZA
    //LG_STR nszParPHardLimDI[LG_NUM] =
    {CN("正向硬限位输入口")
    EN("Positive position limit input port")},
//0521;XYZA
    //LG_STR nszParNHardLimDI[LG_NUM] =
    {CN("负向硬限位输入口")
    EN("Negtive position limit input port")},

	//LG_STR nszParChnUnit[9][LG_NUM] =
    {CN("单位相关设置")
    EN("Unit settings")},
    {CN("INM")
    EN("INM")},
    {CN("INI")
    EN("INI")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},

    //-------------------------------------------------------------------------
     // 主轴参数##SP ##400
    //-------------------------------------------------------------------------
//1000;123
    //LG_STR nszParSpdlsSet[9][LG_NUM] =
    {CN("主轴相关通道设置")
     EN("Spindles settings")},
	{CN("保留")
    EN("RSV")},
	{CN("SCSU 0/1:USER1键用作其他/用作主轴1速度位置切换")
	EN("SCSU 0/1:USER1 key User define/use as spindl CS swich")},
	{CN("SISO 0/1:主轴点动键用作主轴1点动/准停")
	EN("SISO 0/1:spindle INC key no/use as SOR")},
	{CN("SPNE 0/1:通道内多主轴功能无效/有效")
	EN("SPNE 0/1:Multiple spindle disable/enable")},
	{CN("CTSA 0/1:切削加工时,不检测/检测主轴转速到达")
	EN("CTSA 0/1:No/detect spdinle speed arrive when cutting")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1001;123
    //LG_STR nszParEachSpdlSet[9][LG_NUM] =
    {CN("各主轴相关设置")
     EN("Spindle settings")},
    {CN("SSRV 0/1:速度脉冲方向(或总线),正向/反向")
    EN("SSRV 0/1:Speed pulse dir(or bus mode), positive/negtive")},
	{CN("保留")
	EN("RSV")},
	{CN("SSTR 0/1:星三角启动功能关闭/打开")
    EN("SSTR 0/1:Star-Triangle start off/on")},
	{CN("SSTCE 0/1:主轴启动时,不/检测实际转速已到达")
	EN("SSTCE 0/1:NO/Check actual speed arriving when spindle start")},
	{CN("SSPCE 0/1:主轴停止时,不/检测实际转速到达停止转速")
	EN("SSPCE 0/1:NO/Check actual speed stop when spindle stop")},
	{CN("SSAH 0/1:主轴停止时,模拟量输出不保持/保持")
	EN("SSAH 0/1:NO/Hold analog output when spindle stop")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1002;123
	//LG_STR nszParSpdlInterlockSet[9][LG_NUM] =
	{CN("主轴互锁相关设置")
	EN("Spindle lock settings")},
	{CN("SPQP 0/1:主轴启动时,不检测/检测"CHUNK_CN"夹紧")
    EN("SPQP 0/1:Not/detect chuck when spindle start")},
	{CN("SPTS 0/1:主轴启动时,不检测/检测尾座进")
	EN("SPTS 0/1:Not/detect tailstock when spindle start")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1003;123
    //LG_STR nszParSpdlFbSet[9][LG_NUM] =
    {CN("各主轴/伺服反馈和输入相关设置")
     EN("Spindle feedback settings")},
	{CN("SEFD 0/1:主轴编码器反馈方向正/负")
	EN("SEFD 0/1:spindle encoder feedback forward/backward")},
	{CN("SALC 0/1:主轴报警为常开/常闭")
    EN("SALC 0/1:Spindle alarm signal is normal open/close")},
	{CN("SPCC 0/1:主轴位置模式完成为常开/常闭")
	EN("SPCC 0/1:position mode is normal open/close")},
	{CN("SPSC 0/1:主轴速度模式完成为常开/常闭")
	EN("SPSC 0/1:speed mode is normal open/close")},
	{CN("SORL 0/1:主轴准停完成为常开/常闭")
	EN("SORL 0/1:orientation is normal open/close")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("SCEZ 0/1:总线式主轴,不检测/检测零信号(需伺服支持)")
    EN("SCEZ 0/1:Bus spindle,NO/Check zero signal(Need servo support)")},
//1004;123
    //LG_STR nszParSpdlCsSet[9][LG_NUM] =
    {CN("各主轴速度/位置相关设置")
     EN("Spindle C/S settings")},
	{CN("SCPO 0/1:主轴上电时处于速度/位置模式")
	EN("SCPO 0/1:In speed/position mode when power-on")},
	{CN("SCCP 0/1:主轴位置模式完成后不/设置坐标")
	EN("SCCP 0/1:No/Set coor. when CS position mode finish")},
	{CN("SPAZ 0/1:主轴位置方式下旋转停止时,不/停止在坐标0位置")
	EN("SPAZ 0/1:NO/Stop at SOR postion when spindle rotation stop in postion mode")},
	{CN("SCOP 0/1:主轴第一次位置模式时,不/执行主轴准停")
	EN("SCOP 0/1:No/Execute orientation when CS position mode first time")},
	{CN("SCOR 0/1:主轴每次位置模式时,不/执行主轴准停")
	EN("SCOR 0/1:No/Execute orientation when CS position mode every time")},
	{CN("CSRS 0/1:主轴位置模式复位时,不/切换到速度模式")
	EN("CSRS 0/1:No/change to speed mode when CS position mode RESET")},
	{CN("CSPFR 0/1:主轴位置模式时,不/阻止主轴正反转指令")
	EN("CSPFR 0/1:Can/Can't execute rotate command when CS position mode")},
	{CN("")
	EN("")},
//1005;1
    //LG_STR nszParSpdlORSet[9][LG_NUM] =
    {CN("各主轴准停相关设置")
     EN("Spindle orientation settings")},
	{CN("SORC 0/1:主轴准停完成后不/设置坐标")
	EN("SORC 0/1:No/Set coor. when orientation finish")},
	{CN("SORRS 0/1:主轴准停复位时,不/关闭准停输出")
	EN("SORRS 0/1:No/Close orientation output when orientation RESET")},
	{CN("SORWS 0/1:主轴准停时,不等待/先等待主轴停止完成")
	EN("SORWS 0/1:No/Wait spindle stop finish when orientation")},
	{CN("SORWE 0/1:主轴准停时,不等待/先等待主轴编码器停止")
	EN("SORWE 0/1:No/Wait spindle encoder stop finish when orientation")},
	{CN("SORP 0/1:主轴准停输出为电平/脉冲信号")
	EN("SORK 0/1:orientation output is level/pulse")},
	{CN("SORQS 0/1:主轴准停时,正常停主轴/快速模式")
	EN("SORQS 0/1:Stop spdindle normally/stop quickly finish when orientation")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1100;123
    //LG_STR nszParSpdlLockSet[9][LG_NUM] =
    {CN("各主轴锁住相关设置")
     EN("Spindle Lock settings")},
	{CN("SLKPO 0/1:主轴上电时处于松开/锁紧状态")
	EN("SLKPO 0/1:Spindle unlock/lock when power-on")},
	{CN("RSTSL 0/1:复位时,主轴不松开/松开")
	EN("RSTSL 0/1:NO/unclamp when RESET")},
	{CN("M30SL 0/1:M30时,主轴不松开/松开")
	EN("M30SL 0/1:NO/unclamp when M30")},
	{CN("SURA 0/1:主轴定位时,不/自动松开锁紧")
	EN("SLKRA 0/1:No/auto-Unlock-Lock when spindle rapid locate")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

	//LG_STR nszParSpdlChn[LG_NUM] =
	{CN("各主轴所属通道号")
	EN("Channel of spindle")},
//1011;123
    //LG_STR nszParSpdlType[LG_NUM] =
    {CN("各主轴类型(0:速度(DA或脉冲),1:定速换挡,2:位置,3:CS伺服主轴)")
    EN("Spindle type(0:Speed(DA OR pulse),1:Gear shift,2:Position,3:CS Spindle)")},
//1012;123
	//LG_STR nszParSpdlDAPhyNo[LG_NUM] =
	{CN("主轴速度控制时的输出地址编号(DA或脉冲信号的物理编号)")
	EN("Phy No. of spindle in speed mode(DA OR pulse)")},
//1013;123
	//LG_STR nszParSpdlCsAxisNo[LG_NUM] =
	{CN("主轴位置控制时的轴号(通道内)")
	EN("Axis No. of spindle in position mode")},
//1014;123
    //LG_STR nszParSpdlEncoderPhyNo[LG_NUM] =
    {CN("主轴编码器输入地址编号(物理编号)")
     EN("physical addr of spindle encoder")},
//1015;123
    //LG_STR nszParEncRes[LG_NUM] =
    {CN("编码器线数")
     EN("Resolution of spindle encoder")},
//1020;123
    //LG_STR nszParEncMul[LG_NUM] =
    {CN("编码器电子齿轮比,编码器侧齿数")
     EN("spindle encoder ratio,encoder gear num.")},
//1021;123
    //LG_STR nszParEncDiv[LG_NUM] =
    {CN("编码器电子齿轮比,主轴侧齿数")
     EN("spindle encoder ratio,spdindle gear num")},

    //LG_STR nszParSpdlADOfs[LG_NUM] =
    {CN("主轴模拟输出的电压的补偿量")
     EN("Offset value for spindle analog")},
//1025;123
    //LG_STR nszParMaxSpdlSpeed1[LG_NUM] =
    {CN("主轴第1档的最高转速(rpm)")
    EN("Maximum spindle speed for gear 1(rpm)")},
//1026;123
    //LG_STR nszParMaxSpdlSpeed2[LG_NUM] =
    {CN("主轴第2档的最高转速(rpm)")
    EN("Maximum spindle speed for gear 2(rpm)")},
//1027;123
    //LG_STR nszParMaxSpdlSpeed3[LG_NUM] =
    {CN("主轴第3档的最高转速(rpm)")
    EN("Maximum spindle speed for gear 3(rpm)")},
//1028;123
    //LG_STR nszParMaxSpdlSpeed4[LG_NUM] =
    {CN("主轴第4档的最高转速(rpm)")
    EN("Maximum spindle speed for gear 3(rpm)")},
//1055;123
    //LG_STR nszParG96MinSpdlSpeed[LG_NUM] =
    {CN("G96时的主轴最低转速")
    EN("Min. spdl speed in G96 mode")},
//1074;123
    //LG_STR nszSpdlPulseModeTimeCnst[LG_NUM] =
    {CN("主轴位置模式时加减速时间常数(ms)")
    EN("Spdl position mode time const(ms)")},
//1150;123
    //LG_STR nszParSpdlGearNum[LG_NUM] =
    {CN("主轴档位数")
    EN("spindle gear num")},
//1091;123
	//LG_STR nszParDOSpdlEN[LG_NUM] =
	{CN("主轴使能输出口")
	EN("Spindle EN DO")},
//1090;123
	//LG_STR nszParDOSpdlENMode[LG_NUM] =
	{CN("主轴使能输出模式(0:上电使能,1:速度模式使能,2:速度及位置使能)")
    EN("Spindle EN mode(0:Power-on,1:Speed,2:Speed and Postion)")},
//1030;123
	//LG_STR nszParDOSpdlFR[LG_NUM] =
	{CN("主轴正转输出口")
	EN("Spindle forward DO")},
//1031;123
	//LG_STR nszParDOSpdlRV[LG_NUM] =
	{CN("主轴反转输出口")
	EN("Spindle reverse DO")},
//1032;123
	//LG_STR nszParDOSpdlSP[LG_NUM] =
	{CN("主轴停止输出口")
	EN("Spindle stop DO")},
//1033;123
	//LG_STR nszParDOSpdlBRK[LG_NUM] =
	{CN("主轴停止时制动输出口")
	EN("Spindle brake DO when stopping")},
//1050;123
	//LG_STR nszParDISpdlDotFwd[LG_NUM] =
	{CN("外接主轴正向点动输入口")
	EN("Spindle forward Inc.Move DI")},
//1051;123
	//LG_STR nszParDISpdlDotRev[LG_NUM] =
	{CN("外接主轴反向点动输入口")
	EN("Spindle reverse Inc.Move DI")},
//1045;123
	//LG_STR nszParDISpdlFwd[LG_NUM] =
	{CN("外接主轴正转输入口")
	EN("Spindle forward DI")},
//1046;123
	//LG_STR nszParDISpdlRev[LG_NUM] =
	{CN("外接主轴反转输入口")
	EN("Spindle reverse DI")},
//1047;123
	//LG_STR nszParDISpdlStp[LG_NUM] =
	{CN("外接主轴停止输入口")
	EN("Spindle stop DI")},
//1052;123
	//LG_STR nszParSpdlDotSpeed[LG_NUM] =
	{CN("主轴点动转速(rpm)")
	EN("Spindle Inc.Move speed(rpm)")},
//1110;123
	//LG_STR nszParDOSpdlLock[LG_NUM] =
	{CN("主轴锁紧夹紧输出口(M12)")
	EN("Spindle lock DO(M12)")},
//1114;123
	//LG_STR nszParDISpdlLockFin[LG_NUM] =
	{CN("主轴锁紧夹紧到位输输入口")
	EN("Spindle lock finish DI")},
//1111;123
	//LG_STR nszParDOSpdlUnlock[LG_NUM] =
	{CN("主轴锁紧松开输出口(M13)")
	EN("Spindle unlock DO(M13)")},
//1115;123
	//LG_STR nszParDISpdlUnlockFin[LG_NUM] =
	{CN("主轴锁紧松开到位输输入口")
	EN("Spindle unlock finish DI")},
//1112;123
	//LG_STR nszParDIExSpdlLock[LG_NUM] =
	{CN("外接主轴锁紧输入口")
	EN("Extern spindle lock DI")},
//1113;123
	//LG_STR nszParDIExSpdlUnlock[LG_NUM] =
	{CN("外接主轴锁紧松开输入口")
	EN("Extern spindle unlock DI")},
//1123;123
	//LG_STR nszParTimeSpdlLockFinWait[LG_NUM] =
	{CN("主轴锁紧到位等待时间上限(ms)")
	EN("Spindle lock fin max-wait-time(ms)")},
//1122;123
	//LG_STR nszParDlyTimeBeforeSpdlLock[LG_NUM] =
	{CN("主轴锁紧前延时时间(ms)")
	EN("Delay time before spindle lock(ms)")},
//1124;123
	//LG_STR nszParDlyTimeAfterSpdlLock[LG_NUM] =
	{CN("主轴锁紧后延时时间(ms)")
	EN("Delay time after spindle lock(ms)")},
//1125;123
	//LG_STR nszParTimeSpdlUnlockFinWait[LG_NUM] =
	{CN("主轴锁紧松开到位等待时间上限(ms)")
	EN("Spindle unlock fin max-wait-time(ms)")},
//1126;123
	//LG_STR nszParTimeSpdlUnlockDly[LG_NUM] =
	{CN("主轴锁紧松开延时时间(ms)")
	EN("Spindle unlock delay time(ms)")},
//1120;123
	//LG_STR nszParTimeSpdlWaitStopMaxTime[LG_NUM] =
	{CN("主轴锁紧前等待主轴停止时间上限(ms)")
	EN("Spindle lock wait stop max time(ms)")},
//1121;123
    //LG_STR nszParSpdlLockActSpeed[LG_NUM] =
    {CN("主轴锁紧允许的实际转速上限")
    EN("Low spdl actual speed as when spindle lock")},
//1034;123
	//LG_STR nszParTimeSpdlST[LG_NUM] =
	{CN("主轴启动延时时间(ms)")
	EN("Spindle start delay time(ms)")},
//1035;123
	//LG_STR nszParTimeSpdlRVD[LG_NUM] =
	{CN("主轴换向延时时间(ms)")
	EN("Spindle change dir. delay time(ms)")},
//1036;123
	//LG_STR nszParTimeSpdlSP[LG_NUM] =
	{CN("主轴停止延时时间(ms)")
	EN("Spindle stop delay time(ms)")},
//1037;123
	//LG_STR nszParTimeSpdlBRK[LG_NUM] =
	{CN("主轴停止时制动延时时间(ms)")
	EN("Spindle brake delay time for stop(ms)")},
//1038;123
	//LG_STR nszParTimeSpdlFRO[LG_NUM] =
	{CN("主轴正转输出时间(ms)")
	EN("Spindle forward time(ms)")},
//1039;123
	//LG_STR nszParTimeSpdlRVO[LG_NUM] =
	{CN("主轴反转输出时间(ms)")
	EN("Spindle reverse time(ms)")},
//1040;123
	//LG_STR nszParTimeSpdlSPO[LG_NUM] =
	{CN("主轴停止输出时间(ms)")
	EN("Spindle stop time(ms)")},
//1041;123
	//LG_STR nszParTimeSpdlBRKO[LG_NUM] =
	{CN("主轴制动输出时间(ms)")
	EN("Spindle brake time(ms)")},
//1151;1
	//LG_STR nszParDOS01[LG_NUM] =
	{CN("S01输出口")
	EN("S01 DO")},
//1152;1
	//LG_STR nszParDOS02[LG_NUM] =
	{CN("S02输出口")
	EN("S02 DO")},
//1153;1
	//LG_STR nszParDOS03[LG_NUM] =
	{CN("S03输出口")
	EN("S03 DO")},
//1154;1
	//LG_STR nszParDOS04[LG_NUM] =
	{CN("S04输出口")
	EN("S04 DO")},
//1155;1
	//LG_STR nszParTimeGearChgIntv[LG_NUM] =
	{CN("档位间切换延时时间(ms)")
	EN("Gear change Interval time(ms)")},
//1156;1
	//LG_STR nszParTimeGearChgFin[LG_NUM] =
	{CN("换挡完成延时时间(ms)")
	EN("Gear change fin time(ms)")},
//1160;123
	//LG_STR nszParDOStarTypeStart[LG_NUM] =
	{CN("星型启动输出口")
	EN("Star-type start DO")},
//1161;123
	//LG_STR nszParDOTriangleTypeStart[LG_NUM] =
	{CN("三角型启动输出口")
	EN("Triangle-type start DO")},
//1162;123
	//LG_STR nszParTimeStarTypeStart[LG_NUM] =
	{CN("星型启动保持时间(ms)")
	EN("Star-type hold time(ms)")},
//1163;123
	//LG_STR nszParTimeStarTriangleIntv[LG_NUM] =
	{CN("星三角型间切换时间(ms)")
	EN("Star Triangle interval time(ms)")},
//1070;123
	//LG_STR nszParDOSpdlPosMode[LG_NUM] =
	{CN("主轴位置模式输出口(M18)")
	EN("Spindle postion mode DO")},
//1075;123
	//LG_STR nszParDOSpdlSpeedMode[LG_NUM] =
	{CN("主轴速度模式输出口(M17)")
	EN("Spindle speed mode DO")},
//1071;123
	//LG_STR nszParDISpdlPosModeFin[LG_NUM] =
	{CN("主轴位置模式到位输入口")
	EN("Spindle postion mode FIN DI")},
//1076;123
	//LG_STR nszParDISpdlSpeedModeFin[LG_NUM] =
	{CN("主轴速度模式到位输入口")
	EN("Spindle speed mode FIN DI")},
//1072;123
	//LG_STR nszParTimeSpdlPosFinWait[LG_NUM] =
	{CN("主轴位置模式到位信号等待时间上限(ms)")
	EN("Spindle position mode FIN wait time max(ms)")},
//1077;123
	//LG_STR nszParTimeSpdlSpeedFinWait[LG_NUM] =
	{CN("主轴速度模式到位信号等待时间上限(ms)")
	EN("Spindle speed mode FIN wait time max(ms)")},
//1073;123
	//LG_STR nszParTimeSpdlPosFinDly[LG_NUM] =
	{CN("主轴位置模式到位延时时间(ms)")
	EN("Spindle position mode FIN delay(ms)")},
//1078;123
	//LG_STR nszParTimeSpdlSpeedFinDly[LG_NUM] =
	{CN("主轴速度模式到位延时时间(ms)")
	EN("Spindle speed mode FIN delay(ms)")},
//1080;123
	//LG_STR nszParDOSpdlOrientation[LG_NUM] =
	{CN("主轴准停输出口(M19)")
	EN("Spindle orientation DO(M19)")},
//1081;123
	//LG_STR nszParDISpdlOrientationFin[LG_NUM] =
	{CN("主轴准停完成输入口")
	EN("Spindle orientation FIN DI")},
//1082;123
	//LG_STR nszParTimeSpdlOrientationFinWait[LG_NUM] =
	{CN("主轴准停完成信号等待时间上限(ms)")
	EN("Spindle orientation FIN wait time max(ms)")},
//1083;123
	//LG_STR nszParTimeSpdlOrientationFinDly[LG_NUM] =
	{CN("主轴准停完成延时时间(ms)")
	EN("Spindle orientation FIN delay time(ms)")},

	//LG_STR nszParTimeSpdlOrientationOut[LG_NUM] =
	{CN("主轴准停输出时间(ms)")
	EN("Spindle forward output time(ms)")},
//1084;123
	//LG_STR nszParSpdlOrientationFinCoor[LG_NUM] =
	{CN("主轴准停完成后的坐标值")
	EN("Coor. of spindle orientation FIN")},
//1095;123
	//LG_STR nszParDISpdlAlm[LG_NUM] =
	{CN("主轴报警输入口")
	EN("Spindle Alarm DI")},
//3465;1
	//LG_STR nszParDISpdlOvA[LG_NUM] =
	{CN("主轴倍率开关*1输入口")
	EN("Spindle override DI *1")},
//3467;1
	//LG_STR nszParDISpdlOvB[LG_NUM] =
	{CN("主轴倍率开关*2输入口")
	EN("Spindle override DI *2")},
//3468;1
	//LG_STR nszParDISpdlOvE[LG_NUM] =
	{CN("主轴倍率开关*4输入口")
	EN("Spindle override DI *4")},
//3469;1
	//LG_STR nszParDISpdlOvF[LG_NUM] =
	{CN("主轴倍率开关*8输入口")
	EN("Spindle override DI *8")},
//3336;1
	//LG_STR nszParJogKeyDef[LG_NUM] =
	{CN("各轴手动移动键自定义(0:无,1~3:XYZ,4~6:ABC)")
	EN("Axis jog key set(0:undef,1~3:XYZ,4~6:ABC)")},
//3470;1
    //LG_STR nszParHPSTSet[9][LG_NUM] =
    {CN("液压启动相关设置")
    EN("hydraulic pressure start settings")},
    {CN("STKHP 0/1:循环启动时,不检测/检测液压启动")
	EN("STKHP 0/1:NO/CHECK hydraulic pressure when cycle start")},
	{CN("SPKHP 0/1:主轴启动时,不检测/检测液压启动")
	EN("SPKHP 0/1:NO/CHECK hydraulic pressure when spindle start")},
	{CN("HPPO 0/1:上电时,不/启动液压")
	EN("HPPO 0/1:NO/Open hydraulic pressure when power-on")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("U1HP 0/1:User1键用作液压控制,关闭/打开")
	EN("U1HP 0/1:User1 control hydraulic pressure, disable/enable")},
//3471;1
	//LG_STR nszParDOHPST[LG_NUM] =
	{CN("液压启动输出口")
	EN("hydraulic pressure start DO")},
//3472;1
	//LG_STR nszParDIHPST[LG_NUM] =
	{CN("外接液压启动输入口")
	EN("external hydraulic pressure start DI")},
//3473;1
	//LG_STR nszParDiHPSTFin[LG_NUM] =
	{CN("液压启动完成输输入口")
	EN("hydraulic pressure start fin Di")},
//3474;1
	//LG_STR nszParFinWaitTimeHPST[LG_NUM] =
	{CN("液压启动完成信号等待时间上限(ms)")
	EN("hydraulic pressure start FIN wait time max(ms)")},
//1200;1
    //LG_STR nszParSpdlSyncSet[9][LG_NUM] =
    {CN("主轴同步第1组相关设置")
     EN("Spindle synchronization group 1 settings")},
	{CN("SSYNP 0/1:主动轴位置方式时,从动轴通过主动轴编码器反馈/位置输出进行控制")
	EN("SSYNP 0/1:Slave spindle sync controled by encoder input/position output from master")},
	{CN("SSES 0/1:编码器反馈方式主轴同步时,从动轴不/进行切削速度平滑")
	EN("SSES 0/1:Slave spindle Disable/Enable feedrate smooth when spindle encoder sync.")},
	{CN("SSYNR 0/1:不指定R时,从当前位置/0位置同步")
    EN("SSYNR 0/1:Sync from current/0 position when R not specified")},
	{CN("SSYSD 0/1:从动轴正向/负向运动")
    EN("SSYSD 0/1:Slave axis positive/negtive move")},
	{CN("SSYPI 0/1:从动轴使用P调节/使用PI调节")
	EN("SSYPI 0/1:Slave axis use P control/PI control")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1201;1
    //LG_STR nszParSpdlSync2Set[9][LG_NUM] =
    {CN("主轴同步第2组相关设置")
     EN("Spindle synchronization group 2 settings")},
	{CN("SSYNP 0/1:主动轴位置方式时,从动轴通过主动轴编码器反馈/位置输出进行控制")
	EN("SSYNP 0/1:Slave spindle sync controled by encoder input/position output from master")},
	{CN("SSES 0/1:编码器反馈方式主轴同步时,从动轴不/进行切削速度平滑")
	EN("SSES 0/1:Slave spindle Disable/Enable feedrate smooth when spindle encoder sync.")},
	{CN("保留")
	EN("RSV")},
	{CN("SSYSD 0/1:从动轴正向/负向运动")
    EN("SSYSD 0/1:Slave axis positive/negtive move")},
	{CN("SSYPI 0/1:从动轴使用P调节/使用PI调节")
	EN("SSYPI 0/1:Slave axis use P control/PI control")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1202;1
    //LG_STR nszParSpdlSync3Set[9][LG_NUM] =
    {CN("主轴同步第3组相关设置")
     EN("Spindle synchronization group 3 settings")},
	{CN("SSYNP 0/1:主动轴位置方式时,从动轴通过主动轴编码器反馈/位置输出进行控制")
	EN("SSYNP 0/1:Slave spindle sync controled by encoder input/position output from master")},
	{CN("SSES 0/1:编码器反馈方式主轴同步时,从动轴不/进行切削速度平滑")
	EN("SSES 0/1:Slave spindle Disable/Enable feedrate smooth when spindle encoder sync.")},
	{CN("保留")
	EN("RSV")},
	{CN("SSYSD 0/1:从动轴正向/负向运动")
    EN("SSYSD 0/1:Slave axis positive/negtive move")},
	{CN("SSYPI 0/1:从动轴使用P调节/使用PI调节")
	EN("SSYPI 0/1:Slave axis use P control/PI control")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1210;123
	//LG_STR nszParSpdlSyncSlvSpeedMax[LG_NUM] =
	{CN("主轴同步方式时,从动轴最高转速(rpm)")
	EN("Spindle sync slave spindle speed max.(rpm)")},
//1211;123
	//LG_STR nszParSpdlSyncSlvTimeCnst[LG_NUM] =
	{CN("主轴同步方式时,从动轴时间常数")
	EN("Spindle sync. slave spindle time const")},
//1212;123
    //LG_STR nszParSpdlSyncSlvFilterRatio[LG_NUM] =
     {CN("主轴同步方式时,从动轴速度平滑系数(0~100),0:不滤波")
     EN("Spindle sync, slave axis feed filter ratio (0~100),0:close")},

//1214;123
    //LG_STR nszParSpdlSyncLoadLimit[LG_NUM] =
    {CN("主轴同步方式时,各主轴负载限制(0~300,0:不限制)")
    EN("Load limit when spindle sync.(0~300,0:No limit)")},
//1220;1
	//LG_STR nszParSpdlSyncMaster1[LG_NUM] =
	{CN("主轴同步第1组,主动主轴号")
	EN("Spindle sync. group 1,master spindle No.")},
//1221;1
	//LG_STR nszParSpdlSyncSlave1[LG_NUM] =
	{CN("主轴同步第1组,从动主轴号")
	EN("Spindle sync. group 1,slave spindle No.")},
//1222;1
	//LG_STR nszParSpdlSyncMaster2[LG_NUM] =
	{CN("主轴同步第2组,主动主轴号")
	EN("Spindle sync. group 2,master spindle No.")},
//1223;1
	//LG_STR nszParSpdlSyncSlave2[LG_NUM] =
	{CN("主轴同步第2组,从动主轴号")
	EN("Spindle sync. group 2,slave spindle No.")},
//1224;1
	//LG_STR nszParSpdlSyncMaster3[LG_NUM] =
	{CN("主轴同步第3组,主动主轴号")
	EN("Spindle sync. group 3,master spindle No.")},
//1225;1
	//LG_STR nszParSpdlSyncSlave3[LG_NUM] =
	{CN("主轴同步第3组,从动主轴号")
	EN("Spindle sync. group 3,slave spindle No.")},
    //-------------------------------------------------------------------------
    // 卡盘参数##QP
    //-------------------------------------------------------------------------
//1300;123
	//LG_STR nszParQPSet[9][LG_NUM] =
	{CN(CHUNK_CN"相关设置")
	EN("Chuck settings")},
	{CN("CLPP 0/1:夹紧输出为电平/脉冲")
	EN("CLPP 0/1:Clamp pulse output")},
	{CN("UCLP 0/1:松开输出为电平/脉冲")
	EN("UCLP 0/1:Unclamp pulse output")},
    {CN("QPCFC 0/1:夹紧到位为常开/常闭信号")
	EN("QPCFC 0/1:Clamp fin is normal open/close")},
    {CN("QPUFC 0/1:松开到位为常开/常闭信号")
	EN("QPUFC 0/1:Unclamp fin is normal open/close")},
	{CN("QPD 0/1:"CHUNK_CN"内夹/外夹")
    EN("QPD 0/1:Chuck clamp in/out")},
    {CN("XQPH 0/1:外接夹紧松开为脉冲/保持信号")
	EN("XQPH 0/1:External Clamp and unclamp input signal is pulse/level")},
    {CN("")
	EN("")},
	{CN("")
    EN("")},
//1301;123
	//LG_STR nszParQPLockSet[9][LG_NUM] =
	{CN(CHUNK_CN"互锁相关设置")
	EN("Chuck lock settings")},
	{CN("QPSL 0/1:主轴转动时(通过输出状态判断),不可/可以执行自动松开")
	EN("QPSL 0/1:Unclamp not/execute when spindle rotate(output status)")},
	{CN("MQPSL 0/1:主轴转动时(通过输出状态判断),不可/可以执行手动松开")
	EN("MQPSL 0/1:Manual Unclamp not/execute when spindle rotate(output status)")},
	{CN("MQPOP 0/1:自动运行时不响应/响应手动夹紧松开")
	EN("MQPOP 0/1:Manual m10 and m11 not/execute when automaic run")},
	{CN("UQEU 0/1:松开指令时,不/等待主轴转速低于允许转速")
	EN("UQEU 0/1:not/wait spindle speed under allowed speed when unclamp command")},
	{CN("")
    EN("")},
	{CN("QPST 0/1:松开状态时,可/不可循环启动运行")
	EN("QPST 0/1:not/execute cycle start when chuck unclamp state")},
	{CN("UQEC 0/1:松开状态时,不/检测主轴转速超过允许上限")
	EN("UQEC 0/1:not/check spindle speed over allowed speed when unclamp state")},
	{CN("")
    EN("")},
//1302;123
	//LG_STR nszParQPPowerOnSet[9][LG_NUM] =
	{CN(CHUNK_CN"上电相关设置")
	EN("Chuck power-on settings")},
	{CN("QPRS 0/1:上电时,卡盘不/恢复断电前的状态")
    EN("QPRS 0/1:NOT/recover state to power-off when power-on")},
	{CN("QPON 0/1:上电时,卡盘不/输出夹紧")
    EN("QPON 0/1:NOT/OUT clamp when power-on")},
	{CN("QPOF 0/1:上电时,卡盘不/输出松开")
    EN("QPOF 0/1:NOT/OUT unclamp when power-on")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
//1310;123
	//LG_STR nszParDOSpdlClp[LG_NUM] =
	{CN(CHUNK_CN"夹紧输出口")
	EN("Spindle clamp DO")},
//1311;123
	//LG_STR nszParDOSpdlUnclp[LG_NUM] =
	{CN(CHUNK_CN"松开输出口")
	EN("Spindle unclamp DO")},
//1320;123
	//LG_STR nszParDIExSpdlClp[LG_NUM] =
	{CN("外接"CHUNK_CN"夹紧输入口")
	EN("Extern M10/M11 DI")},
//1321;123
	//LG_STR nszParDIExSpdlUclp[LG_NUM] =
	{CN("外接"CHUNK_CN"松开输入口")
	EN("Extern M11 DI")},
//1322;123
	//LG_STR nszParDISpdlClpFin[LG_NUM] =
	{CN(CHUNK_CN"夹紧到位输入口")
	EN("Spindle clamp FIN DI")},
//1323;123
	//LG_STR nszParDISpdlUnclpFin[LG_NUM] =
	{CN(CHUNK_CN"松开到位输入口")
	EN("Spindle unclamp FIN DI")},
//1330;123
	//LG_STR nszParTimeM10FinWait[LG_NUM] =
	{CN(CHUNK_CN"夹紧到位信号等待时间上限(ms)")
	EN("Clamp FIN wait max time(ms)")},
//1331;123
	//LG_STR nszParTimeM11FinWait[LG_NUM] =
	{CN(CHUNK_CN"松开到位信号等待时间上限(ms)")
	EN("Unclamp FIN wait max time(ms)")},
//1132;123
	//LG_STR nszParTimeM10FinDly[LG_NUM] =
	{CN(CHUNK_CN"夹紧到位延时时间(ms)")
	EN("Clamp FIN delay time(ms)")},
//1333;123
	//LG_STR nszParTimeM11FinDly[LG_NUM] =
	{CN(CHUNK_CN"松开到位延时时间(ms)")
	EN("Unclamp delay time(ms)")},
//1340;123
    //LG_STR nszParM11SpdlSpeedMax[LG_NUM] =
    {CN(CHUNK_CN"松开允许实际转速上限")
    EN("Actual speed max for Unclamp")},
//1341;123
    //LG_STR nszParM11SpdlArriveWaitTime[LG_NUM] =
    {CN(CHUNK_CN"松开时,等待主轴低于允许转速的时间上限")
    EN("Max wait time of spindle speed arrive when spindle Unclamp.")},
//1056;123
    //LG_STR nszParSpdlStopActSpeed[LG_NUM] =
    {CN("视为主轴停止的实际转速上限")
    EN("Low spdl actual speed as stop")},

    //LG_STR nszParSpdlSpeedArriveRatio[LG_NUM] =
    {CN("视为主轴转速已到达的实际转速比例")
    EN("Spdl actual speed ratio as speed arrive when start")},
//1057;123
    //LG_STR nszParSpdlSpeedArriveRange[LG_NUM] =
    {CN("主轴转速到达检测窗口范围(百分比)")
    EN("Spindle speed arrive check range(percent)")},
//1058;1
    //LG_STR nszParSpdlArriveWaitTimeStart[LG_NUM] =
    {CN("主轴启动时,等待主轴转速到达时间上限(=0:忽略)")
    EN("Max time of spindle speed arrive when spindle start.(=0:ignore)")},
//1059;1
    //LG_STR nszParSpdlArriveWaitTimeCut[LG_NUM] =
    {CN("切削加工时,等待主轴转速到达时间上限(=0:忽略)")
    EN("Max time of spindle speed arrive when cut.(=0:ignore)")},
    //-------------------------------------------------------------------------
    // 尾座参数##TS ##TAIL
    //-------------------------------------------------------------------------
//1400;123
	//LG_STR nszParTailstockSet[9][LG_NUM] =
	{CN("尾座相关设置")
	EN("Tailstock settings")},
	{CN("M78P 0/1:尾座进输出为电平/脉冲")
    EN("M78P 0/1:Tailstock forward output type:level/pulse")},
	{CN("M79P 0/1:尾座退输出为电平/脉冲")
	EN("M79P 0/1:Tailstock backward output type:level/pulse")},
    {CN("TSFFC 0/1:尾座进到位为常开/常闭信号")
    EN("TSFFC 0/1:Tailstock forward FIN input type:normal open/close")},
    {CN("TSBFC 0/1:尾座退到位为常开/常闭信号")
    EN("TSBFC 0/1:Tailstock backward FIN input type:normal open/close")},
	{CN("TSRST 0/1:复位时,尾座不退回/退回")
	EN("TSRST 0/1:Tailstock NOT/backward when RESET")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1401;123
	//LG_STR nszParTailstockLockSet[9][LG_NUM] =
	{CN("尾座互锁相关设置")
	EN("Tailstock settings")},
	{CN("TSSL 0/1:主轴启动时不可/可以执行尾座退")
	EN("TSSL 0/1:NOT/allowed tail quit when spdl rotating")},
	{CN("MTSOP 0/1:自动运行时不响应/响应手动尾座")
	EN("MTSOP 0/1:manual tail operation NOT/allowed when running")},
	{CN("MTSSL 0/1:主轴启动时不可/可以执行手动尾座退")
	EN("MTSSL 0/1:manual tail operation NOT/allowed when spdl rotating")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1402;123
	//LG_STR nszParTSPowerOnSet[9][LG_NUM] =
	{CN("尾座上电相关设置")
	EN("Chuck power-on settings")},
	{CN("TSRS 0/1:上电时,尾座不/恢复断电前的状态")
    EN("TSRS 0/1:NOT/recover tail-state to power-off when power-on")},
	{CN("TSON 0/1:上电时,不/输出尾座进")
    EN("TSON 0/1:NOT/OUT tail-forward when power-on")},
	{CN("TSOF 0/1:上电时,不/输出尾座退")
    EN("TSOF 0/1:NOT/OUT tail-backward when power-on")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
//1410;123
	//LG_STR nszParDOTSF[LG_NUM] =
	{CN("尾座进输出口")
	EN("Tailstock forward DO")},
//1411;123
	//LG_STR nszParDOTSB[LG_NUM] =
	{CN("尾座退输出口")
	EN("Tailstock backward DO")},
//1420;123
	//LG_STR nszParDIExTailstockFR[LG_NUM] =
	{CN("外接尾座进输入口")
	EN("Extern Tailstock forward DI")},
//1421;123
	//LG_STR nszParDIExTailstockBW[LG_NUM] =
	{CN("外接尾座退输入口")
	EN("Extern Tailstock backward DI")},
//1422;123
	//LG_STR nszParDITailstockFRFin[LG_NUM] =
	{CN("尾座进到位输入口")
	EN("Tailstock forward FIN DI")},
//1423;123
	//LG_STR nszParDITailstockBWFin[LG_NUM] =
	{CN("座进退到位输入口")
	EN("Tailstock backward FIN DI")},
//1430;123
	//LG_STR nszParTimeM78FinWait[LG_NUM] =
	{CN("尾座进到位信号等待时间上限(ms)")
	EN("Tailstock forward FIN wait max time(ms)")},
//1431;123
	//LG_STR nszParTimeM79FinWait[LG_NUM] =
	{CN("尾座退到位信号等待时间上限(ms)")
	EN("Tailstock backward FIN wait max time(ms)")},
//1432;123
	//LG_STR nszParTimeM78FinDly[LG_NUM] =
	{CN("尾座进到位延时时间(ms)")
	EN("ailstock forward finish delay time(ms)")},
//1433;123
	//LG_STR nszParTimeM79FinDly[LG_NUM] =
	{CN("尾座退到位延时时间(ms)")
	EN("Tailstock backward finish delay time(ms)")},

    //-------------------------------------------------------------------------
    // 刀架参数 ##TOOL
    //-------------------------------------------------------------------------
//1500;123
	//LG_STR nszParTSet[9][LG_NUM] =
	{CN("刀架相关设置")
	EN("Tool settings")},
	{CN("TCHK 0/1:换刀完成后,不检测/检测刀号")
    EN("TCHK 0/1:Not/check tool number after tool change")},
	{CN("TE00 0/1:不允许/允许0号刀")
	EN("TE00 0/1:disable/enable tool number 0")},
	{CN("TBC 0/1:换刀后,相对坐标相对于换刀前/换刀后")
	EN("TBC 0/1:After tool change,Relative-coor. base on before/after tool change")},
	{CN("TCC 0/1:目标刀号和当前刀相同时,不执行/仍然执行换刀")
	EN("TCC 0/1:Target equal to current,NO/Execute tool change")},
	{CN("TECK 0/1:刀号错误实时监测,关闭/打开")
    EN("TECK 0/1:tool number error check,OFF/ON")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1501;123
	//LG_STR nszParTDI1[9][LG_NUM] =
	{CN("刀架输入设置1")
	EN("Tool DI settings 1")},
	{CN("T08C 0/1:T08为常开/常闭信号")
    EN("T08C 0/1:T08 is normal open/close")},
	{CN("T07C 0/1:T07为常开/常闭信号")
    EN("T07C 0/1:T07 is normal open/close")},
	{CN("T06C 0/1:T06为常开/常闭信号")
    EN("T06C 0/1:T06 is normal open/close")},
	{CN("T05C 0/1:T05为常开/常闭信号")
    EN("T05C 0/1:T05 is normal open/close")},
	{CN("T04C 0/1:T04为常开/常闭信号")
    EN("T04C 0/1:T04 is normal open/close")},
	{CN("T03C 0/1:T03为常开/常闭信号")
    EN("T03C 0/1:T03 is normal open/close")},
	{CN("T02C 0/1:T02为常开/常闭信号")
    EN("T02C 0/1:T02 is normal open/close")},
	{CN("T01C 0/1:T01为常开/常闭信号")
    EN("T01C 0/1:T01 is normal open/close")},
//1502;123
	//LG_STR nszParTDI2[9][LG_NUM] =
	{CN("刀架输入设置2")
	EN("Tool DI settings 2")},
	{CN("TCPE 0/1:不检测/检测TCP信号")
	EN("TCPE 0/1:No/detect TCP signal")},
	{CN("TCPC 0/1:TCP为常开/常闭信号")
    EN("TCPC 0/1:TCP is normal open/close")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("T12C 0/1:T12为常开/常闭信号")
    EN("T12C 0/1:T12 is normal open/close")},
	{CN("T11C 0/1:T11为常开/常闭信号")
    EN("T11C 0/1:T11 is normal open/close")},
	{CN("T10C 0/1:T10为常开/常闭信号")
    EN("T10C 0/1:T10 is normal open/close")},
	{CN("T09C 0/1:T09为常开/常闭信号")
    EN("T09C 0/1:T09 is normal open/close")},
//1510;123
	//LG_STR nszParPlcTType[LG_NUM] =
	{CN("刀架类型(0:排刀,1:电动刀架)")
	EN("Tool turret type")},
//1511;123
	//LG_STR nszParPlcTNum[LG_NUM] =
	{CN("刀具数量")
	EN("Tool number")},
//1520;123
	//LG_STR nszParT01DI[LG_NUM] =
	{CN("T01输入口")
	EN("T01 DI")},
//1521;123
	//LG_STR nszParT02DI[LG_NUM] =
	{CN("T02输入口")
	EN("T02 DI")},
//1522;123
	//LG_STR nszParT03DI[LG_NUM] =
	{CN("T03输入口")
	EN("T03 DI")},
//1523;123
	//LG_STR nszParT04DI[LG_NUM] =
	{CN("T04输入口")
	EN("T04 DI")},
//1524;123
	//LG_STR nszParT05DI[LG_NUM] =
	{CN("T05输入口")
	EN("T05 DI")},
//1525;123
	//LG_STR nszParT06DI[LG_NUM] =
	{CN("T06输入口")
	EN("T06 DI")},
//1526;123
	//LG_STR nszParT07DI[LG_NUM] =
	{CN("T07输入口")
	EN("T07 DI")},
//1527;123
	//LG_STR nszParT08DI[LG_NUM] =
	{CN("T08输入口")
	EN("T08 DI")},
//1528;123
	//LG_STR nszParT09DI[LG_NUM] =
	{CN("T09输入口")
	EN("T09 DI")},
//1529;123
	//LG_STR nszParT10DI[LG_NUM] =
	{CN("T10输入口")
	EN("T10 DI")},
//1530;123
	//LG_STR nszParT11DI[LG_NUM] =
	{CN("T11输入口")
	EN("T11 DI")},
//1531;123
	//LG_STR nszParT12DI[LG_NUM] =
	{CN("T12输入口")
	EN("T12 DI")},
//1532;123
	//LG_STR nszParTCPDI[LG_NUM] =
	{CN("TCP输入口")
	EN("TCP DI")},
//1540;123
	//LG_STR nszParDOTFR[LG_NUM] =
	{CN("刀架正转输出口")
	EN("Tool turret CW DO")},
//1541;123
	//LG_STR nszParDOTRV[LG_NUM] =
	{CN("刀架反转输出口")
	EN("Tool turret CCW DO")},
//1542;123
	//LG_STR nszParDOTCLP[LG_NUM] =
	{CN("刀架锁紧输出口")
	EN("Tool turret clamp DO")},
//1543;123
	//LG_STR nszParDOTUCLP[LG_NUM] =
	{CN("刀架松开输出口")
	EN("Tool turret unclamp DO")},
//1550;123
	//LG_STR nszParTimeMaxT[LG_NUM] =
	{CN("换刀时间上限(ms)")
	EN("Max. time for tool change(ms)")},
//1551;123
	//LG_STR nszParTimeTRVD[LG_NUM] =
	{CN("换刀时正反转间的延时(ms)")
	EN("Delay time for Tool backward(ms)")},
//1552;123
	//LG_STR nszParTimeMaxTRVF[LG_NUM] =
	{CN("换刀时反转到收到TCP时间上限(ms)")
	EN("Max. time for Tool backward to TCP(ms)")},
//1553;123
	//LG_STR nszParTimeDlyTRVF[LG_NUM] =
	{CN("刀位到达(TCP)后反转保持时间(ms)")
	EN("Delay time for TCP to stop backward(ms)")},

    //-------------------------------------------------------------------------
    // 润滑 ##LUB
    //-------------------------------------------------------------------------
//1800;123
	//LG_STR nszParLutSet[9][LG_NUM] =
	{CN("润滑相关设置")
	EN("Lubricate settings")},
	{CN("LUBC 0/1:润滑报警为常开/常闭")
	EN("LUBC 0/1:Lubricate alarm normal open/close")},
	{CN("LASP 0/1:润滑报警时不停/停加工")
	EN("LASP 0/1:NOT/STOP cycle operation when lub alarm")},
	{CN("LBPO 0/1:开机润滑关闭/打开")
	EN("LBPO 0/1:Power-on lub disable/enable")},
	{CN("MLBOP 0/1:自动运行时,不响应/响应手动润滑")
	EN("MLBOP 0/1:Manual lub not/execute when cycle start")},
	{CN("LAST 0/1:润滑报警不停加工时,可/不可启动加工")
	EN("LAST 0/1:START/NOT-START cycle operation when lub alarm NO stop cycle")},
	{CN("LUBRST 0/1:复位时,不关闭/关闭润滑")
	EN("LUBRST 0/1:NOT/CLOSE lub when RESET")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1810;123
	//LG_STR nszParDILubAlm[LG_NUM] =
	{CN("润滑报警输入口")
	EN("Lubricate alarm DI")},
//1811;123
	//LG_STR nszParDOLub[LG_NUM] =
	{CN("润滑输出口")
	EN("Lubricate DO")},
//1820;123
	//LG_STR nszParTimeM32Dly[LG_NUM] =
	{CN("M32延时时间(ms)")
	EN("M32 delay time(ms)")},
//1821;123
	//LG_STR nszParTimeM33Dly[LG_NUM] =
	{CN("M33延时时间(ms)")
	EN("M33 delay time(ms)")},
//1822;123
	//LG_STR nszParTimeLubO[LG_NUM] =
	{CN("润滑输出时间(ms)")
	EN("Lubricate time(ms)")},
//1823;123
	//LG_STR nszParTimeAutoLubIntervel[LG_NUM] =
	{CN("自动润滑间隔时间(ms)")
	EN("Auto. lubricate interval time(ms)")},

    //-------------------------------------------------------------------------
    // 排屑器 ##CHIP
    //-------------------------------------------------------------------------
//3480;1
	//LG_STR nszParChipSet[9][LG_NUM] =
	{CN("排屑相关设置")
	EN("chip conveyer settings")},
	{CN("CHPRST 0/1:复位时,不关闭/关闭排屑器")
	EN("CHPRST 0/1:NOT/CLOSE chip conveyer when RESET")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("U1CHP 0/1:User1键用排屑器控制,关闭/打开")
	EN("U1CHP 0/1:User1 control chip conveyer, disable/enable")},
//3481;1
	//LG_STR nszParDOChipCW[LG_NUM] =
	{CN("排屑器正转输出口")
	EN("Chip conveyer forward DO")},
//3482;1
	//LG_STR nszParDOChipCCW[LG_NUM] =
	{CN("排屑器反转输出口")
	EN("Chip conveyer reverse DO")},
//3483;1
	//LG_STR nszParDIChipCW[LG_NUM] =
	{CN("外接排屑器正转输入口")
	EN("Chip conveyer forward DI")},
//3484;1
	//LG_STR nszParDIChipCCW[LG_NUM] =
	{CN("外接排屑器反转输入口")
	EN("Chip conveyer reverse DI")},
//3485;1
	//LG_STR nszParDIChipStop[LG_NUM] =
	{CN("外接排屑器停止输入口")
	EN("Chip conveyer stop DI")},
//3486;1
	//LG_STR nszParTimeChipO[LG_NUM] =
	{CN("排屑器输出时间(ms)")
	EN("Chip conveyer out time(ms)")},
//3487;1
	//LG_STR nszParTimeAutoChipCWIntervel[LG_NUM] =
	{CN("排屑器自动正转间隔时间(ms)")
	EN("Chip conveyer Auto-CW interval time(ms)")},

    //-------------------------------------------------------------------------
    // 手轮##HD ##hand 600
    //-------------------------------------------------------------------------
//0600;1
	//LG_STR nszParHndlSet[9][LG_NUM] =
	{CN("手轮设置")
	EN("Handle wheel settings")},
	{CN("HDLD 0/1:手轮方向为正向/负向")
	EN("HDLD 0/1:handle direction is positive/negtive")},
	{CN("HDLX 0/1:手轮为普通手轮/手持单元")
    EN("HDLX 0/1:handle is normal/external")},
	{CN("HDLR 0/1:关闭/打开手轮回退")
	EN("HDLR 0/1:Disable/Enable handle retrace")},
	{CN("HDLI 0/1:手轮进给时,超过最大速度的脉冲不忽略/忽略")
    EN("HDLI 0/1:Not ignore/ignore pulse when handle over-speed")},
	{CN("HDLDI 0/1:手轮选择轴移动时,手轮反向给定脉冲不忽略/忽略")
	EN("HDLDI 0/1:Reverse pulse of handle Not ignore/ignore when handle axis moving")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0610;XYZA
	//LG_STR nszParHndlF[LG_NUM] =
	{CN("各轴手轮速度上限")
	EN("handle max. Feed ")},
//0611;XYZA
	//LG_STR nszParHndlFL[LG_NUM] =
	{CN("各轴手轮加减速时的低速FL(mm/min)")
	EN("handle Acc./dec low feed FL(mm/min)")},
//0612;XYZA
    //LG_STR nszParHndlTimeCnst[LG_NUM] =
    {CN("各轴手轮加减速时间常数")
     EN("Handle Acc./dec. time constant")},
//0615;XYZA
    //LG_STR nszParHndlUnitMul[LG_NUM] =
    {CN("各轴手轮移动基本单位倍率")
     EN("Handle unit multiplying factor")},
//0616;1
    //LG_STR nszParHndlOvMax[LG_NUM] =
    {CN("手轮倍率输入上限")
     EN("Handle override max")},
//0617;1
    //LG_STR nszParHndlRunRpdOvMax[LG_NUM] =
    {CN("手轮试运行快速移动倍率上限")
     EN("Handle test run rapid override max")},
//0620;XYZA
	//LG_STR nszParDIHndlAxisSelect[LG_NUM] =
	{CN("各轴手轮选择输入口")
	EN("Handle axis select DI")},
//0621;1
	//LG_STR nszParDIHndlX1[LG_NUM] =
	{CN("手轮倍率*1输入口")
	EN("Handle feed amount *1 DI")},
//0622;1
	//LG_STR nszParDIHndlX10[LG_NUM] =
	{CN("手轮倍率*10输入口")
	EN("Handle feed amount *10 DI")},
//0623;1
	//LG_STR nszParDIHndlX100[LG_NUM] =
	{CN("手轮倍率*100输入口")
	EN("Handle feed amount *100 DI")},
//0624;1
	//LG_STR nszParDIHndlX1000[LG_NUM] =
	{CN("手轮倍率*1000输入口")
	EN("Handle feed amount *1000 DI")},
//0625;1
	//LG_STR nszParDIHndlMode[LG_NUM] =
	{CN("手轮模式选择输入口")
	EN("Handle mode select DI")},
//0630;XYZA
	//LG_STR nszParHndlIntrF[LG_NUM] =
	{CN("各轴手轮中断速度上限")
	EN("handle-Intr max. Feed ")},
//0631;XYZA
    //LG_STR nszParHndlIntrTimeCnst[LG_NUM] =
    {CN("各轴手轮中断加减速时间常数")
     EN("Handle-Intr Acc./dec. time constant")},
//0626;1
	//LG_STR nszParDIHndlIntrModeEnable[LG_NUM] =
	{CN("手轮中断模式使能输入口")
	EN("Handle-Intr mode enable DI")},
    //-------------------------------------------------------------------------
    // 显示/操作 ##DISP ##1000
    //-------------------------------------------------------------------------
//2000;1
	//LG_STR nszParDispSet[9][LG_NUM] =
	{CN("显示相关设置")
	EN("Display settings")},
	{CN("MDIA 0/1:单行MDI时,不/更新多行MDI")
    EN("MDIA 0/1:No/Update multi-line MDI when single-line MDI")},
	{CN("MDIC 0/1:执行后不清除/清除多行MDI")
	EN("MDIC 0/1:No/Clear multi-line MDI when FINISH")},
	{CN("MDIR 0/1:Mdi界面,复位不清除/清除多行MDI")
    EN("MDIR 0/1:No/Clear multi-line MDI when RESET in MDI screen")},
	{CN("")
	EN("")},
	{CN("ALMS 0/1:报警时不切换/切换到报警界面")
    EN("ALMS 0/1:No/Shift to alarm screen when alarm")},
	{CN("EDTS 0/1:模式切换至EDIT时,不切换/切换到EDIT界面")
    EN("EDTS 0/1:No/Change to EDIT screen when change to EDIT mode")},
	{CN("MDIS 0/1:位置界面模式切换至MDI时,不/切换到MDI界面")
    EN("MDIS 0/1:No/Change to MDI screen when change to MDI mode in POS screen")},
	{CN("")
	EN("")},
//2001;1
    //LG_STR nszParPowerOnDispSet[9][LG_NUM] =
    {CN("上电时显示相关设置")
    EN("Power-On display settings")},
    {CN("WCPO 0/1:上电计数不清零/清零")
    EN("WCPO 0/1:No/Clear workpiece count when power")},
    {CN("TCPO 0/1:上电运行时间不清零/清零")
    EN("TCPO 0/1:No/Clear run time when power")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2005;1
    //LG_STR nszParEditSet[9][LG_NUM] =
    {CN("程序编辑相关设置")
    EN("Function settings")},
    {CN("SEQ 0/1:关闭/打开编辑时自动插入行号")
    EN("SEQ 0/1:Disable/Enable automatic insert sequence numbers when edit")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2002;1
    //LG_STR nszParRunCtrlSet[9][LG_NUM] =
    {CN("运行控制相关设置")
    EN("Run control settings")},
    {CN("RCPA 0/1:关闭/打开计件数到达检测")
    EN("RCPA 0/1:Disable/Enable check for parts number arriving")},
    {CN("CSCT 0/1:计件后不/停止循环时间计时")
    EN("CSCT 0/1:No/Stop cycle time when parts number change")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},

    //GROUP:参数
//2003;1
    //LG_STR nszParOperSwitchSet[9][LG_NUM] =
    {CN("操作开关/允许设置")//0+
    EN("Operation switch/enable settings")},
    {CN("PARSW 0/1:参数开关无效/有效")
    EN("PARSW 0/1:Disable/Enable Parameter switch")},
    {CN("PRGSW 0/1:程序开关无效/有效")
    EN("PRGSW 0/1:Disable/Enable Program switch")},
    {CN("MVOPE 0/1:加工中不/可以修改宏变量")
    EN("MVOPE 0/1:Disable/Enable macro value modifying when operation")},
    {CN("QMDI 0/1:位置界面快捷MDI功能打开/关闭")
    EN("QMDI 0/1:Quick MDI in POS screen open/close")},
    {CN("PRTSC 0/1:按\"输出\"键截屏,关闭/打开")
    EN("PRTSC 0/1:Disable/Enable press OUT key to print screen")},
    {CN("RTPOS 0/1:返回顶层按钮时,同时返回位置界面:关闭/打开")
    EN("RTPOS 0/1:Return POS screen when return top menu, OFF/ON")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2004;1
    //LG_STR nszParOperPwdSet[9][LG_NUM] =
    {CN("操作密码设置")//0+
    EN("Operation password settings")},
    {CN("PARPS 0/1:参数密码无效/有效")
    EN("PARPS 0/1:Disable/Enable Parameter password")},
    {CN("PRGPS 0/1:程序密码无效/有效")
    EN("PRGPS 0/1:Disable/Enable Program password")},
    {CN("CMCPS 0/1:清机床坐标不/需要密码")
    EN("CMCPS 0/1:Disable/Enable clear machine coor. password")},
    {CN("POPS 0/1:开机密码无效/有效")
    EN("POPS 0/1:Disable/Enable power-on password")},
    {CN("O9KPS 0/1:O9xxx程序编辑密码无效/有效")
    EN("O9KPS 0/1:Disable/Enable password for O9xxx edit")},
    {CN("O8KPS 0/1:O8xxx程序编辑密码无效/有效")
    EN("O8KPS 0/1:Disable/Enable password for O8xxx edit")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2006;1
    //LG_STR nszParPrgShow[9][LG_NUM] =
    {CN("程序显示相关设置")
    EN("Function settings")},
	{CN("SO9K 0/1:显示/不显示O9xxx程序内容")
	EN("SO9K 0/1:Show/Hide O9xxx program content")},
	{CN("SO8K 0/1:显示/不显示O8xxx程序内容")
	EN("SO8K 0/1:Show/Hide O8xxx program content")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2007;1
    //LG_STR nszParManualMoveSet[9][LG_NUM] =
    {CN("手动运行相关设置")
    EN("manual move settings")},
	{CN("MIR 0/1:手动干预返回功能,无效/有效")
	EN("MIR 0/1:The manual intervention return function OFF/ON")},
	{CN("")
	EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2100;1
    //LG_STR nszParMIISet[9][LG_NUM] =
    {CN("MII总线相关设置")
    EN("MII bus settings")},
    {CN("MIIE 0/1:MII总线字节数17/32")
    EN("MIIE 0/1:MII bus bytes 17/32")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2101;1
	//LG_STR nszParMIIRetry[LG_NUM] =
	{CN("MII通讯重试次数") //200+
	EN("MII retry count")},
//2115;1
    //LG_STR nszParModBusSet[9][LG_NUM] =
    {CN("ModBus总线相关设置")
    EN("ModBus settings")},
    {CN("MBBL 0/1:32位数据采用大端/小端")
    EN("MBBL 0/1:32-bit data use big-endian/little-endian mode")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2116;1
	//LG_STR nszModbusSlvAddr[LG_NUM] =
	{CN("Modbus从站站地址") //200+
	EN("Modbus slave address")},
//2117;1
	//LG_STR nszUartBaudRate[LG_NUM] =
	{CN("串口通讯波特率(4800,9600,19200,38400,57600,115200,128000)") //200+
	EN("Serrial port baud rate(4800,9600,19200,38400,57600,115200,128000)")},

	//LG_STR nszParChnType[LG_NUM] =
	{CN("通道类型(0:车床, 1:铣床)") //200+
	EN("Channel type")},
//2011;1
	//LG_STR nszParLanguageType[LG_NUM] =
	{CN("语言选择(0:中文(Chinese), 1:英文(English))")
	EN("Language(0:Chinese(中文), 1:English(英文))")},

	//LG_STR nszParAxisChn[LG_NUM] =
	{CN("轴所属通道号")
	EN("Channel of axis")},
//2020;1
	//LG_STR nszParSeqNo[LG_NUM] =
	{CN("编辑递增序号")
	EN("Increment in sequence numbers when edit")},
//2220;1
	//LG_STR nszParPrgPowerOn[LG_NUM] =
	{CN("上电打开程序号")
	EN("Prog. No when power-on")},
//2031;1
	//LG_STR nszParPowerOnScreenDly[LG_NUM] =
	{CN("开机画面显示延时(ms)")
	EN("Power-on screen display delay")},
//2032;1
	//LG_STR nszParShowSpdlNum[LG_NUM] =
	{CN("位置界面显示当前通道主轴的个数")
	EN("Spindle Num of current channel display on POS screen")},
//2035;1
	//LG_STR nszParSysAxisNum[LG_NUM] =
	{CN("系统中轴个数")
	EN("Axis num of system")},
//2036;1
	//LG_STR nszParSysSpdlNum[LG_NUM] =
	{CN("系统中主轴个数")
	EN("Spindle num of system")},

    //-------------------------------------------------------------------------
    // 程序 ##PROG ##PRG ##1100
    //-------------------------------------------------------------------------
//2200;1
	//LG_STR nszParProgSet[9][LG_NUM] =
	{CN("程序相关设置")
	EN("Program settings")},
	{CN("GSB 0/1:车床系统选择G代码体系A/B")
    EN("GSB 0/1:Lathe machine select G code system A/B")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2201;1
	//LG_STR nszParProgModalSet[9][LG_NUM] =
	{CN("程序模态上电相关设置")
	EN("Program modal settings")},
	{CN("MG01 0/1:上电时为G00/G01模式")
	EN("MG01 0/1:G00/G01 when power-on")},
	{CN("MG61 0/1:上电时为G64/G61模式")
	EN("MG61 0/1:G00/G01 when cycle start")},
	{CN("MFPR 0/1:上电时处于每分进给/每转进给模式")
	EN("MFPR 0/1:At feed per minute/revolution when power-on")},
	{CN("MG17 0/1:上电时为G18/G17模式")
	EN("MG17 0/1:G18/G17 when power-on")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2202;1
	//LG_STR nszParProgModalRstSet[9][LG_NUM] =
	{CN("程序模态复位相关设置")
	EN("Program modal RESET settings")},
	{CN("RG01 0/1:复位时,不/复位G00G01模态至上电状态")
	EN("RG01 0/1:NO/RESET G00G01 modal to power-on when RESET")},
	{CN("RG61 0/1:复位时,不/复位G64G61模态至上电状态")
	EN("RG61 0/1:NO/RESET G64G61 modal to power-on when RESET")},
	{CN("RFPR 0/1:复位时,不/复位每分进给或每转进给模式至上电状态")
	EN("RFPR 0/1:At feed per minute-revolution when power-on")},
	{CN("RG17 0/1:复位时,不/复位G17G18G19模态至上电状态")
	EN("RG17 0/1:NO/RESET G17G18G19 modal to power-on when RESET")},
	{CN("RG90 0/1:复位时,不/复位G90G91模态至上电状态")
	EN("RG90 0/1:NO/RESET G90G91 modal to power-on when RESET")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2203;1
	//LG_STR nszParProgCtrlSet[9][LG_NUM] =
	{CN("程序控制相关设置")
	EN("Program control settings")},
	{CN("AOCK 0/1:圆弧中心点检测关闭/打开")
	EN("AOCK 0/1:Arc origin check disable/enable")},
	{CN("G00L 0/1:G00运动方式为各轴以最高速度运动/线性同动")
    EN("G00L 0/1:G00 rapid move separately/in line")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2205;1
	//LG_STR nszParProgBufSet[9][LG_NUM] =
	{CN("程序预读控制相关设置")
	EN("Program buffer control settings")},
	{CN("TNB 0/1:执行换刀指令不/抑制程序缓冲")
	EN("TNB 0/1:Program block buffer/NOT buffer when tool change")},
	{CN("M91NB 0/1:M91指令不/抑制程序缓冲")
	EN("M91NB 0/1:Program block buffer/NOT buffer when M91")},
	{CN("G10NB 0/1:G10指令不/抑制程序缓冲")
	EN("G10NB 0/1:Program block buffer/NOT buffer when G10")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2206;1
	//LG_STR nszParMCmdSet[9][LG_NUM] =
	{CN("M功能相关设置")
	EN("M function settings")},
	{CN("M30CP 0/1:执行M30时不计数/计数")
	EN("M30CP 0/1:The part number not count/count when M30")},
	{CN("M99CP 0/1:执行主程序中的M99时不计数/计数")
	EN("M99CP 0/1:The part number not count/count when M99 in main program")},
	{CN("M30CC 0/1:执行M30时不清除/清除计数")
	EN("M30CC 0/1:M30 part number not clear count/clear count")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2209;1
    //LG_STR nszParProgPowerOnSet[9][LG_NUM] =
    {CN("上电时程序相关设置")
    EN("Power-On display settings")},
    {CN("PNPO 0/1:上电时,打开当前程序/指定程序")
    EN("PNPO 0/1:Open current/specified program when power")},
    {CN("MHPO 0/1:上电时,恢复断电时的程序位置/返回主程序头")
    EN("MHPO 0/1:Locate program position at power-off/main program head when power")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2210;1
	//LG_STR nszParMaxArcRErrSet[LG_NUM] =
	{CN("圆弧中心检查时最大半径误差")
	EN("Max radius error when arc origin check")},
//2221;1
	//LG_STR nszParSpdlSpeedPowerOn[LG_NUM] =
	{CN("上电时各主轴默认设定转速")
	EN("Spindles setting speed when power-on")},
//2222;1
	//LG_STR nszParChnFPMPowerOn[LG_NUM] =
	{CN("上电时默认设定进给速度(mm/min)")
	EN("Feedrate setting when power-on(mm/min)")},
//2223;1
	//LG_STR nszParChnFPRPowerOn[LG_NUM] =
	{CN("上电时默认设定进给速度(mm/rev)")
	EN("Feedrate setting when power-on(mm/rev)")},
//2310;1
	//LG_STR nszParG00OverlapRatio[LG_NUM] =
	{CN("G00间过渡启动速度比")
	EN("G00 reduction ratio for overlapping blocks")},

	//LG_STR nszParCutOverlapRatio[LG_NUM] =
	{CN("切削过渡启动速度比")
	EN("Cut reduction ratio for overlapping blocks")},

    //-------------------------------------------------------------------------
    // ##TCOMP ##TOFS ##2500
    //-------------------------------------------------------------------------
//2500;1
	//LG_STR nszParToolCompensationSet[9][LG_NUM] =
	{CN("刀具补偿相关设置")
	EN("Tool compensation setting")},
	{CN("CCC 0/1:刀具半径补偿时,外边拐角的连接方式为直线/圆弧")
    EN("CCC 0/1:In tool radius comp.,the outer corner connect with line/arc")},
	{CN("CSBK 0/1:刀具半径补偿内部创建的程序段不单段停止/单段停止")
    EN("CSBK 0/1:Block internally for tool radius comp.,Single block stop NOT/performed")},
	{CN("CCSN 0/1:刀具半径补偿为缩短型补偿时,不/判断下一段过短")
	EN("CCSN 0/1:NO/Check next segment too short when cutter compensation,")},
	{CN("保留")
	EN("RSV")},
	{CN("TOEO 0/1:加工中修改刀补时,下一个T指令/下一段后,新刀补值有效")
	EN("TOEO 0/1:New tool offset effective at next offset command/segment, when MDI offset changing in operation")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2501;1
	//LG_STR nszParToolCompensationInputSafeSet[9][LG_NUM] =
	{CN("刀具补偿输入安全相关设置")
	EN("Tool compensation input safety setting")},
	{CN("TOIE 0/1:刀具偏置界面,增量输入方式快捷键(UVW)关闭/打开")
    EN("TOIE 0/1:Disable/Enable incremental input shortcut key(UVW) in tool offset screen")},
	{CN("TWAE 0/1:刀具磨损界面,绝对输入方式快捷键(XYZ)关闭/打开")
    EN("TWAE 0/1:Disable/Enable absolute input shortcut key(XYZ) in tool wear screen")},
	{CN("TWAI 0/1:刀具磨损界面,快捷键(XYZ)用作增量输入关闭/打开")
    EN("TWAI 0/1:Disable/Enable shortcut key(XYZ) used as incremental input in tool wear screen")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2510;1
	//LG_STR nszParToolwearMax[LG_NUM] =
	{CN("刀具磨损补偿量最大值")
	EN("Maximum value of tool wear compensation")},
//2511;1
	//LG_STR nszParToolwearIncMax[LG_NUM] =
	{CN("刀具磨损补偿量增量输入的最大值")
	EN("Maximum value of incremental input for tool wear compensation")},
    //-------------------------------------------------------------------------
    // ##TLIFE ##2600
    //-------------------------------------------------------------------------
//2600;1
	//LG_STR nszParToolLifeSet[9][LG_NUM] =
	{CN("刀具寿命相关设置")
	EN("Tool life setting")},
	{CN("TLEN 0/1:刀具寿命管理功能无效/有效")
	EN("TLEN 0/1:Tool life manager disable/enable")},
	{CN("TLM6 0/1:通过T/M06指令管理具寿命")
	EN("TLM6 0/1:Use T/M06 code to manage tool life")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

    //-------------------------------------------------------------------------
    // ##IO ##2700
    //-------------------------------------------------------------------------
//2700;1
	//LG_STR nszParDIDOSet[9][LG_NUM] =
	{CN("输入信号设置")
	EN("DI setting")},
	{CN("ESPC 0/1:急停(ESP)为常开/常闭")
    EN("ESPC 0/1:ESP signal is normal open/close")},
	{CN("ESP2C 0/1:急停(ESP2)为常开/常闭")
    EN("ESP2C 0/1:ESP2 signal is normal open/close")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2710;1
	//LG_STR nszParDIWidth[LG_NUM] =
	{CN("输入信号宽度(ms)")
	EN("DI signal width(ms)")},
//2711;1
	//LG_STR nszParDIEsp[LG_NUM] =
	{CN("急停输入口")
	EN("ESP DI")},
//2712;1
	//LG_STR nszParDIEsp2[LG_NUM] =
	{CN("急停2输入口")
	EN("ESP2 DI")},
//2720;1
	//LG_STR nszParBusIOStationAddr[LG_NUM] =
	{CN("总线IO站地址")
	EN("Bus IO station address")},
//2723;12
	//LG_STR nszParBusIOStationDIWidth[LG_NUM] =
	{CN("总线IO站输入信号宽度(ms)")
	EN("Bus IO station DI signal width(ms)")},
//2721;1
	//LG_STR nszParBusIOXStartDI[LG_NUM] =
	{CN("总线IO站输入口的X起始地址")
	EN("Bus DI station X start for input port")},
//2722;12
	//LG_STR nszParBusIOYStartDO[LG_NUM] =
	{CN("总线IO站输出口的Y起始地址")
	EN("Bus DI station Y start for output port")},
//2725;12
	//LG_STR nszParBusIOXStartAD[LG_NUM] =
	{CN("总线IO站AD的X起始地址")
	EN("Bus DI station X start for AD")},

    //-------------------------------------------------------------------------
    // ##PLC 3000
    //-------------------------------------------------------------------------
    //PLC/开放PLC设置 3200+
//3000;1
	//LG_STR nszParPlcSet[9][LG_NUM] =
	{CN("PLC相关设置")
	EN("PLC settings")},
	{CN("PLCEN 0/1:关闭/打开开放式PLC")
	EN("PLCEN 0/1:Disable/Enable Open PLC")},
	{CN("EFPLS 0/1:开放式PLC时,关闭/打开内置PLC")
	EN("EFPLS 0/1:Disable/Enable internal PLC when open plc enabled")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3001;1
	//LG_STR nszParInterlockSet[9][LG_NUM] =
	{CN("互锁信号相关设置")
	EN("Interlock signal settings")},
	{CN("ITX 0/1:关闭/打开各轴互锁功能")
	EN("ITX 0/1:Disable/Enable Interlock for each axis")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
    //内嵌PLC设置
//3300;1
	//LG_STR nszParFixPlcSet1[9][LG_NUM] =
	{CN("内置PLC功能设置相关1")
	EN("Fixed PLC settings 1")},
	{CN("FXOV 0/1:外接进给倍率关闭/打开")
    EN("FXOV 0/1:external feedrate override off/on")},
	{CN("MLEN 0/1:机床锁功能关闭/打开")
	EN("MLEN 0/1:Machine lock function off/on")},
	{CN("SXOV 0/1:外接主轴倍率关闭/打开")
    EN("SXOV 0/1:external spindle override off/on")},
	{CN("保留")
	EN("reserved")},
	{CN("JKU 0/1:各轴手动移动键自定义,关闭/打开")
	EN("JKU 0/1:jog key defined by user,disable/enable")},
	{CN("RTM 0/1:手动快速键不保持/保持")
	EN("RTM 0/1:RT key not/keep state")},
	{CN("EHDC 0/1:外接进给保持为常开/常闭")
	EN("EHDC 0/1:External feed-hold sigal is normal open/close")},
	{CN("SPSSP 0/1:进给保持时,不/停主轴")
	EN("SPSSP 0/1:NO/STOP spindle when feed hold")},
//3301;1
	//LG_STR nszParFixPlcSet2[9][LG_NUM] =
	{CN("内置PLC功能设置相关2")
	EN("Fixed PLC settings 2")},
	{CN("CFM8 0/1:内置PLC时,M08M09功能有效/关闭")
    EN("CFM8 0/1:M08M09 Open/Close when fixed PLC")},
	{CN("CFM32 0/1:内置PLC时,M32M33功能有效/关闭")
    EN("CFM32 0/1:M32M33 Open/Close when fixed PLC")},
	{CN("CFM78 0/1:内置PLC时,M78M79功能有效/关闭")
    EN("CFM78 0/1:M78M79 Open/Close when fixed PLC")},
	{CN("CFM10 0/1:内置PLC时,M10M11功能有效/关闭")
    EN("CFM10 0/1:M10M11 Open/Close when fixed PLC")},
	{CN("CFSP 0/1:内置PLC时,主轴PLC功能有效/关闭")
    EN("CFSP 0/1:Spindle plc Open/Close when fixed PLC")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
//3302;1
	//LG_STR nszParFixPlc3SwitchSet[9][LG_NUM] =
	{CN("内置PLC三位开关相关设置")
	EN("Fixed PLC tri-switch settings")},
	{CN("TSW 0/1:外接三位开关无效/有效")
    EN("TSW 0/1:External tri-Switch disable/enable")},
	{CN("TSWDS 0/1:三位开关运行允许时,直接启动加工无效/有效")
	EN("TSWDS 0/1:Tri-Switch start run disable/enable")},
	{CN("TSWRC 0/1:三位开关运行允许为常开/常闭")
    EN("TSWRC 0/1:Tri-Switch auto-run enable is normal open/close")},
	{CN("TSWSC 0/1:三位开关主轴停为常开/常闭")
    EN("TSWSC 0/1:Tri-Switch spindle stop is normal open/close")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3303;1
	//LG_STR nszParFixPlcSafeDoorSet[9][LG_NUM] =
	{CN("内置PLC安全门相关设置")
	EN("Fixed PLC Safe-Door settings")},
	{CN("SFDR 0/1:防护门无效/有效")
    EN("SFDR 0/1:Safe door disable/enable")},
	{CN("SFDSP 0/1:防护门报警时不停/停加工")
	EN("SFDSP 0/1:Safe door alarm not/stop run")},
	{CN("SFDC 0/1:防护门到位信号为常开/常闭")
	EN("SFDC 0/1:Safe door in position sigal is normal open/close")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3313;1
	//LG_STR nszParFixPlcOutput[9][LG_NUM] =
	{CN("内置PLC输出设置")
	EN("Fixed PLC output settings")},
	{CN("M08P 0/1:M08输出为电平/脉冲")
    EN("M08P 0/1:M08 output type:level/pulse")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3310;1
	//LG_STR nszParFixPlcMRSTSet[9][LG_NUM] =
	{CN("内置PLC M功能复位相关设置")
	EN("Fixed PLC M settings")},
	{CN("M30M5 0/1:M30时不输出/输出M05")
	EN("M30M5 0/1:NOT/OUT M05 when M30")},
	{CN("M30M9 0/1:M30时不输出/输出M09")
	EN("M30M9 0/1:NOT/OUT M09 when M30")},
	{CN("RSTM5 0/1:复位时不输出/输出M05")
	EN("RSTM5 0/1:NOT/OUT M05 when RESET")},
	{CN("RSTM9 0/1:复位时不输出/输出M09")
	EN("RSTM9 0/1:NOT/OUT M09 when RESET")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3311;123456
	//LG_STR nszParFixPlcRstDo[9][LG_NUM] =
	{CN("内置PLC复位时关闭输出口")
	EN("Fixed PLC RST DO close")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3312;1
	//LG_STR nszParFixPlcPowerOnSet[9][LG_NUM] =
	{CN("内置PLC上电初始化相关设置")
	EN("Fixed PLC M settings")},
	{CN("WKLPO 0/1:上电时,关闭/打开工作灯")
	EN("WKLPO 0/1:OFF/ON work lamp when power-on")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3315;1
	//LG_STR nszParFixPlcUserKey[9][LG_NUM] =
	{CN("User键快捷宏调用相关设置")
	EN("User key settings")},
	{CN("MCUK1 0/1:USER1不/执行快捷宏指令调用(+0)")
	EN("MCUK1 0/1:USER1 no/use one-touch macro call(+0)")},
	{CN("MCUK2 0/1:USER2不/执行快捷宏指令调用(+1)")
	EN("MCUK2 0/1:USER2 no/use one-touch macro call(+1)")},
	{CN("MCUK3 0/1:USER3不/执行快捷宏指令调用(+2)")
	EN("MCUK3 0/1:USER3 no/use one-touch macro call(+2)")},
	{CN("MCUK4 0/1:USER4不/执行快捷宏指令调用(+3)")
	EN("MCUK4 0/1:USER4 no/use one-touch macro call(+3)")},
	{CN("MCUK5 0/1:USER5不/执行快捷宏指令调用(+4)")
	EN("MCUK5 0/1:USER5 no/use one-touch macro call(+4)")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3320;1
	//LG_STR nszParFixPlcWorkLampKey[9][LG_NUM] =
	{CN("工作灯键复用相关设置")
	EN("Worklamp key mux settings")},
	{CN("WLSC 0/1:工作灯用作主轴1锁紧,无效/有效")
    EN("WLSC 0/1:Worklamp use as spindle 1 clamp, disable/enable")},
	{CN("WLOS 0/1:工作灯用作选择停,无效/有效")
	EN("WLOS 0/1:Worklamp use as optional stop, disable/enable")},
	{CN("WLS2 0/1:工作灯用作第2主轴启停,无效/有效")
	EN("WLS2 0/1:Worklamp use as spindle2 start or stop, disable/enable")},
	{CN("WLS2C 0/1:工作灯用作主轴2锁紧,无效/有效")
    EN("WLS2C 0/1:Worklamp use as spindle 2 clamp, disable/enable")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("WLEN 0/1:工作灯功能无效/有效")
    EN("WLEN 0/1:Worklamp diable/enable")},

	//LG_STR nszParFixPlcUser1Key[9][LG_NUM] =
	{CN("User1键复用相关设置")
	EN("User1 key mux settings")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

    //3400+
	//LG_STR nszParPlcAxisSet[9][LG_NUM] =
	{CN("PLC轴设置")
	EN("PLC axis setting")},
    {CN("")
    EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3332;1
	//LG_STR nszParSTMinTime[LG_NUM] =
	{CN("启动信号最小时间")
	EN("ST signal min time")},
//3333;1
	//LG_STR nszParSTMaxTime[LG_NUM] =
	{CN("启动信号时间上限")
	EN("ST signal max time")},
//3330;1
	//LG_STR nszParDIExternStart[LG_NUM] =
	{CN("外接启动输入口")
	EN("External start DI")},
//3331;1
	//LG_STR nszParDIExternHold[LG_NUM] =
	{CN("外接保持输入口")
	EN("External hold DI")},
//3340;1
	//LG_STR nszParDOCool[LG_NUM] =
	{CN("M08输出口")
	EN("M08 DO")},
//3341;1
	//LG_STR nszParTimeM08[LG_NUM] =
	{CN("M08延时时间(ms)")
	EN("M08 delay time(ms)")},

	//LG_STR nszParDITriSwichLeft[LG_NUM] =
	{CN("三位开关运行允许输入口")
	EN("Tri-swich run enable DI")},
//3335;1
	//LG_STR nszParDITriSwichRight[LG_NUM] =
	{CN("三位开关主轴停输入口")
	EN("Tri-swich spindle stop DI")},
//3350;1
	//LG_STR nszParDISafeDoor[LG_NUM] =
	{CN("防护门输入口")
	EN("Safe door DI")},
//3351;1
	//LG_STR nszParDOWorkLamp[LG_NUM] =
	{CN("工作灯输出口")
	EN("Work lamp DO")},
//3355;1
	//LG_STR nszParDORunLamp[LG_NUM] =
	{CN("三色灯运行指示灯输出口")
	EN("Run lamp DO")},
//3356;1
	//LG_STR nszParDOAlmLamp[LG_NUM] =
	{CN("三色灯报警指示灯输出口")
	EN("Alarm lamp DO")},
//3357;1
	//LG_STR nszParDOHoldLamp[LG_NUM] =
	{CN("三色灯停止指示灯输出口")
	EN("Stop lamp DO")},
//3360;1
	//LG_STR nszParDIFeedOvA[LG_NUM] =
	{CN("进给倍率开关*1输入口")
	EN("Feedrate override DI *1")},
//3361;1
	//LG_STR nszParDIFeedOvB[LG_NUM] =
	{CN("进给倍率开关*2输入口")
	EN("Feedrate override DI *2")},
//3362;1
	//LG_STR nszParDIFeedOvE[LG_NUM] =
	{CN("进给倍率开关*4输入口")
	EN("Feedrate override DI *4")},
//3363;1
	//LG_STR nszParDIFeedOvF[LG_NUM] =
	{CN("进给倍率开关*8输入口")
	EN("Feedrate override DI *8")},
    //-------------------------------------------------------------------------
    // ##FUNC
    //-------------------------------------------------------------------------
     //4200+
	//LG_STR nszParJogSet[9][LG_NUM] =
	{CN("各轴手动设置")
	EN("Jog settings")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

//9000;1
	//LG_STR nszParMacroSet[9][LG_NUM] =
	{CN("宏程序相关设置")
	EN("Program settings")},
	{CN("TCS 0/1:换刀调用子程序功能关闭/开放")
	EN("TCS 0/1:Tool change call subprogram disable/enable")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

    //LG_STR nszParM06ProgNumber[LG_NUM] =
    {CN("M06调用的子程序号")
     EN("M06 subprogram number")},
//9010;1
    //LG_STR nszParTProgNumber[LG_NUM] =
    {CN("换刀调用的子程序号")
     EN("Tool subprogram number")},
//9020;1
    //LG_STR nszParGMCallNum[LG_NUM] =
    {CN("G代码宏程序调用个数")
     EN("G code macro-call num")},
//9021;1
     //LG_STR nszParGMCallPrgFirst[LG_NUM] =
    {CN("G代码子程序调用的开头程序号")
     EN("First program for G code macro call")},
//9022;1
     //LG_STR nszParGMCallGCode0[LG_NUM] =
    {CN("宏程序调用的G代码号0")
     EN("G code used for macro-call 0")},
//9023;1
     //LG_STR nszParGMCallGCode1[LG_NUM] =
    {CN("宏程序调用的G代码号1")
     EN("G code used for macro-call 1")},
//9024;1
     //LG_STR nszParGMCallGCode2[LG_NUM] =
    {CN("宏程序调用的G代码号2")
     EN("G code used for macro-call 2")},
//9025;1
     //LG_STR nszParGMCallGCode3[LG_NUM] =
    {CN("宏程序调用的G代码号3")
     EN("G code used for macro-call 3")},
//9026;1
     //LG_STR nszParGMCallGCode4[LG_NUM] =
    {CN("宏程序调用的G代码号4")
     EN("G code used for macro-call 4")},
//9027;1
     //LG_STR nszParGMCallGCode5[LG_NUM] =
    {CN("宏程序调用的G代码号5")
     EN("G code used for macro-call 5")},
//9028;1
     //LG_STR nszParGMCallGCode6[LG_NUM] =
    {CN("宏程序调用的G代码号6")
     EN("G code used for macro-call 6")},
//9029;1
     //LG_STR nszParGMCallGCode7[LG_NUM] =
    {CN("宏程序调用的G代码号7")
     EN("G code used for macro-call 7")},
//9030;1
     //LG_STR nszParGMCallGCode8[LG_NUM] =
    {CN("宏程序调用的G代码号8")
     EN("G code used for macro-call 8")},
//9031;1
     //LG_STR nszParGMCallGCode9[LG_NUM] =
    {CN("宏程序调用的G代码号9")
     EN("G code used for macro-call 9")},
//9040;1
    //LG_STR nszParMSCallNum[LG_NUM] =
    {CN("M代码子程序调用个数")
     EN("M code sub-call num")},
//9041;1
     //LG_STR nszParMSCallPrgFirst[LG_NUM] =
    {CN("M代码子程序调用的开头程序号")
     EN("First program for M code sub call")},
//9042;1
     //LG_STR nszParMSCallMCode0[LG_NUM] =
    {CN("子程序调用的M代码号0")
     EN("M code used for sub-call 0")},
//9043;1
     //LG_STR nszParMSCallMCode1[LG_NUM] =
    {CN("子程序调用的M代码号1")
     EN("M code used for sub-call 1")},
//9044;1
     //LG_STR nszParMSCallMCode2[LG_NUM] =
    {CN("子程序调用的M代码号2")
     EN("M code used for sub-call 2")},
//9045;1
     //LG_STR nszParMSCallMCode3[LG_NUM] =
    {CN("子程序调用的M代码号3")
     EN("M code used for sub-call 3")},
//9046;1
     //LG_STR nszParMSCallMCode4[LG_NUM] =
    {CN("子程序调用的M代码号4")
     EN("M code used for sub-call 4")},
//9047;1
     //LG_STR nszParMSCallMCode5[LG_NUM] =
    {CN("子程序调用的M代码号5")
     EN("M code used for sub-call 5")},
//9048;1
     //LG_STR nszParMSCallMCode6[LG_NUM] =
    {CN("子程序调用的M代码号6")
     EN("M code used for sub-call 6")},
//9049;1
     //LG_STR nszParMSCallMCode7[LG_NUM] =
    {CN("子程序调用的M代码号7")
     EN("M code used for sub-call 7")},
//9050;1
     //LG_STR nszParMSCallMCode8[LG_NUM] =
    {CN("子程序调用的M代码号8")
     EN("M code used for sub-call 8")},
//9051;1
     //LG_STR nszParMSCallMCode9[LG_NUM] =
    {CN("子程序调用的M代码号9")
     EN("M code used for sub-call 9")},
//9060;1
    //LG_STR nszParMMCallNum[LG_NUM] =
    {CN("M代码宏程序调用个数")
     EN("M code macro-call num")},
//9061;1
     //LG_STR nszParMMCallPrgFirst[LG_NUM] =
    {CN("M代码宏程序调用的开头程序号")
     EN("First program for M code macro call")},
//9062;1
     //LG_STR nszParMMCallMCode0[LG_NUM] =
    {CN("宏程序调用的M代码号0")
     EN("M code used for macro-call 0")},
//9063;1
     //LG_STR nszParMMCallMCode1[LG_NUM] =
    {CN("宏程序调用的M代码号1")
     EN("M code used for macro-call 1")},
//9064;1
     //LG_STR nszParMMCallMCode2[LG_NUM] =
    {CN("宏程序调用的M代码号2")
     EN("M code used for macro-call 2")},
//9065;1
     //LG_STR nszParMMCallMCode3[LG_NUM] =
    {CN("宏程序调用的M代码号3")
     EN("M code used for macro-call 3")},
//9066;1
     //LG_STR nszParMMCallMCode4[LG_NUM] =
    {CN("宏程序调用的M代码号4")
     EN("M code used for macro-call 4")},
//9067;1
     //LG_STR nszParMMCallMCode5[LG_NUM] =
    {CN("宏程序调用的M代码号5")
     EN("M code used for macro-call 5")},
//9068;1
     //LG_STR nszParMMCallMCode6[LG_NUM] =
    {CN("宏程序调用的M代码号6")
     EN("M code used for macro-call 6")},
//9069;1
     //LG_STR nszParMMCallMCode7[LG_NUM] =
    {CN("宏程序调用的M代码号7")
     EN("M code used for macro-call 7")},
//9070;1
     //LG_STR nszParMMCallMCode8[LG_NUM] =
    {CN("宏程序调用的M代码号8")
     EN("M code used for macro-call 8")},
//9071;1
     //LG_STR nszParMMCallMCode9[LG_NUM] =
    {CN("宏程序调用的M代码号9")
     EN("M code used for macro-call 9")},
//9080;1
     //LG_STR nszParQMCNum[LG_NUM] =
    {CN("快捷宏指令调用的程序个数")
     EN("One-touch macro call num")},
//9085;1
     //LG_STR nszParEMCInput0[LG_NUM] =
    {CN("外接快捷宏调用入口0")
     EN("Ext macro call input 0")},
//9086;1
     //LG_STR nszParEMCInput1[LG_NUM] =
    {CN("外接快捷宏调用入口1")
     EN("Ext macro call input 1")},
//9087;1
     //LG_STR nszParEMCInput2[LG_NUM] =
    {CN("外接快捷宏调用入口2")
     EN("Ext macro call input 2")},
//9088;1
     //LG_STR nszParEMCInput3[LG_NUM] =
    {CN("外接快捷宏调用入口3")
     EN("Ext macro call input 3")},
//9089;1
     //LG_STR nszParEMCInput4[LG_NUM] =
    {CN("外接快捷宏调用入口4")
     EN("Ext macro call input 4")},

     // ##THREAD
    //LG_STR nszParThreadSetting[9]][LG_NUM] =
//5000;1
    {CN("螺纹相关设置")
    EN("Thread settings")},
    {CN("THTT 0/1:螺纹退尾长度,按照时间常数(5012)/退尾长度系数(5016)")
    EN("THTT 0/1:thread end distance controled by time const(5012)/tail ratio(5016)")},
    {CN("保留")
	EN("RSV")},
	{CN("THQU 0/1:螺纹指令中起始角Q单位为1.0度/单位为0.001度")
	EN("THQU 0/1:unit of Q is 1.0 degress/is 0.001 degree")},
	{CN("THLAS 0/1:螺纹启动时,按照时间常数(5012)/等于退尾距离")
	EN("THLAS 0/1:thread start distance free/equal to tail distance")},
	{CN("THFC 0/1:螺纹加工时,不检测/检测切削速度超限")
    EN("THFC 0/1:No/detect feedrate limit when thread")},
	{CN("THFS 0/1:螺纹加工时,不/进行切削速度平滑")
	EN("THFS 0/1:Disable/Enable feedrate smooth when thread")},
	{CN("THHM 0/1:螺纹循环时,不/使用高速模式")
	EN("THHM 0/1:Disable/Enable high speed mode when thread cycle")},
	{CN("THHC 0/1:螺纹循环时(G76),不/关闭螺纹起点高度检查")
	EN("THHC 0/1:No/Close start point height check when thread cycle(G76)")},
//5012;1
    //LG_STR nszParThreadTimeCnst[LG_NUM] =
    {CN("螺纹加工各轴加减速时间常数(ms)")
     EN("time constant of thread(ms)")},
//5011;1
    //LG_STR nszParThreadFeedFilterRatio[LG_NUM] =
    {CN("螺纹加工时速度平滑系数(0~100),0:不滤波")
    EN("Feed filter ratio when thread(0~100),0:close")},

    //LG_STR nszParThreadTailTimeCnst[LG_NUM] =
    {CN("螺纹加工退尾加减速时间常数(ms)")
    EN("time constant of thread tail(ms)")},
//5010;1
    //LG_STR nszParThreadMaxF[LG_NUM] =
    {CN("螺纹加工速度上限(=0:不检查)")
    EN("Max Feed of thread(=0:No check)")},
//5015;1
    //LG_STR nszParThreadTailFL[LG_NUM] =
    {CN("螺纹退尾加减速的低速FL")
    EN("Feed(FL) of thread tail")},
//5016;1
    //LG_STR nszParThreadTailK[LG_NUM] =
    {CN("螺纹退尾长度系数(单位:0.1导程)")
    EN("Thread tail length ratio(Unit:0.1 lead)")},
//5017;1
    //LG_STR nszParThreadTailAng[LG_NUM] =
    {CN("螺纹退尾角度")
    EN("Thread tail angle")},

    //LG_STR nszParThreadScrewInTimeCnst[LG_NUM] =
    {CN("螺纹旋进加减速时间常数(ms)")
    EN("time constant of thread head cut(ms)")},

    //LG_STR nszParThreadScrewInFL[LG_NUM] =
    {CN("螺纹旋进加减速时的低速FL")
    EN("Feed(FL) of thread head cut")},
//5025;1
    //LG_STR nszParThreadSpdlLow[LG_NUM] =
    {CN("螺纹加工主轴转速下限(rpm)(=0:不检查)")
    EN("Thread cut spindle lowest speed(rpm)(=0:No check)")},
//5026;1
    //LG_STR nszParThreadSpdlSpeedArriveRange[LG_NUM] =
    {CN("螺纹加工时,主轴转速到达窗口范围(百分比)(=0:不检查)")
    EN("Thread cut spindle speed arrive range(percent)(=0:No check)")},
//5027;1
    //LG_STR nszParThreadSpdlWaitTime[LG_NUM] =
    {CN("螺纹加工等待时间上限(=0:忽略)")
    EN("Thread cut wait time max.(=0:ignore)")},
//5030;1
    //LG_STR nszParG76Qdmin[LG_NUM] =
    {CN("G76螺纹循环的最小切削量")
    EN("G76 Qd min")},
//5031;1
    //LG_STR nszParG76Rd[LG_NUM] =
    {CN("G76螺纹循环的精切量")
    EN("G76 Rd")},
//5032;1
    //LG_STR nszParG76Pm[LG_NUM] =
    {CN("G76螺纹循环的精削重复次数Pm")
    EN("G76 Pm")},
//5033;1
    //LG_STR nszParG76Pr[LG_NUM] =
    {CN("G76螺纹循环的退尾长度系数Pr(单位:0.1导程)")
    EN("G76 thread tail length ratio Pr(Unit:0.1 lead)")},
//5034;1
    //LG_STR nszParG76Pa[LG_NUM] =
    {CN("G76螺纹循环的刀尖角度Pa")
    EN("G76 Pa")},
//5037;1
    //LG_STR nszParG76CutInCompz[LG_NUM] =
    {CN("G76螺纹循环时,进刀倾斜补偿角度")
    EN("Cut-in angle of inclination when G76")},
//5035;1
    //LG_STR nszParG76CutType[LG_NUM] =
    {CN("G76螺纹循环的切削方式选择(0:单边,1:交错)")
    EN("G76 cutting type select")},
//5036;1
    //LG_STR nszParG76StartType[LG_NUM] =
    {CN("G76螺纹循环的起点类型选择(0:标准,1:牙尖和G92螺纹一致)")
    EN("G76 start point select")},

//5100;1
    //LG_STR nszParCannedCycleSetting[9]][LG_NUM] =
    {CN("固定循环相关设置")
     EN("Canned cycle settings")},
    {CN("HSDC 0/1:G83和G87为深孔钻削循环/高速深孔")
	EN("HSDC 0/1:G83 and G87 specify deep peck/high-speed peck drilling cycle")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
 //5120;1
    //LG_STR nszParMulCannedCycleSetting[9]][LG_NUM] =
    {CN("复合循环相关设置")
     EN("multiple canned cycles settings")},
    {CN("X2DT 0/1:G71和G72的第二轴不允许/允许非单调轨迹")
	EN("X2DT 0/1:G71 and G72 2th axis monotonicity disable/enable")},
    {CN("X1DT 0/1:G71和G72的第一轴不允许/允许非单调轨迹")
	EN("X1DT 0/1:G71 and G72 1st axis monotonicity disable/enable")},
	{CN("BTAC 0/1:G71和G72沿45度/轮廓退刀")
	EN("BTAC 0/1:G71 and G72 retract tool along 45 degree/contour")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

 //5110;1
    //LG_STR nszParDrillCycRetVal[LG_NUM] =
    {CN("高速深孔循环的返回量r")
    EN("Return value of peck drilling cycle")},
 //5111;1
    //LG_STR nszParDrillCycClearanceVal[LG_NUM] =
    {CN("深孔循环的进刀空程量c")
    EN("Clearance value in a peck drilling cycle")},
 //5130;1
    //LG_STR nszParMulCycCutVal[LG_NUM] =
    {CN("G71和G72复合循环的切削量")
    EN("Depth of cut in multiple canned cycles G71 and G72")},
 //5131;1
    //LG_STR nszParMulCycRetVal[LG_NUM] =
    {CN("G71和G72复合循环的返回量")
    EN("Escape in multiple canned cycles G71 and G72")},
 //5132;1
    //LG_STR nszParMulCycClearanceVal[LG_NUM] =
    {CN("G71和G72复合循环的进刀空程量")
    EN("Clearance in multiple canned cycles G71 and G72")},
 //5133;1
    //LG_STR nszParMulCycG73Retract1[LG_NUM] =
    {CN("复合形固定循环G73的回退距离(平面第1轴)")
     EN("Retraction distance in the multiple canned cycle G73(plane 1st axis)")},
 //5134;1
    //LG_STR nszParMulCycG73Retract2[LG_NUM] =
    {CN("复合形固定循环G73的回退距离(平面第2轴)")
    EN("Retraction distance in the multiple canned cycle G73(plane 2rd axis)")},
 //5135;1
    //LG_STR nszParMulCycG73DivNum[LG_NUM] =
    {CN("复合形固定循环G73的分割次数")
    EN("Number of divisions in the multiple canned cycle G73")},
 //5136;1
    //LG_STR nszParMulCycG7475Retract[LG_NUM] =
    {CN("复合形固定循环G74和G75的返回量")
    EN("Return in multiple canned cycles G74 and G75")},

    //LG_STR nszParBoreRetractDir[LG_NUM] =
    {CN("精堂循环时,定向后回退方向")
    EN("Retraction direction after orientation in a fine boring cycle")},

//5200;1
    //LG_STR nszParRigidTapSetting[9]][LG_NUM] =
    {CN("刚性攻丝相关设置")
     EN("Rigid tapping settings")},
    {CN("HSTC 0/1:攻丝循环为深孔/高速攻丝循环")
    EN("HSTC 0/1:Specify deep peck/high-speed peck tapping cycle")},
	{CN("TPSA 0/1:编码器变频攻丝时,等待主轴转速到达")
	EN("TPSA 0/1:Wait spindle speed arrive when tapping by encoder")},
	{CN("RTPA 0/1:刚性攻丝时,不等待/等待位置到达")
	EN("RTPA 0/1:NO/Wait axis arrive when rapid tapping")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
 //5201;123
    //LG_STR nszParRigidTapSpSetting[9]][LG_NUM] =
    {CN("刚性攻丝相关主轴设置")
     EN("Rigid tapping settings")},
	{CN("RTPF 0/1:刚性攻丝时,使用同步攻丝模式/跟随攻丝模式")
	EN("RTPF 0/1:use sync mode/follow mode when rapid tapping")},
	{CN("TPAC 0/1:编码器跟随攻丝时,自定义调节参数/自动调节补偿量")
	EN("TPAC 0/1:Manual/Auto tune compz-value when tapping")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
 //5211;1
    //LG_STR nszParRTapCycRetVal[LG_NUM] =
    {CN("高速深孔攻丝循环的返回量r")
    EN("Return value of peck tapping cycle")},
 //5210;1
    //LG_STR nszParTapMaxF[LG_NUM] =
    {CN("攻丝时最大导程(单位:mm, =0:不限制)")
    EN("Max tap lead(unit:mm, =0:No limit)")},

    //LG_STR nszParRTapCycClearanceVal[LG_NUM] =
    {CN("高速深孔攻丝循环的进刀空程量")
    EN("Clearance value of peck tapping cycle")},
 //5225;1
    //LG_STR nszParTapSpdlSpeedArriveRange[LG_NUM] =
    {CN("攻丝时,等待主轴转速到达窗口范围(百分比)")
    EN("Spindle speed arrive range when tapping(percent)")},
 //5226;1
    //LG_STR nszParTapSpdlWaitTime[LG_NUM] =
    {CN("攻丝时,等待时间上限")
    EN("Tapping spdindle wait time max.")},
 //5230;123
    //LG_STR nszParTapRefSpdlSpeed[LG_NUM] =
    {CN("变频攻丝时,主轴参考转速(rpm)")
    EN("Spdl referrence speed when tap(rpm)")},
 //5231;123
    //LG_STR nszParTapRefSpdlSpeedStopTime[LG_NUM] =
    {CN("变频攻丝时,主轴参考转速的停止时间(ms)")
    EN("Spdl referrence speed stop time when tap(ms)")},
 //5232;1
    //LG_STR nszParTapAxisFeedCompRatio[LG_NUM] =
    {CN("攻丝时,进给轴位置补偿系数")
    EN("Position loop comp. ratio when tap")},
 //5233;1
    //LG_STR nszParTapAxisPosLoopGain[LG_NUM] =
    {CN("攻丝时,各轴伺服位置环增益(KP)(1/s)")
    EN("Axis servo position loop gain(KP) when tap(1/s)")},
 //5234;1
    //LG_STR nszParTapAxisVelLoopGain[LG_NUM] =
    {CN("攻丝时,各轴系统速度回路增益")
    EN("Axis NC vel. loop gain when tap")},
 
    //LG_STR nszParTapAxisVelNegLoopGain[LG_NUM] =
    {CN("攻丝时,各轴系统负向速度回路增益")
    EN("Axis NC vel-neg loop gain when tap")},

    //LG_STR nszParTapAxisVelPosLoopGain[LG_NUM] =
    {CN("攻丝时,各轴系统正向速度回路增益")
    EN("Axis NC vel-Pos loop gain when tap")},
//5235;1
    //LG_STR nszParTapAxisAccLoopGain[LG_NUM] =
    {CN("攻丝时,各轴系统加速度回路增益")
    EN("Axis NC acc. loop gain when tap")},

    //LG_STR nszParTapAxisDecLoopGain[LG_NUM] =
    {CN("攻丝时,各轴系统减速度回路增益")
    EN("Axis NC dec. loop gain when tap")},
//5240;123
    //LG_STR nszParTapSpdlTimeCnst[LG_NUM] =
    {CN("攻丝时,主轴加减速时间常数")
    EN("Spindle Acc./dec. time constant when tap")},
//5241;1
    //LG_STR nszParTapAxisTimeCnst[LG_NUM] =
    {CN("攻丝时,各轴加减速时间常数(ms)")
     EN("time constant of tap(ms)")},
//5237;1
    //LG_STR nszParTapAxisBackCompDist[LG_NUM] =
     {CN("攻丝反向时,各轴补偿距离(>0:进给方向)")
     EN("Axis compensate distance when tap back(>0:Feed dir.)")},

    //LG_STR nszParTapBackCompFeed[LG_NUM] =
    {CN("攻丝反向时,补偿速度(mm/min)")
     EN("Compensate feed when tap back(mm/min)")},
//5246;1
    //LG_STR nszParTapInPosDist[LG_NUM] =
    {CN("各轴攻丝到位检测距离")
    EN("Axis tapping in-position-dist")},

    //LG_STR nszParTapLoadMax[LG_NUM] =
    {CN("各轴攻丝时的负载上限")
    EN("Axis Tap load max")},

//5300;1
    //LG_STR nszParPolygonCutSetting[9][LG_NUM] =
    {CN("多边形加工相关设置")
    EN("Polygon cut setting")},
	{CN("PLPC 0/1:主轴位置方式时:从动轴控制通过主轴编码器反馈/主轴坐标位置")
    EN("PLPC 0/1:When spdinle in pos-mode:Control with spindle encoder input/position")},
//	{CN("PLFS 0/1:工件轴位置控制方式:位置同步输出/刀具跟随方式")
//    EN("PLFS 0/1:position contol mode:Position Sync output/Tool follow")},
	{CN("PLSD 0/1:从动轴正向/负向运动")
    EN("PLSD 0/1:Slave axis positive/negtive move")},
	{CN("PLES 0/1:编码器反馈方式时,刀具轴不/进行切削速度平滑")
	EN("PLES 0/1:Tool axis Disable/Enable feedrate smooth when encoder control mode")},
	{CN("PLRS 0/1:急停或复位时,从动轴同步主轴停止/按加减速停止")
    EN("PLES 0/1:Slave axis sync-stop/decelerate-stop when RESET or ESTOP")},
//	{CN("PLTM 0/1:位置控制方式时:工件轴/刀具轴为主动轴")
//	EN("PLTM 0/1:Workpiece axis/Tool axis is master axis when position control mode")},
	{CN("保留")
	EN("RSV")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//	{CN("PLPE 0/1:编码器反馈方式时:关闭/打开刀轴位置偏移补偿")
//	EN("PLPE 0/1:Disable/Enable tool axis position offset compensation when encoder control mode")},
//	{CN("PLFE 0/1:编码器反馈方式时:关闭/打开刀轴伺服跟随误差补偿")
//	EN("PLFE 0/1:Disable/Enable tool axis follow error compensation when encoder control mode")},
	{CN("")
	EN("")},
//5310;1
    //LG_STR nszParPolygonCutP[LG_NUM] =
	{CN("P对应的主轴号(通道内)")
	EN("Master spindle spindle no.(P)")},
//5311;1
    //LG_STR nszParPolygonCutQ[LG_NUM] =
	{CN("Q对应的从动轴号(通道内)")
	EN("Slave axis No.(Q)")},
//5312;1
    //LG_STR nszParPolygonCutToolSpeedMax[LG_NUM] =
	{CN("从动轴轴旋转转速上限(rpm)")
	EN("Slave axis rotation speed max.")},
//5313;1
    //LG_STR nszParPolygonCutToolTimeCnst[LG_NUM] =
    {CN("从动轴加减速时间常数")
     EN("Slave axis Acc./dec. time constant")},
//5314;1
    //LG_STR nszParPolygonFeedFilterRatio[LG_NUM] =
     {CN("从动轴速度平滑系数(0~100),0:不滤波")
     EN("Slave axis feed filter ratio (0~100),0:close")},
//5315;1
    //LG_STR nszParPolySpdlSpeedArriveRange[LG_NUM] =
    {CN("主轴转速到达检测窗口范围(百分比)")
    EN("Spindle speed arrive check range(percent)")},
//5315;1
    //LG_STR nszParPolySpdlArriveWaitTime[LG_NUM] =
    {CN("等待主轴转速到达时间上限(=0:忽略)")
    EN("Max time of spindle speed arrive.(=0:ignore)")},

    //电子齿轮箱

    //LG_STR nszParEGearSetting[9][LG_NUM] =
    {CN("滚齿功能(EGB)相关设置")
    EN("Electronic gear box(EGB) setting")},
	{CN("EGPC 0/1:刀具轴位置方式时:工件轴控制通过主轴编码器反馈/主轴坐标位置")
    EN("EGPC 0/1:When spdinle in pos-mode:Control with spindle encoder input/position")},
	{CN("EGLD 0/1:工件轴跟随正向/负向运动")
    EN("EGLD 0/1:Workpiece axis positive/negtive move")},
	{CN("EGPD 0/1:工件轴螺旋线方向为正向/负向")
    EN("EGPD 0/1:Workpiece axis helical dir is positive/negtive")},
	{CN("EGSS 0/1:工件轴不/进行切削速度平滑")
	EN("EGSS 0/1:Workpiece axis Disable/Enable feedrate smooth")},
	{CN("EGRS 0/1:急停或复位时,从动轴同步主轴停止/按加减速停止")
    EN("EGES 0/1:Slave axis sync-stop/decelerate-stop when RESET or ESTOP")},
	{CN("EGAC 0/1:对从动轴不/进行自动位置补偿")
	EN("EGAC 0/1:NO/Auto tune compz-value when EGEAR")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

    //LG_STR nszParEGBToolSpdl[LG_NUM] =
	{CN("EGB刀具轴对应的主轴号(通道内)")
	EN("EGB Tool spindle No.")},

    //LG_STR nszParEGBWorkpieceAxis[LG_NUM] =
	{CN("EGB工件旋转轴对应的轴号(通道内)")
	EN("EGB Workpiece rotate axis no.")},

    //LG_STR nszParEGBWorkpieceFeedAxis[LG_NUM] =
	{CN("EGB工件轴向进给轴对应的轴号(通道内)")
	EN("EGB Workpiece axial feed axis no.")},

    //LG_STR nszParEGBWorkpieceSpeedMax[LG_NUM] =
	{CN("EGB工件轴旋转转速上限(rpm)")
	EN("EGB Workpiece axis rotation speed max.")},

    //LG_STR nszParEGBWorkpieceTimeCnst[LG_NUM] =
    {CN("EGB工件轴加减速时间常数")
     EN("EGB Workpiece axis Acc./dec. time constant")},

    //LG_STR nszParEGBWorkpieceCompzFilterTime[LG_NUM] =
     {CN("EGB工件轴补偿滤波时间(ms),0不滤波")
     EN("EGB Workpiece axis compensation filter time(ms),0:close")},

    //LG_STR nszParEGBSpdlSpeedArriveRange[LG_NUM] =
    {CN("EGB刀具主轴转速到达检测窗口范围(百分比)")
    EN("EGB tool spindle speed arrive check range(percent)")},

    //LG_STR nszParEGBSpdlArriveWaitTime[LG_NUM] =
    {CN("EGB等待刀具主轴转速到达时间上限(=0:忽略)")
    EN("EGB max time of tool spindle speed arrive.(=0:ignore)")},

    //LG_STR nszParECamSetting[9][LG_NUM] =
    {CN("电子凸轮相关设置")
    EN("ECAM settings")},
	{CN("ECPC 0/1:控制方式:读取主轴编码器反馈/读取主轴坐标位置")
	EN("ECPC 0/1:Control with spindle encoder input/position")},
	{CN("ECRS 0/1:急停或复位时,不复位/复位电子凸轮控制")
    EN("ECRS 0/1:NO/RESET ECAM control when RESET or ESTOP")},
	{CN("保留")
	EN("RSV")},
	{CN("保留")
	EN("RSV")},
	{CN("保留")
	EN("RSV")},
	{CN("保留")
	EN("RSV")},
	{CN("保留")
	EN("RSV")},
	{CN("")
	EN("")},

    //LG_STR nszParECamMstSpdl[LG_NUM] =
	{CN("电子凸轮的主轴号(通道内)")
	EN("ECAM Master spindle spindle no.(P)")},

    //LG_STR nszParECamSlvAx[LG_NUM] =
	{CN("电子凸轮的从动轴号(通道内)")
	EN("ECAM slave axis No.(Q)")},

    //LG_STR nszParECamSlvSpeedMax[LG_NUM] =
	{CN("电子凸轮从动轴轴旋转转速上限(rpm)")
	EN("ECAM slave axis rotation speed max.")},

    //LG_STR nszParECamSlvTimeCnst[LG_NUM] =
    {CN("电子凸轮从动轴加减速时间常数")
     EN("ECAM slave axis Acc./dec. time constant")},

    //LG_STR nszParECamFilterRatio[LG_NUM] =
     {CN("电子凸轮从动轴平滑系数(0~100),0:不平滑")
     EN("ECAM slave axis filter ratio (0~100),0:close")},

    //LG_STR nszParECamSpdlSpeedArriveRange[LG_NUM] =
    {CN("电子凸轮加工时,主轴转速到达检测窗口范围(百分比)")
    EN("Spindle speed arrive check range(percent) when ECAM")},

    //LG_STR nszParECamSpdlArriveWaitTime[LG_NUM] =
    {CN("电子凸轮加工时,等待主轴转速到达时间上限(=0:忽略)")
    EN("Max time of spindle speed arrive when ECAM.(=0:ignore)")},
//5400;1
    //LG_STR nszParAxisRetractSetting[9][LG_NUM] =
    {CN("退回相关设置")
    EN("Retraction settings")},
	{CN("RSRT 0/1:复位或急停时,不执行/执行退出动作")
	EN("RSRT 0/1:Retraction NO/executed when RESET or ESTOP")},
	{CN("RTRS 0/1:复位执行退回时,先复位PLC/后复位PLC")
	EN("RTRS 0/1:PLC RESET before/after retraction when RESET command")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//5410;1
	//LG_STR aszrAxisRetractF[LG_NUM] =
	{CN("各轴退回速度(mm/min)")
	EN("Axis retract feed(mm/min)")},
//5411;1
	//LG_STR aszrAxisRetractDist[LG_NUM] =
	{CN("各轴退回距离(mm)")
	EN("Axis retrace distance(mm)")},
//5412;1
	//LG_STR nszParAxisRetractTimeCnst[LG_NUM] =
	{CN("各轴退回时间常数(ms)")
	EN("Axis retract time const(ms)")},

//5420;1
    //LG_STR nszParAxisSpeedSetting[9][LG_NUM] =
    {CN("轴速度控制相关设置")
    EN("Axis speed setting")},
	{CN("ASK 0/1:M26M27参数使用P或Q/K+P")
	EN("ASK 0/1:M26M27 use P or Q/K+P")},
	{CN("M27Z 0/1:M27自由停/停在0位置")
	EN("M27Z 0/1:M27 stop free/stop at 0")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//5430;1
    //LG_STR nszParAxisSpeedP[LG_NUM] =
	{CN("M26M27功能P参数对应的轴号(通道内)")
	EN("Axis no. of M26M27 function P")},
//5431;1
    //LG_STR nszParAxisSpeedQ[LG_NUM] =
	{CN("M26M27功能Q参数对应的轴号(通道内)")
	EN("Axis no. of M26M27 function Q")},
//5432;1
    //LG_STR nszParAxisSpeedK[LG_NUM] =
	{CN("各轴速度控制时K编号")
	EN("Axis feed control K No.")},
//5435;1
    //LG_STR nszParAxisSpeedCtrlTimeCnst[LG_NUM] =
    {CN("轴速度控制加减速时间常数")
     EN("Axis SpeedCtrl Acc./dec. time constant")},

//5510;1
    //LG_STR nszParSkipDefDI[LG_NUM] =
	{CN("G31跳过功能默认输入口")
	EN("G31 Skip function defualt DI")},
//5511;1
    //LG_STR nszParSkipLoad[LG_NUM] =
	{CN("G31跳过功能负载值")
	EN("G31 Skip function Load value")},
//5515;1
    //LG_STR nszParG160SkipLoad[LG_NUM] =
	{CN("G160跳过功能负载值")
	EN("G160 Skip function Load value")},
//5516;1
    //LG_STR nszParG160SkipFerr[LG_NUM] =
	{CN("G160跳过功能跟随误差(0:不检查)")
	EN("G160 Skip function Follow error value")},
//5520;1
    //LG_STR nszParAxisTrqCtrlSetting[9][LG_NUM] =
    {CN("扭矩控制相关设置")
    EN("Torque-contrl settings")},
	{CN("RSTQ 0/1:复位或急停时,不/退出扭矩控制模式")
	EN("RSTQ 0/1:NO/quit torque-contrl when RESET or ESTOP")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//5521;1
    //LG_STR nszParTrqCtrlFeed[LG_NUM] =
	{CN("扭矩控制时,默认速度")
	EN("Torque contrl speed")},
//5522;1
    //LG_STR nszParMaxTrqLoadValue[LG_NUM] =
	{CN("电机最大转矩对应的伺服负载值")
	EN("Load value when motor max torque output")},

    //极坐标插补
//5530;1
    //LG_STR nszParPolarIPLinearAx[LG_NUM] =
	{CN("极坐标插补直线轴轴号(通道内)")
	EN("Linear axis for polar interpolation")},
//5531;1
    //LG_STR nszParPolarIPRotateAx[LG_NUM] =
	{CN("极坐标插补的旋转轴轴号(通道内)")
	EN("rotation axis for polar interpolation")},
//5532;1
    //LG_STR nszParPolarIPRotateAxErr[LG_NUM] =
	{CN("极坐标插补的假想轴方向的偏移量")
	EN("Hypothetical axis error for polar interpolation")},

    //法线控制
    //LG_STR nszParNormalCtrlSet[LG_NUM] =
	{CN("法线控制")
	EN("Normal direction controlling settings")},

    //LG_STR nszParNormalCtrlAx[LG_NUM] =
	{CN("进行法线控制的轴号")
	EN("Number of the axis for normal direction controlling")},

    //LG_STR nszParNormalCtrlAxFeed[LG_NUM] =
	{CN("法线方向控制轴的旋转速度")
	EN("Rotation feed of the normal direction controlled axis")},

    //进给轴同步 
//5600;1
    //LG_STR nszParAxisSyncSetting[9][LG_NUM] =
    {CN("进给轴同步控制相关设置")
    EN("Axis synchronous control setting")},
	{CN("ASE 0/1:轴同步功能无效/有效")
	EN("ASE 0/1:Axis synchronous control disable/enable")},
	{CN("ASMC 0/1:轴同步时,不/通过机床坐标检测最大误差值")
     EN("ASMC 0/1:disable/enable max-error checking based on mach-coor")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//5610;1
    //LG_STR nszParAxisSyncMasterAxis[LG_NUM] =
	{CN("进给轴同步控制中的主控轴的轴号(系统内)")
	EN("Axis number of master axis in axis synchronous control(Nc-axis)")},
//5611;1
    //LG_STR nszParAxisSyncMachCoorCheck[LG_NUM] =
	{CN("进给轴同步控制时,机床坐标检测的最大误差值")
	EN("Max-error when synchronization error check based on mach-coor")},
//5660;1
    //LG_STR nszParAxisXchgNo[LG_NUM] =
	{CN("各轴轴交换指令的编号")
	EN("Axis exchange command No.")},

    //位置开关控制轴 
//5910;1
    //LG_STR nszParPosSwAx1[LG_NUM] =
	{CN("执行第1位置开关功能的轴号(通道内)")
	EN("The 1st position switch function performed axis")},
//5911;1
    //LG_STR nszParPosSwAx2[LG_NUM] =
	{CN("执行第2位置开关功能的轴号(通道内)")
	EN("The 2st position switch function performed axis")},
//5912;1
    //LG_STR nszParPosSwAx3[LG_NUM] =
	{CN("执行第3位置开关功能的轴号(通道内)")
	EN("The 3st position switch function performed axis")},
//5913;1
    //LG_STR nszParPosSwAx4[LG_NUM] =
	{CN("执行第4位置开关功能的轴号(通道内)")
	EN("The 4st position switch function performed axis")},
//5914;1
    //LG_STR nszParPosSwAx5[LG_NUM] =
	{CN("执行第5位置开关功能的轴号(通道内)")
	EN("The 5st position switch function performed axis")},
//5915;1
    //LG_STR nszParPosSwAx6[LG_NUM] =
	{CN("执行第6位置开关功能的轴号(通道内)")
	EN("The 6st position switch function performed axis")},
//5916;1
    //LG_STR nszParPosSwAx7[LG_NUM] =
	{CN("执行第7位置开关功能的轴号(通道内)")
	EN("The 7st position switch function performed axis")},
//5917;1
    //LG_STR nszParPosSwAx8[LG_NUM] =
	{CN("执行第8位置开关功能的轴号(通道内)")
	EN("The 8st position switch function performed axis")},
//5930;1
    //LG_STR nszParPosSwPosMax1[LG_NUM] =
	{CN("第1位置开关范围的最大值")
	EN("Maximum value of the range of the 1st position switch")},
//5931;1
    //LG_STR nszParPosSwPosMax2[LG_NUM] =
	{CN("第2位置开关范围的最大值")
	EN("Maximum value of the range of the 2st position switch")},
//5932;1
    //LG_STR nszParPosSwPosMax3[LG_NUM] =
	{CN("第3位置开关范围的最大值")
	EN("Maximum value of the range of the 3st position switch")},
//5933;1
    //LG_STR nszParPosSwPosMax4[LG_NUM] =
	{CN("第4位置开关范围的最大值")
	EN("Maximum value of the range of the 4st position switch")},
//5934;1
    //LG_STR nszParPosSwPosMax5[LG_NUM] =
	{CN("第5位置开关范围的最大值")
	EN("Maximum value of the range of the 5st position switch")},
//5935;1
    //LG_STR nszParPosSwPosMax6[LG_NUM] =
	{CN("第6位置开关范围的最大值")
	EN("Maximum value of the range of the 6st position switch")},
//5936;1
    //LG_STR nszParPosSwPosMax7[LG_NUM] =
	{CN("第7位置开关范围的最大值")
	EN("Maximum value of the range of the 7st position switch")},
//5937;1
    //LG_STR nszParPosSwPosMax8[LG_NUM] =
	{CN("第8位置开关范围的最大值")
	EN("Maximum value of the range of the 8st position switch")},
//5950;1
    //LG_STR nszParPosSwPosMin1[LG_NUM] =
	{CN("第1位置开关范围的最小值")
	EN("Minimum value of the range of the 1st position switch")},
//5951;1
    //LG_STR nszParPosSwPosMin2[LG_NUM] =
	{CN("第2位置开关范围的最小值")
	EN("Minimum value of the range of the 2st position switch")},
//5952;1
    //LG_STR nszParPosSwPosMin3[LG_NUM] =
	{CN("第3位置开关范围的最小值")
	EN("Minimum value of the range of the 3st position switch")},
//5953;1
    //LG_STR nszParPosSwPosMin4[LG_NUM] =
	{CN("第4位置开关范围的最小值")
	EN("Minimum value of the range of the 4st position switch")},
//5954;1
    //LG_STR nszParPosSwPosMin5[LG_NUM] =
	{CN("第5位置开关范围的最小值")
	EN("Minimum value of the range of the 5st position switch")},
//5955;1
    //LG_STR nszParPosSwPosMin6[LG_NUM] =
	{CN("第6位置开关范围的最小值")
	EN("Minimum value of the range of the 6st position switch")},
//5956;1
    //LG_STR nszParPosSwPosMin7[LG_NUM] =
	{CN("第7位置开关范围的最小值")
	EN("Minimum value of the range of the 7st position switch")},
//5957;1
    //LG_STR nszParPosSwPosMin8[LG_NUM] =
	{CN("第8位置开关范围的最小值")
	EN("Minimum value of the range of the 8st position switch")},

    //##CHN ##9200
	//LG_STR nszParChnSet[9][LG_NUM] =
	{CN("多通道相关设置")
	EN("Multi-Channel settings")},
	{CN("RST 0/1:按下面板复位时,所有通道/当前通道复位")
	EN("RST 0/1:All/current channel reset when MDI reset down")},
	{CN("CWPB 0/1:通道等待G04.1代码的Q值,用通道号组合/二进制组合")
	EN("CWPB 0/1:Q value of G04.1,use path number combination/binary value")},
	{CN("CHMS 0/1:各通道使用独立的工作方式/相同工作方式")
	EN("CHMS 0/1:Use seperate operation mode/same mode for Multi-Channel")},
	{CN("CHAL 0/1:各通道报警独立/一个通道报警所有通道停止")
	EN("CHAL 0/1:Alarm work independently/All channel stop when alarm in one channel")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

	//LG_STR nszParChnSelSet[9][LG_NUM] =
	{CN("通道选择相关设置(内置PLC时)")
	EN("Channel select settings(Fixed PLC)")},
	{CN("CHUS 0/1:通过USER键选择通道关闭/打开")
	EN("CHUS 0/1:use USER key as channel select disable/enable")},
	{CN("CHIS 0/1:通过外部输入口选择通道关闭/打开")
	EN("CHIS 0/1:use DI as channel select disable/enable")},
	{CN("CHEE 0/1:通过外部输入口直接选择/编码选择通道")
	EN("CHEE 0/1:use DI derectly/encode as channel select")},
	{CN("CHUU 0/1:USER键选择通道时,不使用/使用自定义方式")
	EN("CHUU 0/1:When USER channel select,NO/USE user defined mode")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

    //LG_STR nszParChnWaitDefQ[LG_NUM] =
    {CN("通道等待指令G04.1默认Q值")
    EN("Channel wait command G04.1 default Q value")},

    //LG_STR nszParChnSelDI1[LG_NUM] =
    {CN("通道选择输入口1")
    EN("Channel select input port 1")},

    //LG_STR nszParChnSelDI2[LG_NUM] =
    {CN("通道选择输入口2")
    EN("Channel select input port 2")},

    //LG_STR nszParChnSelDI3[LG_NUM] =
    {CN("通道选择输入口3")
    EN("Channel select input port 3")},

    //LG_STR nszParChnSelDI4[LG_NUM] =
    {CN("通道选择输入口4")
    EN("Channel select input port 4")},

    //LG_STR nszParChnSelDI5[LG_NUM] =
    {CN("通道选择输入口5")
    EN("Channel select input port 5")},

    //LG_STR nszParChnSelDI6[LG_NUM] =
    {CN("通道选择输入口6")
    EN("Channel select input port 6")},

    //LG_STR nszParChnSelDI7[LG_NUM] =
    {CN("通道选择输入口7")
    EN("Channel select input port 7")},

    //LG_STR nszParChnSelDI8[LG_NUM] =
    {CN("通道选择输入口8")
    EN("Channel select input port 8")},

    //LG_STR nszParChnSelTypeDI[LG_NUM] =
    {CN("通道选择方式(面板/外接)选择输入口")
    EN("Channel select type(panel/external) select input port")},

    //LG_STR nszParChnOpSelAllDI[LG_NUM] =
    {CN("通道操作全选输入口")
    EN("Channel operation select all input port")},

    //LG_STR nszParUser1ChnSelDef[LG_NUM] =
    {CN("USER1自定义通道选择序号")
    EN("USER1 Channel select sequence no.")},

    //LG_STR nszParUser2ChnSelDef[LG_NUM] =
    {CN("USER2自定义通道选择序号")
    EN("USER2 Channel select sequence no.")},

    //LG_STR nszParUser3ChnSelDef[LG_NUM] =
    {CN("USER3自定义通道选择序号")
    EN("USER3 Channel select sequence no.")},

    //LG_STR nszParUser4ChnSelDef[LG_NUM] =
    {CN("USER4自定义通道选择序号")
    EN("USER4 Channel select sequence no.")},

    //LG_STR nszParUser5ChnSelDef[LG_NUM] =
    {CN("USER5自定义通道选择序号")
    EN("USER5 Channel select sequence no.")},

	//LG_STR nszParExtZOfs[LG_NUM] =
	{CN("EXT")
	EN("EXT")},

	//LG_STR nszParG54ZOfs[LG_NUM] =
	{CN("G54")
	EN("G54")},

	//LG_STR nszParG55ZOfs[LG_NUM] =
	{CN("G55")
	EN("G55")},

	//LG_STR nszParG56ZOfs[LG_NUM] =
	{CN("G56")
	EN("G56")},

	//LG_STR nszParG57ZOfs[LG_NUM] =
	{CN("G57")
	EN("G57")},

	//LG_STR nszParG58ZOfs[LG_NUM] =
	{CN("G58")
	EN("G58")},

	//LG_STR nszParG59ZOfs[LG_NUM] =
	{CN("G59")
	EN("G59")},

    //-------------------------------------------------------------------------
    // 伺服参数 ##SV ##Servo
    //-------------------------------------------------------------------------
	//LG_STR nszParSvFuncSel1[LG_NUM] =
	{CN("功能选择基本开关1")
	EN("Func. Select switch 1")},

	//LG_STR nszParSvSpeedLoopGain[LG_NUM] =
	{CN("速度环增益")
	EN("Speed loop gain")},

	//LG_STR nszParSvSpeedLoopIntegralTime [LG_NUM] =
	{CN("速度环积分时间(0.1ms)")
	EN("Speed loop integral time(0.1ms)")},

	//LG_STR nszParSvPositionLoopGain[LG_NUM] =
	{CN("位置环增益")
	EN("Position loop gain")},

	//LG_STR nszParSvPositionLoopForward[LG_NUM] =
	{CN("位置环前馈系数")
	EN("Position loop forward")},

	//LG_STR nszParSvEGearRatioMul[LG_NUM] =
	{CN("电子齿轮比分子")
	EN("Electronic Gear Ratio (Numerator)")},

	//LG_STR nszParSvEGearRatioDiv[LG_NUM] =
	{CN("电子齿轮比分母")
	EN("Electronic Gear Ratio (Denominator)")},

	//LG_STR nszParTorqueCmdFilterTime[LG_NUM] =
	{CN("转矩指令滤波时间")
	EN("Torque command filtering time")},

	//LG_STR nszParFErrLimit[LG_NUM] =
	{CN("跟随误差上限")
	EN("Follow error limit")},

	//LG_STR nszParInputSignalSel1[LG_NUM] =
	{CN("输入信号选择1")
	EN("Input signal Select 1")},

	//LG_STR nszParInputSignalSel2[LG_NUM] =
	{CN("输入信号选择2")
	EN("Input signal Select 2")},

	//LG_STR nszParInputSignalSel3[LG_NUM] =
	{CN("输入信号选择3")
	EN("Input signal Select 3")},

    //-------------------------------------------------------------------------
    // 波形诊断参数 ##PAR ##WAVE
    //-------------------------------------------------------------------------
	//LG_STR nszParHoriAxisGridTime[LG_NUM] =
	{CN("横轴栅格间隔时间(ms)")
	EN("Horizontal axis grid interval time(ms)")},

	//LG_STR nszParMonWave1Addr[LG_NUM] =
	{CN("波形1地址(诊断号,如202.1)")
    EN("Wave 1 address(Dgn No:202.1 eg.)")},

	//LG_STR nszParMonWave1VertGridValue[LG_NUM] =
	{CN("波形1纵轴栅格间隔刻度值")
	EN("Wave 1 vertical grid interval value")},

	//LG_STR nszParMonWave1VertOrgValue[LG_NUM] =
	{CN("波形1纵轴中间点基准值")
	EN("Wave 1 vertical grid center base value")},

	//LG_STR nszParMonWave2Addr[LG_NUM] =
	{CN("波形2地址(诊断号,如202.1)")
	EN("Wave 2 address(Dgn No:202.1 eg.)")},

	//LG_STR nszParMonWave2VertGridValue[LG_NUM] =
	{CN("波形2纵轴栅格间隔刻度值")
	EN("Wave 2 vertical grid interval value")},

	//LG_STR nszParMonWave2VertOrgValue[LG_NUM] =
	{CN("波形2纵轴中间点基准值")
	EN("Wave 2 vertical grid center base value")},

	//LG_STR nszParMonWave3Addr[LG_NUM] =
	{CN("波形3地址(诊断号,如202.1)")
	EN("Wave 3 address(Dgn No:202.1 eg.)")},

	//LG_STR nszParMonWave3VertGridValue[LG_NUM] =
	{CN("波形3纵轴栅格间隔刻度值")
	EN("Wave 3 vertical grid interval value")},

	//LG_STR nszParMonWave3VertOrgValue[LG_NUM] =
	{CN("波形3纵轴中间点基准值")
	EN("Wave 3 vertical grid center base value")},

	//LG_STR nszParMonWave4Addr[LG_NUM] =
	{CN("波形4地址(诊断号,如202.1)")
	EN("Wave 4 address(Dgn No:202.1 eg.)")},

	//LG_STR nszParMonWave4VertGridValue[LG_NUM] =
	{CN("波形4纵轴栅格间隔刻度值")
	EN("Wave 4 vertical grid interval value")},

	//LG_STR nszParMonWave4VertOrgValue[LG_NUM] =
	{CN("波形4纵轴中间点基准值")
	EN("Wave 4 vertical grid center base value")},

	//LG_STR nszParMonSignalAddr1[LG_NUM] =
	{CN("信号地址1(PLC地址,如X0.1)")
	EN("Signal address 1(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr2[LG_NUM] =
	{CN("信号地址2(PLC地址,如X0.1)")
	EN("Signal address 2(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr3[LG_NUM] =
	{CN("信号地址3(PLC地址,如X0.1)")
	EN("Signal address 3(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr4[LG_NUM] =
	{CN("信号地址4(PLC地址,如X0.1)")
	EN("Signal address 4(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr5[LG_NUM] =
	{CN("信号地址5(PLC地址,如X0.1)")
	EN("Signal address 5(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr6[LG_NUM] =
	{CN("信号地址6(PLC地址,如X0.1)")
	EN("Signal address 6(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr7[LG_NUM] =
	{CN("信号地址7(PLC地址,如X0.1)")
	EN("Signal address 7(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr8[LG_NUM] =
	{CN("信号地址8(PLC地址,如X0.1)")
	EN("Signal address 8(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr9[LG_NUM] =
	{CN("信号地址9(PLC地址,如X0.1)")
	EN("Signal address 9(PLC addr.:X0.1 eg.)")},

    //-------------------------------------------------------------------------
    // 图形参数 ##PAR ##SIMU ##PRH
    //-------------------------------------------------------------------------
	//LG_STR nszParGraphDisplaySet[9][LG_NUM] =
	{CN("图形显示相关设置")
	EN("Graph display settings")},
	{CN("XMDP 0/1:对X数据进行镜像显示功能关闭")
    EN("XMDP 0/1:X-Axis mirror display function off/on")},
	{CN("YMDP 0/1:对Y数据进行镜像显示功能关闭")
    EN("YMDP 0/1:Y-Axis mirror display function off/on")},
	{CN("ZMDP 0/1:对Z数据进行镜像显示功能关闭")
    EN("ZMDP 0/1:Z-Axis mirror display function off/on")},
	{CN("SXMD 0/1:同时显示原轨迹和水平轴屏幕镜像功能关闭/打开")
	EN("SXMD 0/1:dispaly path and screen hori-mirror simultaneously function off/on")},
	{CN("XSDP 0/1:坐标系X轴使用进给轴位置/主轴反馈位置")
    EN("XSDP 0/1:X-Axis use axis/spindle postion")},
	{CN("YSDP 0/1:坐标系Y轴使用进给轴位置/主轴反馈位置")
    EN("YSDP 0/1:Y-Axis use axis/spindle postion")},
	{CN("ZSDP 0/1:坐标系Z轴使用进给轴位置/主轴反馈位置")
    EN("ZSDP 0/1:Z-Axis use axis/spindle postion")},
	{CN("")
	EN("")},

	//LG_STR nszParGraphChn[LG_NUM] =
	{CN("图形模拟通道号")
	EN("Channel of Graph")},

	//125 LG_STR nszParScaler[LG_NUM] =
	{CN("定标长度[mm](用于计算显示比例)")
	 EN("Ref-Len[mm](used to calclate scale)")},

    //LG_STR aszWorkpieceL[LG_NUM]
    {CN("工件长度")
    EN("Work. Length")},

    //LG_STR aszWorkpieceD[LG_NUM]
    {CN("工件外径")
    EN("Work. Dia.")},

    //LG_STR aszWorkpieced[LG_NUM]
    {CN("工件内径")
    EN("Work. hole Dia.")},

	//LG_STR nszParPlane[LG_NUM]
	{CN("显示坐标系(0:XOY,1:ZOX,2:YOZ,3:XYZ,4:XOZ)")
	EN("Graphic Coordinates(0:XOY,1:ZOX,2:YOZ,3:XYZ,4:XOZ)")},

	//LG_STR nszParCoorSysAxX[LG_NUM]
	{CN("坐标系X的轴号(自定义坐标系X轴的轴号)(通道内)")
	EN("Coordinate system X axis(User defined coordinate X axis)")},

	//LG_STR nszParCoorSysAxY[LG_NUM]
	{CN("坐标系Y的轴号(自定义坐标系Y轴的轴号)(通道内)")
	EN("Coordinate system Y axis(User defined coordinate Y axis)")},

	//LG_STR nszParCoorSysAxZ[LG_NUM]
	{CN("坐标系Z的轴号(自定义坐标系Z轴的轴号)(通道内)")
	EN("Coordinate system Z axis(User defined coordinate Z axis)")},

	//LG_STR nszParDisplayOrgX[LG_NUM]
	{CN("显示原点X坐标(默认缩放和显示原点对应的X轴坐标,半径)")
	EN("Display origin axis X(Display and room default origin X axis(Radius))")},

	//LG_STR nszParDisplayOrgY[LG_NUM]
	{CN("显示原点Y坐标(默认缩放和显示原点对应的Y轴坐标)")
	EN("Display origin axis Y(Display and room default origin Y axis)")},

	//LG_STR nszParDisplayOrgZ[LG_NUM]
	{CN("显示原点Z坐标(默认缩放和显示原点对应的Z轴坐标)")
	EN("Display origin axis Z(Display and room default origin Z axis)")},

    //-------------------------------------------------------------------------
    // 波形诊断参数 ##DGN
    //-------------------------------------------------------------------------
	//85 LG_STR nszDgnSoftVersion[LG_NUM] =
	{CN("软件版本号")  //0+
	 EN("Software Version")},

	//85 LG_STR nszDgnBootVersion[LG_NUM] =
	{CN("Boot版本号")  //0+
	 EN("Boot Version")},

	//85 LG_STR nszDgnSoftBuild[LG_NUM] =
	{CN("软件编译号")  //0+
	 EN("Software build No")},

	//85 LG_STR nszDgnLogicVersion[LG_NUM] =
	{CN("逻辑版本号")  //0+
	 EN("Logic Version")},

	//85 LG_STR nszDgnMotCycle[LG_NUM] =
	{CN("控制周期(ms)")  //0+
	 EN("Motion cycle(ms)")},

	//85 LG_STR nszDgnMotUsedTime[LG_NUM] =
	{CN("控制耗时")  //0+
	 EN("Motion used time")},

	//85 LG_STR nszDgnCpuUsage[LG_NUM] =
	{CN("CPU利用率")  //0+
	 EN("Cpu Usage")},

	//85 LG_STR nszDgnSysName[LG_NUM] =
	{CN("系统名称")  //0+
	 EN("Sytem name")},

	//85 LG_STR nszDgnInputPort[LG_NUM] =
	{CN("输入口")  //
	 EN("Input Port")},

	//85 LG_STR nszDgnOutputPort[LG_NUM] =
	{CN("输出口")
	 EN("Output Port")},

     //94 LG_STR nszDgnBusIOCtrlMode[LG_NUM] =
     {CN("IO站控制方式")
     EN("Bus IO Ctrl Mode")},

     //94 LG_STR nszDgnBusIOStatus[LG_NUM] =
     {CN("IO站状态反馈")
     EN("Bus IO Sttus")},

     //94 LG_STR nszDgnBusIOVer[LG_NUM] =
     {CN("IO站版本")
     EN("Bus IO Ver")},

	//128 LG_STR nszDgnSpdlEncoder[LG_NUM] =
	{CN("主轴编码器")
	 EN("SpdlEncodr")},

	//85 LG_STR nszDgnSpdlEncoderRelPulse[LG_NUM] =
	{CN("主轴编码器相对脉冲数")
	 EN("SpdlEncodr rel. Pulse")},

	//85 LG_STR nszDgnSpdlEncoderAbsPulse[LG_NUM] =
	{CN("主轴编码器绝对脉冲数")
	 EN("SpdlEncodr abs. Pulse")},

	//85 LG_STR nszDgnSpdlEncoderAbsPulsePC[LG_NUM] =
	{CN("主轴编码器绝对脉冲数(PC)")
	 EN("SpdlEncodr abs. Pulse(PC)")},

	//128 LG_STR nszDgnSpdlEncoderInc[LG_NUM] =
	{CN("主轴编码器增量")
	 EN("SpdlEncodrInc")},

	//128 LG_STR nszDgnSpdlEncoderRes[LG_NUM] =
	{CN("主轴编码器分辨率")
	 EN("SpdlEncodr res.")},

	//128 LG_STR nszDgnSpdlEncoderZErr[LG_NUM] =
	{CN("主轴编码器零误差")
	 EN("SpdlEncodr ZErr.")},

	//128 LG_STR nszDgnSpdlEncoderZPC[LG_NUM] =
	{CN("主轴编码器零脉冲")
	 EN("SpdlEncodr ZPC")},

	//128 LG_STR nszDgnAxisEncoderZPC[LG_NUM] =
	{CN("各轴编码器零脉冲")
	 EN("Axis Encodr ZPC")},

	//128 LG_STR nszDgnHndlEncoder[LG_NUM] =
	{CN("手轮编码器")
	 EN("HndlEncodr")},

	//128 LG_STR nszDgnHndlEncoderInc[LG_NUM] =
    {CN("手轮编码器增量")
    EN("HndlEncodrInc")},

	//85 LG_STR nszDgnHndlAccumPulse[LG_NUM] =
	{CN("手轮编码器累计脉冲数")
	 EN("HndlEncodr accum. Pulse")},

    //31 LG_STR nszDgnServoModel[LG_NUM] =
    {CN("伺服型号")
    EN("ServoModel")},

    //31 LG_STR nszDgnServoVer[LG_NUM] =
    {CN("伺服版本号")
    EN("ServoVera")},

    //31 LG_STR nszDgnMotorModel[LG_NUM] =
    {CN("电机型号")
    EN("MotorModel")},

    //31 LG_STR nszDgnMotorEncoderVer[LG_NUM] =
    {CN("电机编码器版本号")
    EN("MotorEncoderVer")},

    //31 LG_STR nszDgnAbsCoor[LG_NUM] =
    {CN("绝对坐标")
    EN("Abs.Coor")},

    //31 LG_STR nszDgnFbAbsCoor[LG_NUM] =
    {CN("反馈绝对坐标")
    EN("Fb-Abs.Coor")},

	//94 LG_STR nszDgnMachCoor[LG_NUM] =
	{CN("机床坐标")
	 EN("MachCoor")},

	//94 LG_STR nszDgnFbMachCoor[LG_NUM] =
	{CN("反馈机床坐标")
	 EN("Fb-MachCoor")},

	//94 LG_STR nszDgnEndMachCoor[LG_NUM] =
	{CN("目标位置机床坐标")
	 EN("Dst-MachCoor")},

	//94 LG_STR nszDgnLocalCoorSysOrg[LG_NUM] =
	{CN("局部坐标系原点")
	 EN("Local CoorSys Org.")},

	//94 LG_STR nszDgnAbsCoorSysOrg[LG_NUM] =
	{CN("绝对坐标系原点")
	 EN("Abs-CoorSys Org.")},

	//94 LG_STR nszDgnCurTOfs[LG_NUM] =
	{CN("当前刀补值")
	 EN("Current ToolOfs")},

	//85 LG_STR nszDgnGapPos[LG_NUM] =
	{CN("反向间隙补偿值")
	 EN("Gap-compz. value")},

	//85 LG_STR nszDgnPitchCompPos[LG_NUM] =
	{CN("螺距误差补偿值")
	 EN("Pitch-error-compz. value")},

	//85 LG_STR nszDgnHndlIntrValue[LG_NUM] =
	{CN("手轮中断补偿值")
	 EN("Handle-Intr-value")},

	//85 LG_STR nszDgnEGBWpCompValue[LG_NUM] =
	{CN("EGB工件旋转补偿量")
	 EN("EGB rotate comp value")},

	//85 LG_STR nszDgnCmdAccumPulse[LG_NUM] =
	{CN("指令累计脉冲数")
	 EN("Command accum. Pulse")},

	//85 LG_STR nszDgnFbCmdAccumPulse[LG_NUM] =
	{CN("反馈指令累计脉冲数")
	 EN("Fb-Command accum. Pulse")},

	//85 LG_STR nszDgnMotorCmdAccumPulse[LG_NUM] =
	{CN("电机指令累计脉冲数")
	 EN("Motor-cmd accum. Pulse")},

	//85 LG_STR nszDgnMotorFbAccumPulse[LG_NUM] =
	{CN("电机反馈累计脉冲数")
	 EN("Fb-Motor-accum. Pulse")},

	//85 LG_STR nszDgnCmdPosFErr[LG_NUM] =
	{CN("指令位置跟随误差")
	 EN("Cmd-position FErr")},

	//85 LG_STR nszDgnMotorPosFErr[LG_NUM] =
	{CN("电机位置跟随误差")
	 EN("Motor position FErr")},

	//85 LG_STR nszDgnCmdIncPulse[LG_NUM] =
	{CN("指令增量脉冲数")
	 EN("Command inc. Pulse")},

	//85 LG_STR nszDgnFbCmdIncPulse[LG_NUM] =
	{CN("反馈指令增量脉冲数")
	 EN("Fb-Command inc. Pulse")},

	//85 LG_STR nszDgnMotorCmdIncPulse[LG_NUM] =
	{CN("电机指令增量脉冲数")
	 EN("Motor-cmd inc. Pulse")},

	//85 LG_STR nszDgnMotorFbIncPulse[LG_NUM] =
	{CN("电机反馈增量脉冲数")
	 EN("Motor-fb inc. Pulse")},

	//128 LG_STR nszDgnSpdlDAOut[LG_NUM] =
	{CN("主轴模拟量输出") //300+
	 EN("Spdl Output DA")},

	//128 LG_STR nszDgnSpdlActSpeed[LG_NUM] =
	{CN("主轴实际转速")
	 EN("Spdl Actual Speed")},

	//128 LG_STR nszDgnSpdlStopFINTime[LG_NUM] =
	{CN("主轴停止完成时间(s)")
	 EN("Spdl Stop FIN time(s)")},

	//128 LG_STR nszDgnSpdlSpeedOut[LG_NUM] =
	{CN("主轴速度输出")
	 EN("Spdl Speed DA")},

	//128 LG_STR nszDgnSpdlDgree[LG_NUM] =
	{CN("主轴角度")
	 EN("Spdl Degree")},

	//85 LG_STR nszDgnSpdlFbIncPulse[LG_NUM] =
	{CN("主轴反馈增量脉冲数")
	 EN("Spdl Fb-inc. Pulse")},

	//94 LG_STR nszDgnDecToPc[LG_NUM] =
	{CN("DEC到PC的距离")
	 EN("Dist from DEC to PC")},

	//94 LG_STR nszDgnECamPos[LG_NUM] =
	{CN("ECAM位置")
	 EN("ECAM Position")},

	//94 LG_STR nszDgnECamPosInc[LG_NUM] =
	{CN("ECAM位置增量")
	 EN("ECAM Position Inc")},

	//85 LG_STR nszDgnTapCompVal[LG_NUM] =
	{CN("攻丝补偿值")
	 EN("Tap Comp. value")},

	//85 LG_STR nszDgnTapRotFErrorVal[LG_NUM] =
	{CN("攻丝旋转跟随误差值")
	 EN("Tap Rot-follow error value")},

	//85 LG_STR nszDgnTapFeedFErrorVal[LG_NUM] =
	{CN("攻丝轴跟随误差值")
	 EN("Tap Feed-follow error value")},

	//85 LG_STR nszDgnTapErrorVal[LG_NUM] =
	{CN("攻丝误差值")
	 EN("Tap error value")},

	//85 LG_STR nszDgnTapErrorMax[LG_NUM] =
	{CN("攻丝最大误差值")
	 EN("Tap max error value")},

	//85 LG_STR nszDgnAxisLoadMon2Time[LG_NUM] =
	{CN("各轴负载监控2达到时间(s)")
	 EN("Axis 2nd load monitor arrive time(s)")},

	//85 LG_STR nszDgnAxisLoadMon3Time[LG_NUM] =
	{CN("各轴负载监控3达到时间(s)")
	 EN("Axis 3th load monitor arrive time(s)")},

	//85 LG_STR nszDgnAxisLoadMon4Time[LG_NUM] =
	{CN("各轴负载监控4达到时间(s)")
	 EN("Axis 4th load monitor arrive time(s)")},

	//85 LG_STR nszDgnAxisLoadMon5Time[LG_NUM] =
	{CN("各轴负载监控5达到时间(s)")
	 EN("Axis 5th load monitor arrive time(s)")},

	//85 LG_STR nszDgnAxisState[LG_NUM] =
	{CN("各轴状态")
	 EN("Axis state")},

	//85 LG_STR nszDgnDebugInfo1[LG_NUM] =
	{CN("调试信息1")
	 EN("Debug Info1")},

	//85 LG_STR nszDgnDebugInfo2[LG_NUM] =
	{CN("调试信息2")
	 EN("Debug Info2")},

	//85 LG_STR nszDgnDebugInfo3[LG_NUM] =
	{CN("调试信息3")
	 EN("Debug Info3")},

	//85 LG_STR nszDgnDebugInfo4[LG_NUM] =
	{CN("调试信息4")
	 EN("Debug Info4")},

	//85 LG_STR nszDgnDebugInfo5[LG_NUM] =
	{CN("调试信息5")
	 EN("Debug Info5")},
    //-------------------------------------------------------------------------
    // 波形诊断参数 ##DGN ##SV
    //-------------------------------------------------------------------------
	//94 LG_STR nszDgnSVOptionLo_9[LG_NUM] =
	{CN("伺服控制选项低位")
	 EN("SV Option Lo")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("ACCFIL2")
	EN("ACCFIL2")},
	{CN("ACCFIL1")
	EN("ACCFIL1")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

	//94 LG_STR nszDgnSVOptionHi_9[LG_NUM] =
	{CN("伺服控制选项高位")
	 EN("SV Option Hi")},
	{CN("N_CL")
	EN("N_CL")},
	{CN("P_CL")
	EN("P_CL")},
	{CN("")
	EN("")},
	{CN("PPI")
	EN("PPI")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("G-SEL")
	EN("G-SEL")},

	//94 LG_STR nszDgnSVStatusLo_9[LG_NUM] =
	{CN("伺服反馈状态低位")
	 EN("SV Status Lo")},
	{CN("PSET(V_CMP)")
	EN("PSET(V_CMP)")},
	{CN("ZPOINT")
	EN("ZPOINT")},
	{CN("")
	EN("")},
	{CN("PON")
	EN("PON")},
	{CN("SVON")
	EN("SVON")},
	{CN("CMDRDY")
	EN("CMDRDY")},
	{CN("WARNG")
	EN("WARNG")},
	{CN("ALARM")
	EN("ALARM")},

    //94 LG_STR nszDgnSVStatusHi_9[LG_NUM] =
    {CN("伺服反馈状态高位")
    EN("SV Status Hi")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("N-SOT")
    EN("N-SOT")},
    {CN("P-SOT")
    EN("P-SOT")},
    {CN("NEAR(V_LIM)")
    EN("NEAR(V_LIM)")},
    {CN("L_CMP")
    EN("L_CMP")},
    {CN("T_LIM")
    EN("T_LIM")},
    {CN("DEN(ZSPD)")
    EN("DEN(ZSPD)")},

    //94 LG_STR nszDgnSVCtrlModeFb[LG_NUM] =
    {CN("伺服反馈控制方式")
    EN("SV Ctrl Mode Fb")},

    //94 LG_STR nszDgnSVCtrlModeCmd[LG_NUM] =
    {CN("伺服命令控制方式")
    EN("SV Ctrl Mode Cmd")},

    //94 LG_STR nszDgnSVIOMonLo_9[LG_NUM] =
    {CN("伺服IO监控低位")
    EN("SV IO Monitor Lo")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},

     //94 LG_STR nszDgnSVIOMonHi_9[LG_NUM] =
     {CN("伺服IO监控高位")
     EN("SV IO Monitor Hi")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},

	//85 LG_STR nszDgnSVFbPosValue[LG_NUM] =
	{CN("伺服反馈位置值")
	 EN("SV Fb-Motor-position value")},

	//85 LG_STR nszDgnSVFbMPosErr[LG_NUM] =
	{CN("伺服反馈跟随误差")
	 EN("SV Fb-position-error")},

	//85 LG_STR nszDgnSVFbSpeedValue[LG_NUM] =
	{CN("伺服反馈速度值")
	 EN("SV Fb-speed value")},

	//85 LG_STR nszDgnSVFbCmdTRQ[LG_NUM] =
	{CN("伺服反馈指令扭矩")
	 EN("SV Fb-cmd TRQ")},

	//85 LG_STR nszDgnSVFbLPos[LG_NUM] =
	{CN("伺服反馈闩锁位置值")
	 EN("SV Fb-LPos")},

	//85 LG_STR nszDgnSVCmdLimitLoad[LG_NUM] =
	{CN("伺服指令负载限制值")
	 EN("SV Command Limit Load")},

    //GROUP:提示nszNote
	//360 LG_STR anszNoteTimeSet[6][LG_NUM] =
	{CN("年 输入范围:2000-2099")   //0
	 EN("Year input range:2000-2099")},
	{CN("月 输入范围:01-12")   //1
	 EN("Month input range:01-12")},
	{CN("日 输入范围:01-31")   //2
	 EN("Day input range:01-31")},
	{CN("时 输入范围:00-23")   //3
	 EN("Hour input range:00-23")},
	{CN("分 输入范围:00-59")   //4
	 EN("Minute input range:00-59")},
	{CN("秒 输入范围:00-59")   //5
	 EN("Second input range:00-59")},

	//19 LG_STR anszNoteSetPassword[4][LG_NUM] =
	{CN("已输入密码的权限级别")   //2
	 EN("Level of the input password")},
	{CN("")   //2
	 EN("")},
	{CN("新密码和确认密码须一致")   //1
	 EN("New password and retype must the same")},
	{CN("")   //2
	 EN("")},

	//19 LG_STR anszNotePermit[10][LG_NUM] =
    {CN("0:无定义")   //0
    EN("0:Undefined")},
    {CN("1:无定义")   //1
    EN("1:Undefined")},
    {CN("2:无定义")   //2
    EN("2:Undefined")},
    {CN("3:无定义")   //3
    EN("3:Undefined")},
    {CN("4:用户密码")   //4
    EN("4:User password")},
    {CN("5:高级用户密码")   //5
    EN("5:Senior user password")},
    {CN("6:厂商")   //6
    EN("6:Manufacturer")},
    {CN("7:无定义")   //7
    EN("7:Undefined")},
    {CN("8:无定义")   //8
    EN("8:Undefined")},
    {CN("9:无定义")   //9
    EN("9:Undefined")},

	//LG_STR anszDataProtect[10][LG_NUM] =
//    {CN("系统参数")   //0
//    EN("System parameter")},
//    {CN("螺距补偿")   //1
//    EN("Pitch Error parameter")},
//    {CN("时间")   //2
//    EN("Time")},
    {CN("普通加工程序")   //3
    EN("Normal program of part")},
    {CN("加工程序O7xxx")   //4
    EN("program O7xxx of part")},
    {CN("加工程序O8xxx")   //5
    EN("program O8xxx of part")},
    {CN("加工程序O9xxx")   //6
    EN("program O9xxx of part")},
    {CN("梯图")   //7
    EN("Ladder")},
    {CN("")   //8
    EN("")},
    {CN("")   //9
    EN("")},
    {CN("")   //8
    EN("")},
    {CN("")   //9
    EN("")},
    {CN("")   //9
    EN("")},

	//19 LG_STR nszNoteRecoverDef[LG_NUM] =
    {CN("是否将参数恢复默认值?")
    EN("Recover parameter with default value?")},

	//19 LG_STR nszNoteClearData[LG_NUM] =
    {CN("是否清除全部数据?")
    EN("Clear all the data?")},

	//19 LG_STR nszNoteClearSelectedData[LG_NUM] =
    {CN("是否清除所选数据?")
    EN("Clear the selected data?")},

	//19 LG_STR nszNoteClearToolOfsWearData[LG_NUM] =
    {CN("是否清除全部刀具偏置及磨损数据?")
    EN("Clear all the tool offset and wear data?")},

	//19 LG_STR nszNoteClearToolWearData[LG_NUM] =
    {CN("是否清除全部刀具磨损数据?")
    EN("Clear all the tool wear data?")},

	//19 LG_STR nszNoteClearCurrentAxisData[LG_NUM] =
    {CN("是否清除所有当前轴数据?")
    EN("Clear all the current axis data?")},

	//19 LG_STR nszNoteUpgradeSoftware[LG_NUM] =
    {CN("确定要升级软件?")
    EN("Make sure to upgrade the software?")},

	//19 LG_STR nszNoteUpgradePic[LG_NUM] =
    {CN("确定要升级开机画面?")
    EN("Make sure to upgrade the startup picture?")},

	//19 LG_STR nszNoteFormatDisk[LG_NUM] =
    {CN("格式化将清除程序和参数,是否进行格式化?")
    EN("Formating will delete all program and parameter, format?")},

	//19 LG_STR nszNoteImportPitchFromUsb[LG_NUM] =
    {CN("是否从U盘%s文件导入螺距补偿数据?")
    EN("Import pitch data from usb %s file?")},

	//19 LG_STR nszNoteAutoLocatePosition[LG_NUM] =
    {CN("是否进行自动定位?")
    EN("Auto locate position?")},

	//19 LG_STR nszNoteCopyAllToUsb[LG_NUM] =
    {CN("复制全部程序到U盘,将覆盖U盘原有同名程序,是否复制?")
    EN("Copy all program to Udisk?(will cover the same program)")},

	//19 LG_STR nszNoteCopyAllToNc[LG_NUM] =
    {CN("复制全部程序到系统,将覆盖系统原有同名程序,是否复制?")
    EN("Copy all program to NC?(will cover the same program)")},

	//19 LG_STR nszNoteDeleteAllProg[LG_NUM] =
    {CN("是否要删除所有程序?")
    EN("Delete all the program?")},

	//19 LG_STR nszNoteDeleteTheFile[LG_NUM] =
    {CN("是否要删除该文件?")
    EN("Delete the file?")},

    //19 LG_STR nszNoteAutoCalc[LG_NUM] =
    {CN("数据将发生变化,是否自动计算?")
    EN("Data will change,Auto Calc?")},

	//19 LG_STR nszNoteUsrAlmSet[8][LG_NUM] =
    {CN("0/1:输入信号为常开/常闭")
    EN("0/1:Input signal is normal open/close")},
    {CN("0/1:报警时不/停加工")
    EN("0/1:Not/stop operation when alarm")},
    {CN("0/1:报警时不/停主轴1")
    EN("0/1:Not/stop spindle1 when alarm")},
    {CN("0/1:报警时不/停主轴2")
    EN("0/1:Not/stop spindle2 when alarm")},
#if CHN_SPDL_NUM > 2
    {CN("0/1:报警时不/停主轴3")
    EN("0/1:Not/stop spindle3 when alarm")},
#else
    {CN("")
    EN("")},
#endif
#if CHN_SPDL_NUM > 3
    {CN("0/1:报警时不/停主轴4")
    EN("0/1:Not/stop spindle4 when alarm")},
#else
    {CN("")
    EN("")},
#endif
    {CN("")
    EN("")},
    {CN("")
    EN("")},

    //GROUP:Bar标题
    //1126 LG_STR nszBTtlTraceView[LG_NUM] =
	{CN("轨迹显示")
	 EN("Trace View")},

	//1126 LG_STR nszBTtlAuxInfo[LG_NUM] =
	{CN("辅助信息")
	 EN("Trace View")},

	//47 LG_STR nszBTtlCoorSys[LG_NUM] =
	{CN("坐标系")
	 EN("CoorSys")},

	//47 LG_STR nszBTtlServoLoad[LG_NUM] =
	{CN("伺服负载")
	 EN("Servo Load")},

	//47 LG_STR nszBTtlCode[LG_NUM] =
	{CN("通道%d[%s]")
	 EN("Chn%d[%s]")},

	//47 LG_STR nszBTtlNcData[LG_NUM] =
	{CN("系统数据")
	 EN("Nc data")},

	//1100 LG_STR nszBTtlUsrMacroVar[LG_NUM] =
	{CN("自定义宏变量")
	 EN("User Macro Var")},

	//1100 LG_STR nszBTtlUsrInputAlm[LG_NUM] =
	{CN("自定义输入报警")
	 EN("User Input Alarm")},

	//1100 LG_STR nszBTtlUsrWaitAlm[LG_NUM] =
	{CN("自定义等待报警")
	 EN("User Wait Alarm")},

	//1100 LG_STR nszBTtlUsrPage[LG_NUM] =
	{CN("自定义页面")
	 EN("User Page")},

    //303 LG_STR nszBTtlServoPar[LG_NUM] =
    {CN("伺服参数")
    EN("ServoPar.")},

	//1100 LG_STR nszBTtlRefF[LG_NUM] =
	{CN("回零快速速度")
	 EN("Home rapid feed")},

	//1100 LG_STR nszBTtlCenterInput[LG_NUM] =
	{CN("分中输入")
	 EN("Center Input")},

	//1100 LG_STR nszBTtl3PointCenter[LG_NUM] =
	{CN("三点定圆心")
	 EN("3-PointCenter")},

	//1100 LG_STR nszBTtlDataProtect[LG_NUM] =
	{CN("数据保护")
	 EN("Data Protect")},

	//1100 LG_STR nszBTtlCurrentOperateLevel[LG_NUM] =
    {CN("当前操作级别")
    EN("current operate level")},

	//1100 LG_STR nszBTtlLocalLevel[LG_NUM] =
    {CN("局部变量级别")
    EN("Local level")},

    //303 LG_STR nszBTtlLocalVar[LG_NUM] =
    {CN("局部变量")
    EN("Local varable")},

    //303 LG_STR nszBTtlGlobalVar[LG_NUM] =
    {CN("全局变量")
    EN("Global varable")},

    //303 LG_STR nszBTtlNonvolatileVar[LG_NUM] =
    {CN("掉电记忆变量")
    EN("Non-volatile varable")},

    //303 LG_STR nszBTtlNoProgram[LG_NUM] =
    {CN("没有程序")
    EN("No program")},

    //GROUP:报表标题
    //LG_STR nszRTtlPort[LG_NUM] =
    {CN("端口")
     EN("Port")},

    //LG_STR nszRTtlInput[LG_NUM] =
    {CN("输入口")
     EN("DI")},

    //LG_STR nszRTtlPin[LG_NUM] =
    {CN("管脚")
     EN("Pin")},

    //LG_STR nszRTtlFunc[LG_NUM] =
    {CN("功能")
     EN("Func.")},

	//LG_STR nszRTtlAddr[LG_NUM] =
	{CN("地址")
	 EN("ADDR")},

	//LG_STR nszRTtlName[LG_NUM] =
	{CN("名称")
	 EN("Name")},

	//LG_STR nszRTtlStatus[LG_NUM] =
	{CN("状态")
	 EN("Status")},

	//LG_STR nszRTtlData[LG_NUM] =
	{CN("数据")
	 EN("Data")},

	//LG_STR nszRTtlFileName[LG_NUM] =
	{CN("文件名")
	 EN("FileName")},

	//LG_STR nszRTtlS[LG_NUM] =
	{CN("S")
	 EN("S")},

	//LG_STR nszRTtlAlmType[LG_NUM] =
	{CN("报警类型")
	 EN("AlmType")},

	//LG_STR nszRTtlAlmNumber[LG_NUM] =
	{CN("报警号")
	 EN("AlmNo.")},

	//LG_STR nszRTtlContent[LG_NUM] =
	{CN("内容")
	 EN("Content")},

	//1120 LG_STR nszRTtlTime[LG_NUM] =
	{CN("时间")
	 EN("Time")},

     //1120 LG_STR nszRTtlChn[LG_NUM] =
	{CN("通道")
	 EN("Chn")},

     //1120 LG_STR nszRTtlYear_Month_Day[LG_NUM] =
	{CN("年-月-日")
	 EN("Year-Month-Day")},

     //1120 LG_STR nszRTtlHour_Min_Sec[LG_NUM] =
    {CN("时:分:秒")
    EN("Hour:Min:Sec")},

     //1120 LG_STR nszRTtlTrialFinal[LG_NUM] =
	{CN("试用期限")
	 EN("Trial final")},

     //1120 LG_STR nszRTtlSet[LG_NUM] =
	{CN("设置")
	 EN("Set")},

	//92 LG_STR nszRTtlLength[LG_NUM] =
	{CN("长度(H)")
	 EN("Length(H)")},

	//116 LG_STR nszRTtlRadius[LG_NUM] =
	{CN("半径(D)")
	 EN("Radius(D)")},

	//LG_STR nszRTtlTCode[LG_NUM] =
	{CN("T代码")
	 EN("T code")},

	//LG_STR nszRTtlGroup[LG_NUM] =
	{CN("组号")
	 EN("Group")},

	//LG_STR nszRTtlCurLife[LG_NUM] =
	{CN("当前寿命")
	 EN("Cur.Life")},

	//LG_STR nszRTtlMaxLife[LG_NUM] =
	{CN("最大寿命")
	 EN("Max.Life")},

    //LG_STR nszRTtlDataName[LG_NUM] =
	{CN("数据名称")
	 EN("Data Name")},

    //LG_STR nszRTtlChg[LG_NUM] =
	{CN("修改")
	 EN("CHG")},

    //LG_STR nszRTtlOut[LG_NUM] =
	{CN("导出")
	 EN("OUT")},

    //LG_STR nszRTtlShow[LG_NUM] =
	{CN("查看")
	 EN("Show")},

	//LG_STR nszRTtlOn[LG_NUM] =
	{CN("闭合")
	 EN("ON")},

	//LG_STR nszRTtlOff[LG_NUM] =
	{CN("关断")
	 EN("OFF")},

    //GROUP:消息nszMsg
	//1120 LG_STR nszMsgInputErr[LG_NUM] =
	{CN("输入数据错误")
	 EN("Input error")},

	//411 LG_STR nszMsgPasswordDiff[LG_NUM] =
	{CN("新密码不一致")
	 EN("The new password is different!")},

	//416 LG_STR nszMsgSaved[LG_NUM] =
	{CN("数据已保存")
	 EN("Data saved")},

	//416 LG_STR nszMsgScreenSaved[LG_NUM] =
	{CN("屏幕已保存")
	 EN("Screen saved")},

	//416 LG_STR nszMsgRead[LG_NUM] =
	{CN("数据已读入")
	 EN("Data has read")},

	//402 LG_STR nszMsgPwdErr[LG_NUM] =
	{CN("密码错误!")
	 EN("Password error!")},

	//402 LG_STR nszMsgPwdErrOverTimes[LG_NUM] =
	{CN("错误次数已超过限次!")
	 EN("Error over times!")},

	//379 LG_STR nszMsgFormatFail[LG_NUM] =
	{CN("格式化失败")
	 EN("Format failed.")},

	//379 LG_STR nszMsgFormatSucc[LG_NUM] =
	{CN("格式化成功完成")
	 EN("Format complete successfully.")},

	//380 LG_STR nszMsgFormatting[LG_NUM] =
	{CN("正在进行格式化...")
	 EN("Formatting...")},

	//390 LG_STR nszMsgInputPass[LG_NUM] =
	{CN("请输入密码!")
	 EN("Please input the password!")},

	//378 LG_STR nszMsgFileNameError[LG_NUM] =
	{CN("文件名错误")
	 EN("File name error!")},

	//375 LG_STR nszMsgFileExist[LG_NUM] =
	{CN("文件已存在")
	 EN("File existed")},

	//378 LG_STR nszMsgFileNotExist[LG_NUM] =
	{CN("文件不存在")
	 EN("File not exist")},

	//375 LG_STR nszMsgPortExist[LG_NUM] =
	{CN("端口已存在")
	 EN("Port existed")},

	//369 LG_STR nszMsgCopySucc[LG_NUM] =
	{CN("复制成功")
	 EN("Successfully copy file")},

	//369 LG_STR nszMsgCopyFail[LG_NUM] =
	{CN("复制失败")
	 EN("File copy failed")},

	//398 LG_STR nszMsgOperNoEffect[LG_NUM] =
	{CN("操作无效")
	 EN("The operation is of no effect.")},

	//399 LG_STR nszMsgOperFail[LG_NUM] =
	{CN("操作失败")
	 EN("The operation failed")},

	//400 LG_STR nszMsgOperSucc[LG_NUM] =
	{CN("操作成功")
	 EN("The operation completed")},

	//400 LG_STR nszMsgOperSuccPowerOn[LG_NUM] =
	{CN("操作成功,请重新上电!")
	 EN("Completed! poweron again!")},

	//370 LG_STR nszMsgCreateFail[LG_NUM] =
	{CN("创建文件失败")
	 EN("Fail to create file")},

	//371 LG_STR nszMsgDeleteFail[LG_NUM] =
	{CN("删除失败")
	 EN("Fail to delete file")},

	//372 LG_STR nszMsgDeleteSucc[LG_NUM] =
	{CN("删除成功")
	 EN("Successfully delete file")},

	//373 LG_STR nszMsgDeleting[LG_NUM] =
	{CN("正在删除")
	 EN("Deleting")},

	//409 LG_STR nszMsgOpenFail[LG_NUM] =
	{CN("打开文件失败")
	 EN("Fail to open file")},

	//409 LG_STR nszMsgFileIllegal[LG_NUM] =
	{CN("文件非法")
	 EN("File illegal")},

	//409 LG_STR nszMsgNotEditMode[LG_NUM] =
	{CN("非编辑模式")
	 EN("Not EDIT mode")},

	//409 LG_STR nszMsgNotMdiMode[LG_NUM] =
	{CN("非录入模式")
	 EN("Not MDI mode")},

	//409 LG_STR nszMsgNoMemMode[LG_NUM] =
	{CN("不能是自动模式")
	 EN("Can NOT IN MEM mode")},

	//409 LG_STR nszMsgNoMdiMode[LG_NUM] =
	{CN("不能是录入模式")
	 EN("Can NOT IN MDI mode")},

	//409 LG_STR nszMsgNoSpace[LG_NUM] =
	{CN("没有足够的空间")
	 EN("No enough space")},

	//409 LG_STR nszMsgParSwitchNotOn[LG_NUM] =
	{CN("参数开关未打开")
	 EN("Parameter switch not ON")},

	//403 LG_STR nszMsgProgSwitchNotOn[LG_NUM] =
	{CN("程序开关未打开")
	 EN("Program swith NOT on")},

	//409 LG_STR nszMsgParPasswordNeeded[LG_NUM] =
	{CN("参数修改需要密码")
	 EN("Need parameter permit")},

	//409 LG_STR nszMsgProgPasswordNeeded[LG_NUM] =
	{CN("程序修改需要密码")
	 EN("Need program permit")},

	//409 LG_STR nszMsgNcIsRun[LG_NUM] =
	{CN("系统正在运行")
	 EN("Nc is running")},

	//409 LG_STR nszMsgAxisNotStop[LG_NUM] =
	{CN("轴没有停止")
	 EN("Axis not stop")},

     //409 LG_STR nszMsgTrialSerialErr[LG_NUM] =
     {CN("试用序列号错误")
     EN("Trial serial error")},

     //409 LG_STR nszMsgCurrentFileNotExist[LG_NUM] =
     {CN("当前文件不存在")
     EN("Current file not exist")},

     //409 LG_STR nszMsgTargetFileNotExist[LG_NUM] =
     {CN("目标文件不存在")
     EN("Target file not exist")},

     //409 LG_STR nszMsgMakeDirFail[LG_NUM] =
     {CN("创建目录失败")
     EN("Make dir failed")},

     //409 LG_STR nszMsgNoPermit[LG_NUM] =
     {CN("无操作权限")
     EN("permition needed")},

     //409 LG_STR nszMsgNoShowPermit[LG_NUM] =
     {CN("无显示权限")
     EN("No show permition")},

     //409 LG_STR nszMsgReadServoParErr[LG_NUM] =
     {CN("读伺服参数错误")
     EN("Read Servo-Par ERROR")},

     //409 LG_STR nszMsgWriteServoParErr[LG_NUM] =
     {CN("写伺服参数错误")
     EN("Write Servo-Par ERROR")},

     //409 LG_STR nszMsgToolWearIncTooMaxErr[LG_NUM] =
     {CN("刀具磨损增量值太大")
     EN("Tool wear Incremental value too big ")},

     //409 LG_STR nszMsgToolWearTooMaxErr[LG_NUM] =
     {CN("刀具磨损绝对值太大")
     EN("Tool wear absolute value too big ")},

     //409 LG_STR nszMsgNewPermitTooHigh[LG_NUM] =
     {CN("新操作级别过高!")
     EN("New level too high")},

     //409 LG_STR nszMsgCurPermitNotEnough[LG_NUM] =
     {CN("当前操作级别不够!")
     EN("Current level not enough")},

     //409 LG_STR nszMsgUpgradeFinish[LG_NUM] =
     {CN("升级完成,请重新启动!")
     EN("Upgrade OK,please reboot!")},

    //GROUP:报警nszAlm
    //1202 LG_STR nszAlmType[10][LG_NUM] =
	{CN("")
	 EN("")},
	{CN("系统报警")
	 EN("NC ALM")},
	{CN("程序报警")
	 EN("PS ALM")},
     {CN("宏报警")
	 EN("MC ALM")},
	{CN("限位报警")
	 EN("OT ALM")},
	{CN("伺服报警")
	 EN("SV ALM")},
	{CN("主轴报警")
	 EN("SP ALM")},
	{CN("PLC报警")
	 EN("PLC ALM")},
	{CN("用户报警")
	 EN("USR ALM")},
     {CN("总线报警")
	 EN("BUS ALM")},

	//409 LG_STR nszAlmPrg[300][LG_NUM] =
	{CN("") //0
	 EN("")},
	{CN("软件错误") //1
	 EN("Software error")},
	{CN("内存不足") //2
	 EN("Memory lack")},
	{CN("数据位太多") //3
	 EN("too many digit")},
	{CN("地址错误") //4
	 EN("address error")},
	{CN("数据错误") //5
	 EN("data error")},
	{CN("数据指定小数点错误") //6
	 EN("decimal point error")},
	{CN("") //7
	 EN("")},
	{CN("") //8
	 EN("")},
	{CN("T指定错误") //9
	 EN("T error")},
	{CN("G代码错误") //10
	 EN("G error")},
	{CN("M代码错误") //11
	 EN("M error")},
	{CN("P指定错误") //12
	 EN("P error")},
	{CN("S指定错误") //13
	 EN("S error")},
	{CN("F指定错误") //14
	 EN("F error")},
	{CN("Q指定错误") //15
	 EN("Q error")},
	{CN("N指定错误") //16
	 EN("N error")},
	{CN("R指定错误") //17
	 EN("R error")},
	{CN("D指定错误") //18
	 EN("D error")},
	{CN("S指定过多") //19
	 EN("S too many")},
	{CN("指令过多,不能在同一行") //20
	 EN("Command too many or can't in same line")},
	{CN("平面指定错误") //21
	 EN("Plane error")},
	{CN("平面轴指定错误") //22
	 EN("Plane axis error")},
	{CN("平面轴指定指定过多") //23
	 EN("Palne axis too many")},
	{CN("刀具偏置号错误") //24
	 EN("Tool offset number error")},
	{CN("") //25
	 EN("")},
	{CN("") //26
	 EN("")},
	{CN("") //27
	 EN("")},
	{CN("指定轴不存在或不能使用") //28
	 EN("axis not exist or can't use")},
	{CN("指定主轴不存在") //29
	 EN("Spindle not exist")},
	{CN("跳段指令错误") //30
	 EN("Block jump command error")},
	{CN("F为0") //31
	 EN("F is 0")},
	{CN("指令轨迹太长") //32
	 EN("command trace too long")},
	{CN("缺参数") //33
	 EN("Need more parameter")},
	{CN("同时运动轴过多") //34
	 EN("Too many axis")},
	{CN("G02或G03指令半径超差") //35
	 EN("G02 or G03 radius over tolerance")},
	{CN("G02或G03指令未定义平面") //36
	 EN("G02 or G03 plane define needed")},
	{CN("G02或G03指令中没有找到R或IJK") //37
	 EN("G02 or G03 R and IJK not found")},
	{CN("G02或G03指令中R指定错误") //38
	 EN("G02 or G03 R value error")},
	{CN("G02或G03指令中L指定错误") //39
	 EN("G02 or G03 L value error")},
	{CN("G41G42时无交点") //40
	 EN("G41G42 no cross point")},
	{CN("G41G42时以圆弧建立或撤销") //41
	 EN("G41G42 setup or cancel with arc")},
	{CN("G41G42时指定了G31") //42
	 EN("G41G42 specified G31")},
	{CN("G41G42时,未找到后续程序段") //43
	 EN("G41G42, not next block")},
	{CN("G41G42时不能改变平面") //44
	 EN("G41G42, change plane")},
	{CN("G41G42时发生轨迹干涉") //45
	 EN("G41G42, trace interference")},
	{CN("") //46
	 EN("")},
	{CN("") //47
	 EN("")},
	{CN("") //48
	 EN("")},
	{CN("") //49
	 EN("")},
	{CN("直线倒角(,C)错误") //50
	 EN("Line round error")},
	{CN("圆弧倒角(,R)错误") //51
	 EN("Arc round error")},
	{CN("角度编程(,A)时,轨迹方向和指定角度不一致") //52
	 EN("Angle programming,cross direction not same with original")},
	{CN("B类角度编程(,A),第二段需绝对编程") //53
     EN("Angle programming B:2nd block need abs value")},
	{CN("B类角度编程(,A),第一段和第二段角度太接近") //54
	 EN("Angle programming B:2 blocks angle is too close")},
	{CN("B类角度编程(,A),第一段长度过短") //55
	 EN("Angle programming B:1st block too short")},
	{CN("B类角度编程(,A),第二段长度过短") //56
	 EN("Angle programming B:2nd block too short")},
	{CN("直线圆弧交点选择功能(,P)指定错误") //57
	 EN("")},
	{CN("") //58
	 EN("")},
	{CN("") //59
	 EN("")},
	{CN("G31缺参数") //60
	 EN("G31 need parameter")},
	{CN("G53不能使用相对坐标") //61
	 EN("G53 can't use relative coordinate")},
	{CN("G7.1旋转轴指定错误") //62
	 EN("G7.1 rotation axis name error")},
	{CN("G7.1旋转轴数据指定错误") //63
	 EN("G7.1 rotation axis data error")},
	{CN("G7.1格式指定错误或平面及相关轴参数错误") //64
	 EN("G7.1 format error")},
	{CN("G10格式错误") //65
	 EN("G10 format error")},
	{CN("G10中L指定错误") //66
	 EN("G10 L value error")},
	{CN("G10中P指定错误") //67
	 EN("G10 P value error")},
	{CN("G10中地址指定错误") //68
	 EN("G10 address error")},
	{CN("G10中R指定错误") //69
	 EN("G10 R value error")},
	{CN("多重循环没有找到PQ") //70
	 EN("Multiple repetitive canned cycle PQ not found")},
	{CN("多重循环非法指令") //71
	 EN("Multiple repetitive canned cycle illegal command")},
	{CN("多重循环缺参数") //72
	 EN("Multiple repetitive canned cycle need more parameter")},
	{CN("多重循环参数错误") //73
	 EN("Multiple repetitive canned cycle parameter error")},
	{CN("多重循环平面错误") //74
	 EN("Multiple repetitive canned cycle plane error")},
	{CN("多重循环无交点") //75
	 EN("Multiple repetitive canned cycle no cross point")},
	{CN("多重循环第二轴不是单调变化或者精加工余量错") //76
	 EN("Multiple canned cycle 2nd axis not monotone or finishing allowance error")},
	{CN("多重循环起刀点错误或者精加工余量错") //77
	 EN("Multiple canned cycle start point or finishing allowance error")},
	{CN("多重循环第一轴不是单调变化或者精加工余量错") //78
	 EN("Multiple canned cycle 1st axis not monotone or finishing allowance error")},
	{CN("G70中PQ和粗加工不一致或没有粗加工,可指定J1强制执行") //79
	 EN("G70 PQ error")},
	{CN("G70精加工循环没有找到PQ") //80
	 EN("G70 PQ not found")},
	{CN("G76牙高Pk没有指定") //81
	 EN("G76 teeth height(Pk) not found")},
	{CN("G76第一次切削量Qd没有指定或太小") //82
	 EN("G76 depth of 1st cut(Qd) not found")},
	{CN("G76牙高或者螺纹起始点指定错误") //83
	 EN("G76 teeth height or start point error")},
	{CN("G76断屑命令错误") //84
	 EN("G76 chip breaking cut error")},
	{CN("钻孔或攻丝循环时,R指定错误") //85
	 EN("Drill or TAP cycle R error")},
	{CN("精堂循环退回方向指定错误") //86
	 EN("Fine boring dirction error when retract")},
	{CN("") //87
	 EN("")},
	{CN("") //88
	 EN("")},
	{CN("") //89
	 EN("")},
	{CN("G33没有指定攻丝轴") //90
	 EN("G33 tap axis not specified")},
	{CN("攻丝指令时,导程超出参数指定最大值") //91
	 EN("Lead specified is too big in tap command")},
	{CN("") //92
	 EN("")},
	{CN("") //93
	 EN("")},
	{CN("") //94
	 EN("")},
	{CN("") //95
	 EN("")},
	{CN("") //96
	 EN("")},
	{CN("") //97
	 EN("")},
	{CN("M98参数指定错误") //98
	 EN("M98 paramenter error")},
	{CN("") //99
	 EN("")},
	{CN("数据源错误或文件不存在") //100
	 EN("Data source error or file not exist")},
	{CN("程序未找到") //101
	 EN("Program not found")},
	{CN("DNC模式下,不能执行跳转") //102
	 EN("Can't jump in DNC mode")},
	{CN("文件结束错误") //103
	 EN("File end error")},
	{CN("G65没有指定P") //104
	 EN("G65 P not found")},
	{CN("M92没有指定N") //105
	 EN("M92 N not found")},
	{CN("M92嵌套层数过多") //106
	 EN("M92 too many nest")},
	{CN("M91缺参数") //107
	 EN("M91 need more parameter")},
	{CN("M35缺参数或指定错误") //108
	 EN("M91 need more parameter or parameter error")},
	{CN("程序非法或者操作失败") //109
	 EN("Program illegal or operation failed")},
	{CN("程序调用嵌套太深") //110
	 EN("Sub call too many nest")},
	{CN("括号嵌套太深") //111
    EN("Braket too many nest")},
	{CN("顺序号没有找到") //112
	 EN("Sequence number not found")},
	{CN("参数号错误") //113
	 EN("variable number error ")},
	{CN("除零") //114
	 EN("Divide by zero error")},
	{CN("入口参数错误") //115
	 EN("Argument error")},
	{CN("错误的功能") //116
	 EN("Function error")},
	{CN("入口参数太多") //117
	 EN("Argument too many")},
	{CN("参数错误") //118
	 EN("Parameter error")},
	{CN("空变量") //119
	 EN("NULL variable")},
	{CN("通道号不符") //120
	 EN("Channal number error")},
	{CN("DO指定数据错误") //121
	 EN("DO specified data error")},
	{CN("END指定数据错误") //122
	 EN("END specified data error")},
	{CN("WHILE语句没有指定DO") //123
	 EN("DO not specified in WHILE statement")},
	{CN("GOTO语句跳过END时出错") //124
	 EN("GOTO statement jump over END error")},
	{CN("IF语句错误") //125
	 EN("IF statement error")},
	{CN("ENDIF语句错误") //126
	 EN("ENDIF statement error")},
	{CN("ELSE语句错误") //127
	 EN("ELSE statement error")},
	{CN("ELIF语句错误") //128
	 EN("ELIF statement error")},
	{CN("IF-ENDIF语句配对错误") //129
	 EN("IF-ENDIF statement pair error")},
	{CN("操作符错误") //130
	 EN("Operator error")},
	{CN("表达式格式错误") //131
	 EN("Expression format error")},
	{CN("表达式过于复杂") //132
	 EN("Expression too complex")},
	{CN("关键字错误") //133
	 EN("Keyword error")},
	{CN("") //134
	 EN("")},
	{CN("") //135
	 EN("")},
	{CN("") //136
	 EN("")},
	{CN("") //137
	 EN("")},
	{CN("") //138
	 EN("")},
	{CN("") //139
	 EN("")},
	{CN("G12.1/G13.1指定错误") //140
	 EN("G12.1/G13.1 specified error")},
	{CN("G12.1/G13.1相关参数设定") //141
	 EN("G12.1/G13.1 ralated parameter error")},
	{CN("G12.1数据指定错误") //142
	 EN("G12.1/G13.1 data specified error")},
	{CN("") //143
	 EN("")},
	{CN("") //144
	 EN("")},
	{CN("") //145
	 EN("")},
	{CN("G51.2没有指定PQ") //146
	 EN("G51.2 P/Q not specifed")},
	{CN("G51.2或G50.2行指定了其他指令") //147
	 EN("G51.2/G50.2 line specifed other command")},
	{CN("G51.2指定的轴类型错误") //148
	 EN("G51.2 specifed axis type error")},
	{CN("G51.2指定的轴速度错误") //149
	 EN("G51.2 specifed axis speed error")},
	{CN("G51.4或G50.4行指定了其他指令") //150
	 EN("G51.4/G50.4 line specifed other command")},
	{CN("G51.4没有指定P或Q") //151
	 EN("G51.4 P/Q not specifed")},
	{CN("G50.4没有指定Q") //152
	 EN("G50.4 Q not specifed")},
	{CN("G51.4中P或Q指定错误") //153
	 EN("G51.4 P/Q specifed error")},
	{CN("G50.4中Q指定错误") //154
	 EN("G50.4 Q specifed error")},
	{CN("G04.1中P指定错误") //155
	 EN("G04.1 P error")},
	{CN("G04.1中Q指定错误") //156
	 EN("G04.1 Q error")},
	{CN("G114.1中K指定错误") //157
	 EN("G114.1 K error")},
	{CN("G114.1相关参数设置错误") //158
	 EN("G114.1 parameter error")},
	{CN("G113中K指定错误") //159
	 EN("G113 K error")},
	{CN("G51.8或G50.8行指定了其他指令") //160
	 EN("G51.8/G50.8 line specifed other command")},
	{CN("G51.8没有指定P或L") //161
	 EN("G51.8 P/L not specifed")},
	{CN("G51.8相关参数错误") //162
	 EN("G51.8 parameter error")},
	{CN("") //163
	 EN("")},
	{CN("") //164
	 EN("")},
	{CN("G81.4或G80.4行指定了其他指令") //165
	 EN("G81.4/G80.4 line specifed other command")},
	{CN("G81.4指定的刀具主轴轴相关参数错误") //166
	 EN("G81.4 tool axis parameter error")},
	{CN("G81.4指定的工件轴相关参数错误") //167
	 EN("G81.4 workpiece axis parameter error")},
	{CN("G81.4指定的T参数错误") //168
	 EN("G81.4 T specifed error")},
	{CN("") //169
	 EN("")},
	{CN("螺纹没有指定导程") //170
	 EN("The Lead not found in thread command ")},
	{CN("圆弧螺纹,长短轴指定错误") //171
	 EN("The long or short axis error in arc-thread")},
	{CN("中段螺纹P指定错误,或起点错") //172
	 EN("The mid-segment thread P or start-point error")},
	{CN("螺纹断屑切削,没有指定牙高NK") //173
	 EN("Teeth height(NK) not specified when chip-break threading")},
	{CN("") //174
	 EN("")},
	{CN("变螺距时K指定错误") //175
	 EN("K error when thread cutting")},
	{CN("") //176
	 EN("")},
	{CN("") //177
	 EN("")},
	{CN("") //178
	 EN("")},
	{CN("") //179
	 EN("")},
	{CN("G40.1/G41.1/G42.1参数错误") //180
	 EN("G40.1/G41.1/G42.1 parameter error")},
	{CN("G05三点圆弧指定时共线") //181
	 EN("G05 specifed points on line")},
	{CN("G05三点圆弧没有指定IJK") //182
	 EN("G05 IJK not specifed")},
	{CN("G05三点圆弧不能指定R") //183
	 EN("G05 R specifed")},
	{CN("") //184
	 EN("")},
	{CN("自动圆弧交点或切线时,终点坐标错误") //185
	 EN("Auto Line-arc-contact target position error")},
	{CN("自动直线圆弧交点时,圆心指定错误") //186
	 EN("Line arc auto cross abs-org needed(PQ)")},
	{CN("自动直线圆弧交点时,无交点") //187
	 EN("Line arc auto cross have NO cross")},
	{CN("自动直线圆弧切点时,参数指定错误") //188
	 EN("Line arc auto contact parameter error")},
	{CN("自动直线圆弧切点时,无切点") //189
	 EN("Auto Line-arc-contact have NO contact")},
	{CN("自动圆弧交点或切线时,没有指定圆心") //190
	 EN("Auto arc-cross or arc-contact have no center point")},
	{CN("指定自动圆弧相切时,无切点") //191
	 EN("Auto arc-arc-contact have NO contact")},
	{CN("指定自动圆弧相切时,R编程圆弧终点和前一段圆心太近") //192
	 EN("Target postion of R-Arc too close to prev-org when arc-arc-contact")},
	{CN("指定自动圆弧相切线,圆心和前一段R编程圆弧起点太近") //193
	 EN("Org too close to prev-start-postion of R-Arc when arc-arc-contact")},
	{CN("自动圆弧相切线时,圆心太近") //194
	 EN("Org too close when arc-arc-contact")},
	{CN("") //195
	 EN("")},
	{CN("") //196
	 EN("")},
	{CN("") //197
	 EN("")},
	{CN("") //198
	 EN("")},
	{CN("刀具寿命已用尽或者参数错误") //199
	 EN("Tool life exhausted or parameter error")},
	{CN("G144指令N指定错误") //200
	 EN("G144 N error")},
	{CN("G144指令P指定错误") //201
	 EN("G144 P error")},
	{CN("G160只能指定一个进给轴") //202
	 EN("G160 accept one axis only")},
	{CN("G160指令P指定错误或者参数错") //203
	 EN("G160 P error or parameter error")},
	{CN("扭矩控制相关参数或者程序指定错误") //204
	 EN("Torque control parameter or program error")},
	{CN("G66/G67配对错误") //205
	 EN("G66/G67 Not match")},
	{CN("") //206
	 EN("")},
	{CN("") //207
	 EN("")},
	{CN("") //208
	 EN("")},
	{CN("") //209
	 EN("")},
	{CN("") //210
	 EN("")},
	{CN("") //211
	 EN("")},
	{CN("") //212
	 EN("")},
	{CN("") //213
	 EN("")},
	{CN("") //214
	 EN("")},
	{CN("") //215
	 EN("")},
	{CN("") //216
	 EN("")},
	{CN("") //217
	 EN("")},
	{CN("") //218
	 EN("")},
	{CN("") //219
	 EN("")},
	{CN("") //220
	 EN("")},
	{CN("") //221
	 EN("")},
	{CN("") //222
	 EN("")},
	{CN("") //223
	 EN("")},
	{CN("") //224
	 EN("")},
	{CN("") //225
	 EN("")},
	{CN("") //226
	 EN("")},
	{CN("") //227
	 EN("")},
	{CN("") //228
	 EN("")},
	{CN("") //229
	 EN("")},
	{CN("") //230
	 EN("")},
	{CN("") //231
	 EN("")},
	{CN("") //232
	 EN("")},
	{CN("") //233
	 EN("")},
	{CN("") //234
	 EN("")},
	{CN("") //235
	 EN("")},
	{CN("") //236
	 EN("")},
	{CN("") //237
	 EN("")},
	{CN("") //238
	 EN("")},
	{CN("") //239
	 EN("")},
	{CN("") //240
	 EN("")},
	{CN("") //241
	 EN("")},
	{CN("") //242
	 EN("")},
	{CN("") //243
	 EN("")},
	{CN("") //244
	 EN("")},
	{CN("") //245
	 EN("")},
	{CN("") //246
	 EN("")},
	{CN("") //247
	 EN("")},
	{CN("") //248
	 EN("")},
	{CN("") //249
	 EN("")},
	{CN("") //250
	 EN("")},
	{CN("") //251
	 EN("")},
	{CN("") //252
	 EN("")},
	{CN("") //253
	 EN("")},
	{CN("") //254
	 EN("")},
	{CN("") //255
	 EN("")},
	{CN("") //256
	 EN("")},
	{CN("") //257
	 EN("")},
	{CN("") //258
	 EN("")},
	{CN("") //259
	 EN("")},
	{CN("") //260
	 EN("")},
	{CN("") //261
	 EN("")},
	{CN("") //262
	 EN("")},
	{CN("") //263
	 EN("")},
	{CN("") //264
	 EN("")},
	{CN("") //265
	 EN("")},
	{CN("") //266
	 EN("")},
	{CN("") //267
	 EN("")},
	{CN("") //268
	 EN("")},
	{CN("") //269
	 EN("")},
	{CN("") //270
	 EN("")},
	{CN("") //271
	 EN("")},
	{CN("") //272
	 EN("")},
	{CN("") //273
	 EN("")},
	{CN("") //274
	 EN("")},
	{CN("") //275
	 EN("")},
	{CN("") //276
	 EN("")},
	{CN("") //277
	 EN("")},
	{CN("") //278
	 EN("")},
	{CN("") //279
	 EN("")},
	{CN("") //280
	 EN("")},
	{CN("") //281
	 EN("")},
	{CN("") //282
	 EN("")},
	{CN("") //283
	 EN("")},
	{CN("") //284
	 EN("")},
	{CN("") //285
	 EN("")},
	{CN("") //286
	 EN("")},
	{CN("") //287
	 EN("")},
	{CN("") //288
	 EN("")},
	{CN("") //289
	 EN("")},
	{CN("") //290
	 EN("")},
	{CN("") //291
	 EN("")},
	{CN("") //292
	 EN("")},
	{CN("") //293
	 EN("")},
	{CN("") //294
	 EN("")},
	{CN("") //295
	 EN("")},
	{CN("") //296
	 EN("")},
	{CN("") //297
	 EN("")},
	{CN("") //298
	 EN("")},
	{CN("") //299
	 EN("")},

	//409 LG_STR nszAlmNC[100][LG_NUM] =
	{CN("") //0
	 EN("")},
	{CN("") //1
	 EN("")},
	{CN("系统序列号错误") //2
	 EN("CNC serial number error")},
	{CN("试用期已过或设置错误") //3
	 EN("Trial time over or set error")},
     {CN("试用期剩余天数:%d天") //4
	 EN("Trial time will reach after %s days!")},
	{CN("开机时有键按下") //5
	 EN("Key pressed when power on")},
	{CN("PLC执行错误") //6
	 EN("PLC execute error")},
	{CN("计件数已到达") //7
	 EN("Parts count reached")},
	{CN("") //8
	 EN("")},
	{CN("") //9
	 EN("")},
	{CN("刀具参数读取错误") //10
	 EN("Tool parameter read error")},
	{CN("坐标系参数读取错误") //11
	 EN("Coordinate system parameter read error")},
	{CN("") //12
	 EN("")},
	{CN("") //13
	 EN("")},
	{CN("") //14
	 EN("")},
	{CN("") //15
	 EN("")},
	{CN("") //16
	 EN("")},
	{CN("") //17
	 EN("")},
	{CN("") //18
	 EN("")},
	{CN("") //19
	 EN("")},
	{CN("通道掉电保护数据加载错误") //20
	 EN("Channel NVRam read error")},
	{CN("轴掉电保护数据加载错误") //21
	 EN("axis NVRam read error")},
	{CN("刀补掉电保护数据加载错误") //22
	 EN("Tool offset NVRam read error")},
	{CN("宏变量掉电保护数据加载错误") //23
	 EN("MacroVar NVRam read error")},
	{CN("") //24
	 EN("")},
	{CN("") //25
	 EN("")},
	{CN("") //26
	 EN("")},
	{CN("") //27
	 EN("")},
	{CN("") //28
	 EN("")},
	{CN("") //29
	 EN("")},
	{CN("自动运行前回零未完成") //30
	 EN("Zero return needed before automatic run")},
	{CN("轴回零功能未开放") //31
	 EN("Axis zero return not enabled")},
	{CN("回零前DEC有信号") //32
	 EN("DEC ON when zero return")},
	{CN("回零中减速开关到停止位置错误") //33
	 EN("Position error when zero return")},
	{CN("回零前起始位置错误") //34
	 EN("Position error before zero return")},
	{CN("轴负载限制") //35
	 EN("Axis load limit")},
	{CN("") //36
	 EN("")},
	{CN("") //37
	 EN("")},
	{CN("") //38
	 EN("")},
	{CN("") //39
	 EN("")},
	{CN("没有主轴或参数错误") //40
	 EN("No spindle or parameter error")},
	{CN("螺纹加工时主轴转速太低") //41
	 EN("Thread spindle speed to low")},
	{CN("螺纹过短") //42
	 EN("Thread too short")},
	{CN("螺纹参数错误") //43
	 EN("Thread parameter error")},
	{CN("螺纹加工时,等待主轴转速到达超时") //44
	 EN("Thread spindle speed arrival waiting time out")},
	{CN("螺纹导程错误") //45
	 EN("Thread lead error")},
	{CN("螺纹加工等待超时") //46
	 EN("Thread cut wait time out")},
	{CN("螺纹加工超速") //47
	 EN("Thread cut over feed")},
	{CN("指定轴不存在或不能使用") //48
	 EN("Axis not exist or can't use")},
	{CN("") //49
	 EN("")},
     {CN("极坐标插补,轴指定错误") //50
	 EN("Polar interpolateion axis error")},
	{CN("等待超时") //51
	 EN("Wait time out")},
	{CN("多边形加工错误") //52
	 EN("Polygon processing error")},
	{CN("多边形加工相关参数错误") //53
	 EN("Polygon processing spindle parameter error")},
	{CN("进给轴同步") //54
	 EN("Axis Sync. error")},
	{CN("主轴同步错误") //55
	 EN("Spindle sync. error")},
	{CN("主轴同步主轴相关的参数或者工作状态错误") //56
	 EN("Spindle sync. spindle parameter error")},
	{CN("主轴相关的进给轴不存在或不是旋转轴") //57
	 EN("Spindle C-Axis not exist or not rotation")},
	{CN("") //58
	 EN("")},
	{CN("") //59
	 EN("")},
	{CN("修改变量后,未进行自动计算") //60 专机
	 EN("")},
	{CN("修改变量后,未设置坐标") //61
	 EN("")},
	{CN("电子凸轮参数错误") //62
	 EN("ECAM parameter error")},
	{CN("电子齿轮箱执行错误") //63
	 EN("EGEAR processing error")},
	{CN("电子齿轮箱相关参数错误") //64
	 EN("Polygon processing parameter error")},
	{CN("") //65
	 EN("")},
	{CN("") //66
	 EN("")},
	{CN("") //67
	 EN("")},
	{CN("") //68
	 EN("")},
	{CN("") //69
	 EN("")},
	{CN("攻丝时等待主轴转速超时") //70
	 EN("Wait spindle speed arrive timeout when tapping")},
	{CN("等待主轴转速到达超时") //71
	 EN("Wait spindle speed arrive timeout")},
	{CN("跟随攻丝时,主轴反馈异常") //72
	 EN("Spindle feedback error when follow tapping")},
	{CN("") //73
	 EN("")},
	{CN("") //74
	 EN("")},
	{CN("") //75
	 EN("")},
	{CN("") //76
	 EN("")},
	{CN("") //77
	 EN("")},
	{CN("") //78
	 EN("")},
	{CN("") //79
	 EN("")},
	{CN("限位预测错误") //80
	 EN("")},
	{CN("轴无法使用或不存在") //81
	 EN("Axis can't use or not exist")},
	{CN("") //82
	 EN("")},
	{CN("") //83
	 EN("")},
	{CN("") //84
	 EN("")},
	{CN("") //85
	 EN("")},
	{CN("") //86
	 EN("")},
	{CN("") //87
	 EN("")},
	{CN("") //88
	 EN("")},
	{CN("") //89
	 EN("")},
	{CN("主轴编码器故障或参数错误") //90
	 EN("Spindle encoder alarm or parameter error")},
	{CN("") //91
	 EN("")},
	{CN("") //92
	 EN("")},
	{CN("") //93
	 EN("")},
	{CN("") //94
	 EN("")},
	{CN("") //95
	 EN("")},
	{CN("") //96
	 EN("")},
	{CN("") //97
	 EN("")},
	{CN("") //98
	 EN("")},
	{CN("") //99
	 EN("")},

	//409 LG_STR nszAlmOT[20][LG_NUM] =
	{CN("正向硬限位") //0
	 EN("Positive position hard limit")},
	{CN("负向硬限位") //1
	 EN("Negtive position hard limit")},
    {CN("正向软限位1") //2
	 EN("Positive position soft limit 1")},
	{CN("负向软限位1") //3
	 EN("Negtive position soft limit 1")},
    {CN("正向软限位2") //4
	 EN("Positive position soft limit 2")},
	{CN("负向软限位2") //5
	 EN("Negtive position soft limit 2")},
    {CN("正向软限位3") //6
	 EN("Positive position soft limit 3")},
	{CN("负向软限位3") //7
	 EN("Negtive position soft limit 3")},
	{CN("") //8
	 EN("")},
	{CN("") //9
	 EN("")},
	{CN("") //10
	 EN("")},
	{CN("") //11
	 EN("")},
	{CN("") //12
	 EN("")},
    {CN("进入第3软限位范围") //13
	 EN("Entered soft position limit 3 range")},
    {CN("正向软限位1(预测)") //14
	 EN("Positive position soft limit 1(Predict)")},
	{CN("负向软限位1(预测)") //15
	 EN("Negtive position soft limit 1(Predict)")},
    {CN("正向软限位2(预测)") //16
	 EN("Positive position soft limit 2(Predict)")},
	{CN("负向软限位2(预测)") //17
	 EN("Negtive position soft limit 2(Predict)")},
    {CN("正向软限位3(预测)") //18
	 EN("Positive position soft limit 3(Predict)")},
	{CN("负向软限位3(预测)") //19
	 EN("Negtive position soft limit 3(Predict)")},

	//409 LG_STR nszAlmSV[10][LG_NUM] =
	{CN("") //0
	 EN("")},
	{CN("驱动未就绪") //1
	 EN("Servo not ready")},
	{CN("驱动报警") //2
	 EN("Servo alarm")},
	{CN("驱动负载超限") //3
	 EN("Servo overload limited")},
	{CN("伺服使能状态异常") //4
	 EN("Servo ON signal error")},
	{CN("轴同步误差过大") //5
	 EN("Axis-sync excess error")},
	{CN("") //6
	 EN("")},
	{CN("") //7
	 EN("")},
	{CN("") //8
	 EN("")},
	{CN("") //9
	 EN("")},

	//409 LG_STR nszAlmSP[5][LG_NUM] =
	{CN("") //0
	 EN("")},
	{CN("主轴未就绪") //1
	 EN("Spindle not ready")},
	{CN("主轴报警") //2
	 EN("Spindle alarm")},
	{CN("") //3
	 EN("")},
	{CN("") //4
	 EN("")},

	//409 LG_STR nszAlmFPLC[160][LG_NUM] =
	{CN("") //0
	 EN("")},
	{CN("启动信号时间过长") //1
	 EN("Cycle start signal too long")},
	{CN("启动时防护门未关闭") //2
	 EN("Safe door not closed")},
	{CN("运行中防护门被打开") //3
	 EN("Safe door opened when operating")},
	{CN("换刀超时") //4
	 EN("Tool change time over")},
	{CN("换刀锁紧时无到位信号") //5
	 EN("NO finish signal when Tool LOCK")},
	{CN("换刀完成后刀号错误") //6
	 EN("Tool number error when finish")},
	{CN("刀号错误") //7
	 EN("Tool number error")},
	{CN("液压操作超时") //8
	 EN("hydraulic pressure time out")},
	{CN("液压未启动或信号异常") //9
	 EN("hydraulic pressure off or signal error")},

	{CN(CHUNK_CN"1未夹紧") //10
	 EN("Spindle 1 not clamped")},
	{CN("尾座1未前进") //11
	 EN("Tailholder 1 not forward")},
	{CN("主轴1锁紧中") //12
	 EN("Spindle 1 locking")},
	{CN("M11时主轴1未停止或高于允许转速") //13
	 EN("Spindle 1 not stopped or over allowed speed when M11")},
	{CN("M10到位信号错误") //14
	 EN("M10 FIN signal error")},
	{CN("M11到位信号错误") //15
	 EN("M11 FIN signal error")},
	{CN("M17到位信号超时") //16
	 EN("M17 FIN signal time out")},
	{CN("M18到位信号超时") //17
	 EN("M18 FIN signal time out")},
	{CN("M19主轴准停超时") //18
	 EN("M19 FIN signal time out")},
	{CN("M19主轴准停关闭超时") //19
	 EN("M19 close FIN signal time out")},
	{CN("主轴1处于位置模式") //20
	 EN("Spindle 1 IN POS mode")},
	{CN("M79时主轴1未停止") //21
	 EN("Spindle 1 not stopped when M79")},
	{CN("M78到位信号超时") //22
	 EN("M78 FIN signal time out")},
	{CN("M79到位信号超时") //23
	 EN("M79 FIN signal time out")},
	{CN("主轴锁紧时,主轴1未停止") //22
	 EN("Spindle 1 not stopped when M12")},
	{CN("主轴1锁紧超时") //25
	 EN("M12 FIN signal time out")},
	{CN("主轴1解锁紧超时") //26
	 EN("M13 FIN signal time out")},
	{CN("主轴1转速未到达") //27
	 EN("Spindle 1 speed not arrived")},
	{CN("") //28
	 EN("")},
	{CN("主轴1档位错误") //29
	 EN("Spindle 1 gear error")},

	{CN(CHUNK_CN"2未夹紧") //30
	 EN("Spindle 2 not clamped")},
	{CN("尾座2未前进") //31
	 EN("Tailholder 2 not forward")},
	{CN("主轴2锁紧中") //32
	 EN("Spindle 2 locking")},
	{CN("M111时主轴2未停止") //33
	 EN("Spindle 2 not stopped when M111")},
	{CN("M110到位信号错误") //34
	 EN("M110 FIN signal error")},
	{CN("M111到位信号错误") //35
	 EN("M111 FIN signal error")},
	{CN("M117到位信号超时") //36
	 EN("M117 FIN signal time out")},
	{CN("M118到位信号超时") //37
	 EN("M118 FIN signal time out")},
	{CN("M119主轴准停超时") //38
	 EN("M119 FIN signal time out")},
	{CN("M119主轴准停关闭超时") //39
	 EN("M119 close FIN signal time out")},
	{CN("主轴2处于位置模式") //40
	 EN("Spindle 2 IN POS mode")},
	{CN("M179时主轴2未停止") //41
	 EN("Spindle 2 not stopped when M179")},
	{CN("M178到位信号超时") //42
	 EN("M178 FIN signal time out")},
	{CN("M179到位信号超时") //43
	 EN("M179 FIN signal time out")},
	{CN("主轴锁紧时,主轴2未停止") //42
	 EN("Spindle 2 not stopped when M112")},
	{CN("主轴2锁紧超时") //45
	 EN("M112 FIN signal time out")},
	{CN("主轴2解锁紧超时") //46
	 EN("M113 FIN signal time out")},
	{CN("主轴2转速未到达") //47
	 EN("Spindle 2 speed not arrived")},
	{CN("") //48
	 EN("")},
	{CN("主轴2档位错误") //49
	 EN("Spindle 2 gear error")},


	{CN(CHUNK_CN"3未夹紧") //50
	 EN("Spindle 3 not clamped")},
	{CN("尾座3未前进") //51
	 EN("Tailholder 3 not forward")},
	{CN("主轴3锁紧中") //52
	 EN("Spindle 3 locking")},
	{CN("M211时主轴3未停止") //53
	 EN("Spindle 3 not stopped when M211")},
	{CN("M210到位信号错误") //54
	 EN("M210 FIN signal error")},
	{CN("M211到位信号错误") //55
	 EN("M211 FIN signal error")},
	{CN("M217到位信号超时") //56
	 EN("M217 FIN signal time out")},
	{CN("M218到位信号超时") //57
	 EN("M218 FIN signal time out")},
	{CN("M219主轴准停超时") //58
	 EN("M219 FIN signal time out")},
	{CN("M219主轴准停关闭超时") //59
	 EN("M219 close FIN signal time out")},
	{CN("主轴3处于位置模式") //60
	 EN("Spindle 3 IN POS mode")},
	{CN("M279时主轴3未停止") //61
	 EN("Spindle 3 not stopped when M279")},
	{CN("M278到位信号超时") //62
	 EN("M278 FIN signal time out")},
	{CN("M279到位信号超时") //63
	 EN("M279 FIN signal time out")},
	{CN("主轴锁紧时,主轴3未停止") //62
	 EN("Spindle 3 not stopped when M212")},
	{CN("主轴3锁紧超时") //65
	 EN("M212 FIN signal time out")},
	{CN("主轴3解锁紧超时") //66
	 EN("M213 FIN signal time out")},
	{CN("主轴3转速未到达") //67
	 EN("Spindle 3 speed not arrived")},
	{CN("") //68
	 EN("")},
	{CN("主轴3档位错误") //69
	 EN("Spindle 3 gear error")},

	{CN(CHUNK_CN"4未夹紧") //70
	 EN("Spindle 4 not clamped")},
	{CN("尾座4未前进") //71
	 EN("Tailholder 4 not forward")},
	{CN("主轴4锁紧中") //72
	 EN("Spindle 4 locking")},
	{CN("M311时主轴4未停止") //73
	 EN("Spindle 4 not stopped when M311")},
	{CN("M310到位信号错误") //74
	 EN("M310 FIN signal error")},
	{CN("M311到位信号错误") //75
	 EN("M311 FIN signal error")},
	{CN("M317到位信号超时") //76
	 EN("M317 FIN signal time out")},
	{CN("M318到位信号超时") //77
	 EN("M318 FIN signal time out")},
	{CN("M319主轴准停超时") //78
	 EN("M319 FIN signal time out")},
	{CN("M319主轴准停关闭超时") //79
	 EN("M319 close FIN signal time out")},
	{CN("主轴4处于位置模式") //80
	 EN("Spindle 4 IN POS mode")},
	{CN("M379时主轴4未停止") //81
	 EN("Spindle 4 not stopped when M379")},
	{CN("M378到位信号超时") //82
	 EN("M378 FIN signal time out")},
	{CN("M379到位信号超时") //83
	 EN("M379 FIN signal time out")},
	{CN("主轴锁紧时,主轴4未停止") //82
	 EN("Spindle 4 not stopped when M312")},
	{CN("主轴4锁紧超时") //85
	 EN("M312 FIN signal time out")},
	{CN("主轴4解锁紧超时") //86
	 EN("M313 FIN signal time out")},
	{CN("主轴4转速未到达") //87
	 EN("Spindle 4 speed not arrived")},
	{CN("") //88
	 EN("")},
	{CN("主轴4档位错误") //89
	 EN("Spindle 4 gear error")},

	{CN("M34未完成") //90
	 EN("M34 not finished")},
	{CN("M35未完成") //91
	 EN("M35 not finished")},
	{CN("润滑报警") //92
	 EN("Lubricate alarm")},
	{CN("三位开关不在运行位置") //93
	 EN("Tri-switch not at run position")},
	{CN("") //94
	 EN("")},
	{CN("") //95
	 EN("")},
	{CN("") //96
	 EN("")},
	{CN("") //97
	 EN("")},
	{CN("") //98
	 EN("")},
	{CN("") //99
	 EN("")},
	{CN("") //100
	 EN("")},
	{CN("") //101
	 EN("")},
	{CN("") //102
	 EN("")},
	{CN("") //103
	 EN("")},
	{CN("") //104
	 EN("")},
	{CN("") //105
	 EN("")},
	{CN("") //106
	 EN("")},
	{CN("") //107
	 EN("")},
	{CN("") //108
	 EN("")},
	{CN("") //109
	 EN("")},
	{CN("") //110
	 EN("")},
	{CN("") //111
	 EN("")},
	{CN("") //112
	 EN("")},
	{CN("") //113
	 EN("")},
	{CN("") //114
	 EN("")},
	{CN("") //115
	 EN("")},
	{CN("") //116
	 EN("")},
	{CN("") //117
	 EN("")},
	{CN("") //118
	 EN("")},
	{CN("") //119
	 EN("")},
	{CN("") //120
	 EN("")},
	{CN("") //121
	 EN("")},
	{CN("") //122
	 EN("")},
	{CN("") //123
	 EN("")},
	{CN("") //124
	 EN("")},
	{CN("") //125
	 EN("")},
	{CN("") //126
	 EN("")},
	{CN("") //127
	 EN("")},
	{CN("") //128
	 EN("")},
	{CN("") //129
	 EN("")},
	{CN("") //130
	 EN("")},
	{CN("") //131
	 EN("")},
	{CN("") //132
	 EN("")},
	{CN("") //133
	 EN("")},
	{CN("") //134
	 EN("")},
	{CN("") //135
	 EN("")},
	{CN("") //136
	 EN("")},
	{CN("") //137
	 EN("")},
	{CN("") //138
	 EN("")},
	{CN("") //139
	 EN("")},
	{CN("") //140
	 EN("")},
	{CN("") //141
	 EN("")},
	{CN("") //142
	 EN("")},
	{CN("") //143
	 EN("")},
	{CN("") //144
	 EN("")},
	{CN("") //145
	 EN("")},
	{CN("") //146
	 EN("")},
	{CN("") //147
	 EN("")},
	{CN("") //148
	 EN("")},
	{CN("") //149
	 EN("")},
	{CN("") //150
	 EN("")},
	{CN("") //151
	 EN("")},
	{CN("") //152
	 EN("")},
	{CN("") //153
	 EN("")},
	{CN("") //154
	 EN("")},
	{CN("") //155
	 EN("")},
	{CN("") //156
	 EN("")},
	{CN("") //157
	 EN("")},
	{CN("") //158
	 EN("")},
	{CN("") //159
	 EN("")},

	//409 LG_STR nszAlmBUS[100][LG_NUM] =
	{CN("MII驱动器报警") //00
	 EN("MII Driver Error")},
	{CN("MII初始化通道错误") //01
	 EN("MII Driver Init Error")},
	{CN("MII协议错误") //02
	 EN("MII Procotal Error")},
	{CN("MII模式错误") //03
	 EN("MII Mode Error")},
	{CN("MII参数错误") //04
	 EN("MII Para Error")},
	{CN("MII未就绪") //05
	 EN("MII Driver Not Ready")},
	{CN("MII寄存器查询超时错误") //06
	 EN("MII Driver Register Error")},
	{CN("MII参数查询超时错误") //07
	 EN("MII Para Error")},
	{CN("MII使能查询超时错误") //08
	 EN("MII Servo On Error")},
	{CN("MII内存溢出错误") //09
	 EN("MII Memory size over")},
	{CN("MII状态错误") //10
	 EN("MII Status Error")},
	{CN("MII内存校验错误") //11
	 EN("MII Memery Error")},
	{CN("MII锁存超时错误") //12
	 EN("MII Locate overtime")},
	{CN("保留") //13
	 EN("RSV")},
	{CN("保留") //14
	 EN("RSV")},
	{CN("保留") //15
	 EN("RSV")},
	{CN("保留") //16
	 EN("RSV")},
	{CN("保留") //17
	 EN("RSV")},
	{CN("保留") //18
	 EN("RSV")},
	{CN("保留") //19
	 EN("RSV")},
	{CN("MII无效从站地址错误") //20
	 EN("MII Slave Station Error")},
	{CN("MII缓存切换错误") //21
	 EN("MII Buffer Alternate Error")},
	{CN("MII缓存锁定错误") //22
	 EN("MII Buffer Toggle Error")},
	{CN("MII数据请求长度错误") //23
	 EN("MII Date Bytes Error")},
	{CN("MII读取状态错误") //24
	 EN("MII Sts Read Error")},
	{CN("MII同步接受错误") //25
	 EN("MII Sync Receive Error")},
	{CN("MII同步模式错误") //26
	 EN("MII No Sync Error")},
	{CN("MII主控芯片系统层错误") //27
	 EN("MII Mastor Chip Error")},
	{CN("MII主控芯片应用层错误") //28
	 EN("MII User Layer Error")},
	{CN("保留") //29
	 EN("RSV")},
	{CN("MII消息状态错误") //30
	 EN("MII Message STS Error")},
	{CN("MII消息中止错误") //31
	 EN("MII Message ABORT Error")},
	{CN("MII消息握手错误") //32
	 EN("MII Message Shakehand Error")},
	{CN("MII发送区溢出错误") //33
	 EN("MII Send Buffer Oversized")},
	{CN("MII接受区溢出错误") //34
	 EN("MII Receive Buffer Oversized")},
	{CN("MII消息区溢出错误") //35
	 EN("MII Message Oversized")},
	{CN("MII接受忙错误") //36
	 EN("MII Receive Busy")},
	{CN("MII错误") //37
	 EN("MII Error")},
	{CN("MII错误") //38
	 EN("MII Error")},
	{CN("MII错误") //39
	 EN("MII Error")},
	{CN("驱动器参数异常 A.02") //40
	 EN("MII Servo A.02 Error")},
	{CN("驱动器主回路异常 A.03") //41
	 EN("MII Servo A.03 Error")},
	{CN("驱动器参数设定错误 A.04") //42
	 EN("MII Servo A.04 Error")},
	{CN("驱动器组合错误 A.05") //43
	 EN("MII Servo A.05 Error")},
	{CN("驱动器伺服ON错误 A.0b") //44
	 EN("MII Servo A.0b Error")},
	{CN("驱动器过流报警 A.10") //45
	 EN("MII Servo A.10 Error")},
	{CN("驱动器再生故障 A.30") //46
	 EN("MII Servo A.30 Error")},
	{CN("驱动器再生过载 A.32") //47
	 EN("MII Servo A.32 Error")},
	{CN("驱动器主回路接线错误 A.33") //48
	 EN("MII Servo A.33 Error")},
	{CN("驱动器过电压 A.40") //49
	 EN("MII Servo A.40 Error")},
	{CN("驱动器欠电压 A.41") //50
	 EN("MII Servo A.41 Error")},
	{CN("驱动器电容过电压 A.45") //51
	 EN("MII Servo A.45 Error")},
	{CN("驱动器过速 A.51") //52
	 EN("MII Servo A.51 Error")},
	{CN("驱动器振动报警 A.52") //53
	 EN("MII Servo A.52 Error")},
	{CN("驱动器瞬时过载 A.71") //54
	 EN("MII Servo A.71 Error")},
	{CN("驱动器连续过载 A.72") //55
	 EN("MII Servo A.72 Error")},
	{CN("驱动器DB过载 A.73") //56
	 EN("MII Servo A.73 Error")},
	{CN("冲击电流限制电阻过载 A.74") //57
	 EN("MII Servo A.74 Error")},
	{CN("驱动器散热片过热 A.7A") //58
	 EN("MII Servo A.7a Error")},
	{CN("编码器备份报警 A.81") //59
	 EN("MII Servo A.81 Error")},
	{CN("编码器和数校验报警 A.82") //60
	 EN("MII Servo A.82 Error")},
	{CN("编码器电池报警 A.83") //61
	 EN("MII Servo A.83 Error")},
	{CN("编码器数据报警 A.84") //62
	 EN("MII Servo A.84 Error")},
	{CN("编码器过速报警 A.85") //63
	 EN("MII Servo A.85 Error")},
	{CN("编码器过热报警 A.86") //64
	 EN("MII Servo A.86 Error")},
	{CN("外部编码器故障报警 A.8A") //65
	 EN("MII Servo A.8a Error")},
	{CN("电流检出故障 A.b3") //66
	 EN("MII Servo A.b3 Error")},
	{CN("MII通信故障错误 A.b6") //67
	 EN("MII Servo A.b6 Error")},
	{CN("驱动系统报警 A.bF") //68
	 EN("MII Servo A.bf Error")},
	{CN("防止失控检出 A.C1") //69
	 EN("MII Servo A.c1 Error")},
	{CN("编码器清除故障 A.C8") //70
	 EN("MII Servo A.c8 Error")},
	{CN("编码器通讯故障 A.C9") //71
	 EN("MII Servo A.c9 Error")},
	{CN("编码器参数故障 A.CA") //72
	 EN("MII Servo A.ca Error")},
	{CN("编码器回送校验故障 A.Cb") //73
	 EN("MII Servo A.cb Error")},
	{CN("多圈上限值不一致 A.CC") //74
	 EN("MII Servo A.cc Error")},
	{CN("选购模块通讯故障 A.CF") //75
	 EN("MII Servo A.cf Error")},
	{CN("位置偏差过大 A.d0") //76
	 EN("MII Servo A.d0 Error")},
	{CN("电机-负载位置偏差过大 A.d1") //77
	 EN("MII Servo A.d1 Error")},
	{CN("MII内部同步异常 A.E0") //78
	 EN("MII Servo A.e0 Error")},
	{CN("MII传输周期设定故障 A.E4") //79
	 EN("MII Servo A.e4 Error")},
	{CN("MII同步故障 A.E5") //80
	 EN("MII Servo A.e5Error")},
	{CN("MII通信故障 A.E6") //81
	 EN("MII Servo A.e6 Error")},
	{CN("反馈选购模块检出失败 A.E7") //82
	 EN("MII Servo A.e7 Error")},
	{CN("DRV警报 A.EA") //83
	 EN("MII Servo A.ea Error")},
	{CN("安全功能信号时间异常 A.Eb") //84
	 EN("MII Servo A.eb Error")},
	{CN("指令执行超时 A.ED") //85
	 EN("MII Servo A.ed Error")},
	{CN("电源线缺相 A.F1") //86
	 EN("MII Servo A.f1 Error")},
	{CN("") //87
	 EN("")},
	{CN("") //88
	 EN("")},
	{CN("") //89
	 EN("")},
	{CN("") //90
	 EN("")},
	{CN("") //91
	 EN("")},
	{CN("") //92
	 EN("")},
	{CN("") //93
	 EN("")},
	{CN("") //94
	 EN("")},
	{CN("") //95
	 EN("")},
	{CN("写参数错误") //96
	 EN("Write para error")},
	{CN("") //97
	 EN("")},
	{CN("") //98
	 EN("")},
	{CN("") //99
	 EN("")},

};

