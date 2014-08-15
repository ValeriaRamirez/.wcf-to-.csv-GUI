#if !defined(NEW_STRUCTS_H)
#define NEW_STRUCTS_H

#include <Windows.h> 
#include <CString>
#include <atltypes.h>
#include <atlstr.h>

//#include "stdafx.h"
//#include "CP7driver.h"
//x

extern	double	OcxResults[][8];
extern	int		OcxCode[];
extern	BOOL	OcxWarnings[];

#define NO_FLICKER	noFlickerActivate
//#define NO_FLICKER	0

#define DRI	(int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' 

#define		MAX_WANDER_COUNT 8192

#define		IMAGE_INDEX		0
#define		DATA_INDEX		1
#define		RECALL_IDs		248
#define		_LIVE_			0  //0
#define		_RECALL_		1  //1 
#define		FORCE			1
#define		U_AXIS			0 
#define		V_AXIS			1 
#define		LR_MODE			2
#define		INDEX_TO_2		2
#define		INDEX_TO_4		4

#define	CTE_OFF			0
#define	CTE_ZERO_EXP	1
#define	CTE_FINAL		2

#define	UCM_L			1
#define	uHs_L			2
#define	uHs_s			3
#define	uHr_s			4
#define	ucm_s			5
#define	uccd_12			6
#define	uccd_23			7
#define	uMap_R			10
#define	uBeamScope		11
#define	uBeamScope9		19
#define	uFir_1			12
#define	xHr_s			14
#define	uFir_2			22
#define	uFir_3			33
#define	uBlade			13
#define	uHr_mini		23
#define	uHr_mini2		26
#define	uHs_mini		24
#define	ucm_mini		25
#define	uccd_15			28
#define	xHr_mini		30

#define		TYPE_SPARE		0 
#define		TYPE_MICRONS	1 
#define		TYPE_PERCENT	2 
#define		TYPE_DOUBLE		3 
#define		TYPE_FLUENCE	4
#define		TYPE_NA			5
#define		TYPE_DEGREES	6
#define		TYPE_RADIANS	7

#define		MAX_SLITS		8 
#define		MAX_CAMS		16 
#define		MAX_BM_BUFFER	25 
#define		SKIP			11111
#define		AIM_CENTER		12500	// microns


#define	DEFAULT_COLOR_0		0x0000000
#define	DEFAULT_COLOR_1		cr_dkgreen  // 0x064d200
#define	DEFAULT_COLOR_2		0x06600ff
#define	DEFAULT_COLOR_3		0x00080ff
#define	DEFAULT_COLOR_4		0x0f4f4f4 // e6e6e6
#define	DEFAULT_COLOR_5		0x0e0e0e0 // c0c0c0
#define	DEFAULT_COLOR_6		0x0cccc33
#define	DEFAULT_COLOR_7		0x000ff80
#define	DEFAULT_COLOR_8		0x000ff80
#define	DEFAULT_COLOR_9		0x0f0ffff
#define	DEFAULT_COLOR_10	0x0ff8000

#define	MAX_ZOOM		16 
#define	MAX_COUNT		2048 
#define	MAX_INDEX_AV	16 

#define DEFAULT_MODE 0 

#define M_PI        3.14159265358979323846
#define M_2PI       2*M_PI

#define M_PI_2      M_PI/2
#define M_PI_4      M_PI/4

//#define M_R			(180/3.14159265358979323846) 

#define M_45		M_PI_4
#define M_90		M_PI_2
#define M_135		M_45+M_90
#define M_180		M_PI
#define M_270		M_180+M_90
#define M_360		M_PI*2

#define SNAP_CENTROID	0	//0
#define SNAP_CENTER		1	//1
#define SNAP_PEAK		2	//2
#define SNAP_USER		3	//3

#define VIEW_0			0	//0
#define VIEW_1			1	//0


#define   cr_graph		COLORREF(0x8080ff) 
#define   cr_tan		COLORREF(0xc0ffff) 
#define   cr_yellow		COLORREF(0x80ffff) 
#define   cr_ltyellow	COLORREF(0xc0ffff) 
#define   cr_violet		COLORREF(0xc040c0) 
#define   cr_ltblue		COLORREF(0xffc0c0) 
#define   cr_torquois	COLORREF(0x0ffef62) 

#define   cr_brown		COLORREF(0x006600ff) 
#define   cr_orange		COLORREF(0x0080ff) 
#define   cr_ltorange	COLORREF(0x40c0ff) 
#define   cr_dkblue		COLORREF(0x800000) 
#define   cr_dkgreen	COLORREF(0x008000) 
#define   cr_red		COLORREF(0x0000ff) 
#define   cr_ltred		COLORREF(0x8080ff) 
#define   cr_green		COLORREF(0x00ff00) 
#define   cr_blue		COLORREF(0xff8000) 
//#define   cr_grayblue	COLORREF(0xffc0c0) 
#define   cr_grayblue	COLORREF(0xcccc33) 
#define   cr_ltgreen	COLORREF(0xc0ffc0) 
#define   cr_ltgray		COLORREF(0xd0d0d0) 
#define   cr_gray		COLORREF(0x606060) 
#define   cr_dkgray		COLORREF(0x303030) 
#define   cr_black		COLORREF(0x0) 
#define   cr_white		COLORREF(0x0ffffff) 





enum OpenCloseDialogs {
	M2_DEBUG_DLG = 1,
	M2_BEAMSCOPE_DLG = 2,
	M2_BEAMMAP_DLG = 3,
	M2_BEAMC_DLG = 4,
	DIV_BEAMMAP_DLG = 5,
	DIV_BEAMC_DLG = 6,
	WC_FLUENCE_DLG = 7,
	NUMERIC_DISPLAY_MODES = 8,
	EPPROM_DATA = 9,
	LOGGING_DLG = 10,
	BS_PULSED_DLG = 11,
	WAVE_LENGTH_DLG = 12,
	CAPTURE_DLG = 13,
	PCI_EEPROM_DLG = 14,
	WANDER_DLG = 15,
	CENTROID_CLIP_DLG = 16,
	WC_IMAGE_LOG_SETUP_DLG = 17,
	WC_IMAGE_LOG__DLG = 18,
	WC_LOGGING_DLG = 19,
	BEAM_FIT_DLG = 20,
	TRIGGER_SETUP = 21,
	GEO_CENTROID_CLIP_DLG = 22,
	BEAM_CAL_DLG = 23,
	M_FACTOR_DLG = 24,
	GET_EWIDTH_CLIP = 25,
	UCM_TEST_DLG = 26,
	UCM_CAL_DLG = 27,
	PCD_DLG = 28,
	FILE_BROWSER_DLG = 29,
	TEST_USB_M2_STAGE = 30,
	UCM_M2_DIALOG = 31,
	ISO_CLIP_DLG = 32,
	FIRMWARE_LOADER = 33,
	OLD_BEAM_CAL_DLG = 34,
	FIR_HOT_ADJUST_DLG = 35,
	UMAP_SPEED_CHANGE = 36,
	LCM_REG_DLG = 37,
	OPENGL_TEST_DLG = 38

};


enum {
	CAMBIT_STRB_LOCAL = 1,
	CAMBIT_STRB_Y_BEGIN = 2,
	CAMBIT_STRB_Y_SIZE = 3,
	CAMBIT_STRB_X_BEGIN = 4,
	CAMBIT_STRB_X_SIZE = 5,
	CAMBIT_STRB_SHUT_LO = 6,
	CAMBIT_STRB_SHUT_HI = 7,
	CAMBIT_STRB_ADC = 8,
	CAMBIT_ALT_LOC = 9,
	TRIG_SET = 14,
	CAMBIT_STRB_SOFT_TRIG = 15,
};

enum {
	ADC_RED = 0,
	ADC_GREEN = 1,
	ADC_BLUE = 2,
};


enum _CorrectionPts {
	CP_CLIP1 = 0,
	CP_CLIP2 = 1,
	CP_SIGMA1 = 2,
	CP_SIGMA2 = 3,
	CP_SPARE1 = 4,
	CP_SPARE2 = 5,
	CP_SPARE3 = 6,
	CP_SPARE4 = 7,
};


enum _Badness_ {
	BAD_PLUS45_SLIT_NOT_THERE = 0x0001,
	BAD_MINUS45_SLIT_NOT_THERE = 0x0002,
	BAD_PLUS45_SLIT_NOT_HIT = 0x0004,
	BAD_MINUS45_SLIT_NOT_HIT = 0x0008,
	BAD_PLUS45_CENTROID = 0x0010,
	BAD_MINUS45_CENTROID = 0x0020,
	BAD_SLIT_RADIUS = 0x0040,
	BAD_SAVED_DATA_PTR = 0x0080,
	BAD_LINEAR_TO_LOG = 0x0100,
	BAD_M2_SLIT_MISSING = 0x0200,
	BAD_NOT_ALL_SLIT_HIT = 0x0400,
	BAD_KNIFE_M2_NOT_ALLOWED = 0x0800,
	BAD_NO_Wavelength = 0x1000,
	BAD_M2_VALUE = 0x2000,
};


enum _Palettes_ {
	PAL_256 = 1,
	PAL_GRAY = 2,
	PAL_16 = 3,
	PAL_10 = 4,
	MAX_PAL = 5,
};


enum _Types_ {
	TYPE_BITMAP = 1,
	TYPE_DATARAY = 2,
	TYPE_BEAMSCOPE = 3,
	TYPE_BEAMMAP = 4,
	TYPE_BEAMR = 5,
	TYPE_TEXT = 6,
	TYPE_BINARY = 7,
	TYPE_WINCAM_FILE = 8,
	TYPE_IMAGE_DATA = 9,
	TYPE_BEAMMAP_SLIT_DATA = 10,
	TYPE_BM_EEPROM_DATA = 11,

	TYPE_BEAM_R_HEADER = 12,
	TYPE_BEAM_R_DATA_FILE = 13,
	TYPE_BM_PROFILE_DATA = 14,
	TYPE_BEAM_MAP_HEADER = 15,
	//TYPE_BSCOPE_DATA_FILE=16,
	TYPE_BM_DATA_BUFFER = 17,
	TYPE_BR_DATA_BUFFER = 18,
	TYPE_BS_DATA_BUFFER = 19,
	TYPE_COMMON_DATA_BUFFER = 20,
	TYPE_BM_BEAM_DATA = 21,
	TYPE_BR_BEAM_DATA = 22,
	TYPE_BM_PROFILE_PTR = 23,
	TYPE_BEAM_MAP = 24,
	TYPE_BEAM_R = 25,
	TYPE_BM_DATA_ARRAY = 26,
	TYPE_BR_DATA_ARRAY = 27,
	TYPE_LOG_DATA_FILE = 28,
	TYPE_TIME_BOMB = 29,
	TYPE_WC_IMAGE_DATA = 30,
	TYPE_WINCAM_BUFFER = 31,
	TYPE_WCAMOCX_DATA = 32,
	TYPE_BM_DATA_TEXT = 33,
	TYPE_BR_DATA_TEXT = 34,
	TYPE_BC_DATA_ARRAY = 35,
	TYPE_BC_DATA_BUFFER = 36,
	TYPE_BEAMC = 37,
	TYPE_BC_BEAM_DATA = 38,
	TYPE_BC_DATA_TEXT = 39,
	TYPE_WC_DATA_ARRAY = 40,
	TYPE_WC_IMAGE_DATA_HEADER = 41,
	TYPE_TIFF = 42,
	TYPE_TIFF_8BIT = 43,
	TYPE_TIFF_16BIT = 44,
	TYPE_WC_DATA_TEXT = 45,
	TYPE_P7_EEPROM_DATA = 46,
	TYPE_BS_M2_BUFFER = 47,
	TYPE_BS_DATA_TEXT = 48,
	TYPE_WC_IMAGE_DATA_HEADER_2 = 49,
	TYPE_BM_DATA_BUFFER_2 = 50,
	TYPE_BR_DATA_BUFFER_2 = 51,
	TYPE_BS_DATA_BUFFER_2 = 52,
	TYPE_BC_DATA_BUFFER_2 = 53,
	TYPE_WANDER_BUFFER = 54,
	TYPE_UCM_CAL_FILE = 55,
	TYPE_PCS_DATA = 56,
	TYPE_PCS_FILE_DATA = 57,
	TYPE_PCS_FILE_DATA_FULL = 58,
	TYPE_PCS_FILE_DATA_FAST = 59,
	TYPE_PCS_DATA_HEADER = 60,
	TYPE_PCS_FILE_LIST_HEADER = 61,
	TYPE_PCS_PBIT_DATA = 62,
	TYPE_U_MAP_C = 63,
	TYPE_U_MAP_R = 64,
	TYPE_USB_BC_DATA_BUFFER = 65,
	TYPE_USB_BR_DATA_BUFFER = 66,
};

enum SlitData {
	X_IN = 0,
	Y_IN,
	Z_IN,
	X_OUT,
	Y_OUT,
	Z_OUT,
	SLIT_WIDTH,
	aCENTROID,
	theOffset,
};


enum brSlitIndex {
	rPlus45A = 0,
	rMinus45A,
	rPlus45B,
	rMinus45B,
};


enum SlitIndex {
	sMinus2 = 0,
	sMinus1,
	sZero,
	sPlus1,
	sPlus2,
	sPlus45,
	sMinus45,
	sZeroAlt,
	sCalPower,
};

enum _Selected_Device_ {
	IS_BEAMSCOPE = 1,/**<1: */
	IS_BEAMR = 2,/**<2: */
	IS_BEAMMAP = 3,/**<3: */
	IS_BEAMC = 4,/**<4: */
	IS_WINCAM = 5,/**<5: */
	IS_WINCAM_DIV = 6,/**<6: */
	IS_WINCAM_LOG = 7,/**<7: */
	IS_TWOD_SCAN = 8,/**<8: */

	IS_WINCAM_COMP = 9,/**<9: */
	IS_WINCAM_COMP3 = 10,/**<10: */
	IS_WINCAM_COMP4 = 11,/**<11: */
	IS_WINCAM_COMP5 = 12,/**<12: */
	LAST_DEVICE = 13,/**<13: */
};

enum _BeamMessages_ {
	M2_DONE = 1,
	M2_START = 2,
	GLOBAL_CLIP_CHANGE = 3,
	GLOBAL_STOP_CAPTURE = 4,
	AUTO_3D_UPDATE = 5,
	AUTO_2D_UPDATE = 6,
	JITTER_CONTROL = 7,
	PALETTE_CHANGE = 8,
	INK_SAVER_CHANGE = 9,
	AUTO_NAMES = 10,
	LIVE_RECALL_STATE = 11,
	XC_YC_CHANGE = 12,
	STATE_CHANGE = 13,
	DATA_CHANGE = 14,
	BS_DATA_CHANGE = 15,
	HELP_MSG = 16,
	GO_PRESSED = 17,
	STOP_PRESSED = 18,
	BOTTOM_CHANGE = 19,
};

enum _Slitss_ {
	SLIT1 = 1,
	SLIT2 = 2,
	SLIT3 = 4,
	SLIT4 = 8,
	SLIT5 = 16,
	SLIT6 = 32,
	SLIT7 = 64,
	SLIT8 = 128,
};

enum _Profiles_ {

	DEFAULT_PROFILE = 0,/**<0: *//**<0: */ //DEFAULT_PROFILE = 0	

	BS_PROFILE_X = 1,/**<1: */		//BS_PROFILE_X=1
	BS_PROFILE_Y = 2,/**<2: */		//BS_PROFILE_Y=2
	BS_PROFILE_S = 3,/**<3: */		//BS_PROFILE_S=3

	BR_PROFILE_X = 4,/**<4: */		//BR_PROFILE_X=4
	BR_PROFILE_Y = 5,/**<5: */		//BR_PROFILE_Y=5

	BM_PROFILE_ZM2 = 6,/**<6: */	//BM_PROFILE_ZM2=6
	BM_PROFILE_ZM1 = 7,/**<7: */	//BM_PROFILE_ZM1=7
	BM_PROFILE_Z = 8,/**<8: */		//BM_PROFILE_Z=8
	BM_PROFILE_ZP1 = 9,/**<9: */	//BM_PROFILE_ZP1=9
	BM_PROFILE_ZP2 = 10,/**<10: */	//BM_PROFILE_ZP2=10
	BM_PROFILE_M45 = 11,/**<11: */	//BM_PROFILE_M45=11
	BM_PROFILE_P45 = 12,/**<12: */	//BM_PROFILE_P45=12
	BM_PROFILE_Z2 = 13,/**<13: */	//BM_PROFILE_Z2=13

	BC_PROFILE_U1 = 14,/**<14: */	//BC_PROFILE_U1=14
	BC_PROFILE_V1 = 15,/**<15: */	//BC_PROFILE_V1=15	
	BC_PROFILE_U2 = 16,/**<16: */	//BC_PROFILE_U2=16
	BC_PROFILE_V2 = 17,/**<17: */	//BC_PROFILE_V2=17
	BC_PROFILE_U3 = 18,/**<18: */	//BC_PROFILE_U3=18
	BC_PROFILE_V3 = 19,/**<19: */	//BC_PROFILE_V3=19
	BC_PROFILE_U4 = 20,/**<20: */	//BC_PROFILE_U4=20
	BC_PROFILE_V4 = 21,/**<21: */	//BC_PROFILE_V4=21

	WC_PROFILE_X = 22,/**<22: */	//WC_PROFILE_X=22
	WC_PROFILE_Y = 23,/**<23: */	//WC_PROFILE_Y=23	

	WC_PROFILE_XB = 24,/**<24: */	//WC_PROFILE_XB=24
	WC_PROFILE_YB = 25,/**<25: */	//WC_PROFILE_YB=25	

	WC_DIV_X = 26,/**<26: */		//WC_DIV_X=26
	WC_DIV_Y = 27,/**<27: */		//WC_DIV_Y=27

	ID_LAST_PROFILE,/**<: */	//ID_LAST_PROFILE

};


enum IndexToDataTestParameters {

	BlankParameters = 0,/**<0: */
	DefaultParameters = 1,/**<1: */

	// Beam'R

	u_BeamR_Width_at_Clip_1 = 2,/**<2: */
	u_BeamR_Width_at_Clip_2 = 3,/**<3: */
	u_BeamR_GFit = 4,/**<4: */
	u_BeamR_TopHat = 5,/**<5: */

	v_BeamR_Width_at_Clip_1 = 6,/**<6: */
	v_BeamR_Width_at_Clip_2 = 7,/**<7: */
	v_BeamR_GFit = 8,/**<8: */
	v_BeamR_TopHat = 9,/**<9: */

	v1_BeamC_Width_at_Clip_1 = 10,/**<10: */
	v1_BeamC_Width_at_Clip_2 = 11,/**<11: */
	v1_BeamC_GFit = 12,/**<12: */
	v1_BeamC_TopHat = 13,/**<13: */

	u1_BeamC_Width_at_Clip_1 = 14,/**<14: */
	u1_BeamC_Width_at_Clip_2 = 15,/**<15: */
	u1_BeamC_GFit = 16,/**<16: */
	u1_BeamC_TopHat = 17,/**<17: */

	v2_BeamC_Width_at_Clip_1 = 18,/**<18: */
	v2_BeamC_Width_at_Clip_2 = 19,/**<19: */
	v2_BeamC_GFit = 20,/**<20: */

	v2_BeamC_TopHat = 21,/**<21: */

	u2_BeamC_Width_at_Clip_1 = 22,/**<22: */
	u2_BeamC_Width_at_Clip_2 = 23,/**<23: */
	u2_BeamC_GFit = 24,/**<24: */
	u2_BeamC_TopHat = 25,/**<25: */

	v3_BeamC_Width_at_Clip_1 = 26,/**<26: */
	v3_BeamC_Width_at_Clip_2 = 27,/**<27: */
	v3_BeamC_GFit = 28,/**<28: */
	v3_BeamC_TopHat = 29,/**<29: */

	u3_BeamC_Width_at_Clip_1 = 30,/**<30: */
	u3_BeamC_Width_at_Clip_2 = 31,/**<31: */
	u3_BeamC_GFit = 32,/**<32: */
	u3_BeamC_TopHat = 33,/**<33: */

	v4_BeamC_Width_at_Clip_1 = 34,/**<34: */
	v4_BeamC_Width_at_Clip_2 = 35,/**<35: */
	v4_BeamC_GFit = 36,/**<36: */
	v4_BeamC_TopHat = 37,/**<37: */

	u4_BeamC_Width_at_Clip_1 = 38,/**<38: */
	u4_BeamC_Width_at_Clip_2 = 39,/**<39: */
	u4_BeamC_GFit = 40,/**<40: */
	u4_BeamC_TopHat = 41,/**<41: */

	minus2_BeamMap_Width_at_Clip_1 = 42,/**<42: */
	minus2_BeamMap_Width_at_Clip_2 = 43,/**<43: */
	minus2_BeamMap_GFit = 44,/**<44: */
	minus2_BeamMap_TopHat = 45,/**<45: */

	minus1_BeamMap_Width_at_Clip_1 = 46,/**<46: */
	minus1_BeamMap_Width_at_Clip_2 = 47,/**<47: */
	minus1_BeamMap_GFit = 48,/**<48: */
	minus1_BeamMap_TopHat = 49,/**<49: */

	zero_BeamMap_Width_at_Clip_1 = 50,/**<50: */
	zero_BeamMap_Width_at_Clip_2 = 51,/**<51: */
	zero_BeamMap_GFit = 52,/**<52: */
	zero_BeamMap_TopHat = 53,/**<53: */

	plus1_BeamMap_Width_at_Clip_1 = 54,/**<54: */
	plus1_BeamMap_Width_at_Clip_2 = 55,/**<55: */
	plus1_BeamMap_GFit = 56,/**<56: */
	plus1_BeamMap_TopHat = 57,/**<57: */

	plus2_BeamMap_Width_at_Clip_1 = 58,/**<58: */
	plus2_BeamMap_Width_at_Clip_2 = 59,/**<59: */
	plus2_BeamMap_GFit = 60,/**<60: */
	plus2_BeamMap_TopHat = 61,/**<61: */

	plus45_BeamMap_Width_at_Clip_1 = 62,/**<62: */
	plus45_BeamMap_Width_at_Clip_2 = 63,/**<63: */
	plus45_BeamMap_GFit = 64,/**<64: */
	plus45_BeamMap_TopHat = 65,/**<65: */

	minus45_BeamMap_Width_at_Clip_1 = 66,/**<66: */
	minus45_BeamMap_Width_at_Clip_2 = 67,/**<67: */
	minus45_BeamMap_GFit = 68,/**<68: */
	minus45_BeamMap_TopHat = 69,/**<69: */


	u_BeamScope_Width_at_Clip_1 = 70,/**<70: */
	u_BeamScope_Width_at_Clip_2 = 71,/**<71: */
	u_BeamScope_GFit = 72,/**<72: */
	u_BeamScope_TopHat = 73,/**<73: */

	v_BeamScope_Width_at_Clip_1 = 74,/**<74: */
	v_BeamScope_Width_at_Clip_2 = 75,/**<75: */
	v_BeamScope_GFit = 76,/**<76: */
	v_BeamScope_TopHat = 77,/**<77: */


	u_WinCamD_Width_at_Clip_1 = 78,/**<78: The Clip[a] 2Wua beam diameter */
	u_WinCamD_Width_at_Clip_2 = 79,/**<79: The Clip[b] 2Wub beam diameter*/
	u_WinCamD_GFit = 80,/**<80: The Clip[a] 2Wua profile Gaussian Ffit percentage*/
	u_WinCamD_TopHat = 81,/**<81: The Clip[a] 2Wua profile Top Hat fit percentage*/

	v_WinCamD_Width_at_Clip_1 = 82,/**<82: The Clip[a] 2Wva beam diameter */
	v_WinCamD_Width_at_Clip_2 = 83,/**<83: The Clip[b] 2Wba beam diameter */
	v_WinCamD_GFit = 84,/**<84: The Clip[a] 2Wva profile Gaussian Ffit percentage*/
	v_WinCamD_TopHat = 85,/**<85: The Clip[a] 2Wva profile Top Hat fit percentage*/

	Xc_BeamR = 86,/**<86: */
	Yc_BeamR = 87,/**<87: */

	Xg_BeamR = 88,/**<88: */
	Yg_BeamR = 89,/**<89: */
	Xp_BeamR = 90,/**<90: */
	Yp_BeamR = 91,/**<91: */

	uM2_NA_BeamC_alt = 92,/**<92: */
	vM2_NA_BeamC_alt = 93,/**<93: */

	Uniformity_WinCamD = 94,/**<94: */
	Ewidth_WinCamD = 95,/**<95: */

	Ellipticity_BeamR = 96,/**<96: */
	Power_BeamR = 97,/**<97: */

	Xc1_BeamC = 98,/**<98: */
	Yc1_BeamC = 99,/**<99: */
	Xg1_BeamC = 100,/**<100: */
	Yg1_BeamC = 101,/**<101: */
	Xp1_BeamC = 102,/**<102: */
	Yp1_BeamC = 103,/**<103: */


	Xc2_BeamC = 104,/**<104: */
	Yc2_BeamC = 105,/**<105: */
	Xg2_BeamC = 106,/**<106: */
	Yg2_BeamC = 107,/**<107: */
	Xp2_BeamC = 108,/**<108: */
	Yp2_BeamC = 109,/**<109: */


	Xc3_BeamC = 110,/**<110: */
	Yc3_BeamC = 111,/**<111: */
	Xg3_BeamC = 112,/**<112: */
	Yg3_BeamC = 113,/**<113: */
	Xp3_BeamC = 114,/**<114: */
	Yp3_BeamC = 115,/**<115: */


	Xc4_BeamC = 116,/**<116: */
	Yc4_BeamC = 117,/**<117: */
	Xg4_BeamC = 118,/**<118: */
	Yg4_BeamC = 119,/**<119: */
	Xp4_BeamC = 120,/**<120: */
	Yp4_BeamC = 121,/**<121: */


	uMsquared_BeamC_Alt = 122,/**<122: */
	uM2_Zo_BeamC_Alt = 123,/**<123: */


	vMsquared_BeamC_Alt = 124,/**<124: */
	vM2_Zo_BeamC_Alt = 125,/**<125: */

	Ellipticity_BeamC = 126,/**<126: */
	Power_BeamC = 127,/**<127: */

	Xc_BeamMap = 128,/**<128: */
	Yc_BeamMap = 129,/**<129: */
	Xg_BeamMap = 130,/**<130: */
	Yg_BeamMap = 131,/**<131: */
	Xp_BeamMap = 132,/**<132: */
	Yp_BeamMap = 133,/**<133: */

	Ellipticity_BeamMap = 134,/**<134: */
	Power_BeamMap = 135,/**<135: */
	DivergenceNA_BeamMap = 136,/**<136: */
	DivergenceDegrees_BeamMap = 137,/**<137: */
	DivergenceRadians_BeamMap = 138,/**<138: */
	Msquared_BeamMap = 139,/**<139: */
	M2_2Wo_BeamMap = 140,/**<140: */
	M2_Zo_BeamMap = 141,/**<141: */
	M2_Zr_BeamMap = 142,/**<142: */
	M2_Theta_BeamMap = 143,/**<143: */
	M2_NA_BeamMap = 144,/**<144: */

	Xc_BeamScope = 145,/**<145: */
	Yc_BeamScope = 146,/**<146: */
	Xg_BeamScope = 147,/**<147: */
	Yg_BeamScope = 148,/**<148: */
	Xp_BeamScope = 149,/**<149: */
	Yp_BeamScope = 150,/**<150: */

	Ellipticity_BeamScope = 151,/**<151: */
	Power_BeamScope = 152,/**<152: */

	uDivergenceNA_BeamC = 153,/**<153: */
	uDivergenceDegrees_BeamC = 154,/**<154: */
	uDivergenceRadians_BeamC = 155,/**<155: */

	uMsquared_BeamC = 156,/**<156: */
	uM2_2Wo_BeamC = 157,/**<157: */
	uM2_Zo_BeamC = 158,/**<158: */
	uM2_Zr_BeamC = 159,/**<159: */
	uM2_Theta_BeamC = 160,/**<160: */
	uM2_NA_BeamC = 161,/**<161: */

	vDivergenceNA_BeamC = 162,/**<162: */
	vDivergenceDegrees_BeamC = 163,/**<163: */
	vDivergenceRadians_BeamC = 164,/**<164: */

	vMsquared_BeamC = 165,/**<165: */
	vM2_2Wo_BeamC = 166,/**<166: */
	vM2_Zo_BeamC = 167,/**<167: */
	vM2_Zr_BeamC = 168,/**<168: */
	vM2_Theta_BeamC = 169,/**<169: */
	vM2_NA_BeamC = 170,/**<170: */

	Xc_WinCamD = 171,/**< 171: X-Axis mathematical centroid position*/
	Yc_WinCamD = 172,/**< 172: Y-Axis mathematical centroid position*/
	Xg_WinCamD = 173,/**< 173: X-Axis geometric centroid position */
	Yg_WinCamD = 174,/**< 174: Y-Axis geometric centroid position */
	Xp_WinCamD = 175,/**< 175: X-Axis peak position */
	Yp_WinCamD = 176,/**< 176: Y-Axis peak position */

	Ellipticity_WinCamD = 177,/**< 177: Ellipticity*/
	Power_WinCamD = 178,/**< 178: Relative power value in the selected units*/
	Oreintation_WinCamD = 179,/**< 179: The orientation of the ellipse in degrees */
	MajorWidth_WinCamD = 180,/**< 180: The ellipse major diameter 2W_Major */
	MinorWidth_WinCamD = 181,/**< 181: The ellipse mino diameter 2W_Minor*/
	MeanWidth_WinCamD = 182,/**< 182: The ellipse mean diameter 2W_Mean*/
	Peak_WinCamD = 183,/**< 183: The peak value as a percentange of the maximum possible ADC level*/
	AverageFluence_WinCamD = 184,/**< 184: The average fluence value from the fluence dialogue*/

	uM2_M2_Device = 185,/**<185: */
	uM2_2Wo_Device = 186,/**<186: */
	uM2_Zo_Device = 187,/**<187: */
	uM2_Zr_Device = 188,/**<188: */
	uM2_Theta_Device = 189,/**<189: */
	uM2_NA_Device = 190,/**<190: */

	vM2_M2_Device = 191,/**<191: */
	vM2_2Wo_Device = 192,/**<192: */
	vM2_Zo_Device = 193,/**<193: */
	vM2_Zr_Device = 194,/**<194: */
	vM2_Theta_Device = 195,/**<195: */
	vM2_NA_Device = 196,/**<196: */

	ID_WANDER = 197,/**<197: */

	PointingX_BeamMapC = 198,/**<198: */
	PointingY_BeamMapC = 199,/**<199: */
	PointingX_BeamMap = 200,/**<200: */

	Msquared_BeamMap_Alt = 201,/**<201: */
	M2_Zo_BeamMap_Alt = 202,/**<202: */
	M2_Theta_BeamMap_Alt = 203,/**<203: */
	M2_Zo_BeamMap_Alt2 = 204,/**<204: */

	u_BeamR_GFitWidth = 205,/**<205: */
	v_BeamR_GFitWidth = 206,/**<206: */
	v1_BeamC_GFitWidth = 207,/**<207: */
	u1_BeamC_GFitWidth = 208,/**<208: */
	v2_BeamC_GFitWidth = 209,/**<209: */
	u2_BeamC_GFitWidth = 210,/**<210: */
	v3_BeamC_GFitWidth = 211,/**<211: */
	u3_BeamC_GFitWidth = 212,/**<212: */
	v4_BeamC_GFitWidth = 213,/**<213: */
	u4_BeamC_GFitWidth = 214,/**<214: */
	minus2_BeamMap_GFitWidth = 215,/**<215: */
	minus1_BeamMap_GFitWidth = 216,/**<216: */
	zero_BeamMap_GFitWidth = 217,/**<217: */
	plus1_BeamMap_GFitWidth = 218,/**<218: */
	plus2_BeamMap_GFitWidth = 219,/**<219: */
	plus45_BeamMap_GFitWidth = 220,/**<220: */
	minus45_BeamMap_GFitWidth = 221,/**<221: */
	u_BeamScope_GFitWidth = 222,/**<222: */
	v_BeamScope_GFitWidth = 223,/**<223: */
	u_WinCamD_GFitWidth = 224,/**<224: */
	v_WinCamD_GFitWidth = 225,/**<225: */

	MajorWidth_ISO11146 = 226,/**<226: */
	MinorWidth_ISO11146 = 227,/**<227: */
	ELPDEG_ISO11146 = 228,/**<228: */

	x_WinCam_Divergence_at_Clip_1 = 229,/**<229: */
	x_WinCam_Divergence_at_Clip_2 = 230,/**<230: */
	y_WinCam_Divergence_at_Clip_1 = 231,/**<231: */
	y_WinCam_Divergence_at_Clip_2 = 232,/**<232: */

	Xu_WinCamD = 233,/**<233: */
	Yu_WinCamD = 234,/**<234: */

	u2_WinCamD_Width_at_Clip_1 = 235,/**<235: */
	u2_WinCamD_Width_at_Clip_2 = 236,/**<236: */
	u2_WinCamD_GFit = 237,/**<237: */
	u2_WinCamD_TopHat = 238,/**<238: */

	v2_WinCamD_Width_at_Clip_1 = 239,/**<239: */
	v2_WinCamD_Width_at_Clip_2 = 240,/**<240: */
	v2_WinCamD_GFit = 241,/**<241: */
	v2_WinCamD_TopHat = 242,/**<242: */

	Ellipticity_WinCamD_alt = 243,/**<243: */
	Oreintation_WinCamD_alt = 244,/**<244: */
	MajorWidth_WinCamD_alt = 245,/**<245: */
	MinorWidth_WinCamD_alt = 246,/**<246: */
	MeanWidth_WinCamD_alt = 247,/**<247: */
	Peak_WinCamD_alt = 248,/**<248: */

	MajorWidth_ISO11146_alt = 249,/**<249: */
	MinorWidth_ISO11146_alt = 250,/**<250: */
	ELPDEG_ISO11146_alt = 251,/**<251: */
	Ewidth_WinCamD_alt = 252,/**<252: */

	Xc_WinCamD_alt = 253,/**<253: */
	Yc_WinCamD_alt = 254,/**<254: */

	Xu_WinCamD_alt = 255,/**<255: */
	Yu_WinCamD_alt = 256,/**<256: */

	Xg_WinCamD_alt = 257,/**<257: */
	Yg_WinCamD_alt = 258,/**<258: */

	Xp_WinCamD_alt = 259,/**<259: */
	Yp_WinCamD_alt = 260,/**<260: */


	d63_major_WinCamD = 261,/**<261: */
	d63_minor_WinCamD = 262,/**<262: */
	d63_WinCamD = 263,/**<263: */
	A_d63_WinCamD = 264,/**<264: */
	P_d63_WinCamD = 265,/**<265: */
	I63_WinCamD = 266,/**<266: */
	Theta_63_WinCamD = 267,/**<267: */

	u_Pointing = 268,/**<268: */
	v_Pointing = 269,/**<269: */
	u2_Pointing = 270,/**<270: */
	v2_Pointing = 271,/**<271: */


	MB_Header = 272,/**<272: */	//1
	MB_Major = 273,/**<273: */ //2
	MB_Minor = 274,/**<274: */	//3
	MB_Mean = 275,/**<275: */	//4
	MB_Deff = 276,/**<276: */	//5
	MB_E = 277,/**<277: */	//6
	MB_Oreintation = 278,/**<278: */	//7
	MB_Xc = 279,/**<279: */	//8
	MB_Yc = 280,/**<280: */ //9
	MB_Gauss = 281,/**<281: */

	MB_NU = 282,/**<282: */
	MB_Clocking = 283,/**<283: */
	MB_I_peak = 284,/**<284: */
	MB_Power = 285,/**<285: */
	MB_S_rel = 286,/**<286: */
	MB_D_rel = 287,/**<287: */
	MB_Xcg = 288,/**<288: */
	MB_Ycg = 289,/**<289: */


	WC_AreaGFit = 290,/**<290: */
	StartSpare = 291,/**<291: */
	Spare31 = 292,/**<292: */

	Last_PARAMETER_ID = 293,/**<293: */

	SetClipLevel1 = 294,/**<294: */
	SetClipLevel2 = 295,/**<295: */
	PeakButton = 296,/**<296: */
	StatusButton = 297,/**<297: */
	ZeroButton = 298,/**<298: */
	SpacerButton1 = 299,/**<299: */
	SpacerButton2 = 300,/**<300: */
	ZoomButton = 301,/**<301: */
	CrossHairButton = 302,/**<302: */
	AuxStageScale_2D = 303,/**<303: */
	TwoDsetup_2D = 304,/**<304: */
	SetReference_2D = 305,/**<305: */
	Reference_2D = 306,/**<306: */
	HomeStage_2D = 307,/**<307: */
	Scan_2D = 308,/**<308: */
	DoSearch = 309,/**<309: */
	FindCenter_2D = 310,/**<310: */
	ReDo2D = 311,/**<311: */
	MessageButton = 312,/**<312: */

	Best_u_Divergence = 313,/**<313: */
	Best_v_Divergence = 314,/**<314: */
	Reset_Divergence = 315,/**<315: */
	CrossHairButton_alt = 316,/**<316: */

	Exposure_spare1 = 317,/**<317: */
	Exposure_spare2 = 318,/**<318: */

	ZeroButton_alt_0 = 319,/**<319: */
	ZeroButton_alt_1 = 320,/**<320: */
	bWavelength = 321,/**<321: */
	Source_offset = 322,/**<322: */

	DisplayArea1 = 323,/**<323: */
	DisplayArea2 = 324,/**<324: */

	MB_Setup = 325,/**<325: */
	MB_Label2 = 326,/**<326: */
	MB_Spot_Sep = 327,/**<327: */
	MB_Guass_Sep = 328,/**<328: */
	MB_I_Guass = 329,/**<329: */
	MB_Io_Ave = 330,/**<330: */
	MB_Ps = 331,/**<331: */
	MB_spare1 = 332,/**<332: */
	MB_spare2 = 333,/**<333: */
	MB_spare3 = 334,/**<334: */
	MB_spare4 = 335,/**<335: */
	MB_spare5 = 336,/**<336: */

	Ellipticity_WinCamD_1 = 337,/**<337: */
	Ellipticity_WinCamD_2 = 338,/**<338: */
	Ellipticity_WinCamD_3 = 339,/**<339: */
	Ellipticity_WinCamD_4 = 340,/**<340: */

	Orientation_WinCamD_1 = 341,/**<341: */
	Orientation_WinCamD_2 = 342,/**<342: */
	Orientation_WinCamD_3 = 343,/**<343: */
	Orientation_WinCamD_4 = 344,/**<344: */

	MajorWidth_WinCamD_1 = 345,/**<345: */
	MajorWidth_WinCamD_2 = 346,/**<346: */
	MajorWidth_WinCamD_3 = 347,/**<347: */
	MajorWidth_WinCamD_4 = 348,/**<348: */

	MinorWidth_WinCamD_1 = 349,/**<349: */
	MinorWidth_WinCamD_2 = 350,/**<350: */
	MinorWidth_WinCamD_3 = 351,/**<351: */
	MinorWidth_WinCamD_4 = 352,/**<352: */

	MeanWidth_WinCamD_1 = 353,/**<353: */
	MeanWidth_WinCamD_2 = 354,/**<354: */
	MeanWidth_WinCamD_3 = 355,/**<355: */
	MeanWidth_WinCamD_4 = 356,/**<356: */

	Peak_WinCamD_1 = 357,/**<357: */
	Peak_WinCamD_2 = 358,/**<358: */
	Peak_WinCamD_3 = 359,/**<359: */
	Peak_WinCamD_4 = 360,/**<360: */

	MajorWidth_ISO11146_1 = 361,/**<361: */
	MajorWidth_ISO11146_2 = 362,/**<362: */
	MajorWidth_ISO11146_3 = 363,/**<363: */
	MajorWidth_ISO11146_4 = 364,/**<364: */

	MinorWidth_ISO11146_1 = 365,/**<365: */
	MinorWidth_ISO11146_2 = 366,/**<366: */
	MinorWidth_ISO11146_3 = 367,/**<367: */
	MinorWidth_ISO11146_4 = 368,/**<368: */

	ELPDEG_ISO11146_1 = 369,/**<369: */
	ELPDEG_ISO11146_2 = 370,/**<370: */
	ELPDEG_ISO11146_3 = 371,/**<371: */
	ELPDEG_ISO11146_4 = 372,/**<372: */

	Ewidth_WinCamD_1 = 373,/**<373: */
	Ewidth_WinCamD_2 = 374,/**<374: */
	Ewidth_WinCamD_3 = 375,/**<375: */
	Ewidth_WinCamD_4 = 376,/**<376: */

	Xc_WinCamD_1 = 377,/**<377: */
	Xc_WinCamD_2 = 378,/**<378: */
	Xc_WinCamD_3 = 379,/**<379: */
	Xc_WinCamD_4 = 380,/**<380: */

	Yc_WinCamD_1 = 381,/**<381: */
	Yc_WinCamD_2 = 382,/**<382: */
	Yc_WinCamD_3 = 383,/**<383: */
	Yc_WinCamD_4 = 384,/**<384: */

	Xu_WinCamD_1 = 385,/**<385: */
	Xu_WinCamD_2 = 386,/**<386: */
	Xu_WinCamD_3 = 387,/**<387: */
	Xu_WinCamD_4 = 388,/**<388: */

	Yu_WinCamD_1 = 389,/**<389: */
	Yu_WinCamD_2 = 390,/**<390: */
	Yu_WinCamD_3 = 391,/**<391: */
	Yu_WinCamD_4 = 392,/**<392: */

	Xg_WinCamD_1 = 393,/**<393: */
	Xg_WinCamD_2 = 394,/**<394: */
	Xg_WinCamD_3 = 395,/**<395: */
	Xg_WinCamD_4 = 396,/**<396: */

	Yg_WinCamD_1 = 397,/**<397: */
	Yg_WinCamD_2 = 398,/**<398: */
	Yg_WinCamD_3 = 399,/**<399: */
	Yg_WinCamD_4 = 400,/**<400: */

	Xp_WinCamD_1 = 401,/**<401: */
	Xp_WinCamD_2 = 402,/**<402: */
	Xp_WinCamD_3 = 403,/**<403: */
	Xp_WinCamD_4 = 404,/**<404: */

	Yp_WinCamD_1 = 405,/**<405: */
	Yp_WinCamD_2 = 406,/**<406: */
	Yp_WinCamD_3 = 407,/**<407: */
	Yp_WinCamD_4 = 408,/**<408: */

	Exposure_1 = 409,/**<409: */
	Exposure_2 = 410,/**<410: */
	Exposure_3 = 411,/**<411: */
	Exposure_4 = 412,/**<412: */

	ZeroButton_1 = 413,/**<413: */
	ZeroButton_2 = 414,/**<414: */
	ZeroButton_3 = 415,/**<415: */
	ZeroButton_4 = 416,/**<416: */

	CrossHairButton_1 = 417,/**<417: */
	CrossHairButton_2 = 418,/**<418: */
	CrossHairButton_3 = 419,/**<419: */
	CrossHairButton_4 = 420,/**<420: */

	GainButton_1 = 421,/**<421: */
	GainButton_2 = 422,/**<422: */
	GainButton_3 = 423,/**<423: */
	GainButton_4 = 424,/**<424: */

	Blank_Button_1 = 425,/**<425: */
	Blank_Button_2 = 426,/**<426: */
	Blank_Button_3 = 427,/**<427: */
	Blank_Button_4 = 428,/**<428: */
	Blank_Button_5 = 429,/**<429: */
	Blank_Button_6 = 430,/**<430: */
	Blank_Button_7 = 431,/**<431: */
	Blank_Button_8 = 432,/**<432: */
	Blank_Button_9 = 433,/**<433: */
	Blank_Button_10 = 434,/**<434: */
	Blank_Button_11 = 435,/**<435: */
	Blank_Button_12 = 436,/**<436: */
	Blank_Button_13 = 437,/**<437: */
	Blank_Button_14 = 438,/**<438: */
	Blank_Button_15 = 439,/**<439: */

	Last_ID = 440/**<440: */
};

typedef	struct	{

	DWORD	Signature1;

	double	XMultiplicationFactor;
	double	YMultiplicationFactor;


	double	AdcOffset;

	double	Voltage_VSK;
	double	Voltage_FID;
	//	double	Offset_VSK[16] ;

	DWORD	Signature2;

}	CAMERA_DATA;


typedef	struct	{

	DWORD	Signature1;

	double	XMultiplicationFactor;
	double	YMultiplicationFactor;

	BOOL	BadPixelsValid;
	BOOL	BackGroundDataValid;

	double	Voltage_VSK;
	double	Voltage_FID;
	double	AdcOffset;
	double	Offset_VSK[16];

	BYTE	BadPixels[640 * 512];
	WORD	BackGroundData[16][640 * 500 * sizeof(WORD)];

	DWORD	Signature2;

}	CAMERA_DATA_EXTENDED2;


enum file_types {
	PROFILE_INFO_SAVED_DATA_TYPE = 100,
};

enum WidthModes {
	CLIP_LEVEL_METHOD = 0,
	SIGMA4_METHOD = 1,
	KNIFE_EDGE_METHOD = 2
};

enum SlitType {
	SLIT_SINGLE = 0,
	SLIT_DUAL,
	SLIT_DUAL_SINGLE,
	SLIT_PIN_HOLE,
};

enum GausFit {
	NO_SHOW_GAUSS = 0,
	SHOW_GAUSS,
	SHOW_TOP_HAT,
	SHOW_POLAR_CAM

};


typedef struct _DMA_PAGE
{
	ULONG pPhysicalAddr;    // physical address of page
	ULONG dwBytes;          // size of page
} DMA_PAGE, *PDMA_PAGE;

typedef struct _DMA_DATA
{
	ULONG			BufferID;
	ULONG			DmaBuffer;        // beginning of buffer
	ULONG			dwBytes;          // size of buffer
	ULONG			dwPages;          // number of pages in the buffer
	DMA_PAGE		Page[752];		  // Page data	
}	DMA_DATA, *PDMA_DATA;


typedef	struct	{
	DWORD	Offset;
	DWORD	Data;
}	PCI_REG_DATA;

typedef	struct	{
	WORD			wData[MAX_COUNT + 100];
}	AVERAGE_DATA_CASHE;

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_PCS_DATA_HEADER
	DWORD		DataOrBackground; // 0 = data else Background = 
	DWORD		Index;  // ie. 1 of N
	DWORD		NumberOfCycles;
	void		*Data;
}	PCS_DATA_HEADER;

typedef	struct	{
	char FileName[32];
	WORD	AdcPeak;
	WORD	Spares[16];
}	PCS_FILE_NAME;

typedef	struct	{
	DWORD			Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD			Type;			//  TYPE_PCS_DATA_HEADER
	DWORD			NumberofFiles;
	PCS_FILE_NAME	BackgroundFileName;
	PCS_FILE_NAME	DataFileNames[1];

}	PCS_FILE_LIST_HEADER;

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_PCS_DATA
	DWORD		NumberOfCycles;
	DWORD		Resolution;
	DWORD		Samples;
	char		WorkingDirectory[512];
	char		BackGroundFile[512];
	double		uSeconds[10];
	double		Gains[10];
	BOOL		SubtractionOn[16];

	int			Spares[32];
}	PCS_DATA;

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_PCS_FILE_DATA_FULL
	DWORD		Width;
	DWORD		Height;
	DWORD		AdcPeak;

	DWORD		CameraSerialNumber;
	double		PixelSize[2];
	double		Exposure;
	double		Gain;
	BOOL		SubtractionOn;
	SYSTEMTIME	TimeStamp;

	DWORD		Spares[32];

	WORD		Data[1200 * 1024];
	DWORD		Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
}	PCS_FILE_DATA_FULL;

typedef	struct	{

	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_PCS_PBIT_DATA
	char		ProjectRef[256];
	char		Engineer[256];
	double		Target[32];
	double		MaxLimits[32];
	double		MinLimits[32];
	int			Spares[256];

	DWORD		Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
}	PCS_PBIT_DATA;




typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_PCS_FILE_DATA_FAST
	DWORD		Width;
	DWORD		Height;
	DWORD		AdcPeak;
	DWORD		CameraSerialNumber;
	double		PixelSize[2];
	double		Exposure;
	double		Gain;
	BOOL		SubtractionOn;
	SYSTEMTIME	TimeStamp;

	DWORD		Spares[32];

	WORD		Data[1200 * 1024 / 4];
	DWORD		Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
}	PCS_FILE_DATA_FAST;

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_UCM_CAL_FILE

	WORD		Image_Fast[(1214 * 1024) / 2];
	WORD		Image_Full[(1214 * 1024) * 2];

	char		SerialNumber[16]; // D0645 ->  D0645.cal
	DWORD		RawValue[2];
	DWORD		FineValue[2];
	DWORD		Image_Fast_Mean;
	DWORD		Image_Full_Mean;

	DWORD		HotPixelMap[128];
	SYSTEMTIME	TimeStamp;

	DWORD		Version;
	DWORD		CalOffset;

	DWORD		spares[14];
	DWORD		Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;


}	UCM_CAL_FILE;

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_BM_EEPROM_DATA
	int			Valid;
	int			BeamMap_BeamR;		// true = BeamMap
	int			DetectorType;		// 0 = silicon, 1 = germanium
	float		Slits[8][10];		// Slit Data		
	float		SlitRadius;		// Slit radius
	float		PowerND;       // N.D. of power aperture ; 0 = not used 
	float		Rotation;		// not used on uMap
	float		OffsetAngle[8];		// not used on uMap
	float		float_spare[1];
	int			GainMethod;
	int			Pot[2];		// not used on uMap	
	int			Version;
	int			Planes;
	int			ZeroPhase;  // Master Rev Delay to be sent to uMap
	int			MotorSpeed; // not used on uMap

	int			spareA;
	int			spareB;
	//	int			CorrectionPhaseDegrees ;
	//	int			CorrectionAmplitudeX1000 ; // 2400 ==> 2.400%
	int			int_spare[1];

	SYSTEMTIME	CreateDate;		// GetLocalTime()
	DWORD		Signature2;		// DRI.	 // to verify valid

	char		SerialNumber[30];
	char		SoftwareVersion[30];

}	BM_EEPROM_DATA2;

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_BM_EEPROM_DATA
	int			Valid;
	int			BeamMap_BeamR;		// true = BeamMap
	int			DetectorType;		// 0 = silicon, 1 = germanium
	float		Slits[8][10];		// Slit Data		
	float		SlitRadius;		// Slit radius
	float		PowerND;       // N.D. of power aperture ; 0 = not used 
	float		Rotation;
	float		OffsetAngle[8];
	float		float_spare[1];
	int			GainMethod;
	int			Pot[2];
	int			Version;
	int			Planes;
	int			ZeroPhase;
	int			MotorSpeed;

	int			USB_MotorSpeed;
	int			AutoSpeedAdjust;
	//	int			CorrectionPhaseDegrees ;
	//	int			CorrectionAmplitudeX1000 ; // 2400 ==> 2.400%

	int			Pole50;
	//	int			int_spare[1]   ;


	SYSTEMTIME	CreateDate;		// GetLocalTime()
	DWORD		Signature2;		// DRI.	 // to verify valid
}	BM_EEPROM_DATA;

typedef	struct	{
	double	*Wi;
	double	*Zi;
	double	*Ci;
	double	M2;
	double	Wo;
	double	Wm;
	double	Zo[2];
	double	Zr;
	double	Theta[2];
	double	ThetaDeg[2];
	double	ThetaMr[2];
	double	NA[2];

	double	sWo;
	double	sZo[2];
	double	sZr;
	double	sTheta[2];
	double	sThetaDeg[2];
	double	sThetaMr[2];
	double	sNA[2];

	double	F;
	double	LD;
	double	m;
	double	ZoDelta;

	double	WaistAstigmatism;
	double	WaistAssymetry;
	double	DivergenceAsymmetry;


	double	Wavelength;
	double	Slope;
	double	Mfactor;
	double	Pointing;
	double	cept;
	int		Count;
	BOOL	Valid;
}	M2_RESULTS;


typedef	struct	{
	double  ClipLevel;
	double  Target;
	double  Max;
	double  Min;
}	BEAM_FIT_DATA;

typedef	struct	{
	CString	Info[3];
}	BUTTON_INFO;


class	CBeamScopeControl;
class	CBeamMapControl;

typedef struct SCAN_DATA
{
	BOOL	Ready;
	BOOL	Adjusted;// Last ;
	double  CenterInMIcrons;
	double  SpanInMicrons;
	int		ProfileID;
	int		NumberOfSamples;
	int		NumberOfAverages;
	int		GainToUse;
	int		GainUsed;
	int		GainAdjusted;
	int		MotorSpeed;
	int		Used_MotorSpeed;
	int		Used_AdcRate;
	int		Centroid;
	int		AdcPeak;
	int		AdcMin;
	int		StartPosition;
	int		EndPosition;
	int		BufferIndex;
	int		Axis;
	double	StepSize;
	double	MotorStepSize;
	double	StartPointMicrons;
	WORD	*BufferPointer;
	CBeamScopeControl *TheCallBack;
} SCAN_DATA;

typedef struct SCAN_DATA_BM
{
	BOOL	Ready;
	BOOL	Last;
	double  CenterInMIcrons;
	double  SpanInMicrons;
	int		ProfileID;
	int		NumberOfSamples;
	int		NumberOfAverages;
	int		GainToUse;
	int		GainUsed;
	int		GainAdjusted;
	int		MotorSpeed;
	int		Used_MotorSpeed;
	int		Used_AdcRate;
	int		Centroid;
	int		AdcPeak;
	int		AdcMin;
	int		StartPosition;
	int		EndPosition;
	int		BufferIndex;
	int		Axis;
	double	StepSize;
	double	MotorStepSize;
	double	StartPointMicrons;
	WORD	*BufferPointer;
	CBeamMapControl *TheCallBack;
} SCAN_DATA_BM;

typedef	struct	{
	double   Xc;
	double   Yc;
	double   Xg;
	double   Yg;
	double   Xp;
	double   Yp;
	double   R;
	double   DeltaR;
}	POLAR;

typedef	struct	{
	double	left;
	double	right;
	double	top;
	double	bottom;
	CRect	Actual;
	short	Zoom;
	short	Valid;
	char	Mode;
}	INCLUSION_REGION;


typedef	struct	{
	int			Signature1;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	BYTE		ClipModes[RECALL_IDs + 1][2];
	double		ClipLevels[RECALL_IDs + 1][2];
	int			AutoOrientXhairs;
	int			ForceToZero;
	int			ForceTo45;
	int			AngularDeviationEnabled[2];
	int			AngularDeviationMode[2];
	int			WinCamFilter;
	int			UseInclusionDib;
	int			oldPowerShutterSetting;

	char		PowerLabel[20];

	int			iSpares[41];
	int			CentroidType;

	double		Filter;
	double		Wavelength;
	double		Mfactor;
	double		SigmaPercent;
	double		CrosshairAngle;
	double		AngularDisplacement;
	double		PowerFactor;
	double		CorrectPower;
	double		PowerInDB;
	double		InitialResult;
	double		LastPower;
	double		PixelFactorX;
	double		PixelFactorY;
	double		PowerShutterSetting;
	int			MajorMinorMethod;
	int			unused_UseD63;

	double		dSpares[16];

	INCLUSION_REGION	InclusionRegion;

	char		Notes[512];
	int			Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;

}	DRI_SETTINGS4;

typedef	struct	{
	int			Signature1;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	BYTE		ClipModes[RECALL_IDs][2];
	double		ClipLevels[RECALL_IDs][2];
	int			AutoOrientXhairs;
	int			ForceToZero;
	int			ForceTo45;
	int			AngularDeviationEnabled[2];
	int			AngularDeviationMode[2];
	int			WinCamFilter;
	int			UseInclusionDib;
	int			oldPowerShutterSetting;

	char		PowerLabel[20];

	int			DeviceUsed;
	int			iSpares[40];
	int			CentroidType;

	double		Filter;
	double		Wavelength;
	double		Mfactor;
	double		SigmaPercent;
	double		CrosshairAngle;
	double		AngularDisplacement;
	double		PowerFactor;
	double		CorrectPower;
	double		PowerInDB;
	double		InitialResult;
	double		LastPower;
	double		PixelFactorX;
	double		PixelFactorY;
	double		PowerShutterSetting;

	int			MajorMinorMethod;
	int			unused_UseD63;

	int			CompFileSize;
	int			DivergenceOption;
	int			ShowBlueLine;
	int			PolarCamEnabled;
	int			UseEffSlits;
	int			bSpare;

	double		DefaultPowerInput;
	double		Radius_In_Microns;

	double		dSpares[11];


	INCLUSION_REGION	InclusionRegion;

	char		Notes[512];
	int			Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;

}	DRI_SETTINGS;



typedef	struct	{  // header for BeamMap buffer 
	SCAN_DATA			ScanData[2];
	int					NumberAveraged[2];
	short				Valid[2];
	int					iSpares[50];
	short				Spares[50];
	short				AdcData[2][MAX_COUNT + 100];	// 200 pre scans points
}	BS_DATA;

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_P7_EEPROM_DATA
	short		Valid;
	short		DetectorType;		// 0 = silicon, 1 = germanium
	short		GainMethod;
	short		Version;
	short		MotorSpeed;
	double		MotorStepSize;
	double		FullRangeInMM;
	double		SlitSize[2];

	short		SlitAngle[2];

	short		FlipSlits;
	short		NumberOfSlits;
	short		SlitOreintation;
	short		SlitType;
	short		RotateX;
	short		RotateY;
	double		Xfactors[2];
	short		IndexOffset;
	short		ForceWrite;
	short		int_spare[10];
	DWORD		Signature2;		// DRI.	 // to verify valid
}	P7_EEPROM_DATA;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BS_DATA_BUFFER
	P7_EEPROM_DATA		Eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	double				FixedAngle;
	double				Mfactor;
	int					Filter;
	int					Frequency;

	DWORD				Reserved[38];

	SYSTEMTIME			TimeStamp;	// GetLocalTime()
	BS_DATA				Data[1];
}	BS_DATA_BUFFER;




typedef	struct	{  // header for BeamMap buffer 
	int					GainDB[8];

	unsigned short		AdcData[8][MAX_COUNT + 64];	//AdcData[8][2048] 
	double				EdgeCentroid[8];
	double				d_EdgeCentroid[8];
	double				d_spares[4];
	double				d_Wrise[8];
	double				d_Whigh[8];
	int					b_IsKnifeEdge[8];

	int					i_spares[12];
	double				PeakCenterAngle[8];
	double				GeoCenterAngle[8];
	double				PeakAngle[8];

	int					NumberAveraged[8];
	int					AdcPeak[8];
	int					Is_uMap;
	int					GainSetting[8];

	double				HeadRotationRads;
	double				CentroidAngle[8];
	double				SlitStartAngle[8];
	double				RadStepSize[8];  // replaces MotorSpeed % AdcRate ratio


}	USB_BM_DATA;


typedef	struct	{  // header for BeamMap buffer 
	int					MotorSpeed;
	short				AdcRate[8];
	short				MatchPoint[8];	  // where data starts 
	short				GainDB[8];
	short				AdcData[8][MAX_COUNT];	//AdcData[8][2048] 
	short				HeadRotation;
	short				GainBoost[8];
	int					OldAdcPeak;
	int					NumberAveraged[8];
	short				AdcPeak[8];
	short				Spares[15];


	//	short				Is_uMap ;
	//	double				SlitStartAngle ;
	//	double				RadStepSize ;  // replaces MotorSpeed % AdcRate ratio
	//	short				Spares[6] ;
}	BM_DATA;

typedef	struct	{  // header for BeamMap buffer 
	int					MotorSpeed;
	short				AdcRate[8];
	short				MatchPoint[8];	  // where data starts 
	short				GainDB[8];   // where data starts 
	short				AdcData[8][MAX_COUNT];
	short				HeadRotation;
	short				GainBoost[8];
	int					OldAdcPeak;
	int					NumberAveraged[8];
	short				AdcPeak[8];

	short				Spares[15];


}	BR_DATA;




typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_USB_BC_DATA_BUFFER or TYPE_USB_BR_DATA_BUFFER
	BM_EEPROM_DATA		eeprom;	//  copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	int					notused_AdcPeak[8];
	double				FixedAngle;

	DWORD				Reserved[1];
	double				Mfactor;
	short				Filter;

	double				d_spares[25];

	int					Alt_Detector;

	int					i_spares[99];

	DRI_SETTINGS		Settings;

	USB_BM_DATA			Data[1];
}	USB_BMC_R_DATA_BUFFER;




typedef	struct	{
	COLORREF	Colors[5];
}	PROFILE_DATA;


typedef	struct	{
	int		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	int		Type;		// TYPE_WC_IMAGE_DATA
	int		Index;
	int		Beams;
	int		Size;
	int		Width;			// Number of horizontal pixels
	int		Height;		// Number of vertical   pixels
	int		CameraUpdateNumber;
	double	XpixelSize;	// Pixel horizontal     spacing 
	double	YpixelSize;	// Pixel vertical       spacing 
	int		Bits;			// Normal = 16
	int		Key;
	int		Peak;

	int		Xoffset;		// x start offset (unused pixels)
	int		Yoffset;		// y start offset (unused pixels)

	// every thing past here (except wcData) is post data collection results

	int		Xlimit;		// imagers total number of x pixels
	int		Ylimit;		// imagers total number of y pixels
	int		OreintationDone;
	CPoint	pPeakCenter;
	double	ProccessClip;
	double	useCentroid[2];
	double	pCentroid[2];
	double	pGeoCenter[2];
	double	Baseline;
	double	Centroid[2];
	double	GeoCenter[2];
	double	PeakCenter[2];
	double	Orientation;
	double	Ellipticity;
	double	MajorWidth;
	double	MinorWidth;
	double	MeanWidth;

	double	PowerTotal;
	int		BufferSize;
	int		iShutterSetting;

	double	sigCentroid[2];
	double	Sigma4Diameter[2];
	double	Sigma4Ellip;
	double	Sigma4EllipAngle;
	double	SigmaMajorMinor[2];
	double	ShutterSetting;
	double	CalibratedBaseline;
	double	Gamma;

	double	MajorWidth_d63_WinCamD;
	double	MinorWidth_d63_WinCamD;

	double	d63_WinCamD;
	double	A_d63_WinCamD;
	double	P_d63_WinCamD;
	double	I63_WinCamD;
	double	Theta_63_WinCamD;
	double	GaussianFit;
	double	ImageTemp_C;

	double	basic_Centroid[8];


	int		Busy;
	int		Minimum;
	int		NumberAveraged;
	int		UsedInAverage;
	int		WasFullResolution;
	double	PowerFactor;
	char	PowerLabel[20];
	double	CorrectPower;
	double	InitialResult;
	double	PowerInDB;
	int		UseOldPowerData;
	int		LogSaved;
	int		MinLevel;
	int		AdcPeak;
	int		WasLogged;
	int		Camera;
	time_t	CaptureTime;
	int		GammaDone;
	int		Was_TwoD_Ssan;

	double	Uniformity_WinCamD;
	double	Ewidth_WinCamD;

	int		Was_WinCamDiv;
	//	int		IntSpares[69] ; // double = 2 * int ?
	int		SatPixels;
	double	BucketArea;

	double	EffectiveExposure;
	double	PixelAt[2];
	int		PixelIntensity;
	double	CameraGain;
	int		MatrixIndex;
	double	PowerShutterSetting;

	int		IsM2Data;
	double	UcmM2Zlocation;
	double	UcmM2SlitToLense;
	double	UcmM2LenseToCameraFace;
	double	UcmM2LenseFocalLength;
	double  UcmM2Wavelength;

	int		M2Data;
	int		SlopeRemoved;
	int		AdcMinimum;

	double	LD;
	double	ZoDelta;
	double	MFactor;

	int		CameraType;
	int		AdcAverage;
	int		PeakFound;
	int		iBaseline;
	int		uFIR_Gain;
	int		CTE_State;
	int		MeasurePeak;
	int		FullResolution;
	int		IntSpares[13];

	double	TotalPower;
	int		CentroidType;
	double	pCentroid1[2];
	double	pCentroid2[2];
	double	pCentroid3[2];

	int		NewData;
	int		ExtraLine;
	BYTE	wcData[1];
}	WC_IMAGE_DATA;


typedef	struct	{
	char	Red;
	char	Green;
	char	Blue;
}	Palette_24Bit;
typedef	struct	{
	char	Red;
	char	Green;
	char	Blue;
	char	Alpha;
}	Palette_32Bit;


typedef	struct	{
	double	Xin;
	double	Xout;
	double	Xslope;

	double	Yin;
	double	Yout;
	double	Ydelta;

	double	Zin;
	double	Zout;
	double	Zslope;

	double	Width;
	double	SlitAngle;
	double	Centroid;

	int		SkipIndex;

}	SLIT_DATA;


typedef	struct	{  // Profile data struct 
	DWORD	Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD	Type;			// TYPE_BM_PROFILE_DATA
	int		BaseType;		// 0 = linear , 1 = log
	int		MyID;
	int		SlitIndex;
	int		Count;
	int		Peak;
	int		GainDB;
	int		LogPeak;
	int		Minimum;
	int		Baseline;
	int		LinearValid;
	int		LogValid;
	int		Warn;
	int		MatchPoint;   // where data starts 
	int		AdcRate;	  // Adc rate    = 2to32 in steps of 2
	int		MotorSpeed;	  // Motor Speed = 1to16 in steps of 1
	double	NormalizedRatio;
	double	Msquared;  // 1+
	double	SlitAngle;  // i.e. 43.3dB
	double	SlitWidth;  // i.e. 43.3dB
	double	LogScale;  // i.e. 43.3dB
	double	ClipWidth[4];  // Clip1, Clip2, AltClip1 and AltClip2 ;
	double	dSigma4;
	int		iSigma4;
	double	HeadRotationRadians;
	double	edgeWidth;
	double	RadStepSize;
	double	StepSize;
	double	Centroid;  // in samples
	int		GotCentroid;
	double	CentroidAngle;
	double	GeoCenterAngle;
	double	SlitStartAngle;
	double	umCentroid;  // in microns
	double	GeoCenter;
	double	umGeoCenter;
	double	GaussianFit;
	double	GaussianPeak;
	double	CentroidArea;
	double	Zposition;
	double	dBaseline;
	CPoint	PeakCenter;

	int		TEM;
	// added stuff 

	int		Profile;
	void	*AltProfileData;
	int		AdcPeak;
	int		KePeak;
	int		KeMinimum;
	int		KeBaseline;
	int		GotGauss;
	int		IsU;
	int		NotUsedInM2;

	int		GotTopHat;
	int		MaxDeviationLocation;
	int		iClip;
	int		iPeakCenter;
	int		AngularDeviationDone;

	int		ClipIntercept[4];

	int		KnifeEdgeUsed;

	int		Pole50;

	int		IsM2Data;
	int		FilterDone;
	double	ZoDelta;
	double	MFactor;
	int		AltDetector;

	double	FullScaleAngle;

	int		iBaseline;
	int		cal_MyID;
	int		Ispares[5];

	double	PeakCenterAngle;

	double	cSigma4;

	CPoint	CorrectionPts[8];

	CPoint	Pspares[12];
	double	FilterWidth; // new
	double	DeltaRadius;
	double	AdjustedSlitAngle;

	short	cUseKe[20];
	short	AltIndex[20];
	double	GainStep;
	double	TopHat;

	double	MaxDeviation;
	double	StdDeviation;
	double	StartPoint;
	double  Wavelength;
	double  AngularWidth[2];
	double	Xposition;
	double	GFitWidth;
	double	MateStepSize;

	double	ErrorAngle;
	double	ErrorAmplitude;
	double	AdcRatio;
	double	I_Uniformity;
	double	R;
	double	o1;
	double	o3;

	double  UcmM2Zlocation;
	double	UcmM2LenseToCameraFace;
	double	UcmM2LenseFocalLength;
	double	UcmM2SlitToLense;
	double	UcmM2Wavelength;

	double	d_EdgeCentroid;
	double	d_Wrise;
	double	d_Whigh;

	double	CalibratedBaseLine;

	int		UseMyKe;

	int		AverageCount;
	unsigned short	LinearData[MAX_COUNT];
	unsigned short	LinearGauss[MAX_COUNT];
	unsigned short	LogData[MAX_COUNT];
	unsigned short	LogGauss[MAX_COUNT];
	unsigned short	Ke[MAX_COUNT];
}	BM_PROFILE_DATA;

/*
typedef	struct	{  // Profile data struct
DWORD	Signature ;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
DWORD	Type ;			// TYPE_BM_PROFILE_DATA
int		BaseType		;		// 0 = linear , 1 = log
int		MyID			;
int		SlitIndex		;
int		Count			;
int		Peak			;
int		GainDB			;
int		LogPeak			;
int		Minimum			;
int		Baseline		;
int		LinearValid		;
int		LogValid		;
int		Warn			;
int		MatchPoint		;   // where data starts
int		AdcRate			;	  // Adc rate    = 2to32 in steps of 2
int		MotorSpeed		;	  // Motor Speed = 1to16 in steps of 1
double	NormalizedRatio	;
double	Msquared		;  // 1+
double	SlitAngle		;  // i.e. 43.3dB
double	SlitWidth		;  // i.e. 43.3dB
double	LogScale		;  // i.e. 43.3dB
double	ClipWidth[4]	;  // Clip1, Clip2, AltClip1 and AltClip2 ;
double	dSigma4			;
int		iSigma4			;
double	HeadRotationRadians	;
double	edgeWidth		;
double	RadStepSize		;
double	StepSize		;
double	Centroid		;  // in samples
int		GotCentroid		;
double	CentroidAngle	;
double	GeoCenterAngle	;
double	old_Yposition		;
double	umCentroid		;  // in microns
double	GeoCenter		;
double	umGeoCenter		;
double	GaussianFit		;
double	GaussianPeak	;
double	CentroidArea    ;
double	Zposition	    ;
double	dBaseline	    ;
CPoint	PeakCenter		;

int		TEM				;
// added stuff

int		Profile         ;
void	*AltProfileData ;
int		AdcPeak			;
int		KePeak			;
int		KeMinimum		;
int		KeBaseline		;
int		GotGauss		;
int		IsU				;
int		NotUsedInM2		;

int		GotTopHat		;
int		MaxDeviationLocation ;
int		iClip			;
int		iPeakCenter		;
int		AngularDeviationDone ;
int		Ispares[26]		;
CPoint	Pspares[20]		;
double	FilterWidth		; // new
double	DeltaRadius		;
double	AdjustedSlitAngle ;

short	UseKe[20] ;
short	AltIndex[20] ;
double	GainStep ;
double	TopHat ;

double	MaxDeviation ;
double	StdDeviation ;
double	StartPoint ;
double  Wavelength ;
double  AngularWidth[2] ;
double	Xposition	    ;
double	GFitWidth	    ;
double	MateStepSize ;
double	Dspares[16]		;
int		UseMyKe ;

int		AverageCount ;
unsigned short	LinearData[MAX_COUNT] ;
unsigned short	LinearGauss[MAX_COUNT] ;
unsigned short	LogData[MAX_COUNT] ;
unsigned short	LogGauss[MAX_COUNT] ;
unsigned short	Ke[MAX_COUNT] ;
}	BM_PROFILE_DATA2 ;
*/

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BM_DATA_BUFFER
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;

	DWORD				Reserved[1];
	double				Mfactor;
	short				Filter;

	int					Pole50;

	char				spare[10];
	//	SYSTEMTIME			TimeStamp   ;	// GetLocalTime()
	BM_DATA				Data[1];
}	BM_DATA_BUFFER;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BM_DATA_BUFFER
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;
	DWORD				Reserved[1];
	double				Mfactor;
	short				Filter;

	int					Pole50;

	char				spare[10];
	BM_DATA				Data[1];
}	BC_DATA_BUFFER;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BR_DATA_BUFFER
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];

	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;
	DWORD				Reserved[1];
	double				Mfactor;

	short				Filter;


	int					Pole50;

	char				spare[10];
	BR_DATA				Data[1];
}	BR_DATA_BUFFER;



typedef	struct	{  // Profile data struct 
	DWORD	Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD	Type;			// TYPE_BM_BR_DATA_ARRAY
	BOOL	IsBeamMapNotUsed;
	int		BaseType;		// 0 = linear , 1 = log
	int		Index;
	int		Bad;
	int		Adjusted;
	double	Radius;
	double	DeltaRadius;
	double	Circumferance;
	double	M2;
	double	Xc;
	double	Yc;
	double	R;
	double  Tilt;
	double  Tiltsd;
	double	width[4];
	double	Xposition[4];
	double	Zposition[4];
	BOOL	Bspares[25];
	int		LogSaved;
	int		Ispares[49];
	double	width2[8];
	double  Wavelength;
	double	FixedAngle;
	double	Mfactor;
	double  Dspares[39];
	double	dadada;
	BM_PROFILE_DATA		xProfiles[4];
}	xBR_DATA_ARRAY;

typedef	struct	{  // Profile data struct 
	DWORD	Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD	Type;			// TYPE_BR_DATA_ARRAY
	BOOL	IsBeamMapNotUsed;
	int		BaseType;		// 0 = linear , 1 = log
	int		Index;
	int		Bad;
	int		Adjusted;
	double	Radius;
	double	DeltaRadius;
	double	Circumferance;
	double	M2;
	double	M2sd;
	double  Tilt;
	double  Tiltsd;
	double	width[8];
	double	Xposition[8];
	double	Zposition[8];
	double	Xc;
	double	Yc;
	double	R;
	double	Zo;
	double	Zr;
	double	Wo;
	double	Wosd;
	BOOL	Bspares[25];
	int		LogSaved;
	int		Ispares[49];
	double	width2[8];
	double  Wavelength;
	double	FixedAngle;
	double	Theta[2];
	double	NA[2];
	double	Mfactor;

	double  Dspares[35];
	double	dadada;
	BM_PROFILE_DATA		xProfiles[8];
}	xBM_DATA_ARRAY;

typedef	struct	{  // Profile data struct 
	DWORD	Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD	Type;			// TYPE_BR_DATA_ARRAY
	BOOL	IsBeamMapNotUsed;
	int		BaseType;		// 0 = linear , 1 = log
	int		Index;
	int		Bad;
	int		Adjusted;

	double	Obsolete1[4];
	double	Obsolete2[4];
	double	Obsolete3[4];

	double  Obsolete4;
	double  Obsolete5;
	double	Obsolete6[8];
	double	Obsolete7[8];
	double	Obsolete8[8];
	double	Obsolete9[8];
	double	Obsolete10[4];
	double	Obsolete11[4];
	double	Obsolete12[4];
	double  Wavelength;

	BOOL	Bspares[25];
	int		LogSaved;
	int		NotUsedInM2[2][4];
	int		Ispares[41];
	double	FixedAngle;


	double	Obsolete13[2];
	double	Obsolete14[2];
	double	Obsolete15[2];
	double	Obsolete16[2];
	double	Obsolete17[2];
	double	Obsolete18[2];
	double	Obsolete19[2][4];

	double	Obsolete20[2];
	double	Obsolete21[2];
	double	Mfactor;
	double  Dspares[24];
	double	Obsolete22;
	BM_PROFILE_DATA		xProfiles[8];
}	xBC_DATA_ARRAY;


enum DisplayModes {
	LINEAR_MODE = DEFAULT_MODE,
	LINEAR_MODE2,
	LOG30_MODE,
	LOG40_MODE
};

enum DrawModes {
	THIN_LINE_MODE = 0,
	THICK_LINE_MODE,
	FILL_MODE
};


enum _DataButtons_ {

	CLIP_LEVEL_1 = 0,
	CLIP_LEVEL_2,
	CLIP_LEVEL_3,

	BS_WIDTH_LABEL,
	BS_THUMBNAIL,
	BS_THREED,
	BS_PALETTE,
	BS_PROFILE,

	//0 
	BS_WIDTH_X_1,
	BS_WIDTH_X_2,

	BS_WIDTH_Y_1,
	BS_WIDTH_Y_2,

	//1
	BM_WIDTH_ZM2_1,
	BM_WIDTH_ZM2_2,

	BM_WIDTH_ZM1_1,
	BM_WIDTH_ZM1_2,

	///2

	BM_WIDTH_Z_1,
	BM_WIDTH_Z_2,

	BM_WIDTH_ZP1_1,
	BM_WIDTH_ZP1_2,

	BM_WIDTH_ZP2_1,
	BM_WIDTH_ZP2_2,

	BM_PROFILE_M45_1,
	BM_PROFILE_M45_2,

	BM_PROFILE_P45_1,
	BM_PROFILE_P45_2,

	///3

	BM_WIDTH_FX1,
	BM_WIDTH_FX2,

	BM_WIDTH_FY1,
	BM_WIDTH_FY2,

	BM_WIDTH_MX1,
	BM_WIDTH_MX2,

	BM_WIDTH_MY1,
	BM_WIDTH_MY2,

	BM_WIDTH_LX1,
	BM_WIDTH_LX2,

	BM_WIDTH_LY1,
	BM_WIDTH_LY2,

	BM_WIDTH_HX1,
	BM_WIDTH_HX2,

	BM_WIDTH_HY1,
	BM_WIDTH_HY2,

	WC_WIDTH_X_1,
	WC_WIDTH_X_2,
	WC_WIDTH_Y_1,
	WC_WIDTH_Y_2,

	///4

	BM_M2,
	BM_X_CENTROID,
	BM_Y_CENTROID,
	BM_Z_CENTROID,

	BM_GUASS_FIT_X,
	BM_GUASS_FIT_Y,
	BM_GUASS_FIT_ZM2,
	BM_GUASS_FIT_ZM1,
	BM_GUASS_FIT_Z,
	BM_GUASS_FIT_ZP1,
	BM_GUASS_FIT_ZP2,

	BM_GUASS_FIT_M45,
	BM_GUASS_FIT_P45,
	BM_GUASS_FX,
	BM_GUASS_FY,

	///4


	BM_GUASS_MX,
	BM_GUASS_MY,

	BM_GUASS_LY,
	BM_GUASS_LX,

	BM_GUASS_HX,
	BM_GUASS_HY,

	///5
	WC_GUASS_FIT_X,
	WC_GUASS_FIT_Y,

	//
	BM_TOPHAT_FIT_X,
	BM_TOPHAT_FIT_Y,
	BM_TOPHAT_FIT_ZM2,
	BM_TOPHAT_FIT_ZM1,
	BM_TOPHAT_FIT_Z,
	BM_TOPHAT_FIT_ZP1,
	BM_TOPHAT_FIT_ZP2,

	BM_TOPHAT_FIT_M45,
	BM_TOPHAT_FIT_P45,
	BM_TOPHAT_FX,
	BM_TOPHAT_FY,

	///4


	BM_TOPHAT_MX,
	BM_TOPHAT_MY,

	BM_TOPHAT_LY,
	BM_TOPHAT_LX,

	BM_TOPHAT_HX,
	BM_TOPHAT_HY,

	///5
	WC_TOPHAT_FIT_X,
	WC_TOPHAT_FIT_Y,



	BM_DIV_CLIP1,
	BM_DIV_CLIP2,
	BM_DIV_NA1,
	BM_DIV_NA2,
	BM_DIV_DEG1,
	BM_DIV_DEG2,
	BM_DIV_RAD1,
	BM_DIV_RAD2,

	BM_DIV_ZO1,
	BM_DIV_ZO2,
	BM_DIV_FULL,

	///6


	BM_M2S,
	BM_M2_WO,
	BM_M2_ZO,
	BM_M2_ZR,
	BM_REL_POWER,
	BM_M2_THETA,
	BM_M2_NA,
	BM_ELLIPTICITY,

	///7


	BM_DIV_LOG,
	BM_CCD_VIEW,
	BM_CCD_VIEW2,
	BM_ROTATION,
	WC_BEAM_OREINTATION,
	WC_MAJOR_WIDTH,
	WC_MINOR_WIDTH,
	WC_MEAN_WIDTH,
	WC_PEAK_LEVEL,
	BM_SPARE_1,
	BM_SPARE_2,
	BM_SPARE_3,
	BM_SPARE_4,
	BM_SPARE_5,
	BM_SPARE_6,
	BM_SPARE_7,
	BM_SPARE_8,
	BM_SPARE_9,

	// 8 
	BM_FUNC_F5,
	BM_FUNC_F6,
	BM_FUNC_F7,
	BM_FUNC_F8,
	BM_FUNC_F9,
	BM_FUNC_F10,
	BM_FUNC_F11,
	BM_FUNC_F12,
	BM_FLUENCE_PK,
	BM_FLUENCE_AV,
	BM_ZERO,
	BM_ZOOM,
	BM_STATUS,
	BM_SPACE,
	BM_SPACE2,
	BM_CW_PULSE,
	BM_CAPTURE,
	BM_COPYRIGHT,
	MAX_BUTTON,
};




enum _Keys_ {
	IDC_GLOBAL_MODE = 600,
	IDC_LINEAR_MODE,
	IDC_LINEAR_MODE2,
	IDC_LOG30_MODE,
	IDC_LOG40_MODE,
	IDC_THIN_LINE_MODE,
	IDC_THICK_LINE_MODE,
	IDC_FILL_MODE,
	IDC_SET_VERT_MULT,
	IDC_SHOW_CLIP,
	IDC_SHOW_GFIT,
	IDC_SHOW_TOP_HAT,
	IDC_SHOW_GRID,
	IDC_SET_COLORS,
	IDC_SLIT1,
	IDC_SLIT2,
	IDC_SLIT3,
	IDC_AUTO_GAIN,
	IDC_ENTER_RANGE,
	IDC_AUTO_RANGE,
	IDC_ENTER_GAIN,
	IDC_AUTO_SEARCH,
	IDC_ENTER_OVERSCAN,
	IDC_SHOW_MAX_DEV,
	IDC_TRACKING,
	IDC_MORE_OPTIONS,
	IDC_SET_CLIP_1,
	IDC_SET_CLIP_2,
	IDC_AUTO_UPDATE_2D,
	IDC_AUTO_UPDATE_3D,
	IDC_SHOW_ANGLE,
	IDC_PROFILE_HELP,
	IDC_SHOW_CLIP_INTERCEPT,
	IDC_SHOW_UNIFORMITY,
	IDC_SHOW_ROUGH,
	IDC_FORCE_SPAN,
	IDC_FORCE_CENTER,
	IDC_RAW_MODE,
	IDC_PULSE_MODE,
};

enum _Colors_ {
	TEXT_NORMAL = 0,
	TEXT_PASS,
	TEXT_FAIL,
	TEXT_INVALID,
	TEXT_BKGRD,
	TEXT_LAST = TEXT_BKGRD,
};


enum _AltColors_ {
	COLOR_PROFILE = 0,
	COLOR_CLIP,
	COLOR_GAUSSIAN,
	COLOR_GRID,
	COLOR_BKGRD,
};

typedef	struct	{
	COLORREF	Colors[5];
	double		UpperLimit;
	double		LowerLimit;
	BOOL		EnableTest;
}	BUTTON_DATA;



typedef	struct	{
	COLORREF	Colors[5];
}	PROFILE_INFO;

typedef	struct	{
	int	Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	int	Type;			// TYPE_TEST_HEADER
}	TEST_HEADER;


typedef	struct	{
	int	Signature1;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	int	Type;			// TYPE_TEST_HEADER

	PROFILE_INFO	Info[ID_LAST_PROFILE + 2];
	int		Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
}	PROFILE_INFO_SAVED_DATA;

typedef	struct	{
	int		xBegin;
	int		xSize;
	int		yBegin;
	int		ySize;
}	CAPTURE_RECT;

typedef	struct	{  // Profile data struct 
	DWORD	Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD	Type;			// TYPE_WC_DATA_ARRAY

	WC_IMAGE_DATA*		image;
	BM_PROFILE_DATA		Profiles[2];
	char				Version[20];
	int					Beams;

	char				AttachedFileName[80];

	int					spares[30];

}	WC_DATA_ARRAY;



typedef	struct	{

	DWORD		Signature1;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	double		MaxTravel_MM;
	double		StepSize_UM;
	double		SlitToLenseDistance;
	double		ClipLevels[LR_MODE];
	double		FocalLength;
	double		Wavelength;

	double		xySpans[2];
	double		dSpares[20];

	int			ImageWidth;
	int			ImageHeight;

	int			M2Start;
	int			M2Stop;
	int			M2AverageCount;
	int			M2Samples;
	int			Direction;
	int			Target;
	int			Position;
	int			Speed;
	int			ScanSlits;
	int			ClipModes[2];
	int			Spares[98];
	DWORD		Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
}	AUX_MOTOR;


typedef	struct	{  // BeamSCope Msquared
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BS_M2_BUFFER
	DWORD				Axii;			//  Which axii were used
	DWORD				Sets;			//  How many sets saved 
	DWORD				profiles;		// Sets * axii		
	AUX_MOTOR			AuxMotor;	// copy of head data		
	BM_PROFILE_DATA		pd[1];
}	BS_M2_BUFFER;

#define	SAVE_PATH	0
#define	READ_PATH	1

typedef	struct	{  // Save Paths

	char	DirectoryPaths[2][LAST_DEVICE][512];

}	SAVE_READ_PATHS;

typedef	struct	{
	DWORD		Signature1;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;

	char		PowerLabel[LAST_DEVICE][LR_MODE][20];

	int			Test1;

	int			Palette;
	int			InkSaver;
	int			CurrentCamera;
	int			CurrentDevice;
	int			DisplayGammaEnabled;
	int			FluenceIsRound;
	int			FastUpdate;
	int			Test2;
	int			AutoOrientXhairs[8][LR_MODE];
	int			ForceToZero[8][LR_MODE];
	int			ForceTo45[8][LR_MODE];
	int			AutoSnap;
	int			ShowWinCamSlits;
	int			LockInclusion;
	int			FlipVert;
	int			BackDibValid;
	int			FluenceOn;
	int			Test3;
	int			FluenceIsMM;
	int			FluenceAverageEn;
	int			iShutterCount[MAX_CAMS];
	int			FluencePeakEn;
	int			FluenceDefinedEn;
	int			FluencePeakAverageEn;
	int			FluencePeakDefinedEn;
	int			Test4;
	int			IsPWLocked;
	int			DisplayMicrons;
	int			Tracking;
	int			BeamScopeActiveSlits;
	int			oldLastFileType;

	int			old_PowerShutterSetting[Last_ID][2];

	BYTE		AutoGain[Last_ID];
	BYTE		ShowClip[Last_ID];
	BYTE		ShowGFit[Last_ID];
	BYTE		ShowTopHat[Last_ID];
	BYTE		ShowGrid[Last_ID];
	BYTE		DisplayMode[Last_ID];
	BYTE		DrawingMode[Last_ID];
	BYTE		ProfileZoom[Last_ID];
	BYTE		ShowMaxDev[Last_ID];
	BYTE		AutoRange[Last_ID];

	int			Test5;

	int			iFilter;
	int			Wires3D;
	int			LButton3D;
	int			AverageNumber;
	int			NumberToAverage;
	int			ResetAverageAt;
	int			ResetOnDrift;
	CRect		M2rect;
	CRect		LogRect;
	CRect		WanderRect;
	CRect		MC2rect;
	CRect		BeamMap_M2rect;
	CRect		BeamC_M2rect;
	CRect		BeamMap_DivRect;
	CRect		BeamC_DivRect;

	int			Test6;
	CAPTURE_RECT		BackgroundRect;

	int			M2Lock;
	int			ViewM2As3D;
	int			ViewXdata;

	int			HeadRotationIsFixed;

	int			ZeroPhase;
	int			BCpair;

	int			WanderRadiusAuto;
	int			ReverseXsign;
	int			ReverseYsign;
	int			WanderFullColor;
	int			oldWanderRadius;
	int			IsAbsolute[LAST_DEVICE];
	int			CameraLock;
	int			TimedOut;
	int			FirmwareRev;
	int			XternalClock;
	int			ShowM2Debug;
	int			BCSlits;
	int			BeamC_axis;
	int			BCSlitsPairs;
	int			xBeamScopeModeM2;
	int			HeadType;
	int			xBeamScopeMode;
	int			BeamMapMode;
	int			xBeamRMode;
	int			xLogging;
	int			Test7;
	int			EmergencyRename;
	int			BS_PulseMode;
	int			xxBS_PulseModeFreq;
	int			BackgroundValid;
	int			IRcorrectionValid;
	int			Searches;
	int			SlitsUsed[LAST_DEVICE];

	int			SetGains[ID_LAST_PROFILE];
	int			SetRange[ID_LAST_PROFILE];
	int			ShowDivergence;

	int			Test8;

	double		old_AutoShutterLimitLow;
	double		old_AutoShutterLimitHigh;
	int			old_AutoShutter;
	int			old_AutoShutterLimit;
	int			TriggerEnabled;
	int			TriggerIsInput;
	int			TriggerOnPositive;
	int			TriggerImpedance;
	int			DirectPulseOn;
	int			m_TriggerIsInput;
	int			AutoTriggerWithShutter;
	int			AutoCameraSelect;
	int			CameraThere[MAX_CAMS];
	int			WinCamD_AutoTrigger;
	int			MillisecondsPercent;
	int			ApproximateFrequency;
	int			TriggerTiming;
	int			TriggerMilliseconds;
	int			TriggerIsSynced;
	int			CameraGain_old[MAX_CAMS];
	int			Test9;
	int			BaselineLocked;
	int			LockedBaseline;
	int			CameraType;
	int			OreintationOff;
	int			StartOffset[MAX_CAMS];
	int			CameraBits[MAX_CAMS];
	int			LastBaseLine[MAX_CAMS];
	int			ResetAverage[8];
	int			SetupPeak;
	int			SetupCapture;
	int			PeakLock;
	int			CameraOffset[MAX_CAMS];
	int			WaitingForTrigger;
	int			DenBit;
	int			Test10;
	int			PhaseBit;
	int			WC_CameraType[MAX_CAMS];
	int			LastMatchCount;
	int			CamRegisters[32];
	int			CameraAdcBits[MAX_CAMS];
	int			PciBits[MAX_CAMS];
	int			CamReg2;
	int			MatchPoint;
	int			CaptureBackground;
	int			IrCameraEnabled;
	int			CompOrder;
	int			CaptureCount;
	int			AutoBaselineSub;
	int			TestMode;
	int			ShutterOpen;
	int			ImageHoldOff;
	int			TriggerShots;
	int			SelectedCamera;
	int			TriggerClock;
	int			TriggerReady;
	int			Test11;
	int			CustomX;
	int			CustomY;
	int			WinCamFilter[LR_MODE];
	int			UseInclusionDib[LR_MODE];
	int			SizeToggle;
	int			TestCount;
	int			Test_uSeconds;
	int			UseAltSlits[LAST_DEVICE];
	int			BS_PulseModeFreq[2];
	int			BackGroundSubtraction[MAX_CAMS];
	int			WinCamNormalized;
	int			StageSpeed;
	int			TwoD_AutoScale;
	int			TwoD_Width;
	int			TwoD_Height;
	int			TwoD_Reference;
	int			ForceEepromToOld;


	int			AngularDeviationEnabled[INDEX_TO_2][LAST_DEVICE][LR_MODE];
	int			AngularDeviationMode[INDEX_TO_2][LAST_DEVICE][LR_MODE];

	int			UseRecallPowerData[LAST_DEVICE][LR_MODE];
	int			DontAsk;
	int			MaxSpeed;
	int			RampTime;
	int			CustomSetup;
	int			BeamFit;

	int			ImageLogCount;
	int			ImageLogSeconds;
	int			ImageLogInvalid;
	int			ExportDataToExcel;
	int			UseEffSlits;
	int			LinesToScan;
	int			CalSign;
	int			MajorMinorMethod;
	int			DontUseSemicolon;
	int			ShowUcVc;
	int			SigmaWarning;
	int			StopMotorOnExit;
	int			SamplLimit;
	int			WanderSequence;
	int			AutoRotate3D;
	int			NoShowCrossHaires[8];
	int			BeamMapDefaultXc;
	int			ShowClipIntercept;
	int			ShowUniformity;

	BOOL		RealTimeLogging;
	int			NonunifomrityOnOff;
	BOOL		ThumbAutoZoom;
	BOOL		YequalX;
	BOOL		ShowRoughness;
	int			WinCam_Divergence_Cameras;
	int			WanderRadius[2];

	int			ForceSpan[4];
	int			ForceCenter[4];
	int			AnimationOn;
	int			AnimationPeriod_ms;
	int			ThreeDenabled;
	int			TwoDenabled;
	int			IbisRaw[8];
	int			IbisFine[8];
	int			IbisGain[8];
	int			AutoTriggerOn;
	int			DisabledCalibration;
	int			LapTop;
	int			PITB_index;
	int			LimitExposure[2];
	int			xLimitAdcPeak[2];

	int			LimitExposureOn;
	int			LimitAdcPeakOn;

	int			BucketWidth;
	int			BucketHeight;
	int			BucketOrientaion;
	int			BucketIsElliptical;
	int			ShapeKey;
	int			BucketAutoOrient;
	int			BucketUseMajorMinor;
	double		BucketFactor;

	double		BucketEllipseWidth;
	double		BucketEllipseHeight;
	int			BucketOrientation;
	int			BucketShape;
	int			DontUsePLS;

	int			BucketEdge;
	int			Pole50;
	int			AutoBucket;
	int			LimitGainOn;
	int			Frames;
	int			M2sensitivity;

	int			RawOfffset[10];
	int			DeviceVersion;
	int			RawMode;
	int			M2show3D;
	int			MultipleCameras;
	int			FullResolution;

	int			UcmM2Samples;
	int			UcmM2Average;
	double		UcmM2WaveLength;

	double		UcmM2LenseToCameraFace;
	double		UcmM2LenseFocalLength;
	double		UcmStageMaxTravel;
	int			M2_Clip_Major_Minor;

	BYTE		ClipModes[INDEX_TO_2][LR_MODE];//a 0 means a clip level, a 1 means 4sigma

	int			SlowClock;
	int			CameraUpdateVersion;
	int			PwmPercent;
	int			uMapRate;

	double		UcmStageStart;
	double		UcmStageEnd;

	// double = 2 * int
	int			uMapTestGain;
	int			LastDacRaw;
	int			FlipHorz;
	int			uMap_Speed;  // 0 = slow, 1 = fast
	double		d_AdcOffset;
	int			Zo_Average;
	int			M2_ViewSource;
	int			uScope_Speed;  // 0 = slow, 1 = fast

	int			P8MotorRate;
	int			P8Position;
	int			P8AdcRate;
	int			UsePCI_M2Stage;
	int			DivergenceOption;
	int			DisableLED;
	int			AlternateDetector;

	double		AutoShutterLimitLow[8];
	double		AutoShutterLimitHigh[8];
	int			AutoShutter[8];
	int			AutoShutterLimit[8];

	int			PersistentReference[LAST_DEVICE];
	int			CalOffset;

	int			ShowBlueLine;
	int			CompFileSize;
	int			PolarCamEnabled;

	char		PolarCam_FileName[80];


	int			UseMultiBeam;
	int			WhichMultiBeam;
	int			PhantomHead;
	int			IsAbsolute_alt[LAST_DEVICE];
	int			PersistentReference_alt[LAST_DEVICE];
	int			unused_UseD63;
	int			AngularPointing;
	int			CameraAutoSelect;


	int			EnableGrid;
	int			EnableCenterBullseye;
	int			EnableCentroidBullseye;
	int			InverseGridColor;
	int			InverseCenterColor;
	int			InverseCentroidColor;

	int			GridLineSizeInPixels;
	int			CenterLineSizeInPixels;
	int			CentroidLineSizeInPixels;
	int			EnableTargetMatch;

	COLORREF	GridColorRef;
	COLORREF	CenterColorRef;
	COLORREF	CentroidColorRef;
	int			GridTest;


	int			DontCalcRunning_NU;
	int			DontCalcStopped_NU;
	int			DontCalcRunning_Ipeak;
	int			DontCalcStopped_Ipeak;

	int			DontGraphRunning_Ipeak;
	int			DontGraphStopped_Ipeak;
	int			DontCalcRunning_Clocking;
	int			DontCalcStopped_Clocking;

	int			DontGraphRunning_Clocking;
	int			DontGraphStopped_Clocking;
	int			DontCalcRunning_GFit;
	int			DontCalcStopped_GFit;

	int			DontGraphRunning_GFit;
	int			DontGraphStopped_GFit;

	int			RoAutoConvergence;
	int			AutoSpeedAdjust;
	int			WC_AutoGain[8];
	int			WC_Tracking;
	int			NoShowInclusion[8];
	int			Enable_ISO_correction;
	int			Enable_Live_GFit;
	int			InclusionMode;
	int			NoHelpText;
	int			ShowAdcHistogram;
	BOOL		FIR_AutoBaseline;
	BOOL		UseCTE;
	int			uFIR2_Gain;
	int			DeviceUsed;
	int			Apply_All_Cameras;
	int			TheView;
	int			WinCamExcellDataFile;
	int			Trigger_Timeout_ms;
	int			ForceTo90[8][LR_MODE];
	int			HyperCal;
	int			DisableCalc;
	int			TestState;
	int			Cmos_new;
	int			SkipBackup;

	int			Trigger_in_is_optical;
	int			LCM_Trigger_Mode;
	int			Initial_Load;
	int			svSpares[970];

	int			CentroidType;
	int			DeviceRunning[LAST_DEVICE];
	BOOL		ShowM2[LAST_DEVICE];

	BOOL		Tem00only;
	BOOL		JitterControl;
	BOOL		ShowRotation;
	BOOL		BeamScopeAutoSearch;
	BOOL		LiveMode;
	BOOL		AttachNotes;
	BOOL		AutoNameFiles;

	BOOL		SpareB;
	BOOL		Live3D;
	BOOL		Show3D;
	BOOL		AutoUpdate2D;
	BOOL		AutoUpdate3D;
	BYTE		oClipModes[INDEX_TO_2][Last_ID][LR_MODE];
	BYTE		BS_ShowMode;
	int			Test12;
	double		oClipLevels[INDEX_TO_2][Last_ID][LR_MODE];

	double		NewCorrectPower[LAST_DEVICE][LR_MODE];
	double		ViewAngle;
	double		TiltAngle;
	double		Mfactor[LAST_DEVICE][LR_MODE];
	double		SigmaPercent[LAST_DEVICE][LR_MODE];
	double		ScreenGamma;
	double		FluenceR;
	double		CrosshairAngle[8];
	double		SetCrosshairAngle[8];

	double		OverScan[LAST_DEVICE];
	double		Xc[LAST_DEVICE][8];
	double		Yc[LAST_DEVICE][8];
	double		Xg[LAST_DEVICE][8];
	double		Yg[LAST_DEVICE][8];
	double		Xp[LAST_DEVICE][8];
	double		Yp[LAST_DEVICE][8];
	double		Xu[LAST_DEVICE][8];
	double		Yu[LAST_DEVICE][8];

	double		Power[LAST_DEVICE];
	double		Exposure[MAX_CAMS];
	double		WinCamGains[8];

	int			Test13;

	double		InitialResult[LAST_DEVICE][LR_MODE];
	double		PowerFactor[LAST_DEVICE][LR_MODE];
	double		PowerInDB[LAST_DEVICE][LR_MODE];
	double		LastPower[LAST_DEVICE][LR_MODE];
	double		CorrectPower[LAST_DEVICE][LR_MODE];

	double		FluenceAvergeResult;
	double		FluenceAverageArea;
	double		FluenceAv;
	double		FluenceAverageLow;
	double		FluenceAverageHigh;
	double		FluencePeakResult;
	double		FluencePeakArea;
	double		FluenceDiameter;
	double		FluencePeakDefinedHigh;
	double		FluencePeakDefinedLow;
	double		FluencePk;
	double		FluencePeakLow;
	double		FluencePeakHigh;
	double		FluenceDefinedResult;
	double		FluenceDefinedArea;
	double		FluenceDef;
	double		FluenceDefinedLow;
	double		FluenceDefinedHigh;
	double		FluencePowerTotal;
	double		FluencePeakAverageLow;
	double		FluencePeakAverageHigh;
	double		CurrentPixels[INDEX_TO_2];// neeeds link

	int			Test14;

	double		BaseLineMultiply;
	double		AutoTrigMax;
	double		AutoTrigMin;
	double		PixelFactorX[MAX_CAMS][LR_MODE];
	double		PixelFactorY[MAX_CAMS][LR_MODE];
	double		xPixelSize;
	double		yPixelSize;
	double		IrGamma;
	double		CompHi;
	double		CompLow;

	CPoint		CrosshairCenter[8];
	CPoint		PanCenter[8];

	// misc types
	CAPTURE_RECT		CaptureRect[8];

	AUX_MOTOR			AuxMotor;


	CRect				LastFluenceLocation;
	char				IrFileName[80];
	char				FluenceArray[120];
	char				SoftwareVersion[40];

	int					Test15;

	WC_IMAGE_DATA		*ActiveImage;
	BUTTON_DATA			ButtonData[Last_ID];

	double				ScanSpan[3];
	double				ScanCenter[3];
	double				CentroidClip;
	double				xFilter;

	double				FixedAngle;

	double				ActiveAngle;
	double				uAngle;
	double				vAngle;

	double				ZeroXc[4][LAST_DEVICE][8];
	double				ZeroYc[4][LAST_DEVICE][8];

	double				Wavelength[LAST_DEVICE][LR_MODE];
	double				Zc;
	double				Filter[LR_MODE];
	double				AngularDisplacement[LAST_DEVICE][LR_MODE];

	double				PersistentData[60];

	double				TwoDMarks[4];
	double				GeoCentroidClip;
	double				CustomSlitSize;
	double				SlitRadiusMM;
	BYTE				CalSequnce[5][16];
	BYTE				CalSlitSize[5][16];
	double				YoffsetInuM;

	double				ram_Harm[4];
	double				ram_Phase[4];
	double				ram_Exp[4];
	double				ram_Amp[4];
	double				CorrectionAmplitude;
	double				WanderTimeInterval;

	double				GFitCoefficient[8];
	double				GFitRoughness[8];
	double				TwoD_OverScan;
	double				EWidthClipLevel[2];

	double				FitRatio;  // for auto zoom of thumbnail

	double				MaxDivergence[2];
	double				MinDivergence[2];
	double				BestDivergence[2];
	double				SourceFrequncy;
	double				LimitGain[2];
	double				LimitAdcPeak[2];
	double				dLockedBaseline;
	double				old_SetGain[8];
	double				FluenceTotalArea;
	double				ReferencePower;
	double				DelayMilliseconds;
	double				ShutterMilliseconds;
	double				PowerShutterSetting[LAST_DEVICE][8];

	double				ClipLevels[INDEX_TO_2][LR_MODE];

	double				UcmZoDelta;

	double				LockedXc[4][LAST_DEVICE][8];
	double				LockedYc[4][LAST_DEVICE][8];

	double				VEB_offset;


	double				GridSizeInMilliMeters;
	double				CenterSizeInMilliMeters;
	double				CentroidSizeInMilliMeters;

	double				GridToleranceInMicrons;

	double				GridOffset[2];

	double				DefaultPowerInput[2];
	double				Radius_In_Microns[2];

	double				RoTarget;

	double				InclusionFixedDiamter;

	double				InclusionRatio;

	double				VEB_fixed_offset;

	double				BeamScopeOffset;
	double				BeamScopeGain;
	double				BeamMapGain;
	double				BeamMapOffset;

	double				Not_Auto_Gain;

	double				doubleSpares[17];

	double				ISO_Cliplevel;

	double				PlsFactor;
	int					Test16;

	int					LogEnabledData[INDEX_TO_4][LAST_DEVICE];
	double				LogAtSeconds[INDEX_TO_4][LAST_DEVICE];
	double				LogForHours[INDEX_TO_4][LAST_DEVICE];
	char				LogFileName[INDEX_TO_4][LAST_DEVICE][512];

	INCLUSION_REGION	InclusionRegion[INDEX_TO_4][LR_MODE];
	char				IRerror[200];
	char				PrintNotes[LAST_DEVICE][2000];
	int					Test17;
	char				Notes[LAST_DEVICE][LR_MODE][512];

	int					Test18;
	char				LastSoftwareVersion[40];
	int					Test19;
	int					Test20;

	char				PassWord[40];
	DWORD				Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
}	SAVED_DATA2;


typedef	struct	{
	DWORD				Signature1;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	BEAM_FIT_DATA		BeamFitInfo[25];
}	BEAM_FIT_INFO;

typedef	struct	{  // Log data
	double			cX;
	double			cY;
}	LOG_DATA;

typedef	struct	{  // 
	DWORD			Signature;	// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD			Type;	//  TYPE_LOG_DATA_FILE
	DWORD			Size;	//  Including Header ;
	SYSTEMTIME		TimeStamp;	// GetLocalTime()
	LOG_DATA		Wdata[1];
}	LOG_DATA_FILE;


typedef	struct	{
	DWORD	Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD	Type;			// TYPE_IMAGE_DATA
	DWORD	Width;			// Bitmap Width		// Profile Width
	// MUST be on 'int' boundry!

	DWORD	Height;		// Bitmap Height	// Number of Profiles
	DWORD	Baseline;		// Not Zero!
	DWORD	Images; 		// Number of images
	DWORD	XPelsPerMeter;	// Pixels size (in um) = ie6/PelsPerMeter
	DWORD	YPelsPerMeter; // Pixels size (in um) = ie6/PelsPerMeter
	DWORD	Bytes;			// Excluding this header	
	DWORD	Bits;			// Normal = 8 can be 10 or ?
	DWORD	Packing;		// Bit usage, 8  bit = 0xffffffff ; 4 points per DWORD
	//			  10 bit = 0x03ff03ff ; 2 points per DWORD
	//		   or 10 bit = 0x3fffffff ;	3 points per DWORD
	double	Centroid[2];  // X, & Y 
	double	GeoCenter[2];  // X, & Y 
	CPoint	PeakCenter;
	char	Data[1]; // can be short or int BUT not char
}	IMAGE_DATA;

#ifndef		TRIGGER__MODE
#define		TRIGGER__MODE
typedef struct _TRIGGER_MODE
{
	BOOL	TriggerEnabled;
	BOOL	Is75ohmImpeadnce;
	BOOL	IsVideoInput;
	BOOL	IsTriggerInput;
	BOOL	TriggerOnPositiveEdge;
	BOOL	TriggerFeedBackOn;
	BOOL	FuzzyTrigger;
	int		Clock;   //  16.0 Mhz/(1<<Clock) ;
	int		MatchPoint;   //  0 to 65535 
	double	AdvanceFactor;   // -.50 to +.50  

} TRIGGER_MODE, *PTRIGGER_MODE;
#endif

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;		// TYPE_WC_IMAGE_DATA
	DWORD		Size;
	DWORD		Images;
	DWORD		ImagesSize;
	char		Version[40];
}	WC_IMAGE_DATA_HEADER;





typedef	struct	{
	int			Signature1;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	BYTE		ClipModes[RECALL_IDs][2];
	double		ClipLevels[RECALL_IDs][2];
	int			AutoOrientXhairs;
	int			ForceToZero;
	int			ForceTo45;
	int			AngularDeviationEnabled[2];
	int			AngularDeviationMode[2];
	int			WinCamFilter;
	int			UseInclusionDib;
	int			oldPowerShutterSetting;

	char		PowerLabel[20 - (2 * sizeof(double))];

	//	int			iSpares[42+(2*sizeof(double))] ;
	int			iSpares[41];
	int			CentroidType;

	double		Filter;
	double		Wavelength;
	double		Mfactor;
	double		SigmaPercent;
	double		CrosshairAngle;
	double		AngularDisplacement;
	double		PowerFactor;
	double		CorrectPower;
	double		PowerInDB;
	double		InitialResult;
	double		LastPower;
	double		PixelFactorX;
	double		PixelFactorY;
	double		PowerShutterSetting;

	int			MajorMinorMethod;
	int			unused_UseD63;

	double		dSpares[16];

	INCLUSION_REGION	InclusionRegion;

	char		Notes[512];
	int			Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;

}	DRI_SETTINGS2;


typedef	struct	{
	int			Signature1;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	BYTE		ClipModes[RECALL_IDs][2];
	double		ClipLevels[RECALL_IDs][2];
	int			AutoOrientXhairs;
	int			ForceToZero;
	int			ForceTo45;
	int			AngularDeviationEnabled[2];
	int			AngularDeviationMode[2];
	int			WinCamFilter;
	int			UseInclusionDib;
	int			oldPowerShutterSetting;

	char		PowerLabel[20];

	int			iSpares[31];
	int			CentroidType;

	double		Filter;
	double		Wavelength;
	double		Mfactor;
	double		SigmaPercent;
	double		CrosshairAngle;
	double		AngularDisplacement;
	double		PowerFactor;
	double		CorrectPower;
	double		PowerInDB;
	double		InitialResult;
	double		LastPower;
	double		PixelFactorX;
	double		PixelFactorY;
	double		PowerShutterSetting;

	int			MajorMinorMethod;
	int			unused_UseD63;

	double		dSpares[16];

	INCLUSION_REGION	InclusionRegion;

	char		Notes[512];
	int			Signature2;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;

}	DRI_SETTINGS3;


/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////
typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;		// TYPE_WC_IMAGE_DATA
	DWORD		Size;
	DWORD		Images;
	DWORD		ImagesSize;
	char		Version[40];

	// added Sept 28, 2002

	DRI_SETTINGS	Settings;

}	WC_IMAGE_DATA_HEADER_2;
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;		// TYPE_WC_IMAGE_DATA
	DWORD		Size;
	DWORD		Images;
	DWORD		ImagesSize;
	char		Version[40];

	// added Sept 28, 2002

	DRI_SETTINGS2	Settings;

}	WC_IMAGE_DATA_HEADER_3;

typedef	struct	{
	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;		// TYPE_WC_IMAGE_DATA
	DWORD		Size;
	DWORD		Images;
	DWORD		ImagesSize;
	char		Version[40];

	// added Sept 28, 2002

	DRI_SETTINGS3	Settings;

}	WC_IMAGE_DATA_HEADER_4;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BM_DATA_BUFFER_2
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;

	DWORD				Reserved[1];
	double				Mfactor;
	short				Filter;
	char				spare[14];
	DRI_SETTINGS		Settings;
	BM_DATA				Data[1];
}	BM_DATA_BUFFER_2;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BM_DATA_BUFFER_2
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;

	DWORD				Reserved[1];
	double				Mfactor;
	short				Filter;
	char				spare[14];
	DRI_SETTINGS4		Settings;
	BM_DATA				Data[1];
}	BM_DATA_BUFFER_4;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BR_DATA_BUFFER_2
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];

	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;
	DWORD				Reserved[1];
	double				Mfactor;

	short				Filter;

	char				spare[14];

	DRI_SETTINGS		Settings;
	BR_DATA				Data[1];
}	BR_DATA_BUFFER_2;


typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BR_DATA_BUFFER_2
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];

	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;
	DWORD				Reserved[1];
	double				Mfactor;

	short				Filter;

	char				spare[14];

	DRI_SETTINGS4		Settings;
	BR_DATA				Data[1];
}	BR_DATA_BUFFER_4;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BC_DATA_BUFFER_2
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;
	DWORD				Reserved[1];
	double				Mfactor;
	short				Filter;
	char				spare[14];

	DRI_SETTINGS		Settings;
	BM_DATA				Data[1];
}	BC_DATA_BUFFER_2;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BC_DATA_BUFFER_2
	BM_EEPROM_DATA		eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	int					AdcPeak[8];
	double				FixedAngle;
	int					RatioFix;
	DWORD				Reserved[1];
	double				Mfactor;
	short				Filter;
	char				spare[14];

	DRI_SETTINGS4		Settings;
	BM_DATA				Data[1];
}	BC_DATA_BUFFER_4;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BS_DATA_BUFFER_2
	P7_EEPROM_DATA		Eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	double				FixedAngle;
	double				Mfactor;
	int					Filter;
	int					Frequency;

	DWORD				Reserved[38];

	SYSTEMTIME			TimeStamp;	// GetLocalTime()

	DRI_SETTINGS		Settings;
	BS_DATA				Data[1];
}	BS_DATA_BUFFER_2;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BS_DATA_BUFFER_2
	P7_EEPROM_DATA		Eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	double				FixedAngle;
	double				Mfactor;
	int					Filter;
	int					Frequency;

	DWORD				Reserved[38];

	SYSTEMTIME			TimeStamp;	// GetLocalTime()

	DRI_SETTINGS2		Settings;
	BS_DATA				Data[1];
}	BS_DATA_BUFFER_3;

typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BS_DATA_BUFFER_2
	P7_EEPROM_DATA		Eeprom;	// copy of head data		
	double				Wavelength;
	int					Beams;
	int					Index;
	char				Version[20];
	double				FixedAngle;
	double				Mfactor;
	int					Filter;
	int					Frequency;

	DWORD				Reserved[38];

	SYSTEMTIME			TimeStamp;	// GetLocalTime()

	DRI_SETTINGS3		Settings;
	BS_DATA				Data[1];
}	BS_DATA_BUFFER_4;

typedef	struct	{
	double		Xc;
	double		Yc;
}	DPoint;


typedef	struct	{  // header for BeamMap buffer 
	DWORD				Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD				Type;			//  TYPE_BS_DATA_BUFFER_2

	int		WanderCount;
	int		WanderHoldOff;
	double	MaxRadius;
	double	MeanRadius;
	double	LastRadius;
	BOOL	Modified;
	DPoint	Center;
	DPoint	data[MAX_WANDER_COUNT + 2];
	DPoint	blank[12];
}	WANDER_BUFFER;

#define HPTR LPVOID

typedef	struct	{  // header for BeamMap buffer 

	DWORD		Signature;		// = (int('D')<<24)+(int('R')<<16)+(int('I')<<8)+'.' ;
	DWORD		Type;			//  TYPE_U_MAP

	int			i_BufferCount;

	double		d_CPU_speed;
	double		avStepSize[8];
	double		PuckRadius;
	double		d_LastMotorSpeed;

	int			i_AdcRate;

	WORD		w_Peak[8];
	WORD		w_Base[8];

	int			i_SlitStartPoint[8];
	int			i_SlitEndPoint[8];
	int			i_SlitCount[8];
	double		d_BeamCentroid[8][8];

	int			i_ProfileStartPoint[8][8];
	int			i_ProfileEndPoint[8][8];
	int			i_Width[8][8];

	int			i_LastMotorRate;
	int			i_MotorRate;

	double		d_EdgeCentroid[8];
	double		d_Wrise[8];
	double		d_Whigh[8];

	BOOL		b_KnifeEdgeMode[8];

	HPTR		h_Data; // 2 M/samples max = 27 nM min step size!

}	U_MAP_BUFFER;

typedef	struct	{
	char label[128];
	char initial_string[128];
	double min;
	double max;
	double value;
}	GET_PARAMETER_DATA;


enum {
	Alcon_2W_Major_LL = 0,
	Alcon_2W_Major_LR = 1,
	Alcon_2W_Major_UL = 2,
	Alcon_2W_Major_UR = 3,

	Alcon_2W_Minor_LL = 4,
	Alcon_2W_Minor_LR = 5,
	Alcon_2W_Minor_UL = 6,
	Alcon_2W_Minor_UR = 7,

	Alcon_2W_Mean_LL = 8,
	Alcon_2W_Mean_LR = 9,
	Alcon_2W_Mean_UL = 10,
	Alcon_2W_Mean_UR = 11,

	Alcon_Deff_LL = 12,
	Alcon_Deff_LR = 13,
	Alcon_Deff_UL = 14,
	Alcon_Deff_UR = 15,

	Alcon_E_LL = 16,
	Alcon_E_LR = 17,
	Alcon_E_UL = 18,
	Alcon_E_UR = 19,

	Alcon_B_LL = 20,
	Alcon_B_LR = 21,
	Alcon_B_UL = 22,
	Alcon_B_UR = 23,

	Alcon_Xcs_LL = 24,
	Alcon_Xcs_LR = 25,
	Alcon_Xcs_UL = 26,
	Alcon_Xcs_UR = 27,

	Alcon_Ycs_LL = 28,
	Alcon_Ycs_LR = 29,
	Alcon_Ycs_UL = 30,
	Alcon_Ycs_UR = 31,

	Alcon_Xcg_LL = 32,
	Alcon_Xcg_LR = 33,
	Alcon_Xcg_UL = 34,
	Alcon_Xcg_UR = 35,

	Alcon_Ycg_LL = 36,
	Alcon_Ycg_LR = 37,
	Alcon_Ycg_UL = 38,
	Alcon_Ycg_UR = 39,

	Alcon_Gfit_LL = 40,
	Alcon_Gfit_LR = 41,
	Alcon_Gfit_UL = 42,
	Alcon_Gfit_UR = 43,

	Alcon_Ig_LL = 44,  //*
	Alcon_Ig_LR = 45,	//*
	Alcon_Ig_UL = 46,	//*
	Alcon_Ig_UR = 47,	//*

	Alcon_S_sep_LL_LR = 48,
	Alcon_S_sep_LR_UR = 49,
	Alcon_S_sep_UR_UL = 50,
	Alcon_S_sep_UL_LL = 51,

	Alcon_G_sep_LL_LR = 52,
	Alcon_G_sep_LR_UR = 53,
	Alcon_G_sep_UR_UL = 54,
	Alcon_G_sep_UL_LL = 55,

	Alcon_IO_AVE = 56,
	Alcon_IO_MIN = 57,
	Alcon_S_AVE = 58,
	Alcon_S_REL_AVE = 59,

	Alcon_d_REL_AVE = 60,

	Alcon_Nu_LL = 61,
	Alcon_Nu_LR = 62,
	Alcon_Nu_UL = 63,
	Alcon_Nu_UR = 64,

	Alcon_Nu_PK = 65,

	Alcon_Clocking_au = 66,
	Alcon_Clocking_al = 67,
	Alcon_Clocking_ave = 68,

	Alcon_I_Peak = 69,
	Alcon_I_Peak_lo_min = 70,
	Alcon_I_Peak_lo_ave = 71,

	Alcon_P_1 = 72,
	Alcon_P_2 = 73,
	Alcon_P_3 = 74,
	Alcon_P_4 = 75,

	Alcon_P_ave = 76,
	Alcon_P_x = 77,

	Alcon_relPower = 78,

	Alcon_Spare_1 = 79,
	Alcon_Spare_2 = 80,
	Alcon_Spare_3 = 81,
	Alcon_Spare_4 = 82,
	Alcon_Spare_5 = 83,
	Alcon_Spare_6 = 84,
	Alcon_Spare_7 = 85,
	Alcon_Spare_8 = 86,
	Alcon_Spare_9 = 87,
	Alcon_Spare_10 = 88,
	Alcon_Spare_11 = 89,
	Alcon_Spare_12 = 90,
	Alcon_Spare_13 = 91,
	Alcon_Spare_14 = 92,
	Alcon_Spare_15 = 93,
	Alcon_Spare_16 = 94,
	Alcon_Spare_17 = 95,
	Alcon_Spare_18 = 96,
	Alcon_Spare_19 = 97,
	Alcon_Spare_20 = 98,
	Alcon_Spare_21 = 99,
	Alcon_Spare_22 = 100,

	Alcon_Ps_1 = 101,
	Alcon_Ps_2 = 102,
	Alcon_Ps_3 = 103,
	Alcon_Ps_4 = 104,

	Alcon_Ro = 105,
	Alcon_clock = 106,

	Alcon_Last_entry = 107,

};


enum {
	MultiBeam_2W_Major_01 = 1000,
	MultiBeam_2W_Major_02 = 1001,
	MultiBeam_2W_Major_03 = 1002,
	MultiBeam_2W_Major_04 = 1003,

	MultiBeam_2W_Minor_01 = 1004,
	MultiBeam_2W_Minor_02 = 1005,
	MultiBeam_2W_Minor_03 = 1006,
	MultiBeam_2W_Minor_04 = 1007,

	MultiBeam_2W_Mean_01 = 1008,
	MultiBeam_2W_Mean_02 = 1009,
	MultiBeam_2W_Mean_03 = 1010,
	MultiBeam_2W_Mean_04 = 1011,

	MultiBeam_Deff_01 = 1012,
	MultiBeam_Deff_02 = 1013,
	MultiBeam_Deff_03 = 1014,
	MultiBeam_Deff_04 = 1015,

	MultiBeam_E_01 = 1016,
	MultiBeam_E_02 = 1017,
	MultiBeam_E_03 = 1018,
	MultiBeam_E_04 = 1019,

	MultiBeam_B_01 = 1020,
	MultiBeam_B_02 = 1021,
	MultiBeam_B_03 = 1022,
	MultiBeam_B_04 = 1023,

	MultiBeam_Xcs_01 = 1024,
	MultiBeam_Xcs_02 = 1025,
	MultiBeam_Xcs_03 = 1026,
	MultiBeam_Xcs_04 = 1027,

	MultiBeam_Ycs_01 = 1028,
	MultiBeam_Ycs_02 = 1029,
	MultiBeam_Ycs_03 = 1030,
	MultiBeam_Ycs_04 = 1031,

	MultiBeam_Xcg_01 = 1032,
	MultiBeam_Xcg_02 = 1033,
	MultiBeam_Xcg_03 = 1034,
	MultiBeam_Xcg_04 = 1035,

	MultiBeam_Ycg_01 = 1036,
	MultiBeam_Ycg_02 = 1037,
	MultiBeam_Ycg_03 = 1038,
	MultiBeam_Ycg_04 = 1039,

	MultiBeam_Gfit_01 = 1040,
	MultiBeam_Gfit_02 = 1041,
	MultiBeam_Gfit_03 = 1042,
	MultiBeam_Gfit_04 = 1043,

	MultiBeam_Ig_01 = 1044,  //*
	MultiBeam_Ig_02 = 1045,	//*
	MultiBeam_Ig_03 = 1046,	//*
	MultiBeam_Ig_04 = 1047,	//*

	MultiBeam_S_sep_01_02 = 1048,
	MultiBeam_S_sep_02_04 = 1049,
	MultiBeam_S_sep_04_03 = 1050,
	MultiBeam_S_sep_03_01 = 1051,

	MultiBeam_G_sep_01_02 = 1052,
	MultiBeam_G_sep_02_04 = 1053,
	MultiBeam_G_sep_04_03 = 1054,
	MultiBeam_G_sep_03_01 = 1055,

	MultiBeam_IO_AVE = 1056,
	MultiBeam_IO_MIN = 1057,
	MultiBeam_S_AVE = 1058,
	MultiBeam_S_REL_AVE = 1059,

	MultiBeam_d_REL_AVE = 1060,

	MultiBeam_Nu_01 = 1061,
	MultiBeam_Nu_02 = 1062,
	MultiBeam_Nu_03 = 1063,
	MultiBeam_Nu_04 = 1064,

	MultiBeam_Nu_PK = 1065,

	MultiBeam_Clocking_au = 1066,
	MultiBeam_Clocking_al = 1067,
	MultiBeam_Clocking_ave = 1068,

	MultiBeam_I_Peak = 1069,
	MultiBeam_I_Peak_lo_min = 1070,
	MultiBeam_I_Peak_lo_ave = 1071,

	MultiBeam_P_1 = 1072,
	MultiBeam_P_2 = 1073,
	MultiBeam_P_3 = 1074,
	MultiBeam_P_4 = 1075,

	MultiBeam_P_ave = 1076,
	MultiBeam_P_x = 1077,

	MultiBeam_relPower = 1078,

	MultiBeam_Spare_1 = 1079,
	MultiBeam_Spare_2 = 1080,
	MultiBeam_Spare_3 = 1081,
	MultiBeam_Spare_4 = 1082,
	MultiBeam_Spare_5 = 1083,
	MultiBeam_Spare_6 = 1084,
	MultiBeam_Spare_7 = 1085,
	MultiBeam_Spare_8 = 1086,
	MultiBeam_Spare_9 = 1087,
	MultiBeam_Spare_10 = 1088,
	MultiBeam_Spare_11 = 1089,
	MultiBeam_Spare_12 = 1090,
	MultiBeam_Spare_13 = 1091,
	MultiBeam_Spare_14 = 1092,
	MultiBeam_Spare_15 = 1093,
	MultiBeam_Spare_16 = 1094,
	MultiBeam_Spare_17 = 1095,
	MultiBeam_Spare_18 = 1096,
	MultiBeam_Spare_19 = 1097,
	MultiBeam_Spare_20 = 1098,
	MultiBeam_Spare_21 = 1099,
	MultiBeam_Spare_22 = 1010,

	MultiBeam_Ps_1 = 1101,
	MultiBeam_Ps_2 = 1102,
	MultiBeam_Ps_3 = 1103,
	MultiBeam_Ps_4 = 1104,

	MultiBeam_Ro = 1105,
	MultiBeam_clock = 1106,

	MultiBeam_Last_entry = 1107,

};



#endif

