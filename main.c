#include <3ds.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);

	// Main loop
	while (aptMainLoop())
	{
	
	u32 keysDown = hidKeysDown;
	hidScanInput();
	;printf("v1.2.0\n")
	;printf("downloa fefoshep form gothu!!!\n");
	;svcSleepThread(10000000000);
	;printf("downloa compete!! now instalin!\n")
	;svcSleepThread(10000000000);
	;printf("isntal compete! nowa downloa tree ds friig am!!!\n")
	;svcSleepThread(10000000000);
	;printf("finsihe downloading tree ds frii gam!!\n")
	;printf("now doanload swotch frii gam port for tree ds too!!!11\n")
	;svcSleepThread(6000000000);
	;printf("EVEYRTIN DONE!! u GO T  FRI GAM!!!\n")
	;svcSleepThread(6000000000);
	break;

	;if (keysDown & KEY_START) 
	break;

	gfxFlushBuffers();
	gfxSwapBuffers();
	gspWaitForVBlank();
	}

	gfxExit();
	return 0;
}
