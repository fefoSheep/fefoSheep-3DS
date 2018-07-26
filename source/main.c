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

		printf("v2.4\n");
		printf("if it dont work then go for a henati break and try again lator!\n");
		svcSleepThread(6000000000);
		printf("DOWNLOADING FRII GAMES...\n");
		svcSleepThread(6000000000);
		printf("DOWNLOA COMPLETE!\n");
		svcSleepThread(6000000000);
		printf("bribing nintendo to help with fefosho\n");
		svcSleepThread(6000000000);
		printf("installing yellownand..\n");
		svcSleepThread(8000000000);
		printf("yellownand instal complet!\n");
		svcSleepThread(2000000000);
		printf("jus make sur u don move home menu icon\n");
		printf("OR U BRIC!\n");
		svcSleepThread(2000000000);
		printf("dongrodi to v0.0.1!\n");
		svcSleepThread(2000000000);
		printf("sicc!! now generat new sed\n");
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
		printf("makin alt accooun (ur such a hackers)\n");
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
