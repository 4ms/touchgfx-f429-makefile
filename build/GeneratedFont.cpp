ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 1


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
  13              		.file	"GeneratedFont.cpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 2


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 3


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 4


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 5


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
 106              	.LBB5:
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 107              		.loc 1 168 5
 108 0008 044A     		ldr	r2, .L3
 109 000a 7B68     		ldr	r3, [r7, #4]
 110 000c 1A60     		str	r2, [r3]
 111              	.LBE5:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 6


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
 181              		.section	.text._ZNK8touchgfx4Font8getGlyphEt,"axG",%progbits,_ZNK8touchgfx4Font8getGlyphEt,comdat
 182              		.align	1
 183              		.weak	_ZNK8touchgfx4Font8getGlyphEt
 184              		.syntax unified
 185              		.thumb
 186              		.thumb_func
 187              		.fpu fpv4-sp-d16
 189              	_ZNK8touchgfx4Font8getGlyphEt:
 190              	.LFB56:
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the glyph data associated with the specified Unicode. Please note that in case
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * of Thai letters and Arabic letters where diacritics can be placed relative to the
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * previous character(s), please use TextProvider::getNextLigature() instead as it will
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * create a temporary GlyphNode that will be adjusted with respect to X/Y position.
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param       unicode      The character to look up.
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param       pixelData    Pointer to the pixel data for the glyph if the glyph is
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 7


 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *                           found. This is set by this method.
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param [out] bitsPerPixel Reference where to place the number of bits per pixel.
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return A pointer to the glyph node or null if the glyph was not found.
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual const GlyphNode* getGlyph(Unicode::UnicodeChar unicode, const uint8_t*& pixelData, uint
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the glyph data associated with the specified Unicode. Please note that in case
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * of Thai letters and Arabic letters where diacritics can be placed relative to the
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * previous character(s), please use TextProvider::getNextLigature() instead as it will
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * create a temporary GlyphNode that will be adjusted with respect to X/Y position.
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  unicode The character to look up.
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return A pointer to the glyph node or null if the glyph was not found.
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @see TextProvider::getNextLigature
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual const GlyphNode* getGlyph(Unicode::UnicodeChar unicode) const
 191              		.loc 1 198 30
 192              		.cfi_startproc
 193              		@ args = 0, pretend = 0, frame = 24
 194              		@ frame_needed = 1, uses_anonymous_args = 0
 195 0000 90B5     		push	{r4, r7, lr}
 196              	.LCFI11:
 197              		.cfi_def_cfa_offset 12
 198              		.cfi_offset 4, -12
 199              		.cfi_offset 7, -8
 200              		.cfi_offset 14, -4
 201 0002 87B0     		sub	sp, sp, #28
 202              	.LCFI12:
 203              		.cfi_def_cfa_offset 40
 204 0004 00AF     		add	r7, sp, #0
 205              	.LCFI13:
 206              		.cfi_def_cfa_register 7
 207 0006 7860     		str	r0, [r7, #4]
 208 0008 0B46     		mov	r3, r1
 209 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         if (unicode == 0)
 210              		.loc 1 200 9
 211 000c 7B88     		ldrh	r3, [r7, #2]
 212 000e 002B     		cmp	r3, #0
 213 0010 01D1     		bne	.L8
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         {
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****             return 0;
 214              		.loc 1 202 20
 215 0012 0023     		movs	r3, #0
 216 0014 10E0     		b	.L10
 217              	.L8:
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         }
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         const uint8_t* dummyPixelDataPointer = 0;
 218              		.loc 1 204 24
 219 0016 0023     		movs	r3, #0
 220 0018 3B61     		str	r3, [r7, #16]
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         uint8_t bitsPerPixelDummy = 0;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 8


 221              		.loc 1 205 17
 222 001a 0023     		movs	r3, #0
 223 001c FB73     		strb	r3, [r7, #15]
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         const GlyphNode* glyph = getGlyph(unicode, dummyPixelDataPointer, bitsPerPixelDummy);
 224              		.loc 1 206 92
 225 001e 7B68     		ldr	r3, [r7, #4]
 226 0020 1B68     		ldr	r3, [r3]
 227 0022 0833     		adds	r3, r3, #8
 228 0024 1C68     		ldr	r4, [r3]
 229              		.loc 1 206 42
 230 0026 07F10F03 		add	r3, r7, #15
 231 002a 07F11002 		add	r2, r7, #16
 232 002e 7988     		ldrh	r1, [r7, #2]
 233 0030 7868     		ldr	r0, [r7, #4]
 234 0032 A047     		blx	r4
 235              	.LVL0:
 236 0034 7861     		str	r0, [r7, #20]
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return glyph;
 237              		.loc 1 207 16
 238 0036 7B69     		ldr	r3, [r7, #20]
 239              	.L10:
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 240              		.loc 1 208 5 discriminator 1
 241 0038 1846     		mov	r0, r3
 242 003a 1C37     		adds	r7, r7, #28
 243              	.LCFI14:
 244              		.cfi_def_cfa_offset 12
 245 003c BD46     		mov	sp, r7
 246              	.LCFI15:
 247              		.cfi_def_cfa_register 13
 248              		@ sp needed
 249 003e 90BD     		pop	{r4, r7, pc}
 250              		.cfi_endproc
 251              	.LFE56:
 253              		.section	.text._ZNK8touchgfx4Font15getFallbackCharEv,"axG",%progbits,_ZNK8touchgfx4Font15getFallba
 254              		.align	1
 255              		.weak	_ZNK8touchgfx4Font15getFallbackCharEv
 256              		.syntax unified
 257              		.thumb
 258              		.thumb_func
 259              		.fpu fpv4-sp-d16
 261              	_ZNK8touchgfx4Font15getFallbackCharEv:
 262              	.LFB57:
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets fallback character for the given font. The fallback character is the character
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * used when no glyph is available for some character. If 0 (zero) is returned, there is
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * no default character.
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The default character for the typography in case no glyph is available.
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual Unicode::UnicodeChar getFallbackChar() const
 263              		.loc 1 217 34
 264              		.cfi_startproc
 265              		@ args = 0, pretend = 0, frame = 8
 266              		@ frame_needed = 1, uses_anonymous_args = 0
 267              		@ link register save eliminated.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 9


 268 0000 80B4     		push	{r7}
 269              	.LCFI16:
 270              		.cfi_def_cfa_offset 4
 271              		.cfi_offset 7, -4
 272 0002 83B0     		sub	sp, sp, #12
 273              	.LCFI17:
 274              		.cfi_def_cfa_offset 16
 275 0004 00AF     		add	r7, sp, #0
 276              	.LCFI18:
 277              		.cfi_def_cfa_register 7
 278 0006 7860     		str	r0, [r7, #4]
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return fallbackCharacter;
 279              		.loc 1 219 16
 280 0008 7B68     		ldr	r3, [r7, #4]
 281 000a 5B89     		ldrh	r3, [r3, #10]
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 282              		.loc 1 220 5
 283 000c 1846     		mov	r0, r3
 284 000e 0C37     		adds	r7, r7, #12
 285              	.LCFI19:
 286              		.cfi_def_cfa_offset 4
 287 0010 BD46     		mov	sp, r7
 288              	.LCFI20:
 289              		.cfi_def_cfa_register 13
 290              		@ sp needed
 291 0012 5DF8047B 		ldr	r7, [sp], #4
 292              	.LCFI21:
 293              		.cfi_restore 7
 294              		.cfi_def_cfa_offset 0
 295 0016 7047     		bx	lr
 296              		.cfi_endproc
 297              	.LFE57:
 299              		.section	.text._ZNK8touchgfx4Font15getEllipsisCharEv,"axG",%progbits,_ZNK8touchgfx4Font15getEllips
 300              		.align	1
 301              		.weak	_ZNK8touchgfx4Font15getEllipsisCharEv
 302              		.syntax unified
 303              		.thumb
 304              		.thumb_func
 305              		.fpu fpv4-sp-d16
 307              	_ZNK8touchgfx4Font15getEllipsisCharEv:
 308              	.LFB58:
 221:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets ellipsis character for the given font. This is the character which is used when
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * truncating long lines.
 225:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The ellipsis character for the typography.
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @see TextArea::setWideTextAction
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual Unicode::UnicodeChar getEllipsisChar() const
 309              		.loc 1 230 34
 310              		.cfi_startproc
 311              		@ args = 0, pretend = 0, frame = 8
 312              		@ frame_needed = 1, uses_anonymous_args = 0
 313              		@ link register save eliminated.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 10


 314 0000 80B4     		push	{r7}
 315              	.LCFI22:
 316              		.cfi_def_cfa_offset 4
 317              		.cfi_offset 7, -4
 318 0002 83B0     		sub	sp, sp, #12
 319              	.LCFI23:
 320              		.cfi_def_cfa_offset 16
 321 0004 00AF     		add	r7, sp, #0
 322              	.LCFI24:
 323              		.cfi_def_cfa_register 7
 324 0006 7860     		str	r0, [r7, #4]
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return ellipsisCharacter;
 325              		.loc 1 232 16
 326 0008 7B68     		ldr	r3, [r7, #4]
 327 000a 9B89     		ldrh	r3, [r3, #12]
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 328              		.loc 1 233 5
 329 000c 1846     		mov	r0, r3
 330 000e 0C37     		adds	r7, r7, #12
 331              	.LCFI25:
 332              		.cfi_def_cfa_offset 4
 333 0010 BD46     		mov	sp, r7
 334              	.LCFI26:
 335              		.cfi_def_cfa_register 13
 336              		@ sp needed
 337 0012 5DF8047B 		ldr	r7, [sp], #4
 338              	.LCFI27:
 339              		.cfi_restore 7
 340              		.cfi_def_cfa_offset 0
 341 0016 7047     		bx	lr
 342              		.cfi_endproc
 343              	.LFE58:
 345              		.section	.text._ZNK8touchgfx4Font13getFontHeightEv,"axG",%progbits,_ZNK8touchgfx4Font13getFontHeig
 346              		.align	1
 347              		.weak	_ZNK8touchgfx4Font13getFontHeightEv
 348              		.syntax unified
 349              		.thumb
 350              		.thumb_func
 351              		.fpu fpv4-sp-d16
 353              	_ZNK8touchgfx4Font13getFontHeightEv:
 354              	.LFB59:
 234:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 235:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the width in pixels of the specified string. If the string contains multiple
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * lines, the width of the widest line is found. Please note that the correct number of
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * arguments must be given if the text contains wildcards.
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * It is recommended to use the getStringWidth() implementation with the TextDirection
 241:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * parameter to ensure correct calculation of the width. Kerning could result in
 242:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * different results depending on the TextDirection. This method assumes TextDirection
 243:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * to be TEXT_DIRECTION_LTR.
 244:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 245:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  text A null-terminated Unicode string with arguments to insert if the text
 246:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *              contains wildcards.
 247:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  ...  Variable arguments providing additional information inserted at wildcard
 248:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *              placeholders.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 11


 249:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 250:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The width in pixels of the longest line of the specified string.
 251:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 252:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual uint16_t getStringWidth(const Unicode::UnicodeChar* text, ...) const;
 253:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 254:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 255:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the width in pixels of the specified string. If the string contains multiple
 256:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * lines, the width of the widest line is found. Please note that the correct number of
 257:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * arguments must be given if the text contains wildcards.
 258:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 259:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * The TextDirection should be set correctly for the text supplied. For example the
 260:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * string "10 20 30" will be calculated differently depending on the TextDirection. If
 261:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * TextDirection is TEXT_DIRECTION_LTR the width is calculated as the with of "10
 262:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * 20 30" (with kerning between all characters) but for TEXT_DIRECTION_RTL it is
 263:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * calculated as "10"+" "+"20"+" "+"30" (with kerning only between characters in the
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * substrings and not between substrings). For most fonts there might not be a
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * difference between the two calculations, but some fonts might cause slightly
 266:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * different results.
 267:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 268:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  textDirection The text direction.
 269:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  text          A null-terminated Unicode string with arguments to insert if the text
 270:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *                       contains wildcards.
 271:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  ...           Variable arguments providing additional information inserted at
 272:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *                       wildcard placeholders.
 273:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 274:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The width in pixels of the longest line of the specified string.
 275:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 276:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual uint16_t getStringWidth(TextDirection textDirection, const Unicode::UnicodeChar* text, 
 277:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 278:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 279:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the width in pixels of the specified character.
 280:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 281:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  c The Unicode character.
 282:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 283:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The width in pixels of the specified character.
 284:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 285:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual uint16_t getCharWidth(const Unicode::UnicodeChar c) const;
 286:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 287:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 288:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the number of blank pixels at the top of the given text.
 289:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 290:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  text A null-terminated Unicode string.
 291:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  ...  Variable arguments providing additional information inserted at wildcard
 292:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *              placeholders.
 293:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 294:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The number of blank pixels above the text.
 295:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 296:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual uint8_t getSpacingAbove(const Unicode::UnicodeChar* text, ...) const;
 297:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 298:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 299:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the height of the highest character in a given string. The height includes the
 300:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * spacing above the text which is included in the font.
 301:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 302:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  text A null-terminated Unicode string.
 303:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  ...  Variable arguments providing additional information inserted at wildcard
 304:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *              placeholders.
 305:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 12


 306:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The height if the given text.
 307:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 308:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual uint16_t getMaxTextHeight(const Unicode::UnicodeChar* text, ...) const;
 309:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 310:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 311:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Returns the height in pixels of this font. The returned value corresponds to the
 312:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * maximum height occupied by a character in the font.
 313:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 314:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The height in pixels of this font.
 315:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 316:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @note It is not sufficient to allocate text areas with this height. Use
 317:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *       getMinimumTextHeight for this.
 318:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 319:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION virtual uint16_t getFontHeight() const
 355              		.loc 1 319 44
 356              		.cfi_startproc
 357              		@ args = 0, pretend = 0, frame = 8
 358              		@ frame_needed = 1, uses_anonymous_args = 0
 359              		@ link register save eliminated.
 360 0000 80B4     		push	{r7}
 361              	.LCFI28:
 362              		.cfi_def_cfa_offset 4
 363              		.cfi_offset 7, -4
 364 0002 83B0     		sub	sp, sp, #12
 365              	.LCFI29:
 366              		.cfi_def_cfa_offset 16
 367 0004 00AF     		add	r7, sp, #0
 368              	.LCFI30:
 369              		.cfi_def_cfa_register 7
 370 0006 7860     		str	r0, [r7, #4]
 320:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 321:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return fontHeight;
 371              		.loc 1 321 16
 372 0008 7B68     		ldr	r3, [r7, #4]
 373 000a 9B88     		ldrh	r3, [r3, #4]
 322:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 374              		.loc 1 322 5
 375 000c 1846     		mov	r0, r3
 376 000e 0C37     		adds	r7, r7, #12
 377              	.LCFI31:
 378              		.cfi_def_cfa_offset 4
 379 0010 BD46     		mov	sp, r7
 380              	.LCFI32:
 381              		.cfi_def_cfa_register 13
 382              		@ sp needed
 383 0012 5DF8047B 		ldr	r7, [sp], #4
 384              	.LCFI33:
 385              		.cfi_restore 7
 386              		.cfi_def_cfa_offset 0
 387 0016 7047     		bx	lr
 388              		.cfi_endproc
 389              	.LFE59:
 391              		.section	.text._ZNK8touchgfx4Font20getMinimumTextHeightEv,"axG",%progbits,_ZNK8touchgfx4Font20getM
 392              		.align	1
 393              		.weak	_ZNK8touchgfx4Font20getMinimumTextHeightEv
 394              		.syntax unified
 395              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 13


 396              		.thumb_func
 397              		.fpu fpv4-sp-d16
 399              	_ZNK8touchgfx4Font20getMinimumTextHeightEv:
 400              	.LFB60:
 323:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 324:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 325:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Returns the minimum height needed for a text field that uses this font. Takes into
 326:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * account that certain characters (eg 'g') have pixels below the baseline, thus making
 327:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * the text height larger than the font height.
 328:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 329:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The minimum height needed for a text field that uses this font.
 330:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 331:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION virtual uint16_t getMinimumTextHeight() const
 401              		.loc 1 331 44
 402              		.cfi_startproc
 403              		@ args = 0, pretend = 0, frame = 8
 404              		@ frame_needed = 1, uses_anonymous_args = 0
 405              		@ link register save eliminated.
 406 0000 80B4     		push	{r7}
 407              	.LCFI34:
 408              		.cfi_def_cfa_offset 4
 409              		.cfi_offset 7, -4
 410 0002 83B0     		sub	sp, sp, #12
 411              	.LCFI35:
 412              		.cfi_def_cfa_offset 16
 413 0004 00AF     		add	r7, sp, #0
 414              	.LCFI36:
 415              		.cfi_def_cfa_register 7
 416 0006 7860     		str	r0, [r7, #4]
 332:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 333:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return fontHeight + pixelsBelowBaseline;
 417              		.loc 1 333 16
 418 0008 7B68     		ldr	r3, [r7, #4]
 419 000a 9A88     		ldrh	r2, [r3, #4]
 420              		.loc 1 333 29
 421 000c 7B68     		ldr	r3, [r7, #4]
 422 000e 9B79     		ldrb	r3, [r3, #6]	@ zero_extendqisi2
 423 0010 9BB2     		uxth	r3, r3
 424 0012 1344     		add	r3, r3, r2
 425 0014 9BB2     		uxth	r3, r3
 334:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 426              		.loc 1 334 5
 427 0016 1846     		mov	r0, r3
 428 0018 0C37     		adds	r7, r7, #12
 429              	.LCFI37:
 430              		.cfi_def_cfa_offset 4
 431 001a BD46     		mov	sp, r7
 432              	.LCFI38:
 433              		.cfi_def_cfa_register 13
 434              		@ sp needed
 435 001c 5DF8047B 		ldr	r7, [sp], #4
 436              	.LCFI39:
 437              		.cfi_restore 7
 438              		.cfi_def_cfa_offset 0
 439 0020 7047     		bx	lr
 440              		.cfi_endproc
 441              	.LFE60:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 14


 443              		.section	.text._ZNK8touchgfx4Font15getBitsPerPixelEv,"axG",%progbits,_ZNK8touchgfx4Font15getBitsPe
 444              		.align	1
 445              		.weak	_ZNK8touchgfx4Font15getBitsPerPixelEv
 446              		.syntax unified
 447              		.thumb
 448              		.thumb_func
 449              		.fpu fpv4-sp-d16
 451              	_ZNK8touchgfx4Font15getBitsPerPixelEv:
 452              	.LFB61:
 335:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 336:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 337:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets bits per pixel for this font.
 338:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 339:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The number of bits used per pixel in this font.
 340:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 341:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION virtual uint8_t getBitsPerPixel() const
 453              		.loc 1 341 43
 454              		.cfi_startproc
 455              		@ args = 0, pretend = 0, frame = 8
 456              		@ frame_needed = 1, uses_anonymous_args = 0
 457              		@ link register save eliminated.
 458 0000 80B4     		push	{r7}
 459              	.LCFI40:
 460              		.cfi_def_cfa_offset 4
 461              		.cfi_offset 7, -4
 462 0002 83B0     		sub	sp, sp, #12
 463              	.LCFI41:
 464              		.cfi_def_cfa_offset 16
 465 0004 00AF     		add	r7, sp, #0
 466              	.LCFI42:
 467              		.cfi_def_cfa_register 7
 468 0006 7860     		str	r0, [r7, #4]
 342:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 343:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return bPerPixel;
 469              		.loc 1 343 16
 470 0008 7B68     		ldr	r3, [r7, #4]
 471 000a DB79     		ldrb	r3, [r3, #7]
 472 000c C3F30603 		ubfx	r3, r3, #0, #7
 473 0010 DBB2     		uxtb	r3, r3
 344:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 474              		.loc 1 344 5
 475 0012 1846     		mov	r0, r3
 476 0014 0C37     		adds	r7, r7, #12
 477              	.LCFI43:
 478              		.cfi_def_cfa_offset 4
 479 0016 BD46     		mov	sp, r7
 480              	.LCFI44:
 481              		.cfi_def_cfa_register 13
 482              		@ sp needed
 483 0018 5DF8047B 		ldr	r7, [sp], #4
 484              	.LCFI45:
 485              		.cfi_restore 7
 486              		.cfi_def_cfa_offset 0
 487 001c 7047     		bx	lr
 488              		.cfi_endproc
 489              	.LFE61:
 491              		.section	.text._ZNK8touchgfx4Font15getByteAlignRowEv,"axG",%progbits,_ZNK8touchgfx4Font15getByteAl
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 15


 492              		.align	1
 493              		.weak	_ZNK8touchgfx4Font15getByteAlignRowEv
 494              		.syntax unified
 495              		.thumb
 496              		.thumb_func
 497              		.fpu fpv4-sp-d16
 499              	_ZNK8touchgfx4Font15getByteAlignRowEv:
 500              	.LFB62:
 345:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 346:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 347:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Are the glyphs saved with each glyph row byte aligned?
 348:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 349:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return True if each glyph row is stored byte aligned, false otherwise.
 350:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 351:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION virtual uint8_t getByteAlignRow() const
 501              		.loc 1 351 43
 502              		.cfi_startproc
 503              		@ args = 0, pretend = 0, frame = 8
 504              		@ frame_needed = 1, uses_anonymous_args = 0
 505              		@ link register save eliminated.
 506 0000 80B4     		push	{r7}
 507              	.LCFI46:
 508              		.cfi_def_cfa_offset 4
 509              		.cfi_offset 7, -4
 510 0002 83B0     		sub	sp, sp, #12
 511              	.LCFI47:
 512              		.cfi_def_cfa_offset 16
 513 0004 00AF     		add	r7, sp, #0
 514              	.LCFI48:
 515              		.cfi_def_cfa_register 7
 516 0006 7860     		str	r0, [r7, #4]
 352:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 353:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return bAlignRow;
 517              		.loc 1 353 16
 518 0008 7B68     		ldr	r3, [r7, #4]
 519 000a DB79     		ldrb	r3, [r3, #7]
 520 000c C3F3C013 		ubfx	r3, r3, #7, #1
 521 0010 DBB2     		uxtb	r3, r3
 354:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 522              		.loc 1 354 5
 523 0012 1846     		mov	r0, r3
 524 0014 0C37     		adds	r7, r7, #12
 525              	.LCFI49:
 526              		.cfi_def_cfa_offset 4
 527 0016 BD46     		mov	sp, r7
 528              	.LCFI50:
 529              		.cfi_def_cfa_register 13
 530              		@ sp needed
 531 0018 5DF8047B 		ldr	r7, [sp], #4
 532              	.LCFI51:
 533              		.cfi_restore 7
 534              		.cfi_def_cfa_offset 0
 535 001c 7047     		bx	lr
 536              		.cfi_endproc
 537              	.LFE62:
 539              		.section	.text._ZNK8touchgfx13GeneratedFont12getGSUBTableEv,"axG",%progbits,_ZNK8touchgfx13Generat
 540              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 16


 541              		.weak	_ZNK8touchgfx13GeneratedFont12getGSUBTableEv
 542              		.syntax unified
 543              		.thumb
 544              		.thumb_func
 545              		.fpu fpv4-sp-d16
 547              	_ZNK8touchgfx13GeneratedFont12getGSUBTableEv:
 548              	.LFB75:
 549              		.file 2 "Src/generated/fonts/include/fonts/GeneratedFont.hpp"
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
  18:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** {
  19:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** public:
  20:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     /**
  21:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * Construct the GeneratedFont.
  22:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *
  23:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param list                   The array of glyphs known to this font.
  24:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param size                   The number of glyphs in list.
  25:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param height                 The height in pixels of the highest character in this font.
  26:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param pixBelowBase           The maximum number of pixels that can be drawn below the
  27:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *                               baseline in this font.
  28:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param bitsPerPixel           The number of bits per pixel in this font.
  29:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param byteAlignRow           Are glyphs encoded using A4 format
  30:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param maxLeft                The maximum a character extends to the left.
  31:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param maxRight               The maximum a character extends to the right.
  32:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param glyphDataInternalFlash Pointer to the glyph data for the font, placed in internal
  33:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *                               flash.
  34:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param kerningList            pointer to the kerning data for the font, placed in internal
  35:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *                               flash.
  36:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param fallbackChar           The fallback character for the typography in case no glyph is
  37:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *                               available.
  38:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param ellipsisChar           The ellipsis character used for truncating long texts.
  39:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param gsubTable              Pointer to GSUB table.
  40:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param formsTable             Pointer to contextual forms table.
  41:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      */
  42:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     GeneratedFont(const GlyphNode* list, uint16_t size, uint16_t height, uint8_t pixBelowBase, uint
  43:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** 
  44:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     using ConstFont::getGlyph;
  45:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** 
  46:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     /**
  47:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * Obtains a RAM-based pointer to the pixel data for the specified glyph.
  48:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *
  49:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param glyph The glyph to get the pixels data of.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 17


  50:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *
  51:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @return The pixel data of the glyph.
  52:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      */
  53:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     virtual const uint8_t* getPixelData(const GlyphNode* glyph) const;
  54:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** 
  55:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     /**
  56:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * Gets the kerning distance between two characters.
  57:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *
  58:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param prevChar The unicode value of the previous character.
  59:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @param glyph    the glyph object for the current character.
  60:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *
  61:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @return The kerning distance between prevChar and glyph char.
  62:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      */
  63:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     virtual int8_t getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const;
  64:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** 
  65:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     /**
  66:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * Gets GSUB table.
  67:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *
  68:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @return The GSUB table or null if font has GSUB no table
  69:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      */
  70:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     virtual const uint16_t* getGSUBTable() const
 550              		.loc 2 70 29
 551              		.cfi_startproc
 552              		@ args = 0, pretend = 0, frame = 8
 553              		@ frame_needed = 1, uses_anonymous_args = 0
 554              		@ link register save eliminated.
 555 0000 80B4     		push	{r7}
 556              	.LCFI52:
 557              		.cfi_def_cfa_offset 4
 558              		.cfi_offset 7, -4
 559 0002 83B0     		sub	sp, sp, #12
 560              	.LCFI53:
 561              		.cfi_def_cfa_offset 16
 562 0004 00AF     		add	r7, sp, #0
 563              	.LCFI54:
 564              		.cfi_def_cfa_register 7
 565 0006 7860     		str	r0, [r7, #4]
  71:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     {
  72:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****         return gsubTable;
 566              		.loc 2 72 16
 567 0008 7B68     		ldr	r3, [r7, #4]
 568 000a 1B6A     		ldr	r3, [r3, #32]
  73:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     }
 569              		.loc 2 73 5
 570 000c 1846     		mov	r0, r3
 571 000e 0C37     		adds	r7, r7, #12
 572              	.LCFI55:
 573              		.cfi_def_cfa_offset 4
 574 0010 BD46     		mov	sp, r7
 575              	.LCFI56:
 576              		.cfi_def_cfa_register 13
 577              		@ sp needed
 578 0012 5DF8047B 		ldr	r7, [sp], #4
 579              	.LCFI57:
 580              		.cfi_restore 7
 581              		.cfi_def_cfa_offset 0
 582 0016 7047     		bx	lr
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 18


 583              		.cfi_endproc
 584              	.LFE75:
 586              		.section	.text._ZNK8touchgfx13GeneratedFont23getContextualFormsTableEv,"axG",%progbits,_ZNK8touchg
 587              		.align	1
 588              		.weak	_ZNK8touchgfx13GeneratedFont23getContextualFormsTableEv
 589              		.syntax unified
 590              		.thumb
 591              		.thumb_func
 592              		.fpu fpv4-sp-d16
 594              	_ZNK8touchgfx13GeneratedFont23getContextualFormsTableEv:
 595              	.LFB76:
  74:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** 
  75:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     /**
  76:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * Gets the contextual forms table used in arabic fonts.
  77:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      *
  78:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      * @return The FontContextualFormsTable or null if the font has no table.
  79:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****      */
  80:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     virtual const FontContextualFormsTable* getContextualFormsTable() const
 596              		.loc 2 80 45
 597              		.cfi_startproc
 598              		@ args = 0, pretend = 0, frame = 8
 599              		@ frame_needed = 1, uses_anonymous_args = 0
 600              		@ link register save eliminated.
 601 0000 80B4     		push	{r7}
 602              	.LCFI58:
 603              		.cfi_def_cfa_offset 4
 604              		.cfi_offset 7, -4
 605 0002 83B0     		sub	sp, sp, #12
 606              	.LCFI59:
 607              		.cfi_def_cfa_offset 16
 608 0004 00AF     		add	r7, sp, #0
 609              	.LCFI60:
 610              		.cfi_def_cfa_register 7
 611 0006 7860     		str	r0, [r7, #4]
  81:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     {
  82:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****         return arabicTable;
 612              		.loc 2 82 16
 613 0008 7B68     		ldr	r3, [r7, #4]
 614 000a 5B6A     		ldr	r3, [r3, #36]
  83:Src/generated/fonts/include/fonts/GeneratedFont.hpp ****     }
 615              		.loc 2 83 5
 616 000c 1846     		mov	r0, r3
 617 000e 0C37     		adds	r7, r7, #12
 618              	.LCFI61:
 619              		.cfi_def_cfa_offset 4
 620 0010 BD46     		mov	sp, r7
 621              	.LCFI62:
 622              		.cfi_def_cfa_register 13
 623              		@ sp needed
 624 0012 5DF8047B 		ldr	r7, [sp], #4
 625              	.LCFI63:
 626              		.cfi_restore 7
 627              		.cfi_def_cfa_offset 0
 628 0016 7047     		bx	lr
 629              		.cfi_endproc
 630              	.LFE76:
 632              		.section	.text._ZN8touchgfx9ConstFontD2Ev,"axG",%progbits,_ZN8touchgfx9ConstFontD5Ev,comdat
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 19


 633              		.align	1
 634              		.weak	_ZN8touchgfx9ConstFontD2Ev
 635              		.syntax unified
 636              		.thumb
 637              		.thumb_func
 638              		.fpu fpv4-sp-d16
 640              	_ZN8touchgfx9ConstFontD2Ev:
 641              	.LFB79:
 642              		.file 3 "Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp **** /******************************************************************************
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
 643              		.loc 3 35 7
 644              		.cfi_startproc
 645              		@ args = 0, pretend = 0, frame = 8
 646              		@ frame_needed = 1, uses_anonymous_args = 0
 647 0000 80B5     		push	{r7, lr}
 648              	.LCFI64:
 649              		.cfi_def_cfa_offset 8
 650              		.cfi_offset 7, -8
 651              		.cfi_offset 14, -4
 652 0002 82B0     		sub	sp, sp, #8
 653              	.LCFI65:
 654              		.cfi_def_cfa_offset 16
 655 0004 00AF     		add	r7, sp, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 20


 656              	.LCFI66:
 657              		.cfi_def_cfa_register 7
 658 0006 7860     		str	r0, [r7, #4]
 659              	.LBB6:
 660              		.loc 3 35 7
 661 0008 054A     		ldr	r2, .L29
 662 000a 7B68     		ldr	r3, [r7, #4]
 663 000c 1A60     		str	r2, [r3]
 664 000e 7B68     		ldr	r3, [r7, #4]
 665 0010 1846     		mov	r0, r3
 666 0012 FFF7FEFF 		bl	_ZN8touchgfx4FontD2Ev
 667              	.LBE6:
 668 0016 7B68     		ldr	r3, [r7, #4]
 669 0018 1846     		mov	r0, r3
 670 001a 0837     		adds	r7, r7, #8
 671              	.LCFI67:
 672              		.cfi_def_cfa_offset 8
 673 001c BD46     		mov	sp, r7
 674              	.LCFI68:
 675              		.cfi_def_cfa_register 13
 676              		@ sp needed
 677 001e 80BD     		pop	{r7, pc}
 678              	.L30:
 679              		.align	2
 680              	.L29:
 681 0020 08000000 		.word	_ZTVN8touchgfx9ConstFontE+8
 682              		.cfi_endproc
 683              	.LFE79:
 685              		.weak	_ZN8touchgfx9ConstFontD1Ev
 686              		.thumb_set _ZN8touchgfx9ConstFontD1Ev,_ZN8touchgfx9ConstFontD2Ev
 687              		.section	.text._ZN8touchgfx9ConstFontD0Ev,"axG",%progbits,_ZN8touchgfx9ConstFontD5Ev,comdat
 688              		.align	1
 689              		.weak	_ZN8touchgfx9ConstFontD0Ev
 690              		.syntax unified
 691              		.thumb
 692              		.thumb_func
 693              		.fpu fpv4-sp-d16
 695              	_ZN8touchgfx9ConstFontD0Ev:
 696              	.LFB81:
 697              		.loc 3 35 7
 698              		.cfi_startproc
 699              		@ args = 0, pretend = 0, frame = 8
 700              		@ frame_needed = 1, uses_anonymous_args = 0
 701 0000 80B5     		push	{r7, lr}
 702              	.LCFI69:
 703              		.cfi_def_cfa_offset 8
 704              		.cfi_offset 7, -8
 705              		.cfi_offset 14, -4
 706 0002 82B0     		sub	sp, sp, #8
 707              	.LCFI70:
 708              		.cfi_def_cfa_offset 16
 709 0004 00AF     		add	r7, sp, #0
 710              	.LCFI71:
 711              		.cfi_def_cfa_register 7
 712 0006 7860     		str	r0, [r7, #4]
 713              		.loc 3 35 7
 714 0008 7868     		ldr	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 21


 715 000a FFF7FEFF 		bl	_ZN8touchgfx9ConstFontD1Ev
 716 000e 1821     		movs	r1, #24
 717 0010 7868     		ldr	r0, [r7, #4]
 718 0012 FFF7FEFF 		bl	_ZdlPvj
 719 0016 7B68     		ldr	r3, [r7, #4]
 720 0018 1846     		mov	r0, r3
 721 001a 0837     		adds	r7, r7, #8
 722              	.LCFI72:
 723              		.cfi_def_cfa_offset 8
 724 001c BD46     		mov	sp, r7
 725              	.LCFI73:
 726              		.cfi_def_cfa_register 13
 727              		@ sp needed
 728 001e 80BD     		pop	{r7, pc}
 729              		.cfi_endproc
 730              	.LFE81:
 732              		.section	.text._ZN8touchgfx13GeneratedFontD2Ev,"axG",%progbits,_ZN8touchgfx13GeneratedFontD5Ev,com
 733              		.align	1
 734              		.weak	_ZN8touchgfx13GeneratedFontD2Ev
 735              		.syntax unified
 736              		.thumb
 737              		.thumb_func
 738              		.fpu fpv4-sp-d16
 740              	_ZN8touchgfx13GeneratedFontD2Ev:
 741              	.LFB86:
  17:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** {
 742              		.loc 2 17 7
 743              		.cfi_startproc
 744              		@ args = 0, pretend = 0, frame = 8
 745              		@ frame_needed = 1, uses_anonymous_args = 0
 746 0000 80B5     		push	{r7, lr}
 747              	.LCFI74:
 748              		.cfi_def_cfa_offset 8
 749              		.cfi_offset 7, -8
 750              		.cfi_offset 14, -4
 751 0002 82B0     		sub	sp, sp, #8
 752              	.LCFI75:
 753              		.cfi_def_cfa_offset 16
 754 0004 00AF     		add	r7, sp, #0
 755              	.LCFI76:
 756              		.cfi_def_cfa_register 7
 757 0006 7860     		str	r0, [r7, #4]
 758              	.LBB7:
  17:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** {
 759              		.loc 2 17 7
 760 0008 054A     		ldr	r2, .L35
 761 000a 7B68     		ldr	r3, [r7, #4]
 762 000c 1A60     		str	r2, [r3]
 763 000e 7B68     		ldr	r3, [r7, #4]
 764 0010 1846     		mov	r0, r3
 765 0012 FFF7FEFF 		bl	_ZN8touchgfx9ConstFontD2Ev
 766              	.LBE7:
 767 0016 7B68     		ldr	r3, [r7, #4]
 768 0018 1846     		mov	r0, r3
 769 001a 0837     		adds	r7, r7, #8
 770              	.LCFI77:
 771              		.cfi_def_cfa_offset 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 22


 772 001c BD46     		mov	sp, r7
 773              	.LCFI78:
 774              		.cfi_def_cfa_register 13
 775              		@ sp needed
 776 001e 80BD     		pop	{r7, pc}
 777              	.L36:
 778              		.align	2
 779              	.L35:
 780 0020 08000000 		.word	_ZTVN8touchgfx13GeneratedFontE+8
 781              		.cfi_endproc
 782              	.LFE86:
 784              		.weak	_ZN8touchgfx13GeneratedFontD1Ev
 785              		.thumb_set _ZN8touchgfx13GeneratedFontD1Ev,_ZN8touchgfx13GeneratedFontD2Ev
 786              		.section	.text._ZN8touchgfx13GeneratedFontD0Ev,"axG",%progbits,_ZN8touchgfx13GeneratedFontD5Ev,com
 787              		.align	1
 788              		.weak	_ZN8touchgfx13GeneratedFontD0Ev
 789              		.syntax unified
 790              		.thumb
 791              		.thumb_func
 792              		.fpu fpv4-sp-d16
 794              	_ZN8touchgfx13GeneratedFontD0Ev:
 795              	.LFB88:
  17:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** {
 796              		.loc 2 17 7
 797              		.cfi_startproc
 798              		@ args = 0, pretend = 0, frame = 8
 799              		@ frame_needed = 1, uses_anonymous_args = 0
 800 0000 80B5     		push	{r7, lr}
 801              	.LCFI79:
 802              		.cfi_def_cfa_offset 8
 803              		.cfi_offset 7, -8
 804              		.cfi_offset 14, -4
 805 0002 82B0     		sub	sp, sp, #8
 806              	.LCFI80:
 807              		.cfi_def_cfa_offset 16
 808 0004 00AF     		add	r7, sp, #0
 809              	.LCFI81:
 810              		.cfi_def_cfa_register 7
 811 0006 7860     		str	r0, [r7, #4]
  17:Src/generated/fonts/include/fonts/GeneratedFont.hpp **** {
 812              		.loc 2 17 7
 813 0008 7868     		ldr	r0, [r7, #4]
 814 000a FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontD1Ev
 815 000e 2821     		movs	r1, #40
 816 0010 7868     		ldr	r0, [r7, #4]
 817 0012 FFF7FEFF 		bl	_ZdlPvj
 818 0016 7B68     		ldr	r3, [r7, #4]
 819 0018 1846     		mov	r0, r3
 820 001a 0837     		adds	r7, r7, #8
 821              	.LCFI82:
 822              		.cfi_def_cfa_offset 8
 823 001c BD46     		mov	sp, r7
 824              	.LCFI83:
 825              		.cfi_def_cfa_register 13
 826              		@ sp needed
 827 001e 80BD     		pop	{r7, pc}
 828              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 23


 829              	.LFE88:
 831              		.section	.text._ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtP
 832              		.align	1
 833              		.global	_ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24F
 834              		.syntax unified
 835              		.thumb
 836              		.thumb_func
 837              		.fpu fpv4-sp-d16
 839              	_ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContex
 840              	.LFB97:
 841              		.file 4 "Src/generated/fonts/src/GeneratedFont.cpp"
   1:Src/generated/fonts/src/GeneratedFont.cpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/src/GeneratedFont.cpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/src/GeneratedFont.cpp **** 
   4:Src/generated/fonts/src/GeneratedFont.cpp **** #include <fonts/GeneratedFont.hpp>
   5:Src/generated/fonts/src/GeneratedFont.cpp **** 
   6:Src/generated/fonts/src/GeneratedFont.cpp **** namespace touchgfx
   7:Src/generated/fonts/src/GeneratedFont.cpp **** {
   8:Src/generated/fonts/src/GeneratedFont.cpp **** GeneratedFont::GeneratedFont(const GlyphNode* list, uint16_t size, uint16_t height, uint8_t pixBelo
 842              		.loc 4 8 1
 843              		.cfi_startproc
 844              		@ args = 44, pretend = 0, frame = 16
 845              		@ frame_needed = 1, uses_anonymous_args = 0
 846 0000 80B5     		push	{r7, lr}
 847              	.LCFI84:
 848              		.cfi_def_cfa_offset 8
 849              		.cfi_offset 7, -8
 850              		.cfi_offset 14, -4
 851 0002 8CB0     		sub	sp, sp, #48
 852              	.LCFI85:
 853              		.cfi_def_cfa_offset 56
 854 0004 08AF     		add	r7, sp, #32
 855              	.LCFI86:
 856              		.cfi_def_cfa 7, 24
 857 0006 F860     		str	r0, [r7, #12]
 858 0008 B960     		str	r1, [r7, #8]
 859 000a 1146     		mov	r1, r2
 860 000c 1A46     		mov	r2, r3
 861 000e 0B46     		mov	r3, r1	@ movhi
 862 0010 FB80     		strh	r3, [r7, #6]	@ movhi
 863 0012 1346     		mov	r3, r2	@ movhi
 864 0014 BB80     		strh	r3, [r7, #4]	@ movhi
 865              	.LBB8:
   9:Src/generated/fonts/src/GeneratedFont.cpp ****     : ConstFont(list, size, height, pixBelowBase, bitsPerPixel, byteAlignRow, maxLeft, maxRight, fa
  10:Src/generated/fonts/src/GeneratedFont.cpp ****       glyphData(glyphDataInternalFlash),
  11:Src/generated/fonts/src/GeneratedFont.cpp ****       kerningData(kerningList),
  12:Src/generated/fonts/src/GeneratedFont.cpp ****       gsubTable(gsubData),
  13:Src/generated/fonts/src/GeneratedFont.cpp ****       arabicTable(formsTable)
 866              		.loc 4 13 29
 867 0016 F868     		ldr	r0, [r7, #12]
 868 0018 B988     		ldrh	r1, [r7, #4]
 869 001a FA88     		ldrh	r2, [r7, #6]
 870 001c 3B8F     		ldrh	r3, [r7, #56]
 871 001e 0693     		str	r3, [sp, #24]
 872 0020 BB8E     		ldrh	r3, [r7, #52]
 873 0022 0593     		str	r3, [sp, #20]
 874 0024 97F82830 		ldrb	r3, [r7, #40]	@ zero_extendqisi2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 24


 875 0028 0493     		str	r3, [sp, #16]
 876 002a 97F82430 		ldrb	r3, [r7, #36]	@ zero_extendqisi2
 877 002e 0393     		str	r3, [sp, #12]
 878 0030 97F82030 		ldrb	r3, [r7, #32]	@ zero_extendqisi2
 879 0034 0293     		str	r3, [sp, #8]
 880 0036 3B7F     		ldrb	r3, [r7, #28]	@ zero_extendqisi2
 881 0038 0193     		str	r3, [sp, #4]
 882 003a 3B7E     		ldrb	r3, [r7, #24]	@ zero_extendqisi2
 883 003c 0093     		str	r3, [sp]
 884 003e 0B46     		mov	r3, r1
 885 0040 B968     		ldr	r1, [r7, #8]
 886 0042 FFF7FEFF 		bl	_ZN8touchgfx9ConstFontC2EPKNS_9GlyphNodeEtthhhhhtt
 887 0046 0A4A     		ldr	r2, .L41
 888 0048 FB68     		ldr	r3, [r7, #12]
 889 004a 1A60     		str	r2, [r3]
 890 004c FB68     		ldr	r3, [r7, #12]
 891 004e FA6A     		ldr	r2, [r7, #44]
 892 0050 9A61     		str	r2, [r3, #24]
 893 0052 FB68     		ldr	r3, [r7, #12]
 894 0054 3A6B     		ldr	r2, [r7, #48]
 895 0056 DA61     		str	r2, [r3, #28]
 896 0058 FB68     		ldr	r3, [r7, #12]
 897 005a FA6B     		ldr	r2, [r7, #60]
 898 005c 1A62     		str	r2, [r3, #32]
 899 005e FB68     		ldr	r3, [r7, #12]
 900 0060 3A6C     		ldr	r2, [r7, #64]
 901 0062 5A62     		str	r2, [r3, #36]
 902              	.LBE8:
  14:Src/generated/fonts/src/GeneratedFont.cpp **** {
  15:Src/generated/fonts/src/GeneratedFont.cpp **** }
 903              		.loc 4 15 1
 904 0064 FB68     		ldr	r3, [r7, #12]
 905 0066 1846     		mov	r0, r3
 906 0068 1037     		adds	r7, r7, #16
 907              	.LCFI87:
 908              		.cfi_def_cfa_offset 8
 909 006a BD46     		mov	sp, r7
 910              	.LCFI88:
 911              		.cfi_def_cfa_register 13
 912              		@ sp needed
 913 006c 80BD     		pop	{r7, pc}
 914              	.L42:
 915 006e 00BF     		.align	2
 916              	.L41:
 917 0070 08000000 		.word	_ZTVN8touchgfx13GeneratedFontE+8
 918              		.cfi_endproc
 919              	.LFE97:
 921              		.global	_ZN8touchgfx13GeneratedFontC1EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24F
 922              		.thumb_set _ZN8touchgfx13GeneratedFontC1EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_
 923              		.section	.text._ZNK8touchgfx13GeneratedFont12getPixelDataEPKNS_9GlyphNodeE,"ax",%progbits
 924              		.align	1
 925              		.global	_ZNK8touchgfx13GeneratedFont12getPixelDataEPKNS_9GlyphNodeE
 926              		.syntax unified
 927              		.thumb
 928              		.thumb_func
 929              		.fpu fpv4-sp-d16
 931              	_ZNK8touchgfx13GeneratedFont12getPixelDataEPKNS_9GlyphNodeE:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 25


 932              	.LFB99:
  16:Src/generated/fonts/src/GeneratedFont.cpp **** 
  17:Src/generated/fonts/src/GeneratedFont.cpp **** const uint8_t* GeneratedFont::getPixelData(const GlyphNode* glyph) const
  18:Src/generated/fonts/src/GeneratedFont.cpp **** {
 933              		.loc 4 18 1
 934              		.cfi_startproc
 935              		@ args = 0, pretend = 0, frame = 16
 936              		@ frame_needed = 1, uses_anonymous_args = 0
 937              		@ link register save eliminated.
 938 0000 80B4     		push	{r7}
 939              	.LCFI89:
 940              		.cfi_def_cfa_offset 4
 941              		.cfi_offset 7, -4
 942 0002 85B0     		sub	sp, sp, #20
 943              	.LCFI90:
 944              		.cfi_def_cfa_offset 24
 945 0004 00AF     		add	r7, sp, #0
 946              	.LCFI91:
 947              		.cfi_def_cfa_register 7
 948 0006 7860     		str	r0, [r7, #4]
 949 0008 3960     		str	r1, [r7]
  19:Src/generated/fonts/src/GeneratedFont.cpp ****     const uint8_t* const* table = (const uint8_t* const*)glyphData;
 950              		.loc 4 19 27
 951 000a 7B68     		ldr	r3, [r7, #4]
 952 000c 9B69     		ldr	r3, [r3, #24]
 953 000e FB60     		str	r3, [r7, #12]
  20:Src/generated/fonts/src/GeneratedFont.cpp ****     return &(table[glyph->unicode / 2048][glyph->dataOffset]);
 954              		.loc 4 20 27
 955 0010 3B68     		ldr	r3, [r7]
 956 0012 9B88     		ldrh	r3, [r3, #4]
 957              		.loc 4 20 35
 958 0014 DB0A     		lsrs	r3, r3, #11
 959 0016 9BB2     		uxth	r3, r3
 960              		.loc 4 20 41
 961 0018 9B00     		lsls	r3, r3, #2
 962 001a FA68     		ldr	r2, [r7, #12]
 963 001c 1344     		add	r3, r3, r2
 964 001e 1A68     		ldr	r2, [r3]
 965              		.loc 4 20 50
 966 0020 3B68     		ldr	r3, [r7]
 967 0022 1B68     		ldr	r3, [r3]	@ unaligned
 968              		.loc 4 20 61
 969 0024 1344     		add	r3, r3, r2
  21:Src/generated/fonts/src/GeneratedFont.cpp **** }
 970              		.loc 4 21 1
 971 0026 1846     		mov	r0, r3
 972 0028 1437     		adds	r7, r7, #20
 973              	.LCFI92:
 974              		.cfi_def_cfa_offset 4
 975 002a BD46     		mov	sp, r7
 976              	.LCFI93:
 977              		.cfi_def_cfa_register 13
 978              		@ sp needed
 979 002c 5DF8047B 		ldr	r7, [sp], #4
 980              	.LCFI94:
 981              		.cfi_restore 7
 982              		.cfi_def_cfa_offset 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 26


 983 0030 7047     		bx	lr
 984              		.cfi_endproc
 985              	.LFE99:
 987              		.section	.text._ZNK8touchgfx13GeneratedFont10getKerningEtPKNS_9GlyphNodeE,"ax",%progbits
 988              		.align	1
 989              		.global	_ZNK8touchgfx13GeneratedFont10getKerningEtPKNS_9GlyphNodeE
 990              		.syntax unified
 991              		.thumb
 992              		.thumb_func
 993              		.fpu fpv4-sp-d16
 995              	_ZNK8touchgfx13GeneratedFont10getKerningEtPKNS_9GlyphNodeE:
 996              	.LFB100:
  22:Src/generated/fonts/src/GeneratedFont.cpp **** 
  23:Src/generated/fonts/src/GeneratedFont.cpp **** int8_t GeneratedFont::getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const
  24:Src/generated/fonts/src/GeneratedFont.cpp **** {
 997              		.loc 4 24 1
 998              		.cfi_startproc
 999              		@ args = 0, pretend = 0, frame = 32
 1000              		@ frame_needed = 1, uses_anonymous_args = 0
 1001              		@ link register save eliminated.
 1002 0000 80B4     		push	{r7}
 1003              	.LCFI95:
 1004              		.cfi_def_cfa_offset 4
 1005              		.cfi_offset 7, -4
 1006 0002 89B0     		sub	sp, sp, #36
 1007              	.LCFI96:
 1008              		.cfi_def_cfa_offset 40
 1009 0004 00AF     		add	r7, sp, #0
 1010              	.LCFI97:
 1011              		.cfi_def_cfa_register 7
 1012 0006 F860     		str	r0, [r7, #12]
 1013 0008 0B46     		mov	r3, r1
 1014 000a 7A60     		str	r2, [r7, #4]
 1015 000c 7B81     		strh	r3, [r7, #10]	@ movhi
  25:Src/generated/fonts/src/GeneratedFont.cpp ****     if (!glyph || glyph->kerningTableSize == 0)
 1016              		.loc 4 25 5
 1017 000e 7B68     		ldr	r3, [r7, #4]
 1018 0010 002B     		cmp	r3, #0
 1019 0012 03D0     		beq	.L46
 1020              		.loc 4 25 26 discriminator 1
 1021 0014 7B68     		ldr	r3, [r7, #4]
 1022 0016 1B7B     		ldrb	r3, [r3, #12]	@ zero_extendqisi2
 1023              		.loc 4 25 16 discriminator 1
 1024 0018 002B     		cmp	r3, #0
 1025 001a 01D1     		bne	.L47
 1026              	.L46:
  26:Src/generated/fonts/src/GeneratedFont.cpp ****     {
  27:Src/generated/fonts/src/GeneratedFont.cpp ****         return 0;
 1027              		.loc 4 27 16
 1028 001c 0023     		movs	r3, #0
 1029 001e 30E0     		b	.L48
 1030              	.L47:
  28:Src/generated/fonts/src/GeneratedFont.cpp ****     }
  29:Src/generated/fonts/src/GeneratedFont.cpp **** 
  30:Src/generated/fonts/src/GeneratedFont.cpp ****     const KerningNode* kerndata = kerningData + glyph->kerningTablePos();
 1031              		.loc 4 30 35
 1032 0020 FB68     		ldr	r3, [r7, #12]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 27


 1033 0022 DA69     		ldr	r2, [r3, #28]
 1034 0024 7B68     		ldr	r3, [r7, #4]
 1035 0026 7B61     		str	r3, [r7, #20]
 1036              	.LBB9:
 1037              	.LBB10:
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1038              		.loc 1 60 18
 1039 0028 7B69     		ldr	r3, [r7, #20]
 1040 002a 5B7B     		ldrb	r3, [r3, #13]	@ zero_extendqisi2
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1041              		.loc 1 60 62
 1042 002c 1B02     		lsls	r3, r3, #8
 1043 002e 1BB2     		sxth	r3, r3
 1044 0030 03F4E063 		and	r3, r3, #1792
 1045 0034 19B2     		sxth	r1, r3
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1046              		.loc 1 60 70
 1047 0036 7B69     		ldr	r3, [r7, #20]
 1048 0038 DB7A     		ldrb	r3, [r3, #11]	@ zero_extendqisi2
 1049 003a 1BB2     		sxth	r3, r3
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1050              		.loc 1 60 68
 1051 003c 0B43     		orrs	r3, r3, r1
 1052 003e 1BB2     		sxth	r3, r3
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1053              		.loc 1 60 70
 1054 0040 9BB2     		uxth	r3, r3
 1055              	.LBE10:
 1056              	.LBE9:
 1057              		.loc 4 30 47
 1058 0042 9B00     		lsls	r3, r3, #2
 1059              		.loc 4 30 72
 1060 0044 1344     		add	r3, r3, r2
 1061 0046 FB61     		str	r3, [r7, #28]
 1062              	.LBB11:
  31:Src/generated/fonts/src/GeneratedFont.cpp ****     for (uint16_t i = glyph->kerningTableSize; i > 0; i--, kerndata++)
 1063              		.loc 4 31 30
 1064 0048 7B68     		ldr	r3, [r7, #4]
 1065 004a 1B7B     		ldrb	r3, [r3, #12]	@ zero_extendqisi2
 1066              		.loc 4 31 19
 1067 004c 7B83     		strh	r3, [r7, #26]	@ movhi
 1068              	.L53:
 1069              		.loc 4 31 50 discriminator 1
 1070 004e 7B8B     		ldrh	r3, [r7, #26]
 1071 0050 002B     		cmp	r3, #0
 1072 0052 15D0     		beq	.L50
  32:Src/generated/fonts/src/GeneratedFont.cpp ****     {
  33:Src/generated/fonts/src/GeneratedFont.cpp ****         if (prevChar == kerndata->unicodePrevChar)
 1073              		.loc 4 33 35
 1074 0054 FB69     		ldr	r3, [r7, #28]
 1075 0056 1B88     		ldrh	r3, [r3]
 1076              		.loc 4 33 9
 1077 0058 7A89     		ldrh	r2, [r7, #10]
 1078 005a 9A42     		cmp	r2, r3
 1079 005c 03D1     		bne	.L51
  34:Src/generated/fonts/src/GeneratedFont.cpp ****         {
  35:Src/generated/fonts/src/GeneratedFont.cpp ****             return kerndata->distance;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 28


 1080              		.loc 4 35 30
 1081 005e FB69     		ldr	r3, [r7, #28]
 1082 0060 93F90230 		ldrsb	r3, [r3, #2]
 1083 0064 0DE0     		b	.L48
 1084              	.L51:
  36:Src/generated/fonts/src/GeneratedFont.cpp ****         }
  37:Src/generated/fonts/src/GeneratedFont.cpp ****         if (prevChar < kerndata->unicodePrevChar)
 1085              		.loc 4 37 34
 1086 0066 FB69     		ldr	r3, [r7, #28]
 1087 0068 1B88     		ldrh	r3, [r3]
 1088              		.loc 4 37 9
 1089 006a 7A89     		ldrh	r2, [r7, #10]
 1090 006c 9A42     		cmp	r2, r3
 1091 006e 06D3     		bcc	.L54
  31:Src/generated/fonts/src/GeneratedFont.cpp ****     {
 1092              		.loc 4 31 5 discriminator 2
 1093 0070 7B8B     		ldrh	r3, [r7, #26]
 1094 0072 013B     		subs	r3, r3, #1
 1095 0074 7B83     		strh	r3, [r7, #26]	@ movhi
 1096 0076 FB69     		ldr	r3, [r7, #28]
 1097 0078 0433     		adds	r3, r3, #4
 1098 007a FB61     		str	r3, [r7, #28]
 1099 007c E7E7     		b	.L53
 1100              	.L54:
  38:Src/generated/fonts/src/GeneratedFont.cpp ****         {
  39:Src/generated/fonts/src/GeneratedFont.cpp ****             break;
 1101              		.loc 4 39 13
 1102 007e 00BF     		nop
 1103              	.L50:
 1104              	.LBE11:
  40:Src/generated/fonts/src/GeneratedFont.cpp ****         }
  41:Src/generated/fonts/src/GeneratedFont.cpp ****     }
  42:Src/generated/fonts/src/GeneratedFont.cpp ****     return 0;
 1105              		.loc 4 42 12
 1106 0080 0023     		movs	r3, #0
 1107              	.L48:
  43:Src/generated/fonts/src/GeneratedFont.cpp **** }
 1108              		.loc 4 43 1
 1109 0082 1846     		mov	r0, r3
 1110 0084 2437     		adds	r7, r7, #36
 1111              	.LCFI98:
 1112              		.cfi_def_cfa_offset 4
 1113 0086 BD46     		mov	sp, r7
 1114              	.LCFI99:
 1115              		.cfi_def_cfa_register 13
 1116              		@ sp needed
 1117 0088 5DF8047B 		ldr	r7, [sp], #4
 1118              	.LCFI100:
 1119              		.cfi_restore 7
 1120              		.cfi_def_cfa_offset 0
 1121 008c 7047     		bx	lr
 1122              		.cfi_endproc
 1123              	.LFE100:
 1125              		.global	_ZTVN8touchgfx13GeneratedFontE
 1126              		.section	.rodata._ZTVN8touchgfx13GeneratedFontE,"a"
 1127              		.align	2
 1130              	_ZTVN8touchgfx13GeneratedFontE:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 29


 1131 0000 00000000 		.word	0
 1132 0004 00000000 		.word	0
 1133 0008 00000000 		.word	_ZN8touchgfx13GeneratedFontD1Ev
 1134 000c 00000000 		.word	_ZN8touchgfx13GeneratedFontD0Ev
 1135 0010 00000000 		.word	_ZNK8touchgfx9ConstFont8getGlyphEtRPKhRh
 1136 0014 00000000 		.word	_ZNK8touchgfx4Font8getGlyphEt
 1137 0018 00000000 		.word	_ZNK8touchgfx4Font15getFallbackCharEv
 1138 001c 00000000 		.word	_ZNK8touchgfx4Font15getEllipsisCharEv
 1139 0020 00000000 		.word	_ZNK8touchgfx4Font14getStringWidthEPKtz
 1140 0024 00000000 		.word	_ZNK8touchgfx4Font14getStringWidthEhPKtz
 1141 0028 00000000 		.word	_ZNK8touchgfx4Font12getCharWidthEt
 1142 002c 00000000 		.word	_ZNK8touchgfx4Font15getSpacingAboveEPKtz
 1143 0030 00000000 		.word	_ZNK8touchgfx4Font16getMaxTextHeightEPKtz
 1144 0034 00000000 		.word	_ZNK8touchgfx4Font13getFontHeightEv
 1145 0038 00000000 		.word	_ZNK8touchgfx4Font20getMinimumTextHeightEv
 1146 003c 00000000 		.word	_ZNK8touchgfx4Font15getBitsPerPixelEv
 1147 0040 00000000 		.word	_ZNK8touchgfx4Font15getByteAlignRowEv
 1148 0044 00000000 		.word	_ZNK8touchgfx13GeneratedFont10getKerningEtPKNS_9GlyphNodeE
 1149 0048 00000000 		.word	_ZNK8touchgfx4Font16getNumberOfLinesEPKtz
 1150 004c 00000000 		.word	_ZNK8touchgfx13GeneratedFont12getGSUBTableEv
 1151 0050 00000000 		.word	_ZNK8touchgfx13GeneratedFont23getContextualFormsTableEv
 1152 0054 00000000 		.word	_ZNK8touchgfx13GeneratedFont12getPixelDataEPKNS_9GlyphNodeE
 1153              		.text
 1154              	.Letext0:
 1155              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 1156              		.file 6 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 1157              		.file 7 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 1158              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 1159              		.file 9 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/i
 1160              		.file 10 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 30


DEFINED SYMBOLS
                            *ABS*:0000000000000000 GeneratedFont.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:79     .text._ZN8touchgfx4FontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:130    .text._ZN8touchgfx4FontD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:137    .text._ZN8touchgfx4FontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:144    .text._ZN8touchgfx4FontD0Ev:0000000000000000 _ZN8touchgfx4FontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:182    .text._ZNK8touchgfx4Font8getGlyphEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:189    .text._ZNK8touchgfx4Font8getGlyphEt:0000000000000000 _ZNK8touchgfx4Font8getGlyphEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:254    .text._ZNK8touchgfx4Font15getFallbackCharEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:261    .text._ZNK8touchgfx4Font15getFallbackCharEv:0000000000000000 _ZNK8touchgfx4Font15getFallbackCharEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:300    .text._ZNK8touchgfx4Font15getEllipsisCharEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:307    .text._ZNK8touchgfx4Font15getEllipsisCharEv:0000000000000000 _ZNK8touchgfx4Font15getEllipsisCharEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:346    .text._ZNK8touchgfx4Font13getFontHeightEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:353    .text._ZNK8touchgfx4Font13getFontHeightEv:0000000000000000 _ZNK8touchgfx4Font13getFontHeightEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:392    .text._ZNK8touchgfx4Font20getMinimumTextHeightEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:399    .text._ZNK8touchgfx4Font20getMinimumTextHeightEv:0000000000000000 _ZNK8touchgfx4Font20getMinimumTextHeightEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:444    .text._ZNK8touchgfx4Font15getBitsPerPixelEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:451    .text._ZNK8touchgfx4Font15getBitsPerPixelEv:0000000000000000 _ZNK8touchgfx4Font15getBitsPerPixelEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:492    .text._ZNK8touchgfx4Font15getByteAlignRowEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:499    .text._ZNK8touchgfx4Font15getByteAlignRowEv:0000000000000000 _ZNK8touchgfx4Font15getByteAlignRowEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:540    .text._ZNK8touchgfx13GeneratedFont12getGSUBTableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:547    .text._ZNK8touchgfx13GeneratedFont12getGSUBTableEv:0000000000000000 _ZNK8touchgfx13GeneratedFont12getGSUBTableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:587    .text._ZNK8touchgfx13GeneratedFont23getContextualFormsTableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:594    .text._ZNK8touchgfx13GeneratedFont23getContextualFormsTableEv:0000000000000000 _ZNK8touchgfx13GeneratedFont23getContextualFormsTableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:633    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:640    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 _ZN8touchgfx9ConstFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:681    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:640    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 _ZN8touchgfx9ConstFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:688    .text._ZN8touchgfx9ConstFontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:695    .text._ZN8touchgfx9ConstFontD0Ev:0000000000000000 _ZN8touchgfx9ConstFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:733    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:740    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:780    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:1130   .rodata._ZTVN8touchgfx13GeneratedFontE:0000000000000000 _ZTVN8touchgfx13GeneratedFontE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:740    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:787    .text._ZN8touchgfx13GeneratedFontD0Ev:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s 			page 31


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:794    .text._ZN8touchgfx13GeneratedFontD0Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:832    .text._ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContextualFormsTableE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:839    .text._ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContextualFormsTableE:0000000000000000 _ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContextualFormsTableE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:917    .text._ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContextualFormsTableE:0000000000000070 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:839    .text._ZN8touchgfx13GeneratedFontC2EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContextualFormsTableE:0000000000000000 _ZN8touchgfx13GeneratedFontC1EPKNS_9GlyphNodeEtthhhhhPKPKhPKNS_11KerningNodeEttPKtPKNS_24FontContextualFormsTableE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:924    .text._ZNK8touchgfx13GeneratedFont12getPixelDataEPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:931    .text._ZNK8touchgfx13GeneratedFont12getPixelDataEPKNS_9GlyphNodeE:0000000000000000 _ZNK8touchgfx13GeneratedFont12getPixelDataEPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:988    .text._ZNK8touchgfx13GeneratedFont10getKerningEtPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:995    .text._ZNK8touchgfx13GeneratedFont10getKerningEtPKNS_9GlyphNodeE:0000000000000000 _ZNK8touchgfx13GeneratedFont10getKerningEtPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccdtHBrF.s:1127   .rodata._ZTVN8touchgfx13GeneratedFontE:0000000000000000 $d
                           .group:0000000000000000 _ZN8touchgfx4FontD5Ev
                           .group:0000000000000000 _ZN8touchgfx9ConstFontD5Ev
                           .group:0000000000000000 _ZN8touchgfx13GeneratedFontD5Ev
                           .group:0000000000000000 wm4.0.8f82b9771446a4c5d395a560643408f9
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
_ZN8touchgfx9ConstFontC2EPKNS_9GlyphNodeEtthhhhhtt
_ZNK8touchgfx9ConstFont8getGlyphEtRPKhRh
_ZNK8touchgfx4Font14getStringWidthEPKtz
_ZNK8touchgfx4Font14getStringWidthEhPKtz
_ZNK8touchgfx4Font12getCharWidthEt
_ZNK8touchgfx4Font15getSpacingAboveEPKtz
_ZNK8touchgfx4Font16getMaxTextHeightEPKtz
_ZNK8touchgfx4Font16getNumberOfLinesEPKtz
