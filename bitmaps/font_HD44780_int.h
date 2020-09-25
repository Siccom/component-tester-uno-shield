/* ************************************************************************
 *
 *   internal 5x8 font of HD44780: international font
 *
 *   (c) 2015-2018 by Markus Reschke
 *
 * ************************************************************************ */


/* ************************************************************************
 *   font data
 * ************************************************************************ */

#ifdef FONT_HD44780_INT


/* font size */
#define FONT_SIZE_X          5     /* width:  5 dots */
#define FONT_SIZE_Y          8     /* heigth: 8 dots */

/* font data format */
#define FONT_BYTES_N         8     /* 8 bytes per character */
#define FONT_BYTES_X         8     /* 8 bytes in x direction */
#define FONT_BYTES_Y         1     /* 1 byte in y direction */


/*
 *  character bitmaps
 *  - just for user defined characters
 *  - format:
 *    - first byte: first horizontal line (top to down)
 *    - bit #0: right / bit #4: left
 *    - bits #5-7 unused
 */

const uint8_t FontData[] PROGMEM = {
  /* symbols and special characters */
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* 0x00 n/a */
  0x11,0x19,0x1d,0x1f,0x1d,0x19,0x11,0x00,   /* 0x01 symbol: diode A-C */
  0x11,0x13,0x17,0x1f,0x17,0x13,0x11,0x00,   /* 0x02 symbol: diode C-A */
  0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x1b,0x00,   /* 0x03 symbol: capacitor */
  0x00,0x00,0x0e,0x11,0x11,0x0a,0x1b,0x00,   /* 0x04 omega */
  0x00,0x11,0x11,0x11,0x13,0x1d,0x10,0x10,   /* 0x05 � (micro) */
  0x00,0x0f,0x08,0x18,0x08,0x0f,0x00,0x00,   /* 0x06 symbol: resistor left side */
  0x00,0x1e,0x02,0x03,0x02,0x1e,0x00,0x00,   /* 0x07 symbol: resistor right side */
};



/*
 *  font lookup table for ASCII ISO 8859-1
 *  - 8 bit ASCII to module's built-in font
 *  - ff: no bitmap available
 */

const uint8_t FontTable[] PROGMEM = {
  0xff,        /* 0x00 -> n/a */
  0x01,        /* 0x01 -> symbol: diode A-C */
  0x02,        /* 0x02 -> symbol: diode C-A */
  0x03,        /* 0x03 -> symbol: capacitor */
  0x04,        /* 0x04 -> omega (or built-in 0xf4) */
  0x05,        /* 0x05 -> � (micro) (or built-in 0xe4) */
  0x06,        /* 0x06 -> symbol: resistor left side */
  0x07,        /* 0x07 -> symbol: resistor right side */
  0xff,        /* 0x08 -> n/a */
  0xff,        /* 0x09 -> n/a */
  0xff,        /* 0x0a -> n/a */
  0xff,        /* 0x0b -> n/a */
  0xff,        /* 0x0c -> n/a */
  0xff,        /* 0x0d -> n/a */
  0xff,        /* 0x0e -> n/a */
  0xff,        /* 0x0f -> n/a */

  0xff,        /* 0x10 -> n/a */
  0xff,        /* 0x11 -> n/a */
  0xff,        /* 0x12 -> n/a */
  0xff,        /* 0x13 -> n/a */
  0xff,        /* 0x14 -> n/a */
  0xff,        /* 0x15 -> n/a */
  0xff,        /* 0x16 -> n/a */
  0xff,        /* 0x17 -> n/a */
  0xff,        /* 0x18 -> n/a */
  0xff,        /* 0x19 -> n/a */
  0xff,        /* 0x1a -> n/a */
  0xff,        /* 0x1b -> n/a */
  0xff,        /* 0x1c -> n/a */
  0xff,        /* 0x1d -> n/a */
  0xff,        /* 0x1e -> n/a */
  0xff,        /* 0x1f -> n/a */

  0x20,        /* 0x20 -> space */
  0x21,        /* 0x21 -> ! */
  0x22,        /* 0x22 -> " */
  0x23,        /* 0x23 -> # */
  0x24,        /* 0x24 -> $ */
  0x25,        /* 0x25 -> % */
  0x26,        /* 0x26 -> & */
  0x27,        /* 0x27 -> � */
  0x28,        /* 0x28 -> ( */
  0x29,        /* 0x29 -> ) */
  0x2a,        /* 0x2a -> * */
  0x2b,        /* 0x2b -> + */
  0x2c,        /* 0x2c -> , */
  0x2d,        /* 0x2d -> - */
  0x2e,        /* 0x2e -> . */
  0x2f,        /* 0x2f -> / */

  0x30,        /* 0x30 -> 0 */
  0x31,        /* 0x31 -> 1 */
  0x32,        /* 0x32 -> 2 */
  0x33,        /* 0x33 -> 3 */
  0x34,        /* 0x34 -> 4 */
  0x35,        /* 0x35 -> 5 */
  0x36,        /* 0x36 -> 6 */
  0x37,        /* 0x37 -> 7 */
  0x38,        /* 0x38 -> 8 */
  0x39,        /* 0x39 -> 9 */
  0x3a,        /* 0x3a -> : */
  0x3b,        /* 0x3b -> ; */
  0x3c,        /* 0x3c -> < */
  0x3d,        /* 0x3d -> = */
  0x3e,        /* 0x3e -> > */
  0x3f,        /* 0x3f -> ? */

  0x40,        /* 0x40 -> @ */
  0x41,        /* 0x41 -> A */
  0x42,        /* 0x42 -> B */
  0x43,        /* 0x43 -> C */
  0x44,        /* 0x44 -> D */
  0x45,        /* 0x45 -> E */
  0x46,        /* 0x46 -> F */
  0x47,        /* 0x47 -> G */
  0x48,        /* 0x48 -> H */
  0x49,        /* 0x49 -> I */
  0x4a,        /* 0x4a -> J */
  0x4b,        /* 0x4b -> K */
  0x4c,        /* 0x4c -> L */
  0x4d,        /* 0x4d -> M */
  0x4e,        /* 0x4e -> N */
  0x4f,        /* 0x4f -> O */

  0x50,        /* 0x50 -> P */
  0x51,        /* 0x51 -> Q */
  0x52,        /* 0x52 -> R */
  0x53,        /* 0x53 -> S */
  0x54,        /* 0x54 -> T */
  0x55,        /* 0x55 -> U */
  0x56,        /* 0x56 -> V */
  0x57,        /* 0x57 -> W */
  0x58,        /* 0x58 -> X */
  0x59,        /* 0x59 -> Y */
  0x5a,        /* 0x5a -> Z */
  0x5b,        /* 0x5b -> [ */
  0x5c,        /* 0x5c -> \ */
  0x5d,        /* 0x5d -> ] */
  0x5e,        /* 0x5e -> ^ */
  0x5f,        /* 0x5f -> _ */

  0x60,        /* 0x60 -> ` */
  0x61,        /* 0x61 -> a */
  0x62,        /* 0x62 -> b */
  0x63,        /* 0x63 -> c */
  0x64,        /* 0x64 -> d */
  0x65,        /* 0x65 -> e */
  0x66,        /* 0x66 -> f */
  0x67,        /* 0x67 -> g */
  0x68,        /* 0x68 -> h */
  0x69,        /* 0x69 -> i */
  0x6a,        /* 0x6a -> j */
  0x6b,        /* 0x6b -> k */
  0x6c,        /* 0x6c -> l */
  0x6d,        /* 0x6d -> m */
  0x6e,        /* 0x6e -> n */
  0x6f,        /* 0x6f -> o */

  0x70,        /* 0x70 -> p */
  0x71,        /* 0x71 -> q */
  0x72,        /* 0x72 -> r */
  0x73,        /* 0x73 -> s */
  0x74,        /* 0x74 -> t */
  0x75,        /* 0x75 -> u */
  0x76,        /* 0x76 -> v */
  0x77,        /* 0x77 -> w */
  0x78,        /* 0x78 -> x */
  0x79,        /* 0x79 -> y */
  0x7a,        /* 0x7a -> z */
  0x7b,        /* 0x7b -> { */
  0x7c,        /* 0x7c -> | */
  0x7d,        /* 0x7d -> } */
  0x7e,        /* 0x7e -> ~ */
  0xff,        /* 0x7f -> n/a */

  0xff,        /* 0x80 -> n/a */
  0xff,        /* 0x81 -> n/a */
  0xff,        /* 0x82 -> n/a */
  0xff,        /* 0x83 -> n/a */
  0xff,        /* 0x84 -> n/a */
  0xff,        /* 0x85 -> n/a */
  0xff,        /* 0x86 -> n/a */
  0xff,        /* 0x87 -> n/a */
  0xff,        /* 0x88 -> n/a */
  0xff,        /* 0x89 -> n/a */
  0xff,        /* 0x8a -> n/a */
  0xff,        /* 0x8b -> n/a */
  0xff,        /* 0x8c -> n/a */
  0xff,        /* 0x8d -> n/a */
  0xff,        /* 0x8e -> n/a */
  0xff,        /* 0x8f -> n/a */

  0xff,        /* 0x90 -> n/a */
  0xff,        /* 0x91 -> n/a */
  0xff,        /* 0x92 -> n/a */
  0xff,        /* 0x93 -> n/a */
  0xff,        /* 0x94 -> n/a */
  0xff,        /* 0x95 -> n/a */
  0xff,        /* 0x96 -> n/a */
  0xff,        /* 0x97 -> n/a */
  0xff,        /* 0x98 -> n/a */
  0xff,        /* 0x99 -> n/a */
  0xff,        /* 0x9a -> n/a */
  0xff,        /* 0x9b -> n/a */
  0xff,        /* 0x9c -> n/a */
  0xff,        /* 0x9d -> n/a */
  0xff,        /* 0x9e -> n/a */
  0xff,        /* 0x9f -> n/a */

  0xff,        /* 0xa0 -> n/a */
  0xff,        /* 0xa1 -> n/a */
  0xff,        /* 0xa2 -> n/a */
  0xff,        /* 0xa3 -> n/a */
  0xff,        /* 0xa4 -> n/a */
  0xff,        /* 0xa5 -> n/a */
  0xff,        /* 0xa6 -> n/a */
  0xff,        /* 0xa7 -> n/a */
  0xff,        /* 0xa8 -> n/a */
  0xff,        /* 0xa9 -> n/a */
  0xff,        /* 0xaa -> n/a */
  0xff,        /* 0xab -> n/a */
  0xff,        /* 0xac -> n/a */
  0xff,        /* 0xad -> n/a */
  0xff,        /* 0xae -> n/a */
  0xff,        /* 0xaf -> n/a */

  0xdf,        /* 0xb0 -> � (degree) */
  0xff,        /* 0xb1 -> n/a */
  0xff,        /* 0xb2 -> n/a */
  0xff,        /* 0xb3 -> n/a */
  0xff,        /* 0xb4 -> n/a */
  0x05,        /* 0xb5 -> � (micro) (or built-in 0xe4) */
  0xff,        /* 0xb6 -> n/a */
  0xff,        /* 0xb7 -> n/a */
  0xff,        /* 0xb8 -> n/a */
  0xff,        /* 0xb9 -> n/a */
  0xff,        /* 0xba -> n/a */
  0xff,        /* 0xbb -> n/a */
  0xff,        /* 0xbc -> n/a */
  0xff,        /* 0xbd -> n/a */
  0xff,        /* 0xbe -> n/a */
  0xff,        /* 0xbf -> n/a */

  0xff,        /* 0xc0 -> n/a */
  0xff,        /* 0xc1 -> n/a */
  0xff,        /* 0xc2 -> n/a */
  0xff,        /* 0xc3 -> n/a */
  0xff,        /* 0xc4 -> �? */
  0xff,        /* 0xc5 -> n/a */
  0xff,        /* 0xc6 -> n/a */
  0xff,        /* 0xc7 -> n/a */
  0xff,        /* 0xc8 -> n/a */
  0xff,        /* 0xc9 -> n/a */
  0xff,        /* 0xca -> n/a */
  0xff,        /* 0xcb -> n/a */
  0xff,        /* 0xcc -> n/a */
  0xff,        /* 0xcd -> n/a */
  0xff,        /* 0xce -> n/a */
  0xff,        /* 0xcf -> n/a */

  0xff,        /* 0xd0 -> n/a */
  0xff,        /* 0xd1 -> n/a */
  0xff,        /* 0xd2 -> n/a */
  0xff,        /* 0xd3 -> n/a */
  0xff,        /* 0xd4 -> n/a */
  0xff,        /* 0xd5 -> n/a */
  0xff,        /* 0xd6 -> �? */
  0xff,        /* 0xd7 -> n/a */
  0xff,        /* 0xd8 -> n/a */
  0xff,        /* 0xd9 -> n/a */
  0xff,        /* 0xda -> n/a */
  0xff,        /* 0xdb -> n/a */
  0xff,        /* 0xdc -> �? */
  0xff,        /* 0xdd -> n/a */
  0xff,        /* 0xde -> n/a */
  0xe2,        /* 0xdf -> � (beta misused) */

  0xff,        /* 0xe0 -> n/a */
  0xff,        /* 0xe1 -> n/a */
  0xff,        /* 0xe2 -> n/a */
  0xff,        /* 0xe3 -> n/a */
  0xe1,        /* 0xe4 -> � */
  0xff,        /* 0xe5 -> n/a */
  0xff,        /* 0xe6 -> n/a */
  0xff,        /* 0xe7 -> n/a */
  0xff,        /* 0xe8 -> n/a */
  0xff,        /* 0xe9 -> n/a */
  0xff,        /* 0xea -> n/a */
  0xff,        /* 0xeb -> n/a */
  0xff,        /* 0xec -> n/a */
  0xff,        /* 0xed -> n/a */
  0xff,        /* 0xee -> n/a */
  0xff,        /* 0xef -> n/a */

  0xff,        /* 0xf0 -> n/a */
  0xff,        /* 0xf1 -> n/a */
  0xff,        /* 0xf2 -> n/a */
  0xff,        /* 0xf3 -> n/a */
  0xff,        /* 0xf4 -> n/a */
  0xff,        /* 0xf5 -> n/a */
  0xef,        /* 0xf6 -> � */
  0xff,        /* 0xf7 -> n/a */
  0xff,        /* 0xf8 -> n/a */
  0xff,        /* 0xf9 -> n/a */
  0xff,        /* 0xfa -> n/a */
  0xff,        /* 0xfb -> n/a */
  0xf5,        /* 0xfc -> � */
  0xff,        /* 0xfd -> n/a */
  0xff,        /* 0xfe -> n/a */
  0xff,        /* 0xff -> n/a */
};


#endif

/* ************************************************************************
 *   EOF
 * ************************************************************************ */
