#include<stdio.h>
#include "util.h"
#include<Windows.h>
#include<string>
#include<stdlib.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

const unsigned int interval = 600; //In seconds

bool boostDownlaodSDK() {
	util::highPriority("DownloadSDKServer.exe");
	return 0;
}

bool checkMainProgramStatus() {
	util::lookupInit();
	bool result = util::lookup("Thunder.exe");
	if (result) { util::lookupCleanup(); return 0; }
	if (!result) { util::lookupCleanup(); return 1; }
	return 0;
}

int main() {
	bool loop = true;
	while(loop) {
		boostDownlaodSDK();
		if (!checkMainProgramStatus()) {
			return 0;
		};
		Sleep((interval*1000));
	}
}
