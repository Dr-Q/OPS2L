#ifndef __LANG_H
#define __LANG_H

// list of localized string ids
enum _STR_IDS{
	_STR_LOCALE			=  0, // Localized language name
	_STR_WELCOME,
	_STR_OUL_VER,
	_STR_SAVE_CHANGES,
	_STR_BACK,
	_STR_IPCONFIG,
	_STR_NO_ITEMS,
	_STR_SETTINGS_SAVED,
	_STR_ERROR_SAVING_SETTINGS,
	_STR_EXIT,
	_STR_SETTINGS,
	_STR_USB_GAMES,
	_STR_HDD_GAMES,
	_STR_NET_GAMES,
	_STR_APPS,
	_STR_THEME,
	_STR_LANGUAGE,
	_STR_NETWORK_STARTUP_ERROR,	//Generic network error message.
	_STR_NETWORK_STARTUP_ERROR_CONN,
	_STR_NETWORK_STARTUP_ERROR_LOGON,
	_STR_NETWORK_STARTUP_ERROR_SHARE,
	_STR_NETWORK_SHARE_LIST_ERROR,
	_STR_NETWORK_GAMES_LIST_ERROR,
	_STR_ON,
	_STR_OFF,
	_STR_OK,
	_STR_CANCEL,
	_STR_COMPAT_SETTINGS,
	_STR_REMOVE_ALL_SETTINGS,
	_STR_REMOVED_ALL_SETTINGS,
	_STR_SCROLLING,
	_STR_SLOW,
	_STR_MEDIUM,
	_STR_FAST,
	_STR_DEFDEVICE,
	_STR_LOAD_FROM_DISC,
	_STR_PLEASE_WAIT,
	_STR_ERROR_LOADING_ID,
	_STR_AUTOSORT,
	_STR_ERR_LOADING_LANGFILE,
	_STR_DEBUG,
	_STR_NO_CONTROLLER,
	_STR_COVERART,
	_STR_WIDE_SCREEN,
	_STR_POWEROFF,
	_STR_LOADING_SETTINGS,
	_STR_SAVING_SETTINGS,
	_STR_START_DEVICE,
	_STR_REFRESH,
	_STR_USBMODE,
	_STR_HDDMODE,
	_STR_ETHMODE,
	_STR_APPMODE,
	_STR_AUTO,
	_STR_MANUAL,
	_STR_STARTHDL,
	_STR_STARTINGHDL,
	_STR_RUNNINGHDL,
	_STR_UNLOADHDL,
	_STR_EXITTO,
	_STR_BGCOLOR,
	_STR_TXTCOLOR,
	_STR_IP,
	_STR_MASK,
	_STR_GATEWAY,
	_STR_PORT,
	_STR_SHARE,
	_STR_USER,
	_STR_PASSWORD,
	_STR_NOT_SET,
	_STR_X_ACCEPT,
	_STR_DELETE_WARNING,
	_STR_RENAME,
	_STR_DELETE,
	_STR_RUN,
	_STR_GFX_SETTINGS,
	_STR_DANDROP,
	_STR_CHECKUSBFRAG,
	_STR_LASTPLAYED,
	_STR_ERR_FRAGMENTED,
	_STR_ERR_FILE_INVALID,
	_STR_TEST,
	_STR_HINT_GUEST,
	_STR_HINT_MODE1,
	_STR_HINT_MODE2,
	_STR_HINT_MODE3,
	_STR_HINT_MODE4,
	_STR_HINT_MODE5,
	_STR_HINT_MODE6,
	_STR_HINT_MODE7,
	_STR_HINT_MODE8,
	_STR_HINT_MODE9,
	_STR_HINT_VMC_SIZE,
	_STR_CREATE,
	_STR_MODIFY,
	_STR_ABORT,
	_STR_RESET,
	_STR_USE_GENERIC,
	_STR_VMC_SCREEN,
	_STR_VMC_NAME,
	_STR_VMC_SIZE,
	_STR_VMC_STATUS,
	_STR_VMC_PROGRESS,
	_STR_VMC_FILE_EXISTS,
	_STR_VMC_FILE_ERROR,
	_STR_VMC_FILE_NEW,
	_STR_ERR_VMC_CONTINUE,
	_STR_AUTOREFRESH,
	_STR_ABOUT,
	_STR_DEVS,
	_STR_QANDA,
	_STR_USB_DELAY,
	_STR_USB_PREFIX,
	_STR_HINT_EXITPATH,
	_STR_HINT_SPINDOWN,
	_STR_HDD_SPINDOWN,
	_STR_VMODE,
	_STR_UICOLOR,
	_STR_SELCOLOR,
	_STR_USE_INFO_SCREEN,
	_STR_INFO,
	_STR_ALTSTARTUP,
	_STR_COLOR_SELECTION,
	_STR_RECONNECT,
	_STR_HINT_SHARENAME,
	_STR_ETH_PREFIX,
	_STR_BACKSPACE,
	_STR_SPACE,
	_STR_ENTER,
	_STR_MODE,
	_STR_VMC_SLOT1,
	_STR_VMC_SLOT2,
	_STR_GAME_ID,
	_STR_DMA_MODE,
	_STR_VSYNC,
	_STR_MODE1,
	_STR_MODE2,
	_STR_MODE3,
	_STR_MODE4,
	_STR_MODE5,
	_STR_MODE6,
	_STR_MODE7,
	_STR_MODE8,
	_STR_MODE9,
	_STR_GSCONFIG,
	_STR_CDVDMAN_TIMER,
	_STR_HINT_CDVDMAN_TIMER,
	_STR_ETH_OPMODE,
	_STR_ETH_100MFDX,
	_STR_ETH_100MHDX,
	_STR_ETH_10MFDX,
	_STR_ETH_10MHDX,
	_STR_GSM_SETTINGS,
	_STR_ENABLEGSM,
	_STR_HINT_ENABLEGSM,
	_STR_GSMVMODE,
	_STR_HINT_GSMVMODE,
	_STR_XOFFSET,
	_STR_HINT_XOFFSET,
	_STR_YOFFSET,
	_STR_HINT_YOFFSET,
	_STR_GSMSKIPVIDEOS,
	_STR_HINT_GSMSKIPVIDEOS,
	_STR_SHOWCHEAT,
	_STR_CHEAT_SETTINGS,
	_STR_ENABLECHEAT,
	_STR_HINT_ENABLECHEAT,
	_STR_CHEATMODE,
	_STR_HINT_CHEATMODE,
	_STR_CHEATMODEAUTO,
	_STR_CHEATMODESELECT,

	LANG_STR_COUNT
};

// Maximum external languages supported
#define MAX_LANGUAGE_FILES 15

// getter for a localised string version
extern char *_l(unsigned int id);

typedef struct {
	char* filePath;
	char* name;
} language_t;

void lngInit(void);
char* lngGetValue(void);
void lngEnd(void);

// Indices are shifted in GUI, as we add the internal english language at 0
void lngSetGuiValue(int langGuiId);
int lngGetGuiValue(void);
int lngFindGuiID(const char* lang);
char **lngGetGuiList(void);

#endif
