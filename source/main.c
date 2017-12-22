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

		printf("v1.7.5\n");
		printf("downloa fefoshep form gothu!!!\n");
		svcSleepThread(6000000000);
		printf("downloa compete!! now instalin!\n");
		svcSleepThread(6000000000);
		printf("isntal compete! nowa downloa tree ds friig am!!!\n");
		svcSleepThread(6000000000);
		printf("now doanload swotch frii gam port for tree ds too!\n");
		svcSleepThread(6000000000);
		printf("downlaod fri gam wii u on tre ds\n");
		svcSleepThread(6000000000);
		printf("now downlaoading wii gam on tre ds\n");
		svcSleepThread(6000000000);
		printf("DOWNLOA COMPETE!!\n");
		printf("u GO T  FRI GAM!!!\n");
		svcSleepThread(6000000000);
		printf("now unban!11\n");
		svcSleepThread(6000000000);
		printf("running clongo exploit.....\n");
		svcSleepThread(10000000000);
		printf("installing yellownand..\n");
		svcSleepThread(8000000000);
		printf("yellownand instal complet!\n");
		svcSleepThread(1000000000);
		printf("generat new sed\n");
		svcSleepThread(6000000000);
		printf("sed genrat now inejct\n");
		svcSleepThread(6000000000);
		printf("unb&\n");
		svcSleepThread(6000000000);
		printf("nowe update from DUMB LUMA to corbeni\n");
		svcSleepThread(6000000000);
		printf("now u hav corbneik becaus luma suck wee wee!!\n");
		svcSleepThread(6000000000);
		printf("arguin in #meta about rule 11...\n");
		svcSleepThread(6000000000);
		printf("OH No HECK yo got frikken ban by dos NAZI MOD!!!\n");
		svcSleepThread(4000000000);
		printf("gotta unban now x d\n");
		svcSleepThread(2000000000);
		printf("makin alt accooun (ur suck a hackers)\n");
		svcSleepThread(6000000000);
		printf("u got aron ban my dud!!\n");
		svcSleepThread(3000000000);
		printf("now lunching frii gam!!\n");
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
