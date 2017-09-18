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

		printf("downloa fefoshep form gothu!!!\n");
		;svcSleepThread(10000000000);

		printf("downloa compete!! to insta pres a!\n")

		;if(keysDown & KEY_A)
			printf("instalin fefoshep!\n")
			;svcSleepThread(10000000000);

			printf("isntal compete! nowa downloa friig am!!!\n")
			;svcSleepThread(10000000000);

			printf("downloa fri gam and fefoshep instal done!! God is the pork i retry\n")
			;svcSleepThread(6000000000);
			break;

		

		;if (keysDown & KEY_START) break; 

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}

	gfxExit();
	return 0;
}
