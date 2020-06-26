//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sh ~/.config/scripts/wm/mpvstatus.sh  web-media" , 0, 22},

	{"", "sh ~/.config/scripts/wm/mpvstatus.sh 🎵 mpv", 0, 23},

	{"🌡", "sensors | awk '/^CPUTIN:/{print $2}'",				5,		0},


	{"", "sh ~/.config/scripts/wm/storage.sh",	30,		0},

	
	{"", "sh ~/.config/scripts/wm/mem.sh",	30,		0},

	{"", "sh ~/.config/scripts/wm/vol.sh", 0, 10},

	{"", "sh ~/.config/scripts/wm/dtime.sh",	30,		0},
	

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
