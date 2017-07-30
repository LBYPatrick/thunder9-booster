#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )
#include<stdio.h>
#include "util.h"
#include<Windows.h>
#include<string>
#include<stdlib.h>


const unsigned int interval = 3600*24*365; //In seconds
/*
bool boostDownloadSDK() {
	util::highPriority("DownloadSDKServer");
	util::highPriority("ThunderPlatform");
		return 0;
}
*/

/*
int checkMainProgramStatus() {
	util::lookupInit();
	bool foundTargetEXE = util::lookup("Thunder");
	if (foundTargetEXE == 0) { util::lookupCleanup(); return 0; }
	if (foundTargetEXE == 1) { util::lookupCleanup(); return 1; }
}
*/

int main() {
	while (bool loop = 1) {
		Sleep((interval*1000));
	}
}
