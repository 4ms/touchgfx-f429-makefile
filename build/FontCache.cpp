ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 1


   1              		.cpu cortex-m4
   2              		.eabi_attribute 27, 1
   3              		.eabi_attribute 28, 1
   4              		.eabi_attribute 20, 1
   5              		.eabi_attribute 21, 1
   6              		.eabi_attribute 23, 3
   7              		.eabi_attribute 24, 1
   8              		.eabi_attribute 25, 1
   9              		.eabi_attribute 26, 1
  10              		.eabi_attribute 30, 6
  11              		.eabi_attribute 34, 1
  12              		.eabi_attribute 18, 4
  13              		.file	"FontCache.cpp"
  14              		.text
  15              	.Ltext0:
  16              		.cfi_sections	.debug_frame
  17              		.section	.rodata._ZN8touchgfxL2PIE,"a"
  18              		.align	2
  21              	_ZN8touchgfxL2PIE:
  22 0000 DB0F4940 		.word	1078530011
  23              		.section	.rodata._ZN8touchgfxL4LEFTE,"a"
  26              	_ZN8touchgfxL4LEFTE:
  27 0000 00       		.space	1
  28              		.section	.rodata._ZN8touchgfxL6CENTERE,"a"
  31              	_ZN8touchgfxL6CENTERE:
  32 0000 01       		.byte	1
  33              		.section	.rodata._ZN8touchgfxL5RIGHTE,"a"
  36              	_ZN8touchgfxL5RIGHTE:
  37 0000 02       		.byte	2
  38              		.section	.rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE,"a"
  41              	_ZN8touchgfxL18TEXT_DIRECTION_LTRE:
  42 0000 00       		.space	1
  43              		.section	.rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE,"a"
  46              	_ZN8touchgfxL18TEXT_DIRECTION_RTLE:
  47 0000 01       		.byte	1
  48              		.section	.rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE,"a"
  49              		.align	1
  52              	_ZN8touchgfxL32RenderingVariant_NearestNeighborE:
  53 0000 0000     		.space	2
  54              		.section	.rodata._ZN8touchgfxL25RenderingVariant_BilinearE,"a"
  55              		.align	1
  58              	_ZN8touchgfxL25RenderingVariant_BilinearE:
  59 0000 0100     		.short	1
  60              		.section	.rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE,"a"
  61              		.align	1
  64              	_ZN8touchgfxL24RenderingVariant_NoAlphaE:
  65 0000 0000     		.space	2
  66              		.section	.rodata._ZN8touchgfxL22RenderingVariant_AlphaE,"a"
  67              		.align	1
  70              	_ZN8touchgfxL22RenderingVariant_AlphaE:
  71 0000 0200     		.short	2
  72              		.section	.rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE,"a"
  73              		.align	1
  76              	_ZN8touchgfxL28RenderingVariant_FormatShiftE:
  77 0000 0200     		.short	2
  78              		.section	.text._ZN8touchgfx4FontD2Ev,"axG",%progbits,_ZN8touchgfx4FontD5Ev,comdat
  79              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 2


  80              		.weak	_ZN8touchgfx4FontD2Ev
  81              		.arch armv7e-m
  82              		.syntax unified
  83              		.thumb
  84              		.thumb_func
  85              		.fpu fpv4-sp-d16
  87              	_ZN8touchgfx4FontD2Ev:
  88              	.LFB58:
  89              		.file 1 "Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  * @file touchgfx/Font.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  * Declares the touchgfx::Font class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** #ifndef TOUCHGFX_FONT_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** #define TOUCHGFX_FONT_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** #include <touchgfx/Unicode.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** namespace touchgfx
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** /** Glyph flag definitions. */
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** enum GlyphFlags
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     GLYPH_DATA_KERNINGTABLEPOS_BIT8_10 = 0x07, ///< The 8th, 9th and 10th bit of the kerningTablePo
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     GLYPH_DATA_WIDTH_BIT8 = 0x08,              ///< The 9th bit of "width"
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     GLYPH_DATA_HEIGHT_BIT8 = 0x10,             ///< The 9th bit of "height"
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     GLYPH_DATA_TOP_BIT8 = 0x20,                ///< The 9th bit of "top"
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     GLYPH_DATA_TOP_BIT9 = 0x40,                ///< The sign bit of "top"
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     GLYPH_DATA_ADVANCE_BIT8 = 0x80             ///< The 9th bit of "advance"
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** };
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** #pragma pack(2)
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** /** struct providing information about a glyph. Used by LCD when rendering. */
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** struct GlyphNode
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint32_t dataOffset;          ///< The index to the data of this glyph
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     Unicode::UnicodeChar unicode; ///< The Unicode of this glyph.
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint8_t _width;               ///< Width of the actual glyph data
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint8_t _height;              ///< Height of the actual glyph data
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint8_t _top;                 ///< Vertical offset from baseline of the glyph
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     int8_t left;                  ///< Horizontal offset from the left of the glyph
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint8_t _advance;             ///< Width of the glyph (including space to the left and right)
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 3


  49:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint8_t _kerningTablePos;     ///< Where are the kerning information for this glyph stored in t
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint8_t kerningTableSize;     ///< How many entries are there in the kerning table (following k
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint8_t flags;                ///< Additional glyph flags (font encoding and extra precision fo
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the "kerningTablePos" value where the 8th and 9th bits are stored in flags.
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return the right value of "kerningTablePos".
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION uint16_t kerningTablePos() const
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return ((flags & GLYPH_DATA_KERNINGTABLEPOS_BIT8_10) << 8) | _kerningTablePos;
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the "width" value where the 9th bit is stored in flags.
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return the right value of "width".
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION uint16_t width() const
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return ((flags & GLYPH_DATA_WIDTH_BIT8) << 5) | _width;
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the "height" value where the 9th bit is stored in flags.
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return the right value of "height".
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION uint16_t height() const
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return ((flags & GLYPH_DATA_HEIGHT_BIT8) << 4) | _height;
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the "top" value where the 9th bit and the sign bit are stored in flags.
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return the right value of "top".
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION int16_t top() const
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         int16_t num = ((flags & GLYPH_DATA_TOP_BIT8) << 3) | _top;
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return (flags & GLYPH_DATA_TOP_BIT9) ? num - 512 : num;
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Sets a new value for top. Used to adjust the vertical position of a glyph - this is
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * used when positioning some Thai glyphs and some Arabic glyphs.
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  newTop The new top.
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION void setTop(int16_t newTop)
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         _top = newTop & 0xFF;
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         flags &= ~(GLYPH_DATA_TOP_BIT8 | GLYPH_DATA_TOP_BIT9);
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         flags |= (newTop & 0x300) >> 3;
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 4


 106:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the "advance" value where the 9th bit is stored in flags.
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return the right value of "advance".
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION uint16_t advance() const
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return ((flags & GLYPH_DATA_ADVANCE_BIT8) << 1) | _advance;
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** };
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** #pragma pack()
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** #pragma pack(2)
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** /**
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  * Structure providing information about a kerning for a given pair of characters. Used by LCD
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  * when rendering, calculating text width etc.
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  */
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** struct KerningNode
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     Unicode::UnicodeChar unicodePrevChar; ///< The Unicode for the first character in the kerning p
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     int8_t distance;                      ///< The kerning distance
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** };
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** #pragma pack()
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** /** Defines an alias representing a Font ID. */
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** typedef uint16_t FontId;
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** /**
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  * Structure providing information about the contextual forms
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  * available in a font.
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  */
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** struct FontContextualFormsTable
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /** Defines pointer to array of 5 unicodes type */
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     typedef const Unicode::UnicodeChar (*arrayOf5UnicodesPtr)[5];
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /** Defines pointer to array of 4 unicodes type */
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     typedef const Unicode::UnicodeChar (*arrayOf4UnicodesPtr)[4];
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     const Unicode::UnicodeChar (*contextualForms4Long)[5];     ///< Table of contextual forms for s
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     const Unicode::UnicodeChar (*contextualForms3Long)[5];     ///< Table of contextual forms for s
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     const Unicode::UnicodeChar (*contextualForms2Long)[5];     ///< Table of contextual forms for s
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     const Unicode::UnicodeChar (*contextualForms0621_063a)[4]; ///< Table of contextual forms for g
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     const Unicode::UnicodeChar (*contextualForms0641_064a)[4]; ///< Table of contextual forms for g
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     const Unicode::UnicodeChar (*contextualForms06XX)[5];      ///< Table of contextual forms for r
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint16_t contextualForms4LongSize;                         ///< Length of the table
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint16_t contextualForms3LongSize;                         ///< Length of the table
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint16_t contextualForms2LongSize;                         ///< Length of the table
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint16_t contextualForms06XXSize;                          ///< Length of the table
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** };
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** /**
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  * The font base class. This class is abstract and requires the implementation of getGlyph. It
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  * provides utility functions such as obtaining string width and font height.
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****  */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 5


 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** class Font
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** public:
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /** Finalizes an instance of the Font class. */
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual ~Font()
  90              		.loc 1 167 13
  91              		.cfi_startproc
  92              		@ args = 0, pretend = 0, frame = 8
  93              		@ frame_needed = 1, uses_anonymous_args = 0
  94              		@ link register save eliminated.
  95 0000 80B4     		push	{r7}
  96              	.LCFI0:
  97              		.cfi_def_cfa_offset 4
  98              		.cfi_offset 7, -4
  99 0002 83B0     		sub	sp, sp, #12
 100              	.LCFI1:
 101              		.cfi_def_cfa_offset 16
 102 0004 00AF     		add	r7, sp, #0
 103              	.LCFI2:
 104              		.cfi_def_cfa_register 7
 105 0006 7860     		str	r0, [r7, #4]
 106              	.LBB44:
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 107              		.loc 1 168 5
 108 0008 044A     		ldr	r2, .L3
 109 000a 7B68     		ldr	r3, [r7, #4]
 110 000c 1A60     		str	r2, [r3]
 111              	.LBE44:
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 112              		.loc 1 169 5
 113 000e 7B68     		ldr	r3, [r7, #4]
 114 0010 1846     		mov	r0, r3
 115 0012 0C37     		adds	r7, r7, #12
 116              	.LCFI3:
 117              		.cfi_def_cfa_offset 4
 118 0014 BD46     		mov	sp, r7
 119              	.LCFI4:
 120              		.cfi_def_cfa_register 13
 121              		@ sp needed
 122 0016 5DF8047B 		ldr	r7, [sp], #4
 123              	.LCFI5:
 124              		.cfi_restore 7
 125              		.cfi_def_cfa_offset 0
 126 001a 7047     		bx	lr
 127              	.L4:
 128              		.align	2
 129              	.L3:
 130 001c 08000000 		.word	_ZTVN8touchgfx4FontE+8
 131              		.cfi_endproc
 132              	.LFE58:
 134              		.weak	_ZN8touchgfx4FontD1Ev
 135              		.thumb_set _ZN8touchgfx4FontD1Ev,_ZN8touchgfx4FontD2Ev
 136              		.section	.text._ZN8touchgfx4FontD0Ev,"axG",%progbits,_ZN8touchgfx4FontD5Ev,comdat
 137              		.align	1
 138              		.weak	_ZN8touchgfx4FontD0Ev
 139              		.syntax unified
 140              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 6


 141              		.thumb_func
 142              		.fpu fpv4-sp-d16
 144              	_ZN8touchgfx4FontD0Ev:
 145              	.LFB60:
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 146              		.loc 1 167 13
 147              		.cfi_startproc
 148              		@ args = 0, pretend = 0, frame = 8
 149              		@ frame_needed = 1, uses_anonymous_args = 0
 150 0000 80B5     		push	{r7, lr}
 151              	.LCFI6:
 152              		.cfi_def_cfa_offset 8
 153              		.cfi_offset 7, -8
 154              		.cfi_offset 14, -4
 155 0002 82B0     		sub	sp, sp, #8
 156              	.LCFI7:
 157              		.cfi_def_cfa_offset 16
 158 0004 00AF     		add	r7, sp, #0
 159              	.LCFI8:
 160              		.cfi_def_cfa_register 7
 161 0006 7860     		str	r0, [r7, #4]
 162              		.loc 1 169 5
 163 0008 7868     		ldr	r0, [r7, #4]
 164 000a FFF7FEFF 		bl	_ZN8touchgfx4FontD1Ev
 165 000e 1021     		movs	r1, #16
 166 0010 7868     		ldr	r0, [r7, #4]
 167 0012 FFF7FEFF 		bl	_ZdlPvj
 168 0016 7B68     		ldr	r3, [r7, #4]
 169 0018 1846     		mov	r0, r3
 170 001a 0837     		adds	r7, r7, #8
 171              	.LCFI9:
 172              		.cfi_def_cfa_offset 8
 173 001c BD46     		mov	sp, r7
 174              	.LCFI10:
 175              		.cfi_def_cfa_register 13
 176              		@ sp needed
 177 001e 80BD     		pop	{r7, pc}
 178              		.cfi_endproc
 179              	.LFE60:
 181              		.section	.rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE,"a"
 182              		.align	1
 185              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
 186 0000 FEFF     		.short	-2
 187              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
 188              		.align	1
 191              	_ZN8touchgfxL14BITMAP_INVALIDE:
 192 0000 FFFF     		.short	-1
 193              		.section	.rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE,"a"
 194              		.align	1
 197              	_ZN8touchgfxL18TYPED_TEXT_INVALIDE:
 198 0000 FFFF     		.short	-1
 199              		.section	.text._ZN8touchgfx9TypedTextD2Ev,"axG",%progbits,_ZN8touchgfx9TypedTextD5Ev,comdat
 200              		.align	1
 201              		.weak	_ZN8touchgfx9TypedTextD2Ev
 202              		.syntax unified
 203              		.thumb
 204              		.thumb_func
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 7


 205              		.fpu fpv4-sp-d16
 207              	_ZN8touchgfx9TypedTextD2Ev:
 208              	.LFB109:
 209              		.file 2 "Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  * @file touchgfx/TypedText.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  * Declares the touchgfx::TypedText class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #ifndef TOUCHGFX_TYPEDTEXT_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #define TOUCHGFX_TYPEDTEXT_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #include <touchgfx/Font.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #include <touchgfx/Texts.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #include <touchgfx/Unicode.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** namespace touchgfx
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** {
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** const TypedTextId TYPED_TEXT_INVALID = 0xFFFFU; ///< The ID of an invalid text
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #if defined(__ARMCC_VERSION) && (__ARMCC_VERSION < 6000000)
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** // Keil5 compiler issues irrelevant warning relating to missing ctor initialization for TypedTextDa
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #pragma diag_suppress 368
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** #endif
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** /**
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  * TypedText represents text (for characters) and typography (for font and alignment).
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  * TypedText provides methods for adjusting the text, font and alignment.
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  *
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  * @see TextArea
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****  */
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** class TypedText
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** {
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** public:
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * The data structure for typed texts.
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     struct TypedTextData
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         const unsigned char fontIdx;       ///< The ID of the font associated with the typed text
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         const Alignment alignment : 2;     ///< The alignment of the typed text (LEFT,CENTER,RIGHT)
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         const TextDirection direction : 2; ///< The text direction (LTR,RTL,...) of the typed text
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     };
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 8


  54:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Initializes a new instance of the TypedText class.
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @param  id (Optional) The identifier.
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     explicit TypedText(const TypedTextId id = TYPED_TEXT_INVALID)
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         : typedTextId(id)
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /** Finalizes an instance of the TypedText class. */
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     virtual ~TypedText()
 210              		.loc 2 65 13
 211              		.cfi_startproc
 212              		@ args = 0, pretend = 0, frame = 8
 213              		@ frame_needed = 1, uses_anonymous_args = 0
 214              		@ link register save eliminated.
 215 0000 80B4     		push	{r7}
 216              	.LCFI11:
 217              		.cfi_def_cfa_offset 4
 218              		.cfi_offset 7, -4
 219 0002 83B0     		sub	sp, sp, #12
 220              	.LCFI12:
 221              		.cfi_def_cfa_offset 16
 222 0004 00AF     		add	r7, sp, #0
 223              	.LCFI13:
 224              		.cfi_def_cfa_register 7
 225 0006 7860     		str	r0, [r7, #4]
 226              	.LBB45:
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 227              		.loc 2 66 5
 228 0008 044A     		ldr	r2, .L9
 229 000a 7B68     		ldr	r3, [r7, #4]
 230 000c 1A60     		str	r2, [r3]
 231              	.LBE45:
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 232              		.loc 2 67 5
 233 000e 7B68     		ldr	r3, [r7, #4]
 234 0010 1846     		mov	r0, r3
 235 0012 0C37     		adds	r7, r7, #12
 236              	.LCFI14:
 237              		.cfi_def_cfa_offset 4
 238 0014 BD46     		mov	sp, r7
 239              	.LCFI15:
 240              		.cfi_def_cfa_register 13
 241              		@ sp needed
 242 0016 5DF8047B 		ldr	r7, [sp], #4
 243              	.LCFI16:
 244              		.cfi_restore 7
 245              		.cfi_def_cfa_offset 0
 246 001a 7047     		bx	lr
 247              	.L10:
 248              		.align	2
 249              	.L9:
 250 001c 08000000 		.word	_ZTVN8touchgfx9TypedTextE+8
 251              		.cfi_endproc
 252              	.LFE109:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 9


 254              		.weak	_ZN8touchgfx9TypedTextD1Ev
 255              		.thumb_set _ZN8touchgfx9TypedTextD1Ev,_ZN8touchgfx9TypedTextD2Ev
 256              		.section	.text._ZN8touchgfx9TypedTextD0Ev,"axG",%progbits,_ZN8touchgfx9TypedTextD5Ev,comdat
 257              		.align	1
 258              		.weak	_ZN8touchgfx9TypedTextD0Ev
 259              		.syntax unified
 260              		.thumb
 261              		.thumb_func
 262              		.fpu fpv4-sp-d16
 264              	_ZN8touchgfx9TypedTextD0Ev:
 265              	.LFB111:
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 266              		.loc 2 65 13
 267              		.cfi_startproc
 268              		@ args = 0, pretend = 0, frame = 8
 269              		@ frame_needed = 1, uses_anonymous_args = 0
 270 0000 80B5     		push	{r7, lr}
 271              	.LCFI17:
 272              		.cfi_def_cfa_offset 8
 273              		.cfi_offset 7, -8
 274              		.cfi_offset 14, -4
 275 0002 82B0     		sub	sp, sp, #8
 276              	.LCFI18:
 277              		.cfi_def_cfa_offset 16
 278 0004 00AF     		add	r7, sp, #0
 279              	.LCFI19:
 280              		.cfi_def_cfa_register 7
 281 0006 7860     		str	r0, [r7, #4]
 282              		.loc 2 67 5
 283 0008 7868     		ldr	r0, [r7, #4]
 284 000a FFF7FEFF 		bl	_ZN8touchgfx9TypedTextD1Ev
 285 000e 0821     		movs	r1, #8
 286 0010 7868     		ldr	r0, [r7, #4]
 287 0012 FFF7FEFF 		bl	_ZdlPvj
 288 0016 7B68     		ldr	r3, [r7, #4]
 289 0018 1846     		mov	r0, r3
 290 001a 0837     		adds	r7, r7, #8
 291              	.LCFI20:
 292              		.cfi_def_cfa_offset 8
 293 001c BD46     		mov	sp, r7
 294              	.LCFI21:
 295              		.cfi_def_cfa_register 13
 296              		@ sp needed
 297 001e 80BD     		pop	{r7, pc}
 298              		.cfi_endproc
 299              	.LFE111:
 301              		.section	.text._ZN8touchgfx9ConstFontD2Ev,"axG",%progbits,_ZN8touchgfx9ConstFontD5Ev,comdat
 302              		.align	1
 303              		.weak	_ZN8touchgfx9ConstFontD2Ev
 304              		.syntax unified
 305              		.thumb
 306              		.thumb_func
 307              		.fpu fpv4-sp-d16
 309              	_ZN8touchgfx9ConstFontD2Ev:
 310              	.LFB142:
 311              		.file 3 "Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** /******************************************************************************
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 10


   2:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  * @file touchgfx/ConstFont.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  * Declares the touchgfx::ConstFont class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** #ifndef TOUCHGFX_CONSTFONT_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** #define TOUCHGFX_CONSTFONT_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** #include <touchgfx/Font.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** #include <touchgfx/Unicode.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** /**
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  * A ConstFont is a Font implementation that has its contents defined at compile-time and
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  * usually placed in read-only memory.
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  *
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  * @see Font
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  *
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  * @note Pure virtual class. Create an application-specific implementation of getPixelData().
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp ****  */
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** class ConstFont : public Font
 312              		.loc 3 35 7
 313              		.cfi_startproc
 314              		@ args = 0, pretend = 0, frame = 8
 315              		@ frame_needed = 1, uses_anonymous_args = 0
 316 0000 80B5     		push	{r7, lr}
 317              	.LCFI22:
 318              		.cfi_def_cfa_offset 8
 319              		.cfi_offset 7, -8
 320              		.cfi_offset 14, -4
 321 0002 82B0     		sub	sp, sp, #8
 322              	.LCFI23:
 323              		.cfi_def_cfa_offset 16
 324 0004 00AF     		add	r7, sp, #0
 325              	.LCFI24:
 326              		.cfi_def_cfa_register 7
 327 0006 7860     		str	r0, [r7, #4]
 328              	.LBB46:
 329              		.loc 3 35 7
 330 0008 054A     		ldr	r2, .L15
 331 000a 7B68     		ldr	r3, [r7, #4]
 332 000c 1A60     		str	r2, [r3]
 333 000e 7B68     		ldr	r3, [r7, #4]
 334 0010 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 11


 335 0012 FFF7FEFF 		bl	_ZN8touchgfx4FontD2Ev
 336              	.LBE46:
 337 0016 7B68     		ldr	r3, [r7, #4]
 338 0018 1846     		mov	r0, r3
 339 001a 0837     		adds	r7, r7, #8
 340              	.LCFI25:
 341              		.cfi_def_cfa_offset 8
 342 001c BD46     		mov	sp, r7
 343              	.LCFI26:
 344              		.cfi_def_cfa_register 13
 345              		@ sp needed
 346 001e 80BD     		pop	{r7, pc}
 347              	.L16:
 348              		.align	2
 349              	.L15:
 350 0020 08000000 		.word	_ZTVN8touchgfx9ConstFontE+8
 351              		.cfi_endproc
 352              	.LFE142:
 354              		.weak	_ZN8touchgfx9ConstFontD1Ev
 355              		.thumb_set _ZN8touchgfx9ConstFontD1Ev,_ZN8touchgfx9ConstFontD2Ev
 356              		.section	.text._ZN8touchgfx9ConstFontD0Ev,"axG",%progbits,_ZN8touchgfx9ConstFontD5Ev,comdat
 357              		.align	1
 358              		.weak	_ZN8touchgfx9ConstFontD0Ev
 359              		.syntax unified
 360              		.thumb
 361              		.thumb_func
 362              		.fpu fpv4-sp-d16
 364              	_ZN8touchgfx9ConstFontD0Ev:
 365              	.LFB144:
 366              		.loc 3 35 7
 367              		.cfi_startproc
 368              		@ args = 0, pretend = 0, frame = 8
 369              		@ frame_needed = 1, uses_anonymous_args = 0
 370 0000 80B5     		push	{r7, lr}
 371              	.LCFI27:
 372              		.cfi_def_cfa_offset 8
 373              		.cfi_offset 7, -8
 374              		.cfi_offset 14, -4
 375 0002 82B0     		sub	sp, sp, #8
 376              	.LCFI28:
 377              		.cfi_def_cfa_offset 16
 378 0004 00AF     		add	r7, sp, #0
 379              	.LCFI29:
 380              		.cfi_def_cfa_register 7
 381 0006 7860     		str	r0, [r7, #4]
 382              		.loc 3 35 7
 383 0008 7868     		ldr	r0, [r7, #4]
 384 000a FFF7FEFF 		bl	_ZN8touchgfx9ConstFontD1Ev
 385 000e 1821     		movs	r1, #24
 386 0010 7868     		ldr	r0, [r7, #4]
 387 0012 FFF7FEFF 		bl	_ZdlPvj
 388 0016 7B68     		ldr	r3, [r7, #4]
 389 0018 1846     		mov	r0, r3
 390 001a 0837     		adds	r7, r7, #8
 391              	.LCFI30:
 392              		.cfi_def_cfa_offset 8
 393 001c BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 12


 394              	.LCFI31:
 395              		.cfi_def_cfa_register 13
 396              		@ sp needed
 397 001e 80BD     		pop	{r7, pc}
 398              		.cfi_endproc
 399              	.LFE144:
 401              		.section	.text._ZN8touchgfx13GeneratedFontD2Ev,"axG",%progbits,_ZN8touchgfx13GeneratedFontD5Ev,com
 402              		.align	1
 403              		.weak	_ZN8touchgfx13GeneratedFontD2Ev
 404              		.syntax unified
 405              		.thumb
 406              		.thumb_func
 407              		.fpu fpv4-sp-d16
 409              	_ZN8touchgfx13GeneratedFontD2Ev:
 410              	.LFB149:
 411              		.file 4 "Src/generated/fonts/include/fonts/GeneratedFont.hpp"
   1:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** 
   4:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** #ifndef TOUCHGFX_GENERATEDFONT_HPP
   5:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** #define TOUCHGFX_GENERATEDFONT_HPP
   6:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** 
   7:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** #include <touchgfx/ConstFont.hpp>
   8:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** 
   9:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** namespace touchgfx
  10:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** {
  11:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** /**
  12:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****  * An GeneratedFont has both glyph table and glyph data placed in a flash which
  13:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****  * supports random access read (i.e. not a NAND flash)
  14:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****  *
  15:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****  * @see ConstFont
  16:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****  */
  17:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** class GeneratedFont : public ConstFont
 412              		.loc 4 17 7
 413              		.cfi_startproc
 414              		@ args = 0, pretend = 0, frame = 8
 415              		@ frame_needed = 1, uses_anonymous_args = 0
 416 0000 80B5     		push	{r7, lr}
 417              	.LCFI32:
 418              		.cfi_def_cfa_offset 8
 419              		.cfi_offset 7, -8
 420              		.cfi_offset 14, -4
 421 0002 82B0     		sub	sp, sp, #8
 422              	.LCFI33:
 423              		.cfi_def_cfa_offset 16
 424 0004 00AF     		add	r7, sp, #0
 425              	.LCFI34:
 426              		.cfi_def_cfa_register 7
 427 0006 7860     		str	r0, [r7, #4]
 428              	.LBB47:
 429              		.loc 4 17 7
 430 0008 054A     		ldr	r2, .L21
 431 000a 7B68     		ldr	r3, [r7, #4]
 432 000c 1A60     		str	r2, [r3]
 433 000e 7B68     		ldr	r3, [r7, #4]
 434 0010 1846     		mov	r0, r3
 435 0012 FFF7FEFF 		bl	_ZN8touchgfx9ConstFontD2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 13


 436              	.LBE47:
 437 0016 7B68     		ldr	r3, [r7, #4]
 438 0018 1846     		mov	r0, r3
 439 001a 0837     		adds	r7, r7, #8
 440              	.LCFI35:
 441              		.cfi_def_cfa_offset 8
 442 001c BD46     		mov	sp, r7
 443              	.LCFI36:
 444              		.cfi_def_cfa_register 13
 445              		@ sp needed
 446 001e 80BD     		pop	{r7, pc}
 447              	.L22:
 448              		.align	2
 449              	.L21:
 450 0020 08000000 		.word	_ZTVN8touchgfx13GeneratedFontE+8
 451              		.cfi_endproc
 452              	.LFE149:
 454              		.weak	_ZN8touchgfx13GeneratedFontD1Ev
 455              		.thumb_set _ZN8touchgfx13GeneratedFontD1Ev,_ZN8touchgfx13GeneratedFontD2Ev
 456              		.section	.text._ZN8touchgfx13GeneratedFontD0Ev,"axG",%progbits,_ZN8touchgfx13GeneratedFontD5Ev,com
 457              		.align	1
 458              		.weak	_ZN8touchgfx13GeneratedFontD0Ev
 459              		.syntax unified
 460              		.thumb
 461              		.thumb_func
 462              		.fpu fpv4-sp-d16
 464              	_ZN8touchgfx13GeneratedFontD0Ev:
 465              	.LFB151:
 466              		.loc 4 17 7
 467              		.cfi_startproc
 468              		@ args = 0, pretend = 0, frame = 8
 469              		@ frame_needed = 1, uses_anonymous_args = 0
 470 0000 80B5     		push	{r7, lr}
 471              	.LCFI37:
 472              		.cfi_def_cfa_offset 8
 473              		.cfi_offset 7, -8
 474              		.cfi_offset 14, -4
 475 0002 82B0     		sub	sp, sp, #8
 476              	.LCFI38:
 477              		.cfi_def_cfa_offset 16
 478 0004 00AF     		add	r7, sp, #0
 479              	.LCFI39:
 480              		.cfi_def_cfa_register 7
 481 0006 7860     		str	r0, [r7, #4]
 482              		.loc 4 17 7
 483 0008 7868     		ldr	r0, [r7, #4]
 484 000a FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontD1Ev
 485 000e 2821     		movs	r1, #40
 486 0010 7868     		ldr	r0, [r7, #4]
 487 0012 FFF7FEFF 		bl	_ZdlPvj
 488 0016 7B68     		ldr	r3, [r7, #4]
 489 0018 1846     		mov	r0, r3
 490 001a 0837     		adds	r7, r7, #8
 491              	.LCFI40:
 492              		.cfi_def_cfa_offset 8
 493 001c BD46     		mov	sp, r7
 494              	.LCFI41:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 14


 495              		.cfi_def_cfa_register 13
 496              		@ sp needed
 497 001e 80BD     		pop	{r7, pc}
 498              		.cfi_endproc
 499              	.LFE151:
 501              		.section	.text._ZN8touchgfx10CachedFontC2EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFo
 502              		.align	1
 503              		.weak	_ZN8touchgfx10CachedFontC2EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE
 504              		.syntax unified
 505              		.thumb
 506              		.thumb_func
 507              		.fpu fpv4-sp-d16
 509              	_ZN8touchgfx10CachedFontC2EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE:
 510              	.LFB160:
 511              		.file 5 "Src/generated/fonts/include/fonts/CachedFont.hpp"
   1:Src/generated/fonts/include/fonts/CachedFont.hpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/include/fonts/CachedFont.hpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
   4:Src/generated/fonts/include/fonts/CachedFont.hpp **** #ifndef TOUCHGFX_CACHEDFONT_HPP
   5:Src/generated/fonts/include/fonts/CachedFont.hpp **** #define TOUCHGFX_CACHEDFONT_HPP
   6:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
   7:Src/generated/fonts/include/fonts/CachedFont.hpp **** #include <fonts/FontCache.hpp>
   8:Src/generated/fonts/include/fonts/CachedFont.hpp **** #include <fonts/GeneratedFont.hpp>
   9:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  10:Src/generated/fonts/include/fonts/CachedFont.hpp **** namespace touchgfx
  11:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** class CachedFont : public GeneratedFont
  13:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
  14:Src/generated/fonts/include/fonts/CachedFont.hpp **** public:
  15:Src/generated/fonts/include/fonts/CachedFont.hpp ****     CachedFont(const struct touchgfx::BinaryFontData* data, FontId id, FontCache* _cache, const Gen
 512              		.loc 5 15 5
 513              		.cfi_startproc
 514              		@ args = 4, pretend = 0, frame = 32
 515              		@ frame_needed = 1, uses_anonymous_args = 0
 516 0000 F0B5     		push	{r4, r5, r6, r7, lr}
 517              	.LCFI42:
 518              		.cfi_def_cfa_offset 20
 519              		.cfi_offset 4, -20
 520              		.cfi_offset 5, -16
 521              		.cfi_offset 6, -12
 522              		.cfi_offset 7, -8
 523              		.cfi_offset 14, -4
 524 0002 95B0     		sub	sp, sp, #84
 525              	.LCFI43:
 526              		.cfi_def_cfa_offset 104
 527 0004 0CAF     		add	r7, sp, #48
 528              	.LCFI44:
 529              		.cfi_def_cfa 7, 56
 530 0006 F861     		str	r0, [r7, #28]
 531 0008 B961     		str	r1, [r7, #24]
 532 000a 3B61     		str	r3, [r7, #16]
 533 000c 1346     		mov	r3, r2	@ movhi
 534 000e FB82     		strh	r3, [r7, #22]	@ movhi
 535              	.LBB48:
  16:Src/generated/fonts/include/fonts/CachedFont.hpp ****         : GeneratedFont(0, //GlyphNode*
  17:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->numberOfGlyphs,
  18:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->height,
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 15


  19:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->pixBelowBase,
  20:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->bitsPerPixel,
  21:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->byteAlignRow,
  22:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->maxLeft,
  23:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->maxRight,
  24:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         0, //glyphDataPointer
  25:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         0, //Kerning table not used for cached font
  26:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->fallbackChar,
  27:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->ellipsisChar,
  28:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         0,  //gsubTablePointer
  29:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         0), //contextualFormsPointer
  30:Src/generated/fonts/include/fonts/CachedFont.hpp ****           fontId(id),
  31:Src/generated/fonts/include/fonts/CachedFont.hpp ****           cache(_cache),
  32:Src/generated/fonts/include/fonts/CachedFont.hpp ****           flashFont(_flashFont)
 536              		.loc 5 32 31
 537 0010 FD69     		ldr	r5, [r7, #28]
  17:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->height,
 538              		.loc 5 17 31
 539 0012 BB69     		ldr	r3, [r7, #24]
 540 0014 9E8B     		ldrh	r6, [r3, #28]
  18:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->pixBelowBase,
 541              		.loc 5 18 31
 542 0016 BB69     		ldr	r3, [r7, #24]
 543 0018 B3F81EC0 		ldrh	ip, [r3, #30]
  19:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->bitsPerPixel,
 544              		.loc 5 19 31
 545 001c BB69     		ldr	r3, [r7, #24]
 546 001e 93F82030 		ldrb	r3, [r3, #32]	@ zero_extendqisi2
 547 0022 FB60     		str	r3, [r7, #12]
  20:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->byteAlignRow,
 548              		.loc 5 20 31
 549 0024 BA69     		ldr	r2, [r7, #24]
 550 0026 92F82120 		ldrb	r2, [r2, #33]
 551 002a C2F30602 		ubfx	r2, r2, #0, #7
 552 002e D2B2     		uxtb	r2, r2
 553              		.loc 5 32 31
 554 0030 BA60     		str	r2, [r7, #8]
  21:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->maxLeft,
 555              		.loc 5 21 31
 556 0032 BA69     		ldr	r2, [r7, #24]
 557 0034 92F82120 		ldrb	r2, [r2, #33]
 558 0038 C2F3C012 		ubfx	r2, r2, #7, #1
 559 003c D2B2     		uxtb	r2, r2
 560              		.loc 5 32 31
 561 003e 7A60     		str	r2, [r7, #4]
  22:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->maxRight,
 562              		.loc 5 22 31
 563 0040 BA69     		ldr	r2, [r7, #24]
 564 0042 92F82220 		ldrb	r2, [r2, #34]	@ zero_extendqisi2
  23:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         0, //glyphDataPointer
 565              		.loc 5 23 31
 566 0046 B969     		ldr	r1, [r7, #24]
 567 0048 91F82310 		ldrb	r1, [r1, #35]	@ zero_extendqisi2
  26:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->ellipsisChar,
 568              		.loc 5 26 31
 569 004c B869     		ldr	r0, [r7, #24]
 570 004e 808C     		ldrh	r0, [r0, #36]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 16


  27:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         0,  //gsubTablePointer
 571              		.loc 5 27 31
 572 0050 BC69     		ldr	r4, [r7, #24]
 573 0052 E48C     		ldrh	r4, [r4, #38]
 574              		.loc 5 32 31
 575 0054 4FF0000E 		mov	lr, #0
 576 0058 7346     		mov	r3, lr
 577 005a 0A93     		str	r3, [sp, #40]
 578 005c 4FF0000E 		mov	lr, #0
 579 0060 7346     		mov	r3, lr
 580 0062 0993     		str	r3, [sp, #36]
 581 0064 0894     		str	r4, [sp, #32]
 582 0066 0790     		str	r0, [sp, #28]
 583 0068 0020     		movs	r0, #0
 584 006a 0690     		str	r0, [sp, #24]
 585 006c 0020     		movs	r0, #0
 586 006e 0590     		str	r0, [sp, #20]
 587 0070 0491     		str	r1, [sp, #16]
 588 0072 0392     		str	r2, [sp, #12]
 589 0074 7B68     		ldr	r3, [r7, #4]
 590 0076 0293     		str	r3, [sp, #8]
 591 0078 BB68     		ldr	r3, [r7, #8]
 592 007a 0193     		str	r3, [sp, #4]
 593 007c FB68     		ldr	r3, [r7, #12]
 594 007e 0093     		str	r3, [sp]
 595 0080 6346     		mov	r3, ip
 596 0082 3246     		mov	r2, r6
 597 0084 0021     		movs	r1, #0
 598 0086 2846     		mov	r0, r5
 599 0088 FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontCo
 600 008c 084A     		ldr	r2, .L27
 601 008e FB69     		ldr	r3, [r7, #28]
 602 0090 1A60     		str	r2, [r3]
 603 0092 FB69     		ldr	r3, [r7, #28]
 604 0094 FA8A     		ldrh	r2, [r7, #22]	@ movhi
 605 0096 1A85     		strh	r2, [r3, #40]	@ movhi
 606 0098 FB69     		ldr	r3, [r7, #28]
 607 009a 3A69     		ldr	r2, [r7, #16]
 608 009c DA62     		str	r2, [r3, #44]
 609 009e FB69     		ldr	r3, [r7, #28]
 610 00a0 BA6B     		ldr	r2, [r7, #56]
 611 00a2 1A63     		str	r2, [r3, #48]
 612              	.LBE48:
  33:Src/generated/fonts/include/fonts/CachedFont.hpp ****     {
  34:Src/generated/fonts/include/fonts/CachedFont.hpp ****     }
 613              		.loc 5 34 5
 614 00a4 FB69     		ldr	r3, [r7, #28]
 615 00a6 1846     		mov	r0, r3
 616 00a8 2437     		adds	r7, r7, #36
 617              	.LCFI45:
 618              		.cfi_def_cfa_offset 20
 619 00aa BD46     		mov	sp, r7
 620              	.LCFI46:
 621              		.cfi_def_cfa_register 13
 622              		@ sp needed
 623 00ac F0BD     		pop	{r4, r5, r6, r7, pc}
 624              	.L28:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 17


 625 00ae 00BF     		.align	2
 626              	.L27:
 627 00b0 08000000 		.word	_ZTVN8touchgfx10CachedFontE+8
 628              		.cfi_endproc
 629              	.LFE160:
 631              		.weak	_ZN8touchgfx10CachedFontC1EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE
 632              		.thumb_set _ZN8touchgfx10CachedFontC1EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE,
 633              		.section	.text._ZN8touchgfx9FontCacheC2Ev,"ax",%progbits
 634              		.align	1
 635              		.global	_ZN8touchgfx9FontCacheC2Ev
 636              		.syntax unified
 637              		.thumb
 638              		.thumb_func
 639              		.fpu fpv4-sp-d16
 641              	_ZN8touchgfx9FontCacheC2Ev:
 642              	.LFB171:
 643              		.file 6 "Src/generated/fonts/src/FontCache.cpp"
   1:Src/generated/fonts/src/FontCache.cpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/src/FontCache.cpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/src/FontCache.cpp **** 
   4:Src/generated/fonts/src/FontCache.cpp **** #include <cstring>
   5:Src/generated/fonts/src/FontCache.cpp **** #include <touchgfx/TextProvider.hpp>
   6:Src/generated/fonts/src/FontCache.cpp **** #include <touchgfx/Utils.hpp>
   7:Src/generated/fonts/src/FontCache.cpp **** #include <fonts/CachedFont.hpp>
   8:Src/generated/fonts/src/FontCache.cpp **** #include <fonts/FontCache.hpp>
   9:Src/generated/fonts/src/FontCache.cpp **** #include <texts/TypedTextDatabase.hpp>
  10:Src/generated/fonts/src/FontCache.cpp **** 
  11:Src/generated/fonts/src/FontCache.cpp **** namespace touchgfx
  12:Src/generated/fonts/src/FontCache.cpp **** {
  13:Src/generated/fonts/src/FontCache.cpp **** FontCache::FontCache()
 644              		.loc 6 13 1
 645              		.cfi_startproc
 646              		@ args = 0, pretend = 0, frame = 8
 647              		@ frame_needed = 1, uses_anonymous_args = 0
 648              		@ link register save eliminated.
 649 0000 80B4     		push	{r7}
 650              	.LCFI47:
 651              		.cfi_def_cfa_offset 4
 652              		.cfi_offset 7, -4
 653 0002 83B0     		sub	sp, sp, #12
 654              	.LCFI48:
 655              		.cfi_def_cfa_offset 16
 656 0004 00AF     		add	r7, sp, #0
 657              	.LCFI49:
 658              		.cfi_def_cfa_register 7
 659 0006 7860     		str	r0, [r7, #4]
 660              	.LBB49:
  14:Src/generated/fonts/src/FontCache.cpp ****     : memorySize(0), memory(0), top(0), gsubStart(0), reader(0)
 661              		.loc 6 14 63
 662 0008 7B68     		ldr	r3, [r7, #4]
 663 000a 0022     		movs	r2, #0
 664 000c 9A61     		str	r2, [r3, #24]
 665 000e 7B68     		ldr	r3, [r7, #4]
 666 0010 0022     		movs	r2, #0
 667 0012 DA61     		str	r2, [r3, #28]
 668 0014 7B68     		ldr	r3, [r7, #4]
 669 0016 0022     		movs	r2, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 18


 670 0018 1A62     		str	r2, [r3, #32]
 671 001a 7B68     		ldr	r3, [r7, #4]
 672 001c 0022     		movs	r2, #0
 673 001e 5A62     		str	r2, [r3, #36]
 674 0020 7B68     		ldr	r3, [r7, #4]
 675 0022 0022     		movs	r2, #0
 676 0024 9A62     		str	r2, [r3, #40]
 677              	.LBE49:
  15:Src/generated/fonts/src/FontCache.cpp **** {
  16:Src/generated/fonts/src/FontCache.cpp **** }
 678              		.loc 6 16 1
 679 0026 7B68     		ldr	r3, [r7, #4]
 680 0028 1846     		mov	r0, r3
 681 002a 0C37     		adds	r7, r7, #12
 682              	.LCFI50:
 683              		.cfi_def_cfa_offset 4
 684 002c BD46     		mov	sp, r7
 685              	.LCFI51:
 686              		.cfi_def_cfa_register 13
 687              		@ sp needed
 688 002e 5DF8047B 		ldr	r7, [sp], #4
 689              	.LCFI52:
 690              		.cfi_restore 7
 691              		.cfi_def_cfa_offset 0
 692 0032 7047     		bx	lr
 693              		.cfi_endproc
 694              	.LFE171:
 696              		.global	_ZN8touchgfx9FontCacheC1Ev
 697              		.thumb_set _ZN8touchgfx9FontCacheC1Ev,_ZN8touchgfx9FontCacheC2Ev
 698              		.section	.text._ZN8touchgfx9FontCache5clearEb,"ax",%progbits
 699              		.align	1
 700              		.global	_ZN8touchgfx9FontCache5clearEb
 701              		.syntax unified
 702              		.thumb
 703              		.thumb_func
 704              		.fpu fpv4-sp-d16
 706              	_ZN8touchgfx9FontCache5clearEb:
 707              	.LFB173:
  17:Src/generated/fonts/src/FontCache.cpp **** 
  18:Src/generated/fonts/src/FontCache.cpp **** void FontCache::clear(bool keepGsubOrContextTable /* = false */)
  19:Src/generated/fonts/src/FontCache.cpp **** {
 708              		.loc 6 19 1
 709              		.cfi_startproc
 710              		@ args = 0, pretend = 0, frame = 8
 711              		@ frame_needed = 1, uses_anonymous_args = 0
 712 0000 80B5     		push	{r7, lr}
 713              	.LCFI53:
 714              		.cfi_def_cfa_offset 8
 715              		.cfi_offset 7, -8
 716              		.cfi_offset 14, -4
 717 0002 82B0     		sub	sp, sp, #8
 718              	.LCFI54:
 719              		.cfi_def_cfa_offset 16
 720 0004 00AF     		add	r7, sp, #0
 721              	.LCFI55:
 722              		.cfi_def_cfa_register 7
 723 0006 7860     		str	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 19


 724 0008 0B46     		mov	r3, r1
 725 000a FB70     		strb	r3, [r7, #3]
  20:Src/generated/fonts/src/FontCache.cpp ****     memset(fontTable, 0, sizeof(fontTable));
 726              		.loc 6 20 12
 727 000c 7B68     		ldr	r3, [r7, #4]
 728              		.loc 6 20 11
 729 000e 1822     		movs	r2, #24
 730 0010 0021     		movs	r1, #0
 731 0012 1846     		mov	r0, r3
 732 0014 FFF7FEFF 		bl	_ZN8touchgfx6memsetEPvhm
  21:Src/generated/fonts/src/FontCache.cpp **** 
  22:Src/generated/fonts/src/FontCache.cpp ****     //top is beginning of memory, no glyphs are cached yet
  23:Src/generated/fonts/src/FontCache.cpp ****     top = memory;
 733              		.loc 6 23 11
 734 0018 7B68     		ldr	r3, [r7, #4]
 735 001a DA69     		ldr	r2, [r3, #28]
 736              		.loc 6 23 9
 737 001c 7B68     		ldr	r3, [r7, #4]
 738 001e 1A62     		str	r2, [r3, #32]
  24:Src/generated/fonts/src/FontCache.cpp **** 
  25:Src/generated/fonts/src/FontCache.cpp ****     if (!keepGsubOrContextTable)
 739              		.loc 6 25 9
 740 0020 FB78     		ldrb	r3, [r7, #3]
 741 0022 83F00103 		eor	r3, r3, #1
 742 0026 DBB2     		uxtb	r3, r3
 743              		.loc 6 25 5
 744 0028 002B     		cmp	r3, #0
 745 002a 0DD0     		beq	.L33
  26:Src/generated/fonts/src/FontCache.cpp ****     {
  27:Src/generated/fonts/src/FontCache.cpp ****         //gsubStart points to end of memory (nothing loaded yet)
  28:Src/generated/fonts/src/FontCache.cpp ****         gsubStart = memory + memorySize;
 746              		.loc 6 28 21
 747 002c 7B68     		ldr	r3, [r7, #4]
 748 002e DA69     		ldr	r2, [r3, #28]
 749              		.loc 6 28 30
 750 0030 7B68     		ldr	r3, [r7, #4]
 751 0032 9B69     		ldr	r3, [r3, #24]
 752              		.loc 6 28 28
 753 0034 1A44     		add	r2, r2, r3
 754              		.loc 6 28 19
 755 0036 7B68     		ldr	r3, [r7, #4]
 756 0038 5A62     		str	r2, [r3, #36]
  29:Src/generated/fonts/src/FontCache.cpp **** 
  30:Src/generated/fonts/src/FontCache.cpp ****         //round down to 32bit address
  31:Src/generated/fonts/src/FontCache.cpp ****         gsubStart = (uint8_t*)((uintptr_t)gsubStart & ~(uintptr_t)0x3);
 757              		.loc 6 31 43
 758 003a 7B68     		ldr	r3, [r7, #4]
 759 003c 5B6A     		ldr	r3, [r3, #36]
 760              		.loc 6 31 53
 761 003e 23F00303 		bic	r3, r3, #3
 762              		.loc 6 31 19
 763 0042 1A46     		mov	r2, r3
 764 0044 7B68     		ldr	r3, [r7, #4]
 765 0046 5A62     		str	r2, [r3, #36]
 766              	.L33:
  32:Src/generated/fonts/src/FontCache.cpp ****     }
  33:Src/generated/fonts/src/FontCache.cpp **** }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 20


 767              		.loc 6 33 1
 768 0048 00BF     		nop
 769 004a 0837     		adds	r7, r7, #8
 770              	.LCFI56:
 771              		.cfi_def_cfa_offset 8
 772 004c BD46     		mov	sp, r7
 773              	.LCFI57:
 774              		.cfi_def_cfa_register 13
 775              		@ sp needed
 776 004e 80BD     		pop	{r7, pc}
 777              		.cfi_endproc
 778              	.LFE173:
 780              		.section	.text._ZN8touchgfx9FontCache9setMemoryEPhm,"ax",%progbits
 781              		.align	1
 782              		.global	_ZN8touchgfx9FontCache9setMemoryEPhm
 783              		.syntax unified
 784              		.thumb
 785              		.thumb_func
 786              		.fpu fpv4-sp-d16
 788              	_ZN8touchgfx9FontCache9setMemoryEPhm:
 789              	.LFB174:
  34:Src/generated/fonts/src/FontCache.cpp **** 
  35:Src/generated/fonts/src/FontCache.cpp **** void FontCache::setMemory(uint8_t* _memory, uint32_t size)
  36:Src/generated/fonts/src/FontCache.cpp **** {
 790              		.loc 6 36 1
 791              		.cfi_startproc
 792              		@ args = 0, pretend = 0, frame = 16
 793              		@ frame_needed = 1, uses_anonymous_args = 0
 794 0000 80B5     		push	{r7, lr}
 795              	.LCFI58:
 796              		.cfi_def_cfa_offset 8
 797              		.cfi_offset 7, -8
 798              		.cfi_offset 14, -4
 799 0002 84B0     		sub	sp, sp, #16
 800              	.LCFI59:
 801              		.cfi_def_cfa_offset 24
 802 0004 00AF     		add	r7, sp, #0
 803              	.LCFI60:
 804              		.cfi_def_cfa_register 7
 805 0006 F860     		str	r0, [r7, #12]
 806 0008 B960     		str	r1, [r7, #8]
 807 000a 7A60     		str	r2, [r7, #4]
  37:Src/generated/fonts/src/FontCache.cpp ****     memory = _memory;
 808              		.loc 6 37 12
 809 000c FB68     		ldr	r3, [r7, #12]
 810 000e BA68     		ldr	r2, [r7, #8]
 811 0010 DA61     		str	r2, [r3, #28]
  38:Src/generated/fonts/src/FontCache.cpp ****     memorySize = size;
 812              		.loc 6 38 16
 813 0012 FB68     		ldr	r3, [r7, #12]
 814 0014 7A68     		ldr	r2, [r7, #4]
 815 0016 9A61     		str	r2, [r3, #24]
  39:Src/generated/fonts/src/FontCache.cpp **** 
  40:Src/generated/fonts/src/FontCache.cpp ****     clear();
 816              		.loc 6 40 10
 817 0018 0021     		movs	r1, #0
 818 001a F868     		ldr	r0, [r7, #12]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 21


 819 001c FFF7FEFF 		bl	_ZN8touchgfx9FontCache5clearEb
  41:Src/generated/fonts/src/FontCache.cpp **** }
 820              		.loc 6 41 1
 821 0020 00BF     		nop
 822 0022 1037     		adds	r7, r7, #16
 823              	.LCFI61:
 824              		.cfi_def_cfa_offset 8
 825 0024 BD46     		mov	sp, r7
 826              	.LCFI62:
 827              		.cfi_def_cfa_register 13
 828              		@ sp needed
 829 0026 80BD     		pop	{r7, pc}
 830              		.cfi_endproc
 831              	.LFE174:
 833              		.section	.text._ZN8touchgfx9FontCache9setReaderEPNS_14FontDataReaderE,"ax",%progbits
 834              		.align	1
 835              		.global	_ZN8touchgfx9FontCache9setReaderEPNS_14FontDataReaderE
 836              		.syntax unified
 837              		.thumb
 838              		.thumb_func
 839              		.fpu fpv4-sp-d16
 841              	_ZN8touchgfx9FontCache9setReaderEPNS_14FontDataReaderE:
 842              	.LFB175:
  42:Src/generated/fonts/src/FontCache.cpp **** 
  43:Src/generated/fonts/src/FontCache.cpp **** void FontCache::setReader(FontDataReader* _reader)
  44:Src/generated/fonts/src/FontCache.cpp **** {
 843              		.loc 6 44 1
 844              		.cfi_startproc
 845              		@ args = 0, pretend = 0, frame = 8
 846              		@ frame_needed = 1, uses_anonymous_args = 0
 847              		@ link register save eliminated.
 848 0000 80B4     		push	{r7}
 849              	.LCFI63:
 850              		.cfi_def_cfa_offset 4
 851              		.cfi_offset 7, -4
 852 0002 83B0     		sub	sp, sp, #12
 853              	.LCFI64:
 854              		.cfi_def_cfa_offset 16
 855 0004 00AF     		add	r7, sp, #0
 856              	.LCFI65:
 857              		.cfi_def_cfa_register 7
 858 0006 7860     		str	r0, [r7, #4]
 859 0008 3960     		str	r1, [r7]
  45:Src/generated/fonts/src/FontCache.cpp ****     reader = _reader;
 860              		.loc 6 45 12
 861 000a 7B68     		ldr	r3, [r7, #4]
 862 000c 3A68     		ldr	r2, [r7]
 863 000e 9A62     		str	r2, [r3, #40]
  46:Src/generated/fonts/src/FontCache.cpp **** }
 864              		.loc 6 46 1
 865 0010 00BF     		nop
 866 0012 0C37     		adds	r7, r7, #12
 867              	.LCFI66:
 868              		.cfi_def_cfa_offset 4
 869 0014 BD46     		mov	sp, r7
 870              	.LCFI67:
 871              		.cfi_def_cfa_register 13
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 22


 872              		@ sp needed
 873 0016 5DF8047B 		ldr	r7, [sp], #4
 874              	.LCFI68:
 875              		.cfi_restore 7
 876              		.cfi_def_cfa_offset 0
 877 001a 7047     		bx	lr
 878              		.cfi_endproc
 879              	.LFE175:
 881              		.section	.text._ZNK8touchgfx9FontCache8getGlyphEtt,"ax",%progbits
 882              		.align	1
 883              		.global	_ZNK8touchgfx9FontCache8getGlyphEtt
 884              		.syntax unified
 885              		.thumb
 886              		.thumb_func
 887              		.fpu fpv4-sp-d16
 889              	_ZNK8touchgfx9FontCache8getGlyphEtt:
 890              	.LFB176:
  47:Src/generated/fonts/src/FontCache.cpp **** 
  48:Src/generated/fonts/src/FontCache.cpp **** const GlyphNode* FontCache::getGlyph(Unicode::UnicodeChar unicode, FontId font) const
  49:Src/generated/fonts/src/FontCache.cpp **** {
 891              		.loc 6 49 1
 892              		.cfi_startproc
 893              		@ args = 0, pretend = 0, frame = 16
 894              		@ frame_needed = 1, uses_anonymous_args = 0
 895              		@ link register save eliminated.
 896 0000 80B4     		push	{r7}
 897              	.LCFI69:
 898              		.cfi_def_cfa_offset 4
 899              		.cfi_offset 7, -4
 900 0002 85B0     		sub	sp, sp, #20
 901              	.LCFI70:
 902              		.cfi_def_cfa_offset 24
 903 0004 00AF     		add	r7, sp, #0
 904              	.LCFI71:
 905              		.cfi_def_cfa_register 7
 906 0006 7860     		str	r0, [r7, #4]
 907 0008 0B46     		mov	r3, r1
 908 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 909 000c 1346     		mov	r3, r2	@ movhi
 910 000e 3B80     		strh	r3, [r7]	@ movhi
  50:Src/generated/fonts/src/FontCache.cpp ****     GlyphNode* g = (GlyphNode*)fontTable[font].first;
 911              		.loc 6 50 42
 912 0010 3A88     		ldrh	r2, [r7]
 913              		.loc 6 50 16
 914 0012 7B68     		ldr	r3, [r7, #4]
 915 0014 53F83230 		ldr	r3, [r3, r2, lsl #3]
 916 0018 FB60     		str	r3, [r7, #12]
 917              	.L40:
  51:Src/generated/fonts/src/FontCache.cpp ****     while (g)
 918              		.loc 6 51 12
 919 001a FB68     		ldr	r3, [r7, #12]
 920 001c 002B     		cmp	r3, #0
 921 001e 0DD0     		beq	.L37
 922              	.LBB50:
  52:Src/generated/fonts/src/FontCache.cpp ****     {
  53:Src/generated/fonts/src/FontCache.cpp ****         if (g->unicode == unicode)
 923              		.loc 6 53 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 23


 924 0020 FB68     		ldr	r3, [r7, #12]
 925 0022 9B88     		ldrh	r3, [r3, #4]
 926              		.loc 6 53 9
 927 0024 7A88     		ldrh	r2, [r7, #2]
 928 0026 9A42     		cmp	r2, r3
 929 0028 01D1     		bne	.L38
  54:Src/generated/fonts/src/FontCache.cpp ****         {
  55:Src/generated/fonts/src/FontCache.cpp ****             return g;
 930              		.loc 6 55 20
 931 002a FB68     		ldr	r3, [r7, #12]
 932 002c 07E0     		b	.L39
 933              	.L38:
  56:Src/generated/fonts/src/FontCache.cpp ****         }
  57:Src/generated/fonts/src/FontCache.cpp ****         GlyphNode** next = (GlyphNode**)((uint8_t*)g + SizeGlyphNode);
 934              		.loc 6 57 21
 935 002e FB68     		ldr	r3, [r7, #12]
 936 0030 1033     		adds	r3, r3, #16
 937 0032 BB60     		str	r3, [r7, #8]
  58:Src/generated/fonts/src/FontCache.cpp ****         g = *next;
 938              		.loc 6 58 11
 939 0034 BB68     		ldr	r3, [r7, #8]
 940 0036 1B68     		ldr	r3, [r3]
 941 0038 FB60     		str	r3, [r7, #12]
 942              	.LBE50:
  51:Src/generated/fonts/src/FontCache.cpp ****     {
 943              		.loc 6 51 5
 944 003a EEE7     		b	.L40
 945              	.L37:
  59:Src/generated/fonts/src/FontCache.cpp ****     }
  60:Src/generated/fonts/src/FontCache.cpp ****     return 0;
 946              		.loc 6 60 12
 947 003c 0023     		movs	r3, #0
 948              	.L39:
  61:Src/generated/fonts/src/FontCache.cpp **** }
 949              		.loc 6 61 1
 950 003e 1846     		mov	r0, r3
 951 0040 1437     		adds	r7, r7, #20
 952              	.LCFI72:
 953              		.cfi_def_cfa_offset 4
 954 0042 BD46     		mov	sp, r7
 955              	.LCFI73:
 956              		.cfi_def_cfa_register 13
 957              		@ sp needed
 958 0044 5DF8047B 		ldr	r7, [sp], #4
 959              	.LCFI74:
 960              		.cfi_restore 7
 961              		.cfi_def_cfa_offset 0
 962 0048 7047     		bx	lr
 963              		.cfi_endproc
 964              	.LFE176:
 966              		.section	.text._ZN8touchgfx9FontCache4openEv,"ax",%progbits
 967              		.align	1
 968              		.global	_ZN8touchgfx9FontCache4openEv
 969              		.syntax unified
 970              		.thumb
 971              		.thumb_func
 972              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 24


 974              	_ZN8touchgfx9FontCache4openEv:
 975              	.LFB177:
  62:Src/generated/fonts/src/FontCache.cpp **** 
  63:Src/generated/fonts/src/FontCache.cpp **** void FontCache::open()
  64:Src/generated/fonts/src/FontCache.cpp **** {
 976              		.loc 6 64 1
 977              		.cfi_startproc
 978              		@ args = 0, pretend = 0, frame = 8
 979              		@ frame_needed = 1, uses_anonymous_args = 0
 980 0000 80B5     		push	{r7, lr}
 981              	.LCFI75:
 982              		.cfi_def_cfa_offset 8
 983              		.cfi_offset 7, -8
 984              		.cfi_offset 14, -4
 985 0002 82B0     		sub	sp, sp, #8
 986              	.LCFI76:
 987              		.cfi_def_cfa_offset 16
 988 0004 00AF     		add	r7, sp, #0
 989              	.LCFI77:
 990              		.cfi_def_cfa_register 7
 991 0006 7860     		str	r0, [r7, #4]
  65:Src/generated/fonts/src/FontCache.cpp ****     if (reader)
 992              		.loc 6 65 9
 993 0008 7B68     		ldr	r3, [r7, #4]
 994 000a 9B6A     		ldr	r3, [r3, #40]
 995              		.loc 6 65 5
 996 000c 002B     		cmp	r3, #0
 997 000e 08D0     		beq	.L43
  66:Src/generated/fonts/src/FontCache.cpp ****     {
  67:Src/generated/fonts/src/FontCache.cpp ****         reader->open();
 998              		.loc 6 67 9
 999 0010 7B68     		ldr	r3, [r7, #4]
 1000 0012 9A6A     		ldr	r2, [r3, #40]
 1001 0014 7B68     		ldr	r3, [r7, #4]
 1002 0016 9B6A     		ldr	r3, [r3, #40]
 1003              		.loc 6 67 22
 1004 0018 1B68     		ldr	r3, [r3]
 1005 001a 0833     		adds	r3, r3, #8
 1006 001c 1B68     		ldr	r3, [r3]
 1007              		.loc 6 67 21
 1008 001e 1046     		mov	r0, r2
 1009 0020 9847     		blx	r3
 1010              	.LVL0:
 1011              	.L43:
  68:Src/generated/fonts/src/FontCache.cpp ****     }
  69:Src/generated/fonts/src/FontCache.cpp **** }
 1012              		.loc 6 69 1
 1013 0022 00BF     		nop
 1014 0024 0837     		adds	r7, r7, #8
 1015              	.LCFI78:
 1016              		.cfi_def_cfa_offset 8
 1017 0026 BD46     		mov	sp, r7
 1018              	.LCFI79:
 1019              		.cfi_def_cfa_register 13
 1020              		@ sp needed
 1021 0028 80BD     		pop	{r7, pc}
 1022              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 25


 1023              	.LFE177:
 1025              		.section	.text._ZN8touchgfx9FontCache5closeEv,"ax",%progbits
 1026              		.align	1
 1027              		.global	_ZN8touchgfx9FontCache5closeEv
 1028              		.syntax unified
 1029              		.thumb
 1030              		.thumb_func
 1031              		.fpu fpv4-sp-d16
 1033              	_ZN8touchgfx9FontCache5closeEv:
 1034              	.LFB178:
  70:Src/generated/fonts/src/FontCache.cpp **** 
  71:Src/generated/fonts/src/FontCache.cpp **** void FontCache::close()
  72:Src/generated/fonts/src/FontCache.cpp **** {
 1035              		.loc 6 72 1
 1036              		.cfi_startproc
 1037              		@ args = 0, pretend = 0, frame = 8
 1038              		@ frame_needed = 1, uses_anonymous_args = 0
 1039 0000 80B5     		push	{r7, lr}
 1040              	.LCFI80:
 1041              		.cfi_def_cfa_offset 8
 1042              		.cfi_offset 7, -8
 1043              		.cfi_offset 14, -4
 1044 0002 82B0     		sub	sp, sp, #8
 1045              	.LCFI81:
 1046              		.cfi_def_cfa_offset 16
 1047 0004 00AF     		add	r7, sp, #0
 1048              	.LCFI82:
 1049              		.cfi_def_cfa_register 7
 1050 0006 7860     		str	r0, [r7, #4]
  73:Src/generated/fonts/src/FontCache.cpp ****     if (reader)
 1051              		.loc 6 73 9
 1052 0008 7B68     		ldr	r3, [r7, #4]
 1053 000a 9B6A     		ldr	r3, [r3, #40]
 1054              		.loc 6 73 5
 1055 000c 002B     		cmp	r3, #0
 1056 000e 08D0     		beq	.L46
  74:Src/generated/fonts/src/FontCache.cpp ****     {
  75:Src/generated/fonts/src/FontCache.cpp ****         reader->close();
 1057              		.loc 6 75 9
 1058 0010 7B68     		ldr	r3, [r7, #4]
 1059 0012 9A6A     		ldr	r2, [r3, #40]
 1060 0014 7B68     		ldr	r3, [r7, #4]
 1061 0016 9B6A     		ldr	r3, [r3, #40]
 1062              		.loc 6 75 23
 1063 0018 1B68     		ldr	r3, [r3]
 1064 001a 0C33     		adds	r3, r3, #12
 1065 001c 1B68     		ldr	r3, [r3]
 1066              		.loc 6 75 22
 1067 001e 1046     		mov	r0, r2
 1068 0020 9847     		blx	r3
 1069              	.LVL1:
 1070              	.L46:
  76:Src/generated/fonts/src/FontCache.cpp ****     }
  77:Src/generated/fonts/src/FontCache.cpp **** }
 1071              		.loc 6 77 1
 1072 0022 00BF     		nop
 1073 0024 0837     		adds	r7, r7, #8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 26


 1074              	.LCFI83:
 1075              		.cfi_def_cfa_offset 8
 1076 0026 BD46     		mov	sp, r7
 1077              	.LCFI84:
 1078              		.cfi_def_cfa_register 13
 1079              		@ sp needed
 1080 0028 80BD     		pop	{r7, pc}
 1081              		.cfi_endproc
 1082              	.LFE178:
 1084              		.section	.text._ZN8touchgfx4FontaSERKS0_,"axG",%progbits,_ZN8touchgfx4FontaSERKS0_,comdat
 1085              		.align	1
 1086              		.weak	_ZN8touchgfx4FontaSERKS0_
 1087              		.syntax unified
 1088              		.thumb
 1089              		.thumb_func
 1090              		.fpu fpv4-sp-d16
 1092              	_ZN8touchgfx4FontaSERKS0_:
 1093              	.LFB183:
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
 1094              		.loc 1 163 7
 1095              		.cfi_startproc
 1096              		@ args = 0, pretend = 0, frame = 8
 1097              		@ frame_needed = 1, uses_anonymous_args = 0
 1098              		@ link register save eliminated.
 1099 0000 80B4     		push	{r7}
 1100              	.LCFI85:
 1101              		.cfi_def_cfa_offset 4
 1102              		.cfi_offset 7, -4
 1103 0002 83B0     		sub	sp, sp, #12
 1104              	.LCFI86:
 1105              		.cfi_def_cfa_offset 16
 1106 0004 00AF     		add	r7, sp, #0
 1107              	.LCFI87:
 1108              		.cfi_def_cfa_register 7
 1109 0006 7860     		str	r0, [r7, #4]
 1110 0008 3960     		str	r1, [r7]
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
 1111              		.loc 1 163 7
 1112 000a 3B68     		ldr	r3, [r7]
 1113 000c 9A88     		ldrh	r2, [r3, #4]
 1114 000e 7B68     		ldr	r3, [r7, #4]
 1115 0010 9A80     		strh	r2, [r3, #4]	@ movhi
 1116 0012 3B68     		ldr	r3, [r7]
 1117 0014 9A79     		ldrb	r2, [r3, #6]	@ zero_extendqisi2
 1118 0016 7B68     		ldr	r3, [r7, #4]
 1119 0018 9A71     		strb	r2, [r3, #6]
 1120 001a 3B68     		ldr	r3, [r7]
 1121 001c DB79     		ldrb	r3, [r3, #7]
 1122 001e C3F30603 		ubfx	r3, r3, #0, #7
 1123 0022 D9B2     		uxtb	r1, r3
 1124 0024 7A68     		ldr	r2, [r7, #4]
 1125 0026 D379     		ldrb	r3, [r2, #7]
 1126 0028 61F30603 		bfi	r3, r1, #0, #7
 1127 002c D371     		strb	r3, [r2, #7]
 1128 002e 3B68     		ldr	r3, [r7]
 1129 0030 DB79     		ldrb	r3, [r3, #7]
 1130 0032 C3F3C013 		ubfx	r3, r3, #7, #1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 27


 1131 0036 D9B2     		uxtb	r1, r3
 1132 0038 7A68     		ldr	r2, [r7, #4]
 1133 003a D379     		ldrb	r3, [r2, #7]
 1134 003c 61F3C713 		bfi	r3, r1, #7, #1
 1135 0040 D371     		strb	r3, [r2, #7]
 1136 0042 3B68     		ldr	r3, [r7]
 1137 0044 1A7A     		ldrb	r2, [r3, #8]	@ zero_extendqisi2
 1138 0046 7B68     		ldr	r3, [r7, #4]
 1139 0048 1A72     		strb	r2, [r3, #8]
 1140 004a 3B68     		ldr	r3, [r7]
 1141 004c 5A7A     		ldrb	r2, [r3, #9]	@ zero_extendqisi2
 1142 004e 7B68     		ldr	r3, [r7, #4]
 1143 0050 5A72     		strb	r2, [r3, #9]
 1144 0052 3B68     		ldr	r3, [r7]
 1145 0054 5A89     		ldrh	r2, [r3, #10]
 1146 0056 7B68     		ldr	r3, [r7, #4]
 1147 0058 5A81     		strh	r2, [r3, #10]	@ movhi
 1148 005a 3B68     		ldr	r3, [r7]
 1149 005c 9A89     		ldrh	r2, [r3, #12]
 1150 005e 7B68     		ldr	r3, [r7, #4]
 1151 0060 9A81     		strh	r2, [r3, #12]	@ movhi
 1152 0062 7B68     		ldr	r3, [r7, #4]
 1153 0064 1846     		mov	r0, r3
 1154 0066 0C37     		adds	r7, r7, #12
 1155              	.LCFI88:
 1156              		.cfi_def_cfa_offset 4
 1157 0068 BD46     		mov	sp, r7
 1158              	.LCFI89:
 1159              		.cfi_def_cfa_register 13
 1160              		@ sp needed
 1161 006a 5DF8047B 		ldr	r7, [sp], #4
 1162              	.LCFI90:
 1163              		.cfi_restore 7
 1164              		.cfi_def_cfa_offset 0
 1165 006e 7047     		bx	lr
 1166              		.cfi_endproc
 1167              	.LFE183:
 1169              		.section	.text._ZN8touchgfx9ConstFontaSEOS0_,"axG",%progbits,_ZN8touchgfx9ConstFontaSEOS0_,comdat
 1170              		.align	1
 1171              		.weak	_ZN8touchgfx9ConstFontaSEOS0_
 1172              		.syntax unified
 1173              		.thumb
 1174              		.thumb_func
 1175              		.fpu fpv4-sp-d16
 1177              	_ZN8touchgfx9ConstFontaSEOS0_:
 1178              	.LFB182:
 1179              		.loc 3 35 7
 1180              		.cfi_startproc
 1181              		@ args = 0, pretend = 0, frame = 8
 1182              		@ frame_needed = 1, uses_anonymous_args = 0
 1183 0000 80B5     		push	{r7, lr}
 1184              	.LCFI91:
 1185              		.cfi_def_cfa_offset 8
 1186              		.cfi_offset 7, -8
 1187              		.cfi_offset 14, -4
 1188 0002 82B0     		sub	sp, sp, #8
 1189              	.LCFI92:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 28


 1190              		.cfi_def_cfa_offset 16
 1191 0004 00AF     		add	r7, sp, #0
 1192              	.LCFI93:
 1193              		.cfi_def_cfa_register 7
 1194 0006 7860     		str	r0, [r7, #4]
 1195 0008 3960     		str	r1, [r7]
 1196              		.loc 3 35 7
 1197 000a 7B68     		ldr	r3, [r7, #4]
 1198 000c 3A68     		ldr	r2, [r7]
 1199 000e 1146     		mov	r1, r2
 1200 0010 1846     		mov	r0, r3
 1201 0012 FFF7FEFF 		bl	_ZN8touchgfx4FontaSERKS0_
 1202 0016 3B68     		ldr	r3, [r7]
 1203 0018 1A69     		ldr	r2, [r3, #16]
 1204 001a 7B68     		ldr	r3, [r7, #4]
 1205 001c 1A61     		str	r2, [r3, #16]
 1206 001e 3B68     		ldr	r3, [r7]
 1207 0020 9A8A     		ldrh	r2, [r3, #20]
 1208 0022 7B68     		ldr	r3, [r7, #4]
 1209 0024 9A82     		strh	r2, [r3, #20]	@ movhi
 1210 0026 7B68     		ldr	r3, [r7, #4]
 1211 0028 1846     		mov	r0, r3
 1212 002a 0837     		adds	r7, r7, #8
 1213              	.LCFI94:
 1214              		.cfi_def_cfa_offset 8
 1215 002c BD46     		mov	sp, r7
 1216              	.LCFI95:
 1217              		.cfi_def_cfa_register 13
 1218              		@ sp needed
 1219 002e 80BD     		pop	{r7, pc}
 1220              		.cfi_endproc
 1221              	.LFE182:
 1223              		.section	.text._ZN8touchgfx13GeneratedFontaSEOS0_,"axG",%progbits,_ZN8touchgfx13GeneratedFontaSEOS
 1224              		.align	1
 1225              		.weak	_ZN8touchgfx13GeneratedFontaSEOS0_
 1226              		.syntax unified
 1227              		.thumb
 1228              		.thumb_func
 1229              		.fpu fpv4-sp-d16
 1231              	_ZN8touchgfx13GeneratedFontaSEOS0_:
 1232              	.LFB181:
 1233              		.loc 4 17 7
 1234              		.cfi_startproc
 1235              		@ args = 0, pretend = 0, frame = 8
 1236              		@ frame_needed = 1, uses_anonymous_args = 0
 1237 0000 80B5     		push	{r7, lr}
 1238              	.LCFI96:
 1239              		.cfi_def_cfa_offset 8
 1240              		.cfi_offset 7, -8
 1241              		.cfi_offset 14, -4
 1242 0002 82B0     		sub	sp, sp, #8
 1243              	.LCFI97:
 1244              		.cfi_def_cfa_offset 16
 1245 0004 00AF     		add	r7, sp, #0
 1246              	.LCFI98:
 1247              		.cfi_def_cfa_register 7
 1248 0006 7860     		str	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 29


 1249 0008 3960     		str	r1, [r7]
 1250              		.loc 4 17 7
 1251 000a 7B68     		ldr	r3, [r7, #4]
 1252 000c 3A68     		ldr	r2, [r7]
 1253 000e 1146     		mov	r1, r2
 1254 0010 1846     		mov	r0, r3
 1255 0012 FFF7FEFF 		bl	_ZN8touchgfx9ConstFontaSEOS0_
 1256 0016 3B68     		ldr	r3, [r7]
 1257 0018 9A69     		ldr	r2, [r3, #24]
 1258 001a 7B68     		ldr	r3, [r7, #4]
 1259 001c 9A61     		str	r2, [r3, #24]
 1260 001e 3B68     		ldr	r3, [r7]
 1261 0020 DA69     		ldr	r2, [r3, #28]
 1262 0022 7B68     		ldr	r3, [r7, #4]
 1263 0024 DA61     		str	r2, [r3, #28]
 1264 0026 3B68     		ldr	r3, [r7]
 1265 0028 1A6A     		ldr	r2, [r3, #32]
 1266 002a 7B68     		ldr	r3, [r7, #4]
 1267 002c 1A62     		str	r2, [r3, #32]
 1268 002e 3B68     		ldr	r3, [r7]
 1269 0030 5A6A     		ldr	r2, [r3, #36]
 1270 0032 7B68     		ldr	r3, [r7, #4]
 1271 0034 5A62     		str	r2, [r3, #36]
 1272 0036 7B68     		ldr	r3, [r7, #4]
 1273 0038 1846     		mov	r0, r3
 1274 003a 0837     		adds	r7, r7, #8
 1275              	.LCFI99:
 1276              		.cfi_def_cfa_offset 8
 1277 003c BD46     		mov	sp, r7
 1278              	.LCFI100:
 1279              		.cfi_def_cfa_register 13
 1280              		@ sp needed
 1281 003e 80BD     		pop	{r7, pc}
 1282              		.cfi_endproc
 1283              	.LFE181:
 1285              		.section	.text._ZN8touchgfx10CachedFontaSEOS0_,"axG",%progbits,_ZN8touchgfx10CachedFontaSEOS0_,com
 1286              		.align	1
 1287              		.weak	_ZN8touchgfx10CachedFontaSEOS0_
 1288              		.syntax unified
 1289              		.thumb
 1290              		.thumb_func
 1291              		.fpu fpv4-sp-d16
 1293              	_ZN8touchgfx10CachedFontaSEOS0_:
 1294              	.LFB180:
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 1295              		.loc 5 12 7
 1296              		.cfi_startproc
 1297              		@ args = 0, pretend = 0, frame = 8
 1298              		@ frame_needed = 1, uses_anonymous_args = 0
 1299 0000 80B5     		push	{r7, lr}
 1300              	.LCFI101:
 1301              		.cfi_def_cfa_offset 8
 1302              		.cfi_offset 7, -8
 1303              		.cfi_offset 14, -4
 1304 0002 82B0     		sub	sp, sp, #8
 1305              	.LCFI102:
 1306              		.cfi_def_cfa_offset 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 30


 1307 0004 00AF     		add	r7, sp, #0
 1308              	.LCFI103:
 1309              		.cfi_def_cfa_register 7
 1310 0006 7860     		str	r0, [r7, #4]
 1311 0008 3960     		str	r1, [r7]
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 1312              		.loc 5 12 7
 1313 000a 7B68     		ldr	r3, [r7, #4]
 1314 000c 3A68     		ldr	r2, [r7]
 1315 000e 1146     		mov	r1, r2
 1316 0010 1846     		mov	r0, r3
 1317 0012 FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontaSEOS0_
 1318 0016 3B68     		ldr	r3, [r7]
 1319 0018 1A8D     		ldrh	r2, [r3, #40]
 1320 001a 7B68     		ldr	r3, [r7, #4]
 1321 001c 1A85     		strh	r2, [r3, #40]	@ movhi
 1322 001e 3B68     		ldr	r3, [r7]
 1323 0020 DA6A     		ldr	r2, [r3, #44]
 1324 0022 7B68     		ldr	r3, [r7, #4]
 1325 0024 DA62     		str	r2, [r3, #44]
 1326 0026 3B68     		ldr	r3, [r7]
 1327 0028 1A6B     		ldr	r2, [r3, #48]
 1328 002a 7B68     		ldr	r3, [r7, #4]
 1329 002c 1A63     		str	r2, [r3, #48]
 1330 002e 7B68     		ldr	r3, [r7, #4]
 1331 0030 1846     		mov	r0, r3
 1332 0032 0837     		adds	r7, r7, #8
 1333              	.LCFI104:
 1334              		.cfi_def_cfa_offset 8
 1335 0034 BD46     		mov	sp, r7
 1336              	.LCFI105:
 1337              		.cfi_def_cfa_register 13
 1338              		@ sp needed
 1339 0036 80BD     		pop	{r7, pc}
 1340              		.cfi_endproc
 1341              	.LFE180:
 1343              		.section	.rodata
 1344              		.align	2
 1345              	.LC0:
 1346 0000 74797065 		.ascii	"typedTexts != 0 && \"TypedText database has not bee"
 1346      64546578 
 1346      74732021 
 1346      3D203020 
 1346      26262022 
 1347 0032 6E20696E 		.ascii	"n initialized.\"\000"
 1347      69746961 
 1347      6C697A65 
 1347      642E2200 
 1348 0042 0000     		.align	2
 1349              	.LC1:
 1350 0044 766F6964 		.ascii	"void touchgfx::TypedText::assertValid() const\000"
 1350      20746F75 
 1350      63686766 
 1350      783A3A54 
 1350      79706564 
 1351 0072 0000     		.align	2
 1352              	.LC2:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 31


 1353 0074 4D696464 		.ascii	"Middlewares/ST/touchgfx/framework/include/touchgfx/"
 1353      6C657761 
 1353      7265732F 
 1353      53542F74 
 1353      6F756368 
 1354 00a7 54797065 		.ascii	"TypedText.hpp\000"
 1354      64546578 
 1354      742E6870 
 1354      7000
 1355 00b5 000000   		.align	2
 1356              	.LC3:
 1357 00b8 74797065 		.ascii	"typedTextId < numberOfTypedTexts && \"typedTextId l"
 1357      64546578 
 1357      74496420 
 1357      3C206E75 
 1357      6D626572 
 1358 00ea 61726765 		.ascii	"arger than numberOfTypedTexts.\"\000"
 1358      72207468 
 1358      616E206E 
 1358      756D6265 
 1358      724F6654 
 1359              		.section	.text._ZN8touchgfx9FontCache20initializeCachedFontENS_9TypedTextEPNS_10CachedFontEb,"ax",
 1360              		.align	1
 1361              		.global	_ZN8touchgfx9FontCache20initializeCachedFontENS_9TypedTextEPNS_10CachedFontEb
 1362              		.syntax unified
 1363              		.thumb
 1364              		.thumb_func
 1365              		.fpu fpv4-sp-d16
 1367              	_ZN8touchgfx9FontCache20initializeCachedFontENS_9TypedTextEPNS_10CachedFontEb:
 1368              	.LFB179:
  78:Src/generated/fonts/src/FontCache.cpp **** 
  79:Src/generated/fonts/src/FontCache.cpp **** void FontCache::initializeCachedFont(TypedText t, CachedFont* font, bool loadGsubOrContextTable /*=
  80:Src/generated/fonts/src/FontCache.cpp **** {
 1369              		.loc 6 80 1
 1370              		.cfi_startproc
 1371              		@ args = 0, pretend = 0, frame = 112
 1372              		@ frame_needed = 1, uses_anonymous_args = 0
 1373 0000 80B5     		push	{r7, lr}
 1374              	.LCFI106:
 1375              		.cfi_def_cfa_offset 8
 1376              		.cfi_offset 7, -8
 1377              		.cfi_offset 14, -4
 1378 0002 9EB0     		sub	sp, sp, #120
 1379              	.LCFI107:
 1380              		.cfi_def_cfa_offset 128
 1381 0004 02AF     		add	r7, sp, #8
 1382              	.LCFI108:
 1383              		.cfi_def_cfa 7, 120
 1384 0006 F860     		str	r0, [r7, #12]
 1385 0008 B960     		str	r1, [r7, #8]
 1386 000a 7A60     		str	r2, [r7, #4]
 1387 000c FB70     		strb	r3, [r7, #3]
 1388 000e BB68     		ldr	r3, [r7, #8]
 1389 0010 BB64     		str	r3, [r7, #72]
 1390 0012 BB6C     		ldr	r3, [r7, #72]
 1391 0014 7B64     		str	r3, [r7, #68]
 1392              	.LBB51:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 32


 1393              	.LBB52:
 1394              	.LBB53:
 1395              	.LBB54:
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Gets the id of the typed text.
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @return The id.
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION TypedTextId getId() const
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         return typedTextId;
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Has the TypedText been set to a proper value?
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @return Is the id valid.
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION bool hasValidId() const
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         return typedTextId != TYPED_TEXT_INVALID;
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Gets the text associated with this TypedText.
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @return The text.
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION const Unicode::UnicodeChar* getText() const
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assertValid();
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         return texts->getText(typedTextId);
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Gets the font associated with this TypedText.
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @return The font.
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION const Font* getFont() const
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assertValid();
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         return fonts[typedTexts[typedTextId].fontIdx];
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Gets the font ID associated with this TypedText.
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @return The font.
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION FontId getFontId() const
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assertValid();
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         return typedTexts[typedTextId].fontIdx;
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 33


 122:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Gets the alignment associated with this TypedText.
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @return The alignment.
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION Alignment getAlignment() const
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assertValid();
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         return typedTexts[typedTextId].alignment;
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Gets the text direction associated with this TypedText.
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @return The alignment.
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION TextDirection getTextDirection() const
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assertValid();
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         return typedTexts[typedTextId].direction;
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Registers an array of typed texts. All typed text instances are bound to this
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * database. This function is called automatically when setting a new language. Use
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Texts::setLanguage() instead of calling this function directly.
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @param  data A reference to the TypedTextData storage array.
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @param  f    The fonts associated with the array.
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @param  n    The number of typed texts in the array.
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     static void registerTypedTextDatabase(const TypedTextData* data, const Font* const* f, const ui
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         typedTexts = data;
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         fonts = f;
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         numberOfTypedTexts = n;
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Registers an array of texts. This function is called automatically from
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * touchgfx_generic_init(). Should not be called under normal circumstances.
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @param  t The array of texts.
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     static void registerTexts(const Texts* t)
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         texts = t;
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** private:
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION void assertValid() const
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assert(typedTexts != 0 && "TypedText database has not been initialized.");
 1396              		.loc 2 174 9
 1397 0016 9A4B     		ldr	r3, .L67
 1398 0018 1B68     		ldr	r3, [r3]
 1399 001a 002B     		cmp	r3, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 34


 1400 001c 05D1     		bne	.L56
 1401 001e 994B     		ldr	r3, .L67+4
 1402 0020 994A     		ldr	r2, .L67+8
 1403 0022 AE21     		movs	r1, #174
 1404 0024 9948     		ldr	r0, .L67+12
 1405 0026 FFF7FEFF 		bl	__assert_func
 1406              	.L56:
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assert(typedTextId < numberOfTypedTexts && "typedTextId larger than numberOfTypedTexts.");
 1407              		.loc 2 175 9
 1408 002a 7B6C     		ldr	r3, [r7, #68]
 1409 002c 9A88     		ldrh	r2, [r3, #4]
 1410 002e 984B     		ldr	r3, .L67+16
 1411 0030 1B88     		ldrh	r3, [r3]
 1412 0032 9A42     		cmp	r2, r3
 1413 0034 05D3     		bcc	.L66
 1414 0036 974B     		ldr	r3, .L67+20
 1415 0038 934A     		ldr	r2, .L67+8
 1416 003a AF21     		movs	r1, #175
 1417 003c 9348     		ldr	r0, .L67+12
 1418 003e FFF7FEFF 		bl	__assert_func
 1419              	.L66:
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 1420              		.loc 2 176 5
 1421 0042 00BF     		nop
 1422              	.LBE54:
 1423              	.LBE53:
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 1424              		.loc 2 119 38
 1425 0044 8E4B     		ldr	r3, .L67
 1426 0046 1A68     		ldr	r2, [r3]
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 1427              		.loc 2 119 27
 1428 0048 BB6C     		ldr	r3, [r7, #72]
 1429 004a 9B88     		ldrh	r3, [r3, #4]
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 1430              		.loc 2 119 38
 1431 004c 5B00     		lsls	r3, r3, #1
 1432 004e 1344     		add	r3, r3, r2
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 1433              		.loc 2 119 40
 1434 0050 1B78     		ldrb	r3, [r3]	@ zero_extendqisi2
 1435 0052 9BB2     		uxth	r3, r3
 1436              	.LBE52:
 1437              	.LBE51:
  81:Src/generated/fonts/src/FontCache.cpp ****     //get font index from typed text
  82:Src/generated/fonts/src/FontCache.cpp ****     FontId fontId = t.getFontId();
 1438              		.loc 6 82 32
 1439 0054 A7F86E30 		strh	r3, [r7, #110]	@ movhi
  83:Src/generated/fonts/src/FontCache.cpp ****     //reset to start of file
  84:Src/generated/fonts/src/FontCache.cpp ****     open();
 1440              		.loc 6 84 9
 1441 0058 F868     		ldr	r0, [r7, #12]
 1442 005a FFF7FEFF 		bl	_ZN8touchgfx9FontCache4openEv
  85:Src/generated/fonts/src/FontCache.cpp ****     setPosition(0);
 1443              		.loc 6 85 16
 1444 005e 0021     		movs	r1, #0
 1445 0060 F868     		ldr	r0, [r7, #12]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 35


 1446 0062 FFF7FEFF 		bl	_ZN8touchgfx9FontCache11setPositionEm
  86:Src/generated/fonts/src/FontCache.cpp **** 
  87:Src/generated/fonts/src/FontCache.cpp ****     assert(sizeof(touchgfx::BinaryFontData) < MAX_BUFFER_SIZE);
  88:Src/generated/fonts/src/FontCache.cpp ****     readData(buffer, sizeof(touchgfx::BinaryFontData));
 1447              		.loc 6 88 14
 1448 0066 FB68     		ldr	r3, [r7, #12]
 1449 0068 3033     		adds	r3, r3, #48
 1450              		.loc 6 88 13
 1451 006a 2822     		movs	r2, #40
 1452 006c 1946     		mov	r1, r3
 1453 006e F868     		ldr	r0, [r7, #12]
 1454 0070 FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
  89:Src/generated/fonts/src/FontCache.cpp ****     const struct touchgfx::BinaryFontData* binaryFontData = reinterpret_cast<const struct touchgfx:
 1455              		.loc 6 89 44
 1456 0074 FB68     		ldr	r3, [r7, #12]
 1457 0076 3033     		adds	r3, r3, #48
 1458 0078 BB66     		str	r3, [r7, #104]
  90:Src/generated/fonts/src/FontCache.cpp **** 
  91:Src/generated/fonts/src/FontCache.cpp ****     const Font** flashFonts = TypedTextDatabase::getFonts();
 1459              		.loc 6 91 58
 1460 007a FFF7FEFF 		bl	_ZN17TypedTextDatabase8getFontsEv
 1461 007e 7866     		str	r0, [r7, #100]
  92:Src/generated/fonts/src/FontCache.cpp ****     const GeneratedFont* flashFont = static_cast<const GeneratedFont*>(flashFonts[fontId]);
 1462              		.loc 6 92 83
 1463 0080 B7F86E30 		ldrh	r3, [r7, #110]
 1464              		.loc 6 92 89
 1465 0084 9B00     		lsls	r3, r3, #2
 1466 0086 7A6E     		ldr	r2, [r7, #100]
 1467 0088 1344     		add	r3, r3, r2
 1468              		.loc 6 92 26
 1469 008a 1B68     		ldr	r3, [r3]
 1470 008c 3B66     		str	r3, [r7, #96]
  93:Src/generated/fonts/src/FontCache.cpp ****     *font = CachedFont(reinterpret_cast<const struct touchgfx::BinaryFontData*>(buffer), fontId, th
 1471              		.loc 6 93 81
 1472 008e FB68     		ldr	r3, [r7, #12]
 1473 0090 03F13001 		add	r1, r3, #48
 1474              		.loc 6 93 113
 1475 0094 B7F86E20 		ldrh	r2, [r7, #110]
 1476 0098 07F11000 		add	r0, r7, #16
 1477 009c 3B6E     		ldr	r3, [r7, #96]
 1478 009e 0093     		str	r3, [sp]
 1479 00a0 FB68     		ldr	r3, [r7, #12]
 1480 00a2 FFF7FEFF 		bl	_ZN8touchgfx10CachedFontC1EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE
 1481 00a6 07F11003 		add	r3, r7, #16
 1482 00aa 1946     		mov	r1, r3
 1483 00ac 7868     		ldr	r0, [r7, #4]
 1484 00ae FFF7FEFF 		bl	_ZN8touchgfx10CachedFontaSEOS0_
 1485              		.loc 6 93 13
 1486 00b2 07F11003 		add	r3, r7, #16
 1487 00b6 1846     		mov	r0, r3
 1488 00b8 FFF7FEFF 		bl	_ZN8touchgfx10CachedFontD1Ev
 1489              	.LBB55:
  94:Src/generated/fonts/src/FontCache.cpp **** 
  95:Src/generated/fonts/src/FontCache.cpp ****     if (loadGsubOrContextTable && (binaryFontData->offsetToGSUB != 0))
 1490              		.loc 6 95 5
 1491 00bc FB78     		ldrb	r3, [r7, #3]	@ zero_extendqisi2
 1492 00be 002B     		cmp	r3, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 36


 1493 00c0 46D0     		beq	.L59
 1494              		.loc 6 95 52 discriminator 1
 1495 00c2 BB6E     		ldr	r3, [r7, #104]
 1496 00c4 5B69     		ldr	r3, [r3, #20]
 1497              		.loc 6 95 32 discriminator 1
 1498 00c6 002B     		cmp	r3, #0
 1499 00c8 42D0     		beq	.L59
 1500              	.LBB56:
  96:Src/generated/fonts/src/FontCache.cpp ****     {
  97:Src/generated/fonts/src/FontCache.cpp ****         setPosition(binaryFontData->offsetToGSUB);
 1501              		.loc 6 97 37
 1502 00ca BB6E     		ldr	r3, [r7, #104]
 1503 00cc 5B69     		ldr	r3, [r3, #20]
 1504              		.loc 6 97 20
 1505 00ce 1946     		mov	r1, r3
 1506 00d0 F868     		ldr	r0, [r7, #12]
 1507 00d2 FFF7FEFF 		bl	_ZN8touchgfx9FontCache11setPositionEm
  98:Src/generated/fonts/src/FontCache.cpp **** 
  99:Src/generated/fonts/src/FontCache.cpp ****         const uint32_t sizeOfGSUB = (binaryFontData->offsetToArabicTable != 0 ? binaryFontData->off
 1508              		.loc 6 99 54
 1509 00d6 BB6E     		ldr	r3, [r7, #104]
 1510 00d8 9B69     		ldr	r3, [r3, #24]
 1511              		.loc 6 99 79
 1512 00da 002B     		cmp	r3, #0
 1513 00dc 02D0     		beq	.L60
 1514              		.loc 6 99 79 is_stmt 0 discriminator 1
 1515 00de BB6E     		ldr	r3, [r7, #104]
 1516 00e0 9B69     		ldr	r3, [r3, #24]
 1517 00e2 01E0     		b	.L61
 1518              	.L60:
 1519              		.loc 6 99 79 discriminator 2
 1520 00e4 BB6E     		ldr	r3, [r7, #104]
 1521 00e6 5B68     		ldr	r3, [r3, #4]
 1522              	.L61:
 1523              		.loc 6 99 169 is_stmt 1 discriminator 4
 1524 00e8 BA6E     		ldr	r2, [r7, #104]
 1525 00ea 5269     		ldr	r2, [r2, #20]
 1526              		.loc 6 99 24 discriminator 4
 1527 00ec 9B1A     		subs	r3, r3, r2
 1528 00ee FB65     		str	r3, [r7, #92]
 1529              	.LBB57:
 100:Src/generated/fonts/src/FontCache.cpp **** 
 101:Src/generated/fonts/src/FontCache.cpp ****         if (top + sizeOfGSUB < gsubStart) //room for this GSUB table
 1530              		.loc 6 101 13 discriminator 4
 1531 00f0 FB68     		ldr	r3, [r7, #12]
 1532 00f2 1A6A     		ldr	r2, [r3, #32]
 1533              		.loc 6 101 17 discriminator 4
 1534 00f4 FB6D     		ldr	r3, [r7, #92]
 1535 00f6 1A44     		add	r2, r2, r3
 1536              		.loc 6 101 32 discriminator 4
 1537 00f8 FB68     		ldr	r3, [r7, #12]
 1538 00fa 5B6A     		ldr	r3, [r3, #36]
 1539              		.loc 6 101 9 discriminator 4
 1540 00fc 9A42     		cmp	r2, r3
 1541 00fe 20D2     		bcs	.L62
 1542              	.LBB58:
 102:Src/generated/fonts/src/FontCache.cpp ****         {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 37


 103:Src/generated/fonts/src/FontCache.cpp ****             uint8_t* const gsubPosition = gsubStart - sizeOfGSUB;
 1543              		.loc 6 103 43
 1544 0100 FB68     		ldr	r3, [r7, #12]
 1545 0102 5A6A     		ldr	r2, [r3, #36]
 1546              		.loc 6 103 53
 1547 0104 FB6D     		ldr	r3, [r7, #92]
 1548 0106 5B42     		rsbs	r3, r3, #0
 1549              		.loc 6 103 28
 1550 0108 1344     		add	r3, r3, r2
 1551 010a BB65     		str	r3, [r7, #88]
 104:Src/generated/fonts/src/FontCache.cpp ****             readData(gsubPosition, sizeOfGSUB);
 1552              		.loc 6 104 21
 1553 010c FA6D     		ldr	r2, [r7, #92]
 1554 010e B96D     		ldr	r1, [r7, #88]
 1555 0110 F868     		ldr	r0, [r7, #12]
 1556 0112 FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 105:Src/generated/fonts/src/FontCache.cpp ****             font->setGSUBTable(reinterpret_cast<uint16_t*>(gsubPosition));
 1557              		.loc 6 105 73
 1558 0116 7B68     		ldr	r3, [r7, #4]
 1559 0118 1B68     		ldr	r3, [r3]
 1560 011a 5033     		adds	r3, r3, #80
 1561 011c 1B68     		ldr	r3, [r3]
 1562              		.loc 6 105 31
 1563 011e B96D     		ldr	r1, [r7, #88]
 1564 0120 7868     		ldr	r0, [r7, #4]
 1565 0122 9847     		blx	r3
 1566              	.LVL2:
 106:Src/generated/fonts/src/FontCache.cpp ****             gsubStart -= sizeOfGSUB;
 1567              		.loc 6 106 23
 1568 0124 FB68     		ldr	r3, [r7, #12]
 1569 0126 5A6A     		ldr	r2, [r3, #36]
 1570 0128 FB6D     		ldr	r3, [r7, #92]
 1571 012a 5B42     		rsbs	r3, r3, #0
 1572 012c 1A44     		add	r2, r2, r3
 1573 012e FB68     		ldr	r3, [r7, #12]
 1574 0130 5A62     		str	r2, [r3, #36]
 107:Src/generated/fonts/src/FontCache.cpp **** 
 108:Src/generated/fonts/src/FontCache.cpp ****             //round down to 32bit address
 109:Src/generated/fonts/src/FontCache.cpp ****             gsubStart = (uint8_t*)((uintptr_t)gsubStart & ~(uintptr_t)0x3);
 1575              		.loc 6 109 47
 1576 0132 FB68     		ldr	r3, [r7, #12]
 1577 0134 5B6A     		ldr	r3, [r3, #36]
 1578              		.loc 6 109 57
 1579 0136 23F00303 		bic	r3, r3, #3
 1580              		.loc 6 109 23
 1581 013a 1A46     		mov	r2, r3
 1582 013c FB68     		ldr	r3, [r7, #12]
 1583 013e 5A62     		str	r2, [r3, #36]
 1584              	.LBE58:
 1585 0140 06E0     		b	.L59
 1586              	.L62:
 110:Src/generated/fonts/src/FontCache.cpp ****         }
 111:Src/generated/fonts/src/FontCache.cpp ****         else
 112:Src/generated/fonts/src/FontCache.cpp ****         {
 113:Src/generated/fonts/src/FontCache.cpp ****             font->setGSUBTable(0);
 1587              		.loc 6 113 33
 1588 0142 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 38


 1589 0144 1B68     		ldr	r3, [r3]
 1590 0146 5033     		adds	r3, r3, #80
 1591 0148 1B68     		ldr	r3, [r3]
 1592              		.loc 6 113 31
 1593 014a 0021     		movs	r1, #0
 1594 014c 7868     		ldr	r0, [r7, #4]
 1595 014e 9847     		blx	r3
 1596              	.LVL3:
 1597              	.L59:
 1598              	.LBE57:
 1599              	.LBE56:
 1600              	.LBE55:
 1601              	.LBB59:
 114:Src/generated/fonts/src/FontCache.cpp ****         }
 115:Src/generated/fonts/src/FontCache.cpp ****     }
 116:Src/generated/fonts/src/FontCache.cpp **** 
 117:Src/generated/fonts/src/FontCache.cpp ****     if (loadGsubOrContextTable && (binaryFontData->offsetToArabicTable != 0))
 1602              		.loc 6 117 5
 1603 0150 FB78     		ldrb	r3, [r7, #3]	@ zero_extendqisi2
 1604 0152 002B     		cmp	r3, #0
 1605 0154 00F08D80 		beq	.L63
 1606              		.loc 6 117 52 discriminator 1
 1607 0158 BB6E     		ldr	r3, [r7, #104]
 1608 015a 9B69     		ldr	r3, [r3, #24]
 1609              		.loc 6 117 32 discriminator 1
 1610 015c 002B     		cmp	r3, #0
 1611 015e 00F08880 		beq	.L63
 1612              	.LBB60:
 118:Src/generated/fonts/src/FontCache.cpp ****     {
 119:Src/generated/fonts/src/FontCache.cpp ****         setPosition(binaryFontData->offsetToArabicTable);
 1613              		.loc 6 119 37
 1614 0162 BB6E     		ldr	r3, [r7, #104]
 1615 0164 9B69     		ldr	r3, [r3, #24]
 1616              		.loc 6 119 20
 1617 0166 1946     		mov	r1, r3
 1618 0168 F868     		ldr	r0, [r7, #12]
 1619 016a FFF7FEFF 		bl	_ZN8touchgfx9FontCache11setPositionEm
 120:Src/generated/fonts/src/FontCache.cpp **** 
 121:Src/generated/fonts/src/FontCache.cpp ****         const uint32_t sizeTableData = binaryFontData->sizeOfFontData - binaryFontData->offsetToAra
 1620              		.loc 6 121 56
 1621 016e BB6E     		ldr	r3, [r7, #104]
 1622 0170 5A68     		ldr	r2, [r3, #4]
 1623              		.loc 6 121 89
 1624 0172 BB6E     		ldr	r3, [r7, #104]
 1625 0174 9B69     		ldr	r3, [r3, #24]
 1626              		.loc 6 121 24
 1627 0176 D31A     		subs	r3, r2, r3
 1628 0178 7B65     		str	r3, [r7, #84]
 1629              	.LBB61:
 122:Src/generated/fonts/src/FontCache.cpp **** 
 123:Src/generated/fonts/src/FontCache.cpp ****         if (top + sizeTableData + sizeof(FontContextualFormsTable) < gsubStart) //room for the Cont
 1630              		.loc 6 123 13
 1631 017a FB68     		ldr	r3, [r7, #12]
 1632 017c 1A6A     		ldr	r2, [r3, #32]
 1633              		.loc 6 123 33
 1634 017e 7B6D     		ldr	r3, [r7, #84]
 1635 0180 2033     		adds	r3, r3, #32
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 39


 1636 0182 1A44     		add	r2, r2, r3
 1637              		.loc 6 123 70
 1638 0184 FB68     		ldr	r3, [r7, #12]
 1639 0186 5B6A     		ldr	r3, [r3, #36]
 1640              		.loc 6 123 9
 1641 0188 9A42     		cmp	r2, r3
 1642 018a 6BD2     		bcs	.L64
 1643              	.LBB62:
 124:Src/generated/fonts/src/FontCache.cpp ****         {
 125:Src/generated/fonts/src/FontCache.cpp ****             //Allocate FontContextualFormsTable first
 126:Src/generated/fonts/src/FontCache.cpp ****             gsubStart -= sizeof(FontContextualFormsTable);
 1644              		.loc 6 126 23
 1645 018c FB68     		ldr	r3, [r7, #12]
 1646 018e 5B6A     		ldr	r3, [r3, #36]
 1647 0190 A3F12002 		sub	r2, r3, #32
 1648 0194 FB68     		ldr	r3, [r7, #12]
 1649 0196 5A62     		str	r2, [r3, #36]
 127:Src/generated/fonts/src/FontCache.cpp ****             //round down to 32bit address
 128:Src/generated/fonts/src/FontCache.cpp ****             gsubStart = (uint8_t*)((uintptr_t)gsubStart & ~(uintptr_t)0x3);
 1650              		.loc 6 128 47
 1651 0198 FB68     		ldr	r3, [r7, #12]
 1652 019a 5B6A     		ldr	r3, [r3, #36]
 1653              		.loc 6 128 57
 1654 019c 23F00303 		bic	r3, r3, #3
 1655              		.loc 6 128 23
 1656 01a0 1A46     		mov	r2, r3
 1657 01a2 FB68     		ldr	r3, [r7, #12]
 1658 01a4 5A62     		str	r2, [r3, #36]
 129:Src/generated/fonts/src/FontCache.cpp **** 
 130:Src/generated/fonts/src/FontCache.cpp ****             FontContextualFormsTable* table = (FontContextualFormsTable*)gsubStart;
 1659              		.loc 6 130 39
 1660 01a6 FB68     		ldr	r3, [r7, #12]
 1661 01a8 5B6A     		ldr	r3, [r3, #36]
 1662 01aa 3B65     		str	r3, [r7, #80]
 131:Src/generated/fonts/src/FontCache.cpp ****             font->setContextualFormsTable(table);
 1663              		.loc 6 131 48
 1664 01ac 7B68     		ldr	r3, [r7, #4]
 1665 01ae 1B68     		ldr	r3, [r3]
 1666 01b0 5433     		adds	r3, r3, #84
 1667 01b2 1B68     		ldr	r3, [r3]
 1668              		.loc 6 131 42
 1669 01b4 396D     		ldr	r1, [r7, #80]
 1670 01b6 7868     		ldr	r0, [r7, #4]
 1671 01b8 9847     		blx	r3
 1672              	.LVL4:
 132:Src/generated/fonts/src/FontCache.cpp ****             gsubStart -= sizeTableData;
 1673              		.loc 6 132 23
 1674 01ba FB68     		ldr	r3, [r7, #12]
 1675 01bc 5A6A     		ldr	r2, [r3, #36]
 1676 01be 7B6D     		ldr	r3, [r7, #84]
 1677 01c0 5B42     		rsbs	r3, r3, #0
 1678 01c2 1A44     		add	r2, r2, r3
 1679 01c4 FB68     		ldr	r3, [r7, #12]
 1680 01c6 5A62     		str	r2, [r3, #36]
 133:Src/generated/fonts/src/FontCache.cpp ****             readData(gsubStart, sizeTableData);
 1681              		.loc 6 133 22
 1682 01c8 FB68     		ldr	r3, [r7, #12]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 40


 1683 01ca 5B6A     		ldr	r3, [r3, #36]
 1684              		.loc 6 133 21
 1685 01cc 7A6D     		ldr	r2, [r7, #84]
 1686 01ce 1946     		mov	r1, r3
 1687 01d0 F868     		ldr	r0, [r7, #12]
 1688 01d2 FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 134:Src/generated/fonts/src/FontCache.cpp **** 
 135:Src/generated/fonts/src/FontCache.cpp ****             //Set pointers in table
 136:Src/generated/fonts/src/FontCache.cpp ****             const uint16_t* const base = (const uint16_t*)gsubStart;
 1689              		.loc 6 136 35
 1690 01d6 FB68     		ldr	r3, [r7, #12]
 1691 01d8 5B6A     		ldr	r3, [r3, #36]
 1692 01da FB64     		str	r3, [r7, #76]
 137:Src/generated/fonts/src/FontCache.cpp ****             //first elements in binary font are offsets to arrays in 16bit words
 138:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms4Long = (FontContextualFormsTable::arrayOf5UnicodesPtr)(base + ba
 1693              		.loc 6 138 104
 1694 01dc FB6C     		ldr	r3, [r7, #76]
 1695 01de 1B88     		ldrh	r3, [r3]
 1696              		.loc 6 138 96
 1697 01e0 5B00     		lsls	r3, r3, #1
 1698              		.loc 6 138 43
 1699 01e2 FA6C     		ldr	r2, [r7, #76]
 1700 01e4 1A44     		add	r2, r2, r3
 1701              		.loc 6 138 41
 1702 01e6 3B6D     		ldr	r3, [r7, #80]
 1703 01e8 1A60     		str	r2, [r3]
 139:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms3Long = (FontContextualFormsTable::arrayOf5UnicodesPtr)(base + ba
 1704              		.loc 6 139 104
 1705 01ea FB6C     		ldr	r3, [r7, #76]
 1706 01ec 0233     		adds	r3, r3, #2
 1707 01ee 1B88     		ldrh	r3, [r3]
 1708              		.loc 6 139 96
 1709 01f0 5B00     		lsls	r3, r3, #1
 1710              		.loc 6 139 43
 1711 01f2 FA6C     		ldr	r2, [r7, #76]
 1712 01f4 1A44     		add	r2, r2, r3
 1713              		.loc 6 139 41
 1714 01f6 3B6D     		ldr	r3, [r7, #80]
 1715 01f8 5A60     		str	r2, [r3, #4]
 140:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms2Long = (FontContextualFormsTable::arrayOf5UnicodesPtr)(base + ba
 1716              		.loc 6 140 104
 1717 01fa FB6C     		ldr	r3, [r7, #76]
 1718 01fc 0433     		adds	r3, r3, #4
 1719 01fe 1B88     		ldrh	r3, [r3]
 1720              		.loc 6 140 96
 1721 0200 5B00     		lsls	r3, r3, #1
 1722              		.loc 6 140 43
 1723 0202 FA6C     		ldr	r2, [r7, #76]
 1724 0204 1A44     		add	r2, r2, r3
 1725              		.loc 6 140 41
 1726 0206 3B6D     		ldr	r3, [r7, #80]
 1727 0208 9A60     		str	r2, [r3, #8]
 141:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms0621_063a = (FontContextualFormsTable::arrayOf4UnicodesPtr)(base 
 1728              		.loc 6 141 108
 1729 020a FB6C     		ldr	r3, [r7, #76]
 1730 020c 0633     		adds	r3, r3, #6
 1731 020e 1B88     		ldrh	r3, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 41


 1732              		.loc 6 141 100
 1733 0210 5B00     		lsls	r3, r3, #1
 1734              		.loc 6 141 47
 1735 0212 FA6C     		ldr	r2, [r7, #76]
 1736 0214 1A44     		add	r2, r2, r3
 1737              		.loc 6 141 45
 1738 0216 3B6D     		ldr	r3, [r7, #80]
 1739 0218 DA60     		str	r2, [r3, #12]
 142:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms0641_064a = (FontContextualFormsTable::arrayOf4UnicodesPtr)(base 
 1740              		.loc 6 142 108
 1741 021a FB6C     		ldr	r3, [r7, #76]
 1742 021c 0833     		adds	r3, r3, #8
 1743 021e 1B88     		ldrh	r3, [r3]
 1744              		.loc 6 142 100
 1745 0220 5B00     		lsls	r3, r3, #1
 1746              		.loc 6 142 47
 1747 0222 FA6C     		ldr	r2, [r7, #76]
 1748 0224 1A44     		add	r2, r2, r3
 1749              		.loc 6 142 45
 1750 0226 3B6D     		ldr	r3, [r7, #80]
 1751 0228 1A61     		str	r2, [r3, #16]
 143:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms06XX = (FontContextualFormsTable::arrayOf5UnicodesPtr)(base + bas
 1752              		.loc 6 143 103
 1753 022a FB6C     		ldr	r3, [r7, #76]
 1754 022c 0A33     		adds	r3, r3, #10
 1755 022e 1B88     		ldrh	r3, [r3]
 1756              		.loc 6 143 95
 1757 0230 5B00     		lsls	r3, r3, #1
 1758              		.loc 6 143 42
 1759 0232 FA6C     		ldr	r2, [r7, #76]
 1760 0234 1A44     		add	r2, r2, r3
 1761              		.loc 6 143 40
 1762 0236 3B6D     		ldr	r3, [r7, #80]
 1763 0238 5A61     		str	r2, [r3, #20]
 144:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms4LongSize = base[6];
 1764              		.loc 6 144 53
 1765 023a FB6C     		ldr	r3, [r7, #76]
 1766 023c 0C33     		adds	r3, r3, #12
 1767 023e 1A88     		ldrh	r2, [r3]
 1768              		.loc 6 144 45
 1769 0240 3B6D     		ldr	r3, [r7, #80]
 1770 0242 1A83     		strh	r2, [r3, #24]	@ movhi
 145:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms3LongSize = base[7];
 1771              		.loc 6 145 53
 1772 0244 FB6C     		ldr	r3, [r7, #76]
 1773 0246 0E33     		adds	r3, r3, #14
 1774 0248 1A88     		ldrh	r2, [r3]
 1775              		.loc 6 145 45
 1776 024a 3B6D     		ldr	r3, [r7, #80]
 1777 024c 5A83     		strh	r2, [r3, #26]	@ movhi
 146:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms2LongSize = base[8];
 1778              		.loc 6 146 53
 1779 024e FB6C     		ldr	r3, [r7, #76]
 1780 0250 1033     		adds	r3, r3, #16
 1781 0252 1A88     		ldrh	r2, [r3]
 1782              		.loc 6 146 45
 1783 0254 3B6D     		ldr	r3, [r7, #80]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 42


 1784 0256 9A83     		strh	r2, [r3, #28]	@ movhi
 147:Src/generated/fonts/src/FontCache.cpp ****             table->contextualForms06XXSize = base[9];
 1785              		.loc 6 147 52
 1786 0258 FB6C     		ldr	r3, [r7, #76]
 1787 025a 1233     		adds	r3, r3, #18
 1788 025c 1A88     		ldrh	r2, [r3]
 1789              		.loc 6 147 44
 1790 025e 3B6D     		ldr	r3, [r7, #80]
 1791 0260 DA83     		strh	r2, [r3, #30]	@ movhi
 1792              	.LBE62:
 1793 0262 06E0     		b	.L63
 1794              	.L64:
 148:Src/generated/fonts/src/FontCache.cpp ****         }
 149:Src/generated/fonts/src/FontCache.cpp ****         else
 150:Src/generated/fonts/src/FontCache.cpp ****         {
 151:Src/generated/fonts/src/FontCache.cpp ****             font->setContextualFormsTable(0);
 1795              		.loc 6 151 44
 1796 0264 7B68     		ldr	r3, [r7, #4]
 1797 0266 1B68     		ldr	r3, [r3]
 1798 0268 5433     		adds	r3, r3, #84
 1799 026a 1B68     		ldr	r3, [r3]
 1800              		.loc 6 151 42
 1801 026c 0021     		movs	r1, #0
 1802 026e 7868     		ldr	r0, [r7, #4]
 1803 0270 9847     		blx	r3
 1804              	.LVL5:
 1805              	.L63:
 1806              	.LBE61:
 1807              	.LBE60:
 1808              	.LBE59:
 152:Src/generated/fonts/src/FontCache.cpp ****         }
 153:Src/generated/fonts/src/FontCache.cpp ****     }
 154:Src/generated/fonts/src/FontCache.cpp **** 
 155:Src/generated/fonts/src/FontCache.cpp ****     close();
 1809              		.loc 6 155 10
 1810 0272 F868     		ldr	r0, [r7, #12]
 1811 0274 FFF7FEFF 		bl	_ZN8touchgfx9FontCache5closeEv
 156:Src/generated/fonts/src/FontCache.cpp **** }
 1812              		.loc 6 156 1
 1813 0278 00BF     		nop
 1814 027a 7037     		adds	r7, r7, #112
 1815              	.LCFI109:
 1816              		.cfi_def_cfa_offset 8
 1817 027c BD46     		mov	sp, r7
 1818              	.LCFI110:
 1819              		.cfi_def_cfa_register 13
 1820              		@ sp needed
 1821 027e 80BD     		pop	{r7, pc}
 1822              	.L68:
 1823              		.align	2
 1824              	.L67:
 1825 0280 00000000 		.word	_ZN8touchgfx9TypedText10typedTextsE
 1826 0284 00000000 		.word	.LC0
 1827 0288 44000000 		.word	.LC1
 1828 028c 74000000 		.word	.LC2
 1829 0290 00000000 		.word	_ZN8touchgfx9TypedText18numberOfTypedTextsE
 1830 0294 B8000000 		.word	.LC3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 43


 1831              		.cfi_endproc
 1832              	.LFE179:
 1834              		.section	.text._ZN8touchgfx9TypedTextC2ERKS0_,"axG",%progbits,_ZN8touchgfx9TypedTextC5ERKS0_,comda
 1835              		.align	1
 1836              		.weak	_ZN8touchgfx9TypedTextC2ERKS0_
 1837              		.syntax unified
 1838              		.thumb
 1839              		.thumb_func
 1840              		.fpu fpv4-sp-d16
 1842              	_ZN8touchgfx9TypedTextC2ERKS0_:
 1843              	.LFB186:
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** {
 1844              		.loc 2 41 7
 1845              		.cfi_startproc
 1846              		@ args = 0, pretend = 0, frame = 8
 1847              		@ frame_needed = 1, uses_anonymous_args = 0
 1848              		@ link register save eliminated.
 1849 0000 80B4     		push	{r7}
 1850              	.LCFI111:
 1851              		.cfi_def_cfa_offset 4
 1852              		.cfi_offset 7, -4
 1853 0002 83B0     		sub	sp, sp, #12
 1854              	.LCFI112:
 1855              		.cfi_def_cfa_offset 16
 1856 0004 00AF     		add	r7, sp, #0
 1857              	.LCFI113:
 1858              		.cfi_def_cfa_register 7
 1859 0006 7860     		str	r0, [r7, #4]
 1860 0008 3960     		str	r1, [r7]
 1861              	.LBB63:
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** {
 1862              		.loc 2 41 7
 1863 000a 074A     		ldr	r2, .L71
 1864 000c 7B68     		ldr	r3, [r7, #4]
 1865 000e 1A60     		str	r2, [r3]
 1866 0010 3B68     		ldr	r3, [r7]
 1867 0012 9A88     		ldrh	r2, [r3, #4]
 1868 0014 7B68     		ldr	r3, [r7, #4]
 1869 0016 9A80     		strh	r2, [r3, #4]	@ movhi
 1870              	.LBE63:
 1871 0018 7B68     		ldr	r3, [r7, #4]
 1872 001a 1846     		mov	r0, r3
 1873 001c 0C37     		adds	r7, r7, #12
 1874              	.LCFI114:
 1875              		.cfi_def_cfa_offset 4
 1876 001e BD46     		mov	sp, r7
 1877              	.LCFI115:
 1878              		.cfi_def_cfa_register 13
 1879              		@ sp needed
 1880 0020 5DF8047B 		ldr	r7, [sp], #4
 1881              	.LCFI116:
 1882              		.cfi_restore 7
 1883              		.cfi_def_cfa_offset 0
 1884 0024 7047     		bx	lr
 1885              	.L72:
 1886 0026 00BF     		.align	2
 1887              	.L71:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 44


 1888 0028 08000000 		.word	_ZTVN8touchgfx9TypedTextE+8
 1889              		.cfi_endproc
 1890              	.LFE186:
 1892              		.weak	_ZN8touchgfx9TypedTextC1ERKS0_
 1893              		.thumb_set _ZN8touchgfx9TypedTextC1ERKS0_,_ZN8touchgfx9TypedTextC2ERKS0_
 1894              		.section	.text._ZN8touchgfx9FontCache11cacheStringENS_9TypedTextEPKt,"ax",%progbits
 1895              		.align	1
 1896              		.global	_ZN8touchgfx9FontCache11cacheStringENS_9TypedTextEPKt
 1897              		.syntax unified
 1898              		.thumb
 1899              		.thumb_func
 1900              		.fpu fpv4-sp-d16
 1902              	_ZN8touchgfx9FontCache11cacheStringENS_9TypedTextEPKt:
 1903              	.LFB184:
 157:Src/generated/fonts/src/FontCache.cpp **** 
 158:Src/generated/fonts/src/FontCache.cpp **** bool FontCache::cacheString(TypedText t, const Unicode::UnicodeChar* string)
 159:Src/generated/fonts/src/FontCache.cpp **** {
 1904              		.loc 6 159 1
 1905              		.cfi_startproc
 1906              		@ args = 0, pretend = 0, frame = 32
 1907              		@ frame_needed = 1, uses_anonymous_args = 0
 1908 0000 80B5     		push	{r7, lr}
 1909              	.LCFI117:
 1910              		.cfi_def_cfa_offset 8
 1911              		.cfi_offset 7, -8
 1912              		.cfi_offset 14, -4
 1913 0002 88B0     		sub	sp, sp, #32
 1914              	.LCFI118:
 1915              		.cfi_def_cfa_offset 40
 1916 0004 00AF     		add	r7, sp, #0
 1917              	.LCFI119:
 1918              		.cfi_def_cfa_register 7
 1919 0006 F860     		str	r0, [r7, #12]
 1920 0008 B960     		str	r1, [r7, #8]
 1921 000a 7A60     		str	r2, [r7, #4]
 160:Src/generated/fonts/src/FontCache.cpp ****     open();
 1922              		.loc 6 160 9
 1923 000c F868     		ldr	r0, [r7, #12]
 1924 000e FFF7FEFF 		bl	_ZN8touchgfx9FontCache4openEv
 161:Src/generated/fonts/src/FontCache.cpp ****     if (!createSortedString(string))
 1925              		.loc 6 161 28
 1926 0012 7968     		ldr	r1, [r7, #4]
 1927 0014 F868     		ldr	r0, [r7, #12]
 1928 0016 FFF7FEFF 		bl	_ZN8touchgfx9FontCache18createSortedStringEPKt
 1929 001a 0346     		mov	r3, r0
 1930              		.loc 6 161 9
 1931 001c 83F00103 		eor	r3, r3, #1
 1932 0020 DBB2     		uxtb	r3, r3
 1933              		.loc 6 161 5
 1934 0022 002B     		cmp	r3, #0
 1935 0024 04D0     		beq	.L74
 162:Src/generated/fonts/src/FontCache.cpp ****     {
 163:Src/generated/fonts/src/FontCache.cpp ****         close();
 1936              		.loc 6 163 14
 1937 0026 F868     		ldr	r0, [r7, #12]
 1938 0028 FFF7FEFF 		bl	_ZN8touchgfx9FontCache5closeEv
 164:Src/generated/fonts/src/FontCache.cpp ****         return false;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 45


 1939              		.loc 6 164 16
 1940 002c 0023     		movs	r3, #0
 1941 002e 16E0     		b	.L75
 1942              	.L74:
 165:Src/generated/fonts/src/FontCache.cpp ****     }
 166:Src/generated/fonts/src/FontCache.cpp ****     const bool result = cacheSortedString(t);
 1943              		.loc 6 166 44
 1944 0030 07F11403 		add	r3, r7, #20
 1945 0034 B968     		ldr	r1, [r7, #8]
 1946 0036 1846     		mov	r0, r3
 1947 0038 FFF7FEFF 		bl	_ZN8touchgfx9TypedTextC1ERKS0_
 1948              		.loc 6 166 42
 1949 003c 07F11403 		add	r3, r7, #20
 1950 0040 1946     		mov	r1, r3
 1951 0042 F868     		ldr	r0, [r7, #12]
 1952 0044 FFF7FEFF 		bl	_ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE
 1953 0048 0346     		mov	r3, r0
 1954 004a FB77     		strb	r3, [r7, #31]
 1955              		.loc 6 166 44
 1956 004c 07F11403 		add	r3, r7, #20
 1957 0050 1846     		mov	r0, r3
 1958 0052 FFF7FEFF 		bl	_ZN8touchgfx9TypedTextD1Ev
 167:Src/generated/fonts/src/FontCache.cpp ****     close();
 1959              		.loc 6 167 10
 1960 0056 F868     		ldr	r0, [r7, #12]
 1961 0058 FFF7FEFF 		bl	_ZN8touchgfx9FontCache5closeEv
 168:Src/generated/fonts/src/FontCache.cpp ****     return result;
 1962              		.loc 6 168 12
 1963 005c FB7F     		ldrb	r3, [r7, #31]	@ zero_extendqisi2
 1964              	.L75:
 169:Src/generated/fonts/src/FontCache.cpp **** }
 1965              		.loc 6 169 1
 1966 005e 1846     		mov	r0, r3
 1967 0060 2037     		adds	r7, r7, #32
 1968              	.LCFI120:
 1969              		.cfi_def_cfa_offset 8
 1970 0062 BD46     		mov	sp, r7
 1971              	.LCFI121:
 1972              		.cfi_def_cfa_register 13
 1973              		@ sp needed
 1974 0064 80BD     		pop	{r7, pc}
 1975              		.cfi_endproc
 1976              	.LFE184:
 1978              		.section	.text._ZN8touchgfx9FontCache14cacheLigaturesEPNS_10CachedFontENS_9TypedTextEPKt,"ax",%pro
 1979              		.align	1
 1980              		.global	_ZN8touchgfx9FontCache14cacheLigaturesEPNS_10CachedFontENS_9TypedTextEPKt
 1981              		.syntax unified
 1982              		.thumb
 1983              		.thumb_func
 1984              		.fpu fpv4-sp-d16
 1986              	_ZN8touchgfx9FontCache14cacheLigaturesEPNS_10CachedFontENS_9TypedTextEPKt:
 1987              	.LFB188:
 170:Src/generated/fonts/src/FontCache.cpp **** 
 171:Src/generated/fonts/src/FontCache.cpp **** bool FontCache::cacheLigatures(CachedFont* font, TypedText t, const Unicode::UnicodeChar* string)
 172:Src/generated/fonts/src/FontCache.cpp **** {
 1988              		.loc 6 172 1
 1989              		.cfi_startproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 46


 1990              		@ args = 0, pretend = 0, frame = 40
 1991              		@ frame_needed = 1, uses_anonymous_args = 0
 1992 0000 90B5     		push	{r4, r7, lr}
 1993              	.LCFI122:
 1994              		.cfi_def_cfa_offset 12
 1995              		.cfi_offset 4, -12
 1996              		.cfi_offset 7, -8
 1997              		.cfi_offset 14, -4
 1998 0002 8DB0     		sub	sp, sp, #52
 1999              	.LCFI123:
 2000              		.cfi_def_cfa_offset 64
 2001 0004 02AF     		add	r7, sp, #8
 2002              	.LCFI124:
 2003              		.cfi_def_cfa 7, 56
 2004 0006 F860     		str	r0, [r7, #12]
 2005 0008 B960     		str	r1, [r7, #8]
 2006 000a 7A60     		str	r2, [r7, #4]
 2007 000c 3B60     		str	r3, [r7]
 173:Src/generated/fonts/src/FontCache.cpp ****     open();
 2008              		.loc 6 173 9
 2009 000e F868     		ldr	r0, [r7, #12]
 2010 0010 FFF7FEFF 		bl	_ZN8touchgfx9FontCache4openEv
 174:Src/generated/fonts/src/FontCache.cpp ****     if (!createSortedLigatures(font, t, string, 0, 0))
 2011              		.loc 6 174 53
 2012 0014 07F11403 		add	r3, r7, #20
 2013 0018 7968     		ldr	r1, [r7, #4]
 2014 001a 1846     		mov	r0, r3
 2015 001c FFF7FEFF 		bl	_ZN8touchgfx9TypedTextC1ERKS0_
 2016              		.loc 6 174 31
 2017 0020 07F11402 		add	r2, r7, #20
 2018 0024 0023     		movs	r3, #0
 2019 0026 0193     		str	r3, [sp, #4]
 2020 0028 0023     		movs	r3, #0
 2021 002a 0093     		str	r3, [sp]
 2022 002c 3B68     		ldr	r3, [r7]
 2023 002e B968     		ldr	r1, [r7, #8]
 2024 0030 F868     		ldr	r0, [r7, #12]
 2025 0032 FFF7FEFF 		bl	_ZN8touchgfx9FontCache21createSortedLigaturesEPNS_10CachedFontENS_9TypedTextEPKtz
 2026 0036 0346     		mov	r3, r0
 2027              		.loc 6 174 9
 2028 0038 83F00103 		eor	r3, r3, #1
 2029 003c DCB2     		uxtb	r4, r3
 2030              		.loc 6 174 53
 2031 003e 07F11403 		add	r3, r7, #20
 2032 0042 1846     		mov	r0, r3
 2033 0044 FFF7FEFF 		bl	_ZN8touchgfx9TypedTextD1Ev
 2034              		.loc 6 174 5
 2035 0048 002C     		cmp	r4, #0
 2036 004a 04D0     		beq	.L77
 175:Src/generated/fonts/src/FontCache.cpp ****     {
 176:Src/generated/fonts/src/FontCache.cpp ****         close();
 2037              		.loc 6 176 14
 2038 004c F868     		ldr	r0, [r7, #12]
 2039 004e FFF7FEFF 		bl	_ZN8touchgfx9FontCache5closeEv
 177:Src/generated/fonts/src/FontCache.cpp ****         return false;
 2040              		.loc 6 177 16
 2041 0052 0023     		movs	r3, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 47


 2042 0054 18E0     		b	.L78
 2043              	.L77:
 178:Src/generated/fonts/src/FontCache.cpp ****     }
 179:Src/generated/fonts/src/FontCache.cpp ****     const bool result = cacheSortedString(t);
 2044              		.loc 6 179 44
 2045 0056 07F11C03 		add	r3, r7, #28
 2046 005a 7968     		ldr	r1, [r7, #4]
 2047 005c 1846     		mov	r0, r3
 2048 005e FFF7FEFF 		bl	_ZN8touchgfx9TypedTextC1ERKS0_
 2049              		.loc 6 179 42
 2050 0062 07F11C03 		add	r3, r7, #28
 2051 0066 1946     		mov	r1, r3
 2052 0068 F868     		ldr	r0, [r7, #12]
 2053 006a FFF7FEFF 		bl	_ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE
 2054 006e 0346     		mov	r3, r0
 2055 0070 87F82730 		strb	r3, [r7, #39]
 2056              		.loc 6 179 44
 2057 0074 07F11C03 		add	r3, r7, #28
 2058 0078 1846     		mov	r0, r3
 2059 007a FFF7FEFF 		bl	_ZN8touchgfx9TypedTextD1Ev
 180:Src/generated/fonts/src/FontCache.cpp ****     close();
 2060              		.loc 6 180 10
 2061 007e F868     		ldr	r0, [r7, #12]
 2062 0080 FFF7FEFF 		bl	_ZN8touchgfx9FontCache5closeEv
 181:Src/generated/fonts/src/FontCache.cpp ****     return result;
 2063              		.loc 6 181 12
 2064 0084 97F82730 		ldrb	r3, [r7, #39]	@ zero_extendqisi2
 2065              	.L78:
 182:Src/generated/fonts/src/FontCache.cpp **** }
 2066              		.loc 6 182 1
 2067 0088 1846     		mov	r0, r3
 2068 008a 2C37     		adds	r7, r7, #44
 2069              	.LCFI125:
 2070              		.cfi_def_cfa_offset 12
 2071 008c BD46     		mov	sp, r7
 2072              	.LCFI126:
 2073              		.cfi_def_cfa_register 13
 2074              		@ sp needed
 2075 008e 90BD     		pop	{r4, r7, pc}
 2076              		.cfi_endproc
 2077              	.LFE188:
 2079              		.section	.text._ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE,"ax",%progbits
 2080              		.align	1
 2081              		.global	_ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE
 2082              		.syntax unified
 2083              		.thumb
 2084              		.thumb_func
 2085              		.fpu fpv4-sp-d16
 2087              	_ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE:
 2088              	.LFB189:
 183:Src/generated/fonts/src/FontCache.cpp **** 
 184:Src/generated/fonts/src/FontCache.cpp **** bool FontCache::cacheSortedString(TypedText t)
 185:Src/generated/fonts/src/FontCache.cpp **** {
 2089              		.loc 6 185 1
 2090              		.cfi_startproc
 2091              		@ args = 0, pretend = 0, frame = 64
 2092              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 48


 2093 0000 80B5     		push	{r7, lr}
 2094              	.LCFI127:
 2095              		.cfi_def_cfa_offset 8
 2096              		.cfi_offset 7, -8
 2097              		.cfi_offset 14, -4
 2098 0002 92B0     		sub	sp, sp, #72
 2099              	.LCFI128:
 2100              		.cfi_def_cfa_offset 80
 2101 0004 02AF     		add	r7, sp, #8
 2102              	.LCFI129:
 2103              		.cfi_def_cfa 7, 72
 2104 0006 7860     		str	r0, [r7, #4]
 2105 0008 3960     		str	r1, [r7]
 186:Src/generated/fonts/src/FontCache.cpp ****     setPosition(8); //skip font index and size
 2106              		.loc 6 186 16
 2107 000a 0821     		movs	r1, #8
 2108 000c 7868     		ldr	r0, [r7, #4]
 2109 000e FFF7FEFF 		bl	_ZN8touchgfx9FontCache11setPositionEm
 187:Src/generated/fonts/src/FontCache.cpp ****     uint32_t glyphNodeOffset;
 188:Src/generated/fonts/src/FontCache.cpp ****     uint32_t dummy;
 189:Src/generated/fonts/src/FontCache.cpp ****     readData(&glyphNodeOffset, sizeof(uint32_t)); //offsetToTable
 2110              		.loc 6 189 13
 2111 0012 07F11403 		add	r3, r7, #20
 2112 0016 0422     		movs	r2, #4
 2113 0018 1946     		mov	r1, r3
 2114 001a 7868     		ldr	r0, [r7, #4]
 2115 001c FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 190:Src/generated/fonts/src/FontCache.cpp ****     readData(&dummy, sizeof(uint32_t));           //offsetToKerning
 2116              		.loc 6 190 13
 2117 0020 07F11003 		add	r3, r7, #16
 2118 0024 0422     		movs	r2, #4
 2119 0026 1946     		mov	r1, r3
 2120 0028 7868     		ldr	r0, [r7, #4]
 2121 002a FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 191:Src/generated/fonts/src/FontCache.cpp ****     readData(&glyphDataOffset, sizeof(uint32_t)); //offsetToGlyphs
 2122              		.loc 6 191 14
 2123 002e 7B68     		ldr	r3, [r7, #4]
 2124 0030 7033     		adds	r3, r3, #112
 2125              		.loc 6 191 13
 2126 0032 0422     		movs	r2, #4
 2127 0034 1946     		mov	r1, r3
 2128 0036 7868     		ldr	r0, [r7, #4]
 2129 0038 FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 192:Src/generated/fonts/src/FontCache.cpp ****     readData(&dummy, sizeof(uint32_t));           //offsetToGlyphs
 2130              		.loc 6 192 13
 2131 003c 07F11003 		add	r3, r7, #16
 2132 0040 0422     		movs	r2, #4
 2133 0042 1946     		mov	r1, r3
 2134 0044 7868     		ldr	r0, [r7, #4]
 2135 0046 FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 193:Src/generated/fonts/src/FontCache.cpp ****     readData(&dummy, sizeof(uint32_t));           //offsetToArabicTable
 2136              		.loc 6 193 13
 2137 004a 07F11003 		add	r3, r7, #16
 2138 004e 0422     		movs	r2, #4
 2139 0050 1946     		mov	r1, r3
 2140 0052 7868     		ldr	r0, [r7, #4]
 2141 0054 FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 49


 194:Src/generated/fonts/src/FontCache.cpp ****     readData(&numGlyphs, sizeof(uint16_t));       //numberOfGlyphs
 2142              		.loc 6 194 14
 2143 0058 7B68     		ldr	r3, [r7, #4]
 2144 005a 7433     		adds	r3, r3, #116
 2145              		.loc 6 194 13
 2146 005c 0222     		movs	r2, #2
 2147 005e 1946     		mov	r1, r3
 2148 0060 7868     		ldr	r0, [r7, #4]
 2149 0062 FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 2150 0066 3B68     		ldr	r3, [r7]
 2151 0068 FB61     		str	r3, [r7, #28]
 2152 006a FB69     		ldr	r3, [r7, #28]
 2153 006c BB61     		str	r3, [r7, #24]
 2154              	.LBB64:
 2155              	.LBB65:
 2156              	.LBB66:
 2157              	.LBB67:
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assert(typedTextId < numberOfTypedTexts && "typedTextId larger than numberOfTypedTexts.");
 2158              		.loc 2 174 9
 2159 006e 524B     		ldr	r3, .L96
 2160 0070 1B68     		ldr	r3, [r3]
 2161 0072 002B     		cmp	r3, #0
 2162 0074 05D1     		bne	.L80
 2163 0076 514B     		ldr	r3, .L96+4
 2164 0078 514A     		ldr	r2, .L96+8
 2165 007a AE21     		movs	r1, #174
 2166 007c 5148     		ldr	r0, .L96+12
 2167 007e FFF7FEFF 		bl	__assert_func
 2168              	.L80:
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2169              		.loc 2 175 9
 2170 0082 BB69     		ldr	r3, [r7, #24]
 2171 0084 9A88     		ldrh	r2, [r3, #4]
 2172 0086 504B     		ldr	r3, .L96+16
 2173 0088 1B88     		ldrh	r3, [r3]
 2174 008a 9A42     		cmp	r2, r3
 2175 008c 05D3     		bcc	.L93
 2176 008e 4F4B     		ldr	r3, .L96+20
 2177 0090 4B4A     		ldr	r2, .L96+8
 2178 0092 AF21     		movs	r1, #175
 2179 0094 4B48     		ldr	r0, .L96+12
 2180 0096 FFF7FEFF 		bl	__assert_func
 2181              	.L93:
 2182              		.loc 2 176 5
 2183 009a 00BF     		nop
 2184              	.LBE67:
 2185              	.LBE66:
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2186              		.loc 2 119 38
 2187 009c 464B     		ldr	r3, .L96
 2188 009e 1A68     		ldr	r2, [r3]
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2189              		.loc 2 119 27
 2190 00a0 FB69     		ldr	r3, [r7, #28]
 2191 00a2 9B88     		ldrh	r3, [r3, #4]
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2192              		.loc 2 119 38
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 50


 2193 00a4 5B00     		lsls	r3, r3, #1
 2194 00a6 1344     		add	r3, r3, r2
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2195              		.loc 2 119 40
 2196 00a8 1B78     		ldrb	r3, [r3]	@ zero_extendqisi2
 2197 00aa 9BB2     		uxth	r3, r3
 2198              	.LBE65:
 2199              	.LBE64:
 195:Src/generated/fonts/src/FontCache.cpp **** 
 196:Src/generated/fonts/src/FontCache.cpp ****     FontId fontId = t.getFontId();                 // Get font index from typed text
 2200              		.loc 6 196 32
 2201 00ac 7B86     		strh	r3, [r7, #50]	@ movhi
 2202 00ae 3B68     		ldr	r3, [r7]
 2203 00b0 7B62     		str	r3, [r7, #36]
 2204 00b2 7B6A     		ldr	r3, [r7, #36]
 2205 00b4 3B62     		str	r3, [r7, #32]
 2206              	.LBB68:
 2207              	.LBB69:
 2208              	.LBB70:
 2209              	.LBB71:
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assert(typedTextId < numberOfTypedTexts && "typedTextId larger than numberOfTypedTexts.");
 2210              		.loc 2 174 9
 2211 00b6 404B     		ldr	r3, .L96
 2212 00b8 1B68     		ldr	r3, [r3]
 2213 00ba 002B     		cmp	r3, #0
 2214 00bc 05D1     		bne	.L83
 2215 00be 3F4B     		ldr	r3, .L96+4
 2216 00c0 3F4A     		ldr	r2, .L96+8
 2217 00c2 AE21     		movs	r1, #174
 2218 00c4 3F48     		ldr	r0, .L96+12
 2219 00c6 FFF7FEFF 		bl	__assert_func
 2220              	.L83:
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2221              		.loc 2 175 9
 2222 00ca 3B6A     		ldr	r3, [r7, #32]
 2223 00cc 9A88     		ldrh	r2, [r3, #4]
 2224 00ce 3E4B     		ldr	r3, .L96+16
 2225 00d0 1B88     		ldrh	r3, [r3]
 2226 00d2 9A42     		cmp	r2, r3
 2227 00d4 05D3     		bcc	.L94
 2228 00d6 3D4B     		ldr	r3, .L96+20
 2229 00d8 394A     		ldr	r2, .L96+8
 2230 00da AF21     		movs	r1, #175
 2231 00dc 3948     		ldr	r0, .L96+12
 2232 00de FFF7FEFF 		bl	__assert_func
 2233              	.L94:
 2234              		.loc 2 176 5
 2235 00e2 00BF     		nop
 2236              	.LBE71:
 2237              	.LBE70:
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2238              		.loc 2 108 53
 2239 00e4 3A4B     		ldr	r3, .L96+24
 2240 00e6 1A68     		ldr	r2, [r3]
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2241              		.loc 2 108 44
 2242 00e8 334B     		ldr	r3, .L96
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 51


 2243 00ea 1968     		ldr	r1, [r3]
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2244              		.loc 2 108 33
 2245 00ec 7B6A     		ldr	r3, [r7, #36]
 2246 00ee 9B88     		ldrh	r3, [r3, #4]
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2247              		.loc 2 108 44
 2248 00f0 5B00     		lsls	r3, r3, #1
 2249 00f2 0B44     		add	r3, r3, r1
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2250              		.loc 2 108 46
 2251 00f4 1B78     		ldrb	r3, [r3]	@ zero_extendqisi2
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 2252              		.loc 2 108 53
 2253 00f6 9B00     		lsls	r3, r3, #2
 2254 00f8 1344     		add	r3, r3, r2
 2255 00fa 1B68     		ldr	r3, [r3]
 2256              	.LBE69:
 2257              	.LBE68:
 197:Src/generated/fonts/src/FontCache.cpp ****     uint32_t bpp = t.getFont()->getBitsPerPixel(); // Get BPP from standard font
 2258              		.loc 6 197 49
 2259 00fc 1A68     		ldr	r2, [r3]
 2260 00fe 3432     		adds	r2, r2, #52
 2261 0100 1268     		ldr	r2, [r2]
 2262              		.loc 6 197 48
 2263 0102 1846     		mov	r0, r3
 2264 0104 9047     		blx	r2
 2265              	.LVL6:
 2266 0106 0346     		mov	r3, r0
 2267              		.loc 6 197 49
 2268 0108 FB62     		str	r3, [r7, #44]
 198:Src/generated/fonts/src/FontCache.cpp **** 
 199:Src/generated/fonts/src/FontCache.cpp ****     setPosition(glyphNodeOffset); // Go to glyph nodes for font
 2269              		.loc 6 199 16
 2270 010a 7B69     		ldr	r3, [r7, #20]
 2271 010c 1946     		mov	r1, r3
 2272 010e 7868     		ldr	r0, [r7, #4]
 2273 0110 FFF7FEFF 		bl	_ZN8touchgfx9FontCache11setPositionEm
 200:Src/generated/fonts/src/FontCache.cpp ****     currentFileGlyphNumber = 0;
 2274              		.loc 6 200 28
 2275 0114 7B68     		ldr	r3, [r7, #4]
 2276 0116 0022     		movs	r2, #0
 2277 0118 A3F87620 		strh	r2, [r3, #118]	@ movhi
 201:Src/generated/fonts/src/FontCache.cpp ****     currentFileGlyphNode.unicode = 0; // Force reading of first glyph
 2278              		.loc 6 201 34
 2279 011c 7B68     		ldr	r3, [r7, #4]
 2280 011e 0022     		movs	r2, #0
 2281 0120 A3F87C20 		strh	r2, [r3, #124]	@ movhi
 202:Src/generated/fonts/src/FontCache.cpp **** 
 203:Src/generated/fonts/src/FontCache.cpp ****     const Unicode::UnicodeChar* string = sortedString;
 2282              		.loc 6 203 33
 2283 0124 7B68     		ldr	r3, [r7, #4]
 2284 0126 DB6A     		ldr	r3, [r3, #44]
 2285 0128 FB63     		str	r3, [r7, #60]
 204:Src/generated/fonts/src/FontCache.cpp ****     Unicode::UnicodeChar last = 0;
 2286              		.loc 6 204 26
 2287 012a 0023     		movs	r3, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 52


 2288 012c 7B87     		strh	r3, [r7, #58]	@ movhi
 205:Src/generated/fonts/src/FontCache.cpp ****     GlyphNode* firstNewGlyph = 0;
 2289              		.loc 6 205 16
 2290 012e 0023     		movs	r3, #0
 2291 0130 7B63     		str	r3, [r7, #52]
 206:Src/generated/fonts/src/FontCache.cpp ****     bool outOfMemory = false;
 2292              		.loc 6 206 10
 2293 0132 0023     		movs	r3, #0
 2294 0134 FB73     		strb	r3, [r7, #15]
 2295              	.L89:
 207:Src/generated/fonts/src/FontCache.cpp ****     while (*string)
 2296              		.loc 6 207 12
 2297 0136 FB6B     		ldr	r3, [r7, #60]
 2298 0138 1B88     		ldrh	r3, [r3]
 2299 013a 002B     		cmp	r3, #0
 2300 013c 2ED0     		beq	.L86
 2301              	.LBB72:
 208:Src/generated/fonts/src/FontCache.cpp ****     {
 209:Src/generated/fonts/src/FontCache.cpp ****         Unicode::UnicodeChar ch = *string;
 2302              		.loc 6 209 30
 2303 013e FB6B     		ldr	r3, [r7, #60]
 2304 0140 1B88     		ldrh	r3, [r3]	@ movhi
 2305 0142 7B85     		strh	r3, [r7, #42]	@ movhi
 210:Src/generated/fonts/src/FontCache.cpp ****         if (ch != last)
 2306              		.loc 6 210 9
 2307 0144 7A8D     		ldrh	r2, [r7, #42]
 2308 0146 7B8F     		ldrh	r3, [r7, #58]
 2309 0148 9A42     		cmp	r2, r3
 2310 014a 20D0     		beq	.L87
 211:Src/generated/fonts/src/FontCache.cpp ****         {
 212:Src/generated/fonts/src/FontCache.cpp ****             if (!contains(ch, fontId))
 2311              		.loc 6 212 26
 2312 014c 7A8E     		ldrh	r2, [r7, #50]
 2313 014e 7B8D     		ldrh	r3, [r7, #42]
 2314 0150 1946     		mov	r1, r3
 2315 0152 7868     		ldr	r0, [r7, #4]
 2316 0154 FFF7FEFF 		bl	_ZNK8touchgfx9FontCache8containsEtt
 2317 0158 0346     		mov	r3, r0
 2318              		.loc 6 212 17
 2319 015a 83F00103 		eor	r3, r3, #1
 2320 015e DBB2     		uxtb	r3, r3
 2321              		.loc 6 212 13
 2322 0160 002B     		cmp	r3, #0
 2323 0162 14D0     		beq	.L87
 213:Src/generated/fonts/src/FontCache.cpp ****             {
 214:Src/generated/fonts/src/FontCache.cpp ****                 insert(ch, fontId, bpp, outOfMemory);
 2324              		.loc 6 214 23
 2325 0164 7A8E     		ldrh	r2, [r7, #50]
 2326 0166 798D     		ldrh	r1, [r7, #42]
 2327 0168 07F10F03 		add	r3, r7, #15
 2328 016c 0093     		str	r3, [sp]
 2329 016e FB6A     		ldr	r3, [r7, #44]
 2330 0170 7868     		ldr	r0, [r7, #4]
 2331 0172 FFF7FEFF 		bl	_ZN8touchgfx9FontCache6insertEttmRb
 215:Src/generated/fonts/src/FontCache.cpp ****                 if (outOfMemory)
 2332              		.loc 6 215 17
 2333 0176 FB7B     		ldrb	r3, [r7, #15]	@ zero_extendqisi2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 53


 2334 0178 002B     		cmp	r3, #0
 2335 017a 0ED1     		bne	.L95
 216:Src/generated/fonts/src/FontCache.cpp ****                 {
 217:Src/generated/fonts/src/FontCache.cpp ****                     break;
 218:Src/generated/fonts/src/FontCache.cpp ****                 }
 219:Src/generated/fonts/src/FontCache.cpp ****                 if (firstNewGlyph == 0)
 2336              		.loc 6 219 17
 2337 017c 7B6B     		ldr	r3, [r7, #52]
 2338 017e 002B     		cmp	r3, #0
 2339 0180 05D1     		bne	.L87
 220:Src/generated/fonts/src/FontCache.cpp ****                 {
 221:Src/generated/fonts/src/FontCache.cpp ****                     firstNewGlyph = (GlyphNode*)fontTable[fontId].last;
 2340              		.loc 6 221 59
 2341 0182 7B8E     		ldrh	r3, [r7, #50]
 2342              		.loc 6 221 35
 2343 0184 7A68     		ldr	r2, [r7, #4]
 2344 0186 DB00     		lsls	r3, r3, #3
 2345 0188 1344     		add	r3, r3, r2
 2346 018a 5B68     		ldr	r3, [r3, #4]
 2347 018c 7B63     		str	r3, [r7, #52]
 2348              	.L87:
 222:Src/generated/fonts/src/FontCache.cpp ****                 }
 223:Src/generated/fonts/src/FontCache.cpp ****             }
 224:Src/generated/fonts/src/FontCache.cpp ****         }
 225:Src/generated/fonts/src/FontCache.cpp ****         last = ch;
 2349              		.loc 6 225 14
 2350 018e 7B8D     		ldrh	r3, [r7, #42]	@ movhi
 2351 0190 7B87     		strh	r3, [r7, #58]	@ movhi
 226:Src/generated/fonts/src/FontCache.cpp ****         string++;
 2352              		.loc 6 226 15
 2353 0192 FB6B     		ldr	r3, [r7, #60]
 2354 0194 0233     		adds	r3, r3, #2
 2355 0196 FB63     		str	r3, [r7, #60]
 2356              	.LBE72:
 207:Src/generated/fonts/src/FontCache.cpp ****     {
 2357              		.loc 6 207 5
 2358 0198 CDE7     		b	.L89
 2359              	.L95:
 2360              	.LBB73:
 217:Src/generated/fonts/src/FontCache.cpp ****                 }
 2361              		.loc 6 217 21
 2362 019a 00BF     		nop
 2363              	.L86:
 2364              	.LBE73:
 227:Src/generated/fonts/src/FontCache.cpp ****     }
 228:Src/generated/fonts/src/FontCache.cpp **** 
 229:Src/generated/fonts/src/FontCache.cpp ****     cacheData(bpp, firstNewGlyph);
 2365              		.loc 6 229 14
 2366 019c 7A6B     		ldr	r2, [r7, #52]
 2367 019e F96A     		ldr	r1, [r7, #44]
 2368 01a0 7868     		ldr	r0, [r7, #4]
 2369 01a2 FFF7FEFF 		bl	_ZN8touchgfx9FontCache9cacheDataEmPNS_9GlyphNodeE
 230:Src/generated/fonts/src/FontCache.cpp ****     return !outOfMemory;
 2370              		.loc 6 230 12
 2371 01a6 FB7B     		ldrb	r3, [r7, #15]	@ zero_extendqisi2
 2372              		.loc 6 230 13
 2373 01a8 83F00103 		eor	r3, r3, #1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 54


 2374 01ac DBB2     		uxtb	r3, r3
 231:Src/generated/fonts/src/FontCache.cpp **** }
 2375              		.loc 6 231 1
 2376 01ae 1846     		mov	r0, r3
 2377 01b0 4037     		adds	r7, r7, #64
 2378              	.LCFI130:
 2379              		.cfi_def_cfa_offset 8
 2380 01b2 BD46     		mov	sp, r7
 2381              	.LCFI131:
 2382              		.cfi_def_cfa_register 13
 2383              		@ sp needed
 2384 01b4 80BD     		pop	{r7, pc}
 2385              	.L97:
 2386 01b6 00BF     		.align	2
 2387              	.L96:
 2388 01b8 00000000 		.word	_ZN8touchgfx9TypedText10typedTextsE
 2389 01bc 00000000 		.word	.LC0
 2390 01c0 44000000 		.word	.LC1
 2391 01c4 74000000 		.word	.LC2
 2392 01c8 00000000 		.word	_ZN8touchgfx9TypedText18numberOfTypedTextsE
 2393 01cc B8000000 		.word	.LC3
 2394 01d0 00000000 		.word	_ZN8touchgfx9TypedText5fontsE
 2395              		.cfi_endproc
 2396              	.LFE189:
 2398              		.section	.text._ZNK8touchgfx9FontCache8containsEtt,"ax",%progbits
 2399              		.align	1
 2400              		.global	_ZNK8touchgfx9FontCache8containsEtt
 2401              		.syntax unified
 2402              		.thumb
 2403              		.thumb_func
 2404              		.fpu fpv4-sp-d16
 2406              	_ZNK8touchgfx9FontCache8containsEtt:
 2407              	.LFB190:
 232:Src/generated/fonts/src/FontCache.cpp **** 
 233:Src/generated/fonts/src/FontCache.cpp **** bool FontCache::contains(Unicode::UnicodeChar unicode, FontId font) const
 234:Src/generated/fonts/src/FontCache.cpp **** {
 2408              		.loc 6 234 1
 2409              		.cfi_startproc
 2410              		@ args = 0, pretend = 0, frame = 16
 2411              		@ frame_needed = 1, uses_anonymous_args = 0
 2412              		@ link register save eliminated.
 2413 0000 80B4     		push	{r7}
 2414              	.LCFI132:
 2415              		.cfi_def_cfa_offset 4
 2416              		.cfi_offset 7, -4
 2417 0002 85B0     		sub	sp, sp, #20
 2418              	.LCFI133:
 2419              		.cfi_def_cfa_offset 24
 2420 0004 00AF     		add	r7, sp, #0
 2421              	.LCFI134:
 2422              		.cfi_def_cfa_register 7
 2423 0006 7860     		str	r0, [r7, #4]
 2424 0008 0B46     		mov	r3, r1
 2425 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 2426 000c 1346     		mov	r3, r2	@ movhi
 2427 000e 3B80     		strh	r3, [r7]	@ movhi
 235:Src/generated/fonts/src/FontCache.cpp ****     GlyphNode* g = (GlyphNode*)fontTable[font].first;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 55


 2428              		.loc 6 235 42
 2429 0010 3A88     		ldrh	r2, [r7]
 2430              		.loc 6 235 16
 2431 0012 7B68     		ldr	r3, [r7, #4]
 2432 0014 53F83230 		ldr	r3, [r3, r2, lsl #3]
 2433 0018 FB60     		str	r3, [r7, #12]
 2434              	.L102:
 236:Src/generated/fonts/src/FontCache.cpp ****     while (g)
 2435              		.loc 6 236 12
 2436 001a FB68     		ldr	r3, [r7, #12]
 2437 001c 002B     		cmp	r3, #0
 2438 001e 0DD0     		beq	.L99
 2439              	.LBB74:
 237:Src/generated/fonts/src/FontCache.cpp ****     {
 238:Src/generated/fonts/src/FontCache.cpp ****         if (g->unicode == unicode)
 2440              		.loc 6 238 16
 2441 0020 FB68     		ldr	r3, [r7, #12]
 2442 0022 9B88     		ldrh	r3, [r3, #4]
 2443              		.loc 6 238 9
 2444 0024 7A88     		ldrh	r2, [r7, #2]
 2445 0026 9A42     		cmp	r2, r3
 2446 0028 01D1     		bne	.L100
 239:Src/generated/fonts/src/FontCache.cpp ****         {
 240:Src/generated/fonts/src/FontCache.cpp ****             return true;
 2447              		.loc 6 240 20
 2448 002a 0123     		movs	r3, #1
 2449 002c 07E0     		b	.L101
 2450              	.L100:
 241:Src/generated/fonts/src/FontCache.cpp ****         }
 242:Src/generated/fonts/src/FontCache.cpp ****         GlyphNode** next = (GlyphNode**)((uint8_t*)g + SizeGlyphNode);
 2451              		.loc 6 242 21
 2452 002e FB68     		ldr	r3, [r7, #12]
 2453 0030 1033     		adds	r3, r3, #16
 2454 0032 BB60     		str	r3, [r7, #8]
 243:Src/generated/fonts/src/FontCache.cpp ****         g = *next;
 2455              		.loc 6 243 11
 2456 0034 BB68     		ldr	r3, [r7, #8]
 2457 0036 1B68     		ldr	r3, [r3]
 2458 0038 FB60     		str	r3, [r7, #12]
 2459              	.LBE74:
 236:Src/generated/fonts/src/FontCache.cpp ****     {
 2460              		.loc 6 236 5
 2461 003a EEE7     		b	.L102
 2462              	.L99:
 244:Src/generated/fonts/src/FontCache.cpp ****     }
 245:Src/generated/fonts/src/FontCache.cpp ****     return false;
 2463              		.loc 6 245 12
 2464 003c 0023     		movs	r3, #0
 2465              	.L101:
 246:Src/generated/fonts/src/FontCache.cpp **** }
 2466              		.loc 6 246 1
 2467 003e 1846     		mov	r0, r3
 2468 0040 1437     		adds	r7, r7, #20
 2469              	.LCFI135:
 2470              		.cfi_def_cfa_offset 4
 2471 0042 BD46     		mov	sp, r7
 2472              	.LCFI136:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 56


 2473              		.cfi_def_cfa_register 13
 2474              		@ sp needed
 2475 0044 5DF8047B 		ldr	r7, [sp], #4
 2476              	.LCFI137:
 2477              		.cfi_restore 7
 2478              		.cfi_def_cfa_offset 0
 2479 0048 7047     		bx	lr
 2480              		.cfi_endproc
 2481              	.LFE190:
 2483              		.section	.text._ZN8touchgfx9FontCache6insertEttmRb,"ax",%progbits
 2484              		.align	1
 2485              		.global	_ZN8touchgfx9FontCache6insertEttmRb
 2486              		.syntax unified
 2487              		.thumb
 2488              		.thumb_func
 2489              		.fpu fpv4-sp-d16
 2491              	_ZN8touchgfx9FontCache6insertEttmRb:
 2492              	.LFB191:
 247:Src/generated/fonts/src/FontCache.cpp **** 
 248:Src/generated/fonts/src/FontCache.cpp **** void FontCache::insert(Unicode::UnicodeChar unicode, FontId font, uint32_t bpp, bool& outOfMemory)
 249:Src/generated/fonts/src/FontCache.cpp **** {
 2493              		.loc 6 249 1
 2494              		.cfi_startproc
 2495              		@ args = 4, pretend = 0, frame = 24
 2496              		@ frame_needed = 1, uses_anonymous_args = 0
 2497 0000 80B5     		push	{r7, lr}
 2498              	.LCFI138:
 2499              		.cfi_def_cfa_offset 8
 2500              		.cfi_offset 7, -8
 2501              		.cfi_offset 14, -4
 2502 0002 88B0     		sub	sp, sp, #32
 2503              	.LCFI139:
 2504              		.cfi_def_cfa_offset 40
 2505 0004 02AF     		add	r7, sp, #8
 2506              	.LCFI140:
 2507              		.cfi_def_cfa 7, 32
 2508 0006 F860     		str	r0, [r7, #12]
 2509 0008 7B60     		str	r3, [r7, #4]
 2510 000a 0B46     		mov	r3, r1	@ movhi
 2511 000c 7B81     		strh	r3, [r7, #10]	@ movhi
 2512 000e 1346     		mov	r3, r2	@ movhi
 2513 0010 3B81     		strh	r3, [r7, #8]	@ movhi
 250:Src/generated/fonts/src/FontCache.cpp ****     //insert new glyphnode and glyph after last for font.
 251:Src/generated/fonts/src/FontCache.cpp ****     uint8_t* oldTop = top;
 2514              		.loc 6 251 14
 2515 0012 FB68     		ldr	r3, [r7, #12]
 2516 0014 1B6A     		ldr	r3, [r3, #32]
 2517 0016 7B61     		str	r3, [r7, #20]
 252:Src/generated/fonts/src/FontCache.cpp ****     top = copyGlyph(top, unicode, font, bpp, outOfMemory);
 2518              		.loc 6 252 20
 2519 0018 FB68     		ldr	r3, [r7, #12]
 2520 001a 196A     		ldr	r1, [r3, #32]
 2521 001c 3889     		ldrh	r0, [r7, #8]
 2522 001e 7A89     		ldrh	r2, [r7, #10]
 2523 0020 3B6A     		ldr	r3, [r7, #32]
 2524 0022 0193     		str	r3, [sp, #4]
 2525 0024 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 57


 2526 0026 0093     		str	r3, [sp]
 2527 0028 0346     		mov	r3, r0
 2528 002a F868     		ldr	r0, [r7, #12]
 2529 002c FFF7FEFF 		bl	_ZN8touchgfx9FontCache9copyGlyphEPhttmRb
 2530 0030 0246     		mov	r2, r0
 2531              		.loc 6 252 9
 2532 0032 FB68     		ldr	r3, [r7, #12]
 2533 0034 1A62     		str	r2, [r3, #32]
 253:Src/generated/fonts/src/FontCache.cpp **** 
 254:Src/generated/fonts/src/FontCache.cpp ****     if (top == oldTop)
 2534              		.loc 6 254 9
 2535 0036 FB68     		ldr	r3, [r7, #12]
 2536 0038 1B6A     		ldr	r3, [r3, #32]
 2537              		.loc 6 254 5
 2538 003a 7A69     		ldr	r2, [r7, #20]
 2539 003c 9A42     		cmp	r2, r3
 2540 003e 23D0     		beq	.L107
 2541              	.LBB75:
 255:Src/generated/fonts/src/FontCache.cpp ****     {
 256:Src/generated/fonts/src/FontCache.cpp ****         return;
 257:Src/generated/fonts/src/FontCache.cpp ****     }
 258:Src/generated/fonts/src/FontCache.cpp **** 
 259:Src/generated/fonts/src/FontCache.cpp ****     if (fontTable[font].last == 0)
 2542              		.loc 6 259 19
 2543 0040 3B89     		ldrh	r3, [r7, #8]
 2544              		.loc 6 259 25
 2545 0042 FA68     		ldr	r2, [r7, #12]
 2546 0044 DB00     		lsls	r3, r3, #3
 2547 0046 1344     		add	r3, r3, r2
 2548 0048 5B68     		ldr	r3, [r3, #4]
 2549              		.loc 6 259 5
 2550 004a 002B     		cmp	r3, #0
 2551 004c 0BD1     		bne	.L106
 260:Src/generated/fonts/src/FontCache.cpp ****     {
 261:Src/generated/fonts/src/FontCache.cpp ****         //first glyph
 262:Src/generated/fonts/src/FontCache.cpp ****         fontTable[font].first = oldTop;
 2552              		.loc 6 262 19
 2553 004e 3A89     		ldrh	r2, [r7, #8]
 2554              		.loc 6 262 31
 2555 0050 FB68     		ldr	r3, [r7, #12]
 2556 0052 7969     		ldr	r1, [r7, #20]
 2557 0054 43F83210 		str	r1, [r3, r2, lsl #3]
 263:Src/generated/fonts/src/FontCache.cpp ****         fontTable[font].last = oldTop;
 2558              		.loc 6 263 19
 2559 0058 3B89     		ldrh	r3, [r7, #8]
 2560              		.loc 6 263 30
 2561 005a FA68     		ldr	r2, [r7, #12]
 2562 005c DB00     		lsls	r3, r3, #3
 2563 005e 1344     		add	r3, r3, r2
 2564 0060 7A69     		ldr	r2, [r7, #20]
 2565 0062 5A60     		str	r2, [r3, #4]
 2566 0064 11E0     		b	.L103
 2567              	.L106:
 2568              	.LBB76:
 264:Src/generated/fonts/src/FontCache.cpp ****     }
 265:Src/generated/fonts/src/FontCache.cpp ****     else
 266:Src/generated/fonts/src/FontCache.cpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 58


 267:Src/generated/fonts/src/FontCache.cpp ****         //set next pointer of old last glyph
 268:Src/generated/fonts/src/FontCache.cpp ****         uint8_t** old_next = (uint8_t**)(fontTable[font].last + SizeGlyphNode);
 2569              		.loc 6 268 52
 2570 0066 3B89     		ldrh	r3, [r7, #8]
 2571              		.loc 6 268 58
 2572 0068 FA68     		ldr	r2, [r7, #12]
 2573 006a DB00     		lsls	r3, r3, #3
 2574 006c 1344     		add	r3, r3, r2
 2575 006e 5B68     		ldr	r3, [r3, #4]
 2576              		.loc 6 268 19
 2577 0070 1033     		adds	r3, r3, #16
 2578 0072 3B61     		str	r3, [r7, #16]
 269:Src/generated/fonts/src/FontCache.cpp ****         *old_next = oldTop;
 2579              		.loc 6 269 19
 2580 0074 3B69     		ldr	r3, [r7, #16]
 2581 0076 7A69     		ldr	r2, [r7, #20]
 2582 0078 1A60     		str	r2, [r3]
 270:Src/generated/fonts/src/FontCache.cpp **** 
 271:Src/generated/fonts/src/FontCache.cpp ****         //save new glyph as last glyph
 272:Src/generated/fonts/src/FontCache.cpp ****         fontTable[font].last = oldTop;
 2583              		.loc 6 272 19
 2584 007a 3B89     		ldrh	r3, [r7, #8]
 2585              		.loc 6 272 30
 2586 007c FA68     		ldr	r2, [r7, #12]
 2587 007e DB00     		lsls	r3, r3, #3
 2588 0080 1344     		add	r3, r3, r2
 2589 0082 7A69     		ldr	r2, [r7, #20]
 2590 0084 5A60     		str	r2, [r3, #4]
 2591 0086 00E0     		b	.L103
 2592              	.L107:
 2593              	.LBE76:
 2594              	.LBE75:
 256:Src/generated/fonts/src/FontCache.cpp ****     }
 2595              		.loc 6 256 9
 2596 0088 00BF     		nop
 2597              	.L103:
 273:Src/generated/fonts/src/FontCache.cpp ****     }
 274:Src/generated/fonts/src/FontCache.cpp **** }
 2598              		.loc 6 274 1
 2599 008a 1837     		adds	r7, r7, #24
 2600              	.LCFI141:
 2601              		.cfi_def_cfa_offset 8
 2602 008c BD46     		mov	sp, r7
 2603              	.LCFI142:
 2604              		.cfi_def_cfa_register 13
 2605              		@ sp needed
 2606 008e 80BD     		pop	{r7, pc}
 2607              		.cfi_endproc
 2608              	.LFE191:
 2610              		.section	.text._ZN8touchgfx9FontCache9copyGlyphEPhttmRb,"ax",%progbits
 2611              		.align	1
 2612              		.global	_ZN8touchgfx9FontCache9copyGlyphEPhttmRb
 2613              		.syntax unified
 2614              		.thumb
 2615              		.thumb_func
 2616              		.fpu fpv4-sp-d16
 2618              	_ZN8touchgfx9FontCache9copyGlyphEPhttmRb:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 59


 2619              	.LFB192:
 275:Src/generated/fonts/src/FontCache.cpp **** 
 276:Src/generated/fonts/src/FontCache.cpp **** uint8_t* FontCache::copyGlyph(uint8_t* top, Unicode::UnicodeChar unicode, FontId font, uint32_t bpp
 277:Src/generated/fonts/src/FontCache.cpp **** {
 2620              		.loc 6 277 1
 2621              		.cfi_startproc
 2622              		@ args = 8, pretend = 0, frame = 40
 2623              		@ frame_needed = 1, uses_anonymous_args = 0
 2624 0000 90B5     		push	{r4, r7, lr}
 2625              	.LCFI143:
 2626              		.cfi_def_cfa_offset 12
 2627              		.cfi_offset 4, -12
 2628              		.cfi_offset 7, -8
 2629              		.cfi_offset 14, -4
 2630 0002 8BB0     		sub	sp, sp, #44
 2631              	.LCFI144:
 2632              		.cfi_def_cfa_offset 56
 2633 0004 00AF     		add	r7, sp, #0
 2634              	.LCFI145:
 2635              		.cfi_def_cfa_register 7
 2636 0006 F860     		str	r0, [r7, #12]
 2637 0008 B960     		str	r1, [r7, #8]
 2638 000a 1146     		mov	r1, r2
 2639 000c 1A46     		mov	r2, r3
 2640 000e 0B46     		mov	r3, r1	@ movhi
 2641 0010 FB80     		strh	r3, [r7, #6]	@ movhi
 2642 0012 1346     		mov	r3, r2	@ movhi
 2643 0014 BB80     		strh	r3, [r7, #4]	@ movhi
 2644              	.L110:
 278:Src/generated/fonts/src/FontCache.cpp ****     while (currentFileGlyphNumber < numGlyphs && currentFileGlyphNode.unicode < unicode)
 2645              		.loc 6 278 12
 2646 0016 FB68     		ldr	r3, [r7, #12]
 2647 0018 B3F87620 		ldrh	r2, [r3, #118]
 2648              		.loc 6 278 37
 2649 001c FB68     		ldr	r3, [r7, #12]
 2650 001e B3F87430 		ldrh	r3, [r3, #116]
 2651              		.loc 6 278 47
 2652 0022 9A42     		cmp	r2, r3
 2653 0024 15D2     		bcs	.L109
 2654              		.loc 6 278 71 discriminator 1
 2655 0026 FB68     		ldr	r3, [r7, #12]
 2656 0028 B3F87C30 		ldrh	r3, [r3, #124]
 2657              		.loc 6 278 47 discriminator 1
 2658 002c FA88     		ldrh	r2, [r7, #6]
 2659 002e 9A42     		cmp	r2, r3
 2660 0030 0FD9     		bls	.L109
 279:Src/generated/fonts/src/FontCache.cpp ****     {
 280:Src/generated/fonts/src/FontCache.cpp ****         readData(&currentFileGlyphNode, sizeof(GlyphNode));
 2661              		.loc 6 280 18
 2662 0032 FB68     		ldr	r3, [r7, #12]
 2663 0034 7833     		adds	r3, r3, #120
 2664              		.loc 6 280 17
 2665 0036 0E22     		movs	r2, #14
 2666 0038 1946     		mov	r1, r3
 2667 003a F868     		ldr	r0, [r7, #12]
 2668 003c FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 281:Src/generated/fonts/src/FontCache.cpp ****         currentFileGlyphNumber++;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 60


 2669              		.loc 6 281 9
 2670 0040 FB68     		ldr	r3, [r7, #12]
 2671 0042 B3F87630 		ldrh	r3, [r3, #118]
 2672              		.loc 6 281 31
 2673 0046 0133     		adds	r3, r3, #1
 2674 0048 9AB2     		uxth	r2, r3
 2675 004a FB68     		ldr	r3, [r7, #12]
 2676 004c A3F87620 		strh	r2, [r3, #118]	@ movhi
 278:Src/generated/fonts/src/FontCache.cpp ****     while (currentFileGlyphNumber < numGlyphs && currentFileGlyphNode.unicode < unicode)
 2677              		.loc 6 278 5
 2678 0050 E1E7     		b	.L110
 2679              	.L109:
 282:Src/generated/fonts/src/FontCache.cpp ****     }
 283:Src/generated/fonts/src/FontCache.cpp ****     if (currentFileGlyphNode.unicode != unicode)
 2680              		.loc 6 283 30
 2681 0052 FB68     		ldr	r3, [r7, #12]
 2682 0054 B3F87C30 		ldrh	r3, [r3, #124]
 2683              		.loc 6 283 5
 2684 0058 FA88     		ldrh	r2, [r7, #6]
 2685 005a 9A42     		cmp	r2, r3
 2686 005c 01D0     		beq	.L111
 284:Src/generated/fonts/src/FontCache.cpp ****     {
 285:Src/generated/fonts/src/FontCache.cpp ****         //glyphnode not found
 286:Src/generated/fonts/src/FontCache.cpp ****         return top;
 2687              		.loc 6 286 16
 2688 005e BB68     		ldr	r3, [r7, #8]
 2689 0060 53E0     		b	.L112
 2690              	.L111:
 287:Src/generated/fonts/src/FontCache.cpp ****     }
 288:Src/generated/fonts/src/FontCache.cpp **** 
 289:Src/generated/fonts/src/FontCache.cpp ****     //glyphnode found
 290:Src/generated/fonts/src/FontCache.cpp ****     uint32_t glyphSize = ((currentFileGlyphNode.width() + 1) & ~1) * currentFileGlyphNode.height() 
 2691              		.loc 6 290 54
 2692 0062 FB68     		ldr	r3, [r7, #12]
 2693 0064 7833     		adds	r3, r3, #120
 2694 0066 7B61     		str	r3, [r7, #20]
 2695              	.LBB77:
 2696              	.LBB78:
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2697              		.loc 1 70 18
 2698 0068 7B69     		ldr	r3, [r7, #20]
 2699 006a 5B7B     		ldrb	r3, [r3, #13]	@ zero_extendqisi2
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2700              		.loc 1 70 49
 2701 006c 5B01     		lsls	r3, r3, #5
 2702 006e 1BB2     		sxth	r3, r3
 2703 0070 03F48073 		and	r3, r3, #256
 2704 0074 1AB2     		sxth	r2, r3
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2705              		.loc 1 70 57
 2706 0076 7B69     		ldr	r3, [r7, #20]
 2707 0078 9B79     		ldrb	r3, [r3, #6]	@ zero_extendqisi2
 2708 007a 1BB2     		sxth	r3, r3
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2709              		.loc 1 70 55
 2710 007c 1343     		orrs	r3, r3, r2
 2711 007e 1BB2     		sxth	r3, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 61


  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2712              		.loc 1 70 57
 2713 0080 9BB2     		uxth	r3, r3
 2714              	.LBE78:
 2715              	.LBE77:
 2716              		.loc 6 290 57
 2717 0082 0133     		adds	r3, r3, #1
 2718              		.loc 6 290 62
 2719 0084 23F00103 		bic	r3, r3, #1
 2720              		.loc 6 290 97
 2721 0088 FA68     		ldr	r2, [r7, #12]
 2722 008a 7832     		adds	r2, r2, #120
 2723 008c BA61     		str	r2, [r7, #24]
 2724              	.LBB79:
 2725              	.LBB80:
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2726              		.loc 1 80 18
 2727 008e BA69     		ldr	r2, [r7, #24]
 2728 0090 527B     		ldrb	r2, [r2, #13]	@ zero_extendqisi2
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2729              		.loc 1 80 50
 2730 0092 1201     		lsls	r2, r2, #4
 2731 0094 12B2     		sxth	r2, r2
 2732 0096 02F48072 		and	r2, r2, #256
 2733 009a 11B2     		sxth	r1, r2
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2734              		.loc 1 80 58
 2735 009c BA69     		ldr	r2, [r7, #24]
 2736 009e D279     		ldrb	r2, [r2, #7]	@ zero_extendqisi2
 2737 00a0 12B2     		sxth	r2, r2
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2738              		.loc 1 80 56
 2739 00a2 0A43     		orrs	r2, r2, r1
 2740 00a4 12B2     		sxth	r2, r2
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2741              		.loc 1 80 58
 2742 00a6 92B2     		uxth	r2, r2
 2743              	.LBE80:
 2744              	.LBE79:
 2745              		.loc 6 290 68
 2746 00a8 02FB03F3 		mul	r3, r2, r3
 2747 00ac 1A46     		mov	r2, r3
 2748              		.loc 6 290 100
 2749 00ae BB6B     		ldr	r3, [r7, #56]
 2750 00b0 02FB03F3 		mul	r3, r2, r3
 2751              		.loc 6 290 108
 2752 00b4 DB08     		lsrs	r3, r3, #3
 2753 00b6 7B62     		str	r3, [r7, #36]
 291:Src/generated/fonts/src/FontCache.cpp ****     glyphSize = (glyphSize + 3) & ~0x03;
 2754              		.loc 6 291 28
 2755 00b8 7B6A     		ldr	r3, [r7, #36]
 2756 00ba 0333     		adds	r3, r3, #3
 2757              		.loc 6 291 15
 2758 00bc 23F00303 		bic	r3, r3, #3
 2759 00c0 7B62     		str	r3, [r7, #36]
 292:Src/generated/fonts/src/FontCache.cpp ****     uint32_t requiredMem = SizeGlyphNode + 4 + glyphSize; // GlyphNode + next ptr + glyph
 2760              		.loc 6 292 14
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 62


 2761 00c2 7B6A     		ldr	r3, [r7, #36]
 2762 00c4 1433     		adds	r3, r3, #20
 2763 00c6 3B62     		str	r3, [r7, #32]
 293:Src/generated/fonts/src/FontCache.cpp **** 
 294:Src/generated/fonts/src/FontCache.cpp ****     //is space available before sortedString
 295:Src/generated/fonts/src/FontCache.cpp ****     if (top + requiredMem > (uint8_t*)sortedString)
 2764              		.loc 6 295 13
 2765 00c8 BA68     		ldr	r2, [r7, #8]
 2766 00ca 3B6A     		ldr	r3, [r7, #32]
 2767 00cc 1A44     		add	r2, r2, r3
 2768              		.loc 6 295 39
 2769 00ce FB68     		ldr	r3, [r7, #12]
 2770 00d0 DB6A     		ldr	r3, [r3, #44]
 2771              		.loc 6 295 5
 2772 00d2 9A42     		cmp	r2, r3
 2773 00d4 04D9     		bls	.L115
 296:Src/generated/fonts/src/FontCache.cpp ****     {
 297:Src/generated/fonts/src/FontCache.cpp ****         outOfMemory = true;
 2774              		.loc 6 297 21
 2775 00d6 FB6B     		ldr	r3, [r7, #60]
 2776 00d8 0122     		movs	r2, #1
 2777 00da 1A70     		strb	r2, [r3]
 298:Src/generated/fonts/src/FontCache.cpp ****         return top;
 2778              		.loc 6 298 16
 2779 00dc BB68     		ldr	r3, [r7, #8]
 2780 00de 14E0     		b	.L112
 2781              	.L115:
 299:Src/generated/fonts/src/FontCache.cpp ****     }
 300:Src/generated/fonts/src/FontCache.cpp **** 
 301:Src/generated/fonts/src/FontCache.cpp ****     *(GlyphNode*)top = currentFileGlyphNode;
 2782              		.loc 6 301 22
 2783 00e0 BA68     		ldr	r2, [r7, #8]
 2784 00e2 FB68     		ldr	r3, [r7, #12]
 2785 00e4 1446     		mov	r4, r2
 2786 00e6 7833     		adds	r3, r3, #120
 2787 00e8 07CB     		ldmia	r3!, {r0, r1, r2}
 2788 00ea 2060     		str	r0, [r4]	@ unaligned
 2789 00ec 6160     		str	r1, [r4, #4]	@ unaligned
 2790 00ee A260     		str	r2, [r4, #8]	@ unaligned
 2791 00f0 1B88     		ldrh	r3, [r3]	@ unaligned
 2792 00f2 A381     		strh	r3, [r4, #12]	@ unaligned
 302:Src/generated/fonts/src/FontCache.cpp **** 
 303:Src/generated/fonts/src/FontCache.cpp ****     //clear next pointer
 304:Src/generated/fonts/src/FontCache.cpp ****     uint8_t** next = (uint8_t**)(top + SizeGlyphNode);
 2793              		.loc 6 304 15
 2794 00f4 BB68     		ldr	r3, [r7, #8]
 2795 00f6 1033     		adds	r3, r3, #16
 2796 00f8 FB61     		str	r3, [r7, #28]
 305:Src/generated/fonts/src/FontCache.cpp ****     *next = 0;
 2797              		.loc 6 305 11
 2798 00fa FB69     		ldr	r3, [r7, #28]
 2799 00fc 0022     		movs	r2, #0
 2800 00fe 1A60     		str	r2, [r3]
 306:Src/generated/fonts/src/FontCache.cpp ****     top += requiredMem;
 2801              		.loc 6 306 9
 2802 0100 BA68     		ldr	r2, [r7, #8]
 2803 0102 3B6A     		ldr	r3, [r7, #32]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 63


 2804 0104 1344     		add	r3, r3, r2
 2805 0106 BB60     		str	r3, [r7, #8]
 307:Src/generated/fonts/src/FontCache.cpp ****     return top;
 2806              		.loc 6 307 12
 2807 0108 BB68     		ldr	r3, [r7, #8]
 2808              	.L112:
 308:Src/generated/fonts/src/FontCache.cpp **** }
 2809              		.loc 6 308 1
 2810 010a 1846     		mov	r0, r3
 2811 010c 2C37     		adds	r7, r7, #44
 2812              	.LCFI146:
 2813              		.cfi_def_cfa_offset 12
 2814 010e BD46     		mov	sp, r7
 2815              	.LCFI147:
 2816              		.cfi_def_cfa_register 13
 2817              		@ sp needed
 2818 0110 90BD     		pop	{r4, r7, pc}
 2819              		.cfi_endproc
 2820              	.LFE192:
 2822              		.section	.text._ZN8touchgfx9FontCache9cacheDataEmPNS_9GlyphNodeE,"ax",%progbits
 2823              		.align	1
 2824              		.global	_ZN8touchgfx9FontCache9cacheDataEmPNS_9GlyphNodeE
 2825              		.syntax unified
 2826              		.thumb
 2827              		.thumb_func
 2828              		.fpu fpv4-sp-d16
 2830              	_ZN8touchgfx9FontCache9cacheDataEmPNS_9GlyphNodeE:
 2831              	.LFB193:
 309:Src/generated/fonts/src/FontCache.cpp **** 
 310:Src/generated/fonts/src/FontCache.cpp **** void FontCache::cacheData(uint32_t bpp, GlyphNode* first)
 311:Src/generated/fonts/src/FontCache.cpp **** {
 2832              		.loc 6 311 1
 2833              		.cfi_startproc
 2834              		@ args = 0, pretend = 0, frame = 40
 2835              		@ frame_needed = 1, uses_anonymous_args = 0
 2836 0000 80B5     		push	{r7, lr}
 2837              	.LCFI148:
 2838              		.cfi_def_cfa_offset 8
 2839              		.cfi_offset 7, -8
 2840              		.cfi_offset 14, -4
 2841 0002 8AB0     		sub	sp, sp, #40
 2842              	.LCFI149:
 2843              		.cfi_def_cfa_offset 48
 2844 0004 00AF     		add	r7, sp, #0
 2845              	.LCFI150:
 2846              		.cfi_def_cfa_register 7
 2847 0006 F860     		str	r0, [r7, #12]
 2848 0008 B960     		str	r1, [r7, #8]
 2849 000a 7A60     		str	r2, [r7, #4]
 312:Src/generated/fonts/src/FontCache.cpp ****     GlyphNode* gn = first;
 2850              		.loc 6 312 16
 2851 000c 7B68     		ldr	r3, [r7, #4]
 2852 000e 7B62     		str	r3, [r7, #36]
 2853              	.L121:
 313:Src/generated/fonts/src/FontCache.cpp ****     while (gn)
 2854              		.loc 6 313 12
 2855 0010 7B6A     		ldr	r3, [r7, #36]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 64


 2856 0012 002B     		cmp	r3, #0
 2857 0014 51D0     		beq	.L122
 2858              	.LBB81:
 314:Src/generated/fonts/src/FontCache.cpp ****     {
 315:Src/generated/fonts/src/FontCache.cpp ****         uint8_t* p = (uint8_t*)gn;
 2859              		.loc 6 315 18
 2860 0016 7B6A     		ldr	r3, [r7, #36]
 2861 0018 3B62     		str	r3, [r7, #32]
 2862              	.LBB82:
 316:Src/generated/fonts/src/FontCache.cpp ****         if (gn->dataOffset != 0xFFFFFFFF)
 2863              		.loc 6 316 17
 2864 001a 7B6A     		ldr	r3, [r7, #36]
 2865 001c 1B68     		ldr	r3, [r3]	@ unaligned
 2866              		.loc 6 316 9
 2867 001e B3F1FF3F 		cmp	r3, #-1
 2868 0022 43D0     		beq	.L118
 2869              	.LBB83:
 317:Src/generated/fonts/src/FontCache.cpp ****         {
 318:Src/generated/fonts/src/FontCache.cpp ****             p += SizeGlyphNode;
 2870              		.loc 6 318 15
 2871 0024 3B6A     		ldr	r3, [r7, #32]
 2872 0026 1033     		adds	r3, r3, #16
 2873 0028 3B62     		str	r3, [r7, #32]
 319:Src/generated/fonts/src/FontCache.cpp ****             //next pointer
 320:Src/generated/fonts/src/FontCache.cpp ****             p += 4;
 2874              		.loc 6 320 15
 2875 002a 3B6A     		ldr	r3, [r7, #32]
 2876 002c 0433     		adds	r3, r3, #4
 2877 002e 3B62     		str	r3, [r7, #32]
 321:Src/generated/fonts/src/FontCache.cpp **** 
 322:Src/generated/fonts/src/FontCache.cpp ****             //seek and copy
 323:Src/generated/fonts/src/FontCache.cpp ****             setPosition(glyphDataOffset + gn->dataOffset);
 2878              		.loc 6 323 25
 2879 0030 FB68     		ldr	r3, [r7, #12]
 2880 0032 1A6F     		ldr	r2, [r3, #112]
 2881              		.loc 6 323 47
 2882 0034 7B6A     		ldr	r3, [r7, #36]
 2883 0036 1B68     		ldr	r3, [r3]	@ unaligned
 2884              		.loc 6 323 24
 2885 0038 1344     		add	r3, r3, r2
 2886 003a 1946     		mov	r1, r3
 2887 003c F868     		ldr	r0, [r7, #12]
 2888 003e FFF7FEFF 		bl	_ZN8touchgfx9FontCache11setPositionEm
 2889 0042 7B6A     		ldr	r3, [r7, #36]
 2890 0044 3B61     		str	r3, [r7, #16]
 2891              	.LBB84:
 2892              	.LBB85:
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2893              		.loc 1 70 18
 2894 0046 3B69     		ldr	r3, [r7, #16]
 2895 0048 5B7B     		ldrb	r3, [r3, #13]	@ zero_extendqisi2
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2896              		.loc 1 70 49
 2897 004a 5B01     		lsls	r3, r3, #5
 2898 004c 1BB2     		sxth	r3, r3
 2899 004e 03F48073 		and	r3, r3, #256
 2900 0052 1AB2     		sxth	r2, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 65


  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2901              		.loc 1 70 57
 2902 0054 3B69     		ldr	r3, [r7, #16]
 2903 0056 9B79     		ldrb	r3, [r3, #6]	@ zero_extendqisi2
 2904 0058 1BB2     		sxth	r3, r3
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2905              		.loc 1 70 55
 2906 005a 1343     		orrs	r3, r3, r2
 2907 005c 1BB2     		sxth	r3, r3
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2908              		.loc 1 70 57
 2909 005e 9BB2     		uxth	r3, r3
 2910              	.LBE85:
 2911              	.LBE84:
 324:Src/generated/fonts/src/FontCache.cpp ****             uint32_t glyphSize = ((gn->width() + 1) & ~1) * gn->height() * bpp / 8;
 2912              		.loc 6 324 48
 2913 0060 0133     		adds	r3, r3, #1
 2914              		.loc 6 324 53
 2915 0062 23F00103 		bic	r3, r3, #1
 2916 0066 7A6A     		ldr	r2, [r7, #36]
 2917 0068 7A61     		str	r2, [r7, #20]
 2918              	.LBB86:
 2919              	.LBB87:
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2920              		.loc 1 80 18
 2921 006a 7A69     		ldr	r2, [r7, #20]
 2922 006c 527B     		ldrb	r2, [r2, #13]	@ zero_extendqisi2
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2923              		.loc 1 80 50
 2924 006e 1201     		lsls	r2, r2, #4
 2925 0070 12B2     		sxth	r2, r2
 2926 0072 02F48072 		and	r2, r2, #256
 2927 0076 11B2     		sxth	r1, r2
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2928              		.loc 1 80 58
 2929 0078 7A69     		ldr	r2, [r7, #20]
 2930 007a D279     		ldrb	r2, [r2, #7]	@ zero_extendqisi2
 2931 007c 12B2     		sxth	r2, r2
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2932              		.loc 1 80 56
 2933 007e 0A43     		orrs	r2, r2, r1
 2934 0080 12B2     		sxth	r2, r2
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 2935              		.loc 1 80 58
 2936 0082 92B2     		uxth	r2, r2
 2937              	.LBE87:
 2938              	.LBE86:
 2939              		.loc 6 324 59
 2940 0084 02FB03F3 		mul	r3, r2, r3
 2941 0088 1A46     		mov	r2, r3
 2942              		.loc 6 324 74
 2943 008a BB68     		ldr	r3, [r7, #8]
 2944 008c 02FB03F3 		mul	r3, r2, r3
 2945              		.loc 6 324 82
 2946 0090 DB08     		lsrs	r3, r3, #3
 2947 0092 FB61     		str	r3, [r7, #28]
 325:Src/generated/fonts/src/FontCache.cpp ****             readData(p, glyphSize);
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 66


 2948              		.loc 6 325 21
 2949 0094 FA69     		ldr	r2, [r7, #28]
 2950 0096 396A     		ldr	r1, [r7, #32]
 2951 0098 F868     		ldr	r0, [r7, #12]
 2952 009a FFF7FEFF 		bl	_ZN8touchgfx9FontCache8readDataEPvm
 326:Src/generated/fonts/src/FontCache.cpp **** 
 327:Src/generated/fonts/src/FontCache.cpp ****             //mark glyphNode as cached
 328:Src/generated/fonts/src/FontCache.cpp ****             gn->dataOffset = 0xFFFFFFFF;
 2953              		.loc 6 328 28
 2954 009e 7B6A     		ldr	r3, [r7, #36]
 2955 00a0 4FF0FF32 		mov	r2, #-1
 2956 00a4 1A80     		strh	r2, [r3]	@ movhi
 2957 00a6 4FF0FF32 		mov	r2, #-1
 2958 00aa 5A80     		strh	r2, [r3, #2]	@ movhi
 2959              	.L118:
 2960              	.LBE83:
 2961              	.LBE82:
 329:Src/generated/fonts/src/FontCache.cpp ****         }
 330:Src/generated/fonts/src/FontCache.cpp **** 
 331:Src/generated/fonts/src/FontCache.cpp ****         GlyphNode** next = (GlyphNode**)((uint8_t*)gn + SizeGlyphNode);
 2962              		.loc 6 331 21
 2963 00ac 7B6A     		ldr	r3, [r7, #36]
 2964 00ae 1033     		adds	r3, r3, #16
 2965 00b0 BB61     		str	r3, [r7, #24]
 332:Src/generated/fonts/src/FontCache.cpp ****         gn = *next;
 2966              		.loc 6 332 12
 2967 00b2 BB69     		ldr	r3, [r7, #24]
 2968 00b4 1B68     		ldr	r3, [r3]
 2969 00b6 7B62     		str	r3, [r7, #36]
 2970              	.LBE81:
 313:Src/generated/fonts/src/FontCache.cpp ****     {
 2971              		.loc 6 313 5
 2972 00b8 AAE7     		b	.L121
 2973              	.L122:
 333:Src/generated/fonts/src/FontCache.cpp ****     }
 334:Src/generated/fonts/src/FontCache.cpp **** }
 2974              		.loc 6 334 1
 2975 00ba 00BF     		nop
 2976 00bc 2837     		adds	r7, r7, #40
 2977              	.LCFI151:
 2978              		.cfi_def_cfa_offset 8
 2979 00be BD46     		mov	sp, r7
 2980              	.LCFI152:
 2981              		.cfi_def_cfa_register 13
 2982              		@ sp needed
 2983 00c0 80BD     		pop	{r7, pc}
 2984              		.cfi_endproc
 2985              	.LFE193:
 2987              		.section	.text._ZN8touchgfx9FontCache18createSortedStringEPKt,"ax",%progbits
 2988              		.align	1
 2989              		.global	_ZN8touchgfx9FontCache18createSortedStringEPKt
 2990              		.syntax unified
 2991              		.thumb
 2992              		.thumb_func
 2993              		.fpu fpv4-sp-d16
 2995              	_ZN8touchgfx9FontCache18createSortedStringEPKt:
 2996              	.LFB194:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 67


 335:Src/generated/fonts/src/FontCache.cpp **** 
 336:Src/generated/fonts/src/FontCache.cpp **** bool FontCache::createSortedString(const Unicode::UnicodeChar* string)
 337:Src/generated/fonts/src/FontCache.cpp **** {
 2997              		.loc 6 337 1
 2998              		.cfi_startproc
 2999              		@ args = 0, pretend = 0, frame = 24
 3000              		@ frame_needed = 1, uses_anonymous_args = 0
 3001 0000 80B5     		push	{r7, lr}
 3002              	.LCFI153:
 3003              		.cfi_def_cfa_offset 8
 3004              		.cfi_offset 7, -8
 3005              		.cfi_offset 14, -4
 3006 0002 86B0     		sub	sp, sp, #24
 3007              	.LCFI154:
 3008              		.cfi_def_cfa_offset 32
 3009 0004 00AF     		add	r7, sp, #0
 3010              	.LCFI155:
 3011              		.cfi_def_cfa_register 7
 3012 0006 7860     		str	r0, [r7, #4]
 3013 0008 3960     		str	r1, [r7]
 338:Src/generated/fonts/src/FontCache.cpp ****     int length = Unicode::strlen(string);
 3014              		.loc 6 338 33
 3015 000a 3868     		ldr	r0, [r7]
 3016 000c FFF7FEFF 		bl	_ZN8touchgfx7Unicode6strlenEPKt
 3017 0010 0346     		mov	r3, r0
 3018              		.loc 6 338 40
 3019 0012 FB60     		str	r3, [r7, #12]
 339:Src/generated/fonts/src/FontCache.cpp ****     //sorted string is allocated at end of buffer
 340:Src/generated/fonts/src/FontCache.cpp ****     sortedString = (Unicode::UnicodeChar*)(gsubStart - (length + 1) * 2);
 3020              		.loc 6 340 44
 3021 0014 7B68     		ldr	r3, [r7, #4]
 3022 0016 5A6A     		ldr	r2, [r3, #36]
 3023              		.loc 6 340 64
 3024 0018 FB68     		ldr	r3, [r7, #12]
 3025 001a 0133     		adds	r3, r3, #1
 3026              		.loc 6 340 69
 3027 001c 5B00     		lsls	r3, r3, #1
 3028              		.loc 6 340 54
 3029 001e 5B42     		rsbs	r3, r3, #0
 3030 0020 1A44     		add	r2, r2, r3
 3031              		.loc 6 340 18
 3032 0022 7B68     		ldr	r3, [r7, #4]
 3033 0024 DA62     		str	r2, [r3, #44]
 341:Src/generated/fonts/src/FontCache.cpp ****     if ((uint8_t*)sortedString < top)
 3034              		.loc 6 341 19
 3035 0026 7B68     		ldr	r3, [r7, #4]
 3036 0028 DA6A     		ldr	r2, [r3, #44]
 3037              		.loc 6 341 34
 3038 002a 7B68     		ldr	r3, [r7, #4]
 3039 002c 1B6A     		ldr	r3, [r3, #32]
 3040              		.loc 6 341 5
 3041 002e 9A42     		cmp	r2, r3
 3042 0030 01D2     		bcs	.L124
 342:Src/generated/fonts/src/FontCache.cpp ****     {
 343:Src/generated/fonts/src/FontCache.cpp ****         //unable to allocate string buffer in end of memory
 344:Src/generated/fonts/src/FontCache.cpp ****         return false;
 3043              		.loc 6 344 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 68


 3044 0032 0023     		movs	r3, #0
 3045 0034 1DE0     		b	.L125
 3046              	.L124:
 345:Src/generated/fonts/src/FontCache.cpp ****     }
 346:Src/generated/fonts/src/FontCache.cpp ****     int n = 0;
 3047              		.loc 6 346 9
 3048 0036 0023     		movs	r3, #0
 3049 0038 7B61     		str	r3, [r7, #20]
 347:Src/generated/fonts/src/FontCache.cpp ****     Unicode::UnicodeChar* uc = sortedString;
 3050              		.loc 6 347 27
 3051 003a 7B68     		ldr	r3, [r7, #4]
 3052 003c DB6A     		ldr	r3, [r3, #44]
 3053 003e 3B61     		str	r3, [r7, #16]
 3054              	.L127:
 348:Src/generated/fonts/src/FontCache.cpp ****     while (*string)
 3055              		.loc 6 348 12
 3056 0040 3B68     		ldr	r3, [r7]
 3057 0042 1B88     		ldrh	r3, [r3]
 3058 0044 002B     		cmp	r3, #0
 3059 0046 0BD0     		beq	.L126
 349:Src/generated/fonts/src/FontCache.cpp ****     {
 350:Src/generated/fonts/src/FontCache.cpp ****         *uc++ = *string++;
 3060              		.loc 6 350 24
 3061 0048 3A68     		ldr	r2, [r7]
 3062 004a 931C     		adds	r3, r2, #2
 3063 004c 3B60     		str	r3, [r7]
 3064              		.loc 6 350 12
 3065 004e 3B69     		ldr	r3, [r7, #16]
 3066 0050 991C     		adds	r1, r3, #2
 3067 0052 3961     		str	r1, [r7, #16]
 3068              		.loc 6 350 17
 3069 0054 1288     		ldrh	r2, [r2]
 3070              		.loc 6 350 15
 3071 0056 1A80     		strh	r2, [r3]	@ movhi
 351:Src/generated/fonts/src/FontCache.cpp ****         n++;
 3072              		.loc 6 351 10
 3073 0058 7B69     		ldr	r3, [r7, #20]
 3074 005a 0133     		adds	r3, r3, #1
 3075 005c 7B61     		str	r3, [r7, #20]
 348:Src/generated/fonts/src/FontCache.cpp ****     while (*string)
 3076              		.loc 6 348 5
 3077 005e EFE7     		b	.L127
 3078              	.L126:
 352:Src/generated/fonts/src/FontCache.cpp ****     }
 353:Src/generated/fonts/src/FontCache.cpp ****     *uc = 0;
 3079              		.loc 6 353 9
 3080 0060 3B69     		ldr	r3, [r7, #16]
 3081 0062 0022     		movs	r2, #0
 3082 0064 1A80     		strh	r2, [r3]	@ movhi
 354:Src/generated/fonts/src/FontCache.cpp ****     return sortSortedString(n);
 3083              		.loc 6 354 28
 3084 0066 7969     		ldr	r1, [r7, #20]
 3085 0068 7868     		ldr	r0, [r7, #4]
 3086 006a FFF7FEFF 		bl	_ZN8touchgfx9FontCache16sortSortedStringEi
 3087 006e 0346     		mov	r3, r0
 3088              		.loc 6 354 30
 3089 0070 00BF     		nop
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 69


 3090              	.L125:
 355:Src/generated/fonts/src/FontCache.cpp **** }
 3091              		.loc 6 355 1
 3092 0072 1846     		mov	r0, r3
 3093 0074 1837     		adds	r7, r7, #24
 3094              	.LCFI156:
 3095              		.cfi_def_cfa_offset 8
 3096 0076 BD46     		mov	sp, r7
 3097              	.LCFI157:
 3098              		.cfi_def_cfa_register 13
 3099              		@ sp needed
 3100 0078 80BD     		pop	{r7, pc}
 3101              		.cfi_endproc
 3102              	.LFE194:
 3104              		.section	.text._ZN8touchgfx9FontCache21createSortedLigaturesEPNS_10CachedFontENS_9TypedTextEPKtz,"
 3105              		.align	1
 3106              		.global	_ZN8touchgfx9FontCache21createSortedLigaturesEPNS_10CachedFontENS_9TypedTextEPKtz
 3107              		.syntax unified
 3108              		.thumb
 3109              		.thumb_func
 3110              		.fpu fpv4-sp-d16
 3112              	_ZN8touchgfx9FontCache21createSortedLigaturesEPNS_10CachedFontENS_9TypedTextEPKtz:
 3113              	.LFB195:
 356:Src/generated/fonts/src/FontCache.cpp **** 
 357:Src/generated/fonts/src/FontCache.cpp **** bool FontCache::createSortedLigatures(CachedFont* font, TypedText t, const Unicode::UnicodeChar* st
 358:Src/generated/fonts/src/FontCache.cpp **** {
 3114              		.loc 6 358 1
 3115              		.cfi_startproc
 3116              		@ args = 4, pretend = 4, frame = 128
 3117              		@ frame_needed = 1, uses_anonymous_args = 1
 3118 0000 08B4     		push	{r3}
 3119              	.LCFI158:
 3120              		.cfi_def_cfa_offset 4
 3121              		.cfi_offset 3, -4
 3122 0002 90B5     		push	{r4, r7, lr}
 3123              	.LCFI159:
 3124              		.cfi_def_cfa_offset 16
 3125              		.cfi_offset 4, -16
 3126              		.cfi_offset 7, -12
 3127              		.cfi_offset 14, -8
 3128 0004 A2B0     		sub	sp, sp, #136
 3129              	.LCFI160:
 3130              		.cfi_def_cfa_offset 152
 3131 0006 02AF     		add	r7, sp, #8
 3132              	.LCFI161:
 3133              		.cfi_def_cfa 7, 144
 3134 0008 F860     		str	r0, [r7, #12]
 3135 000a B960     		str	r1, [r7, #8]
 3136 000c 7A60     		str	r2, [r7, #4]
 359:Src/generated/fonts/src/FontCache.cpp ****     va_list pArg;
 360:Src/generated/fonts/src/FontCache.cpp ****     va_start(pArg, string);
 3137              		.loc 6 360 5
 3138 000e 07F19003 		add	r3, r7, #144
 3139 0012 FB66     		str	r3, [r7, #108]
 361:Src/generated/fonts/src/FontCache.cpp ****     TextProvider tp;
 3140              		.loc 6 361 18
 3141 0014 07F11003 		add	r3, r7, #16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 70


 3142 0018 1846     		mov	r0, r3
 3143 001a FFF7FEFF 		bl	_ZN8touchgfx12TextProviderC1Ev
 362:Src/generated/fonts/src/FontCache.cpp ****     tp.initialize(string, pArg, font->getGSUBTable(), font->getContextualFormsTable());
 3144              		.loc 6 362 52
 3145 001e BB68     		ldr	r3, [r7, #8]
 3146 0020 1B68     		ldr	r3, [r3]
 3147 0022 4433     		adds	r3, r3, #68
 3148 0024 1B68     		ldr	r3, [r3]
 3149              		.loc 6 362 18
 3150 0026 B868     		ldr	r0, [r7, #8]
 3151 0028 9847     		blx	r3
 3152              	.LVL7:
 3153 002a 0446     		mov	r4, r0
 3154              		.loc 6 362 85
 3155 002c BB68     		ldr	r3, [r7, #8]
 3156 002e 1B68     		ldr	r3, [r3]
 3157 0030 4833     		adds	r3, r3, #72
 3158 0032 1B68     		ldr	r3, [r3]
 3159              		.loc 6 362 18
 3160 0034 B868     		ldr	r0, [r7, #8]
 3161 0036 9847     		blx	r3
 3162              	.LVL8:
 3163 0038 0346     		mov	r3, r0
 3164 003a 07F11000 		add	r0, r7, #16
 3165 003e 0093     		str	r3, [sp]
 3166 0040 2346     		mov	r3, r4
 3167 0042 FA6E     		ldr	r2, [r7, #108]
 3168 0044 D7F88C10 		ldr	r1, [r7, #140]
 3169 0048 FFF7FEFF 		bl	_ZN8touchgfx12TextProvider10initializeEPKtSt9__va_listS2_PKNS_24FontContextualFormsTableE
 363:Src/generated/fonts/src/FontCache.cpp ****     va_end(pArg);
 364:Src/generated/fonts/src/FontCache.cpp ****     Unicode::UnicodeChar ligature;
 365:Src/generated/fonts/src/FontCache.cpp ****     sortedString = (Unicode::UnicodeChar*)(gsubStart);
 3170              		.loc 6 365 44
 3171 004c FB68     		ldr	r3, [r7, #12]
 3172 004e 5A6A     		ldr	r2, [r3, #36]
 3173              		.loc 6 365 18
 3174 0050 FB68     		ldr	r3, [r7, #12]
 3175 0052 DA62     		str	r2, [r3, #44]
 366:Src/generated/fonts/src/FontCache.cpp ****     if ((uint8_t*)(sortedString - 1) < top)
 3176              		.loc 6 366 20
 3177 0054 FB68     		ldr	r3, [r7, #12]
 3178 0056 DB6A     		ldr	r3, [r3, #44]
 3179              		.loc 6 366 33
 3180 0058 9A1E     		subs	r2, r3, #2
 3181              		.loc 6 366 40
 3182 005a FB68     		ldr	r3, [r7, #12]
 3183 005c 1B6A     		ldr	r3, [r3, #32]
 3184              		.loc 6 366 5
 3185 005e 9A42     		cmp	r2, r3
 3186 0060 01D2     		bcs	.L129
 367:Src/generated/fonts/src/FontCache.cpp ****     {
 368:Src/generated/fonts/src/FontCache.cpp ****         return false;
 3187              		.loc 6 368 16
 3188 0062 0023     		movs	r3, #0
 3189 0064 5FE0     		b	.L137
 3190              	.L129:
 369:Src/generated/fonts/src/FontCache.cpp ****     }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 71


 370:Src/generated/fonts/src/FontCache.cpp ****     *--sortedString = 0;
 3191              		.loc 6 370 8
 3192 0066 FB68     		ldr	r3, [r7, #12]
 3193 0068 DB6A     		ldr	r3, [r3, #44]
 3194              		.loc 6 370 6
 3195 006a 9A1E     		subs	r2, r3, #2
 3196              		.loc 6 370 21
 3197 006c FB68     		ldr	r3, [r7, #12]
 3198 006e DA62     		str	r2, [r3, #44]
 3199              		.loc 6 370 8
 3200 0070 FB68     		ldr	r3, [r7, #12]
 3201 0072 DB6A     		ldr	r3, [r3, #44]
 3202              		.loc 6 370 21
 3203 0074 0022     		movs	r2, #0
 3204 0076 1A80     		strh	r2, [r3]	@ movhi
 371:Src/generated/fonts/src/FontCache.cpp ****     int n = 0;
 3205              		.loc 6 371 9
 3206 0078 0023     		movs	r3, #0
 3207 007a FB67     		str	r3, [r7, #124]
 3208              	.L136:
 3209 007c 7B68     		ldr	r3, [r7, #4]
 3210 007e 7B67     		str	r3, [r7, #116]
 3211 0080 7B6F     		ldr	r3, [r7, #116]
 3212 0082 3B67     		str	r3, [r7, #112]
 3213              	.LBB88:
 3214              	.LBB89:
 3215              	.LBB90:
 3216              	.LBB91:
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assert(typedTextId < numberOfTypedTexts && "typedTextId larger than numberOfTypedTexts.");
 3217              		.loc 2 174 9
 3218 0084 2B4B     		ldr	r3, .L140
 3219 0086 1B68     		ldr	r3, [r3]
 3220 0088 002B     		cmp	r3, #0
 3221 008a 05D1     		bne	.L131
 3222 008c 2A4B     		ldr	r3, .L140+4
 3223 008e 2B4A     		ldr	r2, .L140+8
 3224 0090 AE21     		movs	r1, #174
 3225 0092 2B48     		ldr	r0, .L140+12
 3226 0094 FFF7FEFF 		bl	__assert_func
 3227              	.L131:
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 3228              		.loc 2 175 9
 3229 0098 3B6F     		ldr	r3, [r7, #112]
 3230 009a 9A88     		ldrh	r2, [r3, #4]
 3231 009c 294B     		ldr	r3, .L140+16
 3232 009e 1B88     		ldrh	r3, [r3]
 3233 00a0 9A42     		cmp	r2, r3
 3234 00a2 05D3     		bcc	.L139
 3235 00a4 284B     		ldr	r3, .L140+20
 3236 00a6 254A     		ldr	r2, .L140+8
 3237 00a8 AF21     		movs	r1, #175
 3238 00aa 2548     		ldr	r0, .L140+12
 3239 00ac FFF7FEFF 		bl	__assert_func
 3240              	.L139:
 3241              		.loc 2 176 5
 3242 00b0 00BF     		nop
 3243              	.LBE91:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 72


 3244              	.LBE90:
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 3245              		.loc 2 141 38
 3246 00b2 204B     		ldr	r3, .L140
 3247 00b4 1A68     		ldr	r2, [r3]
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 3248              		.loc 2 141 27
 3249 00b6 7B6F     		ldr	r3, [r7, #116]
 3250 00b8 9B88     		ldrh	r3, [r3, #4]
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 3251              		.loc 2 141 38
 3252 00ba 5B00     		lsls	r3, r3, #1
 3253 00bc 1344     		add	r3, r3, r2
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 3254              		.loc 2 141 40
 3255 00be 5B78     		ldrb	r3, [r3, #1]
 3256 00c0 C3F38103 		ubfx	r3, r3, #2, #2
 3257 00c4 DBB2     		uxtb	r3, r3
 3258 00c6 1A46     		mov	r2, r3
 3259              	.LBE89:
 3260              	.LBE88:
 372:Src/generated/fonts/src/FontCache.cpp ****     while ((ligature = tp.getNextLigature(t.getTextDirection())) != 0)
 3261              		.loc 6 372 42
 3262 00c8 07F11003 		add	r3, r7, #16
 3263 00cc 1146     		mov	r1, r2
 3264 00ce 1846     		mov	r0, r3
 3265 00d0 FFF7FEFF 		bl	_ZN8touchgfx12TextProvider15getNextLigatureEh
 3266 00d4 0346     		mov	r3, r0
 3267 00d6 A7F87A30 		strh	r3, [r7, #122]	@ movhi
 3268              		.loc 6 372 66
 3269 00da B7F87A30 		ldrh	r3, [r7, #122]
 3270 00de 002B     		cmp	r3, #0
 3271 00e0 14BF     		ite	ne
 3272 00e2 0123     		movne	r3, #1
 3273 00e4 0023     		moveq	r3, #0
 3274 00e6 DBB2     		uxtb	r3, r3
 3275 00e8 002B     		cmp	r3, #0
 3276 00ea 16D0     		beq	.L134
 373:Src/generated/fonts/src/FontCache.cpp ****     {
 374:Src/generated/fonts/src/FontCache.cpp ****         if ((uint8_t*)(sortedString - 1) < top)
 3277              		.loc 6 374 24
 3278 00ec FB68     		ldr	r3, [r7, #12]
 3279 00ee DB6A     		ldr	r3, [r3, #44]
 3280              		.loc 6 374 37
 3281 00f0 9A1E     		subs	r2, r3, #2
 3282              		.loc 6 374 44
 3283 00f2 FB68     		ldr	r3, [r7, #12]
 3284 00f4 1B6A     		ldr	r3, [r3, #32]
 3285              		.loc 6 374 9
 3286 00f6 9A42     		cmp	r2, r3
 3287 00f8 01D2     		bcs	.L135
 375:Src/generated/fonts/src/FontCache.cpp ****         {
 376:Src/generated/fonts/src/FontCache.cpp ****             return false;
 3288              		.loc 6 376 20
 3289 00fa 0023     		movs	r3, #0
 3290 00fc 13E0     		b	.L137
 3291              	.L135:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 73


 377:Src/generated/fonts/src/FontCache.cpp ****         }
 378:Src/generated/fonts/src/FontCache.cpp ****         *--sortedString = ligature;
 3292              		.loc 6 378 12
 3293 00fe FB68     		ldr	r3, [r7, #12]
 3294 0100 DB6A     		ldr	r3, [r3, #44]
 3295              		.loc 6 378 10
 3296 0102 9A1E     		subs	r2, r3, #2
 3297              		.loc 6 378 25
 3298 0104 FB68     		ldr	r3, [r7, #12]
 3299 0106 DA62     		str	r2, [r3, #44]
 3300              		.loc 6 378 12
 3301 0108 FB68     		ldr	r3, [r7, #12]
 3302 010a DB6A     		ldr	r3, [r3, #44]
 3303              		.loc 6 378 25
 3304 010c B7F87A20 		ldrh	r2, [r7, #122]	@ movhi
 3305 0110 1A80     		strh	r2, [r3]	@ movhi
 379:Src/generated/fonts/src/FontCache.cpp ****         n++;
 3306              		.loc 6 379 10
 3307 0112 FB6F     		ldr	r3, [r7, #124]
 3308 0114 0133     		adds	r3, r3, #1
 3309 0116 FB67     		str	r3, [r7, #124]
 372:Src/generated/fonts/src/FontCache.cpp ****     {
 3310              		.loc 6 372 5
 3311 0118 B0E7     		b	.L136
 3312              	.L134:
 380:Src/generated/fonts/src/FontCache.cpp ****     }
 381:Src/generated/fonts/src/FontCache.cpp ****     return sortSortedString(n);
 3313              		.loc 6 381 28
 3314 011a F96F     		ldr	r1, [r7, #124]
 3315 011c F868     		ldr	r0, [r7, #12]
 3316 011e FFF7FEFF 		bl	_ZN8touchgfx9FontCache16sortSortedStringEi
 3317 0122 0346     		mov	r3, r0
 3318              		.loc 6 381 30
 3319 0124 00BF     		nop
 3320              	.L137:
 382:Src/generated/fonts/src/FontCache.cpp **** }
 3321              		.loc 6 382 1 discriminator 1
 3322 0126 1846     		mov	r0, r3
 3323 0128 8037     		adds	r7, r7, #128
 3324              	.LCFI162:
 3325              		.cfi_def_cfa_offset 16
 3326 012a BD46     		mov	sp, r7
 3327              	.LCFI163:
 3328              		.cfi_def_cfa_register 13
 3329              		@ sp needed
 3330 012c BDE89040 		pop	{r4, r7, lr}
 3331              	.LCFI164:
 3332              		.cfi_restore 14
 3333              		.cfi_restore 7
 3334              		.cfi_restore 4
 3335              		.cfi_def_cfa_offset 4
 3336 0130 01B0     		add	sp, sp, #4
 3337              	.LCFI165:
 3338              		.cfi_restore 3
 3339              		.cfi_def_cfa_offset 0
 3340 0132 7047     		bx	lr
 3341              	.L141:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 74


 3342              		.align	2
 3343              	.L140:
 3344 0134 00000000 		.word	_ZN8touchgfx9TypedText10typedTextsE
 3345 0138 00000000 		.word	.LC0
 3346 013c 44000000 		.word	.LC1
 3347 0140 74000000 		.word	.LC2
 3348 0144 00000000 		.word	_ZN8touchgfx9TypedText18numberOfTypedTextsE
 3349 0148 B8000000 		.word	.LC3
 3350              		.cfi_endproc
 3351              	.LFE195:
 3353              		.section	.text._ZN8touchgfx9FontCache16sortSortedStringEi,"ax",%progbits
 3354              		.align	1
 3355              		.global	_ZN8touchgfx9FontCache16sortSortedStringEi
 3356              		.syntax unified
 3357              		.thumb
 3358              		.thumb_func
 3359              		.fpu fpv4-sp-d16
 3361              	_ZN8touchgfx9FontCache16sortSortedStringEi:
 3362              	.LFB196:
 383:Src/generated/fonts/src/FontCache.cpp **** 
 384:Src/generated/fonts/src/FontCache.cpp **** bool FontCache::sortSortedString(int n)
 385:Src/generated/fonts/src/FontCache.cpp **** {
 3363              		.loc 6 385 1
 3364              		.cfi_startproc
 3365              		@ args = 0, pretend = 0, frame = 32
 3366              		@ frame_needed = 1, uses_anonymous_args = 0
 3367              		@ link register save eliminated.
 3368 0000 80B4     		push	{r7}
 3369              	.LCFI166:
 3370              		.cfi_def_cfa_offset 4
 3371              		.cfi_offset 7, -4
 3372 0002 89B0     		sub	sp, sp, #36
 3373              	.LCFI167:
 3374              		.cfi_def_cfa_offset 40
 3375 0004 00AF     		add	r7, sp, #0
 3376              	.LCFI168:
 3377              		.cfi_def_cfa_register 7
 3378 0006 7860     		str	r0, [r7, #4]
 3379 0008 3960     		str	r1, [r7]
 386:Src/generated/fonts/src/FontCache.cpp ****     Unicode::UnicodeChar* uc = sortedString;
 3380              		.loc 6 386 27
 3381 000a 7B68     		ldr	r3, [r7, #4]
 3382 000c DB6A     		ldr	r3, [r3, #44]
 3383 000e 3B61     		str	r3, [r7, #16]
 3384              	.LBB92:
 387:Src/generated/fonts/src/FontCache.cpp ****     for (int i = 0; i < n - 1; i++)
 3385              		.loc 6 387 14
 3386 0010 0023     		movs	r3, #0
 3387 0012 FB61     		str	r3, [r7, #28]
 3388              	.L148:
 3389              		.loc 6 387 27 discriminator 1
 3390 0014 3B68     		ldr	r3, [r7]
 3391 0016 013B     		subs	r3, r3, #1
 3392              		.loc 6 387 23 discriminator 1
 3393 0018 FA69     		ldr	r2, [r7, #28]
 3394 001a 9A42     		cmp	r2, r3
 3395 001c 40DA     		bge	.L143
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 75


 3396              	.LBB93:
 388:Src/generated/fonts/src/FontCache.cpp ****     {
 389:Src/generated/fonts/src/FontCache.cpp ****         bool swapped = false;
 3397              		.loc 6 389 14
 3398 001e 0023     		movs	r3, #0
 3399 0020 FB76     		strb	r3, [r7, #27]
 3400              	.LBB94:
 390:Src/generated/fonts/src/FontCache.cpp ****         for (int j = 0; j < n - i - 1; j++)
 3401              		.loc 6 390 18
 3402 0022 0023     		movs	r3, #0
 3403 0024 7B61     		str	r3, [r7, #20]
 3404              	.L146:
 3405              		.loc 6 390 31 discriminator 1
 3406 0026 3A68     		ldr	r2, [r7]
 3407 0028 FB69     		ldr	r3, [r7, #28]
 3408 002a D31A     		subs	r3, r2, r3
 3409              		.loc 6 390 35 discriminator 1
 3410 002c 013B     		subs	r3, r3, #1
 3411              		.loc 6 390 27 discriminator 1
 3412 002e 7A69     		ldr	r2, [r7, #20]
 3413 0030 9A42     		cmp	r2, r3
 3414 0032 2ADA     		bge	.L144
 3415              	.LBB95:
 3416              	.LBB96:
 391:Src/generated/fonts/src/FontCache.cpp ****         {
 392:Src/generated/fonts/src/FontCache.cpp ****             if (uc[j] > uc[j + 1])
 3417              		.loc 6 392 20
 3418 0034 7B69     		ldr	r3, [r7, #20]
 3419              		.loc 6 392 21
 3420 0036 5B00     		lsls	r3, r3, #1
 3421 0038 3A69     		ldr	r2, [r7, #16]
 3422 003a 1344     		add	r3, r3, r2
 3423 003c 1A88     		ldrh	r2, [r3]
 3424              		.loc 6 392 33
 3425 003e 7B69     		ldr	r3, [r7, #20]
 3426 0040 0133     		adds	r3, r3, #1
 3427 0042 5B00     		lsls	r3, r3, #1
 3428 0044 3969     		ldr	r1, [r7, #16]
 3429 0046 0B44     		add	r3, r3, r1
 3430 0048 1B88     		ldrh	r3, [r3]
 3431              		.loc 6 392 13
 3432 004a 9A42     		cmp	r2, r3
 3433 004c 19D9     		bls	.L145
 3434              	.LBB97:
 393:Src/generated/fonts/src/FontCache.cpp ****             {
 394:Src/generated/fonts/src/FontCache.cpp ****                 Unicode::UnicodeChar temp = uc[j];
 3435              		.loc 6 394 48
 3436 004e 7B69     		ldr	r3, [r7, #20]
 3437              		.loc 6 394 49
 3438 0050 5B00     		lsls	r3, r3, #1
 3439 0052 3A69     		ldr	r2, [r7, #16]
 3440 0054 1344     		add	r3, r3, r2
 3441              		.loc 6 394 38
 3442 0056 1B88     		ldrh	r3, [r3]	@ movhi
 3443 0058 FB81     		strh	r3, [r7, #14]	@ movhi
 395:Src/generated/fonts/src/FontCache.cpp ****                 uc[j] = uc[j + 1];
 3444              		.loc 6 395 33
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 76


 3445 005a 7B69     		ldr	r3, [r7, #20]
 3446 005c 0133     		adds	r3, r3, #1
 3447 005e 5B00     		lsls	r3, r3, #1
 3448 0060 3A69     		ldr	r2, [r7, #16]
 3449 0062 1A44     		add	r2, r2, r3
 3450              		.loc 6 395 20
 3451 0064 7B69     		ldr	r3, [r7, #20]
 3452              		.loc 6 395 21
 3453 0066 5B00     		lsls	r3, r3, #1
 3454 0068 3969     		ldr	r1, [r7, #16]
 3455 006a 0B44     		add	r3, r3, r1
 3456              		.loc 6 395 33
 3457 006c 1288     		ldrh	r2, [r2]
 3458              		.loc 6 395 23
 3459 006e 1A80     		strh	r2, [r3]	@ movhi
 396:Src/generated/fonts/src/FontCache.cpp ****                 uc[j + 1] = temp;
 3460              		.loc 6 396 25
 3461 0070 7B69     		ldr	r3, [r7, #20]
 3462 0072 0133     		adds	r3, r3, #1
 3463 0074 5B00     		lsls	r3, r3, #1
 3464 0076 3A69     		ldr	r2, [r7, #16]
 3465 0078 1344     		add	r3, r3, r2
 3466              		.loc 6 396 27
 3467 007a FA89     		ldrh	r2, [r7, #14]	@ movhi
 3468 007c 1A80     		strh	r2, [r3]	@ movhi
 397:Src/generated/fonts/src/FontCache.cpp ****                 swapped = true;
 3469              		.loc 6 397 25
 3470 007e 0123     		movs	r3, #1
 3471 0080 FB76     		strb	r3, [r7, #27]
 3472              	.L145:
 3473              	.LBE97:
 3474              	.LBE96:
 3475              	.LBE95:
 390:Src/generated/fonts/src/FontCache.cpp ****         {
 3476              		.loc 6 390 9 discriminator 2
 3477 0082 7B69     		ldr	r3, [r7, #20]
 3478 0084 0133     		adds	r3, r3, #1
 3479 0086 7B61     		str	r3, [r7, #20]
 3480 0088 CDE7     		b	.L146
 3481              	.L144:
 3482              	.LBE94:
 398:Src/generated/fonts/src/FontCache.cpp ****             }
 399:Src/generated/fonts/src/FontCache.cpp ****         }
 400:Src/generated/fonts/src/FontCache.cpp **** 
 401:Src/generated/fonts/src/FontCache.cpp ****         //if no two elements were swapped by inner loop, then break
 402:Src/generated/fonts/src/FontCache.cpp ****         if (!swapped)
 3483              		.loc 6 402 13
 3484 008a FB7E     		ldrb	r3, [r7, #27]
 3485 008c 83F00103 		eor	r3, r3, #1
 3486 0090 DBB2     		uxtb	r3, r3
 3487              		.loc 6 402 9
 3488 0092 002B     		cmp	r3, #0
 3489 0094 03D1     		bne	.L150
 3490              	.LBE93:
 387:Src/generated/fonts/src/FontCache.cpp ****     {
 3491              		.loc 6 387 5 discriminator 2
 3492 0096 FB69     		ldr	r3, [r7, #28]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 77


 3493 0098 0133     		adds	r3, r3, #1
 3494 009a FB61     		str	r3, [r7, #28]
 3495 009c BAE7     		b	.L148
 3496              	.L150:
 3497              	.LBB98:
 403:Src/generated/fonts/src/FontCache.cpp ****         {
 404:Src/generated/fonts/src/FontCache.cpp ****             break;
 3498              		.loc 6 404 13
 3499 009e 00BF     		nop
 3500              	.L143:
 3501              	.LBE98:
 3502              	.LBE92:
 405:Src/generated/fonts/src/FontCache.cpp ****         }
 406:Src/generated/fonts/src/FontCache.cpp ****     }
 407:Src/generated/fonts/src/FontCache.cpp ****     return true;
 3503              		.loc 6 407 12
 3504 00a0 0123     		movs	r3, #1
 408:Src/generated/fonts/src/FontCache.cpp **** }
 3505              		.loc 6 408 1
 3506 00a2 1846     		mov	r0, r3
 3507 00a4 2437     		adds	r7, r7, #36
 3508              	.LCFI169:
 3509              		.cfi_def_cfa_offset 4
 3510 00a6 BD46     		mov	sp, r7
 3511              	.LCFI170:
 3512              		.cfi_def_cfa_register 13
 3513              		@ sp needed
 3514 00a8 5DF8047B 		ldr	r7, [sp], #4
 3515              	.LCFI171:
 3516              		.cfi_restore 7
 3517              		.cfi_def_cfa_offset 0
 3518 00ac 7047     		bx	lr
 3519              		.cfi_endproc
 3520              	.LFE196:
 3522              		.section	.text._ZN8touchgfx9FontCache11setPositionEm,"ax",%progbits
 3523              		.align	1
 3524              		.global	_ZN8touchgfx9FontCache11setPositionEm
 3525              		.syntax unified
 3526              		.thumb
 3527              		.thumb_func
 3528              		.fpu fpv4-sp-d16
 3530              	_ZN8touchgfx9FontCache11setPositionEm:
 3531              	.LFB197:
 409:Src/generated/fonts/src/FontCache.cpp **** 
 410:Src/generated/fonts/src/FontCache.cpp **** void FontCache::setPosition(uint32_t position)
 411:Src/generated/fonts/src/FontCache.cpp **** {
 3532              		.loc 6 411 1
 3533              		.cfi_startproc
 3534              		@ args = 0, pretend = 0, frame = 8
 3535              		@ frame_needed = 1, uses_anonymous_args = 0
 3536 0000 80B5     		push	{r7, lr}
 3537              	.LCFI172:
 3538              		.cfi_def_cfa_offset 8
 3539              		.cfi_offset 7, -8
 3540              		.cfi_offset 14, -4
 3541 0002 82B0     		sub	sp, sp, #8
 3542              	.LCFI173:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 78


 3543              		.cfi_def_cfa_offset 16
 3544 0004 00AF     		add	r7, sp, #0
 3545              	.LCFI174:
 3546              		.cfi_def_cfa_register 7
 3547 0006 7860     		str	r0, [r7, #4]
 3548 0008 3960     		str	r1, [r7]
 412:Src/generated/fonts/src/FontCache.cpp ****     if (reader)
 3549              		.loc 6 412 9
 3550 000a 7B68     		ldr	r3, [r7, #4]
 3551 000c 9B6A     		ldr	r3, [r3, #40]
 3552              		.loc 6 412 5
 3553 000e 002B     		cmp	r3, #0
 3554 0010 09D0     		beq	.L153
 413:Src/generated/fonts/src/FontCache.cpp ****     {
 414:Src/generated/fonts/src/FontCache.cpp ****         reader->setPosition(position);
 3555              		.loc 6 414 9
 3556 0012 7B68     		ldr	r3, [r7, #4]
 3557 0014 9A6A     		ldr	r2, [r3, #40]
 3558 0016 7B68     		ldr	r3, [r7, #4]
 3559 0018 9B6A     		ldr	r3, [r3, #40]
 3560              		.loc 6 414 37
 3561 001a 1B68     		ldr	r3, [r3]
 3562 001c 1033     		adds	r3, r3, #16
 3563 001e 1B68     		ldr	r3, [r3]
 3564              		.loc 6 414 28
 3565 0020 3968     		ldr	r1, [r7]
 3566 0022 1046     		mov	r0, r2
 3567 0024 9847     		blx	r3
 3568              	.LVL9:
 3569              	.L153:
 415:Src/generated/fonts/src/FontCache.cpp ****     }
 416:Src/generated/fonts/src/FontCache.cpp **** }
 3570              		.loc 6 416 1
 3571 0026 00BF     		nop
 3572 0028 0837     		adds	r7, r7, #8
 3573              	.LCFI175:
 3574              		.cfi_def_cfa_offset 8
 3575 002a BD46     		mov	sp, r7
 3576              	.LCFI176:
 3577              		.cfi_def_cfa_register 13
 3578              		@ sp needed
 3579 002c 80BD     		pop	{r7, pc}
 3580              		.cfi_endproc
 3581              	.LFE197:
 3583              		.section	.text._ZN8touchgfx9FontCache8readDataEPvm,"ax",%progbits
 3584              		.align	1
 3585              		.global	_ZN8touchgfx9FontCache8readDataEPvm
 3586              		.syntax unified
 3587              		.thumb
 3588              		.thumb_func
 3589              		.fpu fpv4-sp-d16
 3591              	_ZN8touchgfx9FontCache8readDataEPvm:
 3592              	.LFB198:
 417:Src/generated/fonts/src/FontCache.cpp **** 
 418:Src/generated/fonts/src/FontCache.cpp **** void FontCache::readData(void* out, uint32_t numberOfBytes)
 419:Src/generated/fonts/src/FontCache.cpp **** {
 3593              		.loc 6 419 1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 79


 3594              		.cfi_startproc
 3595              		@ args = 0, pretend = 0, frame = 16
 3596              		@ frame_needed = 1, uses_anonymous_args = 0
 3597 0000 80B5     		push	{r7, lr}
 3598              	.LCFI177:
 3599              		.cfi_def_cfa_offset 8
 3600              		.cfi_offset 7, -8
 3601              		.cfi_offset 14, -4
 3602 0002 84B0     		sub	sp, sp, #16
 3603              	.LCFI178:
 3604              		.cfi_def_cfa_offset 24
 3605 0004 00AF     		add	r7, sp, #0
 3606              	.LCFI179:
 3607              		.cfi_def_cfa_register 7
 3608 0006 F860     		str	r0, [r7, #12]
 3609 0008 B960     		str	r1, [r7, #8]
 3610 000a 7A60     		str	r2, [r7, #4]
 420:Src/generated/fonts/src/FontCache.cpp ****     if (reader)
 3611              		.loc 6 420 9
 3612 000c FB68     		ldr	r3, [r7, #12]
 3613 000e 9B6A     		ldr	r3, [r3, #40]
 3614              		.loc 6 420 5
 3615 0010 002B     		cmp	r3, #0
 3616 0012 09D0     		beq	.L156
 421:Src/generated/fonts/src/FontCache.cpp ****     {
 422:Src/generated/fonts/src/FontCache.cpp ****         reader->readData(out, numberOfBytes);
 3617              		.loc 6 422 9
 3618 0014 FB68     		ldr	r3, [r7, #12]
 3619 0016 986A     		ldr	r0, [r3, #40]
 3620 0018 FB68     		ldr	r3, [r7, #12]
 3621 001a 9B6A     		ldr	r3, [r3, #40]
 3622              		.loc 6 422 44
 3623 001c 1B68     		ldr	r3, [r3]
 3624 001e 1433     		adds	r3, r3, #20
 3625 0020 1B68     		ldr	r3, [r3]
 3626              		.loc 6 422 25
 3627 0022 7A68     		ldr	r2, [r7, #4]
 3628 0024 B968     		ldr	r1, [r7, #8]
 3629 0026 9847     		blx	r3
 3630              	.LVL10:
 3631              	.L156:
 423:Src/generated/fonts/src/FontCache.cpp ****     }
 424:Src/generated/fonts/src/FontCache.cpp **** }
 3632              		.loc 6 424 1
 3633 0028 00BF     		nop
 3634 002a 1037     		adds	r7, r7, #16
 3635              	.LCFI180:
 3636              		.cfi_def_cfa_offset 8
 3637 002c BD46     		mov	sp, r7
 3638              	.LCFI181:
 3639              		.cfi_def_cfa_register 13
 3640              		@ sp needed
 3641 002e 80BD     		pop	{r7, pc}
 3642              		.cfi_endproc
 3643              	.LFE198:
 3645              		.weak	_ZTVN8touchgfx9TypedTextE
 3646              		.section	.rodata._ZTVN8touchgfx9TypedTextE,"aG",%progbits,_ZTVN8touchgfx9TypedTextE,comdat
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 80


 3647              		.align	2
 3650              	_ZTVN8touchgfx9TypedTextE:
 3651 0000 00000000 		.word	0
 3652 0004 00000000 		.word	0
 3653 0008 00000000 		.word	_ZN8touchgfx9TypedTextD1Ev
 3654 000c 00000000 		.word	_ZN8touchgfx9TypedTextD0Ev
 3655              		.section	.text._ZN8touchgfx10CachedFontD2Ev,"axG",%progbits,_ZN8touchgfx10CachedFontD5Ev,comdat
 3656              		.align	1
 3657              		.weak	_ZN8touchgfx10CachedFontD2Ev
 3658              		.syntax unified
 3659              		.thumb
 3660              		.thumb_func
 3661              		.fpu fpv4-sp-d16
 3663              	_ZN8touchgfx10CachedFontD2Ev:
 3664              	.LFB204:
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 3665              		.loc 5 12 7
 3666              		.cfi_startproc
 3667              		@ args = 0, pretend = 0, frame = 8
 3668              		@ frame_needed = 1, uses_anonymous_args = 0
 3669 0000 80B5     		push	{r7, lr}
 3670              	.LCFI182:
 3671              		.cfi_def_cfa_offset 8
 3672              		.cfi_offset 7, -8
 3673              		.cfi_offset 14, -4
 3674 0002 82B0     		sub	sp, sp, #8
 3675              	.LCFI183:
 3676              		.cfi_def_cfa_offset 16
 3677 0004 00AF     		add	r7, sp, #0
 3678              	.LCFI184:
 3679              		.cfi_def_cfa_register 7
 3680 0006 7860     		str	r0, [r7, #4]
 3681              	.LBB99:
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 3682              		.loc 5 12 7
 3683 0008 054A     		ldr	r2, .L159
 3684 000a 7B68     		ldr	r3, [r7, #4]
 3685 000c 1A60     		str	r2, [r3]
 3686 000e 7B68     		ldr	r3, [r7, #4]
 3687 0010 1846     		mov	r0, r3
 3688 0012 FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontD2Ev
 3689              	.LBE99:
 3690 0016 7B68     		ldr	r3, [r7, #4]
 3691 0018 1846     		mov	r0, r3
 3692 001a 0837     		adds	r7, r7, #8
 3693              	.LCFI185:
 3694              		.cfi_def_cfa_offset 8
 3695 001c BD46     		mov	sp, r7
 3696              	.LCFI186:
 3697              		.cfi_def_cfa_register 13
 3698              		@ sp needed
 3699 001e 80BD     		pop	{r7, pc}
 3700              	.L160:
 3701              		.align	2
 3702              	.L159:
 3703 0020 08000000 		.word	_ZTVN8touchgfx10CachedFontE+8
 3704              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 81


 3705              	.LFE204:
 3707              		.weak	_ZN8touchgfx10CachedFontD1Ev
 3708              		.thumb_set _ZN8touchgfx10CachedFontD1Ev,_ZN8touchgfx10CachedFontD2Ev
 3709              		.section	.text._ZN8touchgfx10CachedFontD0Ev,"axG",%progbits,_ZN8touchgfx10CachedFontD5Ev,comdat
 3710              		.align	1
 3711              		.weak	_ZN8touchgfx10CachedFontD0Ev
 3712              		.syntax unified
 3713              		.thumb
 3714              		.thumb_func
 3715              		.fpu fpv4-sp-d16
 3717              	_ZN8touchgfx10CachedFontD0Ev:
 3718              	.LFB206:
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 3719              		.loc 5 12 7
 3720              		.cfi_startproc
 3721              		@ args = 0, pretend = 0, frame = 8
 3722              		@ frame_needed = 1, uses_anonymous_args = 0
 3723 0000 80B5     		push	{r7, lr}
 3724              	.LCFI187:
 3725              		.cfi_def_cfa_offset 8
 3726              		.cfi_offset 7, -8
 3727              		.cfi_offset 14, -4
 3728 0002 82B0     		sub	sp, sp, #8
 3729              	.LCFI188:
 3730              		.cfi_def_cfa_offset 16
 3731 0004 00AF     		add	r7, sp, #0
 3732              	.LCFI189:
 3733              		.cfi_def_cfa_register 7
 3734 0006 7860     		str	r0, [r7, #4]
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 3735              		.loc 5 12 7
 3736 0008 7868     		ldr	r0, [r7, #4]
 3737 000a FFF7FEFF 		bl	_ZN8touchgfx10CachedFontD1Ev
 3738 000e 3421     		movs	r1, #52
 3739 0010 7868     		ldr	r0, [r7, #4]
 3740 0012 FFF7FEFF 		bl	_ZdlPvj
 3741 0016 7B68     		ldr	r3, [r7, #4]
 3742 0018 1846     		mov	r0, r3
 3743 001a 0837     		adds	r7, r7, #8
 3744              	.LCFI190:
 3745              		.cfi_def_cfa_offset 8
 3746 001c BD46     		mov	sp, r7
 3747              	.LCFI191:
 3748              		.cfi_def_cfa_register 13
 3749              		@ sp needed
 3750 001e 80BD     		pop	{r7, pc}
 3751              		.cfi_endproc
 3752              	.LFE206:
 3754              		.text
 3755              	.Letext0:
 3756              		.file 7 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 3757              		.file 8 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 3758              		.file 9 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/i
 3759              		.file 10 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine
 3760              		.file 11 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/string.
 3761              		.file 12 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_st
 3762              		.file 13 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 82


 3763              		.file 14 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 3764              		.file 15 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp"
 3765              		.file 16 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 3766              		.file 17 "Middlewares/ST/touchgfx/framework/include/touchgfx/Texts.hpp"
 3767              		.file 18 "Src/generated/fonts/include/fonts/FontCache.hpp"
 3768              		.file 19 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/
 3769              		.file 20 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 83


DEFINED SYMBOLS
                            *ABS*:0000000000000000 FontCache.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:79     .text._ZN8touchgfx4FontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:130    .text._ZN8touchgfx4FontD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:137    .text._ZN8touchgfx4FontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:144    .text._ZN8touchgfx4FontD0Ev:0000000000000000 _ZN8touchgfx4FontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:182    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:185    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:188    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:191    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:194    .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:197    .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 _ZN8touchgfxL18TYPED_TEXT_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:200    .text._ZN8touchgfx9TypedTextD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:207    .text._ZN8touchgfx9TypedTextD2Ev:0000000000000000 _ZN8touchgfx9TypedTextD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:250    .text._ZN8touchgfx9TypedTextD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3650   .rodata._ZTVN8touchgfx9TypedTextE:0000000000000000 _ZTVN8touchgfx9TypedTextE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:207    .text._ZN8touchgfx9TypedTextD2Ev:0000000000000000 _ZN8touchgfx9TypedTextD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:257    .text._ZN8touchgfx9TypedTextD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:264    .text._ZN8touchgfx9TypedTextD0Ev:0000000000000000 _ZN8touchgfx9TypedTextD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:302    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:309    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 _ZN8touchgfx9ConstFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:350    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:309    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 _ZN8touchgfx9ConstFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:357    .text._ZN8touchgfx9ConstFontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:364    .text._ZN8touchgfx9ConstFontD0Ev:0000000000000000 _ZN8touchgfx9ConstFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:402    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:409    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:450    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:409    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:457    .text._ZN8touchgfx13GeneratedFontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:464    .text._ZN8touchgfx13GeneratedFontD0Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:502    .text._ZN8touchgfx10CachedFontC2EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:509    .text._ZN8touchgfx10CachedFontC2EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE:0000000000000000 _ZN8touchgfx10CachedFontC2EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:627    .text._ZN8touchgfx10CachedFontC2EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE:00000000000000b0 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:509    .text._ZN8touchgfx10CachedFontC2EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE:0000000000000000 _ZN8touchgfx10CachedFontC1EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:634    .text._ZN8touchgfx9FontCacheC2Ev:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 84


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:641    .text._ZN8touchgfx9FontCacheC2Ev:0000000000000000 _ZN8touchgfx9FontCacheC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:641    .text._ZN8touchgfx9FontCacheC2Ev:0000000000000000 _ZN8touchgfx9FontCacheC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:699    .text._ZN8touchgfx9FontCache5clearEb:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:706    .text._ZN8touchgfx9FontCache5clearEb:0000000000000000 _ZN8touchgfx9FontCache5clearEb
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:781    .text._ZN8touchgfx9FontCache9setMemoryEPhm:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:788    .text._ZN8touchgfx9FontCache9setMemoryEPhm:0000000000000000 _ZN8touchgfx9FontCache9setMemoryEPhm
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:834    .text._ZN8touchgfx9FontCache9setReaderEPNS_14FontDataReaderE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:841    .text._ZN8touchgfx9FontCache9setReaderEPNS_14FontDataReaderE:0000000000000000 _ZN8touchgfx9FontCache9setReaderEPNS_14FontDataReaderE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:882    .text._ZNK8touchgfx9FontCache8getGlyphEtt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:889    .text._ZNK8touchgfx9FontCache8getGlyphEtt:0000000000000000 _ZNK8touchgfx9FontCache8getGlyphEtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:967    .text._ZN8touchgfx9FontCache4openEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:974    .text._ZN8touchgfx9FontCache4openEv:0000000000000000 _ZN8touchgfx9FontCache4openEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1026   .text._ZN8touchgfx9FontCache5closeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1033   .text._ZN8touchgfx9FontCache5closeEv:0000000000000000 _ZN8touchgfx9FontCache5closeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1085   .text._ZN8touchgfx4FontaSERKS0_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1092   .text._ZN8touchgfx4FontaSERKS0_:0000000000000000 _ZN8touchgfx4FontaSERKS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1170   .text._ZN8touchgfx9ConstFontaSEOS0_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1177   .text._ZN8touchgfx9ConstFontaSEOS0_:0000000000000000 _ZN8touchgfx9ConstFontaSEOS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1224   .text._ZN8touchgfx13GeneratedFontaSEOS0_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1231   .text._ZN8touchgfx13GeneratedFontaSEOS0_:0000000000000000 _ZN8touchgfx13GeneratedFontaSEOS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1286   .text._ZN8touchgfx10CachedFontaSEOS0_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1293   .text._ZN8touchgfx10CachedFontaSEOS0_:0000000000000000 _ZN8touchgfx10CachedFontaSEOS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1344   .rodata:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1360   .text._ZN8touchgfx9FontCache20initializeCachedFontENS_9TypedTextEPNS_10CachedFontEb:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1367   .text._ZN8touchgfx9FontCache20initializeCachedFontENS_9TypedTextEPNS_10CachedFontEb:0000000000000000 _ZN8touchgfx9FontCache20initializeCachedFontENS_9TypedTextEPNS_10CachedFontEb
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3530   .text._ZN8touchgfx9FontCache11setPositionEm:0000000000000000 _ZN8touchgfx9FontCache11setPositionEm
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3591   .text._ZN8touchgfx9FontCache8readDataEPvm:0000000000000000 _ZN8touchgfx9FontCache8readDataEPvm
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3663   .text._ZN8touchgfx10CachedFontD2Ev:0000000000000000 _ZN8touchgfx10CachedFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1825   .text._ZN8touchgfx9FontCache20initializeCachedFontENS_9TypedTextEPNS_10CachedFontEb:0000000000000280 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1835   .text._ZN8touchgfx9TypedTextC2ERKS0_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1842   .text._ZN8touchgfx9TypedTextC2ERKS0_:0000000000000000 _ZN8touchgfx9TypedTextC2ERKS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1888   .text._ZN8touchgfx9TypedTextC2ERKS0_:0000000000000028 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1842   .text._ZN8touchgfx9TypedTextC2ERKS0_:0000000000000000 _ZN8touchgfx9TypedTextC1ERKS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1895   .text._ZN8touchgfx9FontCache11cacheStringENS_9TypedTextEPKt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1902   .text._ZN8touchgfx9FontCache11cacheStringENS_9TypedTextEPKt:0000000000000000 _ZN8touchgfx9FontCache11cacheStringENS_9TypedTextEPKt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2995   .text._ZN8touchgfx9FontCache18createSortedStringEPKt:0000000000000000 _ZN8touchgfx9FontCache18createSortedStringEPKt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2087   .text._ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE:0000000000000000 _ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1979   .text._ZN8touchgfx9FontCache14cacheLigaturesEPNS_10CachedFontENS_9TypedTextEPKt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:1986   .text._ZN8touchgfx9FontCache14cacheLigaturesEPNS_10CachedFontENS_9TypedTextEPKt:0000000000000000 _ZN8touchgfx9FontCache14cacheLigaturesEPNS_10CachedFontENS_9TypedTextEPKt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3112   .text._ZN8touchgfx9FontCache21createSortedLigaturesEPNS_10CachedFontENS_9TypedTextEPKtz:0000000000000000 _ZN8touchgfx9FontCache21createSortedLigaturesEPNS_10CachedFontENS_9TypedTextEPKtz
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2080   .text._ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2406   .text._ZNK8touchgfx9FontCache8containsEtt:0000000000000000 _ZNK8touchgfx9FontCache8containsEtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2491   .text._ZN8touchgfx9FontCache6insertEttmRb:0000000000000000 _ZN8touchgfx9FontCache6insertEttmRb
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2830   .text._ZN8touchgfx9FontCache9cacheDataEmPNS_9GlyphNodeE:0000000000000000 _ZN8touchgfx9FontCache9cacheDataEmPNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2388   .text._ZN8touchgfx9FontCache17cacheSortedStringENS_9TypedTextE:00000000000001b8 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2399   .text._ZNK8touchgfx9FontCache8containsEtt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2484   .text._ZN8touchgfx9FontCache6insertEttmRb:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2618   .text._ZN8touchgfx9FontCache9copyGlyphEPhttmRb:0000000000000000 _ZN8touchgfx9FontCache9copyGlyphEPhttmRb
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2611   .text._ZN8touchgfx9FontCache9copyGlyphEPhttmRb:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2823   .text._ZN8touchgfx9FontCache9cacheDataEmPNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:2988   .text._ZN8touchgfx9FontCache18createSortedStringEPKt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3361   .text._ZN8touchgfx9FontCache16sortSortedStringEi:0000000000000000 _ZN8touchgfx9FontCache16sortSortedStringEi
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3105   .text._ZN8touchgfx9FontCache21createSortedLigaturesEPNS_10CachedFontENS_9TypedTextEPKtz:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3344   .text._ZN8touchgfx9FontCache21createSortedLigaturesEPNS_10CachedFontENS_9TypedTextEPKtz:0000000000000134 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3354   .text._ZN8touchgfx9FontCache16sortSortedStringEi:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3523   .text._ZN8touchgfx9FontCache11setPositionEm:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3584   .text._ZN8touchgfx9FontCache8readDataEPvm:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 85


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3647   .rodata._ZTVN8touchgfx9TypedTextE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3656   .text._ZN8touchgfx10CachedFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3663   .text._ZN8touchgfx10CachedFontD2Ev:0000000000000000 _ZN8touchgfx10CachedFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3703   .text._ZN8touchgfx10CachedFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3710   .text._ZN8touchgfx10CachedFontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s:3717   .text._ZN8touchgfx10CachedFontD0Ev:0000000000000000 _ZN8touchgfx10CachedFontD0Ev
                           .group:0000000000000000 _ZN8touchgfx4FontD5Ev
                           .group:0000000000000000 _ZN8touchgfx9TypedTextD5Ev
                           .group:0000000000000000 _ZN8touchgfx9ConstFontD5Ev
                           .group:0000000000000000 _ZN8touchgfx13GeneratedFontD5Ev
                           .group:0000000000000000 _ZN8touchgfx10CachedFontC5EPKNS_14BinaryFontDataEtPNS_9FontCacheEPKNS_13GeneratedFontE
                           .group:0000000000000000 _ZN8touchgfx9TypedTextC5ERKS0_
                           .group:0000000000000000 _ZN8touchgfx10CachedFontD5Ev
                           .group:0000000000000000 wm4.0.8f82b9771446a4c5d395a560643408f9
                           .group:0000000000000000 wm4.cconfig.h.31.9a7f23fec851cb698f0e4b12b5a812df
                           .group:0000000000000000 wm4.cpu_defines.h.31.bf53b50a3b7882b34c717ebded187478
                           .group:0000000000000000 wm4.cconfig.h.530.716755664a180b5214d4137991428173
                           .group:0000000000000000 wm4._newlib_version.h.4.1ef4e12f167f8b69d7c30054be56050d
                           .group:0000000000000000 wm4.newlib.h.34.314a350541e36f4baea3ec77033a1a03
                           .group:0000000000000000 wm4.ieeefp.h.77.f33a4dce62116f6f5175ff8bae57a54c
                           .group:0000000000000000 wm4.features.h.22.fad1cec3bc7ff06488171438dbdcfd02
                           .group:0000000000000000 wm4.config.h.224.79362c3cdb280fe0b8d95bd0bc4d5c54
                           .group:0000000000000000 wm4._ansi.h.21.5136fa2a01d1fcd44a2e65c6c2417611
                           .group:0000000000000000 wm4.stddef.h.39.cdc2cef840622b974aa19abcc0caae93
                           .group:0000000000000000 wm4._types.h.20.dd0d04dca3800a0d2a6129b87f3adbb2
                           .group:0000000000000000 wm4.stddef.h.155.7076294d263a8c080378a0849fe2c570
                           .group:0000000000000000 wm4._default_types.h.6.959254cf5f09734ea7516c89e8bb21bd
                           .group:0000000000000000 wm4._types.h.127.34941de1b2539d59d5cac00e0dd27a45
                           .group:0000000000000000 wm4.reent.h.17.e292bf8b0bec6c96e131a54347145a30
                           .group:0000000000000000 wm4.lock.h.2.1461d1fff82dffe8bfddc23307f6484f
                           .group:0000000000000000 wm4.reent.h.77.32fd7d280fc2a40b0797abce5beaf6e3
                           .group:0000000000000000 wm4.assert.h.11.a5d97ca77559a42890313c4941c01fd9
                           .group:0000000000000000 wm4.reent.h.504.40d20ade344680fbcb6a0178bf7ae09e
                           .group:0000000000000000 wm4.cdefs.h.49.6cb61cdf7b446f131d08825667c792f6
                           .group:0000000000000000 wm4.string.h.15.dab3980bf35408a4c507182805e2de3a
                           .group:0000000000000000 wm4.stddef.h.155.6a74c971399e3775a985604de4c85627
                           .group:0000000000000000 wm4.cstring.45.6ab09de7fb97b576e744347688ddc8d7
                           .group:0000000000000000 wm4.assert.h.11.7043852a511d37ae606afa012e67e471
                           .group:0000000000000000 wm4.stdint.h.4.659be5aa44c4ab4eb7c7cc2b24d8ceee
                           .group:0000000000000000 wm4._intsup.h.10.48bafbb683905c4daa4565a85aeeb264
                           .group:0000000000000000 wm4._stdint.h.10.c24fa3af3bc1706662bb5593a907e841
                           .group:0000000000000000 wm4.stdint.h.23.d53047a68f4a85177f80b422d52785ed
                           .group:0000000000000000 wm4.Config.hpp.19.c00fda435df74bc6ea14040a5f8c7f3f
                           .group:0000000000000000 wm4.Types.hpp.33.d478feb449e34922fe6c04dfd673bcbc
                           .group:0000000000000000 wm4.stdarg.h.31.b55da1089056868966f25de5dbfc7d3c
                           .group:0000000000000000 wm4.Utils.hpp.42.d80a724f64f94d0e97cc35bd75e65443

UNDEFINED SYMBOLS
_ZTVN8touchgfx4FontE
_ZdlPvj
_ZTVN8touchgfx9ConstFontE
_ZTVN8touchgfx13GeneratedFontE
_ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContextualFormsTableE
_ZTVN8touchgfx10CachedFontE
_ZN8touchgfx6memsetEPvhm
__assert_func
_ZN17TypedTextDatabase8getFontsEv
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEOkBTU.s 			page 86


_ZN8touchgfx9TypedText10typedTextsE
_ZN8touchgfx9TypedText18numberOfTypedTextsE
_ZN8touchgfx9TypedText5fontsE
_ZN8touchgfx7Unicode6strlenEPKt
_ZN8touchgfx12TextProviderC1Ev
_ZN8touchgfx12TextProvider10initializeEPKtSt9__va_listS2_PKNS_24FontContextualFormsTableE
_ZN8touchgfx12TextProvider15getNextLigatureEh
