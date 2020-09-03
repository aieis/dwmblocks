//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "torrents" , 0, 24},

	{"", "mpvstatus  web-media" , 0, 22},

	{"", "mpvstatus 🎵 mpv", 0, 23},

	{"🌡", "sensors | awk '/^CPUTIN:/{print $2}'",	5, 1},


	{"", "storage",	30,	2},

	
	{"", "mem",	30,		3},

	{"", "vol", 0, 10},

	{"", "dtime",	30,		4},
	

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
