#include <3ds.h>
#include <stdio.h>
#include <string.h>

int A = 0;

int main(void)
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

	printf("v2.4\n");
	printf("if it dont work then go for a henati break and try again lator!\n");
	printf("if u too scared for frii gam pres b\n");

	for(A = 0; A < 60000; A = A+5){
		//every 300A is a second
		hidScanInput();
		u32 kDown = hidKeysDown();
		if (A == 1800) printf("DOWNLOADING FRII GAMES...\n");
		if (A == 3600) printf("DOWNLOA COMPLETE!\n");
		if (A == 5400) printf("bribing nintendo to help with fefosho\n");
		if (A == 7200) printf("installing yellownand..\n");
		if (A == 9600) printf("yellownand instal complet!\n");
		if (A == 10200) printf("jus make sur u don move home menu icon\n"), printf("OR U BRIC!\n");
		if (A == 10800) printf("dongrodi to v0.0.1!\n");
		if (A == 11400) printf("sicc!! now generat new sed\n");
		if (A == 13200) printf("sed genrat now inejct\n");
		if (A == 15000) printf("unb&\n");
		if (A == 16800) printf("nowe update from DUMB LUMA to corbeni\n");
		if (A == 18600) printf("now u hav corbneik becaus luma suck wee wee!!\n");
		if (A == 20400) printf("arguin in #meta about rule 11...\n");
		if (A == 22200) printf("OH No HECK yo got frikken ban by dos NAZI MOD!!!\n");
		if (A == 23400) printf("makin alt accooun (ur such a hackers)\n");
		if (A == 25200) printf("u got aron ban my dud!!\n");
		if (A == 26100) printf("now lunching frii gam!!\n");

		gfxFlushBuffers();
		gfxSwapBuffers();
		gspWaitForVBlank();
		if (kDown & KEY_B) break;
		if (A == 27900){
		memset(param, 0, sizeof(param));
		memset(hmac, 0, sizeof(hmac));
		APT_PrepareToDoApplicationJump(0, shopID, 0);
		APT_DoApplicationJump(param, sizeof(param), hmac); } }

	gfxExit();
	return 0;
}
