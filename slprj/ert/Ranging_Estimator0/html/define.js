function CodeDefine() { 
this.def = new Array();
this.def["Ranging_Estimator0_P"] = {file: "Ranging_Estimator0_c.html",line:54,type:"var"};
this.def["Ranging_Estimator0_Init"] = {file: "Ranging_Estimator0_c.html",line:147,type:"fcn"};
this.def["Ranging_Estimator0"] = {file: "Ranging_Estimator0_c.html",line:171,type:"fcn"};
this.def["Ranging_Estimator0_initialize"] = {file: "Ranging_Estimator0_c.html",line:350,type:"fcn"};
this.def["RT_MODEL_Ranging_Estimator0_T"] = {file: "Ranging_Estimator0_h.html",line:37,type:"type"};
this.def["B_Ranging_Estimator0_c_T"] = {file: "Ranging_Estimator0_h.html",line:42,type:"type"};
this.def["DW_Ranging_Estimator0_f_T"] = {file: "Ranging_Estimator0_h.html",line:58,type:"type"};
this.def["P_Ranging_Estimator0_T"] = {file: "Ranging_Estimator0_h.html",line:119,type:"type"};
this.def["MdlrefDW_Ranging_Estimator0_T"] = {file: "Ranging_Estimator0_h.html",line:130,type:"type"};
this.def["int8_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:46,type:"type"};
this.def["uint8_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:47,type:"type"};
this.def["int16_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:48,type:"type"};
this.def["uint16_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:49,type:"type"};
this.def["int32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:50,type:"type"};
this.def["uint32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:51,type:"type"};
this.def["real32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:52,type:"type"};
this.def["real64_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:53,type:"type"};
this.def["real_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:59,type:"type"};
this.def["time_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:60,type:"type"};
this.def["boolean_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:61,type:"type"};
this.def["int_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:62,type:"type"};
this.def["uint_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:63,type:"type"};
this.def["ulong_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:64,type:"type"};
this.def["char_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:65,type:"type"};
this.def["uchar_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:66,type:"type"};
this.def["byte_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:67,type:"type"};
this.def["creal32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:77,type:"type"};
this.def["creal64_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:82,type:"type"};
this.def["creal_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:87,type:"type"};
this.def["cint8_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:94,type:"type"};
this.def["cuint8_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:101,type:"type"};
this.def["cint16_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:108,type:"type"};
this.def["cuint16_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:115,type:"type"};
this.def["cint32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:122,type:"type"};
this.def["cuint32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:129,type:"type"};
this.def["pointer_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:147,type:"type"};
this.def["getLoopbackIP"] = {file: "MW_target_hardware_resources_h.html",line:11,type:"var"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["Ranging_Estimator0_c.html"] = "../Ranging_Estimator0.c";
	this.html2Root["Ranging_Estimator0_c.html"] = "Ranging_Estimator0_c.html";
	this.html2SrcPath["Ranging_Estimator0_h.html"] = "../Ranging_Estimator0.h";
	this.html2Root["Ranging_Estimator0_h.html"] = "Ranging_Estimator0_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "../../_sharedutils/html/rtwtypes_h.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"Ranging_Estimator0_c.html","Ranging_Estimator0_h.html","rtwtypes_h.html","MW_target_hardware_resources_h.html"];
