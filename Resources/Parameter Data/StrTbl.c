
/******************************************************************************
TODO:
�������ı�:nsz
�����ı�:nszTxt
��ť:nszBtn
�Ӱ�ť:nszSBtn
������:nszTtl
Bar����:nszBTtl
�������:nszRTtl

��Ϣ��ʾ:nszMsg
����    :nszAlm
����˵��:nszPar
���˵��:nszDgn
��ʾ˵��:nszNote
...
******************************************************************************/

//GROUP:HEADER
#include "def.h"
#include "NcPar.h"

#if MACH_TYPE==MACH_LATHE
#define CHUNK_CN    "����"
#else
#define CHUNK_CN    "�����ͷ"
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
	{CN("��")
	EN("None")},

	//LG_STR nszExist[LG_NUM]
	{CN("����")
	EN("Exist")},

	//LG_STR nszLeftRight[LG_NUM]
	{CN("\x11\x10")
	EN("\x11\x10")},

	//GROUP:һ��
    //LG_STR anszSettingName[3][LG_NUM] =
    //0
    {CN("��������")
    EN("Parameter switch")},
    //1
    {CN("���򿪹�")
    EN("Program switch")},
    //2
//    {CN("�Զ��κ�")
//    EN("Auto. sequence number")},
    //3
//    {CN("�˶�ֹͣ(�����)")
//    EN("Comparison and stop(Program number)")},
    //4
//    {CN("�˶�ֹͣ(�κ�)")
//    EN("Comparison and stop(Sequence number)")},
    //5
//    {CN("Ŀ��ӹ�����")
//    EN("Target parts")},

    {CN("����Ȩ�޼���")
    EN("Operate permission level")},

    //LG_STR anszSettingNote[3][LG_NUM] =
    //0
    {CN("0/1:�ر�/��д����")
    EN("0/1:Disable/Enable parameter write")},
    //1
    {CN("0/1:�ر�/��д����")
    EN("0/1:Disable/Enable program write")},
    //2
//    {CN("0/1:�༭����ʱ������/����κ�")
//    EN("0/1:Not insert/Insert sequence number")},
    //3
//    {CN("-1:�˶�ֹͣ���ܹر�,��Ҫ���öκ�")
//    EN("-1:Disable comparison and stop function")},
    //4
//    {CN("-1:�˶�ֹͣ���ܹر�,��Ҫ���ó����")
//    EN("-1:Disable comparison and stop function")},
    //5
//    {CN("0:����Ĺ��������޴�")
//    EN("0:No limitation to the number of parts")},

    //5
    {CN("0:��Ȩ��,4:�û�,6:����")
    EN("0:No permistion,4:User,6:OEM")},

    //LG_STR nszToolLifeValid[LG_NUM] =
    {CN("��Ч")
    EN("Valid")},

    //LG_STR nszToolLifeExpired[LG_NUM] =
    {CN("������")
    EN("Expired")},

    //LG_STR nszToolLifeSkip[LG_NUM] =
    {CN("����")
    EN("Skip")},

	//203 LG_STR nszCopyToSys[LG_NUM] =
	{CN("���Ƶ�ϵͳ")
	 EN("CopyToNC")},

	//203 LG_STR nszCopyToUsb[LG_NUM] =
	{CN("���Ƶ�U��")
	 EN("CopyToUsb")},

	//203 LG_STR nszMakeDir[LG_NUM] =
	{CN("�½�Ŀ¼")
	 EN("Make Dir.")},

	//203 LG_STR nszNew[LG_NUM] =
	{CN("�½�")
	 EN("New")},

	//203 LG_STR nszBGEdit[LG_NUM] =
	{CN("��̨�༭")
	 EN("BG.Edit")},

	//203 LG_STR nszSaveAs[LG_NUM] =
	{CN("���Ϊ")
	 EN("SaveAS")},

	//203 LG_STR nszRename[LG_NUM] =
	{CN("������")
	 EN("Rename")},

    //1182 LG_STR nszPartsTargetNum[LG_NUM] =
    {CN("�Ƽ�Ŀ����")
    EN("Parts target num")},

	//203 LG_STR nszSignal[LG_NUM] =
	{CN("�ź�")
	 EN("Signal")},

	//203 LG_STR nszWave1[LG_NUM] =
	{CN("����1")
	 EN("Wave 1")},
	//203 LG_STR nszWave2[LG_NUM] =
	{CN("����2")
	 EN("Wave 2")},
	//203 LG_STR nszWave3[LG_NUM] =
	{CN("����3")
	 EN("Wave 3")},
	//203 LG_STR nszWave4[LG_NUM] =
	{CN("����4")
	 EN("Wave 4")},

    //203 LG_STR nszAxisSelect[LG_NUM] =
    {CN("��ѡ��:")
    EN("Axis select:")},

	//230 LG_STR nszTrialSerial[LG_NUM] =
	{CN("�������к�")
	 EN("Trial Serial")},

	//230 LG_STR nszUseSerial[LG_NUM] =
	{CN("ʹ�����к�")
	 EN("Use Serial")},

	//286 LG_STR nszOSearch[LG_NUM] =
	{CN("�������")
	 EN("O Search")},

	//286 LG_STR nszGotoLine[LG_NUM] =
	{CN("��λ��")
	 EN("Goto\nLine")},

	//286 LG_STR nszSearch[LG_NUM] =
	{CN("����")
	 EN("Search")},

	//286 LG_STR nszFind[LG_NUM] =
	{CN("����")
	 EN("Find")},

	//286 LG_STR nszPinyin[LG_NUM] =
	{CN("ƴ��")
	 EN("CHN")},

	//209 LG_STR nszDelete[LG_NUM] =
	{CN("ɾ��")
	 EN("Delete")},

	//209 LG_STR nszPermitNeeded[LG_NUM] =
	{CN("����Ȩ��")
	 EN("Permit Needed")},

	//286 LG_STR nszNcInputSelected[LG_NUM] =
	{CN("��ѡ������")
	 EN("Selected input")},

	//286 LG_STR nszNcOutputSelected[LG_NUM] =
	{CN("��ѡ�����")
	 EN("Selected output")},

	//286 LG_STR nszNcInputting[LG_NUM] =
	{CN("ϵͳ��������")
	 EN("CNC Inputting")},

	//286 LG_STR nszNcOutputting[LG_NUM] =
	{CN("ϵͳ�������")
	 EN("CNC outputting")},

	//286 LG_STR nszNcInputFin[LG_NUM] =
	{CN("ϵͳ�������")
	 EN("CNC input finish")},

	//286 LG_STR nszNcOutputFin[LG_NUM] =
	{CN("ϵͳ������")
	 EN("CNC output finish")},

	//286 LG_STR nszNcInputErr[LG_NUM] =
	{CN("ϵͳ�������")
	 EN("CNC input error")},

	//286 LG_STR nszNcOutputErr[LG_NUM] =
	{CN("ϵͳ�������")
	 EN("CNC output error")},

	//286 LG_STR nszNcClearing[LG_NUM] =
	{CN("ϵͳ�������")
	 EN("CNC Clearing")},

	//286 LG_STR nszNcClearFin[LG_NUM] =
	{CN("ϵͳ������")
	 EN("CNC Clear finish")},

	//286 LG_STR nszNcClearErr[LG_NUM] =
	{CN("ϵͳ�������")
	 EN("CNC Clear error")},

	//243 LG_STR nszInputPortDef[LG_NUM] =
	{CN("����ڶ���")
	 EN("Input")},

	//262 LG_STR nszOutputPortDef[LG_NUM] =
	{CN("����ڶ���")
	 EN("Output")},

	//262 LG_STR nszUserDefIO[LG_NUM] =
	{CN("�û��Զ���IO")
	 EN("User define IO")},

	//243 LG_STR nszInputPort[LG_NUM] =
	{CN("�����")
	 EN("Input")},

	//262 LG_STR nszOutputPort[LG_NUM] =
	{CN("�����")
	 EN("Output")},

	//262 LG_STR nszWear[LG_NUM] =
	{CN("ĥ��")
	 EN(" Wear")},

	//262 LG_STR nszInput[LG_NUM] =
	{CN("����")
	 EN("Input")},

	//262 LG_STR nszAbsInput[LG_NUM] =
	{CN("��������")
	 EN("AbsInput")},

	//203 LG_STR nszAddInput[LG_NUM] =
	{CN("+����")
	 EN("+Input")},

	//262 LG_STR nszFileContentHide[LG_NUM] =
	{CN("�ļ����ݱ�����")
	 EN("File content hide")},

	//9 LG_STR aaszFormatTxt[4][LG_NUM] =
    {CN("��ʽ��ע������:")   //0
     EN("Note for format:")},
	{CN("    1. ��ʽ�����û������޷��ָ�!")   //0
	 EN("    1.User's program will be lost.")},
	{CN("    2. ��������ӳ���ֵ�򱸷��лָ�!")   //1
	 EN("    2.Parameters can be recovered from backups.")},
	{CN("    3. ��ʽ����Ҫ��Ӧ��Ȩ��.")   //2
	 EN("    3. Format need permission.")},

	//15 LG_STR aaszSerialNoLbl[4][LG_NUM] =
	{CN("������")   //0
	 EN("Property Code")},
	{CN("�������")   //1
	 EN("Product ID")},
	{CN("��Ȩ��")   //2
	 EN("Lisence No.")},
	{CN("������")   //3
	 EN("Guarant")},

	//27 LG_STR aaszTimeLimTxt[4][LG_NUM] =
	{CN("ע��: 1. ���鵱ǰʱ���Ƿ���������")   //0
	 EN("Note: 1.Check the \"Current Date\"")},
	{CN("      2. һ�����������趨, ��ǰʱ���")   //1
	 EN("      2.If the \"Trial End\" is set, the time")},
	{CN("        �����޸�.")   //2
	 EN("        of the system will be unable to modify.")},
	{CN("      3.��ѡ��ʹ�ó��������UKey��������")   //3
	 EN("      3.Select password or UKey to clear Trial")},

	//31 LG_STR aszAbsCoor[LG_NUM] =
	{CN("��������")
	 EN("Abs.Coor")},

	//32 LG_STR aszActCoor[LG_NUM] =
	{CN("ʵ��λ��")
	 EN("Act.Pos")},

	//34 LG_STR aszAlarm[LG_NUM] =
	{CN("����")
	 EN("Alarm")},

	//43 LG_STR aszCol[LG_NUM] =
	{CN("��")
	 EN("Col")},

	//43 LG_STR aszPage[LG_NUM] =
	{CN("ҳ")
	 EN("Page")},

	//44 LG_STR aszContent[LG_NUM] =
	{CN("����")
	 EN("Content")},

	//47 LG_STR aszCoorSys[LG_NUM] =
	{CN("����ϵ")
	 EN("CoorSys")},

	//48 LG_STR aszCopyAs[LG_NUM] =
	{CN("��������Ϊ")
	 EN("Copy as")},

	//49 LG_STR aszCount[LG_NUM] =
	{CN(" �Ƽ�")
	 EN("COUNT")},

	//50 LG_STR aszCounterLbl[4][LG_NUM] =
	{CN("���ι�������:")   //0
	 EN("Single Count:")},
	{CN("����ʱ������:")   //1
	 EN("Single Time:")},
	{CN("�ۼƹ�������:")   //2
	 EN("Total Count:")},
	{CN("�ۼ�ʱ������:")   //3
	 EN("Total Time:")},

	//54 LG_STR aszCurDir[LG_NUM] =
	{CN("��ǰĿ¼")
	 EN(".")},

	//55 LG_STR aszCurToolLib[LG_NUM] =
	{CN("��������")
	 EN("Current Tool Library")},

	//56 LG_STR aszCurrent[LG_NUM] =
	{CN("��ǰֵ")
	 EN("Current")},

	//57 LG_STR aszDiskCapacity[LG_NUM] =
	{CN("�洢����")
	 EN("DiskCapacity")},

	//58 LG_STR aszExtrnHandl[LG_NUM] =
	{CN("�������")
	 EN("ExtrnHandl")},

	//59 LG_STR aszFeed[LG_NUM] =
	{CN("����")
	 EN("Feed")},

	//60 LG_STR aszFeedOvrd[LG_NUM] =
	{CN("��������")
	 EN("FeedOvrd")},

    //  LG_STR aszJogOvrd[LG_NUM] =
    {CN("�ֶ�����")
    EN("JogOvrd")},

    //61 LG_STR aszFile[LG_NUM] =
    {CN("�ļ�")
    EN("File")},

	//63 LG_STR aszFileChainAvail[LG_NUM] =
	{CN("�ļ���������!")
	 EN("file chain available!")},

	//64 LG_STR aszFileChainErr[LG_NUM] =
	{CN("�ļ��������!")
	 EN("file chain error!")},

	//65 LG_STR aszFileUsedSectNum[LG_NUM] =
	{CN("�ļ�ռ��������")
	 EN("file used sect num")},

	//66 LG_STR aszFolder[LG_NUM] =
	{CN("�ļ���")
	 EN("Folder")},

	//67 LG_STR aszForwardDir[LG_NUM] =
	{CN("����")
	 EN("Forward")},

	//68 LG_STR aszForwardRot[LG_NUM] =
	{CN("��")
	 EN("CW")},

	//69 LG_STR aszFreePrgNum[LG_NUM] =
	{CN("ʣ�������")
	 EN("Free Item")},

	//70 LG_STR aszFreeSectNum[LG_NUM] =
	{CN("����������")
	 EN("Free sector num")},

	//71 LG_STR aszFreeSpace[LG_NUM] =
	{CN("ʣ��ռ�")
	 EN("Free")},

	//72 LG_STR aszROV[LG_NUM] =
	{CN("���ٱ���")
	 EN("RapidOv")},

	//74 LG_STR aszHEX[LG_NUM] =
	{CN("HEX")
	 EN("HEX")},

	//75 LG_STR aszHandle[LG_NUM] =
	{CN("����")
	 EN("Hdl.")},

	//76 LG_STR aszHdlAxis[LG_NUM] =
	{CN("�� ѡ ��")
	 EN("Whl.Axis")},

	//77 LG_STR aszHdlOvrd[LG_NUM] =
	{CN("���ֱ���")
	 EN("Whl.Mult")},

	//79 LG_STR aszHori[LG_NUM] =
	{CN("ˮƽ")
	 EN("Hori")},

	//80 LG_STR aszIndex[LG_NUM] =
	{CN("���")
	 EN("Index")},

	//81 LG_STR aszInputData[LG_NUM] =
	{CN("����������:")
	 EN("Input the Data:")},

	//82 LG_STR aszInputFileName[LG_NUM] =
	{CN("�������ļ���")
	 EN("Input filename")},

	//84 LG_STR aszInputPassword[LG_NUM] =
	{CN("��������")
	 EN("Password")},

	//86 LG_STR aszInputProgPass[LG_NUM] =
	{CN("��������")
	 EN("Prog code")},

	//87 LG_STR aszInputPwdOEM[LG_NUM] =
	{CN("����������")
	 EN("Factory code")},

	//90 LG_STR aszLeftCoor[LG_NUM] =
	{CN("ʣ������")
	 EN("LeftCoor")},

	//91 LG_STR aszLenModify[LG_NUM] =
	{CN("�����볤�ȵ��޵�ֵ")
	 EN("Input length error")},

	//93 LG_STR aszLn[LG_NUM] =
	{CN("��")
	 EN("Ln")},

	//94 LG_STR aszMachCoor[LG_NUM] =
	{CN("��������")
	 EN("MachCoor")},

	//95 LG_STR aszMachInfo[LG_NUM] =
	{CN("�� �� �� Ϣ")
	 EN("Machine Info.")},

	//96 LG_STR aszManuFeed[LG_NUM] =
	{CN("����")
	 EN("Feed")},

	//97 LG_STR aszManuSpdl[LG_NUM] =
	{CN("����")
	 EN("Spdl")},

	//98 LG_STR aszName[LG_NUM] =
	{CN("����")
	 EN("Name")},

	//99 LG_STR aszOff[LG_NUM] =
	{CN("��")
	 EN("OFF")},

	//100 LG_STR aszOffsetNo[LG_NUM] =
	{CN("��  ��")
	 EN("OfstNo.")},

	//102 LG_STR aszOn[LG_NUM] =
	{CN("��")
	 EN("ON")},

	//104 LG_STR aszOperFile[LG_NUM] =
	{CN("�ӹ�����")
	 EN("FileName")},

	//107 LG_STR aszOvrd[LG_NUM] =
	{CN("����")
	 EN("Mult")},

	//108 LG_STR aszPanelHandl[LG_NUM] =
	{CN("�������")
	 EN("PanelHandl")},

	//111 LG_STR aszPause[LG_NUM] =
	{CN("��ͣ")
	 EN("Pause")},

	//112 LG_STR aszPresetVal[LG_NUM] =
	{CN("Ԥ��ֵ")
	 EN("Preset")},

	//113 LG_STR aszProg[LG_NUM] =
	{CN("����")
	 EN("Prog")},

	//114 LG_STR aszProgName[LG_NUM] =
	{CN("������")
	 EN("Name")},

	//115 LG_STR aszRModify[LG_NUM] =
	{CN("������뾶���޵�ֵ")
	 EN("Input radius error")},

	//117 LG_STR aszReady[LG_NUM] =
	{CN("����")
	 EN("RDY")},

	//118 LG_STR aszRecmdRage[LG_NUM] =
	{CN("�Ƽ���Χ")
	 EN("Recmded.Range")},

	//119 LG_STR aszRelCoor[LG_NUM] =
	{CN("�������")
	 EN("Rel.Coor")},

	//120 LG_STR aszRev[LG_NUM] =
	{CN("ת��")
	 EN("Rev")},

	//121 LG_STR aszReverseDir[LG_NUM] =
	{CN("����")
	 EN("Reverse")},

	//122 LG_STR aszReverseRot[LG_NUM] =
	{CN("��")
	 EN("CCW")},

	//127 LG_STR aszSpdl[LG_NUM] =
	{CN("����")
	 EN("Spdl")},

	//129 LG_STR aszSpdlOvrd[LG_NUM] =
	{CN("���ᱶ��")
	 EN("SpdlOvrd")},

	//130 LG_STR aszSpdlRank[LG_NUM] =
	{CN("���ᵵλ")
	 EN("SpdlRank")},

	//131 LG_STR aszSpdlRev[LG_NUM] =
	{CN("ת��")
	 EN("Rev.")},

	//132 LG_STR aszSpdlStop[LG_NUM] =
	{CN("ͣ")
	 EN("S.")},

	//133 LG_STR aszStartPoint[LG_NUM] =
	{CN("������")
	 EN("StartPt")},

	//134 LG_STR aszStepLen[LG_NUM] =
	{CN("���")
	 EN("Inc.")},

	//135 LG_STR aszStop[LG_NUM] =
	{CN("ֹͣ")
	 EN("Stop")},

	//137 LG_STR aszTool[LG_NUM] =
	{CN("����")
	 EN("Tool")},

	//138 LG_STR aszToolCoor[LG_NUM] =
	{CN("��������")
	 EN("Mach.Coor")},

	//139 LG_STR aszToolInfo[LG_NUM] =
	{CN("�� �� �� Ϣ")
	 EN("Tool Info.")},

	//140 LG_STR aszToolNo[LG_NUM] =
	{CN("T")
	 EN("ToolNo")},

	//141 LG_STR aszToolScrnPos[LG_NUM] =
	{CN("���ߵ�λ")
	 EN("Tool scrn pos.")},

	//142 LG_STR aszToolShapes[LG_NUM] =
	{CN("��ѡ������״")
	 EN("Tool shapes")},

	//143 LG_STR aszTotalSectNum[LG_NUM] =
	{CN("��������")
	 EN("Total sector num")},

	//156 LG_STR aszUpLevel[LG_NUM] =
	{CN("�����ϼ�")
	 EN("..")},

	//159 LG_STR aszUsedPrgNum[LG_NUM] =
	{CN("�Ѵ������")
	 EN("ExistItem")},

	//160 LG_STR aszUsedSect[LG_NUM] =
	{CN("��������")
	 EN("UsedSect")},

	//161 LG_STR aszUsedSectNum[LG_NUM] =
	{CN("����������")
	 EN("Used sector num")},

	//163 LG_STR aszValue[LG_NUM] =
	{CN("��ֵ")
	 EN("Value")},

	//164 LG_STR aszVarNo[LG_NUM] =
	{CN("������")
	 EN("VarNo")},

	//165 LG_STR aszVert[LG_NUM] =
	{CN("��ֱ")
	 EN("Vert")},

	//167 LG_STR aszWorkpieceCoor[LG_NUM] =
	{CN("��������")
	 EN("Workpiece Coor.")},

	//168 LG_STR aszWorkpieceCoor1[LG_NUM] =
	{CN("�� �� �� ��")
	 EN("Workpiece Coor.")},

	//171 LG_STR aszZCoor[LG_NUM] =
	{CN("Z��Ե��㹤������")
	 EN("Current coor. in Z")},

     //GROUP:�����ı�
	//360 LG_STR anszTxtTimeSet[6][LG_NUM] =
	{CN("��")   //0
	 EN("Year")},
	{CN("��")   //1
	 EN("Month")},
	{CN("��")   //2
	 EN("Day")},
	{CN("ʱ")   //3
	 EN("Hour")},
	{CN("��")   //4
	 EN("Minute")},
	{CN("��")   //5
	 EN("Second")},

	//19 LG_STR anszTxtSetPassword[4][LG_NUM] =
	{CN("��ǰ���뼶��")   //0
	 EN("Current password level")},
	{CN("ѡ�����뼶��")   //0
	 EN("Select password level")},
	{CN("������")   //1
	 EN("New password")},
	{CN("ȷ������")   //2
	 EN("Retype")},

    //LG_STR nszTxtChannel[LG_NUM] =
	{CN("ͨ��")
	 EN("Chn")},

    //LG_STR nszTxtHndlAxis[LG_NUM] =
	{CN("������ѡ")
	 EN("HndlAxis")},

    //LG_STR nszTxtHndlMul[LG_NUM] =
	{CN("���ֱ���")
	 EN("HndlMul")},

    //LG_STR nszTxtHndlCheck[LG_NUM] =
	{CN("���ֵ���")
	 EN("HndlChk")},

    //LG_STR nszTxtSysPar[LG_NUM] =
	{CN("ϵͳ����")
	 EN("Sys.Par.")},

    //LG_STR nszTxtCoorSys[LG_NUM] =
	{CN("����ϵ")
	 EN("Coor.Sys")},

    //LG_STR nszTxtAllProg[LG_NUM] =
	{CN("ȫ������")
	 EN("All Prog.")},

    //LG_STR nszTxtToolOfs[LG_NUM] =
	{CN("����ƫ��")
	 EN("Tool Ofs")},

    //LG_STR nszTxtToolWear[LG_NUM] =
	{CN("����ĥ��")
	 EN("Tool Wear")},

    //LG_STR nszTxtToolLife[LG_NUM] =
	{CN("��������")
	 EN("Tool Life")},

    //LG_STR nszTxtPitchErr[LG_NUM] =
	{CN("�ݾಹ��")
	 EN("Pitch Err.")},

    //LG_STR nszTxtMacroVar[LG_NUM] =
	{CN("�����")
	 EN("Macro Var.")},

    //LG_STR nszTxtPlcPar[LG_NUM] =
	{CN("PLC����")
	 EN("PLC Par.")},

    //LG_STR nszTxtPlcLadder[LG_NUM] =
	{CN("����ͼ")
	 EN("PLC Lad.")},

	//1100 LG_STR nszTextUsrIO[LG_NUM] =
	{CN("�Զ���IO")
	 EN("User IO")},

	//1100 LG_STR nszTextJPGImage[LG_NUM] =
	{CN("JPGͼƬ")
	 EN("JPG Image")},

	//1100 LG_STR nszTextUsrPage[LG_NUM] =
	{CN("�Զ���ҳ��")
	 EN("User Page")},

    //LG_STR nszTxtRT[LG_NUM] =
	{CN("����")
	 EN("RT")},

    //LG_STR nszTxtSBK[LG_NUM] =
	{CN("����")
	 EN("SBK")},

    //LG_STR nszTxtINS[LG_NUM] =
	{CN("����")
	 EN("INS")},

    //LG_STR nszTxtALT[LG_NUM] =
	{CN("�޸�")
	 EN("ALT")},

    //1171 LG_STR nszTxtPartTarget[LG_NUM] =
    {CN("�Ƽ�Ŀ��")
    EN("PartGoal")},

	//1172 LG_STR nszTxtPartCount[LG_NUM] =
	{CN("�Ƽ���")
	 EN("PartCnt")},

	//1173 LG_STR nszTxtRunTime[LG_NUM] =
	{CN("����ʱ��")
	 EN("RunTime")},

	//1174 LG_STR nszTxtCycleTime[LG_NUM] =
	{CN("ѭ��ʱ��")
	 EN("CycTime")},

	//GROUP:F���ܰ�ť
	//172 LG_STR aszBtnA[LG_NUM] =
	{CN("A")
	 EN("A")},

	//174 LG_STR aszBtnAddInput[LG_NUM] =
	{CN("+����")
	 EN("+Input")},

	//175 LG_STR aszBtnAddr[LG_NUM] =
	{CN("��ַ")
	 EN("Address")},

	//176 LG_STR aszBtnAuto[LG_NUM] =
	{CN("�Զ�")
	 EN("Auto")},

	//178 LG_STR aszBtnBackspace[LG_NUM] =
	{CN("ǰɾ")
	 EN("Backspace")},

	//180 LG_STR aszBtnBackupPLC[LG_NUM] =
	{CN("����PLC")
	 EN("BackupPLC")},

	//182 LG_STR aszBtnBrowse[LG_NUM] =
	{CN("���")
	 EN("Browse")},

	//183 LG_STR aszBtnBrwSys[LG_NUM] =
	{CN("�������")
	 EN("Brws.Sys")},

	//184 LG_STR aszBtnBrwUsb[LG_NUM] =
	{CN("���U�ļ�")
	 EN("Brws.Usb")},

	//185 LG_STR aszBtnByte[LG_NUM] =
	{CN("1�ֽ�")
	 EN("BYTE")},

	//186 LG_STR aszBtnC[LG_NUM] =
	{CN("C")
	 EN("C")},

	//188 LG_STR aszBtnCInput[LG_NUM] =
	{CN("C.����")
	 EN("C.Input")},

	//189 LG_STR aszBtnCancel[LG_NUM] =
	{CN("ȡ  ��")
	 EN("Cancel")},

	//190 LG_STR aszBtnCenterInput[LG_NUM] =
	{CN("���ĵ�����")
	 EN("CenterInput")},

	//191 LG_STR aszBtnChgPassword[LG_NUM] =
	{CN("�޸�����")
	 EN("ChgPass")},

	//192 LG_STR aszBtnClass[LG_NUM] =
	{CN("�����б�")
	 EN("Classify")},

	//193 LG_STR aszBtnClrMachCoor[LG_NUM] =
	{CN("���������")
	 EN("ClrMachCor")},

	//194 LG_STR aszBtnClrMem[LG_NUM] =
	{CN("���ڴ�")
	 EN("ClrMem")},

	//195 LG_STR aszBtnClrSglCnt[LG_NUM] =
	{CN("�屾�μ�")
	 EN("ClrSglCnt")},

	//196 LG_STR aszBtnClrSglTime[LG_NUM] =
	{CN("�屾��ʱ")
	 EN("ClrSglTim")},

	//200 LG_STR aszBtnClrUKey[LG_NUM] =
	{CN("���UKey")
	 EN("Clr UKey")},

	//201 LG_STR aszBtnCoorOffset[LG_NUM] =
	{CN("����ƫ��")
	 EN("CoorOfst")},

	//204 LG_STR aszBtnCountAndTime[LG_NUM] =
	{CN("�Ƽ���ʱ")
	 EN("Counter")},

	//205 LG_STR aszBtnCurLevel[LG_NUM] =
	{CN("��ǰ��")
	 EN("CurLevel")},

	//206 LG_STR aszBtnD[LG_NUM] =
	{CN("D")
	 EN("D")},

	//207 LG_STR aszBtnDNC[LG_NUM] =
	{CN("USB DNC")
	 EN("USB DNC")},

	//208 LG_STR aszBtnDWord[LG_NUM] =
	{CN("4�ֽ�")
	 EN("DWORD")},

	//209 LG_STR aszBtnDelBack[LG_NUM] =
	{CN("��ɾ")
	 EN("DelBack")},

	//210 LG_STR aszBtnDelLine[LG_NUM] =
	{CN("ɾ��")
	 EN("DelLine")},

	//213 LG_STR aszBtnDown[LG_NUM] =
	{CN("\x1f")
	 EN("\x1f")},

	//214 LG_STR aszBtnDownLevel[LG_NUM] =
	{CN("��һ��")
	 EN("DnLevel")},

	//215 LG_STR aszBtnEdit[LG_NUM] =
	{CN("�༭")
	 EN("Edit")},

	//216 LG_STR aszBtnEnd[LG_NUM] =
	{CN("��β")
	 EN("End")},

	//224 LG_STR aszBtnF[LG_NUM] =
	{CN("F")
	 EN("F")},

	//228 LG_STR aszBtnFindNext[LG_NUM] =
	{CN("����\n��һ��")
	 EN("Find\nNext")},

	//231 LG_STR aszBtnG[LG_NUM] =
	{CN("G")
	 EN("G")},

	//232 LG_STR aszBtnGlobal[LG_NUM] =
	{CN("ȫ�ֱ���")
	 EN("GlobalVar")},

	//233 LG_STR aszBtnGraph[LG_NUM] =
	{CN("ͼ����ʾ")
	 EN("Graph")},

	//234 LG_STR aszBtnHandle[LG_NUM] =
	{CN("����")
	 EN("HD.Wheel")},

	//235 LG_STR aszBtnHome[LG_NUM] =
	{CN("����")
	 EN("Home")},

	//236 LG_STR aszBtnImportFromUsb[LG_NUM] =
	{CN("��U�̵���")
	 EN("FromUsb")},

	//237 LG_STR aszBtnImportOEMPLC[LG_NUM] =
	{CN("���볧��PLC")
	 EN("OEM PLC")},

	//238 LG_STR aszBtnImportPlc[LG_NUM] =
	{CN("����PLC")
	 EN("ImportPLC")},

	//239 LG_STR aszBtnImportPrompt[LG_NUM] =
	{CN("����˵��")
	 EN("ImpPrompt")},

	//240 LG_STR aszBtnImportSysPLC[LG_NUM] =
	{CN("����ϵͳPLC")
	 EN("Sys PLC")},

	//241 LG_STR aszBtnInit[LG_NUM] =
	{CN("��ʼ��")
	 EN("Init")},

	//242 LG_STR aszBtnInput[LG_NUM] =
	{CN("����")
	 EN("Input")},

	//244 LG_STR aszBtnK[LG_NUM] =
	{CN("K")
	 EN("K")},

	//246 LG_STR aszBtnLadder[LG_NUM] =
	{CN("����ͼ")
	 EN("Ladder")},

	//247 LG_STR aszBtnLeft[LG_NUM] =
	{CN("\x11")
	 EN("\x11")},

	//250 LG_STR aszBtnMachZero[LG_NUM] =
	{CN("�ػ�����")
	 EN("MachZero")},

	//251 LG_STR aszBtnMacro[LG_NUM] =
	{CN("�����")
	 EN("Macro")},

	//252 LG_STR aszBtnManage[LG_NUM] =
	{CN("��  ��")
	 EN("Manage")},

	//253 LG_STR aszBtnManu[LG_NUM] =
	{CN("�ֶ�")
	 EN("Jog")},

	//254 LG_STR aszBtnMeasure[LG_NUM] =
	{CN("����")
	 EN("Measure")},

	//255 LG_STR aszBtnModify[LG_NUM] =
	{CN("��  ��")
	 EN("Modify")},

	//256 LG_STR aszBtnNextFile[LG_NUM] =
	{CN("��һ����")
	 EN("NextFile")},

	//257 LG_STR aszBtnOEMPass[LG_NUM] =
	{CN("��������")
	 EN("OEMPass")},

	//258 LG_STR aszBtnOK[LG_NUM] =
	{CN("ȷ��")
	 EN("OK")},

	//259 LG_STR aszBtnOffset[LG_NUM] =
	{CN("ƫ��")
	 EN("Offset")},

	//260 LG_STR aszBtnOnline[LG_NUM] =
	{CN("����")
	 EN("Online")},

	//263 LG_STR aszBtnParam[LG_NUM] =
	{CN("��  ��")
	 EN("Param")},

	//267 LG_STR aszBtnPitchErr[LG_NUM] =
	{CN("�ݾಹ��")
	 EN("PitchErr")},

	//268 LG_STR aszBtnPrevFile[LG_NUM] =
	{CN("��һ����")
	 EN("PrevFile")},

	//269 LG_STR aszBtnPrgAttr[LG_NUM] =
	{CN("��������")
	 EN("FileAttr")},

	//270 LG_STR aszBtnPrgChk[LG_NUM] =
	{CN("������")
	 EN("PrgChk")},

	//271 LG_STR aszBtnProg[LG_NUM] =
	{CN("����")
	 EN("Prog")},

	//272 LG_STR aszBtnProgEnd[LG_NUM] =
	{CN("����β")
	 EN("ProgEnd")},

	//273 LG_STR aszBtnProgHome[LG_NUM] =
	{CN("������")
	 EN("ProgHome")},

	//274 LG_STR aszBtnProgPass[LG_NUM] =
	{CN("��������")
	 EN("ProgPass")},

	//275 LG_STR aszBtnQuickInput[LG_NUM] =
	{CN("��������")
	 EN("QuickIn")},

	//276 LG_STR aszBtnR[LG_NUM] =
	{CN("R")
	 EN("R")},

	//278 LG_STR aszBtnRecoverPLC[LG_NUM] =
	{CN("�ָ�PLC")
	 EN("RecoverPLC")},

	//279 LG_STR aszBtnRecoverParam[LG_NUM] =
	{CN("�ָ�����")
	 EN("RecoverPrm")},

	//281 LG_STR aszBtnRefPos[LG_NUM] =
	{CN("�ؽ�����")
	 EN("Ref.Pos.")},

	//282 LG_STR aszBtnRemoveUsb[LG_NUM] =
	{CN("�Ƴ�U��")
	 EN("RemovUsb")},

	//283 LG_STR aszBtnRepairTime[LG_NUM] =
	{CN("������")
	 EN("guarant")},

	//284 LG_STR aszBtnReport[LG_NUM] =
	{CN("��ϸ�б�")
	 EN("Details")},

	//287 LG_STR aszBtnRight[LG_NUM] =
	{CN("\x10")
	 EN("\x10")},

	//290 LG_STR aszBtnSaveCoor[LG_NUM] =
	{CN("��������")
	 EN("SaveCoor")},

	//291 LG_STR aszBtnSaveP1[LG_NUM] =
	{CN("����P1")
	 EN("SaveP1")},

	//292 LG_STR aszBtnSaveP2[LG_NUM] =
	{CN("����P2")
	 EN("SaveP2")},

	//293 LG_STR aszBtnSaveP3[LG_NUM] =
	{CN("����P3")
	 EN("SaveP3")},

	//294 LG_STR aszBtnSaveToSys[LG_NUM] =
	{CN("����ϵͳ")
	 EN("SavtoSys")},

	//295 LG_STR aszBtnSaveToUsb[LG_NUM] =
	{CN("����U��")
	 EN("SavtoUsb")},

	//296 LG_STR aszBtnSaveUKey[LG_NUM] =
	{CN("����UKey")
	 EN("Save UKey")},

	//297 LG_STR aszBtnSaveX1[LG_NUM] =
	{CN("����X1")
	 EN("SaveX1")},

	//298 LG_STR aszBtnSaveX2[LG_NUM] =
	{CN("����X2")
	 EN("SaveX2")},

	//299 LG_STR aszBtnSaveY1[LG_NUM] =
	{CN("����Y1")
	 EN("SaveY1")},

	//300 LG_STR aszBtnSaveY2[LG_NUM] =
	{CN("����Y2")
	 EN("SaveY2")},

	//301 LG_STR aszBtnScale[LG_NUM] =
	{CN("ͼ�ζ���")
	 EN("GrphScale")},

	//302 LG_STR aszBtnSerialNo[LG_NUM] =
	{CN("���к�")
	 EN("SerialNo")},

	//304 LG_STR aszBtnSimu[LG_NUM] =
	{CN("ģ  ��")
	 EN("Simu")},

	//305 LG_STR aszBtnSimuParam[LG_NUM] =
	{CN("ͼ�β���")
	 EN("GraphSet")},

	//306 LG_STR aszBtnSpdlHndl[LG_NUM] =
	{CN("����&����")
	 EN("Spdl&Hndl")},

	//307 LG_STR aszBtnSpindle[LG_NUM] =
	{CN("��  ��")
	 EN("Spindle")},

	//308 LG_STR aszBtnStartSeg[LG_NUM] =
	{CN("��ʼ�κ�")
	 EN("StartSeg")},

	//310 LG_STR aszBtnSymbol[LG_NUM] =
	{CN("����")
	 EN("Symbol")},

	//311 LG_STR aszBtnSearch[LG_NUM] =
	{CN("����")
	 EN("Search")},

	//311 LG_STR aszBtnSearchNo[LG_NUM] =
	{CN("������")
	 EN("Search No")},

	//312 LG_STR aszBtnT[LG_NUM] =
	{CN("T")
	 EN("T")},

	//314 LG_STR aszBtnTimeSet[LG_NUM] =
	{CN("ʱ������")
	 EN("TimeSetting")},

	//315 LG_STR aszBtnToolModify[LG_NUM] =
	{CN("��  ��")
	 EN("Modify")},

	//316 LG_STR aszBtnToolOffset[LG_NUM] =
	{CN("��  ��")
	 EN("Offset")},

	//317 LG_STR aszBtnToolParam[LG_NUM] =
	{CN("���߲���")
	 EN("ToolParam")},

	//318 LG_STR aszBtnUART[LG_NUM] =
	{CN("����ͨ��")
	 EN("UART")},

	//319 LG_STR aszBtnUSBDNC[LG_NUM] =
	{CN("USB DNC")
	 EN("USB DNC")},

	//320 LG_STR aszBtnUartDNC[LG_NUM] =
	{CN("485 DNC")
	 EN("485 DNC")},

	//321 LG_STR aszBtnUartRecv[LG_NUM] =
	{CN("��������")
	 EN("UART IN")},

	//322 LG_STR aszBtnUartSend[LG_NUM] =
	{CN("�������")
	 EN("UART OUT")},

	//323 LG_STR aszBtnUartTest[LG_NUM] =
	{CN("���ڼ��")
	 EN("UartTest")},

	//324 LG_STR aszBtnUp[LG_NUM] =
	{CN("\x1e")
	 EN("\x1e")},

	//325 LG_STR aszBtnUpLevel[LG_NUM] =
	{CN("��һ��")
	 EN("UpLevel")},

	//326 LG_STR aszBtnUsbExport[LG_NUM] =
	{CN("��U�̵���")
	 EN("Export")},

	//327 LG_STR aszBtnUsbImport[LG_NUM] =
	{CN("��U�̵���")
	 EN("Import")},

	//328 LG_STR aszBtnUsbManage[LG_NUM] =
	{CN("U�̹���")
	 EN("Usb Disk")},

	//329 LG_STR aszBtnUsePassword[LG_NUM] =
	{CN("ʹ������")
	 EN("UsePasswd")},

	//330 LG_STR aszBtnUseUKey[LG_NUM] =
	{CN("ʹ��UKey")
	 EN("Use UKey")},

	//331 LG_STR aszBtnUserParam[LG_NUM] =
	{CN("�û�����")
	 EN("UserParam")},

	//332 LG_STR aszBtnUserPass[LG_NUM] =
	{CN("�û�����")
	 EN("UserPass")},

	//333 LG_STR aszBtnWord[LG_NUM] =
	{CN("2�ֽ�")
	 EN("WORD")},

	//334 LG_STR aszBtnWorkCoor[LG_NUM] =
	{CN("��������")
	 EN("WorkCoor")},

	//335 LG_STR aszBtnWorkZero[LG_NUM] =
	{CN("����ԭ��")
	 EN("AbsCr.Zro")},

	//336 LG_STR aszBtnX[LG_NUM] =
	{CN("X")
	 EN("X")},

	//342 LG_STR aszBtnY[LG_NUM] =
	{CN("Y")
	 EN("Y")},

	//1084 LG_STR aszAbs[LG_NUM] =
	{CN("����")
	 EN("Abs.")},

	//1085 LG_STR aszRel[LG_NUM] =
	{CN("���")
	 EN("Rel.")},

	//1086 LG_STR aszAll[LG_NUM] =
	{CN("�ۺ�")
	 EN("ALL.")},

	//1087 LG_STR aszBtnDualChn[LG_NUM] =
	{CN("˫ͨ��")
	 EN("Dual-Chn")},

	//1088 LG_STR aszBtnQuadChn[LG_NUM] =
	{CN("��ͨ��")
	 EN("Quad-Chn")},

	//1089 LG_STR aszProgram[LG_NUM] =
	{CN("����")
	 EN("Program")},

	//1090 LG_STR aszGraph[LG_NUM] =
	{CN("ͼ��")
	 EN("Graph")},

	//1091 LG_STR aszBtnOperate[LG_NUM] =
	{CN("(����)")
	 EN("(Operate)")},

	//1092 LG_STR aszBtnLocalDir[LG_NUM] =
	{CN("����Ŀ¼")
	 EN("LocalDir")},

	//1093 LG_STR aszBtnUsbDir[LG_NUM] =
	{CN("U��Ŀ¼")
	 EN("UsbDir")},

	//1094 LG_STR aszBtnWeb[LG_NUM] =
	{CN("����")
	 EN("Network")},

	//1095 LG_STR aszBtnUSB[LG_NUM] =
	{CN("USB")
	 EN("USB")},

	//1096 LG_STR aszBtnUart[LG_NUM] =
	{CN("����")
	 EN("UART")},

	//1097 LG_STR aszBtnMdi[LG_NUM] =
	{CN("MDI")
	 EN("MDI")},

	//1099 LG_STR aszBtnCoorSys[LG_NUM] =
	{CN("����ϵ")
	 EN("CoorSys")},

	//1100 LG_STR aszBtnMacroVar[LG_NUM] =
	{CN("�����")
	 EN("MacroVar")},

	//1100 LG_STR aszBtnUsrMacroVar[LG_NUM] =
	{CN("�Զ���\n�����")
	 EN("User\nMacroVar")},

	//1100 LG_STR aszBtnUsrInAlm[LG_NUM] =
	{CN("�Զ���\n���뱨��")
	 EN("User\nInAlm")},

	//1100 LG_STR aszBtnUsrWaitAlm[LG_NUM] =
	{CN("�Զ���\n�ȴ�����")
	 EN("User\nWaitAlm")},

	//1102 LG_STR aszBtnSysSet[LG_NUM] =
	{CN("ϵͳ����")
	 EN("SysSet")},

	//1103 LG_STR aszBtnOperPanel[LG_NUM] =
	{CN("�������")
	 EN("OperPanel")},

	//1105 LG_STR aszBtnTime[LG_NUM] =
	{CN("ʱ��")
	 EN("Time")},

	//1106 LG_STR aszBtnPwdProtect[LG_NUM] =
	{CN("���뱣��")
	 EN("Protect")},

	//1107 LG_STR aszBtnSpdlPrm[LG_NUM] =
	{CN("�������")
	 EN("SpdlPrm")},

	//1109 LG_STR aszBtnPLC[LG_NUM] =
	{CN("PLC")
	 EN("PLC")},

	//1110 LG_STR aszBtnPlcPrm[LG_NUM] =
	{CN("PLC����")
	 EN("PLC Prm")},

	//1111 LG_STR aszBtnPlcSet[LG_NUM] =
	{CN("PLC����")
	 EN("PLC Set")},

	//1112 LG_STR aszBtnAlarm[LG_NUM] =
	{CN("����")
	 EN("Alarm")},

	//1113 LG_STR aszBtnAlarmHis[LG_NUM] =
	{CN("������¼")
	 EN("Alarm His")},

	//1114 LG_STR aszBtnPlcDiag[LG_NUM] =
	{CN("PLC���")
	 EN("PLC Diag")},

	//1115 LG_STR aszBtnSysDiag[LG_NUM] =
	{CN("ϵͳ���")
	 EN("Sys.Diag")},

	//1115 LG_STR aszBtnRemoteDiag[LG_NUM] =
	{CN("Զ�����")
	 EN("Rem.Diag")},

	//1116 LG_STR aszBtnGraphPrm[LG_NUM] =
	{CN("ͼ�β���")
	 EN("GraphPrm")},

	//1182 LG_STR aszBtnBGEdit[LG_NUM] =
	{CN("��̨�༭")
	 EN("BG.Edit")},

	//1182 LG_STR nszBtnPOS[LG_NUM] =
	{CN("λ��")
	 EN("POS")},

	//1182 LG_STR nszBtnPRG[LG_NUM] =
	{CN("����")
	 EN("PRG")},

	//1182 LG_STR nszBtnOFT[LG_NUM] =
	{CN("����")
	 EN("OFT")},

	//1182 LG_STR nszBtnPAR[LG_NUM] =
	{CN("����")
	 EN("PAR")},

	//1182 LG_STR nszBtnSET[LG_NUM] =
	{CN("����")
	 EN("SET")},

	//1182 LG_STR nszBtnDGN[LG_NUM] =
	{CN("���")
	 EN("DGN")},

	//1182 LG_STR nszBtnGRH[LG_NUM] =
	{CN("ͼ��")
	 EN("GRH")},

	//1182 LG_STR nszBtnALM[LG_NUM] =
	{CN("����")
	 EN("ALM")},

	//1182 LG_STR nszBtnPLC[LG_NUM] =
	{CN("��ͼ")
	 EN("PLC")},

	//1182 LG_STR nszBtnUsrDef[LG_NUM] =
	{CN("�û�\n�Զ���")
	 EN("User Def")},

	//1182 LG_STR nszBtnPrintScreen[LG_NUM] =
	{CN("����")
	 EN("Print\nScreen")},

	//1182 LG_STR nszBtnSysPar[LG_NUM] =
	{CN("ϵͳ����")
	 EN("Nc Par.")},

	//1182 LG_STR nszBtnChnPar[LG_NUM] =
	{CN("ͨ������")
	 EN("Chn Par.")},

	//1182 LG_STR nszBtnOpen[LG_NUM] =
	{CN("��")
	 EN("Open")},

	//1182 LG_STR nszBtnAxisPlus[LG_NUM] =
	{CN("��+")
	 EN("Axis+")},

	//1182 LG_STR nszBtnAxisMinus[LG_NUM] =
	{CN("��-")
	 EN("Axis-")},

	//1182 LG_STR nszBtnFactorySet[LG_NUM] =
	{CN("��������")
	 EN("FactorySet")},

	//1182 LG_STR nszBtnFactoryPar[LG_NUM] =
	{CN("����ֵ")
	 EN("FactoryPar")},

	//230 LG_STR nszBtnFormat[LG_NUM] =
	{CN("��ʽ��")
	 EN("Format")},

	//314 LG_STR nszBtnDataInOut[LG_NUM] =
	{CN("����\n�������")
	 EN("Data\nIn Out")},

	//262 LG_STR nszBtnOutputPortDef[LG_NUM] =
	{CN("�����\n����")
	 EN("Output\nDef")},

	//243 LG_STR nszBtnInputPortDef[LG_NUM] =
	{CN("�����\n����")
	 EN("Input\nDef")},

	//243 LG_STR nszBtnIOOutline[LG_NUM] =
	{CN("�������\nһ��")
	 EN("IO\nOutline")},

	//243 LG_STR nszBtnUserIODef[LG_NUM] =
	{CN("�Զ���\nIO")
	 EN("USRDEF\nIO")},

	//243 LG_STR nszBtnUserPage[LG_NUM] =
	{CN("�Զ���\nҳ��")
	 EN("USRDEF\nPage")},

	//243 LG_STR nszBtnServoDgn[LG_NUM] =
	{CN("�ŷ����")
	 EN("ServoDgn.")},

     //303 LG_STR nszBtnServoPar[LG_NUM] =
	{CN("�ŷ�����")
	 EN("ServoPar.")},

	//243 LG_STR nszBtnWaveDgn[LG_NUM] =
	{CN("�������")
	 EN("WaveDgn.")},

	//243 LG_STR nszBtnWaveGrh[LG_NUM] =
	{CN("����ͼ��")
	 EN("WaveGrh.")},

	//243 LG_STR nszBtnWavePar[LG_NUM] =
	{CN("���β���")
	 EN("WavePar.")},

	//1098 LG_STR nszBtnToolOfs[LG_NUM] =
	{CN("����ƫ��")
	 EN("ToolOfs")},

	//1098 LG_STR nszBtnToolWear[LG_NUM] =
	{CN("����ĥ��")
	 EN("ToolWear")},

	//1101 LG_STR nszBtnToolLife[LG_NUM] =
	{CN("��������")
	 EN("ToolLife")},

	//1101 LG_STR nszBtnDataProtect[LG_NUM] =
	{CN("���ݱ���")
	 EN("Data\nProtect")},

	//1101 LG_STR nszBtnSet[LG_NUM] =
	{CN("����")
	 EN("SET")},

	//1101 LG_STR nszBtnPlc[LG_NUM] =
	{CN("PLC")
	 EN("PLC")},

	//1101 LG_STR nszBtnAlm[LG_NUM] =
	{CN("����")
	 EN("ALM")},

	//1100 LG_STR nszBtnLocalVar[LG_NUM] =
	{CN("�ֲ�����")
	 EN("Local\nVar")},

	//1100 LG_STR nszBtnGlobalVar[LG_NUM] =
	{CN("ȫ�ֱ���")
	 EN("Global\nVar")},

	//1100 LG_STR nszBtnNVVar[LG_NUM] =
	{CN("�������\n����")
	 EN("NV-Var")},

	//1091 LG_STR nszSBtnOperate[LG_NUM] =
	{CN("[����]")
	 EN("[OPER]")},

	//285 LG_STR nszSBtnReturn[LG_NUM] =
	{CN("[����]")
	 EN("[Ret.]")},

	//285 LG_STR nszSBtnMore[LG_NUM] =
	{CN("[����]")
	 EN("[More]")},

	//285 LG_STR nszSBtnMore1[LG_NUM] =
	{CN("[����]\n1")
	 EN("[More]\n1")},

	//285 LG_STR nszSBtnMore2[LG_NUM] =
	{CN("[����]\n2")
	 EN("[More]\n2")},

	//285 LG_STR nszSBtnMore3[LG_NUM] =
	{CN("[����]\n3")
	 EN("[More]\n3")},

	//285 LG_STR nszSBtnMore4[LG_NUM] =
	{CN("[����]\n4")
	 EN("[More]\n4")},

	//285 LG_STR nszSBtnMore5[LG_NUM] =
	{CN("[����]\n5")
	 EN("[More]\n5")},

    //1182 LG_STR nszSBtnPreset[LG_NUM] =
    {CN("Ԥ��")
    EN("Preset")},

    //1182 LG_STR nszSBtnOrigin[LG_NUM] =
    {CN("ԭ��")
    EN("Origin")},

	//1182 LG_STR nszSBtnClear[LG_NUM] =
	{CN("���")
	 EN("Clear")},

	//1182 LG_STR nszSBtnMachClear[LG_NUM] =
	{CN("����\n���")
	 EN("Mach.\nClear")},

	//1182 LG_STR nszSBtnRelClear[LG_NUM] =
	{CN("���\n���")
	 EN("Rel.\nClear")},

    //1182 LG_STR nszSBtnRelCenter[LG_NUM] =
    {CN("���\n����")
    EN("Rel.\nCenter")},

    //1182 LG_STR nszSBtnPartsPreset[LG_NUM] =
    {CN("�Ƽ�\n����")
    EN("Parts\nPreset")},

    //1182 LG_STR nszSBtnRunTimePreset[LG_NUM] =
    {CN("��ʱ\n����")
    EN("RunTim\nPreset")},

    //1182 LG_STR nszSBtnPartsTarget[LG_NUM] =
    {CN("�Ƽ�\nĿ��")
    EN("Parts\nTarget")},

	//1104 LG_STR nszSBtnPartTime[LG_NUM] =
	{CN("�Ƽ�\n��ʱ")
	 EN("Part\nTime")},

	//1104 LG_STR nszSBtnShowLoad[LG_NUM] =
	{CN("��ʾ\n����")
	 EN("Show\nLoad")},

	//1104 LG_STR nszSBtnProcessSet[LG_NUM] =
	{CN("�ӹ�\n����")
	 EN("Procss\nSet")},

	//1104 LG_STR nszSBtnEncoderRst[LG_NUM] =
	{CN("������\n��λ")
	 EN("Encoder\nReset")},

	//1104 LG_STR nszSBtnModal[LG_NUM] =
	{CN("ģ̬")
	 EN("Modal")},

	//1104 LG_STR nszSBtnTFS[LG_NUM] =
	{CN("T,F,S")
	 EN("T,F,S")},

	//1104 LG_STR nszSBtnShowCoor[LG_NUM] =
	{CN("��ʾ\n����")
	 EN("Show\nCoor.")},

	//1176 LG_STR nszSBtnLoad[LG_NUM] =
	{CN("����")
	 EN("Load")},

	//264 LG_STR nszSBtnPassword[LG_NUM] =
	{CN("����\n����")
	 EN("Pass-\nword")},

	//230 LG_STR nszSBtnTrialSerial[LG_NUM] =
	{CN("����\n���к�")
	 EN("Trial\nSerial")},

	//230 LG_STR nszSBtnUseSerial[LG_NUM] =
	{CN("ʹ��\n���к�")
	 EN("Use\nSerial")},

	//314 LG_STR nszSBtnSetTime[LG_NUM] =
	{CN("����\nʱ��")
	 EN("Set\nTime")},

	//286 LG_STR nszSBtnRewrite[LG_NUM] =
	{CN("����\n����")
	 EN("Retype")},

	//286 LG_STR nszSBtnOSearch[LG_NUM] =
	{CN("����\n����")
	 EN("O-\nSearch")},

	//286 LG_STR nszSBtnSearch[LG_NUM] =
	{CN("����")
	 EN("Search")},

	//227 LG_STR nszSBtnFind[LG_NUM] =
	{CN("����")
	 EN("Find")},

	//286 LG_STR nszSBtnGotoLine[LG_NUM] =
	{CN("��λ��")
	 EN("Goto\nLine")},

	//1182 LG_STR nszSBtnClearAll[LG_NUM] =
	{CN("���\nȫ��")
	 EN("Clear\nAll")},

	//1182 LG_STR nszSBtnClearCurAxis[LG_NUM] =
	{CN("���\n��ǰ��")
	 EN("Clear\nCurAxis")},

	//1182 LG_STR nszSBtnSelectClear[LG_NUM] =
	{CN("ѡ��\n���")
	 EN("Select\nClear")},

	//311 LG_STR nszSBtnSearchNo[LG_NUM] =
	{CN("������")
	 EN("Find \n No.")},

	//179 LG_STR nszSBtnBackup[LG_NUM] =
	{CN("����")
	 EN("Backup")},

	//277 LG_STR nszSBtnRecover[LG_NUM] =
	{CN("�ָ�")
	 EN("Recover")},

	//202 LG_STR nszSBtnCopy[LG_NUM] =
	{CN("����")
	 EN("Copy")},
	//202 LG_STR nszSBtnPaste[LG_NUM] =
	{CN("ճ��")
	 EN("Paste")},
	//202 LG_STR nszSBtnCut[LG_NUM] =
	{CN("����")
	 EN("Cut")},
	//179 LG_STR nszSBtnBackupRecover[LG_NUM] =
	{CN("����\n�ָ�")
	 EN("Backup\nRecov.")},

	//179 LG_STR nszSBtnBackupUser[LG_NUM] =
	{CN("����\n�û�")
	 EN("Backup\nUser")},

	//179 LG_STR nszSBtnBackupOEM[LG_NUM] =
	{CN("����\n����")
	 EN("Backup\nOEM")},

	//179 LG_STR nszSBtnRecoverUser[LG_NUM] =
	{CN("�ָ�\n�û�")
	 EN("Recov.\nUser")},

	//179 LG_STR nszSBtnRecoverOEM[LG_NUM] =
	{CN("�ָ�\n����")
	 EN("Recov.\nOEM")},

	//179 LG_STR nszSBtnRecoverDef[LG_NUM] =
	{CN("�ָ�\nĬ��ֵ")
	 EN("Recov.\nDef.")},

	//203 LG_STR nszSBtnCopyToSys[LG_NUM] =
	{CN("����\n��ϵͳ")
	 EN("Copy\nTo NC")},

	//203 LG_STR nszSBtnCopyToUsb[LG_NUM] =
	{CN("����\n��U��")
	 EN("Copy\nTo Usb")},

	//203 LG_STR nszSBtnAllToUsb[LG_NUM] =
	{CN("ȫ��\n��U��")
	 EN("All\nTo Usb")},

	//203 LG_STR nszSBtnAllToSys[LG_NUM] =
	{CN("ȫ��\n��ϵͳ")
	 EN("All\nTo NC")},

	//203 LG_STR nszSBtnMakeDir[LG_NUM] =
	{CN("�½�\nĿ¼")
	 EN("Make\nDir.")},

	//203 LG_STR nszSBtnNew[LG_NUM] =
	{CN("�½�")
	 EN("New")},

	//203 LG_STR nszSBtnSaveAs[LG_NUM] =
	{CN("���Ϊ")
	 EN("SaveAS")},

	//203 LG_STR nszSBtnRename[LG_NUM] =
	{CN("������")
	 EN("Rename")},

	//1182 LG_STR nszSBtnBGEdit[LG_NUM] =
	{CN("��̨\n�༭")
	 EN("BG\nEdit")},

	//203 LG_STR nszSBtnCamImport[LG_NUM] =
	{CN("͹��\n����")
	 EN("Cam\nImport")},

	//203 LG_STR nszSBtnFuncSelect[LG_NUM] =
	{CN("����\nѡ��")
	 EN("Func.\nSelect")},

	//314 LG_STR nszSBtnSelect[LG_NUM] =
	{CN("ѡ��")
	 EN("Select")},

	//314 LG_STR nszSBtnCancelSelect[LG_NUM] =
	{CN("ȡ��\nѡ��")
	 EN("Cancel\nSelect")},

	//314 LG_STR nszSBtnSelectAll[LG_NUM] =
	{CN("ȫ��\nѡ��")
	 EN("Select\nAll")},

	//314 LG_STR nszSBtnCancelAll[LG_NUM] =
	{CN("ȫ��\nȡ��")
	 EN("Cancel\nAll")},

	//1130 LG_STR nszSBtnExec[LG_NUM] =
	{CN("ִ��")
	 EN("SExec")},

	//1130 LG_STR nszSBtnDataInput[LG_NUM] =
	{CN("����\n����")
	 EN("Data\nInput")},

	//1130 LG_STR nszSBtnDataOutput[LG_NUM] =
	{CN("����\n���")
	 EN("Data\nOutput")},

	//1130 LG_STR nszSBtnOutputToUsb[LG_NUM] =
	{CN("���\n��U��")
	 EN("Output\nToUSB")},

	//1130 LG_STR nszSBtnInputFromUsb[LG_NUM] =
	{CN("��U��\n����")
	 EN("Input\nFromUsb")},

	//1130 LG_STR nszSBtnOutputAllToUsb[LG_NUM] =
	{CN("���\nȫ��")
	 EN("Output\nAll")},

	//1130 LG_STR nszSBtnInputAllFromUsb[LG_NUM] =
	{CN("ȫ��\n����")
	 EN("Input\nAll")},

	//LG_STR nszSBtnNULL[LG_NUM] =
	{CN("NULL")
	EN("NULL")},

	//LG_STR nszSBtnParSwitch[LG_NUM] =
	{CN("����\n����")
	EN("Param\nSwitch")},

	//LG_STR nszSBtnProgSwitch[LG_NUM] =
	{CN("����\n����")
	EN("Prog\nSwitch")},

	//1127 LG_STR nszSBtnProgPreview[LG_NUM] =
	{CN("����\nԤ��")
	 EN("Prog\nPrevw")},

	//1127 LG_STR nszSBtnCCompzPreview[LG_NUM] =
	{CN("C����\nԤ��")
	 EN("C Compz\nPrevw")},

	//1127 LG_STR nszSBtnShowPreview[LG_NUM] =
	{CN("��ʾ\nԤ��")
	 EN("Show\nPrevw")},

	//313 LG_STR nszSBtnSetTimeLim[LG_NUM] =
	{CN("����\n������")
	 EN("Set\nTrial")},

	//197 LG_STR nszSBtnClrTimeLim[LG_NUM] =
	{CN("���\n������")
	 EN("Cleal\nTrial")},

	//197 LG_STR nszSBtnDelAll[LG_NUM] =
	{CN("ɾ��\nȫ��")
	 EN("Delete\nAll")},

	//197 LG_STR nszSBtnAutoCalc[LG_NUM] =
	{CN("�Զ�\n����")
	 EN("Auto\nCalc")},

	//197 LG_STR nszSBtnRoomIn[LG_NUM] =
	{CN("�Ŵ�")
	 EN("Room\nIn")},

	//197 LG_STR nszSBtnRoomOut[LG_NUM] =
	{CN("��С")
	 EN("Room\nOut")},

	//197 LG_STR nszSBtnRoomReset[LG_NUM] =
	{CN("����\n��λ")
	 EN("Room\nReset")},

	//197 LG_STR nszSBtnMoveUp[LG_NUM] =
	{CN("����")
	 EN("Move\nUp")},

	//197 LG_STR nszSBtnMoveDown[LG_NUM] =
	{CN("����")
	 EN("Move\nDown")},

	//197 LG_STR nszSBtnMoveReset[LG_NUM] =
	{CN("�ƶ�\n��λ")
	 EN("Move\nReset")},

	//197 LG_STR nszSBtnRotLeft[LG_NUM] =
	{CN("����\n��ת")
	 EN("Rotate\nLeft")},

	//197 LG_STR nszSBtnRotRight[LG_NUM] =
	{CN("����\n��ת")
	 EN("Rotate\nRight")},

	//197 LG_STR nszSBtnRotUp[LG_NUM] =
	{CN("����\n��ת")
	 EN("Rotate\nUp")},

	//197 LG_STR nszSBtnRotDown[LG_NUM] =
	{CN("����\n��ת")
	 EN("Rotate\nDown")},

	//197 LG_STR nszSBtnRotXP[LG_NUM] =
	{CN("X+\n��ת")
	 EN("X+\nRotate")},

	//197 LG_STR nszSBtnRotXN[LG_NUM] =
	{CN("X-\n��ת")
	 EN("X-\nRotate")},

	//197 LG_STR nszSBtnRotYP[LG_NUM] =
	{CN("Y+\n��ת")
	 EN("Y+\nRotate")},

	//197 LG_STR nszSBtnRotYN[LG_NUM] =
	{CN("Y-\n��ת")
	 EN("Y-\nRotate")},

	//197 LG_STR nszSBtnRotZP[LG_NUM] =
	{CN("Z+\n��ת")
	 EN("Z+\nRotate")},

	//197 LG_STR nszSBtnRotZN[LG_NUM] =
	{CN("Z-\n��ת")
	 EN("Z-\nRotate")},

	//197 LG_STR nszSBtnRotReset[LG_NUM] =
	{CN("��ת\n��λ")
	 EN("Rotate\nReset")},

	//197 LG_STR nszSBtnXOYPlane[LG_NUM] =
	{CN("XOY\nƽ��")
	 EN("XOY\nPlane")},

	//197 LG_STR nszSBtnZOXPlane[LG_NUM] =
	{CN("ZOX\nƽ��")
	 EN("ZOX\nPlane")},

	//197 LG_STR nszSBtnYOZPlane[LG_NUM] =
	{CN("YOZ\nƽ��")
	 EN("YOZ\nPlane")},

	//197 LG_STR nszSBtnXYZPlane[LG_NUM] =
	{CN("XYZ\nƽ��")
	 EN("XYZ\nPlane")},

	//197 LG_STR nszSBtnXOZPlane[LG_NUM] =
	{CN("XOZ\nƽ��")
	 EN("XOZ\nPlane")},

	//197 LG_STR nszSBtnPlaneSelect[LG_NUM] =
     {CN("ƽ��\nѡ��")
	 EN("Plane\nSelect")},

	//197 LG_STR nszSBtnRotate[LG_NUM] =
     {CN("��ת")
	 EN("Rotate")},

	//197 LG_STR nszSBtnLocate[LG_NUM] =
     {CN("��λ")
	 EN("Locate")},

	//197 LG_STR nszSBtnAutoLoc[LG_NUM] =
	{CN("�Զ�\n��λ")
	 EN("Auto\nLoc")},

     //197 LG_STR nszSBtnLocCur[LG_NUM] =
	{CN("��λ\n��ǰ")
	 EN("Loc.\nCur.")},

	//197 LG_STR nszSBtnLocOrgn[LG_NUM] =
	{CN("��λ\nԭ��")
	 EN("Loc.\nOrgn")},

	//197 LG_STR nszSBtnGotoClass[LG_NUM] =
	{CN("��λ\n����")
	 EN("Goto\nClass")},

	//197 LG_STR nszSBtnPageSel[LG_NUM] =
	{CN("[ҳ��]")
	 EN("[Page]")},

	//197 LG_STR nszSBtnPage[LG_NUM] =
	{CN("ҳ��")
	 EN("Page")},

	//197 LG_STR nszSBtnYAxisLocate[LG_NUM] =
	{CN("Y��\n��λ")
	 EN("Y-Axis\nLocate")},

	//LG_STR nszSBtnAxisServo[LG_NUM] =
	{CN("��\n�ŷ�")
	 EN("Axis\nServo")},

	//LG_STR nszSBtnSpeed[LG_NUM] =
	{CN("�ٶ�")
	 EN("Speed")},

	//LG_STR nszSBtnCompz[LG_NUM] =
	{CN("����")
	 EN("Compz")},

    //LG_STR nszSBtnZeroRet[LG_NUM] =
	{CN("����")
	EN("ZeroRet")},

    //LG_STR nszSBtnCoorSys[LG_NUM] =
	{CN("����ϵ")
	EN("CoorSys")},

    //LG_STR nszSBtnPosLim[LG_NUM] =
	{CN("��λ")
	EN("PosLim")},

    //LG_STR nszSBtnHndl[LG_NUM] =
	{CN("����")
	EN("Hndl")},

    //LG_STR nszSBtnSpdl[LG_NUM] =
	{CN("����")
	EN("Spindl")},

    //LG_STR nszSBtnChunk[LG_NUM] =
	{CN("����")
	EN("Chunk")},

    //LG_STR nszSBtnSpdlChunk[LG_NUM] =
	{CN("����\n��ͷ")
	EN("Spdl\nChunk")},

    //LG_STR nszSBtnTailStock[LG_NUM] =
	{CN("β��")
	EN("Tail\nStock")},

    //LG_STR nszSBtnTool[LG_NUM] =
	{CN("����")
	EN("Tool")},

    //LG_STR nszSBtnLub[LG_NUM] =
	{CN("��")
	EN("Lub.")},

    //LG_STR nszSBtnSysCfg[LG_NUM] =
	{CN("ϵͳ\n����")
	EN("System\nCfg")},

    //LG_STR nszSBtnProgram[LG_NUM] =
	{CN("����")
	EN("Prog")},

    //LG_STR nszSBtnToolComp[LG_NUM] =
	{CN("����")
	EN("Tool\nOffset")},

    //LG_STR nszSBtnIO[LG_NUM] =
	{CN("IO")
	EN("IO")},

    //LG_STR nszSBtnPLC[LG_NUM] =
	{CN("PLC")
	EN("PLC")},

    //LG_STR nszSBtnThread[LG_NUM] =
	{CN("����")
	EN("Thread")},

    //LG_STR nszSBtnCycle[LG_NUM] =
	{CN("�̶�\nѭ��")
	EN("Cycle")},

    //LG_STR nszSBtnTap[LG_NUM] =
	{CN("��˿")
	EN("Tap")},

    //LG_STR nszSBtnPolygon[LG_NUM] =
	{CN("�����")
	EN("Poly-\ngon")},

    //LG_STR nszSBtnSkip[LG_NUM] =
	{CN("����")
	EN("Skip")},

    //LG_STR nszSBtnPolar[LG_NUM] =
	{CN("������")
	EN("Polar")},

    //LG_STR nszSBtnPosSw[LG_NUM] =
	{CN("λ��\n����")
	EN("PosSW")},

    //LG_STR nszSBtnMacro[LG_NUM] =
	{CN("�����")
	EN("Macro")},

    //LG_STR nszSBtnMultChn[LG_NUM] =
	{CN("��ͨ��")
	EN("Mult-\nChn")},

	//197 LG_STR nszSBtnUpdateGrh[LG_NUM] =
	{CN("ˢ��\nͼ��")
	 EN("Update\nGrh")},

	//197 LG_STR nszSBtnStartTrace[LG_NUM] =
	{CN("��ʼ\n����")
	 EN("Start\nTrace")},

	//197 LG_STR nszSBtnStopTrace[LG_NUM] =
	{CN("ֹͣ\n����")
	 EN("Stop\nTrace")},

	//203 LG_STR nszSBtnWave1[LG_NUM] =
	{CN("����1")
	 EN("Wave 1")},

	//203 LG_STR nszSBtnWave2[LG_NUM] =
	{CN("����2")
	 EN("Wave 2")},

	//203 LG_STR nszSBtnWave3[LG_NUM] =
	{CN("����3")
	 EN("Wave 3")},

	//203 LG_STR nszSBtnWave4[LG_NUM] =
	{CN("����4")
	 EN("Wave 4")},

	//203 LG_STR nszSBtnTimeUp[LG_NUM] =
	{CN("ʱ��+")
	 EN("Time+")},

	//203 LG_STR nszSBtnTimeDown[LG_NUM] =
	{CN("ʱ��-")
	 EN("Time-")},

	//203 LG_STR nszSBtnTimeLeft[LG_NUM] =
	{CN("ʱ��\x1b")
	 EN("Time\x1b")},

	//203 LG_STR nszSBtnTimeRight[LG_NUM] =
	{CN("ʱ��\x1a")
	 EN("Time\x1a")},

	//203 LG_STR nszSBtnTimeReset[LG_NUM] =
	{CN("ʱ��\n��λ")
	 EN("Time\nReset")},

     //1201 LG_STR nszSBtnImportFromUsb[LG_NUM] =
     {CN("��U��\n����")
     EN("Import\nFromUsb")},

     //1201 LG_STR nszSBtnInsert[LG_NUM] =
     {CN("����")
     EN("Insert")},

	//209 LG_STR nszSBtnDelete[LG_NUM] =
	{CN("ɾ��")
	 EN("Delete")},

	//209 LG_STR nszSBtnAppend[LG_NUM] =
	{CN("����")
	 EN("Append")},

	//285 LG_STR nszSBtnAddUserDef[LG_NUM] =
	{CN("���\n�Զ���")
	 EN("Add\nUsrDef")},

	//209 LG_STR nszSBtnChgStatus[LG_NUM] =
	{CN("�޸�\n״̬")
	 EN("Chg\nStatus")},

     //209 LG_STR nszSBtnLifeClear[LG_NUM] =
     {CN("����\n����")
     EN("Life\nClear")},

     //209 LG_STR nszSBtnScreenLock[LG_NUM] =
     {CN("��Ļ\n��ס")
     EN("Screen\nLock")},

	//209 LG_STR nszSBtnChgPort[LG_NUM] =
	{CN("�޸�\n�˿�")
	 EN("Chg\nPort")},

	//209 LG_STR nszSBtnCenterInput[LG_NUM] =
	{CN("����\n����")
	 EN("1/2\nInput")},

	//209 LG_STR nszSBtn3PointCenter[LG_NUM] =
	{CN("����\n��Բ��")
	 EN("3Point\nCenter")},

	//209 LG_STR nszSBtnCInput[LG_NUM] =
	{CN("C����")
	 EN("C Input")},

	//209 LG_STR nszSBtnAddCInput[LG_NUM] =
	{CN("+C����")
	 EN("+C Input")},

	//209 LG_STR nszSBtnPosition1[LG_NUM] =
	{CN("λ��1")
	 EN("POS1")},

	//209 LG_STR nszSBtnPosition2[LG_NUM] =
	{CN("λ��2")
	 EN("POS2")},

	//209 LG_STR nszSBtnPosition3[LG_NUM] =
	{CN("λ��3")
	 EN("POS3")},

	//209 LG_STR nszSBtnLevelInc[LG_NUM] =
	{CN("����")
	 EN("Level+")},

	//209 LG_STR nszSBtnLevelDec[LG_NUM] =
	{CN("����")
	 EN("Level-")},

	//209 LG_STR nszSBtnUpgradeSoft[LG_NUM] =
	{CN("����\n���")
	 EN("Upgrade\nSoftware")},

	//209 LG_STR nszSBtnUpgradePOPic[LG_NUM] =
	{CN("����\n����ͼ")
	 EN("Upgrade\nPO-PIC")},

	//264 LG_STR nszSBtnDisableUpg[LG_NUM] =
	{CN("��ֹ\n����")
	 EN("Disable\nUpgrade")},

	//264 LG_STR nszSBtnLevelPlus[LG_NUM] =
	{CN("����+")
	 EN("Level+")},

	//264 LG_STR nszSBtnLevelMinus[LG_NUM] =
	{CN("����-")
	 EN("Level-")},

	//102 LG_STR nszSBtnOn[LG_NUM] =
	{CN("��(1)")
	 EN("ON(1)")},

	//99 LG_STR nszSBtnOff[LG_NUM] =
	{CN("��(0)")
	 EN("OFF(0)")},

	//102 LG_STR nszSBtnContact[LG_NUM] =
	{CN("����\n(2)")
	 EN("Contact\n(2)")},

    //GROUP:״̬����ʾ
	//366 LG_STR aszCannotBrwDir[LG_NUM] =
	{CN("�ļ��в��ܱ����")
	 EN("Folder can't be browsed")},

	//367 LG_STR aszCannotDelDir[LG_NUM] =
	{CN("����ɾ���ļ���")
	 EN("Unable to delete folder")},

	//368 LG_STR aszCopyFolder[LG_NUM] =
	{CN("�ļ��в��ܸ���")
	 EN("Folder can't be copied")},

	//369 LG_STR aszCopyToClipboardSucc[LG_NUM] =
	{CN("���Ƶ����а�")
	 EN("Copy to clipboard")},

	//374 LG_STR aszDirFull[LG_NUM] =
	{CN("Ŀ¼������")
	 EN("Directory fulled")},

	//376 LG_STR aszFileExist_Replace[LG_NUM] =
	{CN("Ŀ���ļ��Ѵ���,����(ENTER)?")
	 EN("Destined filename be existed,Replace(ENTER)?")},

	//381 LG_STR aszInsertUsb[LG_NUM] =
	{CN("�����U��")
	 EN("Please insert Usb disk")},

	//382 LG_STR aszMaxDirDepth[LG_NUM] =
	{CN("��ǰ�������ɴ򿪵�Ŀ¼���")
	 EN("Be the most depth of Usb directory")},

	//383 LG_STR aszMsgDogErr[LG_NUM] =
	{CN("UKey����!")
	 EN("UKey error")},

	//384 LG_STR aszMsgDogExist[LG_NUM] =
	{CN("UKey��Ϣ�Ѵ���")
	 EN("UKey info exist already")},

	//385 LG_STR aszMsgInsertDog[LG_NUM] =
	{CN("�����UKey")
	 EN("Please Insert UKey")},

	//386 LG_STR aszMsgDogInsert[LG_NUM] =
	{CN("UKey�Ѳ���")
	 EN("UKey inserted")},

	//387 LG_STR aszMsgDogPermitErr[LG_NUM] =
	{CN("UKeyȨ�޴���!")
	 EN("UKey permit error")},

	//388 LG_STR aszMsgImportLadderFail[LG_NUM] =
	{CN("��������ͼ�ļ�ʧ��!")
	 EN("Fail to import ladder file!")},

	//389 LG_STR aszMsgImportPLCFail[LG_NUM] =
	{CN("����PLC�����ļ�ʧ��!")
	 EN("Fail to import PLC program file!")},

	//391 LG_STR aszMsgIsBackup[LG_NUM] =
	{CN("��������,�޷��޸�!")
	 EN("Can't edit the backuped file.")},

	//392 LG_STR aszMsgLoadE01[LG_NUM] =
	{CN("��F1����U�̸�Ŀ¼��E01.txtΪ��������!")
	 EN("F1:Load E01.txt to the content!")},

	//393 LG_STR aszMsgLoadUserPrm[LG_NUM] =
	{CN("��F1����U�̸�Ŀ¼��UserPrm.txtΪ�û���������!")
	 EN("F1:Load UserPrm.txt to the content!")},

	//394 LG_STR aszMsgNoDogInfo[LG_NUM] =
	{CN("û�б���UKey��Ϣ")
	 EN("No saved UKey info.")},

	//395 LG_STR aszMsgNoOpenBackup[LG_NUM] =
	{CN("���ڼӹ�,�޷���������ļ�!")
	 EN("Can't open backup file when operating!")},

	//396 LG_STR aszMsgNotExistOrNoPermit[LG_NUM] =
	{CN("�ļ������ڻ��޷���Ȩ��!")
	 EN("File not exist or no permission!")},

	//397 LG_STR aszMsgNotFind[LG_NUM] =
	{CN("û���ҵ�")
	 EN("Not found")},

	//401 LG_STR aszMsgOperating[LG_NUM] =
	{CN("���ڼӹ�,�޷�ִ��!")
	 EN("Can't Exec. when operating!")},

	//403 LG_STR aszMsgROFile[LG_NUM] =
	{CN("ֻ���ļ�,�����޸�")
	 EN("This is a read only file")},

	//404 LG_STR aszMsgReading[LG_NUM] =
	{CN("���ڶ�ȡ�ļ�,���Ժ�...")
	 EN("Reading file...")},

	//405 LG_STR aszMsgToolModifyLim[LG_NUM] =
	{CN("�ӹ�ʱ�޵�ֵ���ܳ���1����!")
	 EN("The value can't greater then 1mm!")},

	//406 LG_STR aszNoEnoughMem[LG_NUM] =
	{CN("�ڴ治��")
	 EN("Not enough memory!")},

	//407 LG_STR aszNumberErr[LG_NUM] =
	{CN("��������д����")
	 EN("The inputted number error!")},

	//408 LG_STR aszOpenDirErr[LG_NUM] =
	{CN("U��Ŀ¼�б�ʧ��")
	 EN("Fail to list Usb directory")},

	//410 LG_STR aszPasswordChged[LG_NUM] =
	{CN("�����޸����,���ס������")
	 EN("Password changed successfully")},

	//412 LG_STR aszPlcFormatErr[LG_NUM] =
	{CN("PLC�ļ����ݸ�ʽ����")
	 EN("PLC file data error")},

	//413 LG_STR aszPlcTooLarge[LG_NUM] =
	{CN("PLC�ļ�̫��")
	 EN("PLC file too large")},

	//414 LG_STR aszPrevDirErr[LG_NUM] =
	{CN("U�̷����ϼ�Ŀ¼ʧ��")
	 EN("Fail to return to parent Dir")},

	//415 LG_STR aszReadFail[LG_NUM] =
	{CN("���ļ�ʧ��")
	 EN("Fail to read file")},

	//417 LG_STR aszTimeLimitCleared[LG_NUM] =
	{CN("���ʱ�����! ����������ϵͳ.")
	 EN("Time limit Cleared,please restart.")},

	//418 LG_STR aszTrialTimeLimit[LG_NUM] =
	{CN("������ʱ�䲻���޸�")
	 EN("No date modification at trial period")},

	//419 LG_STR aszUserErr[LG_NUM] =
	{CN("����X")
	 EN("Err X")},

	//420 LG_STR aszWriteFail[LG_NUM] =
	{CN("д�ļ�ʧ��")
	 EN("Err:Fail to write file ")},

	//421 LG_STR aszXSaved[LG_NUM] =
	{CN("X��ƫ�ѱ���")
	 EN("X Coor. Saved")},

	//422 LG_STR aszZSaved[LG_NUM] =
	{CN("Z��ƫ�ѱ���")
	 EN("Z Coor. Saved")},

	//423 LG_STR aszZeroOffNot0[LG_NUM] =
	{CN("�������ƫ��ֵ��Ϊ0,��ע�������׼��!")
	 EN("Note:The axis value of zero offset NOT 0!")},

	//GROUP:yanghui
	//1117 LG_STR aszSize[LG_NUM] =
	{CN("��С")
	 EN("Size")},

	//1120 LG_STR aszDate[LG_NUM] =
	{CN("����")
	 EN("Date")},

	//1120 LG_STR aszTime[LG_NUM] =
	{CN("ʱ��")
	 EN("Time")},

	//1120 LG_STR aszModifyDate[LG_NUM] =
	{CN("�޸�����")
	 EN("ModifyDate")},

	//1120 LG_STR aszNote[LG_NUM] =
	{CN("˵��")
	 EN("Note")},

	//GROUP:����
	//1121 LG_STR aszTitlePos[LG_NUM] =
	{CN("λ��")
	 EN("POS")},

	//1122 LG_STR aszTitleProg[LG_NUM] =
	{CN("����")
	 EN("PROG")},

	//1123 LG_STR aszTitleOfs[LG_NUM] =
	{CN("ƫ��")
	 EN("OFS")},

	//1123 LG_STR aszTitleSet[LG_NUM] =
	{CN("����")
	 EN("SET")},

	//1124 LG_STR aszTitleSys[LG_NUM] =
	{CN("ϵͳ")
	 EN("SYSTEM")},

	//1125 LG_STR aszTitleMsg[LG_NUM] =
	{CN("��Ϣ")
	 EN("MSG")},

	//1126 LG_STR aszTitleGraph[LG_NUM] =
	{CN("ͼ��")
	 EN("GRAPH")},

	//1126 LG_STR nszTtlPar[LG_NUM] =
	{CN("����")
	 EN("PAR")},

	//1126 LG_STR nszTtlLad[LG_NUM] =
	{CN("��ͼ")
	 EN("LAD")},

	//1126 LG_STR nszTtlAlm[LG_NUM] =
	{CN("����")
	 EN("ALM")},

	//1126 LG_STR nszTtlDgn[LG_NUM] =
	{CN("���")
	 EN("DGN")},

	//1126 LG_STR nszTtlUsr[LG_NUM] =
	{CN("�û�")
	 EN("USR")},

	//1127 LG_STR aszProgPreview[LG_NUM] =
	{CN("����Ԥ��")
	 EN("Program Preview")},

	//1128 LG_STR aszMemInfo[LG_NUM] =
	{CN("�洢��Ϣ")
	 EN("Memory Information")},

	//1129 LG_STR aszUsedSpace[LG_NUM] =
	{CN("���ÿռ�")
	 EN("Used Space")},

	//1130 LG_STR aszBtnSelExec[LG_NUM] =
	{CN("ѡ��\nִ��")
	 EN("Sel.\nExec")},

    //GROUP:PJS
	//1131 LG_STR aszType[LG_NUM] =
	{CN("����")
	 EN("Type")},

	//1132 LG_STR aszCode[LG_NUM] =
	{CN("����")
	 EN("Code")},

	//1137 LG_STR aszBtnHostDiag[LG_NUM] =
	{CN("��վ���")
	 EN("Host Diag")},

	//1138 LG_STR aszBtnSlaveDiag[LG_NUM] =
	{CN("��վ���")
	 EN("Slave Diag")},

	//1139 LG_STR aszMonday[LG_NUM] =
	{CN("һ")
	 EN("Monday")},

	//1140 LG_STR aszTuesday[LG_NUM] =
	{CN("��")
	 EN("Tuesday")},

	//1141 LG_STR aszWednesday[LG_NUM] =
	{CN("��")
	 EN("Wednesday")},

	//1142 LG_STR aszThursday[LG_NUM] =
	{CN("��")
	 EN("Thursday")},

	//1143 LG_STR aszFriday[LG_NUM] =
	{CN("��")
	 EN("Friday")},

	//1144 LG_STR aszSaturday[LG_NUM] =
	{CN("��")
	 EN("Saturday")},

	//1145 LG_STR aszSunday[LG_NUM] =
	{CN("��")
	 EN("Sunday")},

	//1146 LG_STR aszJanuary[LG_NUM] =
	{CN("  һ��")
	 EN("January")},

	//1147 LG_STR aszFebruary[LG_NUM] =
	{CN("  ����")
	 EN("February")},

	//1148 LG_STR aszMarch[LG_NUM] =
	{CN("  ����")
	 EN("March")},

	//1149 LG_STR aszApril[LG_NUM] =
	{CN("  ����")
	 EN("April")},

	//1150 LG_STR aszMay[LG_NUM] =
	{CN("  ����")
	 EN("March")},

	//1151 LG_STR aszJune[LG_NUM] =
	{CN("  ����")
	 EN("June")},

	//1152 LG_STR aszJuly[LG_NUM] =
	{CN("  ����")
	 EN("July")},

	//1153 LG_STR aszAugust[LG_NUM] =
	{CN("  ����")
	 EN("August")},

	//1154 LG_STR aszSeptember[LG_NUM] =
	{CN("  ����")
	 EN("September")},

	//1155 LG_STR aszOctober[LG_NUM] =
	{CN("  ʮ��")
	 EN("October")},

	//1156 LG_STR aszNovember[LG_NUM] =
	{CN("ʮһ��")
	 EN("November")},

	//1157 LG_STR aszDecember[LG_NUM] =
	{CN("ʮ����")
	 EN("December")},

	//1158 LG_STR aszPrevYear[LG_NUM] =
	{CN("��һ��")
	 EN("PrevYear")},

	//1159 LG_STR aszNextYear[LG_NUM] =
	{CN("��һ��")
	 EN("NextYear")},

	//1160 LG_STR aszPrevMonth[LG_NUM] =
	{CN("ǰһ��")
	 EN("PrevMonth")},

	//1161 LG_STR aszNextMonth[LG_NUM] =
	{CN("��һ��")
	 EN("NextMonth")},

	//1162 LG_STR aszToday[LG_NUM] =
	{CN("����")
	 EN("Todya")},

	//1163 LG_STR aszNow[LG_NUM] =
	{CN("��ǰʱ��")
	 EN("Back to Now")},

	//1164 LG_STR aszSetDate[LG_NUM] =
	{CN("��������")
	 EN("SetDate")},

	//1165 LG_STR aszSetTime[LG_NUM] =
	{CN("����ʱ��")
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
	{CN("������")
	EN("Axis Set")},

	//LG_STR aszBtnBusDev[LG_NUM] =
	{CN("�����豸")
	EN("Bus Dev.")},

	//LG_STR aszTvCheck[LG_NUM]	=
	{CN("��żУ��(1:��  0:��)")
	  EN("Tv Check(1:ON  0:OFF")},

	//LG_STR aszInputUnit[LG_NUM]	=
	{CN("��Ӣ�Ʊ��(1:Ӣ��  0:����)")
	  EN("Input Unit(1:INCH  0:MM")},

	//LG_STR aszSequenceNo[LG_NUM]	=
	{CN("�Զ����(1:��  0:��)")
	  EN("Sequence No(1:ON  0:OFF")},

	//LG_STR aszPrmWrite[LG_NUM]  =
	{CN("��������(1:��  0:��)")
	  EN("Parameter Write(1:Enable  0:Disable")},

	//LG_STR aszProgWrite[LG_NUM] =
	{CN("���򿪹�(1:��  0:��)")
	  EN("Program Write(1:Enable  0:Disable")},

	//LG_STR aszPassWordSet[LG_NUM] =
	{CN("�����޸�")
	EN("PassWord CHG")},

	  //LG_STR aszProtestLevel[LG_NUM] =
	{CN("��������")
	  EN("Protest Level")},

	//LG_STR aszPassWordLevel[LG_NUM] =
	{CN("����ȼ�:")
	  EN("PassWord Level:")},

	  //LG_STR aszLevel[4][LG_NUM] =
	{CN("0������")
	EN("0 Level:")},

	{CN("1������")
	EN("1 Level:")},

	{CN("2������")
	EN("2 Level:")},

	{CN("3������")
	EN("3 Level:")},

    //LG_STR aszModeSwitch[LG_NUM]
    {CN("ģʽ�л�")
    EN("MODE")},

    //LG_STR aszAxisIncStep[LG_NUM]
    {CN("������������(mm)")
    EN("Axia inc.Step(mm)")},

    //LG_STR aszBlockSkip[LG_NUM]
    {CN("�������ת")
    EN("BLOCK SKIP")},

    //LG_STR aszSingleBlock[LG_NUM]
    {CN("����")
    EN("SINGLE BLOCK")},

    //LG_STR aszMachineLock[LG_NUM]
    {CN("������")
    EN("MACHINE LOCK")},

    //LG_STR aszDryRun[LG_NUM]
    {CN("������")
    EN("DRY RUN")},

    //LG_STR aszProtectKey[LG_NUM]
    {CN("������")
    EN("PROTECT KEY")},

    //LG_STR aszFeedHold[LG_NUM]
    {CN("��������")
    EN("FEED HOLD")},

    //GROUP:λ�ý���
	//1175 LG_STR aszRealVal[LG_NUM] =
	{CN("ʵ��ֵ")
	 EN("Real value")},

	//1176 LG_STR aszModal[LG_NUM] =
	{CN("ģ̬")
	 EN("Modal")},

	//1176 LG_STR aszGModal[LG_NUM] =
	{CN("G��ģ̬")
	 EN("G Modal")},

	//1177 LG_STR aszTFS[LG_NUM] =
	{CN("T,F,S")
	 EN("T,F,S")},

	//1178 LG_STR aszSetVal[LG_NUM] =
	{CN("�趨ֵ")
	 EN("Set value")},

     //1178 LG_STR aszAuxFunction[LG_NUM] =
    {CN("��������")
    EN("Aux.Function")},

	//1179 LG_STR aszManu[LG_NUM] =
	{CN("�ֶ�")
	 EN("JOG")},

	//1180 LG_STR aszAuto[LG_NUM] =
	{CN("�Զ�")
	 EN("MEM")},

	//1181 LG_STR aszMdi[LG_NUM] =
	{CN("MDI")
	 EN("MDI")},

	//1182 LG_STR aszEdit[LG_NUM] =
	{CN("�༭")
	 EN("EDT")},

     //1182 LG_STR aszDnc[LG_NUM] =
    {CN("DNC")
    EN("DNC")},

    //1182 LG_STR aszRef[LG_NUM] =
    {CN("����")
    EN("REF")},

    //1182 LG_STR aszManuHndl[LG_NUM] =
    {CN("����")
    EN("HDL")},

    //1182 LG_STR aszManuInc[LG_NUM] =
    {CN("����")
    EN("INC")},

	//GROUP:��Ͻ���
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
	{CN("ע��")
	 EN("Comment")},

	//1192 LG_STR aszVersionInfo[LG_NUM] =
	{CN("�汾��Ϣ")
	 EN("Ver.Info")},

	//1193 LG_STR aszBtnCommentMgr[LG_NUM] =
	{CN("ע�͹���")
	 EN("Comment")},

	//1194 LG_STR aszBtnFileMgr[LG_NUM] =
	{CN("�ļ�����")
	 EN("File Mgr")},

	//1195 LG_STR aszSymbol[LG_NUM] =
	{CN("����")
	 EN("Symbol")},

	//1196 LG_STR aszCompanyName[LG_NUM] =
	{CN("��˾����")
	 EN("Company")},

	//1197 LG_STR aszProductName[LG_NUM] =
	{CN("��Ʒ����")
	 EN("Product")},

	//1198 LG_STR aszVersion[LG_NUM] =
	{CN("�汾")
	 EN("Version")},

	//1199 LG_STR aszRemark[LG_NUM] =
	{CN("��ע")
	 EN("Remark")},

	//1200 LG_STR aszDirAddr[LG_NUM] =
	{CN("Ŀ¼��ַ")
	 EN("DirAddr")},

	//1201 LG_STR aszImportToSys[LG_NUM] =
	{CN("����\n��ϵͳ")
	 EN("Import\nToSys")},

	//1202 LG_STR aszExportToUsb[LG_NUM] =
	{CN("����\n��U��")
	 EN("Export\nToUsb")},

     //1202 LG_STR aszRST[LG_NUM] =
    {CN("��λ")
    EN("RESET")},

    //1202 LG_STR nszESP[LG_NUM] =
	{CN("��ͣ")
	 EN("ESP")},

    //1202 LG_STR nszAlarm[LG_NUM] =
	{CN("����")
	 EN("ALM")},

	//1203 LG_STR nszAlarmPSFormat[LG_NUM] =
     {CN("O%04d�����%d:%s")
     EN("O%d Block %d:%s")},

	//1202 LG_STR nszAlarmEPL[LG_NUM] =
	{CN("EPLͨѶ����")
	 EN("EPL Communication alarm")},

    //1202 LG_STR nszAlarmEPLNoRdy[LG_NUM] =
	{CN("EPLδ����")
	 EN("EPL not ready")},

    //1202 LG_STR nszNoRdy[LG_NUM] =
	{CN("δ��")
	 EN("NRDY")},

    //1202 LG_STR nszSvNoRdy[LG_NUM] =
	{CN("�ŷ�δ��")
	 EN("SV NRDY")},

    //1202 LG_STR nszIONoRdy[LG_NUM] =
	{CN("IOվδ��")
	 EN("IO NRDY")},

     //1202 LG_STR aszSTL[LG_NUM] =
    {CN("����")
    EN("STL")},

    //1202 LG_STR aszSPL[LG_NUM] =
    {CN("��ͣ")
    EN("SPL")},

    //1202 LG_STR aszOP[LG_NUM] =
    {CN("ֹͣ")
    EN("STP")},

    //LG_STR aszST[LG_NUM] =
    {CN("ѭ������")
    EN("ST")},

    //LG_STR aszAxisInc[LG_NUM] =
    {CN("��+")
    EN("Axis+")},

    //LG_STR aszAxisDec[LG_NUM] =
    {CN("��-")
    EN("Axis-")},

	//LG_STR aszClearView[LG_NUM] =
	{CN("����")
    EN("ClearView")},

    //LG_STR aszAllAxis[LG_NUM] =
    {CN("������")
    EN("AllAxis")},

    //LG_STR aszPhyStation[LG_NUM] =
    {CN("����վ��")
    EN("Phy No")},

    //LG_STR aszLogicStation[LG_NUM] =
    {CN("�߼�վ��")
    EN("Logic No")},

    //LG_STR aszDevType[LG_NUM] =
    {CN("�豸����")
    EN("Dev. Type")},

    //LG_STR aszDevModelID[LG_NUM] =
    {CN("�豸�ͺ�ID")
    EN("Dev. Model ID")},

    //LG_STR aszCurProg[LG_NUM] =
    {CN("��ǰ����")
    EN("Cur. Prog.")},

    //LG_STR aszRunStaus[LG_NUM] =
    {CN("����״̬")
    EN("Run Status")},

    //LG_STR aszCycleExec[LG_NUM] =
    {CN("ִ������")
    EN("Cycle Exec")},

    //LG_STR aszCycleMin[LG_NUM] =
    {CN("�������")
    EN("Cycle Min")},

    //LG_STR aszCycleMax[LG_NUM] =
    {CN("��С����")
    EN("Cycle max")},

    //LG_STR aszCommandPC[LG_NUM] =
    {CN("ָ��PC")
    EN("Command PC")},
    //LG_STR aszRun[LG_NUM] =
    {CN("����")
    EN("Run")},

    //LG_STR aszError[LG_NUM] =
    {CN("����")
    EN("Error")},

    //LG_STR aszPlcRunStatus[LG_NUM] =
    {CN("PLC����״̬")
    EN("PLC Run Status")},

    //LG_STR aszPlcProgramStatus[LG_NUM] =
    {CN("PLC������Ϣ")
    EN("PLC Program Status")},

    //LG_STR aszBtnRun[LG_NUM] =
    {CN("����")
    EN("Run")},

    //LG_STR aszBtnStop[LG_NUM] =
    {CN("ֹͣ")
    EN("Stop")},

    //LG_STR aszBtnExport[LG_NUM] =
    {CN("����")
    EN("Export")},

    //-------------------------------------------------------------------------
    // �����##AX
    //-------------------------------------------------------------------------
//0001;XYZA
	//LG_STR nszParAxisSet[9][LG_NUM] =
    {CN("�����������") //300+
    EN("Axis unit settings")},
	{CN("DIA 0/1:�뾶/ֱ�����")
    EN("DIA 0/1:radius/diameter program")},
	{CN("ROT 0/1:ֱ����/��ת�Ṧ����Ч")
    EN("ROT 0/1:Straight/Rotation axis enable")},
	{CN("RRL 0/1:������겻ѭ��/��һ���ƶ���ѭ��")
    EN("RRL 0/1:Rel-coor. not/rounded by the amount of one rotation")},
    {CN("RABS 0/1:��ת�����ָ��ͽ�/�ͽ���ת")
    EN("RABS 0/1:Rotation axis abs-command Rotate in not/short path")},
    {CN("RABG 0/1:��ת�����ָ���ƶ��������ֵ/��ָ�����")
    EN("RABG 0/1:Rotation axis abs-command Rotate-dir in rel-position/sign")},
    {CN("RABM 0/1:��ת�����ָ���ƶ���������/����һ��ȡģ")
    EN("RABM 0/1:Rotation axis abs-command move-dist not/modulo with one rotation")},
	{CN("")
	EN("")},
	{CN("HID 0/1:��������ʾ/����ʾ")
    EN("HID 0/1:Axis show/hide")},
//0002;XYZA
	//LG_STR nszParServoSet[9][LG_NUM] =
	{CN("�ŷ�/��������������")
	EN("Servo/Motor settings")},
	{CN("SVAC 0/1:�ŷ�����Ϊ����/����")
    EN("SVAC 0/1:Servo alarm is normal open/close")},
	{CN("SSS 0/1:��/����S�ͺ��ٶ�ƽ������")
	EN("SSS 0/1:Disable/Enable S curve post-speed-smooth")},
	{CN("MD 0/1:����ƶ�������/��")
	EN("MD 0/1:motor move forward/backward")},
	{CN("JD 0/1:�ֶ��ƶ�������/��(����PLCʱ��Ч)")
    EN("JD 0/1:Jog move forward/backward(Embeded)")},
	{CN("SVPT 0/1:�ŷ�Ϊ����+����/AB����")
    EN("SVPT 0/1:Dir+pulse/AB pulse signal for servo")},
	{CN("GREX 0/1:ָ����ӳ��ֱȲ�/ʹ����չģʽ")
	EN("GREX 0/1:Command Elec-gear not/use extand mode")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0003;XYZA
	//LG_STR nszParFbServoSet[9][LG_NUM] =
	{CN("�ŷ�/��������������")
	EN("Servo/Motor feedback settings")},
	{CN("MFD 0/1:�������������/��")
	EN("MFD 0/1:motor feedback forward/backward")},
	{CN("FGE 0/1:��/ʹ�÷������ֱ�")
    EN("FGE 0/1:Disable/enable feedback Gear Ratio")},
	{CN("FIPC λ�õ�λ���ʱ,��ⷴ��λ��/ָ��λ��")
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
	{CN("����������(1~3:XYZ,4~6:ABC,101:X1,165:XA)")
	EN("Axis name(1~3:XYZ,4~6:ABC)")},
//0013;XYZA
     //LG_STR nszParAxisFixPt[LG_NUM] =
    {CN("����С����λ��")
     EN("Axis float point number")},
//0014;XYZA
    //LG_STR nszParAxisPhyNo[LG_NUM] =
	{CN("�������ַ���(������)")
    EN("Axis physical address no.")},
//0034;XYZA
    //LG_STR nszParAxisPulseEncFbPort[LG_NUM] =
	{CN("�������������������(����������Ч)")
    EN("Axis pulse encoder feedback port(Not bus axis)")},
//0022;XYZA
    //LG_STR nszParAxisMotorCmdPulseRes[LG_NUM] =
	{CN("������һȦָ��������")
    EN("Axis motor command pulse of a circle")},
//0032;XYZA
    //LG_STR nszParAxisEncCircleRes[LG_NUM] =
	{CN("������һȦ����������")
    EN("Axis motor feedback pulse of a circle")},

    //LG_STR nszParAxisSVFbRounds[LG_NUM] =
	{CN("�����ŷ�����ѭ��Ȧ��(0:��ѭ��ֱ�����)")
    EN("Axis servo feedback cycle rounds(0:overflow)")},

    //LG_STR nszParAxisRotFbRes[LG_NUM] =
	{CN("����(��ת��ʱ)����λ��ѭ���ֱ���")
    EN("Rotation axis feedback resolution")},
//0016;XYZA
    //LG_STR nszParBasicAxisType[LG_NUM] =
	{CN("�����ڻ�������ϵ�µ�������")
    EN("Setting of each axis in the basic coordinate")},

    //1200+
	//LG_STR nszParMaxJogF[LG_NUM] =
	{CN("�ֶ�����ٶ�")
	EN("Max. Jog Feed")},
//0110;XYZA
	//LG_STR aszrRapidF[LG_NUM] =
	{CN("G00�����ٶ�(mm/min)")
	EN("G00 rapid feed(mm/min)")},
//0111;XYZA
	//LG_STR aszrRapidF0[LG_NUM] =
	{CN("G00����F0���ٶ�(mm/min)")
	EN("G00 rapid feed F0(mm/min)")},
//0113;XYZA
	//LG_STR nszParRapidFL[LG_NUM] =
	{CN("G00���ټӼ���ʱ�ĵ���FL(mm/min)")
	EN("G00 rapid acc./dec low feed FL(mm/min)")},
//0122;XYZA
	//LG_STR nszParAxisCutTimeCnst[LG_NUM] =
	{CN("���������Ӽ���ʱ�䳣��(ms)")
	EN("Axis cut time const(ms)")},
//0132;XYZA
    //LG_STR nszParJogTimeCnst[LG_NUM] =
    {CN("�ֶ������Ӽ���ʱ�䳣��(ms)")
     EN("Acc./dec. time constant In Jog(ms)")},
//0125;XYZA
	//LG_STR nszrDryRunF[LG_NUM] =
	{CN("�������ٶ�(mm/min)")
	EN("Dry run feed(mm/min)")},
//0120;XYZA
	//LG_STR aszrCutF[LG_NUM] =
	{CN("�����ٶ�����(mm/min)")
	EN("Cut max feed(mm/min)")},
//0131;XYZA
	//LG_STR aszrRapidJogF[LG_NUM] =
	{CN("�ֶ������ٶ�(mm/min)")
	EN("Jog rapid feed(mm/min)")},
//0130;XYZA
	//LG_STR aszrJogF[LG_NUM] =
	{CN("�ֶ��ٶ�(mm/min)")
	EN("Jog Feed(mm/min)")},
//0133;XYZA
	//LG_STR aszrJogFL[LG_NUM] =
	{CN("�ֶ��Ӽ���ʱ�ĵ���FL(mm/min)")
	EN("Jog Acc./dec low feed FL(mm/min)")},

	//LG_STR nszParCutFL[LG_NUM] =
	{CN("�����Ӽ���ʱ�ĵ���FL(mm/min)")
	EN("Cut Acc./dec low feed FL(mm/min)")},
//0123;XYZA
    //LG_STR nszParFeedOvMax[LG_NUM] =
    {CN("�Զ�����������������")
     EN("Feed override max")},

	//LG_STR aszrAxisCutF[LG_NUM] =
	{CN("������������ٶ�(mm/min)")
	EN("Cut feed of axis(mm/min)")},
//0112;XYZA
	//LG_STR aszwRapidTimeCnst[LG_NUM] =
	{CN("G00���ټӼ���ʱ�䳣��(ms)")
	EN("G00 rapid time const(ms)")},
//0114;XYZA
	//LG_STR aszwRapidJerkTime[LG_NUM] =
	{CN("G00���ټӼ���ʱ��(ms)")
	EN("G00 rapid jerk time(ms)")},
//0121;XYZA
	//LG_STR aszwCutTimeCnst[LG_NUM] =
	{CN("�����Ӽ���ʱ�䳣��(ms)")
	EN("Cut feed time const(ms)")},
//0140;XYZA
    //LG_STR nszParRotAxisSpeedRatio[LG_NUM] =
    {CN("��ת���ٶ�������ϵ��")
     EN("Rotation axis speed ratio")},
//0141;XYZA
    //LG_STR nszParSCurvePostSpeedSmoothRatio[LG_NUM] =
    {CN("S�ͺ��ٶ�ƽ��ϵ��")
     EN("S-Curve post-speed-smooth ratio")},
//0020;XYZA
	//LG_STR nszParAxisCMR[LG_NUM] =
	{CN("����ָ����ӳ��ֱȱ���ϵ��(�Ӷ��ֲ����)")
	EN("Axis CMR(slave gear)")},
//0021;XYZA
	//LG_STR nszParAxisCMD[LG_NUM] =
	{CN("����ָ����ӳ��ֱȷ�Ƶϵ��(��������)")
	EN("Axis CMD(motor gear))")},
//0030;XYZA
	//LG_STR nszParAxisMulFb[LG_NUM] =
	{CN("���ᷴ�����뱶��ϵ��(�����������)")
	EN("Axis feedback multiplier(encoder gear)")},
//0031;XYZA
	//LG_STR nszParAxisDivFb[LG_NUM] =
	{CN("���ᷴ�������Ƶϵ��(�Ӷ�������)")
	EN("Axis feedback divisor(slave gear)")},
//0060;XYZA
    //LG_STR nszParDAlmDI[LG_NUM] =
    {CN("�����ŷ����������")
    EN("Servo alarm input port")},
//0061;XYZA
    //LG_STR nszParDEnableDO[LG_NUM] =
    {CN("�����ŷ�ʹ�������")
    EN("Servo Enable output port")},
//0062;XYZA
    //LG_STR nszParDEnableP[LG_NUM] =
	{CN("����ʹ�ܴ򿪻�ر�ָ���P���")
	EN("Servo Enable or disable command P No.")},
//0063;XYZA
    //LG_STR nszParMBrakeDO[LG_NUM] =
    {CN("����������բ�����")
    EN("Axis brake-off output port")},
//0064;XYZA
    //LG_STR nszParCoorSetupDlyTime[LG_NUM] =
    {CN("�����ŷ�ʹ��ʱ,���꽨����ʱ(ms)")
    EN("Axis coordinate setup delay when servo-on from enable")},
//0065;XYZA
    //LG_STR nszParMBrakeDlyTime[LG_NUM] =
    {CN("�����ŷ�ʹ�ܵ�����բ��ʱ(ms)")
    EN("Axis brake-off delay from enable")},
//0050;XYZA
    //LG_STR nszParAxisPosLoopGain[LG_NUM] =
    {CN("�����ŷ�λ�û�����(KP)(1/s)")
    EN("Axis servo position loop gain(KP)(1/s)")},
//0070;XYZA
    //LG_STR nszParRpdInPosDist[LG_NUM] =
    {CN("����G00��λ������")
    EN("Axis G00 in-position-dist")},
//0071;XYZA
    //LG_STR nszParCutInPosDist[LG_NUM] =
    {CN("����������λ������")
    EN("Axis cut in-position-dist")},

    //LG_STR nszParMaxLoad[LG_NUM] =
    {CN("�������������")
    EN("Axis max load limit")},
//0073;XYZA
    //LG_STR nszParCutLoadMax[LG_NUM] =
    {CN("��������ʱ�ĸ�������")
    EN("Axis cut load max")},
//0074;XYZA
    //LG_STR nszParLoadMaxTime[LG_NUM] =
    {CN("���ᵽ�︺���������ʱ��(ms)")
    EN("Axis cut load max time(ms)")},

    //-------------------------------------------------------------------------
    // �ݾ�/��϶����##COMPS
    //-------------------------------------------------------------------------
//0200;1
    //LG_STR nszParCompNcSet[9][LG_NUM] =
    {CN("�ݾ�/��϶����ϵͳ����")
    EN("Pitch error/Gap compensation Nc settings")},
    {CN("UPIM 0/1:�ݾಹ�����뵥λΪum/mm")
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
    {CN("�����϶����/�ݾಹ����������")
     EN("Pitch error/Gap compensation axis settings")},
    {CN("GAP 0/1:�����϶�����ر�/��")
    EN("GAP 0/1:Gap compensation disable/enable")},
	{CN("PEC 0/1:�ݾಹ���ر�/��")
    EN("PEC 0/1:Pitch error compensation disable/enable")},
	{CN("PCER 0/1:�ݾ������ϵ���Ч/�������Ч")
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
    {CN("�����϶������(mm)")
     EN("Gap compensation value(mm)")},
//0211;XYZA
    //LG_STR nszParGapCompMaxF[LG_NUM] =
    {CN("�����϶�ٶ�����")
     EN("Gap compensation max feed")},
//0213;XYZA
    //LG_STR nszParGapCompFL[LG_NUM] =
    {CN("�����϶����ʱ����ʼ�ٶ�FL")
     EN("Gap compensation start feed")},
//0212;XYZA
    //LG_STR nszParGapCompTCnst[LG_NUM] =
    {CN("�����϶�Ӽ���ʱ�䳣��(ms)")
     EN("Gap compensation time constant(ms)")},
//0220;XYZA
    //LG_STR nszParPitchCompNoRef[LG_NUM] =
    {CN("�ο�����ݾಹ�����")
     EN("Ref-position pitch compensation number")},
//0221;XYZA
    //LG_STR nszParPitchCompNoSmallest[LG_NUM] =
    {CN("��Сλ�õ��ݾಹ�����")
     EN("Smallest pitch compensation position number")},
//0222;XYZA
    //LG_STR nszParPitchCompNoLargest[LG_NUM] =
    {CN("���λ�õ��ݾಹ�����")
     EN("Largest pitch compensation position number")},
//0224;XYZA
    //LG_STR nszParPitchCompInterval[LG_NUM] =
    {CN("�ݾಹ��������������")
     EN("Interval between pitch error compensation positions")},
//0223;XYZA
    //LG_STR nszParPitchCompRatio[LG_NUM] =
    {CN("�ݾಹ���������ʰٷֱ�")
     EN("Pitch Compensation ratio percent")},
//0225;XYZA
    //LG_STR nszParPitchCompMaxF[LG_NUM] =
    {CN("�ݾಹ���ٶ�����")
     EN("Pitch compensation max feed")},
//0227;XYZA
    //LG_STR nszParPitchCompFL[LG_NUM] =
    {CN("�ݾಹ����ʼ�ٶ�FL")
     EN("Pitch compensation start feed")},
//0226;XYZA
    //LG_STR nszParPitchCompTCnst[LG_NUM] =
    {CN("�ݾಹ���Ӽ���ʱ�䳣��(ms)")
     EN("Pitch compensation time constant(ms)")},

    //-------------------------------------------------------------------------
    // ����##REF ##HOME
    //-------------------------------------------------------------------------
//0300;XYZA
	//LG_STR nszParChnRefSet[9][LG_NUM] =
    {CN("�����������")
    EN("Zero return settings")},
	{CN("MZ1 0/1:�ֶ�����1������/����������")
    EN("MZ1 0/1:Manual zero return one press/press continuously")},
	{CN("NWZ 0/1:�����,ʹ��G54~G59��������ϵ/��ʹ��(ʹ������ϵ��ز���)")
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
	{CN("����ϵ�������")
	EN("coor. settings")},
	{CN("PZSW 0/1:�ϵ�ʱ,�õ���ǰ����ϵ/G54����ϵ������������")
	EN("PZSW 0/1:Use power-off coor. system/G54 coor.sys setup work coor.")},
	{CN("")
	EN("")},
	{CN("GOFS 0/1:ʹ��/����ʹ��G92��G50ƫ��")
    EN("GOFS 0/1:Use/not use G92 or G50")},
	{CN("RLC 0/1:��λ�����/���G52")
    EN("RLC 0/1:No clear/clear G52 when RESET")},
	{CN("FLC 0/1:M30��M02ʱ�����/���G52")
	EN("FLC 0/1:No clear/clear G52 when M30 or M02")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0302;XYZA
	//LG_STR nszParAxisRefSet[9][LG_NUM] =
    {CN("��������������")
    EN("Axis zero return settings")},
	{CN("ZEN 0/1:���㹦����Ч/��Ч")
    EN("ZEN 0/1:Disable/Enable axis zero return")},
	{CN("ANZ 0/1:�״��Զ����в���Ҫ/��Ҫ����")
    EN("ANZ 0/1:No /need zero return when auto run first")},
	{CN("ZDR 0/1:����/�������")
	EN("ZDR 0/1:Zero return direction")},
	{CN("ZSC 0/1:������ٿ���Ϊ����/����")
    EN("ZSC 0/1:DEC signal is normal open/close")},
	{CN("ZSR 0/1:�����������겻����/����")
    EN("ZSR 0/1:")},
	{CN("ZSA 0/1:������������ϵ����/����")
	EN("ZSA")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0310;XYZA
	//LG_STR nszParRefType[LG_NUM] =
	{CN("������㷽ʽ(0:A,1:B,2:C,3:D)")
	EN("Home type(0:A,1:B,2:C,3:D)")},
//0311;XYZA
	//LG_STR nszParRefF[LG_NUM] =
	{CN("�����������ٶ�(mm/min)")
	EN("Home rapid feed(mm/min)")},
//0313;XYZA
	//LG_STR nszParRefFL[LG_NUM] =
	{CN("�������Ӽ���ʱ�ĵ���FL(mm/min)")
	EN("Home low feed(mm/min)")},
//0312;XYZA
	//LG_STR nszParRefTimeCnst[LG_NUM] =
	{CN("�������Ӽ���ʱ�䳣��(ms)")
	EN("Axis Home time const(ms)")},

	//LG_STR nszParRefPosCoor[LG_NUM] =
	{CN("�ο��������������")
	EN("value of the ref. machine position")},
//0411;XYZA
	//LG_STR nszParRefPosCoor2[LG_NUM] =
	{CN("�ڶ��ο����������")
	EN("value of the 2 ref. machine position")},
//0412;XYZA
	//LG_STR nszParRefPosCoor3[LG_NUM] =
	{CN("�����ο����������")
	EN("value of the 3 ref. machine position")},
//0413;XYZA
	//LG_STR nszParRefPosCoor4[LG_NUM] =
	{CN("���Ĳο����������")
	EN("value of the 4 ref. machine position")},
//0410;XYZA
	//LG_STR nszParRefPosAbs[LG_NUM] =
	{CN("���������Զ��趨�ľ�������ֵ")
	EN("ref. postion Absolute Coor.")},
//0023;XYZA
	//LG_STR nszParAxisLeadLen[LG_NUM] =
	{CN("������Ϊֱ����ʱ,˿�˵���")
	EN("Axis screw lead when linear axis")},
//0024;XYZA
	//LG_STR nszParAxisRotAmount[LG_NUM] =
	{CN("������Ϊ��ת��ʱ,һ���ƶ���")
	EN("Move amount of one rotation when rotation axis")},
//0025;XYZA
	//LG_STR nszParAxisSpeedMax[LG_NUM] =
	{CN("������ת������(rpm)")
	EN("Axis motor rotate speed max(rpm)")},
//0314;XYZA
    //LG_STR nszParDecDI[LG_NUM] =
    {CN("���������ٿ��������")
    EN("Home Dec. input port")},
//0320;XYZA
    //LG_STR nszParDecToPcMin[LG_NUM] =
    {CN("������ٿ��ص������С����")
    EN("Distance from DEC to PC min.")},
//0321;XYZA
    //LG_STR nszParDecToPcMax[LG_NUM] =
    {CN("������ٿ��ص����������")
    EN("Distance from DEC to PC max.")},

    //-------------------------------------------------------------------------
    //��λ ##LIM ##500+
    //-------------------------------------------------------------------------
	//LG_STR nszParLimSet[9][LG_NUM] =
	{CN("��λ�������")
	EN("position limit setting")},
	{CN("PCL 0/1:��/�����ƶ�ǰ����λ���")
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
	{CN("������λ����")
	EN("Axes position limit setting")},
	{CN("SLM1 0/1:��1�����λ������Ч/��Ч")
	EN("SLM1 0/1:Software position limit 1 disable/enable")},
	{CN("HLM 0/1:�ر�/��Ӳ����λ����")
	EN("HLM 0/1:Close/Open hardware position limit")},
	{CN("SLMZ 0/1:����ʱ,����λ��Ч/��Ч")
	EN("SLMZ 0/1:Softare position limit disable/enable when home")},
	{CN("HLMZ 0/1:����ʱ,Ӳ��λ��Ч/��Ч")
    EN("HLMZ 0/1:Hardware position limit disable/enable when home")},
	{CN("SLWC 0/1:�û���/���������������λ")
	EN("SLWC 0/1:Use machine/work coor. for soft. limit")},
	{CN("")
	EN("")},
	{CN("PHLC 0/1:����Ӳ����λΪ����/����")
	EN("PHLC 0/1:Positive hard limit open/close type")},
	{CN("NHLC 0/1:����Ӳ����λΪ����/����")
	EN("PHLC 0/1:Negtive hard limit open/close type")},
//0502;XYZA
	//LG_STR nszParAxisLimSwSet[9][LG_NUM] =
	{CN("��������λ��������")
	EN("Axes position limit switch setting")},
	{CN("SLM2 0/1:��2�����λ������Ч/��Ч")
	EN("SLM2 0/1:Software position limit 2 disable/enable")},
	{CN("SLM3 0/1:��3�����λ������Ч/��Ч")
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
	{CN("����λ�����������")
	EN("position limit control setting")},
	{CN("PSLM 0/1:�ƶ�ǰ����λ���ر�/����")
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
	{CN("��������λ����1")
	EN("Positive soft limit positon 1")},
//0511;XYZA
	//LG_STR nszParNegSoftLim1[LG_NUM] =
	{CN("��������λ����1")
	EN("Negtive soft limit positon 1")},
//0512;XYZA
    //LG_STR nszParPosSoftLim2[LG_NUM] =
	{CN("��������λ����2")
	EN("Positive soft limit positon 2")},
//0513;XYZA
	//LG_STR nszParNegSoftLim2[LG_NUM] =
	{CN("��������λ����2")
	EN("Negtive soft limit positon 2")},
//0514;XYZA
    //LG_STR nszParPosSoftLim3[LG_NUM] =
	{CN("��������λ����3")
	EN("Positive soft limit positon 3")},
//0515;XYZA
	//LG_STR nszParNegSoftLim3[LG_NUM] =
	{CN("��������λ����3")
	EN("Negtive soft limit positon 3")},
//0520;XYZA
    //LG_STR nszParPHardLimDI[LG_NUM] =
    {CN("����Ӳ��λ�����")
    EN("Positive position limit input port")},
//0521;XYZA
    //LG_STR nszParNHardLimDI[LG_NUM] =
    {CN("����Ӳ��λ�����")
    EN("Negtive position limit input port")},

	//LG_STR nszParChnUnit[9][LG_NUM] =
    {CN("��λ�������")
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
     // �������##SP ##400
    //-------------------------------------------------------------------------
//1000;123
    //LG_STR nszParSpdlsSet[9][LG_NUM] =
    {CN("�������ͨ������")
     EN("Spindles settings")},
	{CN("����")
    EN("RSV")},
	{CN("SCSU 0/1:USER1����������/��������1�ٶ�λ���л�")
	EN("SCSU 0/1:USER1 key User define/use as spindl CS swich")},
	{CN("SISO 0/1:����㶯����������1�㶯/׼ͣ")
	EN("SISO 0/1:spindle INC key no/use as SOR")},
	{CN("SPNE 0/1:ͨ���ڶ����Ṧ����Ч/��Ч")
	EN("SPNE 0/1:Multiple spindle disable/enable")},
	{CN("CTSA 0/1:�����ӹ�ʱ,�����/�������ת�ٵ���")
	EN("CTSA 0/1:No/detect spdinle speed arrive when cutting")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1001;123
    //LG_STR nszParEachSpdlSet[9][LG_NUM] =
    {CN("�������������")
     EN("Spindle settings")},
    {CN("SSRV 0/1:�ٶ����巽��(������),����/����")
    EN("SSRV 0/1:Speed pulse dir(or bus mode), positive/negtive")},
	{CN("����")
	EN("RSV")},
	{CN("SSTR 0/1:�������������ܹر�/��")
    EN("SSTR 0/1:Star-Triangle start off/on")},
	{CN("SSTCE 0/1:��������ʱ,��/���ʵ��ת���ѵ���")
	EN("SSTCE 0/1:NO/Check actual speed arriving when spindle start")},
	{CN("SSPCE 0/1:����ֹͣʱ,��/���ʵ��ת�ٵ���ֹͣת��")
	EN("SSPCE 0/1:NO/Check actual speed stop when spindle stop")},
	{CN("SSAH 0/1:����ֹͣʱ,ģ�������������/����")
	EN("SSAH 0/1:NO/Hold analog output when spindle stop")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1002;123
	//LG_STR nszParSpdlInterlockSet[9][LG_NUM] =
	{CN("���ụ���������")
	EN("Spindle lock settings")},
	{CN("SPQP 0/1:��������ʱ,�����/���"CHUNK_CN"�н�")
    EN("SPQP 0/1:Not/detect chuck when spindle start")},
	{CN("SPTS 0/1:��������ʱ,�����/���β����")
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
    {CN("������/�ŷ������������������")
     EN("Spindle feedback settings")},
	{CN("SEFD 0/1:�������������������/��")
	EN("SEFD 0/1:spindle encoder feedback forward/backward")},
	{CN("SALC 0/1:���ᱨ��Ϊ����/����")
    EN("SALC 0/1:Spindle alarm signal is normal open/close")},
	{CN("SPCC 0/1:����λ��ģʽ���Ϊ����/����")
	EN("SPCC 0/1:position mode is normal open/close")},
	{CN("SPSC 0/1:�����ٶ�ģʽ���Ϊ����/����")
	EN("SPSC 0/1:speed mode is normal open/close")},
	{CN("SORL 0/1:����׼ͣ���Ϊ����/����")
	EN("SORL 0/1:orientation is normal open/close")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("SCEZ 0/1:����ʽ����,�����/������ź�(���ŷ�֧��)")
    EN("SCEZ 0/1:Bus spindle,NO/Check zero signal(Need servo support)")},
//1004;123
    //LG_STR nszParSpdlCsSet[9][LG_NUM] =
    {CN("�������ٶ�/λ���������")
     EN("Spindle C/S settings")},
	{CN("SCPO 0/1:�����ϵ�ʱ�����ٶ�/λ��ģʽ")
	EN("SCPO 0/1:In speed/position mode when power-on")},
	{CN("SCCP 0/1:����λ��ģʽ��ɺ�/��������")
	EN("SCCP 0/1:No/Set coor. when CS position mode finish")},
	{CN("SPAZ 0/1:����λ�÷�ʽ����תֹͣʱ,��/ֹͣ������0λ��")
	EN("SPAZ 0/1:NO/Stop at SOR postion when spindle rotation stop in postion mode")},
	{CN("SCOP 0/1:�����һ��λ��ģʽʱ,��/ִ������׼ͣ")
	EN("SCOP 0/1:No/Execute orientation when CS position mode first time")},
	{CN("SCOR 0/1:����ÿ��λ��ģʽʱ,��/ִ������׼ͣ")
	EN("SCOR 0/1:No/Execute orientation when CS position mode every time")},
	{CN("CSRS 0/1:����λ��ģʽ��λʱ,��/�л����ٶ�ģʽ")
	EN("CSRS 0/1:No/change to speed mode when CS position mode RESET")},
	{CN("CSPFR 0/1:����λ��ģʽʱ,��/��ֹ��������תָ��")
	EN("CSPFR 0/1:Can/Can't execute rotate command when CS position mode")},
	{CN("")
	EN("")},
//1005;1
    //LG_STR nszParSpdlORSet[9][LG_NUM] =
    {CN("������׼ͣ�������")
     EN("Spindle orientation settings")},
	{CN("SORC 0/1:����׼ͣ��ɺ�/��������")
	EN("SORC 0/1:No/Set coor. when orientation finish")},
	{CN("SORRS 0/1:����׼ͣ��λʱ,��/�ر�׼ͣ���")
	EN("SORRS 0/1:No/Close orientation output when orientation RESET")},
	{CN("SORWS 0/1:����׼ͣʱ,���ȴ�/�ȵȴ�����ֹͣ���")
	EN("SORWS 0/1:No/Wait spindle stop finish when orientation")},
	{CN("SORWE 0/1:����׼ͣʱ,���ȴ�/�ȵȴ����������ֹͣ")
	EN("SORWE 0/1:No/Wait spindle encoder stop finish when orientation")},
	{CN("SORP 0/1:����׼ͣ���Ϊ��ƽ/�����ź�")
	EN("SORK 0/1:orientation output is level/pulse")},
	{CN("SORQS 0/1:����׼ͣʱ,����ͣ����/����ģʽ")
	EN("SORQS 0/1:Stop spdindle normally/stop quickly finish when orientation")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1100;123
    //LG_STR nszParSpdlLockSet[9][LG_NUM] =
    {CN("��������ס�������")
     EN("Spindle Lock settings")},
	{CN("SLKPO 0/1:�����ϵ�ʱ�����ɿ�/����״̬")
	EN("SLKPO 0/1:Spindle unlock/lock when power-on")},
	{CN("RSTSL 0/1:��λʱ,���᲻�ɿ�/�ɿ�")
	EN("RSTSL 0/1:NO/unclamp when RESET")},
	{CN("M30SL 0/1:M30ʱ,���᲻�ɿ�/�ɿ�")
	EN("M30SL 0/1:NO/unclamp when M30")},
	{CN("SURA 0/1:���ᶨλʱ,��/�Զ��ɿ�����")
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
	{CN("����������ͨ����")
	EN("Channel of spindle")},
//1011;123
    //LG_STR nszParSpdlType[LG_NUM] =
    {CN("����������(0:�ٶ�(DA������),1:���ٻ���,2:λ��,3:CS�ŷ�����)")
    EN("Spindle type(0:Speed(DA OR pulse),1:Gear shift,2:Position,3:CS Spindle)")},
//1012;123
	//LG_STR nszParSpdlDAPhyNo[LG_NUM] =
	{CN("�����ٶȿ���ʱ�������ַ���(DA�������źŵ�������)")
	EN("Phy No. of spindle in speed mode(DA OR pulse)")},
//1013;123
	//LG_STR nszParSpdlCsAxisNo[LG_NUM] =
	{CN("����λ�ÿ���ʱ�����(ͨ����)")
	EN("Axis No. of spindle in position mode")},
//1014;123
    //LG_STR nszParSpdlEncoderPhyNo[LG_NUM] =
    {CN("��������������ַ���(������)")
     EN("physical addr of spindle encoder")},
//1015;123
    //LG_STR nszParEncRes[LG_NUM] =
    {CN("����������")
     EN("Resolution of spindle encoder")},
//1020;123
    //LG_STR nszParEncMul[LG_NUM] =
    {CN("���������ӳ��ֱ�,�����������")
     EN("spindle encoder ratio,encoder gear num.")},
//1021;123
    //LG_STR nszParEncDiv[LG_NUM] =
    {CN("���������ӳ��ֱ�,��������")
     EN("spindle encoder ratio,spdindle gear num")},

    //LG_STR nszParSpdlADOfs[LG_NUM] =
    {CN("����ģ������ĵ�ѹ�Ĳ�����")
     EN("Offset value for spindle analog")},
//1025;123
    //LG_STR nszParMaxSpdlSpeed1[LG_NUM] =
    {CN("�����1�������ת��(rpm)")
    EN("Maximum spindle speed for gear 1(rpm)")},
//1026;123
    //LG_STR nszParMaxSpdlSpeed2[LG_NUM] =
    {CN("�����2�������ת��(rpm)")
    EN("Maximum spindle speed for gear 2(rpm)")},
//1027;123
    //LG_STR nszParMaxSpdlSpeed3[LG_NUM] =
    {CN("�����3�������ת��(rpm)")
    EN("Maximum spindle speed for gear 3(rpm)")},
//1028;123
    //LG_STR nszParMaxSpdlSpeed4[LG_NUM] =
    {CN("�����4�������ת��(rpm)")
    EN("Maximum spindle speed for gear 3(rpm)")},
//1055;123
    //LG_STR nszParG96MinSpdlSpeed[LG_NUM] =
    {CN("G96ʱ���������ת��")
    EN("Min. spdl speed in G96 mode")},
//1074;123
    //LG_STR nszSpdlPulseModeTimeCnst[LG_NUM] =
    {CN("����λ��ģʽʱ�Ӽ���ʱ�䳣��(ms)")
    EN("Spdl position mode time const(ms)")},
//1150;123
    //LG_STR nszParSpdlGearNum[LG_NUM] =
    {CN("���ᵵλ��")
    EN("spindle gear num")},
//1091;123
	//LG_STR nszParDOSpdlEN[LG_NUM] =
	{CN("����ʹ�������")
	EN("Spindle EN DO")},
//1090;123
	//LG_STR nszParDOSpdlENMode[LG_NUM] =
	{CN("����ʹ�����ģʽ(0:�ϵ�ʹ��,1:�ٶ�ģʽʹ��,2:�ٶȼ�λ��ʹ��)")
    EN("Spindle EN mode(0:Power-on,1:Speed,2:Speed and Postion)")},
//1030;123
	//LG_STR nszParDOSpdlFR[LG_NUM] =
	{CN("������ת�����")
	EN("Spindle forward DO")},
//1031;123
	//LG_STR nszParDOSpdlRV[LG_NUM] =
	{CN("���ᷴת�����")
	EN("Spindle reverse DO")},
//1032;123
	//LG_STR nszParDOSpdlSP[LG_NUM] =
	{CN("����ֹͣ�����")
	EN("Spindle stop DO")},
//1033;123
	//LG_STR nszParDOSpdlBRK[LG_NUM] =
	{CN("����ֹͣʱ�ƶ������")
	EN("Spindle brake DO when stopping")},
//1050;123
	//LG_STR nszParDISpdlDotFwd[LG_NUM] =
	{CN("�����������㶯�����")
	EN("Spindle forward Inc.Move DI")},
//1051;123
	//LG_STR nszParDISpdlDotRev[LG_NUM] =
	{CN("������ᷴ��㶯�����")
	EN("Spindle reverse Inc.Move DI")},
//1045;123
	//LG_STR nszParDISpdlFwd[LG_NUM] =
	{CN("���������ת�����")
	EN("Spindle forward DI")},
//1046;123
	//LG_STR nszParDISpdlRev[LG_NUM] =
	{CN("������ᷴת�����")
	EN("Spindle reverse DI")},
//1047;123
	//LG_STR nszParDISpdlStp[LG_NUM] =
	{CN("�������ֹͣ�����")
	EN("Spindle stop DI")},
//1052;123
	//LG_STR nszParSpdlDotSpeed[LG_NUM] =
	{CN("����㶯ת��(rpm)")
	EN("Spindle Inc.Move speed(rpm)")},
//1110;123
	//LG_STR nszParDOSpdlLock[LG_NUM] =
	{CN("���������н������(M12)")
	EN("Spindle lock DO(M12)")},
//1114;123
	//LG_STR nszParDISpdlLockFin[LG_NUM] =
	{CN("���������н���λ�������")
	EN("Spindle lock finish DI")},
//1111;123
	//LG_STR nszParDOSpdlUnlock[LG_NUM] =
	{CN("���������ɿ������(M13)")
	EN("Spindle unlock DO(M13)")},
//1115;123
	//LG_STR nszParDISpdlUnlockFin[LG_NUM] =
	{CN("���������ɿ���λ�������")
	EN("Spindle unlock finish DI")},
//1112;123
	//LG_STR nszParDIExSpdlLock[LG_NUM] =
	{CN("����������������")
	EN("Extern spindle lock DI")},
//1113;123
	//LG_STR nszParDIExSpdlUnlock[LG_NUM] =
	{CN("������������ɿ������")
	EN("Extern spindle unlock DI")},
//1123;123
	//LG_STR nszParTimeSpdlLockFinWait[LG_NUM] =
	{CN("����������λ�ȴ�ʱ������(ms)")
	EN("Spindle lock fin max-wait-time(ms)")},
//1122;123
	//LG_STR nszParDlyTimeBeforeSpdlLock[LG_NUM] =
	{CN("��������ǰ��ʱʱ��(ms)")
	EN("Delay time before spindle lock(ms)")},
//1124;123
	//LG_STR nszParDlyTimeAfterSpdlLock[LG_NUM] =
	{CN("������������ʱʱ��(ms)")
	EN("Delay time after spindle lock(ms)")},
//1125;123
	//LG_STR nszParTimeSpdlUnlockFinWait[LG_NUM] =
	{CN("���������ɿ���λ�ȴ�ʱ������(ms)")
	EN("Spindle unlock fin max-wait-time(ms)")},
//1126;123
	//LG_STR nszParTimeSpdlUnlockDly[LG_NUM] =
	{CN("���������ɿ���ʱʱ��(ms)")
	EN("Spindle unlock delay time(ms)")},
//1120;123
	//LG_STR nszParTimeSpdlWaitStopMaxTime[LG_NUM] =
	{CN("��������ǰ�ȴ�����ֹͣʱ������(ms)")
	EN("Spindle lock wait stop max time(ms)")},
//1121;123
    //LG_STR nszParSpdlLockActSpeed[LG_NUM] =
    {CN("�������������ʵ��ת������")
    EN("Low spdl actual speed as when spindle lock")},
//1034;123
	//LG_STR nszParTimeSpdlST[LG_NUM] =
	{CN("����������ʱʱ��(ms)")
	EN("Spindle start delay time(ms)")},
//1035;123
	//LG_STR nszParTimeSpdlRVD[LG_NUM] =
	{CN("���ỻ����ʱʱ��(ms)")
	EN("Spindle change dir. delay time(ms)")},
//1036;123
	//LG_STR nszParTimeSpdlSP[LG_NUM] =
	{CN("����ֹͣ��ʱʱ��(ms)")
	EN("Spindle stop delay time(ms)")},
//1037;123
	//LG_STR nszParTimeSpdlBRK[LG_NUM] =
	{CN("����ֹͣʱ�ƶ���ʱʱ��(ms)")
	EN("Spindle brake delay time for stop(ms)")},
//1038;123
	//LG_STR nszParTimeSpdlFRO[LG_NUM] =
	{CN("������ת���ʱ��(ms)")
	EN("Spindle forward time(ms)")},
//1039;123
	//LG_STR nszParTimeSpdlRVO[LG_NUM] =
	{CN("���ᷴת���ʱ��(ms)")
	EN("Spindle reverse time(ms)")},
//1040;123
	//LG_STR nszParTimeSpdlSPO[LG_NUM] =
	{CN("����ֹͣ���ʱ��(ms)")
	EN("Spindle stop time(ms)")},
//1041;123
	//LG_STR nszParTimeSpdlBRKO[LG_NUM] =
	{CN("�����ƶ����ʱ��(ms)")
	EN("Spindle brake time(ms)")},
//1151;1
	//LG_STR nszParDOS01[LG_NUM] =
	{CN("S01�����")
	EN("S01 DO")},
//1152;1
	//LG_STR nszParDOS02[LG_NUM] =
	{CN("S02�����")
	EN("S02 DO")},
//1153;1
	//LG_STR nszParDOS03[LG_NUM] =
	{CN("S03�����")
	EN("S03 DO")},
//1154;1
	//LG_STR nszParDOS04[LG_NUM] =
	{CN("S04�����")
	EN("S04 DO")},
//1155;1
	//LG_STR nszParTimeGearChgIntv[LG_NUM] =
	{CN("��λ���л���ʱʱ��(ms)")
	EN("Gear change Interval time(ms)")},
//1156;1
	//LG_STR nszParTimeGearChgFin[LG_NUM] =
	{CN("���������ʱʱ��(ms)")
	EN("Gear change fin time(ms)")},
//1160;123
	//LG_STR nszParDOStarTypeStart[LG_NUM] =
	{CN("�������������")
	EN("Star-type start DO")},
//1161;123
	//LG_STR nszParDOTriangleTypeStart[LG_NUM] =
	{CN("���������������")
	EN("Triangle-type start DO")},
//1162;123
	//LG_STR nszParTimeStarTypeStart[LG_NUM] =
	{CN("������������ʱ��(ms)")
	EN("Star-type hold time(ms)")},
//1163;123
	//LG_STR nszParTimeStarTriangleIntv[LG_NUM] =
	{CN("�������ͼ��л�ʱ��(ms)")
	EN("Star Triangle interval time(ms)")},
//1070;123
	//LG_STR nszParDOSpdlPosMode[LG_NUM] =
	{CN("����λ��ģʽ�����(M18)")
	EN("Spindle postion mode DO")},
//1075;123
	//LG_STR nszParDOSpdlSpeedMode[LG_NUM] =
	{CN("�����ٶ�ģʽ�����(M17)")
	EN("Spindle speed mode DO")},
//1071;123
	//LG_STR nszParDISpdlPosModeFin[LG_NUM] =
	{CN("����λ��ģʽ��λ�����")
	EN("Spindle postion mode FIN DI")},
//1076;123
	//LG_STR nszParDISpdlSpeedModeFin[LG_NUM] =
	{CN("�����ٶ�ģʽ��λ�����")
	EN("Spindle speed mode FIN DI")},
//1072;123
	//LG_STR nszParTimeSpdlPosFinWait[LG_NUM] =
	{CN("����λ��ģʽ��λ�źŵȴ�ʱ������(ms)")
	EN("Spindle position mode FIN wait time max(ms)")},
//1077;123
	//LG_STR nszParTimeSpdlSpeedFinWait[LG_NUM] =
	{CN("�����ٶ�ģʽ��λ�źŵȴ�ʱ������(ms)")
	EN("Spindle speed mode FIN wait time max(ms)")},
//1073;123
	//LG_STR nszParTimeSpdlPosFinDly[LG_NUM] =
	{CN("����λ��ģʽ��λ��ʱʱ��(ms)")
	EN("Spindle position mode FIN delay(ms)")},
//1078;123
	//LG_STR nszParTimeSpdlSpeedFinDly[LG_NUM] =
	{CN("�����ٶ�ģʽ��λ��ʱʱ��(ms)")
	EN("Spindle speed mode FIN delay(ms)")},
//1080;123
	//LG_STR nszParDOSpdlOrientation[LG_NUM] =
	{CN("����׼ͣ�����(M19)")
	EN("Spindle orientation DO(M19)")},
//1081;123
	//LG_STR nszParDISpdlOrientationFin[LG_NUM] =
	{CN("����׼ͣ��������")
	EN("Spindle orientation FIN DI")},
//1082;123
	//LG_STR nszParTimeSpdlOrientationFinWait[LG_NUM] =
	{CN("����׼ͣ����źŵȴ�ʱ������(ms)")
	EN("Spindle orientation FIN wait time max(ms)")},
//1083;123
	//LG_STR nszParTimeSpdlOrientationFinDly[LG_NUM] =
	{CN("����׼ͣ�����ʱʱ��(ms)")
	EN("Spindle orientation FIN delay time(ms)")},

	//LG_STR nszParTimeSpdlOrientationOut[LG_NUM] =
	{CN("����׼ͣ���ʱ��(ms)")
	EN("Spindle forward output time(ms)")},
//1084;123
	//LG_STR nszParSpdlOrientationFinCoor[LG_NUM] =
	{CN("����׼ͣ��ɺ������ֵ")
	EN("Coor. of spindle orientation FIN")},
//1095;123
	//LG_STR nszParDISpdlAlm[LG_NUM] =
	{CN("���ᱨ�������")
	EN("Spindle Alarm DI")},
//3465;1
	//LG_STR nszParDISpdlOvA[LG_NUM] =
	{CN("���ᱶ�ʿ���*1�����")
	EN("Spindle override DI *1")},
//3467;1
	//LG_STR nszParDISpdlOvB[LG_NUM] =
	{CN("���ᱶ�ʿ���*2�����")
	EN("Spindle override DI *2")},
//3468;1
	//LG_STR nszParDISpdlOvE[LG_NUM] =
	{CN("���ᱶ�ʿ���*4�����")
	EN("Spindle override DI *4")},
//3469;1
	//LG_STR nszParDISpdlOvF[LG_NUM] =
	{CN("���ᱶ�ʿ���*8�����")
	EN("Spindle override DI *8")},
//3336;1
	//LG_STR nszParJogKeyDef[LG_NUM] =
	{CN("�����ֶ��ƶ����Զ���(0:��,1~3:XYZ,4~6:ABC)")
	EN("Axis jog key set(0:undef,1~3:XYZ,4~6:ABC)")},
//3470;1
    //LG_STR nszParHPSTSet[9][LG_NUM] =
    {CN("Һѹ�����������")
    EN("hydraulic pressure start settings")},
    {CN("STKHP 0/1:ѭ������ʱ,�����/���Һѹ����")
	EN("STKHP 0/1:NO/CHECK hydraulic pressure when cycle start")},
	{CN("SPKHP 0/1:��������ʱ,�����/���Һѹ����")
	EN("SPKHP 0/1:NO/CHECK hydraulic pressure when spindle start")},
	{CN("HPPO 0/1:�ϵ�ʱ,��/����Һѹ")
	EN("HPPO 0/1:NO/Open hydraulic pressure when power-on")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("U1HP 0/1:User1������Һѹ����,�ر�/��")
	EN("U1HP 0/1:User1 control hydraulic pressure, disable/enable")},
//3471;1
	//LG_STR nszParDOHPST[LG_NUM] =
	{CN("Һѹ���������")
	EN("hydraulic pressure start DO")},
//3472;1
	//LG_STR nszParDIHPST[LG_NUM] =
	{CN("���Һѹ���������")
	EN("external hydraulic pressure start DI")},
//3473;1
	//LG_STR nszParDiHPSTFin[LG_NUM] =
	{CN("Һѹ��������������")
	EN("hydraulic pressure start fin Di")},
//3474;1
	//LG_STR nszParFinWaitTimeHPST[LG_NUM] =
	{CN("Һѹ��������źŵȴ�ʱ������(ms)")
	EN("hydraulic pressure start FIN wait time max(ms)")},
//1200;1
    //LG_STR nszParSpdlSyncSet[9][LG_NUM] =
    {CN("����ͬ����1���������")
     EN("Spindle synchronization group 1 settings")},
	{CN("SSYNP 0/1:������λ�÷�ʽʱ,�Ӷ���ͨ�����������������/λ��������п���")
	EN("SSYNP 0/1:Slave spindle sync controled by encoder input/position output from master")},
	{CN("SSES 0/1:������������ʽ����ͬ��ʱ,�Ӷ��᲻/���������ٶ�ƽ��")
	EN("SSES 0/1:Slave spindle Disable/Enable feedrate smooth when spindle encoder sync.")},
	{CN("SSYNR 0/1:��ָ��Rʱ,�ӵ�ǰλ��/0λ��ͬ��")
    EN("SSYNR 0/1:Sync from current/0 position when R not specified")},
	{CN("SSYSD 0/1:�Ӷ�������/�����˶�")
    EN("SSYSD 0/1:Slave axis positive/negtive move")},
	{CN("SSYPI 0/1:�Ӷ���ʹ��P����/ʹ��PI����")
	EN("SSYPI 0/1:Slave axis use P control/PI control")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1201;1
    //LG_STR nszParSpdlSync2Set[9][LG_NUM] =
    {CN("����ͬ����2���������")
     EN("Spindle synchronization group 2 settings")},
	{CN("SSYNP 0/1:������λ�÷�ʽʱ,�Ӷ���ͨ�����������������/λ��������п���")
	EN("SSYNP 0/1:Slave spindle sync controled by encoder input/position output from master")},
	{CN("SSES 0/1:������������ʽ����ͬ��ʱ,�Ӷ��᲻/���������ٶ�ƽ��")
	EN("SSES 0/1:Slave spindle Disable/Enable feedrate smooth when spindle encoder sync.")},
	{CN("����")
	EN("RSV")},
	{CN("SSYSD 0/1:�Ӷ�������/�����˶�")
    EN("SSYSD 0/1:Slave axis positive/negtive move")},
	{CN("SSYPI 0/1:�Ӷ���ʹ��P����/ʹ��PI����")
	EN("SSYPI 0/1:Slave axis use P control/PI control")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1202;1
    //LG_STR nszParSpdlSync3Set[9][LG_NUM] =
    {CN("����ͬ����3���������")
     EN("Spindle synchronization group 3 settings")},
	{CN("SSYNP 0/1:������λ�÷�ʽʱ,�Ӷ���ͨ�����������������/λ��������п���")
	EN("SSYNP 0/1:Slave spindle sync controled by encoder input/position output from master")},
	{CN("SSES 0/1:������������ʽ����ͬ��ʱ,�Ӷ��᲻/���������ٶ�ƽ��")
	EN("SSES 0/1:Slave spindle Disable/Enable feedrate smooth when spindle encoder sync.")},
	{CN("����")
	EN("RSV")},
	{CN("SSYSD 0/1:�Ӷ�������/�����˶�")
    EN("SSYSD 0/1:Slave axis positive/negtive move")},
	{CN("SSYPI 0/1:�Ӷ���ʹ��P����/ʹ��PI����")
	EN("SSYPI 0/1:Slave axis use P control/PI control")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1210;123
	//LG_STR nszParSpdlSyncSlvSpeedMax[LG_NUM] =
	{CN("����ͬ����ʽʱ,�Ӷ������ת��(rpm)")
	EN("Spindle sync slave spindle speed max.(rpm)")},
//1211;123
	//LG_STR nszParSpdlSyncSlvTimeCnst[LG_NUM] =
	{CN("����ͬ����ʽʱ,�Ӷ���ʱ�䳣��")
	EN("Spindle sync. slave spindle time const")},
//1212;123
    //LG_STR nszParSpdlSyncSlvFilterRatio[LG_NUM] =
     {CN("����ͬ����ʽʱ,�Ӷ����ٶ�ƽ��ϵ��(0~100),0:���˲�")
     EN("Spindle sync, slave axis feed filter ratio (0~100),0:close")},

//1214;123
    //LG_STR nszParSpdlSyncLoadLimit[LG_NUM] =
    {CN("����ͬ����ʽʱ,�����Ḻ������(0~300,0:������)")
    EN("Load limit when spindle sync.(0~300,0:No limit)")},
//1220;1
	//LG_STR nszParSpdlSyncMaster1[LG_NUM] =
	{CN("����ͬ����1��,���������")
	EN("Spindle sync. group 1,master spindle No.")},
//1221;1
	//LG_STR nszParSpdlSyncSlave1[LG_NUM] =
	{CN("����ͬ����1��,�Ӷ������")
	EN("Spindle sync. group 1,slave spindle No.")},
//1222;1
	//LG_STR nszParSpdlSyncMaster2[LG_NUM] =
	{CN("����ͬ����2��,���������")
	EN("Spindle sync. group 2,master spindle No.")},
//1223;1
	//LG_STR nszParSpdlSyncSlave2[LG_NUM] =
	{CN("����ͬ����2��,�Ӷ������")
	EN("Spindle sync. group 2,slave spindle No.")},
//1224;1
	//LG_STR nszParSpdlSyncMaster3[LG_NUM] =
	{CN("����ͬ����3��,���������")
	EN("Spindle sync. group 3,master spindle No.")},
//1225;1
	//LG_STR nszParSpdlSyncSlave3[LG_NUM] =
	{CN("����ͬ����3��,�Ӷ������")
	EN("Spindle sync. group 3,slave spindle No.")},
    //-------------------------------------------------------------------------
    // ���̲���##QP
    //-------------------------------------------------------------------------
//1300;123
	//LG_STR nszParQPSet[9][LG_NUM] =
	{CN(CHUNK_CN"�������")
	EN("Chuck settings")},
	{CN("CLPP 0/1:�н����Ϊ��ƽ/����")
	EN("CLPP 0/1:Clamp pulse output")},
	{CN("UCLP 0/1:�ɿ����Ϊ��ƽ/����")
	EN("UCLP 0/1:Unclamp pulse output")},
    {CN("QPCFC 0/1:�н���λΪ����/�����ź�")
	EN("QPCFC 0/1:Clamp fin is normal open/close")},
    {CN("QPUFC 0/1:�ɿ���λΪ����/�����ź�")
	EN("QPUFC 0/1:Unclamp fin is normal open/close")},
	{CN("QPD 0/1:"CHUNK_CN"�ڼ�/���")
    EN("QPD 0/1:Chuck clamp in/out")},
    {CN("XQPH 0/1:��Ӽн��ɿ�Ϊ����/�����ź�")
	EN("XQPH 0/1:External Clamp and unclamp input signal is pulse/level")},
    {CN("")
	EN("")},
	{CN("")
    EN("")},
//1301;123
	//LG_STR nszParQPLockSet[9][LG_NUM] =
	{CN(CHUNK_CN"�����������")
	EN("Chuck lock settings")},
	{CN("QPSL 0/1:����ת��ʱ(ͨ�����״̬�ж�),����/����ִ���Զ��ɿ�")
	EN("QPSL 0/1:Unclamp not/execute when spindle rotate(output status)")},
	{CN("MQPSL 0/1:����ת��ʱ(ͨ�����״̬�ж�),����/����ִ���ֶ��ɿ�")
	EN("MQPSL 0/1:Manual Unclamp not/execute when spindle rotate(output status)")},
	{CN("MQPOP 0/1:�Զ�����ʱ����Ӧ/��Ӧ�ֶ��н��ɿ�")
	EN("MQPOP 0/1:Manual m10 and m11 not/execute when automaic run")},
	{CN("UQEU 0/1:�ɿ�ָ��ʱ,��/�ȴ�����ת�ٵ�������ת��")
	EN("UQEU 0/1:not/wait spindle speed under allowed speed when unclamp command")},
	{CN("")
    EN("")},
	{CN("QPST 0/1:�ɿ�״̬ʱ,��/����ѭ����������")
	EN("QPST 0/1:not/execute cycle start when chuck unclamp state")},
	{CN("UQEC 0/1:�ɿ�״̬ʱ,��/�������ת�ٳ�����������")
	EN("UQEC 0/1:not/check spindle speed over allowed speed when unclamp state")},
	{CN("")
    EN("")},
//1302;123
	//LG_STR nszParQPPowerOnSet[9][LG_NUM] =
	{CN(CHUNK_CN"�ϵ��������")
	EN("Chuck power-on settings")},
	{CN("QPRS 0/1:�ϵ�ʱ,���̲�/�ָ��ϵ�ǰ��״̬")
    EN("QPRS 0/1:NOT/recover state to power-off when power-on")},
	{CN("QPON 0/1:�ϵ�ʱ,���̲�/����н�")
    EN("QPON 0/1:NOT/OUT clamp when power-on")},
	{CN("QPOF 0/1:�ϵ�ʱ,���̲�/����ɿ�")
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
	{CN(CHUNK_CN"�н������")
	EN("Spindle clamp DO")},
//1311;123
	//LG_STR nszParDOSpdlUnclp[LG_NUM] =
	{CN(CHUNK_CN"�ɿ������")
	EN("Spindle unclamp DO")},
//1320;123
	//LG_STR nszParDIExSpdlClp[LG_NUM] =
	{CN("���"CHUNK_CN"�н������")
	EN("Extern M10/M11 DI")},
//1321;123
	//LG_STR nszParDIExSpdlUclp[LG_NUM] =
	{CN("���"CHUNK_CN"�ɿ������")
	EN("Extern M11 DI")},
//1322;123
	//LG_STR nszParDISpdlClpFin[LG_NUM] =
	{CN(CHUNK_CN"�н���λ�����")
	EN("Spindle clamp FIN DI")},
//1323;123
	//LG_STR nszParDISpdlUnclpFin[LG_NUM] =
	{CN(CHUNK_CN"�ɿ���λ�����")
	EN("Spindle unclamp FIN DI")},
//1330;123
	//LG_STR nszParTimeM10FinWait[LG_NUM] =
	{CN(CHUNK_CN"�н���λ�źŵȴ�ʱ������(ms)")
	EN("Clamp FIN wait max time(ms)")},
//1331;123
	//LG_STR nszParTimeM11FinWait[LG_NUM] =
	{CN(CHUNK_CN"�ɿ���λ�źŵȴ�ʱ������(ms)")
	EN("Unclamp FIN wait max time(ms)")},
//1132;123
	//LG_STR nszParTimeM10FinDly[LG_NUM] =
	{CN(CHUNK_CN"�н���λ��ʱʱ��(ms)")
	EN("Clamp FIN delay time(ms)")},
//1333;123
	//LG_STR nszParTimeM11FinDly[LG_NUM] =
	{CN(CHUNK_CN"�ɿ���λ��ʱʱ��(ms)")
	EN("Unclamp delay time(ms)")},
//1340;123
    //LG_STR nszParM11SpdlSpeedMax[LG_NUM] =
    {CN(CHUNK_CN"�ɿ�����ʵ��ת������")
    EN("Actual speed max for Unclamp")},
//1341;123
    //LG_STR nszParM11SpdlArriveWaitTime[LG_NUM] =
    {CN(CHUNK_CN"�ɿ�ʱ,�ȴ������������ת�ٵ�ʱ������")
    EN("Max wait time of spindle speed arrive when spindle Unclamp.")},
//1056;123
    //LG_STR nszParSpdlStopActSpeed[LG_NUM] =
    {CN("��Ϊ����ֹͣ��ʵ��ת������")
    EN("Low spdl actual speed as stop")},

    //LG_STR nszParSpdlSpeedArriveRatio[LG_NUM] =
    {CN("��Ϊ����ת���ѵ����ʵ��ת�ٱ���")
    EN("Spdl actual speed ratio as speed arrive when start")},
//1057;123
    //LG_STR nszParSpdlSpeedArriveRange[LG_NUM] =
    {CN("����ת�ٵ����ⴰ�ڷ�Χ(�ٷֱ�)")
    EN("Spindle speed arrive check range(percent)")},
//1058;1
    //LG_STR nszParSpdlArriveWaitTimeStart[LG_NUM] =
    {CN("��������ʱ,�ȴ�����ת�ٵ���ʱ������(=0:����)")
    EN("Max time of spindle speed arrive when spindle start.(=0:ignore)")},
//1059;1
    //LG_STR nszParSpdlArriveWaitTimeCut[LG_NUM] =
    {CN("�����ӹ�ʱ,�ȴ�����ת�ٵ���ʱ������(=0:����)")
    EN("Max time of spindle speed arrive when cut.(=0:ignore)")},
    //-------------------------------------------------------------------------
    // β������##TS ##TAIL
    //-------------------------------------------------------------------------
//1400;123
	//LG_STR nszParTailstockSet[9][LG_NUM] =
	{CN("β���������")
	EN("Tailstock settings")},
	{CN("M78P 0/1:β�������Ϊ��ƽ/����")
    EN("M78P 0/1:Tailstock forward output type:level/pulse")},
	{CN("M79P 0/1:β�������Ϊ��ƽ/����")
	EN("M79P 0/1:Tailstock backward output type:level/pulse")},
    {CN("TSFFC 0/1:β������λΪ����/�����ź�")
    EN("TSFFC 0/1:Tailstock forward FIN input type:normal open/close")},
    {CN("TSBFC 0/1:β���˵�λΪ����/�����ź�")
    EN("TSBFC 0/1:Tailstock backward FIN input type:normal open/close")},
	{CN("TSRST 0/1:��λʱ,β�����˻�/�˻�")
	EN("TSRST 0/1:Tailstock NOT/backward when RESET")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1401;123
	//LG_STR nszParTailstockLockSet[9][LG_NUM] =
	{CN("β�������������")
	EN("Tailstock settings")},
	{CN("TSSL 0/1:��������ʱ����/����ִ��β����")
	EN("TSSL 0/1:NOT/allowed tail quit when spdl rotating")},
	{CN("MTSOP 0/1:�Զ�����ʱ����Ӧ/��Ӧ�ֶ�β��")
	EN("MTSOP 0/1:manual tail operation NOT/allowed when running")},
	{CN("MTSSL 0/1:��������ʱ����/����ִ���ֶ�β����")
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
	{CN("β���ϵ��������")
	EN("Chuck power-on settings")},
	{CN("TSRS 0/1:�ϵ�ʱ,β����/�ָ��ϵ�ǰ��״̬")
    EN("TSRS 0/1:NOT/recover tail-state to power-off when power-on")},
	{CN("TSON 0/1:�ϵ�ʱ,��/���β����")
    EN("TSON 0/1:NOT/OUT tail-forward when power-on")},
	{CN("TSOF 0/1:�ϵ�ʱ,��/���β����")
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
	{CN("β���������")
	EN("Tailstock forward DO")},
//1411;123
	//LG_STR nszParDOTSB[LG_NUM] =
	{CN("β���������")
	EN("Tailstock backward DO")},
//1420;123
	//LG_STR nszParDIExTailstockFR[LG_NUM] =
	{CN("���β���������")
	EN("Extern Tailstock forward DI")},
//1421;123
	//LG_STR nszParDIExTailstockBW[LG_NUM] =
	{CN("���β���������")
	EN("Extern Tailstock backward DI")},
//1422;123
	//LG_STR nszParDITailstockFRFin[LG_NUM] =
	{CN("β������λ�����")
	EN("Tailstock forward FIN DI")},
//1423;123
	//LG_STR nszParDITailstockBWFin[LG_NUM] =
	{CN("�����˵�λ�����")
	EN("Tailstock backward FIN DI")},
//1430;123
	//LG_STR nszParTimeM78FinWait[LG_NUM] =
	{CN("β������λ�źŵȴ�ʱ������(ms)")
	EN("Tailstock forward FIN wait max time(ms)")},
//1431;123
	//LG_STR nszParTimeM79FinWait[LG_NUM] =
	{CN("β���˵�λ�źŵȴ�ʱ������(ms)")
	EN("Tailstock backward FIN wait max time(ms)")},
//1432;123
	//LG_STR nszParTimeM78FinDly[LG_NUM] =
	{CN("β������λ��ʱʱ��(ms)")
	EN("ailstock forward finish delay time(ms)")},
//1433;123
	//LG_STR nszParTimeM79FinDly[LG_NUM] =
	{CN("β���˵�λ��ʱʱ��(ms)")
	EN("Tailstock backward finish delay time(ms)")},

    //-------------------------------------------------------------------------
    // ���ܲ��� ##TOOL
    //-------------------------------------------------------------------------
//1500;123
	//LG_STR nszParTSet[9][LG_NUM] =
	{CN("�����������")
	EN("Tool settings")},
	{CN("TCHK 0/1:������ɺ�,�����/��⵶��")
    EN("TCHK 0/1:Not/check tool number after tool change")},
	{CN("TE00 0/1:������/����0�ŵ�")
	EN("TE00 0/1:disable/enable tool number 0")},
	{CN("TBC 0/1:������,�����������ڻ���ǰ/������")
	EN("TBC 0/1:After tool change,Relative-coor. base on before/after tool change")},
	{CN("TCC 0/1:Ŀ�굶�ź͵�ǰ����ͬʱ,��ִ��/��Ȼִ�л���")
	EN("TCC 0/1:Target equal to current,NO/Execute tool change")},
	{CN("TECK 0/1:���Ŵ���ʵʱ���,�ر�/��")
    EN("TECK 0/1:tool number error check,OFF/ON")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1501;123
	//LG_STR nszParTDI1[9][LG_NUM] =
	{CN("������������1")
	EN("Tool DI settings 1")},
	{CN("T08C 0/1:T08Ϊ����/�����ź�")
    EN("T08C 0/1:T08 is normal open/close")},
	{CN("T07C 0/1:T07Ϊ����/�����ź�")
    EN("T07C 0/1:T07 is normal open/close")},
	{CN("T06C 0/1:T06Ϊ����/�����ź�")
    EN("T06C 0/1:T06 is normal open/close")},
	{CN("T05C 0/1:T05Ϊ����/�����ź�")
    EN("T05C 0/1:T05 is normal open/close")},
	{CN("T04C 0/1:T04Ϊ����/�����ź�")
    EN("T04C 0/1:T04 is normal open/close")},
	{CN("T03C 0/1:T03Ϊ����/�����ź�")
    EN("T03C 0/1:T03 is normal open/close")},
	{CN("T02C 0/1:T02Ϊ����/�����ź�")
    EN("T02C 0/1:T02 is normal open/close")},
	{CN("T01C 0/1:T01Ϊ����/�����ź�")
    EN("T01C 0/1:T01 is normal open/close")},
//1502;123
	//LG_STR nszParTDI2[9][LG_NUM] =
	{CN("������������2")
	EN("Tool DI settings 2")},
	{CN("TCPE 0/1:�����/���TCP�ź�")
	EN("TCPE 0/1:No/detect TCP signal")},
	{CN("TCPC 0/1:TCPΪ����/�����ź�")
    EN("TCPC 0/1:TCP is normal open/close")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("T12C 0/1:T12Ϊ����/�����ź�")
    EN("T12C 0/1:T12 is normal open/close")},
	{CN("T11C 0/1:T11Ϊ����/�����ź�")
    EN("T11C 0/1:T11 is normal open/close")},
	{CN("T10C 0/1:T10Ϊ����/�����ź�")
    EN("T10C 0/1:T10 is normal open/close")},
	{CN("T09C 0/1:T09Ϊ����/�����ź�")
    EN("T09C 0/1:T09 is normal open/close")},
//1510;123
	//LG_STR nszParPlcTType[LG_NUM] =
	{CN("��������(0:�ŵ�,1:�綯����)")
	EN("Tool turret type")},
//1511;123
	//LG_STR nszParPlcTNum[LG_NUM] =
	{CN("��������")
	EN("Tool number")},
//1520;123
	//LG_STR nszParT01DI[LG_NUM] =
	{CN("T01�����")
	EN("T01 DI")},
//1521;123
	//LG_STR nszParT02DI[LG_NUM] =
	{CN("T02�����")
	EN("T02 DI")},
//1522;123
	//LG_STR nszParT03DI[LG_NUM] =
	{CN("T03�����")
	EN("T03 DI")},
//1523;123
	//LG_STR nszParT04DI[LG_NUM] =
	{CN("T04�����")
	EN("T04 DI")},
//1524;123
	//LG_STR nszParT05DI[LG_NUM] =
	{CN("T05�����")
	EN("T05 DI")},
//1525;123
	//LG_STR nszParT06DI[LG_NUM] =
	{CN("T06�����")
	EN("T06 DI")},
//1526;123
	//LG_STR nszParT07DI[LG_NUM] =
	{CN("T07�����")
	EN("T07 DI")},
//1527;123
	//LG_STR nszParT08DI[LG_NUM] =
	{CN("T08�����")
	EN("T08 DI")},
//1528;123
	//LG_STR nszParT09DI[LG_NUM] =
	{CN("T09�����")
	EN("T09 DI")},
//1529;123
	//LG_STR nszParT10DI[LG_NUM] =
	{CN("T10�����")
	EN("T10 DI")},
//1530;123
	//LG_STR nszParT11DI[LG_NUM] =
	{CN("T11�����")
	EN("T11 DI")},
//1531;123
	//LG_STR nszParT12DI[LG_NUM] =
	{CN("T12�����")
	EN("T12 DI")},
//1532;123
	//LG_STR nszParTCPDI[LG_NUM] =
	{CN("TCP�����")
	EN("TCP DI")},
//1540;123
	//LG_STR nszParDOTFR[LG_NUM] =
	{CN("������ת�����")
	EN("Tool turret CW DO")},
//1541;123
	//LG_STR nszParDOTRV[LG_NUM] =
	{CN("���ܷ�ת�����")
	EN("Tool turret CCW DO")},
//1542;123
	//LG_STR nszParDOTCLP[LG_NUM] =
	{CN("�������������")
	EN("Tool turret clamp DO")},
//1543;123
	//LG_STR nszParDOTUCLP[LG_NUM] =
	{CN("�����ɿ������")
	EN("Tool turret unclamp DO")},
//1550;123
	//LG_STR nszParTimeMaxT[LG_NUM] =
	{CN("����ʱ������(ms)")
	EN("Max. time for tool change(ms)")},
//1551;123
	//LG_STR nszParTimeTRVD[LG_NUM] =
	{CN("����ʱ����ת�����ʱ(ms)")
	EN("Delay time for Tool backward(ms)")},
//1552;123
	//LG_STR nszParTimeMaxTRVF[LG_NUM] =
	{CN("����ʱ��ת���յ�TCPʱ������(ms)")
	EN("Max. time for Tool backward to TCP(ms)")},
//1553;123
	//LG_STR nszParTimeDlyTRVF[LG_NUM] =
	{CN("��λ����(TCP)��ת����ʱ��(ms)")
	EN("Delay time for TCP to stop backward(ms)")},

    //-------------------------------------------------------------------------
    // �� ##LUB
    //-------------------------------------------------------------------------
//1800;123
	//LG_STR nszParLutSet[9][LG_NUM] =
	{CN("���������")
	EN("Lubricate settings")},
	{CN("LUBC 0/1:�󻬱���Ϊ����/����")
	EN("LUBC 0/1:Lubricate alarm normal open/close")},
	{CN("LASP 0/1:�󻬱���ʱ��ͣ/ͣ�ӹ�")
	EN("LASP 0/1:NOT/STOP cycle operation when lub alarm")},
	{CN("LBPO 0/1:�����󻬹ر�/��")
	EN("LBPO 0/1:Power-on lub disable/enable")},
	{CN("MLBOP 0/1:�Զ�����ʱ,����Ӧ/��Ӧ�ֶ���")
	EN("MLBOP 0/1:Manual lub not/execute when cycle start")},
	{CN("LAST 0/1:�󻬱�����ͣ�ӹ�ʱ,��/���������ӹ�")
	EN("LAST 0/1:START/NOT-START cycle operation when lub alarm NO stop cycle")},
	{CN("LUBRST 0/1:��λʱ,���ر�/�ر���")
	EN("LUBRST 0/1:NOT/CLOSE lub when RESET")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//1810;123
	//LG_STR nszParDILubAlm[LG_NUM] =
	{CN("�󻬱��������")
	EN("Lubricate alarm DI")},
//1811;123
	//LG_STR nszParDOLub[LG_NUM] =
	{CN("�������")
	EN("Lubricate DO")},
//1820;123
	//LG_STR nszParTimeM32Dly[LG_NUM] =
	{CN("M32��ʱʱ��(ms)")
	EN("M32 delay time(ms)")},
//1821;123
	//LG_STR nszParTimeM33Dly[LG_NUM] =
	{CN("M33��ʱʱ��(ms)")
	EN("M33 delay time(ms)")},
//1822;123
	//LG_STR nszParTimeLubO[LG_NUM] =
	{CN("�����ʱ��(ms)")
	EN("Lubricate time(ms)")},
//1823;123
	//LG_STR nszParTimeAutoLubIntervel[LG_NUM] =
	{CN("�Զ��󻬼��ʱ��(ms)")
	EN("Auto. lubricate interval time(ms)")},

    //-------------------------------------------------------------------------
    // ��м�� ##CHIP
    //-------------------------------------------------------------------------
//3480;1
	//LG_STR nszParChipSet[9][LG_NUM] =
	{CN("��м�������")
	EN("chip conveyer settings")},
	{CN("CHPRST 0/1:��λʱ,���ر�/�ر���м��")
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
	{CN("U1CHP 0/1:User1������м������,�ر�/��")
	EN("U1CHP 0/1:User1 control chip conveyer, disable/enable")},
//3481;1
	//LG_STR nszParDOChipCW[LG_NUM] =
	{CN("��м����ת�����")
	EN("Chip conveyer forward DO")},
//3482;1
	//LG_STR nszParDOChipCCW[LG_NUM] =
	{CN("��м����ת�����")
	EN("Chip conveyer reverse DO")},
//3483;1
	//LG_STR nszParDIChipCW[LG_NUM] =
	{CN("�����м����ת�����")
	EN("Chip conveyer forward DI")},
//3484;1
	//LG_STR nszParDIChipCCW[LG_NUM] =
	{CN("�����м����ת�����")
	EN("Chip conveyer reverse DI")},
//3485;1
	//LG_STR nszParDIChipStop[LG_NUM] =
	{CN("�����м��ֹͣ�����")
	EN("Chip conveyer stop DI")},
//3486;1
	//LG_STR nszParTimeChipO[LG_NUM] =
	{CN("��м�����ʱ��(ms)")
	EN("Chip conveyer out time(ms)")},
//3487;1
	//LG_STR nszParTimeAutoChipCWIntervel[LG_NUM] =
	{CN("��м���Զ���ת���ʱ��(ms)")
	EN("Chip conveyer Auto-CW interval time(ms)")},

    //-------------------------------------------------------------------------
    // ����##HD ##hand 600
    //-------------------------------------------------------------------------
//0600;1
	//LG_STR nszParHndlSet[9][LG_NUM] =
	{CN("��������")
	EN("Handle wheel settings")},
	{CN("HDLD 0/1:���ַ���Ϊ����/����")
	EN("HDLD 0/1:handle direction is positive/negtive")},
	{CN("HDLX 0/1:����Ϊ��ͨ����/�ֳֵ�Ԫ")
    EN("HDLX 0/1:handle is normal/external")},
	{CN("HDLR 0/1:�ر�/�����ֻ���")
	EN("HDLR 0/1:Disable/Enable handle retrace")},
	{CN("HDLI 0/1:���ֽ���ʱ,��������ٶȵ����岻����/����")
    EN("HDLI 0/1:Not ignore/ignore pulse when handle over-speed")},
	{CN("HDLDI 0/1:����ѡ�����ƶ�ʱ,���ַ���������岻����/����")
	EN("HDLDI 0/1:Reverse pulse of handle Not ignore/ignore when handle axis moving")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//0610;XYZA
	//LG_STR nszParHndlF[LG_NUM] =
	{CN("���������ٶ�����")
	EN("handle max. Feed ")},
//0611;XYZA
	//LG_STR nszParHndlFL[LG_NUM] =
	{CN("�������ּӼ���ʱ�ĵ���FL(mm/min)")
	EN("handle Acc./dec low feed FL(mm/min)")},
//0612;XYZA
    //LG_STR nszParHndlTimeCnst[LG_NUM] =
    {CN("�������ּӼ���ʱ�䳣��")
     EN("Handle Acc./dec. time constant")},
//0615;XYZA
    //LG_STR nszParHndlUnitMul[LG_NUM] =
    {CN("���������ƶ�������λ����")
     EN("Handle unit multiplying factor")},
//0616;1
    //LG_STR nszParHndlOvMax[LG_NUM] =
    {CN("���ֱ�����������")
     EN("Handle override max")},
//0617;1
    //LG_STR nszParHndlRunRpdOvMax[LG_NUM] =
    {CN("���������п����ƶ���������")
     EN("Handle test run rapid override max")},
//0620;XYZA
	//LG_STR nszParDIHndlAxisSelect[LG_NUM] =
	{CN("��������ѡ�������")
	EN("Handle axis select DI")},
//0621;1
	//LG_STR nszParDIHndlX1[LG_NUM] =
	{CN("���ֱ���*1�����")
	EN("Handle feed amount *1 DI")},
//0622;1
	//LG_STR nszParDIHndlX10[LG_NUM] =
	{CN("���ֱ���*10�����")
	EN("Handle feed amount *10 DI")},
//0623;1
	//LG_STR nszParDIHndlX100[LG_NUM] =
	{CN("���ֱ���*100�����")
	EN("Handle feed amount *100 DI")},
//0624;1
	//LG_STR nszParDIHndlX1000[LG_NUM] =
	{CN("���ֱ���*1000�����")
	EN("Handle feed amount *1000 DI")},
//0625;1
	//LG_STR nszParDIHndlMode[LG_NUM] =
	{CN("����ģʽѡ�������")
	EN("Handle mode select DI")},
//0630;XYZA
	//LG_STR nszParHndlIntrF[LG_NUM] =
	{CN("���������ж��ٶ�����")
	EN("handle-Intr max. Feed ")},
//0631;XYZA
    //LG_STR nszParHndlIntrTimeCnst[LG_NUM] =
    {CN("���������жϼӼ���ʱ�䳣��")
     EN("Handle-Intr Acc./dec. time constant")},
//0626;1
	//LG_STR nszParDIHndlIntrModeEnable[LG_NUM] =
	{CN("�����ж�ģʽʹ�������")
	EN("Handle-Intr mode enable DI")},
    //-------------------------------------------------------------------------
    // ��ʾ/���� ##DISP ##1000
    //-------------------------------------------------------------------------
//2000;1
	//LG_STR nszParDispSet[9][LG_NUM] =
	{CN("��ʾ�������")
	EN("Display settings")},
	{CN("MDIA 0/1:����MDIʱ,��/���¶���MDI")
    EN("MDIA 0/1:No/Update multi-line MDI when single-line MDI")},
	{CN("MDIC 0/1:ִ�к����/�������MDI")
	EN("MDIC 0/1:No/Clear multi-line MDI when FINISH")},
	{CN("MDIR 0/1:Mdi����,��λ�����/�������MDI")
    EN("MDIR 0/1:No/Clear multi-line MDI when RESET in MDI screen")},
	{CN("")
	EN("")},
	{CN("ALMS 0/1:����ʱ���л�/�л�����������")
    EN("ALMS 0/1:No/Shift to alarm screen when alarm")},
	{CN("EDTS 0/1:ģʽ�л���EDITʱ,���л�/�л���EDIT����")
    EN("EDTS 0/1:No/Change to EDIT screen when change to EDIT mode")},
	{CN("MDIS 0/1:λ�ý���ģʽ�л���MDIʱ,��/�л���MDI����")
    EN("MDIS 0/1:No/Change to MDI screen when change to MDI mode in POS screen")},
	{CN("")
	EN("")},
//2001;1
    //LG_STR nszParPowerOnDispSet[9][LG_NUM] =
    {CN("�ϵ�ʱ��ʾ�������")
    EN("Power-On display settings")},
    {CN("WCPO 0/1:�ϵ����������/����")
    EN("WCPO 0/1:No/Clear workpiece count when power")},
    {CN("TCPO 0/1:�ϵ�����ʱ�䲻����/����")
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
    {CN("����༭�������")
    EN("Function settings")},
    {CN("SEQ 0/1:�ر�/�򿪱༭ʱ�Զ������к�")
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
    {CN("���п����������")
    EN("Run control settings")},
    {CN("RCPA 0/1:�ر�/�򿪼Ƽ���������")
    EN("RCPA 0/1:Disable/Enable check for parts number arriving")},
    {CN("CSCT 0/1:�Ƽ���/ֹͣѭ��ʱ���ʱ")
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

    //GROUP:����
//2003;1
    //LG_STR nszParOperSwitchSet[9][LG_NUM] =
    {CN("��������/��������")//0+
    EN("Operation switch/enable settings")},
    {CN("PARSW 0/1:����������Ч/��Ч")
    EN("PARSW 0/1:Disable/Enable Parameter switch")},
    {CN("PRGSW 0/1:���򿪹���Ч/��Ч")
    EN("PRGSW 0/1:Disable/Enable Program switch")},
    {CN("MVOPE 0/1:�ӹ��в�/�����޸ĺ����")
    EN("MVOPE 0/1:Disable/Enable macro value modifying when operation")},
    {CN("QMDI 0/1:λ�ý�����MDI���ܴ�/�ر�")
    EN("QMDI 0/1:Quick MDI in POS screen open/close")},
    {CN("PRTSC 0/1:��\"���\"������,�ر�/��")
    EN("PRTSC 0/1:Disable/Enable press OUT key to print screen")},
    {CN("RTPOS 0/1:���ض��㰴ťʱ,ͬʱ����λ�ý���:�ر�/��")
    EN("RTPOS 0/1:Return POS screen when return top menu, OFF/ON")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2004;1
    //LG_STR nszParOperPwdSet[9][LG_NUM] =
    {CN("������������")//0+
    EN("Operation password settings")},
    {CN("PARPS 0/1:����������Ч/��Ч")
    EN("PARPS 0/1:Disable/Enable Parameter password")},
    {CN("PRGPS 0/1:����������Ч/��Ч")
    EN("PRGPS 0/1:Disable/Enable Program password")},
    {CN("CMCPS 0/1:��������겻/��Ҫ����")
    EN("CMCPS 0/1:Disable/Enable clear machine coor. password")},
    {CN("POPS 0/1:����������Ч/��Ч")
    EN("POPS 0/1:Disable/Enable power-on password")},
    {CN("O9KPS 0/1:O9xxx����༭������Ч/��Ч")
    EN("O9KPS 0/1:Disable/Enable password for O9xxx edit")},
    {CN("O8KPS 0/1:O8xxx����༭������Ч/��Ч")
    EN("O8KPS 0/1:Disable/Enable password for O8xxx edit")},
    {CN("")
    EN("")},
    {CN("")
    EN("")},
//2006;1
    //LG_STR nszParPrgShow[9][LG_NUM] =
    {CN("������ʾ�������")
    EN("Function settings")},
	{CN("SO9K 0/1:��ʾ/����ʾO9xxx��������")
	EN("SO9K 0/1:Show/Hide O9xxx program content")},
	{CN("SO8K 0/1:��ʾ/����ʾO8xxx��������")
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
    {CN("�ֶ������������")
    EN("manual move settings")},
	{CN("MIR 0/1:�ֶ���Ԥ���ع���,��Ч/��Ч")
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
    {CN("MII�����������")
    EN("MII bus settings")},
    {CN("MIIE 0/1:MII�����ֽ���17/32")
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
	{CN("MIIͨѶ���Դ���") //200+
	EN("MII retry count")},
//2115;1
    //LG_STR nszParModBusSet[9][LG_NUM] =
    {CN("ModBus�����������")
    EN("ModBus settings")},
    {CN("MBBL 0/1:32λ���ݲ��ô��/С��")
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
	{CN("Modbus��վվ��ַ") //200+
	EN("Modbus slave address")},
//2117;1
	//LG_STR nszUartBaudRate[LG_NUM] =
	{CN("����ͨѶ������(4800,9600,19200,38400,57600,115200,128000)") //200+
	EN("Serrial port baud rate(4800,9600,19200,38400,57600,115200,128000)")},

	//LG_STR nszParChnType[LG_NUM] =
	{CN("ͨ������(0:����, 1:ϳ��)") //200+
	EN("Channel type")},
//2011;1
	//LG_STR nszParLanguageType[LG_NUM] =
	{CN("����ѡ��(0:����(Chinese), 1:Ӣ��(English))")
	EN("Language(0:Chinese(����), 1:English(Ӣ��))")},

	//LG_STR nszParAxisChn[LG_NUM] =
	{CN("������ͨ����")
	EN("Channel of axis")},
//2020;1
	//LG_STR nszParSeqNo[LG_NUM] =
	{CN("�༭�������")
	EN("Increment in sequence numbers when edit")},
//2220;1
	//LG_STR nszParPrgPowerOn[LG_NUM] =
	{CN("�ϵ�򿪳����")
	EN("Prog. No when power-on")},
//2031;1
	//LG_STR nszParPowerOnScreenDly[LG_NUM] =
	{CN("����������ʾ��ʱ(ms)")
	EN("Power-on screen display delay")},
//2032;1
	//LG_STR nszParShowSpdlNum[LG_NUM] =
	{CN("λ�ý�����ʾ��ǰͨ������ĸ���")
	EN("Spindle Num of current channel display on POS screen")},
//2035;1
	//LG_STR nszParSysAxisNum[LG_NUM] =
	{CN("ϵͳ�������")
	EN("Axis num of system")},
//2036;1
	//LG_STR nszParSysSpdlNum[LG_NUM] =
	{CN("ϵͳ���������")
	EN("Spindle num of system")},

    //-------------------------------------------------------------------------
    // ���� ##PROG ##PRG ##1100
    //-------------------------------------------------------------------------
//2200;1
	//LG_STR nszParProgSet[9][LG_NUM] =
	{CN("�����������")
	EN("Program settings")},
	{CN("GSB 0/1:����ϵͳѡ��G������ϵA/B")
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
	{CN("����ģ̬�ϵ��������")
	EN("Program modal settings")},
	{CN("MG01 0/1:�ϵ�ʱΪG00/G01ģʽ")
	EN("MG01 0/1:G00/G01 when power-on")},
	{CN("MG61 0/1:�ϵ�ʱΪG64/G61ģʽ")
	EN("MG61 0/1:G00/G01 when cycle start")},
	{CN("MFPR 0/1:�ϵ�ʱ����ÿ�ֽ���/ÿת����ģʽ")
	EN("MFPR 0/1:At feed per minute/revolution when power-on")},
	{CN("MG17 0/1:�ϵ�ʱΪG18/G17ģʽ")
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
	{CN("����ģ̬��λ�������")
	EN("Program modal RESET settings")},
	{CN("RG01 0/1:��λʱ,��/��λG00G01ģ̬���ϵ�״̬")
	EN("RG01 0/1:NO/RESET G00G01 modal to power-on when RESET")},
	{CN("RG61 0/1:��λʱ,��/��λG64G61ģ̬���ϵ�״̬")
	EN("RG61 0/1:NO/RESET G64G61 modal to power-on when RESET")},
	{CN("RFPR 0/1:��λʱ,��/��λÿ�ֽ�����ÿת����ģʽ���ϵ�״̬")
	EN("RFPR 0/1:At feed per minute-revolution when power-on")},
	{CN("RG17 0/1:��λʱ,��/��λG17G18G19ģ̬���ϵ�״̬")
	EN("RG17 0/1:NO/RESET G17G18G19 modal to power-on when RESET")},
	{CN("RG90 0/1:��λʱ,��/��λG90G91ģ̬���ϵ�״̬")
	EN("RG90 0/1:NO/RESET G90G91 modal to power-on when RESET")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2203;1
	//LG_STR nszParProgCtrlSet[9][LG_NUM] =
	{CN("��������������")
	EN("Program control settings")},
	{CN("AOCK 0/1:Բ�����ĵ���ر�/��")
	EN("AOCK 0/1:Arc origin check disable/enable")},
	{CN("G00L 0/1:G00�˶���ʽΪ����������ٶ��˶�/����ͬ��")
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
	{CN("����Ԥ�������������")
	EN("Program buffer control settings")},
	{CN("TNB 0/1:ִ�л���ָ�/���Ƴ��򻺳�")
	EN("TNB 0/1:Program block buffer/NOT buffer when tool change")},
	{CN("M91NB 0/1:M91ָ�/���Ƴ��򻺳�")
	EN("M91NB 0/1:Program block buffer/NOT buffer when M91")},
	{CN("G10NB 0/1:G10ָ�/���Ƴ��򻺳�")
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
	{CN("M�����������")
	EN("M function settings")},
	{CN("M30CP 0/1:ִ��M30ʱ������/����")
	EN("M30CP 0/1:The part number not count/count when M30")},
	{CN("M99CP 0/1:ִ���������е�M99ʱ������/����")
	EN("M99CP 0/1:The part number not count/count when M99 in main program")},
	{CN("M30CC 0/1:ִ��M30ʱ�����/�������")
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
    {CN("�ϵ�ʱ�����������")
    EN("Power-On display settings")},
    {CN("PNPO 0/1:�ϵ�ʱ,�򿪵�ǰ����/ָ������")
    EN("PNPO 0/1:Open current/specified program when power")},
    {CN("MHPO 0/1:�ϵ�ʱ,�ָ��ϵ�ʱ�ĳ���λ��/����������ͷ")
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
	{CN("Բ�����ļ��ʱ���뾶���")
	EN("Max radius error when arc origin check")},
//2221;1
	//LG_STR nszParSpdlSpeedPowerOn[LG_NUM] =
	{CN("�ϵ�ʱ������Ĭ���趨ת��")
	EN("Spindles setting speed when power-on")},
//2222;1
	//LG_STR nszParChnFPMPowerOn[LG_NUM] =
	{CN("�ϵ�ʱĬ���趨�����ٶ�(mm/min)")
	EN("Feedrate setting when power-on(mm/min)")},
//2223;1
	//LG_STR nszParChnFPRPowerOn[LG_NUM] =
	{CN("�ϵ�ʱĬ���趨�����ٶ�(mm/rev)")
	EN("Feedrate setting when power-on(mm/rev)")},
//2310;1
	//LG_STR nszParG00OverlapRatio[LG_NUM] =
	{CN("G00����������ٶȱ�")
	EN("G00 reduction ratio for overlapping blocks")},

	//LG_STR nszParCutOverlapRatio[LG_NUM] =
	{CN("�������������ٶȱ�")
	EN("Cut reduction ratio for overlapping blocks")},

    //-------------------------------------------------------------------------
    // ##TCOMP ##TOFS ##2500
    //-------------------------------------------------------------------------
//2500;1
	//LG_STR nszParToolCompensationSet[9][LG_NUM] =
	{CN("���߲����������")
	EN("Tool compensation setting")},
	{CN("CCC 0/1:���߰뾶����ʱ,��߹սǵ����ӷ�ʽΪֱ��/Բ��")
    EN("CCC 0/1:In tool radius comp.,the outer corner connect with line/arc")},
	{CN("CSBK 0/1:���߰뾶�����ڲ������ĳ���β�����ֹͣ/����ֹͣ")
    EN("CSBK 0/1:Block internally for tool radius comp.,Single block stop NOT/performed")},
	{CN("CCSN 0/1:���߰뾶����Ϊ�����Ͳ���ʱ,��/�ж���һ�ι���")
	EN("CCSN 0/1:NO/Check next segment too short when cutter compensation,")},
	{CN("����")
	EN("RSV")},
	{CN("TOEO 0/1:�ӹ����޸ĵ���ʱ,��һ��Tָ��/��һ�κ�,�µ���ֵ��Ч")
	EN("TOEO 0/1:New tool offset effective at next offset command/segment, when MDI offset changing in operation")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//2501;1
	//LG_STR nszParToolCompensationInputSafeSet[9][LG_NUM] =
	{CN("���߲������밲ȫ�������")
	EN("Tool compensation input safety setting")},
	{CN("TOIE 0/1:����ƫ�ý���,�������뷽ʽ��ݼ�(UVW)�ر�/��")
    EN("TOIE 0/1:Disable/Enable incremental input shortcut key(UVW) in tool offset screen")},
	{CN("TWAE 0/1:����ĥ�����,�������뷽ʽ��ݼ�(XYZ)�ر�/��")
    EN("TWAE 0/1:Disable/Enable absolute input shortcut key(XYZ) in tool wear screen")},
	{CN("TWAI 0/1:����ĥ�����,��ݼ�(XYZ)������������ر�/��")
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
	{CN("����ĥ�𲹳������ֵ")
	EN("Maximum value of tool wear compensation")},
//2511;1
	//LG_STR nszParToolwearIncMax[LG_NUM] =
	{CN("����ĥ�𲹳���������������ֵ")
	EN("Maximum value of incremental input for tool wear compensation")},
    //-------------------------------------------------------------------------
    // ##TLIFE ##2600
    //-------------------------------------------------------------------------
//2600;1
	//LG_STR nszParToolLifeSet[9][LG_NUM] =
	{CN("���������������")
	EN("Tool life setting")},
	{CN("TLEN 0/1:����������������Ч/��Ч")
	EN("TLEN 0/1:Tool life manager disable/enable")},
	{CN("TLM6 0/1:ͨ��T/M06ָ����������")
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
	{CN("�����ź�����")
	EN("DI setting")},
	{CN("ESPC 0/1:��ͣ(ESP)Ϊ����/����")
    EN("ESPC 0/1:ESP signal is normal open/close")},
	{CN("ESP2C 0/1:��ͣ(ESP2)Ϊ����/����")
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
	{CN("�����źſ��(ms)")
	EN("DI signal width(ms)")},
//2711;1
	//LG_STR nszParDIEsp[LG_NUM] =
	{CN("��ͣ�����")
	EN("ESP DI")},
//2712;1
	//LG_STR nszParDIEsp2[LG_NUM] =
	{CN("��ͣ2�����")
	EN("ESP2 DI")},
//2720;1
	//LG_STR nszParBusIOStationAddr[LG_NUM] =
	{CN("����IOվ��ַ")
	EN("Bus IO station address")},
//2723;12
	//LG_STR nszParBusIOStationDIWidth[LG_NUM] =
	{CN("����IOվ�����źſ��(ms)")
	EN("Bus IO station DI signal width(ms)")},
//2721;1
	//LG_STR nszParBusIOXStartDI[LG_NUM] =
	{CN("����IOվ����ڵ�X��ʼ��ַ")
	EN("Bus DI station X start for input port")},
//2722;12
	//LG_STR nszParBusIOYStartDO[LG_NUM] =
	{CN("����IOվ����ڵ�Y��ʼ��ַ")
	EN("Bus DI station Y start for output port")},
//2725;12
	//LG_STR nszParBusIOXStartAD[LG_NUM] =
	{CN("����IOվAD��X��ʼ��ַ")
	EN("Bus DI station X start for AD")},

    //-------------------------------------------------------------------------
    // ##PLC 3000
    //-------------------------------------------------------------------------
    //PLC/����PLC���� 3200+
//3000;1
	//LG_STR nszParPlcSet[9][LG_NUM] =
	{CN("PLC�������")
	EN("PLC settings")},
	{CN("PLCEN 0/1:�ر�/�򿪿���ʽPLC")
	EN("PLCEN 0/1:Disable/Enable Open PLC")},
	{CN("EFPLS 0/1:����ʽPLCʱ,�ر�/������PLC")
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
	{CN("�����ź��������")
	EN("Interlock signal settings")},
	{CN("ITX 0/1:�ر�/�򿪸��ụ������")
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
    //��ǶPLC����
//3300;1
	//LG_STR nszParFixPlcSet1[9][LG_NUM] =
	{CN("����PLC�����������1")
	EN("Fixed PLC settings 1")},
	{CN("FXOV 0/1:��ӽ������ʹر�/��")
    EN("FXOV 0/1:external feedrate override off/on")},
	{CN("MLEN 0/1:���������ܹر�/��")
	EN("MLEN 0/1:Machine lock function off/on")},
	{CN("SXOV 0/1:������ᱶ�ʹر�/��")
    EN("SXOV 0/1:external spindle override off/on")},
	{CN("����")
	EN("reserved")},
	{CN("JKU 0/1:�����ֶ��ƶ����Զ���,�ر�/��")
	EN("JKU 0/1:jog key defined by user,disable/enable")},
	{CN("RTM 0/1:�ֶ����ټ�������/����")
	EN("RTM 0/1:RT key not/keep state")},
	{CN("EHDC 0/1:��ӽ�������Ϊ����/����")
	EN("EHDC 0/1:External feed-hold sigal is normal open/close")},
	{CN("SPSSP 0/1:��������ʱ,��/ͣ����")
	EN("SPSSP 0/1:NO/STOP spindle when feed hold")},
//3301;1
	//LG_STR nszParFixPlcSet2[9][LG_NUM] =
	{CN("����PLC�����������2")
	EN("Fixed PLC settings 2")},
	{CN("CFM8 0/1:����PLCʱ,M08M09������Ч/�ر�")
    EN("CFM8 0/1:M08M09 Open/Close when fixed PLC")},
	{CN("CFM32 0/1:����PLCʱ,M32M33������Ч/�ر�")
    EN("CFM32 0/1:M32M33 Open/Close when fixed PLC")},
	{CN("CFM78 0/1:����PLCʱ,M78M79������Ч/�ر�")
    EN("CFM78 0/1:M78M79 Open/Close when fixed PLC")},
	{CN("CFM10 0/1:����PLCʱ,M10M11������Ч/�ر�")
    EN("CFM10 0/1:M10M11 Open/Close when fixed PLC")},
	{CN("CFSP 0/1:����PLCʱ,����PLC������Ч/�ر�")
    EN("CFSP 0/1:Spindle plc Open/Close when fixed PLC")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
	{CN("")
    EN("")},
//3302;1
	//LG_STR nszParFixPlc3SwitchSet[9][LG_NUM] =
	{CN("����PLC��λ�����������")
	EN("Fixed PLC tri-switch settings")},
	{CN("TSW 0/1:�����λ������Ч/��Ч")
    EN("TSW 0/1:External tri-Switch disable/enable")},
	{CN("TSWDS 0/1:��λ������������ʱ,ֱ�������ӹ���Ч/��Ч")
	EN("TSWDS 0/1:Tri-Switch start run disable/enable")},
	{CN("TSWRC 0/1:��λ������������Ϊ����/����")
    EN("TSWRC 0/1:Tri-Switch auto-run enable is normal open/close")},
	{CN("TSWSC 0/1:��λ��������ͣΪ����/����")
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
	{CN("����PLC��ȫ���������")
	EN("Fixed PLC Safe-Door settings")},
	{CN("SFDR 0/1:��������Ч/��Ч")
    EN("SFDR 0/1:Safe door disable/enable")},
	{CN("SFDSP 0/1:�����ű���ʱ��ͣ/ͣ�ӹ�")
	EN("SFDSP 0/1:Safe door alarm not/stop run")},
	{CN("SFDC 0/1:�����ŵ�λ�ź�Ϊ����/����")
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
	{CN("����PLC�������")
	EN("Fixed PLC output settings")},
	{CN("M08P 0/1:M08���Ϊ��ƽ/����")
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
	{CN("����PLC M���ܸ�λ�������")
	EN("Fixed PLC M settings")},
	{CN("M30M5 0/1:M30ʱ�����/���M05")
	EN("M30M5 0/1:NOT/OUT M05 when M30")},
	{CN("M30M9 0/1:M30ʱ�����/���M09")
	EN("M30M9 0/1:NOT/OUT M09 when M30")},
	{CN("RSTM5 0/1:��λʱ�����/���M05")
	EN("RSTM5 0/1:NOT/OUT M05 when RESET")},
	{CN("RSTM9 0/1:��λʱ�����/���M09")
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
	{CN("����PLC��λʱ�ر������")
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
	{CN("����PLC�ϵ��ʼ���������")
	EN("Fixed PLC M settings")},
	{CN("WKLPO 0/1:�ϵ�ʱ,�ر�/�򿪹�����")
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
	{CN("User����ݺ�����������")
	EN("User key settings")},
	{CN("MCUK1 0/1:USER1��/ִ�п�ݺ�ָ�����(+0)")
	EN("MCUK1 0/1:USER1 no/use one-touch macro call(+0)")},
	{CN("MCUK2 0/1:USER2��/ִ�п�ݺ�ָ�����(+1)")
	EN("MCUK2 0/1:USER2 no/use one-touch macro call(+1)")},
	{CN("MCUK3 0/1:USER3��/ִ�п�ݺ�ָ�����(+2)")
	EN("MCUK3 0/1:USER3 no/use one-touch macro call(+2)")},
	{CN("MCUK4 0/1:USER4��/ִ�п�ݺ�ָ�����(+3)")
	EN("MCUK4 0/1:USER4 no/use one-touch macro call(+3)")},
	{CN("MCUK5 0/1:USER5��/ִ�п�ݺ�ָ�����(+4)")
	EN("MCUK5 0/1:USER5 no/use one-touch macro call(+4)")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//3320;1
	//LG_STR nszParFixPlcWorkLampKey[9][LG_NUM] =
	{CN("�����Ƽ������������")
	EN("Worklamp key mux settings")},
	{CN("WLSC 0/1:��������������1����,��Ч/��Ч")
    EN("WLSC 0/1:Worklamp use as spindle 1 clamp, disable/enable")},
	{CN("WLOS 0/1:����������ѡ��ͣ,��Ч/��Ч")
	EN("WLOS 0/1:Worklamp use as optional stop, disable/enable")},
	{CN("WLS2 0/1:������������2������ͣ,��Ч/��Ч")
	EN("WLS2 0/1:Worklamp use as spindle2 start or stop, disable/enable")},
	{CN("WLS2C 0/1:��������������2����,��Ч/��Ч")
    EN("WLS2C 0/1:Worklamp use as spindle 2 clamp, disable/enable")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
	{CN("WLEN 0/1:�����ƹ�����Ч/��Ч")
    EN("WLEN 0/1:Worklamp diable/enable")},

	//LG_STR nszParFixPlcUser1Key[9][LG_NUM] =
	{CN("User1�������������")
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
	{CN("PLC������")
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
	{CN("�����ź���Сʱ��")
	EN("ST signal min time")},
//3333;1
	//LG_STR nszParSTMaxTime[LG_NUM] =
	{CN("�����ź�ʱ������")
	EN("ST signal max time")},
//3330;1
	//LG_STR nszParDIExternStart[LG_NUM] =
	{CN("������������")
	EN("External start DI")},
//3331;1
	//LG_STR nszParDIExternHold[LG_NUM] =
	{CN("��ӱ��������")
	EN("External hold DI")},
//3340;1
	//LG_STR nszParDOCool[LG_NUM] =
	{CN("M08�����")
	EN("M08 DO")},
//3341;1
	//LG_STR nszParTimeM08[LG_NUM] =
	{CN("M08��ʱʱ��(ms)")
	EN("M08 delay time(ms)")},

	//LG_STR nszParDITriSwichLeft[LG_NUM] =
	{CN("��λ�����������������")
	EN("Tri-swich run enable DI")},
//3335;1
	//LG_STR nszParDITriSwichRight[LG_NUM] =
	{CN("��λ��������ͣ�����")
	EN("Tri-swich spindle stop DI")},
//3350;1
	//LG_STR nszParDISafeDoor[LG_NUM] =
	{CN("�����������")
	EN("Safe door DI")},
//3351;1
	//LG_STR nszParDOWorkLamp[LG_NUM] =
	{CN("�����������")
	EN("Work lamp DO")},
//3355;1
	//LG_STR nszParDORunLamp[LG_NUM] =
	{CN("��ɫ������ָʾ�������")
	EN("Run lamp DO")},
//3356;1
	//LG_STR nszParDOAlmLamp[LG_NUM] =
	{CN("��ɫ�Ʊ���ָʾ�������")
	EN("Alarm lamp DO")},
//3357;1
	//LG_STR nszParDOHoldLamp[LG_NUM] =
	{CN("��ɫ��ָֹͣʾ�������")
	EN("Stop lamp DO")},
//3360;1
	//LG_STR nszParDIFeedOvA[LG_NUM] =
	{CN("�������ʿ���*1�����")
	EN("Feedrate override DI *1")},
//3361;1
	//LG_STR nszParDIFeedOvB[LG_NUM] =
	{CN("�������ʿ���*2�����")
	EN("Feedrate override DI *2")},
//3362;1
	//LG_STR nszParDIFeedOvE[LG_NUM] =
	{CN("�������ʿ���*4�����")
	EN("Feedrate override DI *4")},
//3363;1
	//LG_STR nszParDIFeedOvF[LG_NUM] =
	{CN("�������ʿ���*8�����")
	EN("Feedrate override DI *8")},
    //-------------------------------------------------------------------------
    // ##FUNC
    //-------------------------------------------------------------------------
     //4200+
	//LG_STR nszParJogSet[9][LG_NUM] =
	{CN("�����ֶ�����")
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
	{CN("������������")
	EN("Program settings")},
	{CN("TCS 0/1:���������ӳ����ܹر�/����")
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
    {CN("M06���õ��ӳ����")
     EN("M06 subprogram number")},
//9010;1
    //LG_STR nszParTProgNumber[LG_NUM] =
    {CN("�������õ��ӳ����")
     EN("Tool subprogram number")},
//9020;1
    //LG_STR nszParGMCallNum[LG_NUM] =
    {CN("G����������ø���")
     EN("G code macro-call num")},
//9021;1
     //LG_STR nszParGMCallPrgFirst[LG_NUM] =
    {CN("G�����ӳ�����õĿ�ͷ�����")
     EN("First program for G code macro call")},
//9022;1
     //LG_STR nszParGMCallGCode0[LG_NUM] =
    {CN("�������õ�G�����0")
     EN("G code used for macro-call 0")},
//9023;1
     //LG_STR nszParGMCallGCode1[LG_NUM] =
    {CN("�������õ�G�����1")
     EN("G code used for macro-call 1")},
//9024;1
     //LG_STR nszParGMCallGCode2[LG_NUM] =
    {CN("�������õ�G�����2")
     EN("G code used for macro-call 2")},
//9025;1
     //LG_STR nszParGMCallGCode3[LG_NUM] =
    {CN("�������õ�G�����3")
     EN("G code used for macro-call 3")},
//9026;1
     //LG_STR nszParGMCallGCode4[LG_NUM] =
    {CN("�������õ�G�����4")
     EN("G code used for macro-call 4")},
//9027;1
     //LG_STR nszParGMCallGCode5[LG_NUM] =
    {CN("�������õ�G�����5")
     EN("G code used for macro-call 5")},
//9028;1
     //LG_STR nszParGMCallGCode6[LG_NUM] =
    {CN("�������õ�G�����6")
     EN("G code used for macro-call 6")},
//9029;1
     //LG_STR nszParGMCallGCode7[LG_NUM] =
    {CN("�������õ�G�����7")
     EN("G code used for macro-call 7")},
//9030;1
     //LG_STR nszParGMCallGCode8[LG_NUM] =
    {CN("�������õ�G�����8")
     EN("G code used for macro-call 8")},
//9031;1
     //LG_STR nszParGMCallGCode9[LG_NUM] =
    {CN("�������õ�G�����9")
     EN("G code used for macro-call 9")},
//9040;1
    //LG_STR nszParMSCallNum[LG_NUM] =
    {CN("M�����ӳ�����ø���")
     EN("M code sub-call num")},
//9041;1
     //LG_STR nszParMSCallPrgFirst[LG_NUM] =
    {CN("M�����ӳ�����õĿ�ͷ�����")
     EN("First program for M code sub call")},
//9042;1
     //LG_STR nszParMSCallMCode0[LG_NUM] =
    {CN("�ӳ�����õ�M�����0")
     EN("M code used for sub-call 0")},
//9043;1
     //LG_STR nszParMSCallMCode1[LG_NUM] =
    {CN("�ӳ�����õ�M�����1")
     EN("M code used for sub-call 1")},
//9044;1
     //LG_STR nszParMSCallMCode2[LG_NUM] =
    {CN("�ӳ�����õ�M�����2")
     EN("M code used for sub-call 2")},
//9045;1
     //LG_STR nszParMSCallMCode3[LG_NUM] =
    {CN("�ӳ�����õ�M�����3")
     EN("M code used for sub-call 3")},
//9046;1
     //LG_STR nszParMSCallMCode4[LG_NUM] =
    {CN("�ӳ�����õ�M�����4")
     EN("M code used for sub-call 4")},
//9047;1
     //LG_STR nszParMSCallMCode5[LG_NUM] =
    {CN("�ӳ�����õ�M�����5")
     EN("M code used for sub-call 5")},
//9048;1
     //LG_STR nszParMSCallMCode6[LG_NUM] =
    {CN("�ӳ�����õ�M�����6")
     EN("M code used for sub-call 6")},
//9049;1
     //LG_STR nszParMSCallMCode7[LG_NUM] =
    {CN("�ӳ�����õ�M�����7")
     EN("M code used for sub-call 7")},
//9050;1
     //LG_STR nszParMSCallMCode8[LG_NUM] =
    {CN("�ӳ�����õ�M�����8")
     EN("M code used for sub-call 8")},
//9051;1
     //LG_STR nszParMSCallMCode9[LG_NUM] =
    {CN("�ӳ�����õ�M�����9")
     EN("M code used for sub-call 9")},
//9060;1
    //LG_STR nszParMMCallNum[LG_NUM] =
    {CN("M����������ø���")
     EN("M code macro-call num")},
//9061;1
     //LG_STR nszParMMCallPrgFirst[LG_NUM] =
    {CN("M����������õĿ�ͷ�����")
     EN("First program for M code macro call")},
//9062;1
     //LG_STR nszParMMCallMCode0[LG_NUM] =
    {CN("�������õ�M�����0")
     EN("M code used for macro-call 0")},
//9063;1
     //LG_STR nszParMMCallMCode1[LG_NUM] =
    {CN("�������õ�M�����1")
     EN("M code used for macro-call 1")},
//9064;1
     //LG_STR nszParMMCallMCode2[LG_NUM] =
    {CN("�������õ�M�����2")
     EN("M code used for macro-call 2")},
//9065;1
     //LG_STR nszParMMCallMCode3[LG_NUM] =
    {CN("�������õ�M�����3")
     EN("M code used for macro-call 3")},
//9066;1
     //LG_STR nszParMMCallMCode4[LG_NUM] =
    {CN("�������õ�M�����4")
     EN("M code used for macro-call 4")},
//9067;1
     //LG_STR nszParMMCallMCode5[LG_NUM] =
    {CN("�������õ�M�����5")
     EN("M code used for macro-call 5")},
//9068;1
     //LG_STR nszParMMCallMCode6[LG_NUM] =
    {CN("�������õ�M�����6")
     EN("M code used for macro-call 6")},
//9069;1
     //LG_STR nszParMMCallMCode7[LG_NUM] =
    {CN("�������õ�M�����7")
     EN("M code used for macro-call 7")},
//9070;1
     //LG_STR nszParMMCallMCode8[LG_NUM] =
    {CN("�������õ�M�����8")
     EN("M code used for macro-call 8")},
//9071;1
     //LG_STR nszParMMCallMCode9[LG_NUM] =
    {CN("�������õ�M�����9")
     EN("M code used for macro-call 9")},
//9080;1
     //LG_STR nszParQMCNum[LG_NUM] =
    {CN("��ݺ�ָ����õĳ������")
     EN("One-touch macro call num")},
//9085;1
     //LG_STR nszParEMCInput0[LG_NUM] =
    {CN("��ӿ�ݺ�������0")
     EN("Ext macro call input 0")},
//9086;1
     //LG_STR nszParEMCInput1[LG_NUM] =
    {CN("��ӿ�ݺ�������1")
     EN("Ext macro call input 1")},
//9087;1
     //LG_STR nszParEMCInput2[LG_NUM] =
    {CN("��ӿ�ݺ�������2")
     EN("Ext macro call input 2")},
//9088;1
     //LG_STR nszParEMCInput3[LG_NUM] =
    {CN("��ӿ�ݺ�������3")
     EN("Ext macro call input 3")},
//9089;1
     //LG_STR nszParEMCInput4[LG_NUM] =
    {CN("��ӿ�ݺ�������4")
     EN("Ext macro call input 4")},

     // ##THREAD
    //LG_STR nszParThreadSetting[9]][LG_NUM] =
//5000;1
    {CN("�����������")
    EN("Thread settings")},
    {CN("THTT 0/1:������β����,����ʱ�䳣��(5012)/��β����ϵ��(5016)")
    EN("THTT 0/1:thread end distance controled by time const(5012)/tail ratio(5016)")},
    {CN("����")
	EN("RSV")},
	{CN("THQU 0/1:����ָ������ʼ��Q��λΪ1.0��/��λΪ0.001��")
	EN("THQU 0/1:unit of Q is 1.0 degress/is 0.001 degree")},
	{CN("THLAS 0/1:��������ʱ,����ʱ�䳣��(5012)/������β����")
	EN("THLAS 0/1:thread start distance free/equal to tail distance")},
	{CN("THFC 0/1:���Ƽӹ�ʱ,�����/��������ٶȳ���")
    EN("THFC 0/1:No/detect feedrate limit when thread")},
	{CN("THFS 0/1:���Ƽӹ�ʱ,��/���������ٶ�ƽ��")
	EN("THFS 0/1:Disable/Enable feedrate smooth when thread")},
	{CN("THHM 0/1:����ѭ��ʱ,��/ʹ�ø���ģʽ")
	EN("THHM 0/1:Disable/Enable high speed mode when thread cycle")},
	{CN("THHC 0/1:����ѭ��ʱ(G76),��/�ر��������߶ȼ��")
	EN("THHC 0/1:No/Close start point height check when thread cycle(G76)")},
//5012;1
    //LG_STR nszParThreadTimeCnst[LG_NUM] =
    {CN("���Ƽӹ�����Ӽ���ʱ�䳣��(ms)")
     EN("time constant of thread(ms)")},
//5011;1
    //LG_STR nszParThreadFeedFilterRatio[LG_NUM] =
    {CN("���Ƽӹ�ʱ�ٶ�ƽ��ϵ��(0~100),0:���˲�")
    EN("Feed filter ratio when thread(0~100),0:close")},

    //LG_STR nszParThreadTailTimeCnst[LG_NUM] =
    {CN("���Ƽӹ���β�Ӽ���ʱ�䳣��(ms)")
    EN("time constant of thread tail(ms)")},
//5010;1
    //LG_STR nszParThreadMaxF[LG_NUM] =
    {CN("���Ƽӹ��ٶ�����(=0:�����)")
    EN("Max Feed of thread(=0:No check)")},
//5015;1
    //LG_STR nszParThreadTailFL[LG_NUM] =
    {CN("������β�Ӽ��ٵĵ���FL")
    EN("Feed(FL) of thread tail")},
//5016;1
    //LG_STR nszParThreadTailK[LG_NUM] =
    {CN("������β����ϵ��(��λ:0.1����)")
    EN("Thread tail length ratio(Unit:0.1 lead)")},
//5017;1
    //LG_STR nszParThreadTailAng[LG_NUM] =
    {CN("������β�Ƕ�")
    EN("Thread tail angle")},

    //LG_STR nszParThreadScrewInTimeCnst[LG_NUM] =
    {CN("���������Ӽ���ʱ�䳣��(ms)")
    EN("time constant of thread head cut(ms)")},

    //LG_STR nszParThreadScrewInFL[LG_NUM] =
    {CN("���������Ӽ���ʱ�ĵ���FL")
    EN("Feed(FL) of thread head cut")},
//5025;1
    //LG_STR nszParThreadSpdlLow[LG_NUM] =
    {CN("���Ƽӹ�����ת������(rpm)(=0:�����)")
    EN("Thread cut spindle lowest speed(rpm)(=0:No check)")},
//5026;1
    //LG_STR nszParThreadSpdlSpeedArriveRange[LG_NUM] =
    {CN("���Ƽӹ�ʱ,����ת�ٵ��ﴰ�ڷ�Χ(�ٷֱ�)(=0:�����)")
    EN("Thread cut spindle speed arrive range(percent)(=0:No check)")},
//5027;1
    //LG_STR nszParThreadSpdlWaitTime[LG_NUM] =
    {CN("���Ƽӹ��ȴ�ʱ������(=0:����)")
    EN("Thread cut wait time max.(=0:ignore)")},
//5030;1
    //LG_STR nszParG76Qdmin[LG_NUM] =
    {CN("G76����ѭ������С������")
    EN("G76 Qd min")},
//5031;1
    //LG_STR nszParG76Rd[LG_NUM] =
    {CN("G76����ѭ���ľ�����")
    EN("G76 Rd")},
//5032;1
    //LG_STR nszParG76Pm[LG_NUM] =
    {CN("G76����ѭ���ľ����ظ�����Pm")
    EN("G76 Pm")},
//5033;1
    //LG_STR nszParG76Pr[LG_NUM] =
    {CN("G76����ѭ������β����ϵ��Pr(��λ:0.1����)")
    EN("G76 thread tail length ratio Pr(Unit:0.1 lead)")},
//5034;1
    //LG_STR nszParG76Pa[LG_NUM] =
    {CN("G76����ѭ���ĵ���Ƕ�Pa")
    EN("G76 Pa")},
//5037;1
    //LG_STR nszParG76CutInCompz[LG_NUM] =
    {CN("G76����ѭ��ʱ,������б�����Ƕ�")
    EN("Cut-in angle of inclination when G76")},
//5035;1
    //LG_STR nszParG76CutType[LG_NUM] =
    {CN("G76����ѭ����������ʽѡ��(0:����,1:����)")
    EN("G76 cutting type select")},
//5036;1
    //LG_STR nszParG76StartType[LG_NUM] =
    {CN("G76����ѭ�����������ѡ��(0:��׼,1:�����G92����һ��)")
    EN("G76 start point select")},

//5100;1
    //LG_STR nszParCannedCycleSetting[9]][LG_NUM] =
    {CN("�̶�ѭ���������")
     EN("Canned cycle settings")},
    {CN("HSDC 0/1:G83��G87Ϊ�������ѭ��/�������")
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
    {CN("����ѭ���������")
     EN("multiple canned cycles settings")},
    {CN("X2DT 0/1:G71��G72�ĵڶ��᲻����/����ǵ����켣")
	EN("X2DT 0/1:G71 and G72 2th axis monotonicity disable/enable")},
    {CN("X1DT 0/1:G71��G72�ĵ�һ�᲻����/����ǵ����켣")
	EN("X1DT 0/1:G71 and G72 1st axis monotonicity disable/enable")},
	{CN("BTAC 0/1:G71��G72��45��/�����˵�")
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
    {CN("�������ѭ���ķ�����r")
    EN("Return value of peck drilling cycle")},
 //5111;1
    //LG_STR nszParDrillCycClearanceVal[LG_NUM] =
    {CN("���ѭ���Ľ����ճ���c")
    EN("Clearance value in a peck drilling cycle")},
 //5130;1
    //LG_STR nszParMulCycCutVal[LG_NUM] =
    {CN("G71��G72����ѭ����������")
    EN("Depth of cut in multiple canned cycles G71 and G72")},
 //5131;1
    //LG_STR nszParMulCycRetVal[LG_NUM] =
    {CN("G71��G72����ѭ���ķ�����")
    EN("Escape in multiple canned cycles G71 and G72")},
 //5132;1
    //LG_STR nszParMulCycClearanceVal[LG_NUM] =
    {CN("G71��G72����ѭ���Ľ����ճ���")
    EN("Clearance in multiple canned cycles G71 and G72")},
 //5133;1
    //LG_STR nszParMulCycG73Retract1[LG_NUM] =
    {CN("�����ι̶�ѭ��G73�Ļ��˾���(ƽ���1��)")
     EN("Retraction distance in the multiple canned cycle G73(plane 1st axis)")},
 //5134;1
    //LG_STR nszParMulCycG73Retract2[LG_NUM] =
    {CN("�����ι̶�ѭ��G73�Ļ��˾���(ƽ���2��)")
    EN("Retraction distance in the multiple canned cycle G73(plane 2rd axis)")},
 //5135;1
    //LG_STR nszParMulCycG73DivNum[LG_NUM] =
    {CN("�����ι̶�ѭ��G73�ķָ����")
    EN("Number of divisions in the multiple canned cycle G73")},
 //5136;1
    //LG_STR nszParMulCycG7475Retract[LG_NUM] =
    {CN("�����ι̶�ѭ��G74��G75�ķ�����")
    EN("Return in multiple canned cycles G74 and G75")},

    //LG_STR nszParBoreRetractDir[LG_NUM] =
    {CN("����ѭ��ʱ,�������˷���")
    EN("Retraction direction after orientation in a fine boring cycle")},

//5200;1
    //LG_STR nszParRigidTapSetting[9]][LG_NUM] =
    {CN("���Թ�˿�������")
     EN("Rigid tapping settings")},
    {CN("HSTC 0/1:��˿ѭ��Ϊ���/���ٹ�˿ѭ��")
    EN("HSTC 0/1:Specify deep peck/high-speed peck tapping cycle")},
	{CN("TPSA 0/1:��������Ƶ��˿ʱ,�ȴ�����ת�ٵ���")
	EN("TPSA 0/1:Wait spindle speed arrive when tapping by encoder")},
	{CN("RTPA 0/1:���Թ�˿ʱ,���ȴ�/�ȴ�λ�õ���")
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
    {CN("���Թ�˿�����������")
     EN("Rigid tapping settings")},
	{CN("RTPF 0/1:���Թ�˿ʱ,ʹ��ͬ����˿ģʽ/���湥˿ģʽ")
	EN("RTPF 0/1:use sync mode/follow mode when rapid tapping")},
	{CN("TPAC 0/1:���������湥˿ʱ,�Զ�����ڲ���/�Զ����ڲ�����")
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
    {CN("������׹�˿ѭ���ķ�����r")
    EN("Return value of peck tapping cycle")},
 //5210;1
    //LG_STR nszParTapMaxF[LG_NUM] =
    {CN("��˿ʱ��󵼳�(��λ:mm, =0:������)")
    EN("Max tap lead(unit:mm, =0:No limit)")},

    //LG_STR nszParRTapCycClearanceVal[LG_NUM] =
    {CN("������׹�˿ѭ���Ľ����ճ���")
    EN("Clearance value of peck tapping cycle")},
 //5225;1
    //LG_STR nszParTapSpdlSpeedArriveRange[LG_NUM] =
    {CN("��˿ʱ,�ȴ�����ת�ٵ��ﴰ�ڷ�Χ(�ٷֱ�)")
    EN("Spindle speed arrive range when tapping(percent)")},
 //5226;1
    //LG_STR nszParTapSpdlWaitTime[LG_NUM] =
    {CN("��˿ʱ,�ȴ�ʱ������")
    EN("Tapping spdindle wait time max.")},
 //5230;123
    //LG_STR nszParTapRefSpdlSpeed[LG_NUM] =
    {CN("��Ƶ��˿ʱ,����ο�ת��(rpm)")
    EN("Spdl referrence speed when tap(rpm)")},
 //5231;123
    //LG_STR nszParTapRefSpdlSpeedStopTime[LG_NUM] =
    {CN("��Ƶ��˿ʱ,����ο�ת�ٵ�ֹͣʱ��(ms)")
    EN("Spdl referrence speed stop time when tap(ms)")},
 //5232;1
    //LG_STR nszParTapAxisFeedCompRatio[LG_NUM] =
    {CN("��˿ʱ,������λ�ò���ϵ��")
    EN("Position loop comp. ratio when tap")},
 //5233;1
    //LG_STR nszParTapAxisPosLoopGain[LG_NUM] =
    {CN("��˿ʱ,�����ŷ�λ�û�����(KP)(1/s)")
    EN("Axis servo position loop gain(KP) when tap(1/s)")},
 //5234;1
    //LG_STR nszParTapAxisVelLoopGain[LG_NUM] =
    {CN("��˿ʱ,����ϵͳ�ٶȻ�·����")
    EN("Axis NC vel. loop gain when tap")},
 
    //LG_STR nszParTapAxisVelNegLoopGain[LG_NUM] =
    {CN("��˿ʱ,����ϵͳ�����ٶȻ�·����")
    EN("Axis NC vel-neg loop gain when tap")},

    //LG_STR nszParTapAxisVelPosLoopGain[LG_NUM] =
    {CN("��˿ʱ,����ϵͳ�����ٶȻ�·����")
    EN("Axis NC vel-Pos loop gain when tap")},
//5235;1
    //LG_STR nszParTapAxisAccLoopGain[LG_NUM] =
    {CN("��˿ʱ,����ϵͳ���ٶȻ�·����")
    EN("Axis NC acc. loop gain when tap")},

    //LG_STR nszParTapAxisDecLoopGain[LG_NUM] =
    {CN("��˿ʱ,����ϵͳ���ٶȻ�·����")
    EN("Axis NC dec. loop gain when tap")},
//5240;123
    //LG_STR nszParTapSpdlTimeCnst[LG_NUM] =
    {CN("��˿ʱ,����Ӽ���ʱ�䳣��")
    EN("Spindle Acc./dec. time constant when tap")},
//5241;1
    //LG_STR nszParTapAxisTimeCnst[LG_NUM] =
    {CN("��˿ʱ,����Ӽ���ʱ�䳣��(ms)")
     EN("time constant of tap(ms)")},
//5237;1
    //LG_STR nszParTapAxisBackCompDist[LG_NUM] =
     {CN("��˿����ʱ,���Ჹ������(>0:��������)")
     EN("Axis compensate distance when tap back(>0:Feed dir.)")},

    //LG_STR nszParTapBackCompFeed[LG_NUM] =
    {CN("��˿����ʱ,�����ٶ�(mm/min)")
     EN("Compensate feed when tap back(mm/min)")},
//5246;1
    //LG_STR nszParTapInPosDist[LG_NUM] =
    {CN("���ṥ˿��λ������")
    EN("Axis tapping in-position-dist")},

    //LG_STR nszParTapLoadMax[LG_NUM] =
    {CN("���ṥ˿ʱ�ĸ�������")
    EN("Axis Tap load max")},

//5300;1
    //LG_STR nszParPolygonCutSetting[9][LG_NUM] =
    {CN("����μӹ��������")
    EN("Polygon cut setting")},
	{CN("PLPC 0/1:����λ�÷�ʽʱ:�Ӷ������ͨ���������������/��������λ��")
    EN("PLPC 0/1:When spdinle in pos-mode:Control with spindle encoder input/position")},
//	{CN("PLFS 0/1:������λ�ÿ��Ʒ�ʽ:λ��ͬ�����/���߸��淽ʽ")
//    EN("PLFS 0/1:position contol mode:Position Sync output/Tool follow")},
	{CN("PLSD 0/1:�Ӷ�������/�����˶�")
    EN("PLSD 0/1:Slave axis positive/negtive move")},
	{CN("PLES 0/1:������������ʽʱ,�����᲻/���������ٶ�ƽ��")
	EN("PLES 0/1:Tool axis Disable/Enable feedrate smooth when encoder control mode")},
	{CN("PLRS 0/1:��ͣ��λʱ,�Ӷ���ͬ������ֹͣ/���Ӽ���ֹͣ")
    EN("PLES 0/1:Slave axis sync-stop/decelerate-stop when RESET or ESTOP")},
//	{CN("PLTM 0/1:λ�ÿ��Ʒ�ʽʱ:������/������Ϊ������")
//	EN("PLTM 0/1:Workpiece axis/Tool axis is master axis when position control mode")},
	{CN("����")
	EN("RSV")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},
//	{CN("PLPE 0/1:������������ʽʱ:�ر�/�򿪵���λ��ƫ�Ʋ���")
//	EN("PLPE 0/1:Disable/Enable tool axis position offset compensation when encoder control mode")},
//	{CN("PLFE 0/1:������������ʽʱ:�ر�/�򿪵����ŷ���������")
//	EN("PLFE 0/1:Disable/Enable tool axis follow error compensation when encoder control mode")},
	{CN("")
	EN("")},
//5310;1
    //LG_STR nszParPolygonCutP[LG_NUM] =
	{CN("P��Ӧ�������(ͨ����)")
	EN("Master spindle spindle no.(P)")},
//5311;1
    //LG_STR nszParPolygonCutQ[LG_NUM] =
	{CN("Q��Ӧ�ĴӶ����(ͨ����)")
	EN("Slave axis No.(Q)")},
//5312;1
    //LG_STR nszParPolygonCutToolSpeedMax[LG_NUM] =
	{CN("�Ӷ�������תת������(rpm)")
	EN("Slave axis rotation speed max.")},
//5313;1
    //LG_STR nszParPolygonCutToolTimeCnst[LG_NUM] =
    {CN("�Ӷ���Ӽ���ʱ�䳣��")
     EN("Slave axis Acc./dec. time constant")},
//5314;1
    //LG_STR nszParPolygonFeedFilterRatio[LG_NUM] =
     {CN("�Ӷ����ٶ�ƽ��ϵ��(0~100),0:���˲�")
     EN("Slave axis feed filter ratio (0~100),0:close")},
//5315;1
    //LG_STR nszParPolySpdlSpeedArriveRange[LG_NUM] =
    {CN("����ת�ٵ����ⴰ�ڷ�Χ(�ٷֱ�)")
    EN("Spindle speed arrive check range(percent)")},
//5315;1
    //LG_STR nszParPolySpdlArriveWaitTime[LG_NUM] =
    {CN("�ȴ�����ת�ٵ���ʱ������(=0:����)")
    EN("Max time of spindle speed arrive.(=0:ignore)")},

    //���ӳ�����

    //LG_STR nszParEGearSetting[9][LG_NUM] =
    {CN("���ݹ���(EGB)�������")
    EN("Electronic gear box(EGB) setting")},
	{CN("EGPC 0/1:������λ�÷�ʽʱ:���������ͨ���������������/��������λ��")
    EN("EGPC 0/1:When spdinle in pos-mode:Control with spindle encoder input/position")},
	{CN("EGLD 0/1:�������������/�����˶�")
    EN("EGLD 0/1:Workpiece axis positive/negtive move")},
	{CN("EGPD 0/1:�����������߷���Ϊ����/����")
    EN("EGPD 0/1:Workpiece axis helical dir is positive/negtive")},
	{CN("EGSS 0/1:�����᲻/���������ٶ�ƽ��")
	EN("EGSS 0/1:Workpiece axis Disable/Enable feedrate smooth")},
	{CN("EGRS 0/1:��ͣ��λʱ,�Ӷ���ͬ������ֹͣ/���Ӽ���ֹͣ")
    EN("EGES 0/1:Slave axis sync-stop/decelerate-stop when RESET or ESTOP")},
	{CN("EGAC 0/1:�ԴӶ��᲻/�����Զ�λ�ò���")
	EN("EGAC 0/1:NO/Auto tune compz-value when EGEAR")},
	{CN("")
	EN("")},
	{CN("")
	EN("")},

    //LG_STR nszParEGBToolSpdl[LG_NUM] =
	{CN("EGB�������Ӧ�������(ͨ����)")
	EN("EGB Tool spindle No.")},

    //LG_STR nszParEGBWorkpieceAxis[LG_NUM] =
	{CN("EGB������ת���Ӧ�����(ͨ����)")
	EN("EGB Workpiece rotate axis no.")},

    //LG_STR nszParEGBWorkpieceFeedAxis[LG_NUM] =
	{CN("EGB��������������Ӧ�����(ͨ����)")
	EN("EGB Workpiece axial feed axis no.")},

    //LG_STR nszParEGBWorkpieceSpeedMax[LG_NUM] =
	{CN("EGB��������תת������(rpm)")
	EN("EGB Workpiece axis rotation speed max.")},

    //LG_STR nszParEGBWorkpieceTimeCnst[LG_NUM] =
    {CN("EGB������Ӽ���ʱ�䳣��")
     EN("EGB Workpiece axis Acc./dec. time constant")},

    //LG_STR nszParEGBWorkpieceCompzFilterTime[LG_NUM] =
     {CN("EGB�����Ჹ���˲�ʱ��(ms),0���˲�")
     EN("EGB Workpiece axis compensation filter time(ms),0:close")},

    //LG_STR nszParEGBSpdlSpeedArriveRange[LG_NUM] =
    {CN("EGB��������ת�ٵ����ⴰ�ڷ�Χ(�ٷֱ�)")
    EN("EGB tool spindle speed arrive check range(percent)")},

    //LG_STR nszParEGBSpdlArriveWaitTime[LG_NUM] =
    {CN("EGB�ȴ���������ת�ٵ���ʱ������(=0:����)")
    EN("EGB max time of tool spindle speed arrive.(=0:ignore)")},

    //LG_STR nszParECamSetting[9][LG_NUM] =
    {CN("����͹���������")
    EN("ECAM settings")},
	{CN("ECPC 0/1:���Ʒ�ʽ:��ȡ�������������/��ȡ��������λ��")
	EN("ECPC 0/1:Control with spindle encoder input/position")},
	{CN("ECRS 0/1:��ͣ��λʱ,����λ/��λ����͹�ֿ���")
    EN("ECRS 0/1:NO/RESET ECAM control when RESET or ESTOP")},
	{CN("����")
	EN("RSV")},
	{CN("����")
	EN("RSV")},
	{CN("����")
	EN("RSV")},
	{CN("����")
	EN("RSV")},
	{CN("����")
	EN("RSV")},
	{CN("")
	EN("")},

    //LG_STR nszParECamMstSpdl[LG_NUM] =
	{CN("����͹�ֵ������(ͨ����)")
	EN("ECAM Master spindle spindle no.(P)")},

    //LG_STR nszParECamSlvAx[LG_NUM] =
	{CN("����͹�ֵĴӶ����(ͨ����)")
	EN("ECAM slave axis No.(Q)")},

    //LG_STR nszParECamSlvSpeedMax[LG_NUM] =
	{CN("����͹�ִӶ�������תת������(rpm)")
	EN("ECAM slave axis rotation speed max.")},

    //LG_STR nszParECamSlvTimeCnst[LG_NUM] =
    {CN("����͹�ִӶ���Ӽ���ʱ�䳣��")
     EN("ECAM slave axis Acc./dec. time constant")},

    //LG_STR nszParECamFilterRatio[LG_NUM] =
     {CN("����͹�ִӶ���ƽ��ϵ��(0~100),0:��ƽ��")
     EN("ECAM slave axis filter ratio (0~100),0:close")},

    //LG_STR nszParECamSpdlSpeedArriveRange[LG_NUM] =
    {CN("����͹�ּӹ�ʱ,����ת�ٵ����ⴰ�ڷ�Χ(�ٷֱ�)")
    EN("Spindle speed arrive check range(percent) when ECAM")},

    //LG_STR nszParECamSpdlArriveWaitTime[LG_NUM] =
    {CN("����͹�ּӹ�ʱ,�ȴ�����ת�ٵ���ʱ������(=0:����)")
    EN("Max time of spindle speed arrive when ECAM.(=0:ignore)")},
//5400;1
    //LG_STR nszParAxisRetractSetting[9][LG_NUM] =
    {CN("�˻��������")
    EN("Retraction settings")},
	{CN("RSRT 0/1:��λ��ͣʱ,��ִ��/ִ���˳�����")
	EN("RSRT 0/1:Retraction NO/executed when RESET or ESTOP")},
	{CN("RTRS 0/1:��λִ���˻�ʱ,�ȸ�λPLC/��λPLC")
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
	{CN("�����˻��ٶ�(mm/min)")
	EN("Axis retract feed(mm/min)")},
//5411;1
	//LG_STR aszrAxisRetractDist[LG_NUM] =
	{CN("�����˻ؾ���(mm)")
	EN("Axis retrace distance(mm)")},
//5412;1
	//LG_STR nszParAxisRetractTimeCnst[LG_NUM] =
	{CN("�����˻�ʱ�䳣��(ms)")
	EN("Axis retract time const(ms)")},

//5420;1
    //LG_STR nszParAxisSpeedSetting[9][LG_NUM] =
    {CN("���ٶȿ����������")
    EN("Axis speed setting")},
	{CN("ASK 0/1:M26M27����ʹ��P��Q/K+P")
	EN("ASK 0/1:M26M27 use P or Q/K+P")},
	{CN("M27Z 0/1:M27����ͣ/ͣ��0λ��")
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
	{CN("M26M27����P������Ӧ�����(ͨ����)")
	EN("Axis no. of M26M27 function P")},
//5431;1
    //LG_STR nszParAxisSpeedQ[LG_NUM] =
	{CN("M26M27����Q������Ӧ�����(ͨ����)")
	EN("Axis no. of M26M27 function Q")},
//5432;1
    //LG_STR nszParAxisSpeedK[LG_NUM] =
	{CN("�����ٶȿ���ʱK���")
	EN("Axis feed control K No.")},
//5435;1
    //LG_STR nszParAxisSpeedCtrlTimeCnst[LG_NUM] =
    {CN("���ٶȿ��ƼӼ���ʱ�䳣��")
     EN("Axis SpeedCtrl Acc./dec. time constant")},

//5510;1
    //LG_STR nszParSkipDefDI[LG_NUM] =
	{CN("G31��������Ĭ�������")
	EN("G31 Skip function defualt DI")},
//5511;1
    //LG_STR nszParSkipLoad[LG_NUM] =
	{CN("G31�������ܸ���ֵ")
	EN("G31 Skip function Load value")},
//5515;1
    //LG_STR nszParG160SkipLoad[LG_NUM] =
	{CN("G160�������ܸ���ֵ")
	EN("G160 Skip function Load value")},
//5516;1
    //LG_STR nszParG160SkipFerr[LG_NUM] =
	{CN("G160�������ܸ������(0:�����)")
	EN("G160 Skip function Follow error value")},
//5520;1
    //LG_STR nszParAxisTrqCtrlSetting[9][LG_NUM] =
    {CN("Ť�ؿ����������")
    EN("Torque-contrl settings")},
	{CN("RSTQ 0/1:��λ��ͣʱ,��/�˳�Ť�ؿ���ģʽ")
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
	{CN("Ť�ؿ���ʱ,Ĭ���ٶ�")
	EN("Torque contrl speed")},
//5522;1
    //LG_STR nszParMaxTrqLoadValue[LG_NUM] =
	{CN("������ת�ض�Ӧ���ŷ�����ֵ")
	EN("Load value when motor max torque output")},

    //������岹
//5530;1
    //LG_STR nszParPolarIPLinearAx[LG_NUM] =
	{CN("������岹ֱ�������(ͨ����)")
	EN("Linear axis for polar interpolation")},
//5531;1
    //LG_STR nszParPolarIPRotateAx[LG_NUM] =
	{CN("������岹����ת�����(ͨ����)")
	EN("rotation axis for polar interpolation")},
//5532;1
    //LG_STR nszParPolarIPRotateAxErr[LG_NUM] =
	{CN("������岹�ļ����᷽���ƫ����")
	EN("Hypothetical axis error for polar interpolation")},

    //���߿���
    //LG_STR nszParNormalCtrlSet[LG_NUM] =
	{CN("���߿���")
	EN("Normal direction controlling settings")},

    //LG_STR nszParNormalCtrlAx[LG_NUM] =
	{CN("���з��߿��Ƶ����")
	EN("Number of the axis for normal direction controlling")},

    //LG_STR nszParNormalCtrlAxFeed[LG_NUM] =
	{CN("���߷�����������ת�ٶ�")
	EN("Rotation feed of the normal direction controlled axis")},

    //������ͬ�� 
//5600;1
    //LG_STR nszParAxisSyncSetting[9][LG_NUM] =
    {CN("������ͬ�������������")
    EN("Axis synchronous control setting")},
	{CN("ASE 0/1:��ͬ��������Ч/��Ч")
	EN("ASE 0/1:Axis synchronous control disable/enable")},
	{CN("ASMC 0/1:��ͬ��ʱ,��/ͨ������������������ֵ")
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
	{CN("������ͬ�������е�����������(ϵͳ��)")
	EN("Axis number of master axis in axis synchronous control(Nc-axis)")},
//5611;1
    //LG_STR nszParAxisSyncMachCoorCheck[LG_NUM] =
	{CN("������ͬ������ʱ,�����������������ֵ")
	EN("Max-error when synchronization error check based on mach-coor")},
//5660;1
    //LG_STR nszParAxisXchgNo[LG_NUM] =
	{CN("�����ύ��ָ��ı��")
	EN("Axis exchange command No.")},

    //λ�ÿ��ؿ����� 
//5910;1
    //LG_STR nszParPosSwAx1[LG_NUM] =
	{CN("ִ�е�1λ�ÿ��ع��ܵ����(ͨ����)")
	EN("The 1st position switch function performed axis")},
//5911;1
    //LG_STR nszParPosSwAx2[LG_NUM] =
	{CN("ִ�е�2λ�ÿ��ع��ܵ����(ͨ����)")
	EN("The 2st position switch function performed axis")},
//5912;1
    //LG_STR nszParPosSwAx3[LG_NUM] =
	{CN("ִ�е�3λ�ÿ��ع��ܵ����(ͨ����)")
	EN("The 3st position switch function performed axis")},
//5913;1
    //LG_STR nszParPosSwAx4[LG_NUM] =
	{CN("ִ�е�4λ�ÿ��ع��ܵ����(ͨ����)")
	EN("The 4st position switch function performed axis")},
//5914;1
    //LG_STR nszParPosSwAx5[LG_NUM] =
	{CN("ִ�е�5λ�ÿ��ع��ܵ����(ͨ����)")
	EN("The 5st position switch function performed axis")},
//5915;1
    //LG_STR nszParPosSwAx6[LG_NUM] =
	{CN("ִ�е�6λ�ÿ��ع��ܵ����(ͨ����)")
	EN("The 6st position switch function performed axis")},
//5916;1
    //LG_STR nszParPosSwAx7[LG_NUM] =
	{CN("ִ�е�7λ�ÿ��ع��ܵ����(ͨ����)")
	EN("The 7st position switch function performed axis")},
//5917;1
    //LG_STR nszParPosSwAx8[LG_NUM] =
	{CN("ִ�е�8λ�ÿ��ع��ܵ����(ͨ����)")
	EN("The 8st position switch function performed axis")},
//5930;1
    //LG_STR nszParPosSwPosMax1[LG_NUM] =
	{CN("��1λ�ÿ��ط�Χ�����ֵ")
	EN("Maximum value of the range of the 1st position switch")},
//5931;1
    //LG_STR nszParPosSwPosMax2[LG_NUM] =
	{CN("��2λ�ÿ��ط�Χ�����ֵ")
	EN("Maximum value of the range of the 2st position switch")},
//5932;1
    //LG_STR nszParPosSwPosMax3[LG_NUM] =
	{CN("��3λ�ÿ��ط�Χ�����ֵ")
	EN("Maximum value of the range of the 3st position switch")},
//5933;1
    //LG_STR nszParPosSwPosMax4[LG_NUM] =
	{CN("��4λ�ÿ��ط�Χ�����ֵ")
	EN("Maximum value of the range of the 4st position switch")},
//5934;1
    //LG_STR nszParPosSwPosMax5[LG_NUM] =
	{CN("��5λ�ÿ��ط�Χ�����ֵ")
	EN("Maximum value of the range of the 5st position switch")},
//5935;1
    //LG_STR nszParPosSwPosMax6[LG_NUM] =
	{CN("��6λ�ÿ��ط�Χ�����ֵ")
	EN("Maximum value of the range of the 6st position switch")},
//5936;1
    //LG_STR nszParPosSwPosMax7[LG_NUM] =
	{CN("��7λ�ÿ��ط�Χ�����ֵ")
	EN("Maximum value of the range of the 7st position switch")},
//5937;1
    //LG_STR nszParPosSwPosMax8[LG_NUM] =
	{CN("��8λ�ÿ��ط�Χ�����ֵ")
	EN("Maximum value of the range of the 8st position switch")},
//5950;1
    //LG_STR nszParPosSwPosMin1[LG_NUM] =
	{CN("��1λ�ÿ��ط�Χ����Сֵ")
	EN("Minimum value of the range of the 1st position switch")},
//5951;1
    //LG_STR nszParPosSwPosMin2[LG_NUM] =
	{CN("��2λ�ÿ��ط�Χ����Сֵ")
	EN("Minimum value of the range of the 2st position switch")},
//5952;1
    //LG_STR nszParPosSwPosMin3[LG_NUM] =
	{CN("��3λ�ÿ��ط�Χ����Сֵ")
	EN("Minimum value of the range of the 3st position switch")},
//5953;1
    //LG_STR nszParPosSwPosMin4[LG_NUM] =
	{CN("��4λ�ÿ��ط�Χ����Сֵ")
	EN("Minimum value of the range of the 4st position switch")},
//5954;1
    //LG_STR nszParPosSwPosMin5[LG_NUM] =
	{CN("��5λ�ÿ��ط�Χ����Сֵ")
	EN("Minimum value of the range of the 5st position switch")},
//5955;1
    //LG_STR nszParPosSwPosMin6[LG_NUM] =
	{CN("��6λ�ÿ��ط�Χ����Сֵ")
	EN("Minimum value of the range of the 6st position switch")},
//5956;1
    //LG_STR nszParPosSwPosMin7[LG_NUM] =
	{CN("��7λ�ÿ��ط�Χ����Сֵ")
	EN("Minimum value of the range of the 7st position switch")},
//5957;1
    //LG_STR nszParPosSwPosMin8[LG_NUM] =
	{CN("��8λ�ÿ��ط�Χ����Сֵ")
	EN("Minimum value of the range of the 8st position switch")},

    //##CHN ##9200
	//LG_STR nszParChnSet[9][LG_NUM] =
	{CN("��ͨ���������")
	EN("Multi-Channel settings")},
	{CN("RST 0/1:������帴λʱ,����ͨ��/��ǰͨ����λ")
	EN("RST 0/1:All/current channel reset when MDI reset down")},
	{CN("CWPB 0/1:ͨ���ȴ�G04.1�����Qֵ,��ͨ�������/���������")
	EN("CWPB 0/1:Q value of G04.1,use path number combination/binary value")},
	{CN("CHMS 0/1:��ͨ��ʹ�ö����Ĺ�����ʽ/��ͬ������ʽ")
	EN("CHMS 0/1:Use seperate operation mode/same mode for Multi-Channel")},
	{CN("CHAL 0/1:��ͨ����������/һ��ͨ����������ͨ��ֹͣ")
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
	{CN("ͨ��ѡ���������(����PLCʱ)")
	EN("Channel select settings(Fixed PLC)")},
	{CN("CHUS 0/1:ͨ��USER��ѡ��ͨ���ر�/��")
	EN("CHUS 0/1:use USER key as channel select disable/enable")},
	{CN("CHIS 0/1:ͨ���ⲿ�����ѡ��ͨ���ر�/��")
	EN("CHIS 0/1:use DI as channel select disable/enable")},
	{CN("CHEE 0/1:ͨ���ⲿ�����ֱ��ѡ��/����ѡ��ͨ��")
	EN("CHEE 0/1:use DI derectly/encode as channel select")},
	{CN("CHUU 0/1:USER��ѡ��ͨ��ʱ,��ʹ��/ʹ���Զ��巽ʽ")
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
    {CN("ͨ���ȴ�ָ��G04.1Ĭ��Qֵ")
    EN("Channel wait command G04.1 default Q value")},

    //LG_STR nszParChnSelDI1[LG_NUM] =
    {CN("ͨ��ѡ�������1")
    EN("Channel select input port 1")},

    //LG_STR nszParChnSelDI2[LG_NUM] =
    {CN("ͨ��ѡ�������2")
    EN("Channel select input port 2")},

    //LG_STR nszParChnSelDI3[LG_NUM] =
    {CN("ͨ��ѡ�������3")
    EN("Channel select input port 3")},

    //LG_STR nszParChnSelDI4[LG_NUM] =
    {CN("ͨ��ѡ�������4")
    EN("Channel select input port 4")},

    //LG_STR nszParChnSelDI5[LG_NUM] =
    {CN("ͨ��ѡ�������5")
    EN("Channel select input port 5")},

    //LG_STR nszParChnSelDI6[LG_NUM] =
    {CN("ͨ��ѡ�������6")
    EN("Channel select input port 6")},

    //LG_STR nszParChnSelDI7[LG_NUM] =
    {CN("ͨ��ѡ�������7")
    EN("Channel select input port 7")},

    //LG_STR nszParChnSelDI8[LG_NUM] =
    {CN("ͨ��ѡ�������8")
    EN("Channel select input port 8")},

    //LG_STR nszParChnSelTypeDI[LG_NUM] =
    {CN("ͨ��ѡ��ʽ(���/���)ѡ�������")
    EN("Channel select type(panel/external) select input port")},

    //LG_STR nszParChnOpSelAllDI[LG_NUM] =
    {CN("ͨ������ȫѡ�����")
    EN("Channel operation select all input port")},

    //LG_STR nszParUser1ChnSelDef[LG_NUM] =
    {CN("USER1�Զ���ͨ��ѡ�����")
    EN("USER1 Channel select sequence no.")},

    //LG_STR nszParUser2ChnSelDef[LG_NUM] =
    {CN("USER2�Զ���ͨ��ѡ�����")
    EN("USER2 Channel select sequence no.")},

    //LG_STR nszParUser3ChnSelDef[LG_NUM] =
    {CN("USER3�Զ���ͨ��ѡ�����")
    EN("USER3 Channel select sequence no.")},

    //LG_STR nszParUser4ChnSelDef[LG_NUM] =
    {CN("USER4�Զ���ͨ��ѡ�����")
    EN("USER4 Channel select sequence no.")},

    //LG_STR nszParUser5ChnSelDef[LG_NUM] =
    {CN("USER5�Զ���ͨ��ѡ�����")
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
    // �ŷ����� ##SV ##Servo
    //-------------------------------------------------------------------------
	//LG_STR nszParSvFuncSel1[LG_NUM] =
	{CN("����ѡ���������1")
	EN("Func. Select switch 1")},

	//LG_STR nszParSvSpeedLoopGain[LG_NUM] =
	{CN("�ٶȻ�����")
	EN("Speed loop gain")},

	//LG_STR nszParSvSpeedLoopIntegralTime [LG_NUM] =
	{CN("�ٶȻ�����ʱ��(0.1ms)")
	EN("Speed loop integral time(0.1ms)")},

	//LG_STR nszParSvPositionLoopGain[LG_NUM] =
	{CN("λ�û�����")
	EN("Position loop gain")},

	//LG_STR nszParSvPositionLoopForward[LG_NUM] =
	{CN("λ�û�ǰ��ϵ��")
	EN("Position loop forward")},

	//LG_STR nszParSvEGearRatioMul[LG_NUM] =
	{CN("���ӳ��ֱȷ���")
	EN("Electronic Gear Ratio (Numerator)")},

	//LG_STR nszParSvEGearRatioDiv[LG_NUM] =
	{CN("���ӳ��ֱȷ�ĸ")
	EN("Electronic Gear Ratio (Denominator)")},

	//LG_STR nszParTorqueCmdFilterTime[LG_NUM] =
	{CN("ת��ָ���˲�ʱ��")
	EN("Torque command filtering time")},

	//LG_STR nszParFErrLimit[LG_NUM] =
	{CN("�����������")
	EN("Follow error limit")},

	//LG_STR nszParInputSignalSel1[LG_NUM] =
	{CN("�����ź�ѡ��1")
	EN("Input signal Select 1")},

	//LG_STR nszParInputSignalSel2[LG_NUM] =
	{CN("�����ź�ѡ��2")
	EN("Input signal Select 2")},

	//LG_STR nszParInputSignalSel3[LG_NUM] =
	{CN("�����ź�ѡ��3")
	EN("Input signal Select 3")},

    //-------------------------------------------------------------------------
    // ������ϲ��� ##PAR ##WAVE
    //-------------------------------------------------------------------------
	//LG_STR nszParHoriAxisGridTime[LG_NUM] =
	{CN("����դ����ʱ��(ms)")
	EN("Horizontal axis grid interval time(ms)")},

	//LG_STR nszParMonWave1Addr[LG_NUM] =
	{CN("����1��ַ(��Ϻ�,��202.1)")
    EN("Wave 1 address(Dgn No:202.1 eg.)")},

	//LG_STR nszParMonWave1VertGridValue[LG_NUM] =
	{CN("����1����դ�����̶�ֵ")
	EN("Wave 1 vertical grid interval value")},

	//LG_STR nszParMonWave1VertOrgValue[LG_NUM] =
	{CN("����1�����м���׼ֵ")
	EN("Wave 1 vertical grid center base value")},

	//LG_STR nszParMonWave2Addr[LG_NUM] =
	{CN("����2��ַ(��Ϻ�,��202.1)")
	EN("Wave 2 address(Dgn No:202.1 eg.)")},

	//LG_STR nszParMonWave2VertGridValue[LG_NUM] =
	{CN("����2����դ�����̶�ֵ")
	EN("Wave 2 vertical grid interval value")},

	//LG_STR nszParMonWave2VertOrgValue[LG_NUM] =
	{CN("����2�����м���׼ֵ")
	EN("Wave 2 vertical grid center base value")},

	//LG_STR nszParMonWave3Addr[LG_NUM] =
	{CN("����3��ַ(��Ϻ�,��202.1)")
	EN("Wave 3 address(Dgn No:202.1 eg.)")},

	//LG_STR nszParMonWave3VertGridValue[LG_NUM] =
	{CN("����3����դ�����̶�ֵ")
	EN("Wave 3 vertical grid interval value")},

	//LG_STR nszParMonWave3VertOrgValue[LG_NUM] =
	{CN("����3�����м���׼ֵ")
	EN("Wave 3 vertical grid center base value")},

	//LG_STR nszParMonWave4Addr[LG_NUM] =
	{CN("����4��ַ(��Ϻ�,��202.1)")
	EN("Wave 4 address(Dgn No:202.1 eg.)")},

	//LG_STR nszParMonWave4VertGridValue[LG_NUM] =
	{CN("����4����դ�����̶�ֵ")
	EN("Wave 4 vertical grid interval value")},

	//LG_STR nszParMonWave4VertOrgValue[LG_NUM] =
	{CN("����4�����м���׼ֵ")
	EN("Wave 4 vertical grid center base value")},

	//LG_STR nszParMonSignalAddr1[LG_NUM] =
	{CN("�źŵ�ַ1(PLC��ַ,��X0.1)")
	EN("Signal address 1(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr2[LG_NUM] =
	{CN("�źŵ�ַ2(PLC��ַ,��X0.1)")
	EN("Signal address 2(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr3[LG_NUM] =
	{CN("�źŵ�ַ3(PLC��ַ,��X0.1)")
	EN("Signal address 3(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr4[LG_NUM] =
	{CN("�źŵ�ַ4(PLC��ַ,��X0.1)")
	EN("Signal address 4(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr5[LG_NUM] =
	{CN("�źŵ�ַ5(PLC��ַ,��X0.1)")
	EN("Signal address 5(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr6[LG_NUM] =
	{CN("�źŵ�ַ6(PLC��ַ,��X0.1)")
	EN("Signal address 6(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr7[LG_NUM] =
	{CN("�źŵ�ַ7(PLC��ַ,��X0.1)")
	EN("Signal address 7(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr8[LG_NUM] =
	{CN("�źŵ�ַ8(PLC��ַ,��X0.1)")
	EN("Signal address 8(PLC addr.:X0.1 eg.)")},

	//LG_STR nszParMonSignalAddr9[LG_NUM] =
	{CN("�źŵ�ַ9(PLC��ַ,��X0.1)")
	EN("Signal address 9(PLC addr.:X0.1 eg.)")},

    //-------------------------------------------------------------------------
    // ͼ�β��� ##PAR ##SIMU ##PRH
    //-------------------------------------------------------------------------
	//LG_STR nszParGraphDisplaySet[9][LG_NUM] =
	{CN("ͼ����ʾ�������")
	EN("Graph display settings")},
	{CN("XMDP 0/1:��X���ݽ��о�����ʾ���ܹر�")
    EN("XMDP 0/1:X-Axis mirror display function off/on")},
	{CN("YMDP 0/1:��Y���ݽ��о�����ʾ���ܹر�")
    EN("YMDP 0/1:Y-Axis mirror display function off/on")},
	{CN("ZMDP 0/1:��Z���ݽ��о�����ʾ���ܹر�")
    EN("ZMDP 0/1:Z-Axis mirror display function off/on")},
	{CN("SXMD 0/1:ͬʱ��ʾԭ�켣��ˮƽ����Ļ�����ܹر�/��")
	EN("SXMD 0/1:dispaly path and screen hori-mirror simultaneously function off/on")},
	{CN("XSDP 0/1:����ϵX��ʹ�ý�����λ��/���ᷴ��λ��")
    EN("XSDP 0/1:X-Axis use axis/spindle postion")},
	{CN("YSDP 0/1:����ϵY��ʹ�ý�����λ��/���ᷴ��λ��")
    EN("YSDP 0/1:Y-Axis use axis/spindle postion")},
	{CN("ZSDP 0/1:����ϵZ��ʹ�ý�����λ��/���ᷴ��λ��")
    EN("ZSDP 0/1:Z-Axis use axis/spindle postion")},
	{CN("")
	EN("")},

	//LG_STR nszParGraphChn[LG_NUM] =
	{CN("ͼ��ģ��ͨ����")
	EN("Channel of Graph")},

	//125 LG_STR nszParScaler[LG_NUM] =
	{CN("���곤��[mm](���ڼ�����ʾ����)")
	 EN("Ref-Len[mm](used to calclate scale)")},

    //LG_STR aszWorkpieceL[LG_NUM]
    {CN("��������")
    EN("Work. Length")},

    //LG_STR aszWorkpieceD[LG_NUM]
    {CN("�����⾶")
    EN("Work. Dia.")},

    //LG_STR aszWorkpieced[LG_NUM]
    {CN("�����ھ�")
    EN("Work. hole Dia.")},

	//LG_STR nszParPlane[LG_NUM]
	{CN("��ʾ����ϵ(0:XOY,1:ZOX,2:YOZ,3:XYZ,4:XOZ)")
	EN("Graphic Coordinates(0:XOY,1:ZOX,2:YOZ,3:XYZ,4:XOZ)")},

	//LG_STR nszParCoorSysAxX[LG_NUM]
	{CN("����ϵX�����(�Զ�������ϵX������)(ͨ����)")
	EN("Coordinate system X axis(User defined coordinate X axis)")},

	//LG_STR nszParCoorSysAxY[LG_NUM]
	{CN("����ϵY�����(�Զ�������ϵY������)(ͨ����)")
	EN("Coordinate system Y axis(User defined coordinate Y axis)")},

	//LG_STR nszParCoorSysAxZ[LG_NUM]
	{CN("����ϵZ�����(�Զ�������ϵZ������)(ͨ����)")
	EN("Coordinate system Z axis(User defined coordinate Z axis)")},

	//LG_STR nszParDisplayOrgX[LG_NUM]
	{CN("��ʾԭ��X����(Ĭ�����ź���ʾԭ���Ӧ��X������,�뾶)")
	EN("Display origin axis X(Display and room default origin X axis(Radius))")},

	//LG_STR nszParDisplayOrgY[LG_NUM]
	{CN("��ʾԭ��Y����(Ĭ�����ź���ʾԭ���Ӧ��Y������)")
	EN("Display origin axis Y(Display and room default origin Y axis)")},

	//LG_STR nszParDisplayOrgZ[LG_NUM]
	{CN("��ʾԭ��Z����(Ĭ�����ź���ʾԭ���Ӧ��Z������)")
	EN("Display origin axis Z(Display and room default origin Z axis)")},

    //-------------------------------------------------------------------------
    // ������ϲ��� ##DGN
    //-------------------------------------------------------------------------
	//85 LG_STR nszDgnSoftVersion[LG_NUM] =
	{CN("����汾��")  //0+
	 EN("Software Version")},

	//85 LG_STR nszDgnBootVersion[LG_NUM] =
	{CN("Boot�汾��")  //0+
	 EN("Boot Version")},

	//85 LG_STR nszDgnSoftBuild[LG_NUM] =
	{CN("��������")  //0+
	 EN("Software build No")},

	//85 LG_STR nszDgnLogicVersion[LG_NUM] =
	{CN("�߼��汾��")  //0+
	 EN("Logic Version")},

	//85 LG_STR nszDgnMotCycle[LG_NUM] =
	{CN("��������(ms)")  //0+
	 EN("Motion cycle(ms)")},

	//85 LG_STR nszDgnMotUsedTime[LG_NUM] =
	{CN("���ƺ�ʱ")  //0+
	 EN("Motion used time")},

	//85 LG_STR nszDgnCpuUsage[LG_NUM] =
	{CN("CPU������")  //0+
	 EN("Cpu Usage")},

	//85 LG_STR nszDgnSysName[LG_NUM] =
	{CN("ϵͳ����")  //0+
	 EN("Sytem name")},

	//85 LG_STR nszDgnInputPort[LG_NUM] =
	{CN("�����")  //
	 EN("Input Port")},

	//85 LG_STR nszDgnOutputPort[LG_NUM] =
	{CN("�����")
	 EN("Output Port")},

     //94 LG_STR nszDgnBusIOCtrlMode[LG_NUM] =
     {CN("IOվ���Ʒ�ʽ")
     EN("Bus IO Ctrl Mode")},

     //94 LG_STR nszDgnBusIOStatus[LG_NUM] =
     {CN("IOվ״̬����")
     EN("Bus IO Sttus")},

     //94 LG_STR nszDgnBusIOVer[LG_NUM] =
     {CN("IOվ�汾")
     EN("Bus IO Ver")},

	//128 LG_STR nszDgnSpdlEncoder[LG_NUM] =
	{CN("���������")
	 EN("SpdlEncodr")},

	//85 LG_STR nszDgnSpdlEncoderRelPulse[LG_NUM] =
	{CN("������������������")
	 EN("SpdlEncodr rel. Pulse")},

	//85 LG_STR nszDgnSpdlEncoderAbsPulse[LG_NUM] =
	{CN("�������������������")
	 EN("SpdlEncodr abs. Pulse")},

	//85 LG_STR nszDgnSpdlEncoderAbsPulsePC[LG_NUM] =
	{CN("�������������������(PC)")
	 EN("SpdlEncodr abs. Pulse(PC)")},

	//128 LG_STR nszDgnSpdlEncoderInc[LG_NUM] =
	{CN("�������������")
	 EN("SpdlEncodrInc")},

	//128 LG_STR nszDgnSpdlEncoderRes[LG_NUM] =
	{CN("����������ֱ���")
	 EN("SpdlEncodr res.")},

	//128 LG_STR nszDgnSpdlEncoderZErr[LG_NUM] =
	{CN("��������������")
	 EN("SpdlEncodr ZErr.")},

	//128 LG_STR nszDgnSpdlEncoderZPC[LG_NUM] =
	{CN("���������������")
	 EN("SpdlEncodr ZPC")},

	//128 LG_STR nszDgnAxisEncoderZPC[LG_NUM] =
	{CN("���������������")
	 EN("Axis Encodr ZPC")},

	//128 LG_STR nszDgnHndlEncoder[LG_NUM] =
	{CN("���ֱ�����")
	 EN("HndlEncodr")},

	//128 LG_STR nszDgnHndlEncoderInc[LG_NUM] =
    {CN("���ֱ���������")
    EN("HndlEncodrInc")},

	//85 LG_STR nszDgnHndlAccumPulse[LG_NUM] =
	{CN("���ֱ������ۼ�������")
	 EN("HndlEncodr accum. Pulse")},

    //31 LG_STR nszDgnServoModel[LG_NUM] =
    {CN("�ŷ��ͺ�")
    EN("ServoModel")},

    //31 LG_STR nszDgnServoVer[LG_NUM] =
    {CN("�ŷ��汾��")
    EN("ServoVera")},

    //31 LG_STR nszDgnMotorModel[LG_NUM] =
    {CN("����ͺ�")
    EN("MotorModel")},

    //31 LG_STR nszDgnMotorEncoderVer[LG_NUM] =
    {CN("����������汾��")
    EN("MotorEncoderVer")},

    //31 LG_STR nszDgnAbsCoor[LG_NUM] =
    {CN("��������")
    EN("Abs.Coor")},

    //31 LG_STR nszDgnFbAbsCoor[LG_NUM] =
    {CN("������������")
    EN("Fb-Abs.Coor")},

	//94 LG_STR nszDgnMachCoor[LG_NUM] =
	{CN("��������")
	 EN("MachCoor")},

	//94 LG_STR nszDgnFbMachCoor[LG_NUM] =
	{CN("������������")
	 EN("Fb-MachCoor")},

	//94 LG_STR nszDgnEndMachCoor[LG_NUM] =
	{CN("Ŀ��λ�û�������")
	 EN("Dst-MachCoor")},

	//94 LG_STR nszDgnLocalCoorSysOrg[LG_NUM] =
	{CN("�ֲ�����ϵԭ��")
	 EN("Local CoorSys Org.")},

	//94 LG_STR nszDgnAbsCoorSysOrg[LG_NUM] =
	{CN("��������ϵԭ��")
	 EN("Abs-CoorSys Org.")},

	//94 LG_STR nszDgnCurTOfs[LG_NUM] =
	{CN("��ǰ����ֵ")
	 EN("Current ToolOfs")},

	//85 LG_STR nszDgnGapPos[LG_NUM] =
	{CN("�����϶����ֵ")
	 EN("Gap-compz. value")},

	//85 LG_STR nszDgnPitchCompPos[LG_NUM] =
	{CN("�ݾ�����ֵ")
	 EN("Pitch-error-compz. value")},

	//85 LG_STR nszDgnHndlIntrValue[LG_NUM] =
	{CN("�����жϲ���ֵ")
	 EN("Handle-Intr-value")},

	//85 LG_STR nszDgnEGBWpCompValue[LG_NUM] =
	{CN("EGB������ת������")
	 EN("EGB rotate comp value")},

	//85 LG_STR nszDgnCmdAccumPulse[LG_NUM] =
	{CN("ָ���ۼ�������")
	 EN("Command accum. Pulse")},

	//85 LG_STR nszDgnFbCmdAccumPulse[LG_NUM] =
	{CN("����ָ���ۼ�������")
	 EN("Fb-Command accum. Pulse")},

	//85 LG_STR nszDgnMotorCmdAccumPulse[LG_NUM] =
	{CN("���ָ���ۼ�������")
	 EN("Motor-cmd accum. Pulse")},

	//85 LG_STR nszDgnMotorFbAccumPulse[LG_NUM] =
	{CN("��������ۼ�������")
	 EN("Fb-Motor-accum. Pulse")},

	//85 LG_STR nszDgnCmdPosFErr[LG_NUM] =
	{CN("ָ��λ�ø������")
	 EN("Cmd-position FErr")},

	//85 LG_STR nszDgnMotorPosFErr[LG_NUM] =
	{CN("���λ�ø������")
	 EN("Motor position FErr")},

	//85 LG_STR nszDgnCmdIncPulse[LG_NUM] =
	{CN("ָ������������")
	 EN("Command inc. Pulse")},

	//85 LG_STR nszDgnFbCmdIncPulse[LG_NUM] =
	{CN("����ָ������������")
	 EN("Fb-Command inc. Pulse")},

	//85 LG_STR nszDgnMotorCmdIncPulse[LG_NUM] =
	{CN("���ָ������������")
	 EN("Motor-cmd inc. Pulse")},

	//85 LG_STR nszDgnMotorFbIncPulse[LG_NUM] =
	{CN("�����������������")
	 EN("Motor-fb inc. Pulse")},

	//128 LG_STR nszDgnSpdlDAOut[LG_NUM] =
	{CN("����ģ�������") //300+
	 EN("Spdl Output DA")},

	//128 LG_STR nszDgnSpdlActSpeed[LG_NUM] =
	{CN("����ʵ��ת��")
	 EN("Spdl Actual Speed")},

	//128 LG_STR nszDgnSpdlStopFINTime[LG_NUM] =
	{CN("����ֹͣ���ʱ��(s)")
	 EN("Spdl Stop FIN time(s)")},

	//128 LG_STR nszDgnSpdlSpeedOut[LG_NUM] =
	{CN("�����ٶ����")
	 EN("Spdl Speed DA")},

	//128 LG_STR nszDgnSpdlDgree[LG_NUM] =
	{CN("����Ƕ�")
	 EN("Spdl Degree")},

	//85 LG_STR nszDgnSpdlFbIncPulse[LG_NUM] =
	{CN("���ᷴ������������")
	 EN("Spdl Fb-inc. Pulse")},

	//94 LG_STR nszDgnDecToPc[LG_NUM] =
	{CN("DEC��PC�ľ���")
	 EN("Dist from DEC to PC")},

	//94 LG_STR nszDgnECamPos[LG_NUM] =
	{CN("ECAMλ��")
	 EN("ECAM Position")},

	//94 LG_STR nszDgnECamPosInc[LG_NUM] =
	{CN("ECAMλ������")
	 EN("ECAM Position Inc")},

	//85 LG_STR nszDgnTapCompVal[LG_NUM] =
	{CN("��˿����ֵ")
	 EN("Tap Comp. value")},

	//85 LG_STR nszDgnTapRotFErrorVal[LG_NUM] =
	{CN("��˿��ת�������ֵ")
	 EN("Tap Rot-follow error value")},

	//85 LG_STR nszDgnTapFeedFErrorVal[LG_NUM] =
	{CN("��˿��������ֵ")
	 EN("Tap Feed-follow error value")},

	//85 LG_STR nszDgnTapErrorVal[LG_NUM] =
	{CN("��˿���ֵ")
	 EN("Tap error value")},

	//85 LG_STR nszDgnTapErrorMax[LG_NUM] =
	{CN("��˿������ֵ")
	 EN("Tap max error value")},

	//85 LG_STR nszDgnAxisLoadMon2Time[LG_NUM] =
	{CN("���Ḻ�ؼ��2�ﵽʱ��(s)")
	 EN("Axis 2nd load monitor arrive time(s)")},

	//85 LG_STR nszDgnAxisLoadMon3Time[LG_NUM] =
	{CN("���Ḻ�ؼ��3�ﵽʱ��(s)")
	 EN("Axis 3th load monitor arrive time(s)")},

	//85 LG_STR nszDgnAxisLoadMon4Time[LG_NUM] =
	{CN("���Ḻ�ؼ��4�ﵽʱ��(s)")
	 EN("Axis 4th load monitor arrive time(s)")},

	//85 LG_STR nszDgnAxisLoadMon5Time[LG_NUM] =
	{CN("���Ḻ�ؼ��5�ﵽʱ��(s)")
	 EN("Axis 5th load monitor arrive time(s)")},

	//85 LG_STR nszDgnAxisState[LG_NUM] =
	{CN("����״̬")
	 EN("Axis state")},

	//85 LG_STR nszDgnDebugInfo1[LG_NUM] =
	{CN("������Ϣ1")
	 EN("Debug Info1")},

	//85 LG_STR nszDgnDebugInfo2[LG_NUM] =
	{CN("������Ϣ2")
	 EN("Debug Info2")},

	//85 LG_STR nszDgnDebugInfo3[LG_NUM] =
	{CN("������Ϣ3")
	 EN("Debug Info3")},

	//85 LG_STR nszDgnDebugInfo4[LG_NUM] =
	{CN("������Ϣ4")
	 EN("Debug Info4")},

	//85 LG_STR nszDgnDebugInfo5[LG_NUM] =
	{CN("������Ϣ5")
	 EN("Debug Info5")},
    //-------------------------------------------------------------------------
    // ������ϲ��� ##DGN ##SV
    //-------------------------------------------------------------------------
	//94 LG_STR nszDgnSVOptionLo_9[LG_NUM] =
	{CN("�ŷ�����ѡ���λ")
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
	{CN("�ŷ�����ѡ���λ")
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
	{CN("�ŷ�����״̬��λ")
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
    {CN("�ŷ�����״̬��λ")
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
    {CN("�ŷ��������Ʒ�ʽ")
    EN("SV Ctrl Mode Fb")},

    //94 LG_STR nszDgnSVCtrlModeCmd[LG_NUM] =
    {CN("�ŷ�������Ʒ�ʽ")
    EN("SV Ctrl Mode Cmd")},

    //94 LG_STR nszDgnSVIOMonLo_9[LG_NUM] =
    {CN("�ŷ�IO��ص�λ")
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
     {CN("�ŷ�IO��ظ�λ")
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
	{CN("�ŷ�����λ��ֵ")
	 EN("SV Fb-Motor-position value")},

	//85 LG_STR nszDgnSVFbMPosErr[LG_NUM] =
	{CN("�ŷ������������")
	 EN("SV Fb-position-error")},

	//85 LG_STR nszDgnSVFbSpeedValue[LG_NUM] =
	{CN("�ŷ������ٶ�ֵ")
	 EN("SV Fb-speed value")},

	//85 LG_STR nszDgnSVFbCmdTRQ[LG_NUM] =
	{CN("�ŷ�����ָ��Ť��")
	 EN("SV Fb-cmd TRQ")},

	//85 LG_STR nszDgnSVFbLPos[LG_NUM] =
	{CN("�ŷ���������λ��ֵ")
	 EN("SV Fb-LPos")},

	//85 LG_STR nszDgnSVCmdLimitLoad[LG_NUM] =
	{CN("�ŷ�ָ�������ֵ")
	 EN("SV Command Limit Load")},

    //GROUP:��ʾnszNote
	//360 LG_STR anszNoteTimeSet[6][LG_NUM] =
	{CN("�� ���뷶Χ:2000-2099")   //0
	 EN("Year input range:2000-2099")},
	{CN("�� ���뷶Χ:01-12")   //1
	 EN("Month input range:01-12")},
	{CN("�� ���뷶Χ:01-31")   //2
	 EN("Day input range:01-31")},
	{CN("ʱ ���뷶Χ:00-23")   //3
	 EN("Hour input range:00-23")},
	{CN("�� ���뷶Χ:00-59")   //4
	 EN("Minute input range:00-59")},
	{CN("�� ���뷶Χ:00-59")   //5
	 EN("Second input range:00-59")},

	//19 LG_STR anszNoteSetPassword[4][LG_NUM] =
	{CN("�����������Ȩ�޼���")   //2
	 EN("Level of the input password")},
	{CN("")   //2
	 EN("")},
	{CN("�������ȷ��������һ��")   //1
	 EN("New password and retype must the same")},
	{CN("")   //2
	 EN("")},

	//19 LG_STR anszNotePermit[10][LG_NUM] =
    {CN("0:�޶���")   //0
    EN("0:Undefined")},
    {CN("1:�޶���")   //1
    EN("1:Undefined")},
    {CN("2:�޶���")   //2
    EN("2:Undefined")},
    {CN("3:�޶���")   //3
    EN("3:Undefined")},
    {CN("4:�û�����")   //4
    EN("4:User password")},
    {CN("5:�߼��û�����")   //5
    EN("5:Senior user password")},
    {CN("6:����")   //6
    EN("6:Manufacturer")},
    {CN("7:�޶���")   //7
    EN("7:Undefined")},
    {CN("8:�޶���")   //8
    EN("8:Undefined")},
    {CN("9:�޶���")   //9
    EN("9:Undefined")},

	//LG_STR anszDataProtect[10][LG_NUM] =
//    {CN("ϵͳ����")   //0
//    EN("System parameter")},
//    {CN("�ݾಹ��")   //1
//    EN("Pitch Error parameter")},
//    {CN("ʱ��")   //2
//    EN("Time")},
    {CN("��ͨ�ӹ�����")   //3
    EN("Normal program of part")},
    {CN("�ӹ�����O7xxx")   //4
    EN("program O7xxx of part")},
    {CN("�ӹ�����O8xxx")   //5
    EN("program O8xxx of part")},
    {CN("�ӹ�����O9xxx")   //6
    EN("program O9xxx of part")},
    {CN("��ͼ")   //7
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
    {CN("�Ƿ񽫲����ָ�Ĭ��ֵ?")
    EN("Recover parameter with default value?")},

	//19 LG_STR nszNoteClearData[LG_NUM] =
    {CN("�Ƿ����ȫ������?")
    EN("Clear all the data?")},

	//19 LG_STR nszNoteClearSelectedData[LG_NUM] =
    {CN("�Ƿ������ѡ����?")
    EN("Clear the selected data?")},

	//19 LG_STR nszNoteClearToolOfsWearData[LG_NUM] =
    {CN("�Ƿ����ȫ������ƫ�ü�ĥ������?")
    EN("Clear all the tool offset and wear data?")},

	//19 LG_STR nszNoteClearToolWearData[LG_NUM] =
    {CN("�Ƿ����ȫ������ĥ������?")
    EN("Clear all the tool wear data?")},

	//19 LG_STR nszNoteClearCurrentAxisData[LG_NUM] =
    {CN("�Ƿ�������е�ǰ������?")
    EN("Clear all the current axis data?")},

	//19 LG_STR nszNoteUpgradeSoftware[LG_NUM] =
    {CN("ȷ��Ҫ�������?")
    EN("Make sure to upgrade the software?")},

	//19 LG_STR nszNoteUpgradePic[LG_NUM] =
    {CN("ȷ��Ҫ������������?")
    EN("Make sure to upgrade the startup picture?")},

	//19 LG_STR nszNoteFormatDisk[LG_NUM] =
    {CN("��ʽ�����������Ͳ���,�Ƿ���и�ʽ��?")
    EN("Formating will delete all program and parameter, format?")},

	//19 LG_STR nszNoteImportPitchFromUsb[LG_NUM] =
    {CN("�Ƿ��U��%s�ļ������ݾಹ������?")
    EN("Import pitch data from usb %s file?")},

	//19 LG_STR nszNoteAutoLocatePosition[LG_NUM] =
    {CN("�Ƿ�����Զ���λ?")
    EN("Auto locate position?")},

	//19 LG_STR nszNoteCopyAllToUsb[LG_NUM] =
    {CN("����ȫ������U��,������U��ԭ��ͬ������,�Ƿ���?")
    EN("Copy all program to Udisk?(will cover the same program)")},

	//19 LG_STR nszNoteCopyAllToNc[LG_NUM] =
    {CN("����ȫ������ϵͳ,������ϵͳԭ��ͬ������,�Ƿ���?")
    EN("Copy all program to NC?(will cover the same program)")},

	//19 LG_STR nszNoteDeleteAllProg[LG_NUM] =
    {CN("�Ƿ�Ҫɾ�����г���?")
    EN("Delete all the program?")},

	//19 LG_STR nszNoteDeleteTheFile[LG_NUM] =
    {CN("�Ƿ�Ҫɾ�����ļ�?")
    EN("Delete the file?")},

    //19 LG_STR nszNoteAutoCalc[LG_NUM] =
    {CN("���ݽ������仯,�Ƿ��Զ�����?")
    EN("Data will change,Auto Calc?")},

	//19 LG_STR nszNoteUsrAlmSet[8][LG_NUM] =
    {CN("0/1:�����ź�Ϊ����/����")
    EN("0/1:Input signal is normal open/close")},
    {CN("0/1:����ʱ��/ͣ�ӹ�")
    EN("0/1:Not/stop operation when alarm")},
    {CN("0/1:����ʱ��/ͣ����1")
    EN("0/1:Not/stop spindle1 when alarm")},
    {CN("0/1:����ʱ��/ͣ����2")
    EN("0/1:Not/stop spindle2 when alarm")},
#if CHN_SPDL_NUM > 2
    {CN("0/1:����ʱ��/ͣ����3")
    EN("0/1:Not/stop spindle3 when alarm")},
#else
    {CN("")
    EN("")},
#endif
#if CHN_SPDL_NUM > 3
    {CN("0/1:����ʱ��/ͣ����4")
    EN("0/1:Not/stop spindle4 when alarm")},
#else
    {CN("")
    EN("")},
#endif
    {CN("")
    EN("")},
    {CN("")
    EN("")},

    //GROUP:Bar����
    //1126 LG_STR nszBTtlTraceView[LG_NUM] =
	{CN("�켣��ʾ")
	 EN("Trace View")},

	//1126 LG_STR nszBTtlAuxInfo[LG_NUM] =
	{CN("������Ϣ")
	 EN("Trace View")},

	//47 LG_STR nszBTtlCoorSys[LG_NUM] =
	{CN("����ϵ")
	 EN("CoorSys")},

	//47 LG_STR nszBTtlServoLoad[LG_NUM] =
	{CN("�ŷ�����")
	 EN("Servo Load")},

	//47 LG_STR nszBTtlCode[LG_NUM] =
	{CN("ͨ��%d[%s]")
	 EN("Chn%d[%s]")},

	//47 LG_STR nszBTtlNcData[LG_NUM] =
	{CN("ϵͳ����")
	 EN("Nc data")},

	//1100 LG_STR nszBTtlUsrMacroVar[LG_NUM] =
	{CN("�Զ�������")
	 EN("User Macro Var")},

	//1100 LG_STR nszBTtlUsrInputAlm[LG_NUM] =
	{CN("�Զ������뱨��")
	 EN("User Input Alarm")},

	//1100 LG_STR nszBTtlUsrWaitAlm[LG_NUM] =
	{CN("�Զ���ȴ�����")
	 EN("User Wait Alarm")},

	//1100 LG_STR nszBTtlUsrPage[LG_NUM] =
	{CN("�Զ���ҳ��")
	 EN("User Page")},

    //303 LG_STR nszBTtlServoPar[LG_NUM] =
    {CN("�ŷ�����")
    EN("ServoPar.")},

	//1100 LG_STR nszBTtlRefF[LG_NUM] =
	{CN("��������ٶ�")
	 EN("Home rapid feed")},

	//1100 LG_STR nszBTtlCenterInput[LG_NUM] =
	{CN("��������")
	 EN("Center Input")},

	//1100 LG_STR nszBTtl3PointCenter[LG_NUM] =
	{CN("���㶨Բ��")
	 EN("3-PointCenter")},

	//1100 LG_STR nszBTtlDataProtect[LG_NUM] =
	{CN("���ݱ���")
	 EN("Data Protect")},

	//1100 LG_STR nszBTtlCurrentOperateLevel[LG_NUM] =
    {CN("��ǰ��������")
    EN("current operate level")},

	//1100 LG_STR nszBTtlLocalLevel[LG_NUM] =
    {CN("�ֲ���������")
    EN("Local level")},

    //303 LG_STR nszBTtlLocalVar[LG_NUM] =
    {CN("�ֲ�����")
    EN("Local varable")},

    //303 LG_STR nszBTtlGlobalVar[LG_NUM] =
    {CN("ȫ�ֱ���")
    EN("Global varable")},

    //303 LG_STR nszBTtlNonvolatileVar[LG_NUM] =
    {CN("����������")
    EN("Non-volatile varable")},

    //303 LG_STR nszBTtlNoProgram[LG_NUM] =
    {CN("û�г���")
    EN("No program")},

    //GROUP:�������
    //LG_STR nszRTtlPort[LG_NUM] =
    {CN("�˿�")
     EN("Port")},

    //LG_STR nszRTtlInput[LG_NUM] =
    {CN("�����")
     EN("DI")},

    //LG_STR nszRTtlPin[LG_NUM] =
    {CN("�ܽ�")
     EN("Pin")},

    //LG_STR nszRTtlFunc[LG_NUM] =
    {CN("����")
     EN("Func.")},

	//LG_STR nszRTtlAddr[LG_NUM] =
	{CN("��ַ")
	 EN("ADDR")},

	//LG_STR nszRTtlName[LG_NUM] =
	{CN("����")
	 EN("Name")},

	//LG_STR nszRTtlStatus[LG_NUM] =
	{CN("״̬")
	 EN("Status")},

	//LG_STR nszRTtlData[LG_NUM] =
	{CN("����")
	 EN("Data")},

	//LG_STR nszRTtlFileName[LG_NUM] =
	{CN("�ļ���")
	 EN("FileName")},

	//LG_STR nszRTtlS[LG_NUM] =
	{CN("S")
	 EN("S")},

	//LG_STR nszRTtlAlmType[LG_NUM] =
	{CN("��������")
	 EN("AlmType")},

	//LG_STR nszRTtlAlmNumber[LG_NUM] =
	{CN("������")
	 EN("AlmNo.")},

	//LG_STR nszRTtlContent[LG_NUM] =
	{CN("����")
	 EN("Content")},

	//1120 LG_STR nszRTtlTime[LG_NUM] =
	{CN("ʱ��")
	 EN("Time")},

     //1120 LG_STR nszRTtlChn[LG_NUM] =
	{CN("ͨ��")
	 EN("Chn")},

     //1120 LG_STR nszRTtlYear_Month_Day[LG_NUM] =
	{CN("��-��-��")
	 EN("Year-Month-Day")},

     //1120 LG_STR nszRTtlHour_Min_Sec[LG_NUM] =
    {CN("ʱ:��:��")
    EN("Hour:Min:Sec")},

     //1120 LG_STR nszRTtlTrialFinal[LG_NUM] =
	{CN("��������")
	 EN("Trial final")},

     //1120 LG_STR nszRTtlSet[LG_NUM] =
	{CN("����")
	 EN("Set")},

	//92 LG_STR nszRTtlLength[LG_NUM] =
	{CN("����(H)")
	 EN("Length(H)")},

	//116 LG_STR nszRTtlRadius[LG_NUM] =
	{CN("�뾶(D)")
	 EN("Radius(D)")},

	//LG_STR nszRTtlTCode[LG_NUM] =
	{CN("T����")
	 EN("T code")},

	//LG_STR nszRTtlGroup[LG_NUM] =
	{CN("���")
	 EN("Group")},

	//LG_STR nszRTtlCurLife[LG_NUM] =
	{CN("��ǰ����")
	 EN("Cur.Life")},

	//LG_STR nszRTtlMaxLife[LG_NUM] =
	{CN("�������")
	 EN("Max.Life")},

    //LG_STR nszRTtlDataName[LG_NUM] =
	{CN("��������")
	 EN("Data Name")},

    //LG_STR nszRTtlChg[LG_NUM] =
	{CN("�޸�")
	 EN("CHG")},

    //LG_STR nszRTtlOut[LG_NUM] =
	{CN("����")
	 EN("OUT")},

    //LG_STR nszRTtlShow[LG_NUM] =
	{CN("�鿴")
	 EN("Show")},

	//LG_STR nszRTtlOn[LG_NUM] =
	{CN("�պ�")
	 EN("ON")},

	//LG_STR nszRTtlOff[LG_NUM] =
	{CN("�ض�")
	 EN("OFF")},

    //GROUP:��ϢnszMsg
	//1120 LG_STR nszMsgInputErr[LG_NUM] =
	{CN("�������ݴ���")
	 EN("Input error")},

	//411 LG_STR nszMsgPasswordDiff[LG_NUM] =
	{CN("�����벻һ��")
	 EN("The new password is different!")},

	//416 LG_STR nszMsgSaved[LG_NUM] =
	{CN("�����ѱ���")
	 EN("Data saved")},

	//416 LG_STR nszMsgScreenSaved[LG_NUM] =
	{CN("��Ļ�ѱ���")
	 EN("Screen saved")},

	//416 LG_STR nszMsgRead[LG_NUM] =
	{CN("�����Ѷ���")
	 EN("Data has read")},

	//402 LG_STR nszMsgPwdErr[LG_NUM] =
	{CN("�������!")
	 EN("Password error!")},

	//402 LG_STR nszMsgPwdErrOverTimes[LG_NUM] =
	{CN("��������ѳ����޴�!")
	 EN("Error over times!")},

	//379 LG_STR nszMsgFormatFail[LG_NUM] =
	{CN("��ʽ��ʧ��")
	 EN("Format failed.")},

	//379 LG_STR nszMsgFormatSucc[LG_NUM] =
	{CN("��ʽ���ɹ����")
	 EN("Format complete successfully.")},

	//380 LG_STR nszMsgFormatting[LG_NUM] =
	{CN("���ڽ��и�ʽ��...")
	 EN("Formatting...")},

	//390 LG_STR nszMsgInputPass[LG_NUM] =
	{CN("����������!")
	 EN("Please input the password!")},

	//378 LG_STR nszMsgFileNameError[LG_NUM] =
	{CN("�ļ�������")
	 EN("File name error!")},

	//375 LG_STR nszMsgFileExist[LG_NUM] =
	{CN("�ļ��Ѵ���")
	 EN("File existed")},

	//378 LG_STR nszMsgFileNotExist[LG_NUM] =
	{CN("�ļ�������")
	 EN("File not exist")},

	//375 LG_STR nszMsgPortExist[LG_NUM] =
	{CN("�˿��Ѵ���")
	 EN("Port existed")},

	//369 LG_STR nszMsgCopySucc[LG_NUM] =
	{CN("���Ƴɹ�")
	 EN("Successfully copy file")},

	//369 LG_STR nszMsgCopyFail[LG_NUM] =
	{CN("����ʧ��")
	 EN("File copy failed")},

	//398 LG_STR nszMsgOperNoEffect[LG_NUM] =
	{CN("������Ч")
	 EN("The operation is of no effect.")},

	//399 LG_STR nszMsgOperFail[LG_NUM] =
	{CN("����ʧ��")
	 EN("The operation failed")},

	//400 LG_STR nszMsgOperSucc[LG_NUM] =
	{CN("�����ɹ�")
	 EN("The operation completed")},

	//400 LG_STR nszMsgOperSuccPowerOn[LG_NUM] =
	{CN("�����ɹ�,�������ϵ�!")
	 EN("Completed! poweron again!")},

	//370 LG_STR nszMsgCreateFail[LG_NUM] =
	{CN("�����ļ�ʧ��")
	 EN("Fail to create file")},

	//371 LG_STR nszMsgDeleteFail[LG_NUM] =
	{CN("ɾ��ʧ��")
	 EN("Fail to delete file")},

	//372 LG_STR nszMsgDeleteSucc[LG_NUM] =
	{CN("ɾ���ɹ�")
	 EN("Successfully delete file")},

	//373 LG_STR nszMsgDeleting[LG_NUM] =
	{CN("����ɾ��")
	 EN("Deleting")},

	//409 LG_STR nszMsgOpenFail[LG_NUM] =
	{CN("���ļ�ʧ��")
	 EN("Fail to open file")},

	//409 LG_STR nszMsgFileIllegal[LG_NUM] =
	{CN("�ļ��Ƿ�")
	 EN("File illegal")},

	//409 LG_STR nszMsgNotEditMode[LG_NUM] =
	{CN("�Ǳ༭ģʽ")
	 EN("Not EDIT mode")},

	//409 LG_STR nszMsgNotMdiMode[LG_NUM] =
	{CN("��¼��ģʽ")
	 EN("Not MDI mode")},

	//409 LG_STR nszMsgNoMemMode[LG_NUM] =
	{CN("�������Զ�ģʽ")
	 EN("Can NOT IN MEM mode")},

	//409 LG_STR nszMsgNoMdiMode[LG_NUM] =
	{CN("������¼��ģʽ")
	 EN("Can NOT IN MDI mode")},

	//409 LG_STR nszMsgNoSpace[LG_NUM] =
	{CN("û���㹻�Ŀռ�")
	 EN("No enough space")},

	//409 LG_STR nszMsgParSwitchNotOn[LG_NUM] =
	{CN("��������δ��")
	 EN("Parameter switch not ON")},

	//403 LG_STR nszMsgProgSwitchNotOn[LG_NUM] =
	{CN("���򿪹�δ��")
	 EN("Program swith NOT on")},

	//409 LG_STR nszMsgParPasswordNeeded[LG_NUM] =
	{CN("�����޸���Ҫ����")
	 EN("Need parameter permit")},

	//409 LG_STR nszMsgProgPasswordNeeded[LG_NUM] =
	{CN("�����޸���Ҫ����")
	 EN("Need program permit")},

	//409 LG_STR nszMsgNcIsRun[LG_NUM] =
	{CN("ϵͳ��������")
	 EN("Nc is running")},

	//409 LG_STR nszMsgAxisNotStop[LG_NUM] =
	{CN("��û��ֹͣ")
	 EN("Axis not stop")},

     //409 LG_STR nszMsgTrialSerialErr[LG_NUM] =
     {CN("�������кŴ���")
     EN("Trial serial error")},

     //409 LG_STR nszMsgCurrentFileNotExist[LG_NUM] =
     {CN("��ǰ�ļ�������")
     EN("Current file not exist")},

     //409 LG_STR nszMsgTargetFileNotExist[LG_NUM] =
     {CN("Ŀ���ļ�������")
     EN("Target file not exist")},

     //409 LG_STR nszMsgMakeDirFail[LG_NUM] =
     {CN("����Ŀ¼ʧ��")
     EN("Make dir failed")},

     //409 LG_STR nszMsgNoPermit[LG_NUM] =
     {CN("�޲���Ȩ��")
     EN("permition needed")},

     //409 LG_STR nszMsgNoShowPermit[LG_NUM] =
     {CN("����ʾȨ��")
     EN("No show permition")},

     //409 LG_STR nszMsgReadServoParErr[LG_NUM] =
     {CN("���ŷ���������")
     EN("Read Servo-Par ERROR")},

     //409 LG_STR nszMsgWriteServoParErr[LG_NUM] =
     {CN("д�ŷ���������")
     EN("Write Servo-Par ERROR")},

     //409 LG_STR nszMsgToolWearIncTooMaxErr[LG_NUM] =
     {CN("����ĥ������ֵ̫��")
     EN("Tool wear Incremental value too big ")},

     //409 LG_STR nszMsgToolWearTooMaxErr[LG_NUM] =
     {CN("����ĥ�����ֵ̫��")
     EN("Tool wear absolute value too big ")},

     //409 LG_STR nszMsgNewPermitTooHigh[LG_NUM] =
     {CN("�²����������!")
     EN("New level too high")},

     //409 LG_STR nszMsgCurPermitNotEnough[LG_NUM] =
     {CN("��ǰ�������𲻹�!")
     EN("Current level not enough")},

     //409 LG_STR nszMsgUpgradeFinish[LG_NUM] =
     {CN("�������,����������!")
     EN("Upgrade OK,please reboot!")},

    //GROUP:����nszAlm
    //1202 LG_STR nszAlmType[10][LG_NUM] =
	{CN("")
	 EN("")},
	{CN("ϵͳ����")
	 EN("NC ALM")},
	{CN("���򱨾�")
	 EN("PS ALM")},
     {CN("�걨��")
	 EN("MC ALM")},
	{CN("��λ����")
	 EN("OT ALM")},
	{CN("�ŷ�����")
	 EN("SV ALM")},
	{CN("���ᱨ��")
	 EN("SP ALM")},
	{CN("PLC����")
	 EN("PLC ALM")},
	{CN("�û�����")
	 EN("USR ALM")},
     {CN("���߱���")
	 EN("BUS ALM")},

	//409 LG_STR nszAlmPrg[300][LG_NUM] =
	{CN("") //0
	 EN("")},
	{CN("�������") //1
	 EN("Software error")},
	{CN("�ڴ治��") //2
	 EN("Memory lack")},
	{CN("����λ̫��") //3
	 EN("too many digit")},
	{CN("��ַ����") //4
	 EN("address error")},
	{CN("���ݴ���") //5
	 EN("data error")},
	{CN("����ָ��С�������") //6
	 EN("decimal point error")},
	{CN("") //7
	 EN("")},
	{CN("") //8
	 EN("")},
	{CN("Tָ������") //9
	 EN("T error")},
	{CN("G�������") //10
	 EN("G error")},
	{CN("M�������") //11
	 EN("M error")},
	{CN("Pָ������") //12
	 EN("P error")},
	{CN("Sָ������") //13
	 EN("S error")},
	{CN("Fָ������") //14
	 EN("F error")},
	{CN("Qָ������") //15
	 EN("Q error")},
	{CN("Nָ������") //16
	 EN("N error")},
	{CN("Rָ������") //17
	 EN("R error")},
	{CN("Dָ������") //18
	 EN("D error")},
	{CN("Sָ������") //19
	 EN("S too many")},
	{CN("ָ�����,������ͬһ��") //20
	 EN("Command too many or can't in same line")},
	{CN("ƽ��ָ������") //21
	 EN("Plane error")},
	{CN("ƽ����ָ������") //22
	 EN("Plane axis error")},
	{CN("ƽ����ָ��ָ������") //23
	 EN("Palne axis too many")},
	{CN("����ƫ�úŴ���") //24
	 EN("Tool offset number error")},
	{CN("") //25
	 EN("")},
	{CN("") //26
	 EN("")},
	{CN("") //27
	 EN("")},
	{CN("ָ���᲻���ڻ���ʹ��") //28
	 EN("axis not exist or can't use")},
	{CN("ָ�����᲻����") //29
	 EN("Spindle not exist")},
	{CN("����ָ�����") //30
	 EN("Block jump command error")},
	{CN("FΪ0") //31
	 EN("F is 0")},
	{CN("ָ��켣̫��") //32
	 EN("command trace too long")},
	{CN("ȱ����") //33
	 EN("Need more parameter")},
	{CN("ͬʱ�˶������") //34
	 EN("Too many axis")},
	{CN("G02��G03ָ��뾶����") //35
	 EN("G02 or G03 radius over tolerance")},
	{CN("G02��G03ָ��δ����ƽ��") //36
	 EN("G02 or G03 plane define needed")},
	{CN("G02��G03ָ����û���ҵ�R��IJK") //37
	 EN("G02 or G03 R and IJK not found")},
	{CN("G02��G03ָ����Rָ������") //38
	 EN("G02 or G03 R value error")},
	{CN("G02��G03ָ����Lָ������") //39
	 EN("G02 or G03 L value error")},
	{CN("G41G42ʱ�޽���") //40
	 EN("G41G42 no cross point")},
	{CN("G41G42ʱ��Բ����������") //41
	 EN("G41G42 setup or cancel with arc")},
	{CN("G41G42ʱָ����G31") //42
	 EN("G41G42 specified G31")},
	{CN("G41G42ʱ,δ�ҵ����������") //43
	 EN("G41G42, not next block")},
	{CN("G41G42ʱ���ܸı�ƽ��") //44
	 EN("G41G42, change plane")},
	{CN("G41G42ʱ�����켣����") //45
	 EN("G41G42, trace interference")},
	{CN("") //46
	 EN("")},
	{CN("") //47
	 EN("")},
	{CN("") //48
	 EN("")},
	{CN("") //49
	 EN("")},
	{CN("ֱ�ߵ���(,C)����") //50
	 EN("Line round error")},
	{CN("Բ������(,R)����") //51
	 EN("Arc round error")},
	{CN("�Ƕȱ��(,A)ʱ,�켣�����ָ���ǶȲ�һ��") //52
	 EN("Angle programming,cross direction not same with original")},
	{CN("B��Ƕȱ��(,A),�ڶ�������Ա��") //53
     EN("Angle programming B:2nd block need abs value")},
	{CN("B��Ƕȱ��(,A),��һ�κ͵ڶ��νǶ�̫�ӽ�") //54
	 EN("Angle programming B:2 blocks angle is too close")},
	{CN("B��Ƕȱ��(,A),��һ�γ��ȹ���") //55
	 EN("Angle programming B:1st block too short")},
	{CN("B��Ƕȱ��(,A),�ڶ��γ��ȹ���") //56
	 EN("Angle programming B:2nd block too short")},
	{CN("ֱ��Բ������ѡ����(,P)ָ������") //57
	 EN("")},
	{CN("") //58
	 EN("")},
	{CN("") //59
	 EN("")},
	{CN("G31ȱ����") //60
	 EN("G31 need parameter")},
	{CN("G53����ʹ���������") //61
	 EN("G53 can't use relative coordinate")},
	{CN("G7.1��ת��ָ������") //62
	 EN("G7.1 rotation axis name error")},
	{CN("G7.1��ת������ָ������") //63
	 EN("G7.1 rotation axis data error")},
	{CN("G7.1��ʽָ�������ƽ�漰������������") //64
	 EN("G7.1 format error")},
	{CN("G10��ʽ����") //65
	 EN("G10 format error")},
	{CN("G10��Lָ������") //66
	 EN("G10 L value error")},
	{CN("G10��Pָ������") //67
	 EN("G10 P value error")},
	{CN("G10�е�ַָ������") //68
	 EN("G10 address error")},
	{CN("G10��Rָ������") //69
	 EN("G10 R value error")},
	{CN("����ѭ��û���ҵ�PQ") //70
	 EN("Multiple repetitive canned cycle PQ not found")},
	{CN("����ѭ���Ƿ�ָ��") //71
	 EN("Multiple repetitive canned cycle illegal command")},
	{CN("����ѭ��ȱ����") //72
	 EN("Multiple repetitive canned cycle need more parameter")},
	{CN("����ѭ����������") //73
	 EN("Multiple repetitive canned cycle parameter error")},
	{CN("����ѭ��ƽ�����") //74
	 EN("Multiple repetitive canned cycle plane error")},
	{CN("����ѭ���޽���") //75
	 EN("Multiple repetitive canned cycle no cross point")},
	{CN("����ѭ���ڶ��᲻�ǵ����仯���߾��ӹ�������") //76
	 EN("Multiple canned cycle 2nd axis not monotone or finishing allowance error")},
	{CN("����ѭ���𵶵������߾��ӹ�������") //77
	 EN("Multiple canned cycle start point or finishing allowance error")},
	{CN("����ѭ����һ�᲻�ǵ����仯���߾��ӹ�������") //78
	 EN("Multiple canned cycle 1st axis not monotone or finishing allowance error")},
	{CN("G70��PQ�ʹּӹ���һ�»�û�дּӹ�,��ָ��J1ǿ��ִ��") //79
	 EN("G70 PQ error")},
	{CN("G70���ӹ�ѭ��û���ҵ�PQ") //80
	 EN("G70 PQ not found")},
	{CN("G76����Pkû��ָ��") //81
	 EN("G76 teeth height(Pk) not found")},
	{CN("G76��һ��������Qdû��ָ����̫С") //82
	 EN("G76 depth of 1st cut(Qd) not found")},
	{CN("G76���߻���������ʼ��ָ������") //83
	 EN("G76 teeth height or start point error")},
	{CN("G76��м�������") //84
	 EN("G76 chip breaking cut error")},
	{CN("��׻�˿ѭ��ʱ,Rָ������") //85
	 EN("Drill or TAP cycle R error")},
	{CN("����ѭ���˻ط���ָ������") //86
	 EN("Fine boring dirction error when retract")},
	{CN("") //87
	 EN("")},
	{CN("") //88
	 EN("")},
	{CN("") //89
	 EN("")},
	{CN("G33û��ָ����˿��") //90
	 EN("G33 tap axis not specified")},
	{CN("��˿ָ��ʱ,���̳�������ָ�����ֵ") //91
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
	{CN("M98����ָ������") //98
	 EN("M98 paramenter error")},
	{CN("") //99
	 EN("")},
	{CN("����Դ������ļ�������") //100
	 EN("Data source error or file not exist")},
	{CN("����δ�ҵ�") //101
	 EN("Program not found")},
	{CN("DNCģʽ��,����ִ����ת") //102
	 EN("Can't jump in DNC mode")},
	{CN("�ļ���������") //103
	 EN("File end error")},
	{CN("G65û��ָ��P") //104
	 EN("G65 P not found")},
	{CN("M92û��ָ��N") //105
	 EN("M92 N not found")},
	{CN("M92Ƕ�ײ�������") //106
	 EN("M92 too many nest")},
	{CN("M91ȱ����") //107
	 EN("M91 need more parameter")},
	{CN("M35ȱ������ָ������") //108
	 EN("M91 need more parameter or parameter error")},
	{CN("����Ƿ����߲���ʧ��") //109
	 EN("Program illegal or operation failed")},
	{CN("�������Ƕ��̫��") //110
	 EN("Sub call too many nest")},
	{CN("����Ƕ��̫��") //111
    EN("Braket too many nest")},
	{CN("˳���û���ҵ�") //112
	 EN("Sequence number not found")},
	{CN("�����Ŵ���") //113
	 EN("variable number error ")},
	{CN("����") //114
	 EN("Divide by zero error")},
	{CN("��ڲ�������") //115
	 EN("Argument error")},
	{CN("����Ĺ���") //116
	 EN("Function error")},
	{CN("��ڲ���̫��") //117
	 EN("Argument too many")},
	{CN("��������") //118
	 EN("Parameter error")},
	{CN("�ձ���") //119
	 EN("NULL variable")},
	{CN("ͨ���Ų���") //120
	 EN("Channal number error")},
	{CN("DOָ�����ݴ���") //121
	 EN("DO specified data error")},
	{CN("ENDָ�����ݴ���") //122
	 EN("END specified data error")},
	{CN("WHILE���û��ָ��DO") //123
	 EN("DO not specified in WHILE statement")},
	{CN("GOTO�������ENDʱ����") //124
	 EN("GOTO statement jump over END error")},
	{CN("IF������") //125
	 EN("IF statement error")},
	{CN("ENDIF������") //126
	 EN("ENDIF statement error")},
	{CN("ELSE������") //127
	 EN("ELSE statement error")},
	{CN("ELIF������") //128
	 EN("ELIF statement error")},
	{CN("IF-ENDIF�����Դ���") //129
	 EN("IF-ENDIF statement pair error")},
	{CN("����������") //130
	 EN("Operator error")},
	{CN("���ʽ��ʽ����") //131
	 EN("Expression format error")},
	{CN("���ʽ���ڸ���") //132
	 EN("Expression too complex")},
	{CN("�ؼ��ִ���") //133
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
	{CN("G12.1/G13.1ָ������") //140
	 EN("G12.1/G13.1 specified error")},
	{CN("G12.1/G13.1��ز����趨") //141
	 EN("G12.1/G13.1 ralated parameter error")},
	{CN("G12.1����ָ������") //142
	 EN("G12.1/G13.1 data specified error")},
	{CN("") //143
	 EN("")},
	{CN("") //144
	 EN("")},
	{CN("") //145
	 EN("")},
	{CN("G51.2û��ָ��PQ") //146
	 EN("G51.2 P/Q not specifed")},
	{CN("G51.2��G50.2��ָ��������ָ��") //147
	 EN("G51.2/G50.2 line specifed other command")},
	{CN("G51.2ָ���������ʹ���") //148
	 EN("G51.2 specifed axis type error")},
	{CN("G51.2ָ�������ٶȴ���") //149
	 EN("G51.2 specifed axis speed error")},
	{CN("G51.4��G50.4��ָ��������ָ��") //150
	 EN("G51.4/G50.4 line specifed other command")},
	{CN("G51.4û��ָ��P��Q") //151
	 EN("G51.4 P/Q not specifed")},
	{CN("G50.4û��ָ��Q") //152
	 EN("G50.4 Q not specifed")},
	{CN("G51.4��P��Qָ������") //153
	 EN("G51.4 P/Q specifed error")},
	{CN("G50.4��Qָ������") //154
	 EN("G50.4 Q specifed error")},
	{CN("G04.1��Pָ������") //155
	 EN("G04.1 P error")},
	{CN("G04.1��Qָ������") //156
	 EN("G04.1 Q error")},
	{CN("G114.1��Kָ������") //157
	 EN("G114.1 K error")},
	{CN("G114.1��ز������ô���") //158
	 EN("G114.1 parameter error")},
	{CN("G113��Kָ������") //159
	 EN("G113 K error")},
	{CN("G51.8��G50.8��ָ��������ָ��") //160
	 EN("G51.8/G50.8 line specifed other command")},
	{CN("G51.8û��ָ��P��L") //161
	 EN("G51.8 P/L not specifed")},
	{CN("G51.8��ز�������") //162
	 EN("G51.8 parameter error")},
	{CN("") //163
	 EN("")},
	{CN("") //164
	 EN("")},
	{CN("G81.4��G80.4��ָ��������ָ��") //165
	 EN("G81.4/G80.4 line specifed other command")},
	{CN("G81.4ָ���ĵ�����������ز�������") //166
	 EN("G81.4 tool axis parameter error")},
	{CN("G81.4ָ���Ĺ�������ز�������") //167
	 EN("G81.4 workpiece axis parameter error")},
	{CN("G81.4ָ����T��������") //168
	 EN("G81.4 T specifed error")},
	{CN("") //169
	 EN("")},
	{CN("����û��ָ������") //170
	 EN("The Lead not found in thread command ")},
	{CN("Բ������,������ָ������") //171
	 EN("The long or short axis error in arc-thread")},
	{CN("�ж�����Pָ������,������") //172
	 EN("The mid-segment thread P or start-point error")},
	{CN("���ƶ�м����,û��ָ������NK") //173
	 EN("Teeth height(NK) not specified when chip-break threading")},
	{CN("") //174
	 EN("")},
	{CN("���ݾ�ʱKָ������") //175
	 EN("K error when thread cutting")},
	{CN("") //176
	 EN("")},
	{CN("") //177
	 EN("")},
	{CN("") //178
	 EN("")},
	{CN("") //179
	 EN("")},
	{CN("G40.1/G41.1/G42.1��������") //180
	 EN("G40.1/G41.1/G42.1 parameter error")},
	{CN("G05����Բ��ָ��ʱ����") //181
	 EN("G05 specifed points on line")},
	{CN("G05����Բ��û��ָ��IJK") //182
	 EN("G05 IJK not specifed")},
	{CN("G05����Բ������ָ��R") //183
	 EN("G05 R specifed")},
	{CN("") //184
	 EN("")},
	{CN("�Զ�Բ�����������ʱ,�յ��������") //185
	 EN("Auto Line-arc-contact target position error")},
	{CN("�Զ�ֱ��Բ������ʱ,Բ��ָ������") //186
	 EN("Line arc auto cross abs-org needed(PQ)")},
	{CN("�Զ�ֱ��Բ������ʱ,�޽���") //187
	 EN("Line arc auto cross have NO cross")},
	{CN("�Զ�ֱ��Բ���е�ʱ,����ָ������") //188
	 EN("Line arc auto contact parameter error")},
	{CN("�Զ�ֱ��Բ���е�ʱ,���е�") //189
	 EN("Auto Line-arc-contact have NO contact")},
	{CN("�Զ�Բ�����������ʱ,û��ָ��Բ��") //190
	 EN("Auto arc-cross or arc-contact have no center point")},
	{CN("ָ���Զ�Բ������ʱ,���е�") //191
	 EN("Auto arc-arc-contact have NO contact")},
	{CN("ָ���Զ�Բ������ʱ,R���Բ���յ��ǰһ��Բ��̫��") //192
	 EN("Target postion of R-Arc too close to prev-org when arc-arc-contact")},
	{CN("ָ���Զ�Բ��������,Բ�ĺ�ǰһ��R���Բ�����̫��") //193
	 EN("Org too close to prev-start-postion of R-Arc when arc-arc-contact")},
	{CN("�Զ�Բ��������ʱ,Բ��̫��") //194
	 EN("Org too close when arc-arc-contact")},
	{CN("") //195
	 EN("")},
	{CN("") //196
	 EN("")},
	{CN("") //197
	 EN("")},
	{CN("") //198
	 EN("")},
	{CN("�����������þ����߲�������") //199
	 EN("Tool life exhausted or parameter error")},
	{CN("G144ָ��Nָ������") //200
	 EN("G144 N error")},
	{CN("G144ָ��Pָ������") //201
	 EN("G144 P error")},
	{CN("G160ֻ��ָ��һ��������") //202
	 EN("G160 accept one axis only")},
	{CN("G160ָ��Pָ��������߲�����") //203
	 EN("G160 P error or parameter error")},
	{CN("Ť�ؿ�����ز������߳���ָ������") //204
	 EN("Torque control parameter or program error")},
	{CN("G66/G67��Դ���") //205
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
	{CN("ϵͳ���кŴ���") //2
	 EN("CNC serial number error")},
	{CN("�������ѹ������ô���") //3
	 EN("Trial time over or set error")},
     {CN("������ʣ������:%d��") //4
	 EN("Trial time will reach after %s days!")},
	{CN("����ʱ�м�����") //5
	 EN("Key pressed when power on")},
	{CN("PLCִ�д���") //6
	 EN("PLC execute error")},
	{CN("�Ƽ����ѵ���") //7
	 EN("Parts count reached")},
	{CN("") //8
	 EN("")},
	{CN("") //9
	 EN("")},
	{CN("���߲�����ȡ����") //10
	 EN("Tool parameter read error")},
	{CN("����ϵ������ȡ����") //11
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
	{CN("ͨ�����籣�����ݼ��ش���") //20
	 EN("Channel NVRam read error")},
	{CN("����籣�����ݼ��ش���") //21
	 EN("axis NVRam read error")},
	{CN("�������籣�����ݼ��ش���") //22
	 EN("Tool offset NVRam read error")},
	{CN("��������籣�����ݼ��ش���") //23
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
	{CN("�Զ�����ǰ����δ���") //30
	 EN("Zero return needed before automatic run")},
	{CN("����㹦��δ����") //31
	 EN("Axis zero return not enabled")},
	{CN("����ǰDEC���ź�") //32
	 EN("DEC ON when zero return")},
	{CN("�����м��ٿ��ص�ֹͣλ�ô���") //33
	 EN("Position error when zero return")},
	{CN("����ǰ��ʼλ�ô���") //34
	 EN("Position error before zero return")},
	{CN("�Ḻ������") //35
	 EN("Axis load limit")},
	{CN("") //36
	 EN("")},
	{CN("") //37
	 EN("")},
	{CN("") //38
	 EN("")},
	{CN("") //39
	 EN("")},
	{CN("û��������������") //40
	 EN("No spindle or parameter error")},
	{CN("���Ƽӹ�ʱ����ת��̫��") //41
	 EN("Thread spindle speed to low")},
	{CN("���ƹ���") //42
	 EN("Thread too short")},
	{CN("���Ʋ�������") //43
	 EN("Thread parameter error")},
	{CN("���Ƽӹ�ʱ,�ȴ�����ת�ٵ��ﳬʱ") //44
	 EN("Thread spindle speed arrival waiting time out")},
	{CN("���Ƶ��̴���") //45
	 EN("Thread lead error")},
	{CN("���Ƽӹ��ȴ���ʱ") //46
	 EN("Thread cut wait time out")},
	{CN("���Ƽӹ�����") //47
	 EN("Thread cut over feed")},
	{CN("ָ���᲻���ڻ���ʹ��") //48
	 EN("Axis not exist or can't use")},
	{CN("") //49
	 EN("")},
     {CN("������岹,��ָ������") //50
	 EN("Polar interpolateion axis error")},
	{CN("�ȴ���ʱ") //51
	 EN("Wait time out")},
	{CN("����μӹ�����") //52
	 EN("Polygon processing error")},
	{CN("����μӹ���ز�������") //53
	 EN("Polygon processing spindle parameter error")},
	{CN("������ͬ��") //54
	 EN("Axis Sync. error")},
	{CN("����ͬ������") //55
	 EN("Spindle sync. error")},
	{CN("����ͬ��������صĲ������߹���״̬����") //56
	 EN("Spindle sync. spindle parameter error")},
	{CN("������صĽ����᲻���ڻ�����ת��") //57
	 EN("Spindle C-Axis not exist or not rotation")},
	{CN("") //58
	 EN("")},
	{CN("") //59
	 EN("")},
	{CN("�޸ı�����,δ�����Զ�����") //60 ר��
	 EN("")},
	{CN("�޸ı�����,δ��������") //61
	 EN("")},
	{CN("����͹�ֲ�������") //62
	 EN("ECAM parameter error")},
	{CN("���ӳ�����ִ�д���") //63
	 EN("EGEAR processing error")},
	{CN("���ӳ�������ز�������") //64
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
	{CN("��˿ʱ�ȴ�����ת�ٳ�ʱ") //70
	 EN("Wait spindle speed arrive timeout when tapping")},
	{CN("�ȴ�����ת�ٵ��ﳬʱ") //71
	 EN("Wait spindle speed arrive timeout")},
	{CN("���湥˿ʱ,���ᷴ���쳣") //72
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
	{CN("��λԤ�����") //80
	 EN("")},
	{CN("���޷�ʹ�û򲻴���") //81
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
	{CN("������������ϻ��������") //90
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
	{CN("����Ӳ��λ") //0
	 EN("Positive position hard limit")},
	{CN("����Ӳ��λ") //1
	 EN("Negtive position hard limit")},
    {CN("��������λ1") //2
	 EN("Positive position soft limit 1")},
	{CN("��������λ1") //3
	 EN("Negtive position soft limit 1")},
    {CN("��������λ2") //4
	 EN("Positive position soft limit 2")},
	{CN("��������λ2") //5
	 EN("Negtive position soft limit 2")},
    {CN("��������λ3") //6
	 EN("Positive position soft limit 3")},
	{CN("��������λ3") //7
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
    {CN("�����3����λ��Χ") //13
	 EN("Entered soft position limit 3 range")},
    {CN("��������λ1(Ԥ��)") //14
	 EN("Positive position soft limit 1(Predict)")},
	{CN("��������λ1(Ԥ��)") //15
	 EN("Negtive position soft limit 1(Predict)")},
    {CN("��������λ2(Ԥ��)") //16
	 EN("Positive position soft limit 2(Predict)")},
	{CN("��������λ2(Ԥ��)") //17
	 EN("Negtive position soft limit 2(Predict)")},
    {CN("��������λ3(Ԥ��)") //18
	 EN("Positive position soft limit 3(Predict)")},
	{CN("��������λ3(Ԥ��)") //19
	 EN("Negtive position soft limit 3(Predict)")},

	//409 LG_STR nszAlmSV[10][LG_NUM] =
	{CN("") //0
	 EN("")},
	{CN("����δ����") //1
	 EN("Servo not ready")},
	{CN("��������") //2
	 EN("Servo alarm")},
	{CN("�������س���") //3
	 EN("Servo overload limited")},
	{CN("�ŷ�ʹ��״̬�쳣") //4
	 EN("Servo ON signal error")},
	{CN("��ͬ��������") //5
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
	{CN("����δ����") //1
	 EN("Spindle not ready")},
	{CN("���ᱨ��") //2
	 EN("Spindle alarm")},
	{CN("") //3
	 EN("")},
	{CN("") //4
	 EN("")},

	//409 LG_STR nszAlmFPLC[160][LG_NUM] =
	{CN("") //0
	 EN("")},
	{CN("�����ź�ʱ�����") //1
	 EN("Cycle start signal too long")},
	{CN("����ʱ������δ�ر�") //2
	 EN("Safe door not closed")},
	{CN("�����з����ű���") //3
	 EN("Safe door opened when operating")},
	{CN("������ʱ") //4
	 EN("Tool change time over")},
	{CN("��������ʱ�޵�λ�ź�") //5
	 EN("NO finish signal when Tool LOCK")},
	{CN("������ɺ󵶺Ŵ���") //6
	 EN("Tool number error when finish")},
	{CN("���Ŵ���") //7
	 EN("Tool number error")},
	{CN("Һѹ������ʱ") //8
	 EN("hydraulic pressure time out")},
	{CN("Һѹδ�������ź��쳣") //9
	 EN("hydraulic pressure off or signal error")},

	{CN(CHUNK_CN"1δ�н�") //10
	 EN("Spindle 1 not clamped")},
	{CN("β��1δǰ��") //11
	 EN("Tailholder 1 not forward")},
	{CN("����1������") //12
	 EN("Spindle 1 locking")},
	{CN("M11ʱ����1δֹͣ���������ת��") //13
	 EN("Spindle 1 not stopped or over allowed speed when M11")},
	{CN("M10��λ�źŴ���") //14
	 EN("M10 FIN signal error")},
	{CN("M11��λ�źŴ���") //15
	 EN("M11 FIN signal error")},
	{CN("M17��λ�źų�ʱ") //16
	 EN("M17 FIN signal time out")},
	{CN("M18��λ�źų�ʱ") //17
	 EN("M18 FIN signal time out")},
	{CN("M19����׼ͣ��ʱ") //18
	 EN("M19 FIN signal time out")},
	{CN("M19����׼ͣ�رճ�ʱ") //19
	 EN("M19 close FIN signal time out")},
	{CN("����1����λ��ģʽ") //20
	 EN("Spindle 1 IN POS mode")},
	{CN("M79ʱ����1δֹͣ") //21
	 EN("Spindle 1 not stopped when M79")},
	{CN("M78��λ�źų�ʱ") //22
	 EN("M78 FIN signal time out")},
	{CN("M79��λ�źų�ʱ") //23
	 EN("M79 FIN signal time out")},
	{CN("��������ʱ,����1δֹͣ") //22
	 EN("Spindle 1 not stopped when M12")},
	{CN("����1������ʱ") //25
	 EN("M12 FIN signal time out")},
	{CN("����1��������ʱ") //26
	 EN("M13 FIN signal time out")},
	{CN("����1ת��δ����") //27
	 EN("Spindle 1 speed not arrived")},
	{CN("") //28
	 EN("")},
	{CN("����1��λ����") //29
	 EN("Spindle 1 gear error")},

	{CN(CHUNK_CN"2δ�н�") //30
	 EN("Spindle 2 not clamped")},
	{CN("β��2δǰ��") //31
	 EN("Tailholder 2 not forward")},
	{CN("����2������") //32
	 EN("Spindle 2 locking")},
	{CN("M111ʱ����2δֹͣ") //33
	 EN("Spindle 2 not stopped when M111")},
	{CN("M110��λ�źŴ���") //34
	 EN("M110 FIN signal error")},
	{CN("M111��λ�źŴ���") //35
	 EN("M111 FIN signal error")},
	{CN("M117��λ�źų�ʱ") //36
	 EN("M117 FIN signal time out")},
	{CN("M118��λ�źų�ʱ") //37
	 EN("M118 FIN signal time out")},
	{CN("M119����׼ͣ��ʱ") //38
	 EN("M119 FIN signal time out")},
	{CN("M119����׼ͣ�رճ�ʱ") //39
	 EN("M119 close FIN signal time out")},
	{CN("����2����λ��ģʽ") //40
	 EN("Spindle 2 IN POS mode")},
	{CN("M179ʱ����2δֹͣ") //41
	 EN("Spindle 2 not stopped when M179")},
	{CN("M178��λ�źų�ʱ") //42
	 EN("M178 FIN signal time out")},
	{CN("M179��λ�źų�ʱ") //43
	 EN("M179 FIN signal time out")},
	{CN("��������ʱ,����2δֹͣ") //42
	 EN("Spindle 2 not stopped when M112")},
	{CN("����2������ʱ") //45
	 EN("M112 FIN signal time out")},
	{CN("����2��������ʱ") //46
	 EN("M113 FIN signal time out")},
	{CN("����2ת��δ����") //47
	 EN("Spindle 2 speed not arrived")},
	{CN("") //48
	 EN("")},
	{CN("����2��λ����") //49
	 EN("Spindle 2 gear error")},


	{CN(CHUNK_CN"3δ�н�") //50
	 EN("Spindle 3 not clamped")},
	{CN("β��3δǰ��") //51
	 EN("Tailholder 3 not forward")},
	{CN("����3������") //52
	 EN("Spindle 3 locking")},
	{CN("M211ʱ����3δֹͣ") //53
	 EN("Spindle 3 not stopped when M211")},
	{CN("M210��λ�źŴ���") //54
	 EN("M210 FIN signal error")},
	{CN("M211��λ�źŴ���") //55
	 EN("M211 FIN signal error")},
	{CN("M217��λ�źų�ʱ") //56
	 EN("M217 FIN signal time out")},
	{CN("M218��λ�źų�ʱ") //57
	 EN("M218 FIN signal time out")},
	{CN("M219����׼ͣ��ʱ") //58
	 EN("M219 FIN signal time out")},
	{CN("M219����׼ͣ�رճ�ʱ") //59
	 EN("M219 close FIN signal time out")},
	{CN("����3����λ��ģʽ") //60
	 EN("Spindle 3 IN POS mode")},
	{CN("M279ʱ����3δֹͣ") //61
	 EN("Spindle 3 not stopped when M279")},
	{CN("M278��λ�źų�ʱ") //62
	 EN("M278 FIN signal time out")},
	{CN("M279��λ�źų�ʱ") //63
	 EN("M279 FIN signal time out")},
	{CN("��������ʱ,����3δֹͣ") //62
	 EN("Spindle 3 not stopped when M212")},
	{CN("����3������ʱ") //65
	 EN("M212 FIN signal time out")},
	{CN("����3��������ʱ") //66
	 EN("M213 FIN signal time out")},
	{CN("����3ת��δ����") //67
	 EN("Spindle 3 speed not arrived")},
	{CN("") //68
	 EN("")},
	{CN("����3��λ����") //69
	 EN("Spindle 3 gear error")},

	{CN(CHUNK_CN"4δ�н�") //70
	 EN("Spindle 4 not clamped")},
	{CN("β��4δǰ��") //71
	 EN("Tailholder 4 not forward")},
	{CN("����4������") //72
	 EN("Spindle 4 locking")},
	{CN("M311ʱ����4δֹͣ") //73
	 EN("Spindle 4 not stopped when M311")},
	{CN("M310��λ�źŴ���") //74
	 EN("M310 FIN signal error")},
	{CN("M311��λ�źŴ���") //75
	 EN("M311 FIN signal error")},
	{CN("M317��λ�źų�ʱ") //76
	 EN("M317 FIN signal time out")},
	{CN("M318��λ�źų�ʱ") //77
	 EN("M318 FIN signal time out")},
	{CN("M319����׼ͣ��ʱ") //78
	 EN("M319 FIN signal time out")},
	{CN("M319����׼ͣ�رճ�ʱ") //79
	 EN("M319 close FIN signal time out")},
	{CN("����4����λ��ģʽ") //80
	 EN("Spindle 4 IN POS mode")},
	{CN("M379ʱ����4δֹͣ") //81
	 EN("Spindle 4 not stopped when M379")},
	{CN("M378��λ�źų�ʱ") //82
	 EN("M378 FIN signal time out")},
	{CN("M379��λ�źų�ʱ") //83
	 EN("M379 FIN signal time out")},
	{CN("��������ʱ,����4δֹͣ") //82
	 EN("Spindle 4 not stopped when M312")},
	{CN("����4������ʱ") //85
	 EN("M312 FIN signal time out")},
	{CN("����4��������ʱ") //86
	 EN("M313 FIN signal time out")},
	{CN("����4ת��δ����") //87
	 EN("Spindle 4 speed not arrived")},
	{CN("") //88
	 EN("")},
	{CN("����4��λ����") //89
	 EN("Spindle 4 gear error")},

	{CN("M34δ���") //90
	 EN("M34 not finished")},
	{CN("M35δ���") //91
	 EN("M35 not finished")},
	{CN("�󻬱���") //92
	 EN("Lubricate alarm")},
	{CN("��λ���ز�������λ��") //93
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
	{CN("MII����������") //00
	 EN("MII Driver Error")},
	{CN("MII��ʼ��ͨ������") //01
	 EN("MII Driver Init Error")},
	{CN("MIIЭ�����") //02
	 EN("MII Procotal Error")},
	{CN("MIIģʽ����") //03
	 EN("MII Mode Error")},
	{CN("MII��������") //04
	 EN("MII Para Error")},
	{CN("MIIδ����") //05
	 EN("MII Driver Not Ready")},
	{CN("MII�Ĵ�����ѯ��ʱ����") //06
	 EN("MII Driver Register Error")},
	{CN("MII������ѯ��ʱ����") //07
	 EN("MII Para Error")},
	{CN("MIIʹ�ܲ�ѯ��ʱ����") //08
	 EN("MII Servo On Error")},
	{CN("MII�ڴ��������") //09
	 EN("MII Memory size over")},
	{CN("MII״̬����") //10
	 EN("MII Status Error")},
	{CN("MII�ڴ�У�����") //11
	 EN("MII Memery Error")},
	{CN("MII���泬ʱ����") //12
	 EN("MII Locate overtime")},
	{CN("����") //13
	 EN("RSV")},
	{CN("����") //14
	 EN("RSV")},
	{CN("����") //15
	 EN("RSV")},
	{CN("����") //16
	 EN("RSV")},
	{CN("����") //17
	 EN("RSV")},
	{CN("����") //18
	 EN("RSV")},
	{CN("����") //19
	 EN("RSV")},
	{CN("MII��Ч��վ��ַ����") //20
	 EN("MII Slave Station Error")},
	{CN("MII�����л�����") //21
	 EN("MII Buffer Alternate Error")},
	{CN("MII������������") //22
	 EN("MII Buffer Toggle Error")},
	{CN("MII�������󳤶ȴ���") //23
	 EN("MII Date Bytes Error")},
	{CN("MII��ȡ״̬����") //24
	 EN("MII Sts Read Error")},
	{CN("MIIͬ�����ܴ���") //25
	 EN("MII Sync Receive Error")},
	{CN("MIIͬ��ģʽ����") //26
	 EN("MII No Sync Error")},
	{CN("MII����оƬϵͳ�����") //27
	 EN("MII Mastor Chip Error")},
	{CN("MII����оƬӦ�ò����") //28
	 EN("MII User Layer Error")},
	{CN("����") //29
	 EN("RSV")},
	{CN("MII��Ϣ״̬����") //30
	 EN("MII Message STS Error")},
	{CN("MII��Ϣ��ֹ����") //31
	 EN("MII Message ABORT Error")},
	{CN("MII��Ϣ���ִ���") //32
	 EN("MII Message Shakehand Error")},
	{CN("MII�������������") //33
	 EN("MII Send Buffer Oversized")},
	{CN("MII�������������") //34
	 EN("MII Receive Buffer Oversized")},
	{CN("MII��Ϣ���������") //35
	 EN("MII Message Oversized")},
	{CN("MII����æ����") //36
	 EN("MII Receive Busy")},
	{CN("MII����") //37
	 EN("MII Error")},
	{CN("MII����") //38
	 EN("MII Error")},
	{CN("MII����") //39
	 EN("MII Error")},
	{CN("�����������쳣 A.02") //40
	 EN("MII Servo A.02 Error")},
	{CN("����������·�쳣 A.03") //41
	 EN("MII Servo A.03 Error")},
	{CN("�����������趨���� A.04") //42
	 EN("MII Servo A.04 Error")},
	{CN("��������ϴ��� A.05") //43
	 EN("MII Servo A.05 Error")},
	{CN("�������ŷ�ON���� A.0b") //44
	 EN("MII Servo A.0b Error")},
	{CN("�������������� A.10") //45
	 EN("MII Servo A.10 Error")},
	{CN("�������������� A.30") //46
	 EN("MII Servo A.30 Error")},
	{CN("�������������� A.32") //47
	 EN("MII Servo A.32 Error")},
	{CN("����������·���ߴ��� A.33") //48
	 EN("MII Servo A.33 Error")},
	{CN("����������ѹ A.40") //49
	 EN("MII Servo A.40 Error")},
	{CN("������Ƿ��ѹ A.41") //50
	 EN("MII Servo A.41 Error")},
	{CN("���������ݹ���ѹ A.45") //51
	 EN("MII Servo A.45 Error")},
	{CN("���������� A.51") //52
	 EN("MII Servo A.51 Error")},
	{CN("�������񶯱��� A.52") //53
	 EN("MII Servo A.52 Error")},
	{CN("������˲ʱ���� A.71") //54
	 EN("MII Servo A.71 Error")},
	{CN("�������������� A.72") //55
	 EN("MII Servo A.72 Error")},
	{CN("������DB���� A.73") //56
	 EN("MII Servo A.73 Error")},
	{CN("����������Ƶ������ A.74") //57
	 EN("MII Servo A.74 Error")},
	{CN("������ɢ��Ƭ���� A.7A") //58
	 EN("MII Servo A.7a Error")},
	{CN("���������ݱ��� A.81") //59
	 EN("MII Servo A.81 Error")},
	{CN("����������У�鱨�� A.82") //60
	 EN("MII Servo A.82 Error")},
	{CN("��������ر��� A.83") //61
	 EN("MII Servo A.83 Error")},
	{CN("���������ݱ��� A.84") //62
	 EN("MII Servo A.84 Error")},
	{CN("���������ٱ��� A.85") //63
	 EN("MII Servo A.85 Error")},
	{CN("���������ȱ��� A.86") //64
	 EN("MII Servo A.86 Error")},
	{CN("�ⲿ���������ϱ��� A.8A") //65
	 EN("MII Servo A.8a Error")},
	{CN("����������� A.b3") //66
	 EN("MII Servo A.b3 Error")},
	{CN("MIIͨ�Ź��ϴ��� A.b6") //67
	 EN("MII Servo A.b6 Error")},
	{CN("����ϵͳ���� A.bF") //68
	 EN("MII Servo A.bf Error")},
	{CN("��ֹʧ�ؼ�� A.C1") //69
	 EN("MII Servo A.c1 Error")},
	{CN("������������� A.C8") //70
	 EN("MII Servo A.c8 Error")},
	{CN("������ͨѶ���� A.C9") //71
	 EN("MII Servo A.c9 Error")},
	{CN("�������������� A.CA") //72
	 EN("MII Servo A.ca Error")},
	{CN("����������У����� A.Cb") //73
	 EN("MII Servo A.cb Error")},
	{CN("��Ȧ����ֵ��һ�� A.CC") //74
	 EN("MII Servo A.cc Error")},
	{CN("ѡ��ģ��ͨѶ���� A.CF") //75
	 EN("MII Servo A.cf Error")},
	{CN("λ��ƫ����� A.d0") //76
	 EN("MII Servo A.d0 Error")},
	{CN("���-����λ��ƫ����� A.d1") //77
	 EN("MII Servo A.d1 Error")},
	{CN("MII�ڲ�ͬ���쳣 A.E0") //78
	 EN("MII Servo A.e0 Error")},
	{CN("MII���������趨���� A.E4") //79
	 EN("MII Servo A.e4 Error")},
	{CN("MIIͬ������ A.E5") //80
	 EN("MII Servo A.e5Error")},
	{CN("MIIͨ�Ź��� A.E6") //81
	 EN("MII Servo A.e6 Error")},
	{CN("����ѡ��ģ����ʧ�� A.E7") //82
	 EN("MII Servo A.e7 Error")},
	{CN("DRV���� A.EA") //83
	 EN("MII Servo A.ea Error")},
	{CN("��ȫ�����ź�ʱ���쳣 A.Eb") //84
	 EN("MII Servo A.eb Error")},
	{CN("ָ��ִ�г�ʱ A.ED") //85
	 EN("MII Servo A.ed Error")},
	{CN("��Դ��ȱ�� A.F1") //86
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
	{CN("д��������") //96
	 EN("Write para error")},
	{CN("") //97
	 EN("")},
	{CN("") //98
	 EN("")},
	{CN("") //99
	 EN("")},

};

