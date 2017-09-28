#include <3ds.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);
	u8 param[0x300];
	u8 hmac[0x20];
	u8 regionCode;
	u64 shopID;
	CFGU_SecureInfoGetRegion(&regionCode);
	switch (regionCode)
	{
	case 0:
		shopID = 0x0004001000020900;
		break;
	case 1:
		shopID = 0x0004001000021900;
		break;
	case 2:
		shopID = 0x0004001000022900;
		break;
	default:
		shopID = 0x00;

	}

	// Main loop
	while (aptMainLoop())
	{
		u32 keysDown = hidKeysDown;
		hidScanInput();

		printf("v1.3.0\n");
		printf("downloa fefoshep form gothu!!!\n");
		svcSleepThread(10000000000);
		printf("downloa compete!! now instalin!\n");
		svcSleepThread(10000000000);
		printf("isntal compete! nowa downloa tree ds friig am!!!\n");
		svcSleepThread(10000000000);
		printf("now doanload swotch frii gam port for tree ds too!\n");
		svcSleepThread(6000000000);
		printf("downlaod fri gam wii u on tre ds\n");
		svcSleepThread(6000000000);
		printf("u GO T  FRI GAM!!!\n");
		svcSleepThread(6000000000);
		printf("now unban!11\n");
		svcSleepThread(6000000000);
		printf("generat new sed\n");
		svcSleepThread(6000000000);
		printf("sed genrat now inejct\n");
		svcSleepThread(6000000000);
		printf("unb&\n");
		svcSleepThread(6000000000);
		printf("now launchin frii gam!!");
		svcSleepThread(6000000000);

		memset(param, 0, sizeof(param));
		memset(hmac, 0, sizeof(hmac));

		APT_PrepareToDoApplicationJump(0, shopID, 0);
		APT_DoApplicationJump(param, sizeof(param), hmac);

		if (keysDown & KEY_START) break;

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
	}
	gfxExit();
	return 0;
}
