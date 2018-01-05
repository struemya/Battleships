
//{{BLOCK(background)

//======================================================================
//
//	background, 256x192@8, 
//	+ palette 253 entries, not compressed
//	+ 81 tiles (t|f reduced) not compressed
//	+ regular map (flat), not compressed, 32x24 
//	Total size: 506 + 5184 + 1536 = 7226
//
//	Time-stamp: 2018-01-05, 12:13:35
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BACKGROUND_H
#define GRIT_BACKGROUND_H

#define backgroundTilesLen 5184
extern const unsigned int backgroundTiles[1296];

#define backgroundMapLen 1536
extern const unsigned short backgroundMap[768];

#define backgroundPalLen 506
extern const unsigned short backgroundPal[254];

#endif // GRIT_BACKGROUND_H

//}}BLOCK(background)
