
#include "P_Initializer.h"

void P_InitNDS()
{
	//Initialize the main engine
	P_Graphics_setup_main();

	P_Map10x10_Init( 10, 10 );

	Audio_Init();
	//Audio_PlayMusic();
}
