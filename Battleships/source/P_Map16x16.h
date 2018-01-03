
#include <nds.h>
#include "P_Graphics.h"

u16* mapMemory;
int MapCols;
int MapRows;

/*
 * This function is called in the initialization of the P_Map16x16 to
 * configure the Background 2 of the Main Engine
 *
 * The function does not return anything and it does not have any input
 * arguments. The BG2 of the Main Engine must be configured in Rotoscale
 * mode to be used as a bitmap with a depth colour of 16 bits. This
 * background will be used as a canvas of pixels (like in the Frame Buffer
 * Mode) to display the game field in the upper screen.
 */
void P_Map16x16_configureBG2();

/*
 * This function is called in the initialization of the P_Map16x16 to
 * configure the Background 2 of the Sub Engine
 *
 * The function does not return anything and it does not have any input
 * arguments. The BG2 of the Sub Engine must be configured in Rotoscale
 * mode with a depth of colours of 8 bits. This background will be used
 * to show an image in the bottom screen.
 */
void P_Map16x16_configureBG2_Sub();


void P_Map16x16_configureBG0();
void P_Map16x16_configureBG3();
void SetMap16x16To(int index16, bool full);
