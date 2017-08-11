#include<stdio.h>
#include "util.h"
#include<windows.h>
#include<string>
#include<stdlib.h>


const unsigned int interval = 3600*24*365; //In seconds

inline bool boostDownloadSDK() {
	util::highPriority("DownloadSDKServer");
	//util::highPriority("ThunderPlatform");
	return 0;
}



int checkMainProgramStatus() {
	util::lookupInit();
	bool foundTargetEXE = util::lookup("Thunder");
	if (foundTargetEXE == 0) { util::lookupCleanup(); return 0; }
	if (foundTargetEXE == 1) { util::lookupCleanup(); return 1; }
}


int main(int argc, const char * argv[]) {
	/*
	For Reverse Engineering
	
	string passedParameters;

	for (int i = 1; i < argc; i++) {
		passedParameters += (argv[i] + string("\n"));
	}

	printf(passedParameters.c_str());
	printf("\n");
	util::sysExecute("pause");
	return 0;
	*/

	//boostDownloadSDK();//Boost Download SDK


	while (const bool loop = 1) {
		Sleep((interval*1000)); 	//Sleep Forever
	}
}
