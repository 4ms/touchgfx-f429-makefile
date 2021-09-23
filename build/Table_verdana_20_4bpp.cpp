ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 1


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
  13              		.file	"Table_verdana_20_4bpp.cpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 2


  80              		.weak	_ZN8touchgfx4FontD2Ev
  81              		.arch armv7e-m
  82              		.syntax unified
  83              		.thumb
  84              		.thumb_func
  85              		.fpu fpv4-sp-d16
  87              	_ZN8touchgfx4FontD2Ev:
  88              	.LFB53:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 3


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 4


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 5


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
 106              	.LBB2:
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 107              		.loc 1 168 5
 108 0008 044A     		ldr	r2, .L3
 109 000a 7B68     		ldr	r3, [r7, #4]
 110 000c 1A60     		str	r2, [r3]
 111              	.LBE2:
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
 132              	.LFE53:
 134              		.weak	_ZN8touchgfx4FontD1Ev
 135              		.thumb_set _ZN8touchgfx4FontD1Ev,_ZN8touchgfx4FontD2Ev
 136              		.section	.text._ZN8touchgfx4FontD0Ev,"axG",%progbits,_ZN8touchgfx4FontD5Ev,comdat
 137              		.align	1
 138              		.weak	_ZN8touchgfx4FontD0Ev
 139              		.syntax unified
 140              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 6


 141              		.thumb_func
 142              		.fpu fpv4-sp-d16
 144              	_ZN8touchgfx4FontD0Ev:
 145              	.LFB55:
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
 179              	.LFE55:
 181              		.section	.text._ZN8touchgfx9ConstFontD2Ev,"axG",%progbits,_ZN8touchgfx9ConstFontD5Ev,comdat
 182              		.align	1
 183              		.weak	_ZN8touchgfx9ConstFontD2Ev
 184              		.syntax unified
 185              		.thumb
 186              		.thumb_func
 187              		.fpu fpv4-sp-d16
 189              	_ZN8touchgfx9ConstFontD2Ev:
 190              	.LFB79:
 191              		.file 2 "Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** * the root directory of this software component.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 7


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
 192              		.loc 2 35 7
 193              		.cfi_startproc
 194              		@ args = 0, pretend = 0, frame = 8
 195              		@ frame_needed = 1, uses_anonymous_args = 0
 196 0000 80B5     		push	{r7, lr}
 197              	.LCFI11:
 198              		.cfi_def_cfa_offset 8
 199              		.cfi_offset 7, -8
 200              		.cfi_offset 14, -4
 201 0002 82B0     		sub	sp, sp, #8
 202              	.LCFI12:
 203              		.cfi_def_cfa_offset 16
 204 0004 00AF     		add	r7, sp, #0
 205              	.LCFI13:
 206              		.cfi_def_cfa_register 7
 207 0006 7860     		str	r0, [r7, #4]
 208              	.LBB3:
 209              		.loc 2 35 7
 210 0008 054A     		ldr	r2, .L9
 211 000a 7B68     		ldr	r3, [r7, #4]
 212 000c 1A60     		str	r2, [r3]
 213 000e 7B68     		ldr	r3, [r7, #4]
 214 0010 1846     		mov	r0, r3
 215 0012 FFF7FEFF 		bl	_ZN8touchgfx4FontD2Ev
 216              	.LBE3:
 217 0016 7B68     		ldr	r3, [r7, #4]
 218 0018 1846     		mov	r0, r3
 219 001a 0837     		adds	r7, r7, #8
 220              	.LCFI14:
 221              		.cfi_def_cfa_offset 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 8


 222 001c BD46     		mov	sp, r7
 223              	.LCFI15:
 224              		.cfi_def_cfa_register 13
 225              		@ sp needed
 226 001e 80BD     		pop	{r7, pc}
 227              	.L10:
 228              		.align	2
 229              	.L9:
 230 0020 08000000 		.word	_ZTVN8touchgfx9ConstFontE+8
 231              		.cfi_endproc
 232              	.LFE79:
 234              		.weak	_ZN8touchgfx9ConstFontD1Ev
 235              		.thumb_set _ZN8touchgfx9ConstFontD1Ev,_ZN8touchgfx9ConstFontD2Ev
 236              		.section	.text._ZN8touchgfx9ConstFontD0Ev,"axG",%progbits,_ZN8touchgfx9ConstFontD5Ev,comdat
 237              		.align	1
 238              		.weak	_ZN8touchgfx9ConstFontD0Ev
 239              		.syntax unified
 240              		.thumb
 241              		.thumb_func
 242              		.fpu fpv4-sp-d16
 244              	_ZN8touchgfx9ConstFontD0Ev:
 245              	.LFB81:
 246              		.loc 2 35 7
 247              		.cfi_startproc
 248              		@ args = 0, pretend = 0, frame = 8
 249              		@ frame_needed = 1, uses_anonymous_args = 0
 250 0000 80B5     		push	{r7, lr}
 251              	.LCFI16:
 252              		.cfi_def_cfa_offset 8
 253              		.cfi_offset 7, -8
 254              		.cfi_offset 14, -4
 255 0002 82B0     		sub	sp, sp, #8
 256              	.LCFI17:
 257              		.cfi_def_cfa_offset 16
 258 0004 00AF     		add	r7, sp, #0
 259              	.LCFI18:
 260              		.cfi_def_cfa_register 7
 261 0006 7860     		str	r0, [r7, #4]
 262              		.loc 2 35 7
 263 0008 7868     		ldr	r0, [r7, #4]
 264 000a FFF7FEFF 		bl	_ZN8touchgfx9ConstFontD1Ev
 265 000e 1821     		movs	r1, #24
 266 0010 7868     		ldr	r0, [r7, #4]
 267 0012 FFF7FEFF 		bl	_ZdlPvj
 268 0016 7B68     		ldr	r3, [r7, #4]
 269 0018 1846     		mov	r0, r3
 270 001a 0837     		adds	r7, r7, #8
 271              	.LCFI19:
 272              		.cfi_def_cfa_offset 8
 273 001c BD46     		mov	sp, r7
 274              	.LCFI20:
 275              		.cfi_def_cfa_register 13
 276              		@ sp needed
 277 001e 80BD     		pop	{r7, pc}
 278              		.cfi_endproc
 279              	.LFE81:
 281              		.section	.text._ZN8touchgfx13GeneratedFontD2Ev,"axG",%progbits,_ZN8touchgfx13GeneratedFontD5Ev,com
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 9


 282              		.align	1
 283              		.weak	_ZN8touchgfx13GeneratedFontD2Ev
 284              		.syntax unified
 285              		.thumb
 286              		.thumb_func
 287              		.fpu fpv4-sp-d16
 289              	_ZN8touchgfx13GeneratedFontD2Ev:
 290              	.LFB86:
 291              		.file 3 "Src/generated/fonts/include/fonts/GeneratedFont.hpp"
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
 292              		.loc 3 17 7
 293              		.cfi_startproc
 294              		@ args = 0, pretend = 0, frame = 8
 295              		@ frame_needed = 1, uses_anonymous_args = 0
 296 0000 80B5     		push	{r7, lr}
 297              	.LCFI21:
 298              		.cfi_def_cfa_offset 8
 299              		.cfi_offset 7, -8
 300              		.cfi_offset 14, -4
 301 0002 82B0     		sub	sp, sp, #8
 302              	.LCFI22:
 303              		.cfi_def_cfa_offset 16
 304 0004 00AF     		add	r7, sp, #0
 305              	.LCFI23:
 306              		.cfi_def_cfa_register 7
 307 0006 7860     		str	r0, [r7, #4]
 308              	.LBB4:
 309              		.loc 3 17 7
 310 0008 054A     		ldr	r2, .L15
 311 000a 7B68     		ldr	r3, [r7, #4]
 312 000c 1A60     		str	r2, [r3]
 313 000e 7B68     		ldr	r3, [r7, #4]
 314 0010 1846     		mov	r0, r3
 315 0012 FFF7FEFF 		bl	_ZN8touchgfx9ConstFontD2Ev
 316              	.LBE4:
 317 0016 7B68     		ldr	r3, [r7, #4]
 318 0018 1846     		mov	r0, r3
 319 001a 0837     		adds	r7, r7, #8
 320              	.LCFI24:
 321              		.cfi_def_cfa_offset 8
 322 001c BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 10


 323              	.LCFI25:
 324              		.cfi_def_cfa_register 13
 325              		@ sp needed
 326 001e 80BD     		pop	{r7, pc}
 327              	.L16:
 328              		.align	2
 329              	.L15:
 330 0020 08000000 		.word	_ZTVN8touchgfx13GeneratedFontE+8
 331              		.cfi_endproc
 332              	.LFE86:
 334              		.weak	_ZN8touchgfx13GeneratedFontD1Ev
 335              		.thumb_set _ZN8touchgfx13GeneratedFontD1Ev,_ZN8touchgfx13GeneratedFontD2Ev
 336              		.section	.text._ZN8touchgfx13GeneratedFontD0Ev,"axG",%progbits,_ZN8touchgfx13GeneratedFontD5Ev,com
 337              		.align	1
 338              		.weak	_ZN8touchgfx13GeneratedFontD0Ev
 339              		.syntax unified
 340              		.thumb
 341              		.thumb_func
 342              		.fpu fpv4-sp-d16
 344              	_ZN8touchgfx13GeneratedFontD0Ev:
 345              	.LFB88:
 346              		.loc 3 17 7
 347              		.cfi_startproc
 348              		@ args = 0, pretend = 0, frame = 8
 349              		@ frame_needed = 1, uses_anonymous_args = 0
 350 0000 80B5     		push	{r7, lr}
 351              	.LCFI26:
 352              		.cfi_def_cfa_offset 8
 353              		.cfi_offset 7, -8
 354              		.cfi_offset 14, -4
 355 0002 82B0     		sub	sp, sp, #8
 356              	.LCFI27:
 357              		.cfi_def_cfa_offset 16
 358 0004 00AF     		add	r7, sp, #0
 359              	.LCFI28:
 360              		.cfi_def_cfa_register 7
 361 0006 7860     		str	r0, [r7, #4]
 362              		.loc 3 17 7
 363 0008 7868     		ldr	r0, [r7, #4]
 364 000a FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontD1Ev
 365 000e 2821     		movs	r1, #40
 366 0010 7868     		ldr	r0, [r7, #4]
 367 0012 FFF7FEFF 		bl	_ZdlPvj
 368 0016 7B68     		ldr	r3, [r7, #4]
 369 0018 1846     		mov	r0, r3
 370 001a 0837     		adds	r7, r7, #8
 371              	.LCFI29:
 372              		.cfi_def_cfa_offset 8
 373 001c BD46     		mov	sp, r7
 374              	.LCFI30:
 375              		.cfi_def_cfa_register 13
 376              		@ sp needed
 377 001e 80BD     		pop	{r7, pc}
 378              		.cfi_endproc
 379              	.LFE88:
 381              		.global	glyphs_verdana_20_4bpp
 382              		.section	"FontFlashSection","a"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 11


 383              		.align	2
 386              	glyphs_verdana_20_4bpp:
 387 0000 00000000 		.word	0
 388 0004 3F00     		.short	63
 389 0006 09       		.byte	9
 390 0007 0E       		.byte	14
 391 0008 0E       		.byte	14
 392 0009 01       		.byte	1
 393 000a 0B       		.byte	11
 394 000b 00       		.byte	0
 395 000c 00       		.byte	0
 396 000d 00       		.byte	0
 397              		.global	unicodes_verdana_20_4bpp
 398              		.section	.rodata.unicodes_verdana_20_4bpp,"a"
 399              		.align	2
 402              	unicodes_verdana_20_4bpp:
 403 0000 00000000 		.word	unicodes_verdana_20_4bpp_0
 404              		.section	.bss._ZZ23getFont_verdana_20_4bppvE15verdana_20_4bpp,"aw",%nobits
 405              		.align	2
 408              	_ZZ23getFont_verdana_20_4bppvE15verdana_20_4bpp:
 409 0000 00000000 		.space	40
 409      00000000 
 409      00000000 
 409      00000000 
 409      00000000 
 410              		.section	.bss._ZGVZ23getFont_verdana_20_4bppvE15verdana_20_4bpp,"aw",%nobits
 411              		.align	2
 414              	_ZGVZ23getFont_verdana_20_4bppvE15verdana_20_4bpp:
 415 0000 00000000 		.space	4
 416              		.section	.text.__tcf_0,"ax",%progbits
 417              		.align	1
 418              		.syntax unified
 419              		.thumb
 420              		.thumb_func
 421              		.fpu fpv4-sp-d16
 423              	__tcf_0:
 424              	.LFB97:
 425              		.file 4 "Src/generated/fonts/src/Table_verdana_20_4bpp.cpp"
   1:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** // Autogenerated, do not edit
   2:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** 
   3:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** #include <fonts/GeneratedFont.hpp>
   4:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** 
   5:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** FONT_TABLE_LOCATION_FLASH_PRAGMA
   6:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** KEEP extern const touchgfx::GlyphNode glyphs_verdana_20_4bpp[] FONT_TABLE_LOCATION_FLASH_ATTRIBUTE 
   7:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp ****     {     0, 0x003F,   9,  14,  14,   1,  11,   0,   0, 0x00 }
   8:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** };
   9:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** 
  10:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** // verdana_20_4bpp
  11:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** extern const touchgfx::GlyphNode glyphs_verdana_20_4bpp[];
  12:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** extern const uint8_t unicodes_verdana_20_4bpp_0[];
  13:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** extern const uint8_t* const unicodes_verdana_20_4bpp[] = {
  14:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp ****     unicodes_verdana_20_4bpp_0
  15:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** };
  16:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** extern const touchgfx::KerningNode kerning_verdana_20_4bpp[];
  17:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** 
  18:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** touchgfx::GeneratedFont& getFont_verdana_20_4bpp();
  19:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 12


  20:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** touchgfx::GeneratedFont& getFont_verdana_20_4bpp()
  21:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** {
  22:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp ****     static touchgfx::GeneratedFont verdana_20_4bpp(glyphs_verdana_20_4bpp, 1, 20, 0, 4, 1, 0, 0, un
 426              		.loc 4 22 160
 427              		.cfi_startproc
 428              		@ args = 0, pretend = 0, frame = 0
 429              		@ frame_needed = 1, uses_anonymous_args = 0
 430 0000 80B5     		push	{r7, lr}
 431              	.LCFI31:
 432              		.cfi_def_cfa_offset 8
 433              		.cfi_offset 7, -8
 434              		.cfi_offset 14, -4
 435 0002 00AF     		add	r7, sp, #0
 436              	.LCFI32:
 437              		.cfi_def_cfa_register 7
 438              		.loc 4 22 160
 439 0004 0148     		ldr	r0, .L20
 440 0006 FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontD1Ev
 441 000a 80BD     		pop	{r7, pc}
 442              	.L21:
 443              		.align	2
 444              	.L20:
 445 000c 00000000 		.word	_ZZ23getFont_verdana_20_4bppvE15verdana_20_4bpp
 446              		.cfi_endproc
 447              	.LFE97:
 449              		.section	.text._Z23getFont_verdana_20_4bppv,"ax",%progbits
 450              		.align	1
 451              		.global	_Z23getFont_verdana_20_4bppv
 452              		.syntax unified
 453              		.thumb
 454              		.thumb_func
 455              		.fpu fpv4-sp-d16
 457              	_Z23getFont_verdana_20_4bppv:
 458              	.LFB96:
  21:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp ****     static touchgfx::GeneratedFont verdana_20_4bpp(glyphs_verdana_20_4bpp, 1, 20, 0, 4, 1, 0, 0, un
 459              		.loc 4 21 1
 460              		.cfi_startproc
 461              		@ args = 0, pretend = 0, frame = 0
 462              		@ frame_needed = 1, uses_anonymous_args = 0
 463 0000 80B5     		push	{r7, lr}
 464              	.LCFI33:
 465              		.cfi_def_cfa_offset 8
 466              		.cfi_offset 7, -8
 467              		.cfi_offset 14, -4
 468 0002 8CB0     		sub	sp, sp, #48
 469              	.LCFI34:
 470              		.cfi_def_cfa_offset 56
 471 0004 0CAF     		add	r7, sp, #48
 472              	.LCFI35:
 473              		.cfi_def_cfa 7, 8
 474              		.loc 4 22 160
 475 0006 1F4B     		ldr	r3, .L25
 476 0008 1B78     		ldrb	r3, [r3]
 477 000a BFF35B8F 		dmb	ish
 478 000e DBB2     		uxtb	r3, r3
 479 0010 03F00103 		and	r3, r3, #1
 480 0014 002B     		cmp	r3, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 13


 481 0016 0CBF     		ite	eq
 482 0018 0123     		moveq	r3, #1
 483 001a 0023     		movne	r3, #0
 484 001c DBB2     		uxtb	r3, r3
 485 001e 002B     		cmp	r3, #0
 486 0020 2CD0     		beq	.L23
 487              		.loc 4 22 160 is_stmt 0 discriminator 1
 488 0022 1848     		ldr	r0, .L25
 489 0024 FFF7FEFF 		bl	__cxa_guard_acquire
 490 0028 0346     		mov	r3, r0
 491 002a 002B     		cmp	r3, #0
 492 002c 14BF     		ite	ne
 493 002e 0123     		movne	r3, #1
 494 0030 0023     		moveq	r3, #0
 495 0032 DBB2     		uxtb	r3, r3
 496 0034 002B     		cmp	r3, #0
 497 0036 21D0     		beq	.L23
 498              		.loc 4 22 160 discriminator 2
 499 0038 0023     		movs	r3, #0
 500 003a 0A93     		str	r3, [sp, #40]
 501 003c 0023     		movs	r3, #0
 502 003e 0993     		str	r3, [sp, #36]
 503 0040 0023     		movs	r3, #0
 504 0042 0893     		str	r3, [sp, #32]
 505 0044 3F23     		movs	r3, #63
 506 0046 0793     		str	r3, [sp, #28]
 507 0048 0F4B     		ldr	r3, .L25+4
 508 004a 0693     		str	r3, [sp, #24]
 509 004c 0F4B     		ldr	r3, .L25+8
 510 004e 0593     		str	r3, [sp, #20]
 511 0050 0023     		movs	r3, #0
 512 0052 0493     		str	r3, [sp, #16]
 513 0054 0023     		movs	r3, #0
 514 0056 0393     		str	r3, [sp, #12]
 515 0058 0123     		movs	r3, #1
 516 005a 0293     		str	r3, [sp, #8]
 517 005c 0423     		movs	r3, #4
 518 005e 0193     		str	r3, [sp, #4]
 519 0060 0023     		movs	r3, #0
 520 0062 0093     		str	r3, [sp]
 521 0064 1423     		movs	r3, #20
 522 0066 0122     		movs	r2, #1
 523 0068 0949     		ldr	r1, .L25+12
 524 006a 0A48     		ldr	r0, .L25+16
 525 006c FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontC1EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontCo
 526 0070 0448     		ldr	r0, .L25
 527 0072 FFF7FEFF 		bl	__cxa_guard_release
 528 0076 0848     		ldr	r0, .L25+20
 529 0078 FFF7FEFF 		bl	atexit
 530              	.L23:
  23:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp ****     return verdana_20_4bpp;
 531              		.loc 4 23 12 is_stmt 1
 532 007c 054B     		ldr	r3, .L25+16
  24:Src/generated/fonts/src/Table_verdana_20_4bpp.cpp **** }
 533              		.loc 4 24 1
 534 007e 1846     		mov	r0, r3
 535 0080 BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 14


 536              	.LCFI36:
 537              		.cfi_def_cfa_register 13
 538              		@ sp needed
 539 0082 80BD     		pop	{r7, pc}
 540              	.L26:
 541              		.align	2
 542              	.L25:
 543 0084 00000000 		.word	_ZGVZ23getFont_verdana_20_4bppvE15verdana_20_4bpp
 544 0088 00000000 		.word	kerning_verdana_20_4bpp
 545 008c 00000000 		.word	unicodes_verdana_20_4bpp
 546 0090 00000000 		.word	glyphs_verdana_20_4bpp
 547 0094 00000000 		.word	_ZZ23getFont_verdana_20_4bppvE15verdana_20_4bpp
 548 0098 00000000 		.word	__tcf_0
 549              		.cfi_endproc
 550              	.LFE96:
 552              		.text
 553              	.Letext0:
 554              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 555              		.file 6 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 556              		.file 7 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 557              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 558              		.file 9 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/i
 559              		.file 10 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 15


DEFINED SYMBOLS
                            *ABS*:0000000000000000 Table_verdana_20_4bpp.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:79     .text._ZN8touchgfx4FontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:130    .text._ZN8touchgfx4FontD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:137    .text._ZN8touchgfx4FontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:144    .text._ZN8touchgfx4FontD0Ev:0000000000000000 _ZN8touchgfx4FontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:182    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:189    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 _ZN8touchgfx9ConstFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:230    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:189    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 _ZN8touchgfx9ConstFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:237    .text._ZN8touchgfx9ConstFontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:244    .text._ZN8touchgfx9ConstFontD0Ev:0000000000000000 _ZN8touchgfx9ConstFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:282    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:289    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:330    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:289    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:337    .text._ZN8touchgfx13GeneratedFontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:344    .text._ZN8touchgfx13GeneratedFontD0Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:386    FontFlashSection:0000000000000000 glyphs_verdana_20_4bpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:383    FontFlashSection:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:402    .rodata.unicodes_verdana_20_4bpp:0000000000000000 unicodes_verdana_20_4bpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:399    .rodata.unicodes_verdana_20_4bpp:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:405    .bss._ZZ23getFont_verdana_20_4bppvE15verdana_20_4bpp:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:408    .bss._ZZ23getFont_verdana_20_4bppvE15verdana_20_4bpp:0000000000000000 _ZZ23getFont_verdana_20_4bppvE15verdana_20_4bpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:411    .bss._ZGVZ23getFont_verdana_20_4bppvE15verdana_20_4bpp:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:414    .bss._ZGVZ23getFont_verdana_20_4bppvE15verdana_20_4bpp:0000000000000000 _ZGVZ23getFont_verdana_20_4bppvE15verdana_20_4bpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:417    .text.__tcf_0:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:423    .text.__tcf_0:0000000000000000 __tcf_0
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:445    .text.__tcf_0:000000000000000c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:450    .text._Z23getFont_verdana_20_4bppv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:457    .text._Z23getFont_verdana_20_4bppv:0000000000000000 _Z23getFont_verdana_20_4bppv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s:543    .text._Z23getFont_verdana_20_4bppv:0000000000000084 $d
                           .group:0000000000000000 _ZN8touchgfx4FontD5Ev
                           .group:0000000000000000 _ZN8touchgfx9ConstFontD5Ev
                           .group:0000000000000000 _ZN8touchgfx13GeneratedFontD5Ev
                           .group:0000000000000000 wm4.0.8f82b9771446a4c5d395a560643408f9
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccWnv6hJ.s 			page 16


                           .group:0000000000000000 wm4._newlib_version.h.4.1ef4e12f167f8b69d7c30054be56050d
                           .group:0000000000000000 wm4.newlib.h.34.314a350541e36f4baea3ec77033a1a03
                           .group:0000000000000000 wm4.ieeefp.h.77.f33a4dce62116f6f5175ff8bae57a54c
                           .group:0000000000000000 wm4.features.h.22.fad1cec3bc7ff06488171438dbdcfd02
                           .group:0000000000000000 wm4.config.h.224.79362c3cdb280fe0b8d95bd0bc4d5c54
                           .group:0000000000000000 wm4._ansi.h.21.5136fa2a01d1fcd44a2e65c6c2417611
                           .group:0000000000000000 wm4.assert.h.11.a5d97ca77559a42890313c4941c01fd9
                           .group:0000000000000000 wm4.stdint.h.4.659be5aa44c4ab4eb7c7cc2b24d8ceee
                           .group:0000000000000000 wm4._default_types.h.6.959254cf5f09734ea7516c89e8bb21bd
                           .group:0000000000000000 wm4._intsup.h.10.48bafbb683905c4daa4565a85aeeb264
                           .group:0000000000000000 wm4._stdint.h.10.c24fa3af3bc1706662bb5593a907e841
                           .group:0000000000000000 wm4.stdint.h.23.d53047a68f4a85177f80b422d52785ed
                           .group:0000000000000000 wm4.Config.hpp.19.c00fda435df74bc6ea14040a5f8c7f3f
                           .group:0000000000000000 wm4.Types.hpp.33.d478feb449e34922fe6c04dfd673bcbc
                           .group:0000000000000000 wm4.stdarg.h.31.b55da1089056868966f25de5dbfc7d3c

UNDEFINED SYMBOLS
_ZTVN8touchgfx4FontE
_ZdlPvj
_ZTVN8touchgfx9ConstFontE
_ZTVN8touchgfx13GeneratedFontE
unicodes_verdana_20_4bpp_0
__cxa_guard_acquire
_ZN8touchgfx13GeneratedFontC1EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContextualFormsTableE
__cxa_guard_release
atexit
kerning_verdana_20_4bpp
