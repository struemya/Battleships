
@{{BLOCK(boat)

@=======================================================================
@
@	boat, 16x64@8, 
@	+ palette 128 entries, not compressed
@	+ 16 tiles not compressed
@	Total size: 256 + 1024 = 1280
@
@	Time-stamp: 2018-01-08, 01:06:32
@	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global boatTiles		@ 1024 unsigned chars
boatTiles:
	.word 0x46464646,0x46464646,0x46464646,0x98080746,0x46464646,0x7070CC14,0x1B464646,0x70707016
	.word 0x75464646,0x91331370,0x32A24646,0x6A6CCF13,0x703E4646,0x00B66C33,0x70884646,0x00006A91
	.word 0x46464646,0x46464646,0x46070898,0x46464646,0x14CC7070,0x46464646,0x16707070,0x4646461B
	.word 0x70133391,0x46464675,0x13036C6A,0x4646A2B2,0x3319B600,0x46463E70,0x030A0000,0x46468870
	.word 0x70700746,0x00006A91,0x70700946,0x00B66C33,0x7070C346,0x0A6C0313,0x7070BA46,0x03331370
	.word 0x7070D346,0x70707070,0x70707346,0x70707070,0x70703246,0x70707070,0x70707046,0x70707070
	.word 0x030A0000,0x46077070,0x33192500,0x46097070,0x1303190A,0x461E7070,0x70133303,0x46277070
	.word 0x70707070,0x46C87070,0x70707070,0x46737070,0x70707070,0x46707070,0x70707070,0x46707070

	.word 0x70707046,0x70707070,0x70707046,0x70707070,0x70707046,0x70707070,0x70707046,0x70707070
	.word 0x70707046,0xCF331370,0x70707046,0x6A6C9113,0x70707046,0x00B66C33,0x70707046,0x00006A91
	.word 0x70707070,0x46707070,0x70707070,0x46707070,0x70707070,0x46707070,0x70707070,0x46707070
	.word 0x701333CF,0x46707070,0x13916C6A,0x46707070,0x336CB600,0x46707070,0x03B40000,0x46707070
	.word 0x70707046,0x0000B403,0x70707046,0x00251933,0x70707046,0x0A190313,0x70707046,0x03331370
	.word 0x70707046,0x70707070,0x70707046,0x70707070,0x70707046,0x70707070,0x70707046,0x70707070
	.word 0x03B40000,0x46707070,0x33192500,0x46707070,0x1303190A,0x46707070,0x70133303,0x46707070
	.word 0x70707070,0x46707070,0x70707070,0x46707070,0x70707070,0x46707070,0x70707070,0x46707070

	.word 0x46464646,0x46464646,0x46464646,0x3F18A246,0x46464646,0x6DB81771,0x1B464646,0x777E5B47
	.word 0xC6464646,0x774C129A,0x99A24646,0x780F1AAC,0x23554646,0x2E50C710,0x62124646,0x767F262C
	.word 0x46464646,0x46464646,0x461B3CB7,0x46464646,0xAF5D7701,0x46464646,0xA73B5093,0x4646461B
	.word 0xC437897B,0x46464628,0xD0778650,0x46464689,0x837B4466,0x46461D4A,0x83442E3C,0x4646B5CA
	.word 0x80966946,0x2D7DA334,0x72490246,0x8192B861,0x78563646,0x37308548,0xB0878446,0x28667D8E
	.word 0x904D2A46,0x37287780,0x9E539546,0x7B2C7A4F,0x158CC046,0x4C0EA86F,0xB1647046,0x57C21C96
	.word 0x7DC5BD9B,0x46A2A5B0,0xA4812E1F,0x468A2F5E,0x447EAD66,0x4654664C,0x291F7B9C,0x4635057B
	.word 0x2B776666,0x4663B1A6,0xAE599CC5,0x466E2443,0xD1428F59,0x46A5AABE,0x41CE0B2C,0x468D4D87

	.word 0xCBC03246,0x5240CD5F,0xAB0C3246,0xBBC2D21A,0xA0043246,0x6DB88B20,0x5C946046,0x777E5BAA
	.word 0x68409D46,0x774C129A,0x385A4B46,0x780F1AAC,0x2396C946,0x2E50C710,0x62119F46,0x767F262C
	.word 0x41A72345,0x465F2241,0xBB1857B3,0x4632394E,0xBF187701,0x46703D61,0x513B5093,0x46BC9701
	.word 0xC437897B,0x46671F1F,0xD0778650,0x460D8689,0x837B4466,0x467C104A,0x83442E3C,0x46953ACA
	.word 0x80969E46,0x2D7DA334,0x7249B946,0x8192B861,0x78566546,0x37308548,0xB0876B46,0x28667D8E
	.word 0x904D8246,0x37287780,0x9E532146,0x7B2C7A4F,0x158C7446,0x4C0EA86F,0xB1647046,0x57C21C96
	.word 0x7DC5BD9B,0x4658A5B0,0xA4812E1F,0x46A12F5E,0x447EAD66,0x4606664C,0x291F7B9C,0x4679057B
	.word 0x2B776666,0x46A9B1A6,0xAE599CC5,0x46C12443,0xD1428F59,0x4631AABE,0x41CE0B2C,0x468D4D87

	.section .rodata
	.align	2
	.global boatPal		@ 256 unsigned chars
boatPal:
	.hword 0x0000,0x02DF,0x571E,0x00D0,0x0518,0x2AFE,0x01FE,0x73BE
	.hword 0x2E18,0x52FB,0x0046,0x0B7F,0x0915,0x015B,0x029F,0x3FDF
	.hword 0x0EFF,0x177F,0x2B9F,0x0113,0x6B7D,0x099B,0x1175,0x26DF
	.hword 0x3B9F,0x008A,0x1EBE,0x7BFF,0x237F,0x4F9F,0x3A59,0x57FF
	.hword 0x161C,0x0958,0x093B,0x133F,0x09DC,0x0022,0x137F,0x25D7
	.hword 0x6BFF,0x2BFF,0x19BB,0x075F,0x23FF,0x37FF,0x47DF,0x165D
	.hword 0x0A9F,0x0917,0x0514,0x00F2,0x1BBF,0x2A1D,0x42DE,0x5FFF
	.hword 0x0D5E,0x0D98,0x017D,0x375F,0x4BDF,0x0E3C,0x46BA,0x231F

	.hword 0x16DF,0x099D,0x33BF,0x0519,0x3FFF,0x039F,0x7FFF,0x1A1D
	.hword 0x1F9F,0x0E9E,0x0FFF,0x0956,0x4FFF,0x097C,0x1B5F,0x09FE
	.hword 0x37DF,0x011D,0x031F,0x0959,0x3ADF,0x4F3F,0x12FF,0x2FBF
	.hword 0x11FD,0x33FF,0x119C,0x1FDF,0x0E1E,0x43BF,0x235F,0x0938
	.hword 0x0914,0x173F,0x17FF,0x229F,0x0D79,0x0DDD,0x47FF,0x0EBE
	.hword 0x0DBC,0x77BF,0x0067,0x097B,0x008B,0x0BDF,0x15FE,0x123F
	.hword 0x0114,0x6FBF,0x1AFF,0x0955,0x0536,0x3E79,0x53FF,0x43FF
	.hword 0x1B9F,0x055D,0x13BF,0x3BFF,0x0D18,0x23BF,0x63FF,0x33DF

@}}BLOCK(boat)
