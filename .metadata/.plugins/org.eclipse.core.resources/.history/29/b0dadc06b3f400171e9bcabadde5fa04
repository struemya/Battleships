
#include <nds.h>
#include "P_Graphics.h"

u16* mapMemory;
u16* mapMemory_SUB;
int MapCols;
int MapRows;

/*
 * This function is called in the initialization of the P_Map10x10 to
 * configure the Background 2 of the Main Engine
 *
 * The function does not return anything and it does not have any input
 * arguments. The BG2 of the Main Engine must be configured in Rotoscale
 * mode to be used as a bitmap with a depth colour of 16 bits. This
 * background will be used as a canvas of pixels (like in the Frame Buffer
 * Mode) to display the game field in the upper screen.
 */
void P_Map10x10_configureBG2();

/*
 * This function is called in the initialization of the P_Map10x10 to
 * configure the Background 2 of the Sub Engine
 *
 * The function does not return anything and it does not have any input
 * arguments. The BG2 of the Sub Engine must be configured in Rotoscale
 * mode with a depth of colours of 8 bits. This background will be used
 * to show an image in the bottom screen.
 */
void P_Map10x10_configureBG2_Sub();


void P_Map10x10_configureBG0();
void drawBorder();
void P_Map10x10_configureBG3();
void P_Map10x10_Init( int cols, int rows );
void SetMap10x10To(int index10, int tileIndex);
void SetSubMap10x10To(int index10, int tileIndex);
int getIndex(int x, int y);

