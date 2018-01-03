
#include "P_Initializer.h"

void P_InitNDS()
{
	//Initialize the main engine
	P_Graphics_setup_main();

	//Set correctly the buffer to write
#ifdef FB0
	P_Graphics_assignBuffer(MAIN, (u16*)VRAM_A,256,192);
#endif

#ifdef ROTOSCALE
	P_Graphics_assignBuffer(MAIN, (u16*)BG_GFX,256,192);
#endif

	//Initialize the 16x16 field
	P_Map16x16_Init( 12, 16 );

	Audio_Init();
	Audio_PlayMusic();
}

