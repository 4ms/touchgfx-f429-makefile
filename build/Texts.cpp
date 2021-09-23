ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 1


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
  13              		.file	"Texts.cpp"
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
  78              		.section	.text._ZNK8touchgfx4Font8getGlyphEt,"axG",%progbits,_ZNK8touchgfx4Font8getGlyphEt,comdat
  79              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 2


  80              		.weak	_ZNK8touchgfx4Font8getGlyphEt
  81              		.arch armv7e-m
  82              		.syntax unified
  83              		.thumb
  84              		.thumb_func
  85              		.fpu fpv4-sp-d16
  87              	_ZNK8touchgfx4Font8getGlyphEt:
  88              	.LFB56:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 3


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 4


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 5


 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** class Font
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** {
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** public:
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /** Finalizes an instance of the Font class. */
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual ~Font()
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the glyph data associated with the specified Unicode. Please note that in case
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * of Thai letters and Arabic letters where diacritics can be placed relative to the
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * previous character(s), please use TextProvider::getNextLigature() instead as it will
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * create a temporary GlyphNode that will be adjusted with respect to X/Y position.
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param       unicode      The character to look up.
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param       pixelData    Pointer to the pixel data for the glyph if the glyph is
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
  90              		.loc 1 198 30
  91              		.cfi_startproc
  92              		@ args = 0, pretend = 0, frame = 24
  93              		@ frame_needed = 1, uses_anonymous_args = 0
  94 0000 90B5     		push	{r4, r7, lr}
  95              	.LCFI0:
  96              		.cfi_def_cfa_offset 12
  97              		.cfi_offset 4, -12
  98              		.cfi_offset 7, -8
  99              		.cfi_offset 14, -4
 100 0002 87B0     		sub	sp, sp, #28
 101              	.LCFI1:
 102              		.cfi_def_cfa_offset 40
 103 0004 00AF     		add	r7, sp, #0
 104              	.LCFI2:
 105              		.cfi_def_cfa_register 7
 106 0006 7860     		str	r0, [r7, #4]
 107 0008 0B46     		mov	r3, r1
 108 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         if (unicode == 0)
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 6


 109              		.loc 1 200 9
 110 000c 7B88     		ldrh	r3, [r7, #2]
 111 000e 002B     		cmp	r3, #0
 112 0010 01D1     		bne	.L2
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         {
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****             return 0;
 113              		.loc 1 202 20
 114 0012 0023     		movs	r3, #0
 115 0014 10E0     		b	.L4
 116              	.L2:
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         }
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         const uint8_t* dummyPixelDataPointer = 0;
 117              		.loc 1 204 24
 118 0016 0023     		movs	r3, #0
 119 0018 3B61     		str	r3, [r7, #16]
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         uint8_t bitsPerPixelDummy = 0;
 120              		.loc 1 205 17
 121 001a 0023     		movs	r3, #0
 122 001c FB73     		strb	r3, [r7, #15]
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         const GlyphNode* glyph = getGlyph(unicode, dummyPixelDataPointer, bitsPerPixelDummy);
 123              		.loc 1 206 92
 124 001e 7B68     		ldr	r3, [r7, #4]
 125 0020 1B68     		ldr	r3, [r3]
 126 0022 0833     		adds	r3, r3, #8
 127 0024 1C68     		ldr	r4, [r3]
 128              		.loc 1 206 42
 129 0026 07F10F03 		add	r3, r7, #15
 130 002a 07F11002 		add	r2, r7, #16
 131 002e 7988     		ldrh	r1, [r7, #2]
 132 0030 7868     		ldr	r0, [r7, #4]
 133 0032 A047     		blx	r4
 134              	.LVL0:
 135 0034 7861     		str	r0, [r7, #20]
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return glyph;
 136              		.loc 1 207 16
 137 0036 7B69     		ldr	r3, [r7, #20]
 138              	.L4:
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 139              		.loc 1 208 5 discriminator 1
 140 0038 1846     		mov	r0, r3
 141 003a 1C37     		adds	r7, r7, #28
 142              	.LCFI3:
 143              		.cfi_def_cfa_offset 12
 144 003c BD46     		mov	sp, r7
 145              	.LCFI4:
 146              		.cfi_def_cfa_register 13
 147              		@ sp needed
 148 003e 90BD     		pop	{r4, r7, pc}
 149              		.cfi_endproc
 150              	.LFE56:
 152              		.section	.text._ZNK8touchgfx4Font15getFallbackCharEv,"axG",%progbits,_ZNK8touchgfx4Font15getFallba
 153              		.align	1
 154              		.weak	_ZNK8touchgfx4Font15getFallbackCharEv
 155              		.syntax unified
 156              		.thumb
 157              		.thumb_func
 158              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 7


 160              	_ZNK8touchgfx4Font15getFallbackCharEv:
 161              	.LFB57:
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets fallback character for the given font. The fallback character is the character
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * used when no glyph is available for some character. If 0 (zero) is returned, there is
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * no default character.
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The default character for the typography in case no glyph is available.
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual Unicode::UnicodeChar getFallbackChar() const
 162              		.loc 1 217 34
 163              		.cfi_startproc
 164              		@ args = 0, pretend = 0, frame = 8
 165              		@ frame_needed = 1, uses_anonymous_args = 0
 166              		@ link register save eliminated.
 167 0000 80B4     		push	{r7}
 168              	.LCFI5:
 169              		.cfi_def_cfa_offset 4
 170              		.cfi_offset 7, -4
 171 0002 83B0     		sub	sp, sp, #12
 172              	.LCFI6:
 173              		.cfi_def_cfa_offset 16
 174 0004 00AF     		add	r7, sp, #0
 175              	.LCFI7:
 176              		.cfi_def_cfa_register 7
 177 0006 7860     		str	r0, [r7, #4]
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return fallbackCharacter;
 178              		.loc 1 219 16
 179 0008 7B68     		ldr	r3, [r7, #4]
 180 000a 5B89     		ldrh	r3, [r3, #10]
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 181              		.loc 1 220 5
 182 000c 1846     		mov	r0, r3
 183 000e 0C37     		adds	r7, r7, #12
 184              	.LCFI8:
 185              		.cfi_def_cfa_offset 4
 186 0010 BD46     		mov	sp, r7
 187              	.LCFI9:
 188              		.cfi_def_cfa_register 13
 189              		@ sp needed
 190 0012 5DF8047B 		ldr	r7, [sp], #4
 191              	.LCFI10:
 192              		.cfi_restore 7
 193              		.cfi_def_cfa_offset 0
 194 0016 7047     		bx	lr
 195              		.cfi_endproc
 196              	.LFE57:
 198              		.section	.text._ZNK8touchgfx4Font15getEllipsisCharEv,"axG",%progbits,_ZNK8touchgfx4Font15getEllips
 199              		.align	1
 200              		.weak	_ZNK8touchgfx4Font15getEllipsisCharEv
 201              		.syntax unified
 202              		.thumb
 203              		.thumb_func
 204              		.fpu fpv4-sp-d16
 206              	_ZNK8touchgfx4Font15getEllipsisCharEv:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 8


 207              	.LFB58:
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
 208              		.loc 1 230 34
 209              		.cfi_startproc
 210              		@ args = 0, pretend = 0, frame = 8
 211              		@ frame_needed = 1, uses_anonymous_args = 0
 212              		@ link register save eliminated.
 213 0000 80B4     		push	{r7}
 214              	.LCFI11:
 215              		.cfi_def_cfa_offset 4
 216              		.cfi_offset 7, -4
 217 0002 83B0     		sub	sp, sp, #12
 218              	.LCFI12:
 219              		.cfi_def_cfa_offset 16
 220 0004 00AF     		add	r7, sp, #0
 221              	.LCFI13:
 222              		.cfi_def_cfa_register 7
 223 0006 7860     		str	r0, [r7, #4]
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return ellipsisCharacter;
 224              		.loc 1 232 16
 225 0008 7B68     		ldr	r3, [r7, #4]
 226 000a 9B89     		ldrh	r3, [r3, #12]
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 227              		.loc 1 233 5
 228 000c 1846     		mov	r0, r3
 229 000e 0C37     		adds	r7, r7, #12
 230              	.LCFI14:
 231              		.cfi_def_cfa_offset 4
 232 0010 BD46     		mov	sp, r7
 233              	.LCFI15:
 234              		.cfi_def_cfa_register 13
 235              		@ sp needed
 236 0012 5DF8047B 		ldr	r7, [sp], #4
 237              	.LCFI16:
 238              		.cfi_restore 7
 239              		.cfi_def_cfa_offset 0
 240 0016 7047     		bx	lr
 241              		.cfi_endproc
 242              	.LFE58:
 244              		.section	.text._ZNK8touchgfx4Font13getFontHeightEv,"axG",%progbits,_ZNK8touchgfx4Font13getFontHeig
 245              		.align	1
 246              		.weak	_ZNK8touchgfx4Font13getFontHeightEv
 247              		.syntax unified
 248              		.thumb
 249              		.thumb_func
 250              		.fpu fpv4-sp-d16
 252              	_ZNK8touchgfx4Font13getFontHeightEv:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 9


 253              	.LFB59:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 10


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
 254              		.loc 1 319 44
 255              		.cfi_startproc
 256              		@ args = 0, pretend = 0, frame = 8
 257              		@ frame_needed = 1, uses_anonymous_args = 0
 258              		@ link register save eliminated.
 259 0000 80B4     		push	{r7}
 260              	.LCFI17:
 261              		.cfi_def_cfa_offset 4
 262              		.cfi_offset 7, -4
 263 0002 83B0     		sub	sp, sp, #12
 264              	.LCFI18:
 265              		.cfi_def_cfa_offset 16
 266 0004 00AF     		add	r7, sp, #0
 267              	.LCFI19:
 268              		.cfi_def_cfa_register 7
 269 0006 7860     		str	r0, [r7, #4]
 320:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 321:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return fontHeight;
 270              		.loc 1 321 16
 271 0008 7B68     		ldr	r3, [r7, #4]
 272 000a 9B88     		ldrh	r3, [r3, #4]
 322:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 273              		.loc 1 322 5
 274 000c 1846     		mov	r0, r3
 275 000e 0C37     		adds	r7, r7, #12
 276              	.LCFI20:
 277              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 11


 278 0010 BD46     		mov	sp, r7
 279              	.LCFI21:
 280              		.cfi_def_cfa_register 13
 281              		@ sp needed
 282 0012 5DF8047B 		ldr	r7, [sp], #4
 283              	.LCFI22:
 284              		.cfi_restore 7
 285              		.cfi_def_cfa_offset 0
 286 0016 7047     		bx	lr
 287              		.cfi_endproc
 288              	.LFE59:
 290              		.section	.text._ZNK8touchgfx4Font20getMinimumTextHeightEv,"axG",%progbits,_ZNK8touchgfx4Font20getM
 291              		.align	1
 292              		.weak	_ZNK8touchgfx4Font20getMinimumTextHeightEv
 293              		.syntax unified
 294              		.thumb
 295              		.thumb_func
 296              		.fpu fpv4-sp-d16
 298              	_ZNK8touchgfx4Font20getMinimumTextHeightEv:
 299              	.LFB60:
 323:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 324:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 325:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Returns the minimum height needed for a text field that uses this font. Takes into
 326:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * account that certain characters (eg 'g') have pixels below the baseline, thus making
 327:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * the text height larger than the font height.
 328:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 329:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The minimum height needed for a text field that uses this font.
 330:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 331:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION virtual uint16_t getMinimumTextHeight() const
 300              		.loc 1 331 44
 301              		.cfi_startproc
 302              		@ args = 0, pretend = 0, frame = 8
 303              		@ frame_needed = 1, uses_anonymous_args = 0
 304              		@ link register save eliminated.
 305 0000 80B4     		push	{r7}
 306              	.LCFI23:
 307              		.cfi_def_cfa_offset 4
 308              		.cfi_offset 7, -4
 309 0002 83B0     		sub	sp, sp, #12
 310              	.LCFI24:
 311              		.cfi_def_cfa_offset 16
 312 0004 00AF     		add	r7, sp, #0
 313              	.LCFI25:
 314              		.cfi_def_cfa_register 7
 315 0006 7860     		str	r0, [r7, #4]
 332:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 333:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return fontHeight + pixelsBelowBaseline;
 316              		.loc 1 333 16
 317 0008 7B68     		ldr	r3, [r7, #4]
 318 000a 9A88     		ldrh	r2, [r3, #4]
 319              		.loc 1 333 29
 320 000c 7B68     		ldr	r3, [r7, #4]
 321 000e 9B79     		ldrb	r3, [r3, #6]	@ zero_extendqisi2
 322 0010 9BB2     		uxth	r3, r3
 323 0012 1344     		add	r3, r3, r2
 324 0014 9BB2     		uxth	r3, r3
 334:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 12


 325              		.loc 1 334 5
 326 0016 1846     		mov	r0, r3
 327 0018 0C37     		adds	r7, r7, #12
 328              	.LCFI26:
 329              		.cfi_def_cfa_offset 4
 330 001a BD46     		mov	sp, r7
 331              	.LCFI27:
 332              		.cfi_def_cfa_register 13
 333              		@ sp needed
 334 001c 5DF8047B 		ldr	r7, [sp], #4
 335              	.LCFI28:
 336              		.cfi_restore 7
 337              		.cfi_def_cfa_offset 0
 338 0020 7047     		bx	lr
 339              		.cfi_endproc
 340              	.LFE60:
 342              		.section	.text._ZNK8touchgfx4Font15getBitsPerPixelEv,"axG",%progbits,_ZNK8touchgfx4Font15getBitsPe
 343              		.align	1
 344              		.weak	_ZNK8touchgfx4Font15getBitsPerPixelEv
 345              		.syntax unified
 346              		.thumb
 347              		.thumb_func
 348              		.fpu fpv4-sp-d16
 350              	_ZNK8touchgfx4Font15getBitsPerPixelEv:
 351              	.LFB61:
 335:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 336:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 337:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets bits per pixel for this font.
 338:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 339:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The number of bits used per pixel in this font.
 340:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 341:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION virtual uint8_t getBitsPerPixel() const
 352              		.loc 1 341 43
 353              		.cfi_startproc
 354              		@ args = 0, pretend = 0, frame = 8
 355              		@ frame_needed = 1, uses_anonymous_args = 0
 356              		@ link register save eliminated.
 357 0000 80B4     		push	{r7}
 358              	.LCFI29:
 359              		.cfi_def_cfa_offset 4
 360              		.cfi_offset 7, -4
 361 0002 83B0     		sub	sp, sp, #12
 362              	.LCFI30:
 363              		.cfi_def_cfa_offset 16
 364 0004 00AF     		add	r7, sp, #0
 365              	.LCFI31:
 366              		.cfi_def_cfa_register 7
 367 0006 7860     		str	r0, [r7, #4]
 342:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 343:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return bPerPixel;
 368              		.loc 1 343 16
 369 0008 7B68     		ldr	r3, [r7, #4]
 370 000a DB79     		ldrb	r3, [r3, #7]
 371 000c C3F30603 		ubfx	r3, r3, #0, #7
 372 0010 DBB2     		uxtb	r3, r3
 344:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 373              		.loc 1 344 5
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 13


 374 0012 1846     		mov	r0, r3
 375 0014 0C37     		adds	r7, r7, #12
 376              	.LCFI32:
 377              		.cfi_def_cfa_offset 4
 378 0016 BD46     		mov	sp, r7
 379              	.LCFI33:
 380              		.cfi_def_cfa_register 13
 381              		@ sp needed
 382 0018 5DF8047B 		ldr	r7, [sp], #4
 383              	.LCFI34:
 384              		.cfi_restore 7
 385              		.cfi_def_cfa_offset 0
 386 001c 7047     		bx	lr
 387              		.cfi_endproc
 388              	.LFE61:
 390              		.section	.text._ZNK8touchgfx4Font15getByteAlignRowEv,"axG",%progbits,_ZNK8touchgfx4Font15getByteAl
 391              		.align	1
 392              		.weak	_ZNK8touchgfx4Font15getByteAlignRowEv
 393              		.syntax unified
 394              		.thumb
 395              		.thumb_func
 396              		.fpu fpv4-sp-d16
 398              	_ZNK8touchgfx4Font15getByteAlignRowEv:
 399              	.LFB62:
 345:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 346:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 347:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Are the glyphs saved with each glyph row byte aligned?
 348:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 349:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return True if each glyph row is stored byte aligned, false otherwise.
 350:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 351:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION virtual uint8_t getByteAlignRow() const
 400              		.loc 1 351 43
 401              		.cfi_startproc
 402              		@ args = 0, pretend = 0, frame = 8
 403              		@ frame_needed = 1, uses_anonymous_args = 0
 404              		@ link register save eliminated.
 405 0000 80B4     		push	{r7}
 406              	.LCFI35:
 407              		.cfi_def_cfa_offset 4
 408              		.cfi_offset 7, -4
 409 0002 83B0     		sub	sp, sp, #12
 410              	.LCFI36:
 411              		.cfi_def_cfa_offset 16
 412 0004 00AF     		add	r7, sp, #0
 413              	.LCFI37:
 414              		.cfi_def_cfa_register 7
 415 0006 7860     		str	r0, [r7, #4]
 352:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 353:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return bAlignRow;
 416              		.loc 1 353 16
 417 0008 7B68     		ldr	r3, [r7, #4]
 418 000a DB79     		ldrb	r3, [r3, #7]
 419 000c C3F3C013 		ubfx	r3, r3, #7, #1
 420 0010 DBB2     		uxtb	r3, r3
 354:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 421              		.loc 1 354 5
 422 0012 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 14


 423 0014 0C37     		adds	r7, r7, #12
 424              	.LCFI38:
 425              		.cfi_def_cfa_offset 4
 426 0016 BD46     		mov	sp, r7
 427              	.LCFI39:
 428              		.cfi_def_cfa_register 13
 429              		@ sp needed
 430 0018 5DF8047B 		ldr	r7, [sp], #4
 431              	.LCFI40:
 432              		.cfi_restore 7
 433              		.cfi_def_cfa_offset 0
 434 001c 7047     		bx	lr
 435              		.cfi_endproc
 436              	.LFE62:
 438              		.section	.text._ZNK8touchgfx4Font10getKerningEtPKNS_9GlyphNodeE,"axG",%progbits,_ZNK8touchgfx4Font
 439              		.align	1
 440              		.weak	_ZNK8touchgfx4Font10getKerningEtPKNS_9GlyphNodeE
 441              		.syntax unified
 442              		.thumb
 443              		.thumb_func
 444              		.fpu fpv4-sp-d16
 446              	_ZNK8touchgfx4Font10getKerningEtPKNS_9GlyphNodeE:
 447              	.LFB65:
 355:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 356:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 357:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets maximum pixels left of any glyph in the font. This is the max value of "left"
 358:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * for all glyphs. The value is negated so if a "g" has left=-6 maxPixelsLeft is 6. This
 359:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * value is calculated by the font converter.
 360:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 361:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The maximum pixels left.
 362:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 363:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION uint8_t getMaxPixelsLeft() const
 364:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 365:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return maxPixelsLeft;
 366:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 367:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 368:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 369:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets maximum pixels right of any glyph in the font. This is the max value of
 370:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * "width+left-advance" for all glyphs. The is the number of pixels a glyph reaches to
 371:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * the right of its normal area. This value is calculated by the font converter.
 372:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 373:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The maximum pixels right.
 374:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 375:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION uint8_t getMaxPixelsRight() const
 376:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 377:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return maxPixelsRight;
 378:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 379:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 380:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 381:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the kerning distance between two characters.
 382:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 383:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  prevChar The Unicode value of the previous character.
 384:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  glyph    the glyph object for the current character.
 385:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 386:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The kerning distance between prevChar and glyph char.
 387:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 388:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual int8_t getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 15


 448              		.loc 1 388 20
 449              		.cfi_startproc
 450              		@ args = 0, pretend = 0, frame = 16
 451              		@ frame_needed = 1, uses_anonymous_args = 0
 452              		@ link register save eliminated.
 453 0000 80B4     		push	{r7}
 454              	.LCFI41:
 455              		.cfi_def_cfa_offset 4
 456              		.cfi_offset 7, -4
 457 0002 85B0     		sub	sp, sp, #20
 458              	.LCFI42:
 459              		.cfi_def_cfa_offset 24
 460 0004 00AF     		add	r7, sp, #0
 461              	.LCFI43:
 462              		.cfi_def_cfa_register 7
 463 0006 F860     		str	r0, [r7, #12]
 464 0008 0B46     		mov	r3, r1
 465 000a 7A60     		str	r2, [r7, #4]
 466 000c 7B81     		strh	r3, [r7, #10]	@ movhi
 389:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 390:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return 0;
 467              		.loc 1 390 16
 468 000e 0023     		movs	r3, #0
 391:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 469              		.loc 1 391 5
 470 0010 1846     		mov	r0, r3
 471 0012 1437     		adds	r7, r7, #20
 472              	.LCFI44:
 473              		.cfi_def_cfa_offset 4
 474 0014 BD46     		mov	sp, r7
 475              	.LCFI45:
 476              		.cfi_def_cfa_register 13
 477              		@ sp needed
 478 0016 5DF8047B 		ldr	r7, [sp], #4
 479              	.LCFI46:
 480              		.cfi_restore 7
 481              		.cfi_def_cfa_offset 0
 482 001a 7047     		bx	lr
 483              		.cfi_endproc
 484              	.LFE65:
 486              		.section	.text._ZNK8touchgfx4Font12getGSUBTableEv,"axG",%progbits,_ZNK8touchgfx4Font12getGSUBTable
 487              		.align	1
 488              		.weak	_ZNK8touchgfx4Font12getGSUBTableEv
 489              		.syntax unified
 490              		.thumb
 491              		.thumb_func
 492              		.fpu fpv4-sp-d16
 494              	_ZNK8touchgfx4Font12getGSUBTableEv:
 495              	.LFB66:
 392:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 393:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 394:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Count the number of lines in a given text.
 395:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 396:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  text The text.
 397:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  ...  Variable arguments providing additional information.
 398:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 399:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The number of lines.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 16


 400:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 401:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual uint16_t getNumberOfLines(const Unicode::UnicodeChar* text, ...) const;
 402:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 403:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 404:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets GSUB table. Currently only used for Devanagari fonts.
 405:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 406:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The GSUB table or null if font has GSUB no table.
 407:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 408:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual const uint16_t* getGSUBTable() const
 496              		.loc 1 408 29
 497              		.cfi_startproc
 498              		@ args = 0, pretend = 0, frame = 8
 499              		@ frame_needed = 1, uses_anonymous_args = 0
 500              		@ link register save eliminated.
 501 0000 80B4     		push	{r7}
 502              	.LCFI47:
 503              		.cfi_def_cfa_offset 4
 504              		.cfi_offset 7, -4
 505 0002 83B0     		sub	sp, sp, #12
 506              	.LCFI48:
 507              		.cfi_def_cfa_offset 16
 508 0004 00AF     		add	r7, sp, #0
 509              	.LCFI49:
 510              		.cfi_def_cfa_register 7
 511 0006 7860     		str	r0, [r7, #4]
 409:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 410:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return 0;
 512              		.loc 1 410 16
 513 0008 0023     		movs	r3, #0
 411:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 514              		.loc 1 411 5
 515 000a 1846     		mov	r0, r3
 516 000c 0C37     		adds	r7, r7, #12
 517              	.LCFI50:
 518              		.cfi_def_cfa_offset 4
 519 000e BD46     		mov	sp, r7
 520              	.LCFI51:
 521              		.cfi_def_cfa_register 13
 522              		@ sp needed
 523 0010 5DF8047B 		ldr	r7, [sp], #4
 524              	.LCFI52:
 525              		.cfi_restore 7
 526              		.cfi_def_cfa_offset 0
 527 0014 7047     		bx	lr
 528              		.cfi_endproc
 529              	.LFE66:
 531              		.section	.text._ZNK8touchgfx4Font23getContextualFormsTableEv,"axG",%progbits,_ZNK8touchgfx4Font23g
 532              		.align	1
 533              		.weak	_ZNK8touchgfx4Font23getContextualFormsTableEv
 534              		.syntax unified
 535              		.thumb
 536              		.thumb_func
 537              		.fpu fpv4-sp-d16
 539              	_ZNK8touchgfx4Font23getContextualFormsTableEv:
 540              	.LFB67:
 412:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 413:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 17


 414:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the contextual forms table used in arabic fonts.
 415:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 416:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The FontContextualFormsTable or null if the font has no table.
 417:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 418:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual const FontContextualFormsTable* getContextualFormsTable() const
 541              		.loc 1 418 45
 542              		.cfi_startproc
 543              		@ args = 0, pretend = 0, frame = 8
 544              		@ frame_needed = 1, uses_anonymous_args = 0
 545              		@ link register save eliminated.
 546 0000 80B4     		push	{r7}
 547              	.LCFI53:
 548              		.cfi_def_cfa_offset 4
 549              		.cfi_offset 7, -4
 550 0002 83B0     		sub	sp, sp, #12
 551              	.LCFI54:
 552              		.cfi_def_cfa_offset 16
 553 0004 00AF     		add	r7, sp, #0
 554              	.LCFI55:
 555              		.cfi_def_cfa_register 7
 556 0006 7860     		str	r0, [r7, #4]
 419:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 420:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return 0;
 557              		.loc 1 420 16
 558 0008 0023     		movs	r3, #0
 421:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 559              		.loc 1 421 5
 560 000a 1846     		mov	r0, r3
 561 000c 0C37     		adds	r7, r7, #12
 562              	.LCFI56:
 563              		.cfi_def_cfa_offset 4
 564 000e BD46     		mov	sp, r7
 565              	.LCFI57:
 566              		.cfi_def_cfa_register 13
 567              		@ sp needed
 568 0010 5DF8047B 		ldr	r7, [sp], #4
 569              	.LCFI58:
 570              		.cfi_restore 7
 571              		.cfi_def_cfa_offset 0
 572 0014 7047     		bx	lr
 573              		.cfi_endproc
 574              	.LFE67:
 576              		.section	.rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE,"a"
 577              		.align	1
 580              	_ZN8touchgfxL18TYPED_TEXT_INVALIDE:
 581 0000 FFFF     		.short	-1
 582              		.section	.text._ZN8touchgfx9TypedText25registerTypedTextDatabaseEPKNS0_13TypedTextDataEPKPKNS_4Fon
 583              		.align	1
 584              		.weak	_ZN8touchgfx9TypedText25registerTypedTextDatabaseEPKNS0_13TypedTextDataEPKPKNS_4FontEt
 585              		.syntax unified
 586              		.thumb
 587              		.thumb_func
 588              		.fpu fpv4-sp-d16
 590              	_ZN8touchgfx9TypedText25registerTypedTextDatabaseEPKNS0_13TypedTextDataEPKPKNS_4FontEt:
 591              	.LFB103:
 592              		.file 2 "Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** /******************************************************************************
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 18


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
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /**
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * Initializes a new instance of the TypedText class.
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      *
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      * @param  id (Optional) The identifier.
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****      */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 19


  59:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     explicit TypedText(const TypedTextId id = TYPED_TEXT_INVALID)
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         : typedTextId(id)
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     /** Finalizes an instance of the TypedText class. */
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     virtual ~TypedText()
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 20


 116:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     FORCE_INLINE_FUNCTION FontId getFontId() const
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         assertValid();
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         return typedTexts[typedTextId].fontIdx;
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp **** 
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
 593              		.loc 2 153 17
 594              		.cfi_startproc
 595              		@ args = 0, pretend = 0, frame = 16
 596              		@ frame_needed = 1, uses_anonymous_args = 0
 597              		@ link register save eliminated.
 598 0000 80B4     		push	{r7}
 599              	.LCFI59:
 600              		.cfi_def_cfa_offset 4
 601              		.cfi_offset 7, -4
 602 0002 85B0     		sub	sp, sp, #20
 603              	.LCFI60:
 604              		.cfi_def_cfa_offset 24
 605 0004 00AF     		add	r7, sp, #0
 606              	.LCFI61:
 607              		.cfi_def_cfa_register 7
 608 0006 F860     		str	r0, [r7, #12]
 609 0008 B960     		str	r1, [r7, #8]
 610 000a 1346     		mov	r3, r2
 611 000c FB80     		strh	r3, [r7, #6]	@ movhi
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 21


 154:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         typedTexts = data;
 612              		.loc 2 155 20
 613 000e 074A     		ldr	r2, .L24
 614 0010 FB68     		ldr	r3, [r7, #12]
 615 0012 1360     		str	r3, [r2]
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         fonts = f;
 616              		.loc 2 156 15
 617 0014 064A     		ldr	r2, .L24+4
 618 0016 BB68     		ldr	r3, [r7, #8]
 619 0018 1360     		str	r3, [r2]
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         numberOfTypedTexts = n;
 620              		.loc 2 157 28
 621 001a 064A     		ldr	r2, .L24+8
 622 001c FB88     		ldrh	r3, [r7, #6]	@ movhi
 623 001e 1380     		strh	r3, [r2]	@ movhi
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 624              		.loc 2 158 5
 625 0020 00BF     		nop
 626 0022 1437     		adds	r7, r7, #20
 627              	.LCFI62:
 628              		.cfi_def_cfa_offset 4
 629 0024 BD46     		mov	sp, r7
 630              	.LCFI63:
 631              		.cfi_def_cfa_register 13
 632              		@ sp needed
 633 0026 5DF8047B 		ldr	r7, [sp], #4
 634              	.LCFI64:
 635              		.cfi_restore 7
 636              		.cfi_def_cfa_offset 0
 637 002a 7047     		bx	lr
 638              	.L25:
 639              		.align	2
 640              	.L24:
 641 002c 00000000 		.word	_ZN8touchgfx9TypedText10typedTextsE
 642 0030 00000000 		.word	_ZN8touchgfx9TypedText5fontsE
 643 0034 00000000 		.word	_ZN8touchgfx9TypedText18numberOfTypedTextsE
 644              		.cfi_endproc
 645              	.LFE103:
 647              		.section	.rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE,"a"
 648              		.align	1
 651              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
 652 0000 FEFF     		.short	-2
 653              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
 654              		.align	1
 657              	_ZN8touchgfxL14BITMAP_INVALIDE:
 658 0000 FFFF     		.short	-1
 659              		.section	.text._ZNK8touchgfx4Font14getStringWidthEPKtz,"ax",%progbits
 660              		.align	1
 661              		.global	_ZNK8touchgfx4Font14getStringWidthEPKtz
 662              		.syntax unified
 663              		.thumb
 664              		.thumb_func
 665              		.fpu fpv4-sp-d16
 667              	_ZNK8touchgfx4Font14getStringWidthEPKtz:
 668              	.LFB380:
 669              		.file 3 "Src/generated/texts/src/Texts.cpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 22


   1:Src/generated/texts/src/Texts.cpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/texts/src/Texts.cpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/texts/src/Texts.cpp **** 
   4:Src/generated/texts/src/Texts.cpp **** #include <stdarg.h>
   5:Src/generated/texts/src/Texts.cpp **** #include <touchgfx/TextProvider.hpp>
   6:Src/generated/texts/src/Texts.cpp **** #include <touchgfx/Texts.hpp>
   7:Src/generated/texts/src/Texts.cpp **** #include <touchgfx/TypedText.hpp>
   8:Src/generated/texts/src/Texts.cpp **** #include <touchgfx/Unicode.hpp>
   9:Src/generated/texts/src/Texts.cpp **** #include <touchgfx/hal/HAL.hpp>
  10:Src/generated/texts/src/Texts.cpp **** #include <touchgfx/lcd/LCD.hpp>
  11:Src/generated/texts/src/Texts.cpp **** #include <texts/TypedTextDatabase.hpp>
  12:Src/generated/texts/src/Texts.cpp **** 
  13:Src/generated/texts/src/Texts.cpp **** uint16_t touchgfx::Font::getStringWidth(const touchgfx::Unicode::UnicodeChar* text, ...) const
  14:Src/generated/texts/src/Texts.cpp **** {
 670              		.loc 3 14 1
 671              		.cfi_startproc
 672              		@ args = 4, pretend = 12, frame = 16
 673              		@ frame_needed = 1, uses_anonymous_args = 1
 674 0000 0EB4     		push	{r1, r2, r3}
 675              	.LCFI65:
 676              		.cfi_def_cfa_offset 12
 677              		.cfi_offset 1, -12
 678              		.cfi_offset 2, -8
 679              		.cfi_offset 3, -4
 680 0002 80B5     		push	{r7, lr}
 681              	.LCFI66:
 682              		.cfi_def_cfa_offset 20
 683              		.cfi_offset 7, -20
 684              		.cfi_offset 14, -16
 685 0004 85B0     		sub	sp, sp, #20
 686              	.LCFI67:
 687              		.cfi_def_cfa_offset 40
 688 0006 00AF     		add	r7, sp, #0
 689              	.LCFI68:
 690              		.cfi_def_cfa_register 7
 691 0008 7860     		str	r0, [r7, #4]
  15:Src/generated/texts/src/Texts.cpp ****     va_list pArg;
  16:Src/generated/texts/src/Texts.cpp ****     va_start(pArg, text);
 692              		.loc 3 16 5
 693 000a 07F12003 		add	r3, r7, #32
 694 000e BB60     		str	r3, [r7, #8]
  17:Src/generated/texts/src/Texts.cpp ****     uint16_t width = getStringWidthLTR(TEXT_DIRECTION_LTR, text, pArg);
 695              		.loc 3 17 39
 696 0010 BB68     		ldr	r3, [r7, #8]
 697 0012 FA69     		ldr	r2, [r7, #28]
 698 0014 0021     		movs	r1, #0
 699 0016 7868     		ldr	r0, [r7, #4]
 700 0018 FFF7FEFF 		bl	_ZNK8touchgfx4Font17getStringWidthLTREhPKtSt9__va_list
 701 001c 0346     		mov	r3, r0
 702 001e FB81     		strh	r3, [r7, #14]	@ movhi
  18:Src/generated/texts/src/Texts.cpp ****     va_end(pArg);
  19:Src/generated/texts/src/Texts.cpp ****     return width;
 703              		.loc 3 19 12
 704 0020 FB89     		ldrh	r3, [r7, #14]
  20:Src/generated/texts/src/Texts.cpp **** }
 705              		.loc 3 20 1
 706 0022 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 23


 707 0024 1437     		adds	r7, r7, #20
 708              	.LCFI69:
 709              		.cfi_def_cfa_offset 20
 710 0026 BD46     		mov	sp, r7
 711              	.LCFI70:
 712              		.cfi_def_cfa_register 13
 713              		@ sp needed
 714 0028 BDE88040 		pop	{r7, lr}
 715              	.LCFI71:
 716              		.cfi_restore 14
 717              		.cfi_restore 7
 718              		.cfi_def_cfa_offset 12
 719 002c 03B0     		add	sp, sp, #12
 720              	.LCFI72:
 721              		.cfi_restore 3
 722              		.cfi_restore 2
 723              		.cfi_restore 1
 724              		.cfi_def_cfa_offset 0
 725 002e 7047     		bx	lr
 726              		.cfi_endproc
 727              	.LFE380:
 729              		.section	.text._ZNK8touchgfx4Font14getStringWidthEhPKtz,"ax",%progbits
 730              		.align	1
 731              		.global	_ZNK8touchgfx4Font14getStringWidthEhPKtz
 732              		.syntax unified
 733              		.thumb
 734              		.thumb_func
 735              		.fpu fpv4-sp-d16
 737              	_ZNK8touchgfx4Font14getStringWidthEhPKtz:
 738              	.LFB381:
  21:Src/generated/texts/src/Texts.cpp **** 
  22:Src/generated/texts/src/Texts.cpp **** uint16_t touchgfx::Font::getStringWidth(touchgfx::TextDirection textDirection, const touchgfx::Unic
  23:Src/generated/texts/src/Texts.cpp **** {
 739              		.loc 3 23 1
 740              		.cfi_startproc
 741              		@ args = 4, pretend = 8, frame = 16
 742              		@ frame_needed = 1, uses_anonymous_args = 1
 743 0000 0CB4     		push	{r2, r3}
 744              	.LCFI73:
 745              		.cfi_def_cfa_offset 8
 746              		.cfi_offset 2, -8
 747              		.cfi_offset 3, -4
 748 0002 80B5     		push	{r7, lr}
 749              	.LCFI74:
 750              		.cfi_def_cfa_offset 16
 751              		.cfi_offset 7, -16
 752              		.cfi_offset 14, -12
 753 0004 84B0     		sub	sp, sp, #16
 754              	.LCFI75:
 755              		.cfi_def_cfa_offset 32
 756 0006 00AF     		add	r7, sp, #0
 757              	.LCFI76:
 758              		.cfi_def_cfa_register 7
 759 0008 7860     		str	r0, [r7, #4]
 760 000a 0B46     		mov	r3, r1
 761 000c FB70     		strb	r3, [r7, #3]
  24:Src/generated/texts/src/Texts.cpp ****     va_list pArg;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 24


  25:Src/generated/texts/src/Texts.cpp ****     va_start(pArg, text);
 762              		.loc 3 25 5
 763 000e 07F11C03 		add	r3, r7, #28
 764 0012 BB60     		str	r3, [r7, #8]
  26:Src/generated/texts/src/Texts.cpp ****     uint16_t width = getStringWidthLTR(textDirection, text, pArg);
 765              		.loc 3 26 39
 766 0014 F978     		ldrb	r1, [r7, #3]	@ zero_extendqisi2
 767 0016 BB68     		ldr	r3, [r7, #8]
 768 0018 BA69     		ldr	r2, [r7, #24]
 769 001a 7868     		ldr	r0, [r7, #4]
 770 001c FFF7FEFF 		bl	_ZNK8touchgfx4Font17getStringWidthLTREhPKtSt9__va_list
 771 0020 0346     		mov	r3, r0
 772 0022 FB81     		strh	r3, [r7, #14]	@ movhi
  27:Src/generated/texts/src/Texts.cpp ****     va_end(pArg);
  28:Src/generated/texts/src/Texts.cpp ****     return width;
 773              		.loc 3 28 12
 774 0024 FB89     		ldrh	r3, [r7, #14]
  29:Src/generated/texts/src/Texts.cpp **** }
 775              		.loc 3 29 1
 776 0026 1846     		mov	r0, r3
 777 0028 1037     		adds	r7, r7, #16
 778              	.LCFI77:
 779              		.cfi_def_cfa_offset 16
 780 002a BD46     		mov	sp, r7
 781              	.LCFI78:
 782              		.cfi_def_cfa_register 13
 783              		@ sp needed
 784 002c BDE88040 		pop	{r7, lr}
 785              	.LCFI79:
 786              		.cfi_restore 14
 787              		.cfi_restore 7
 788              		.cfi_def_cfa_offset 8
 789 0030 02B0     		add	sp, sp, #8
 790              	.LCFI80:
 791              		.cfi_restore 3
 792              		.cfi_restore 2
 793              		.cfi_def_cfa_offset 0
 794 0032 7047     		bx	lr
 795              		.cfi_endproc
 796              	.LFE381:
 798              		.section	.rodata
 799              		.align	2
 800              	.LC0:
 801 0000 75736564 		.ascii	"used > 0\000"
 801      203E2030 
 801      00
 802 0009 000000   		.align	2
 803              	.LC1:
 804 000c 746F7563 		.ascii	"touchgfx::Unicode::UnicodeChar touchgfx::TextProvid"
 804      68676678 
 804      3A3A556E 
 804      69636F64 
 804      653A3A55 
 805 003f 65723A3A 		.ascii	"er::circularBuffer<size>::peekChar() [with unsigned"
 805      63697263 
 805      756C6172 
 805      42756666 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 25


 805      65723C73 
 806 0072 20696E74 		.ascii	" int size = 10; touchgfx::Unicode::UnicodeChar = sh"
 806      2073697A 
 806      65203D20 
 806      31303B20 
 806      746F7563 
 807 00a5 6F727420 		.ascii	"ort unsigned int]\000"
 807      756E7369 
 807      676E6564 
 807      20696E74 
 807      5D00
 808 00b7 00       		.align	2
 809              	.LC2:
 810 00b8 4D696464 		.ascii	"Middlewares/ST/touchgfx/framework/include/touchgfx/"
 810      6C657761 
 810      7265732F 
 810      53542F74 
 810      6F756368 
 811 00eb 54657874 		.ascii	"TextProvider.hpp\000"
 811      50726F76 
 811      69646572 
 811      2E687070 
 811      00
 812              		.align	2
 813              	.LC3:
 814 00fc 6F666673 		.ascii	"offset < used\000"
 814      6574203C 
 814      20757365 
 814      6400
 815 010a 0000     		.align	2
 816              	.LC4:
 817 010c 746F7563 		.ascii	"touchgfx::Unicode::UnicodeChar touchgfx::TextProvid"
 817      68676678 
 817      3A3A556E 
 817      69636F64 
 817      653A3A55 
 818 013f 65723A3A 		.ascii	"er::circularBuffer<size>::peekChar(uint16_t) [with "
 818      63697263 
 818      756C6172 
 818      42756666 
 818      65723C73 
 819 0172 756E7369 		.ascii	"unsigned int size = 10; touchgfx::Unicode::UnicodeC"
 819      676E6564 
 819      20696E74 
 819      2073697A 
 819      65203D20 
 820 01a5 68617220 		.ascii	"har = short unsigned int; uint16_t = short unsigned"
 820      3D207368 
 820      6F727420 
 820      756E7369 
 820      676E6564 
 821 01d8 20696E74 		.ascii	" int]\000"
 821      5D00
 822 01de 0000     		.align	2
 823              	.LC5:
 824 01e0 75736564 		.ascii	"used > 1\000"
 824      203E2031 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 26


 824      00
 825 01e9 000000   		.align	2
 826              	.LC6:
 827 01ec 766F6964 		.ascii	"void touchgfx::TextProvider::circularBuffer<size>::"
 827      20746F75 
 827      63686766 
 827      783A3A54 
 827      65787450 
 828 021f 7265706C 		.ascii	"replaceAt1(touchgfx::Unicode::UnicodeChar) [with un"
 828      61636541 
 828      74312874 
 828      6F756368 
 828      6766783A 
 829 0252 7369676E 		.ascii	"signed int size = 10; touchgfx::Unicode::UnicodeCha"
 829      65642069 
 829      6E742073 
 829      697A6520 
 829      3D203130 
 830 0285 72203D20 		.ascii	"r = short unsigned int]\000"
 830      73686F72 
 830      7420756E 
 830      7369676E 
 830      65642069 
 831              		.section	.text._ZN8touchgfx12TextProvider15getNextLigatureEh,"ax",%progbits
 832              		.align	1
 833              		.global	_ZN8touchgfx12TextProvider15getNextLigatureEh
 834              		.syntax unified
 835              		.thumb
 836              		.thumb_func
 837              		.fpu fpv4-sp-d16
 839              	_ZN8touchgfx12TextProvider15getNextLigatureEh:
 840              	.LFB382:
  30:Src/generated/texts/src/Texts.cpp **** 
  31:Src/generated/texts/src/Texts.cpp **** touchgfx::Unicode::UnicodeChar touchgfx::TextProvider::getNextLigature(TextDirection direction)
  32:Src/generated/texts/src/Texts.cpp **** {
 841              		.loc 3 32 1
 842              		.cfi_startproc
 843              		@ args = 0, pretend = 0, frame = 40
 844              		@ frame_needed = 1, uses_anonymous_args = 0
 845 0000 80B5     		push	{r7, lr}
 846              	.LCFI81:
 847              		.cfi_def_cfa_offset 8
 848              		.cfi_offset 7, -8
 849              		.cfi_offset 14, -4
 850 0002 8AB0     		sub	sp, sp, #40
 851              	.LCFI82:
 852              		.cfi_def_cfa_offset 48
 853 0004 00AF     		add	r7, sp, #0
 854              	.LCFI83:
 855              		.cfi_def_cfa_register 7
 856 0006 7860     		str	r0, [r7, #4]
 857 0008 0B46     		mov	r3, r1
 858 000a FB70     		strb	r3, [r7, #3]
  33:Src/generated/texts/src/Texts.cpp ****     if (fontGsubTable && nextCharacters.peekChar())
 859              		.loc 3 33 9
 860 000c 7B68     		ldr	r3, [r7, #4]
 861 000e DB6B     		ldr	r3, [r3, #60]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 27


 862              		.loc 3 33 23
 863 0010 002B     		cmp	r3, #0
 864 0012 16D0     		beq	.L31
 865              		.loc 3 33 49 discriminator 1
 866 0014 7B68     		ldr	r3, [r7, #4]
 867 0016 1A33     		adds	r3, r3, #26
 868 0018 7B62     		str	r3, [r7, #36]
 869              	.LBB12:
 870              	.LBB13:
 871              		.file 4 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  * @file touchgfx/TextProvider.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  * Declares the touchgfx::TextProvider class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** #ifndef TOUCHGFX_TEXTPROVIDER_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** #define TOUCHGFX_TEXTPROVIDER_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** #include <touchgfx/Font.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** #include <touchgfx/Unicode.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** /**
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  * The TextProvider is used in drawing basic strings and strings with one or two wildcards. The
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  * TextProvider enables wildcard expansion of the string at the time it is written to
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  * the LCD.
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  *
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  * Wildcards specified as &lt;placeholder&gt; are converted to Unicode value 2 by the
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  * text converter tool, and the placeholders are automatically expanded with the
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  * specified wildcard buffers at runtime.
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****  */
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** class TextProvider
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** {
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** public:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     static const uint32_t MAX_32BIT_INTEGER_DIGITS = 33U; ///< Max number of digits used for the te
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     /**
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Initializes a new instance of the TextProvider class.
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @note The user must call initialize() before characters can be provided.
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      */
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     TextProvider();
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 28


  48:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     /**
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Initializes the TextProvider. Each '\2' character in the format is replaced by one
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * UnicodeChar* argument from pArg.
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  stringFormat The string to format.
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  pArg         Format arguments in the form of a va_list.
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  gsubTable    (Optional) Pointer to GSUB table with Unicode substitution rules.
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  formsTable   (Optional) Pointer to contextual forms table with Unicode substitution 
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      */
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     void initialize(const Unicode::UnicodeChar* stringFormat, va_list pArg, const uint16_t* gsubTab
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     /**
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Initializes the TextProvider. Each '\2' character in the format is replaced by one
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * UnicodeChar* argument from pArg.
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  stringFormat The string to format.
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  gsubTable    (Optional) Pointer to GSUB table with Unicode substitution rules.
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  formsTable   (Optional) Pointer to contextual forms table with Unicode substitution 
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  ...          Variable arguments providing additional information.
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      */
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     void initialize(const Unicode::UnicodeChar* stringFormat, const uint16_t* gsubTable = 0, const 
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     /**
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Gets the next character. For Arabic and Thai, it is important to use the
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * getNextLigature instead.
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @return The next character of the expanded string or 0 if end of string is reached.
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @see TextProvider::getNextLigature
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      */
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     Unicode::UnicodeChar getNextChar();
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     /**
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Tells if the end of the string has been reached.
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @return True if the end of the string has been reached, false if not.
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @see TextProvider::getNextLigature()
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      */
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     bool endOfString();
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     /**
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Gets the next ligature. For most languages this is simply the next Unicode character
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * from the buffer, but e.g. Arabic has different ligatures for each character. Thai
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * character placement might also depend on previous characters. It is recommended to
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * use getNextLigature with font and glyph parameters to ensure coming glyphs in a text
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * are placed correctly.
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param  direction The direction.
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @return The next character of the expanded string or 0 if end of string is reached.
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @see TextProvider::getNextChar
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @note Functions getNextLigature() and getNextChar() will advance through the same buffer
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       and mixing the use of those functions is not recommended and may cause
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       undesired results. Instead create two TextProviders and user getNextChar() on
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 29


 105:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       one and getNextLigature() on the other.
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      */
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     Unicode::UnicodeChar getNextLigature(TextDirection direction);
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     /**
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Gets the next ligature. For most languages this is simply the next Unicode character
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * from the buffer, but e.g. Arabic has different ligatures for each character.
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Also gets a glyph for the ligature in a font. For non-Thai Unicodes, this is
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * identical to using Font::getGlyph(), but for Thai characters where diacritics glyphs
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * are not always placed at the same relative position, an adjusted GlyphNode will be
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * generated with correct relative X/Y coordinates.
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param       direction The direction.
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param       font      The font.
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param [out] glyph     The glyph.
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @return The next character of the expanded string or 0 if end of string i reached.
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @see TextProvider::getNextChar, Font::getGlyph
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @note Functions getNextLigature() and getNextChar() will advance through the same buffer
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       and mixing the use of those functions is not recommended and may cause
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       undesired results. Instead create two TextProviders and user getNextChar() on
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       one and getNextLigature() on the other.
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      */
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     Unicode::UnicodeChar getNextLigature(TextDirection direction, const Font* font, const GlyphNode
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     /**
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Gets the next ligature. For most languages this is simply the next Unicode character
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * from the buffer, but e.g. Arabic has different ligatures for each character.
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Also gets a glyph for the ligature in a font. For non-Thai Unicodes, this is
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * identical to using Font::getGlyph(), but for Thai characters where diacritics glyphs
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * are not always placed at the same relative position, an adjusted GlyphNode will be
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * generated with correct relative X/Y coordinates.
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * Furthermore a pointer to the glyph data and the bit depth of the font are returned in
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * parameters.
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param       direction    The direction.
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param       font         The font.
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param [out] glyph        The glyph.
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param [out] pixelData    Information describing the pixel.
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @param [out] bitsPerPixel The bits per pixel.
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @return The next character of the expanded string or 0 if end of string is reached.
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @see TextProvider::getNextChar, Font::getGlyph
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      * @note Functions getNextLigature() and getNextChar() will advance through the same buffer
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       and mixing the use of those functions is not recommended and may cause
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       undesired results. Instead create two TextProviders and user getNextChar() on
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      *       one and getNextLigature() on the other.
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****      */
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     Unicode::UnicodeChar getNextLigature(TextDirection direction, const Font* font, const GlyphNode
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 30


 162:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp **** private:
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     Unicode::UnicodeChar getNextCharInternal();
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     const Unicode::UnicodeChar* original_format_string;
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     const Unicode::UnicodeChar* format;
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     va_list formatArgs;
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     const Unicode::UnicodeChar* substringPointer;
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     bool isWritingWildcard;
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     template <unsigned int size>
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     class circularBuffer
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     {
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****     public:
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         circularBuffer()
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             : pos(0), used(0)
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION void flush()
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             used = 0;
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION bool isEmpty() const
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             return used == 0;
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION bool isFull() const
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             return used == size;
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION Unicode::UnicodeChar peekChar()
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             assert(used > 0);
 872              		.loc 4 191 13 discriminator 1
 873 001a 7B6A     		ldr	r3, [r7, #36]
 874 001c DB8A     		ldrh	r3, [r3, #22]
 875 001e 002B     		cmp	r3, #0
 876 0020 05D1     		bne	.L32
 877              		.loc 4 191 13 is_stmt 0
 878 0022 434B     		ldr	r3, .L46
 879 0024 434A     		ldr	r2, .L46+4
 880 0026 BF21     		movs	r1, #191
 881 0028 4348     		ldr	r0, .L46+8
 882 002a FFF7FEFF 		bl	__assert_func
 883              	.L32:
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             return buffer[pos];
 884              		.loc 4 192 27 is_stmt 1
 885 002e 7B6A     		ldr	r3, [r7, #36]
 886 0030 9B8A     		ldrh	r3, [r3, #20]
 887 0032 1A46     		mov	r2, r3
 888              		.loc 4 192 30
 889 0034 7B6A     		ldr	r3, [r7, #36]
 890 0036 33F81230 		ldrh	r3, [r3, r2, lsl #1]
 891              	.LBE13:
 892              	.LBE12:
 893              		.loc 3 33 23
 894 003a 002B     		cmp	r3, #0
 895 003c 01D0     		beq	.L31
 896              		.loc 3 33 23 is_stmt 0 discriminator 3
 897 003e 0123     		movs	r3, #1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 31


 898 0040 00E0     		b	.L34
 899              	.L31:
 900              		.loc 3 33 23 discriminator 4
 901 0042 0023     		movs	r3, #0
 902              	.L34:
 903              		.loc 3 33 5 is_stmt 1 discriminator 6
 904 0044 002B     		cmp	r3, #0
 905 0046 6AD0     		beq	.L35
  34:Src/generated/texts/src/Texts.cpp ****     {
  35:Src/generated/texts/src/Texts.cpp ****         substituteGlyphs();
 906              		.loc 3 35 25
 907 0048 7868     		ldr	r0, [r7, #4]
 908 004a FFF7FEFF 		bl	_ZN8touchgfx12TextProvider16substituteGlyphsEv
  36:Src/generated/texts/src/Texts.cpp ****         if (nextCharacters.peekChar(1) == 0x093F) //Hindi I-matra
 909              		.loc 3 36 36
 910 004e 7B68     		ldr	r3, [r7, #4]
 911 0050 1A33     		adds	r3, r3, #26
 912 0052 3B62     		str	r3, [r7, #32]
 913 0054 0123     		movs	r3, #1
 914 0056 FB83     		strh	r3, [r7, #30]	@ movhi
 915              	.LBB14:
 916              	.LBB15:
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION Unicode::UnicodeChar peekChar(uint16_t offset)
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             assert(offset < used);
 917              		.loc 4 196 13
 918 0058 3B6A     		ldr	r3, [r7, #32]
 919 005a DB8A     		ldrh	r3, [r3, #22]
 920 005c FA8B     		ldrh	r2, [r7, #30]
 921 005e 9A42     		cmp	r2, r3
 922 0060 05D3     		bcc	.L36
 923 0062 364B     		ldr	r3, .L46+12
 924 0064 364A     		ldr	r2, .L46+16
 925 0066 C421     		movs	r1, #196
 926 0068 3348     		ldr	r0, .L46+8
 927 006a FFF7FEFF 		bl	__assert_func
 928              	.L36:
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             const uint16_t index = pos + offset;
 929              		.loc 4 197 36
 930 006e 3B6A     		ldr	r3, [r7, #32]
 931 0070 9A8A     		ldrh	r2, [r3, #20]
 932              		.loc 4 197 28
 933 0072 FB8B     		ldrh	r3, [r7, #30]	@ movhi
 934 0074 1344     		add	r3, r3, r2
 935 0076 BB83     		strh	r3, [r7, #28]	@ movhi
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             return buffer[index < size ? index : index - size];
 936              		.loc 4 198 40
 937 0078 BB8B     		ldrh	r3, [r7, #28]
 938 007a 092B     		cmp	r3, #9
 939 007c 01D8     		bhi	.L37
 940 007e BB8B     		ldrh	r3, [r7, #28]
 941 0080 01E0     		b	.L38
 942              	.L37:
 943              		.loc 4 198 50
 944 0082 BB8B     		ldrh	r3, [r7, #28]
 945              		.loc 4 198 40
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 32


 946 0084 0A3B     		subs	r3, r3, #10
 947              	.L38:
 948              		.loc 4 198 62
 949 0086 3A6A     		ldr	r2, [r7, #32]
 950 0088 32F81330 		ldrh	r3, [r2, r3, lsl #1]
 951              	.LBE15:
 952              	.LBE14:
 953              		.loc 3 36 40
 954 008c 40F63F12 		movw	r2, #2367
 955 0090 9342     		cmp	r3, r2
 956 0092 0CBF     		ite	eq
 957 0094 0123     		moveq	r3, #1
 958 0096 0023     		movne	r3, #0
 959 0098 DBB2     		uxtb	r3, r3
 960              		.loc 3 36 9
 961 009a 002B     		cmp	r3, #0
 962 009c 3FD0     		beq	.L35
  37:Src/generated/texts/src/Texts.cpp ****         {
  38:Src/generated/texts/src/Texts.cpp ****             nextCharacters.replaceAt1(nextCharacters.peekChar());
 963              		.loc 3 38 38
 964 009e 7B68     		ldr	r3, [r7, #4]
 965 00a0 1A33     		adds	r3, r3, #26
 966 00a2 7A68     		ldr	r2, [r7, #4]
 967 00a4 1A32     		adds	r2, r2, #26
 968 00a6 BA60     		str	r2, [r7, #8]
 969              	.LBB16:
 970              	.LBB17:
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             return buffer[pos];
 971              		.loc 4 191 13
 972 00a8 BA68     		ldr	r2, [r7, #8]
 973 00aa D28A     		ldrh	r2, [r2, #22]
 974 00ac 002A     		cmp	r2, #0
 975 00ae 05D1     		bne	.L40
 976 00b0 1F4B     		ldr	r3, .L46
 977 00b2 204A     		ldr	r2, .L46+4
 978 00b4 BF21     		movs	r1, #191
 979 00b6 2048     		ldr	r0, .L46+8
 980 00b8 FFF7FEFF 		bl	__assert_func
 981              	.L40:
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 982              		.loc 4 192 27
 983 00bc BA68     		ldr	r2, [r7, #8]
 984 00be 928A     		ldrh	r2, [r2, #20]
 985 00c0 1146     		mov	r1, r2
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 986              		.loc 4 192 30
 987 00c2 BA68     		ldr	r2, [r7, #8]
 988 00c4 32F81120 		ldrh	r2, [r2, r1, lsl #1]
 989 00c8 3B61     		str	r3, [r7, #16]
 990 00ca 1346     		mov	r3, r2	@ movhi
 991 00cc FB81     		strh	r3, [r7, #14]	@ movhi
 992              	.LBE17:
 993              	.LBE16:
 994              	.LBB18:
 995              	.LBB19:
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION void dropFront(uint16_t num = 1)
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 33


 201:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             assert(used >= num);
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             used -= num;
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             pos += num;
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             if (pos >= size)
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             {
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****                 pos -= size;
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             }
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         Unicode::UnicodeChar popFront()
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             assert(used > 0);
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             const Unicode::UnicodeChar ch = buffer[pos];
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             used--;
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             pos++;
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             if (pos >= size)
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             {
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****                 pos -= size;
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             }
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             return ch;
 221:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         Unicode::UnicodeChar popBack()
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             assert(used > 0);
 225:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             return peekChar(used-- - 1);
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         void allocateFront(uint16_t num)
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             assert(used + num <= size);
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             used += num;
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             if (pos < num)
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             {
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****                 pos += size;
 234:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             }
 235:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             pos -= num;
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         void pushFrontForce(Unicode::UnicodeChar newChar)
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             // "use" one more entry, if already full overwrite back entry ("used" is unchanged)
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             if (used < size)
 241:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             {
 242:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****                 used++;
 243:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             }
 244:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             // Move "pos" one back with overflow check
 245:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             if (pos == 0)
 246:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             {
 247:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****                 pos += size;
 248:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             }
 249:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             pos--;
 250:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             replaceAt0(newChar);
 251:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 252:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         void pushFront(Unicode::UnicodeChar newChar)
 253:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 254:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             allocateFront(1);
 255:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             replaceAt0(newChar);
 256:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 257:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION void pushBack(Unicode::UnicodeChar newChar)
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 34


 258:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 259:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             assert(used < size);
 260:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             replaceAt(++used - 1, newChar);
 261:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 262:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION void replaceAt0(Unicode::UnicodeChar newChar)
 263:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             buffer[pos] = newChar;
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 266:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION void replaceAt1(Unicode::UnicodeChar newChar)
 267:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         {
 268:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             assert(used > 1);
 996              		.loc 4 268 13
 997 00ce 3B69     		ldr	r3, [r7, #16]
 998 00d0 DB8A     		ldrh	r3, [r3, #22]
 999 00d2 012B     		cmp	r3, #1
 1000 00d4 06D8     		bhi	.L42
 1001 00d6 1B4B     		ldr	r3, .L46+20
 1002 00d8 1B4A     		ldr	r2, .L46+24
 1003 00da 4FF48671 		mov	r1, #268
 1004 00de 1648     		ldr	r0, .L46+8
 1005 00e0 FFF7FEFF 		bl	__assert_func
 1006              	.L42:
 269:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             const uint16_t index = pos + 1;
 1007              		.loc 4 269 36
 1008 00e4 3B69     		ldr	r3, [r7, #16]
 1009 00e6 9B8A     		ldrh	r3, [r3, #20]
 1010              		.loc 4 269 28
 1011 00e8 0133     		adds	r3, r3, #1
 1012 00ea BB81     		strh	r3, [r7, #12]	@ movhi
 270:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****             buffer[index < size ? index : 0] = newChar;
 1013              		.loc 4 270 33
 1014 00ec BB89     		ldrh	r3, [r7, #12]
 1015 00ee 092B     		cmp	r3, #9
 1016 00f0 01D8     		bhi	.L43
 1017 00f2 BB89     		ldrh	r3, [r7, #12]
 1018 00f4 00E0     		b	.L44
 1019              	.L43:
 1020 00f6 0023     		movs	r3, #0
 1021              	.L44:
 1022              		.loc 4 270 46
 1023 00f8 3A69     		ldr	r2, [r7, #16]
 1024 00fa F989     		ldrh	r1, [r7, #14]	@ movhi
 1025 00fc 22F81310 		strh	r1, [r2, r3, lsl #1]	@ movhi
 271:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 1026              		.loc 4 271 9
 1027 0100 00BF     		nop
 1028              	.LBE19:
 1029              	.LBE18:
  39:Src/generated/texts/src/Texts.cpp ****             nextCharacters.replaceAt0(0x093F);
 1030              		.loc 3 39 38
 1031 0102 7B68     		ldr	r3, [r7, #4]
 1032 0104 1A33     		adds	r3, r3, #26
 1033 0106 BB61     		str	r3, [r7, #24]
 1034 0108 40F63F13 		movw	r3, #2367
 1035 010c FB82     		strh	r3, [r7, #22]	@ movhi
 1036              	.LBB20:
 1037              	.LBB21:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 35


 264:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 1038              		.loc 4 264 20
 1039 010e BB69     		ldr	r3, [r7, #24]
 1040 0110 9B8A     		ldrh	r3, [r3, #20]
 1041 0112 1946     		mov	r1, r3
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         }
 1042              		.loc 4 264 25
 1043 0114 BB69     		ldr	r3, [r7, #24]
 1044 0116 FA8A     		ldrh	r2, [r7, #22]	@ movhi
 1045 0118 23F81120 		strh	r2, [r3, r1, lsl #1]	@ movhi
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp ****         FORCE_INLINE_FUNCTION void replaceAt1(Unicode::UnicodeChar newChar)
 1046              		.loc 4 265 9
 1047 011c 00BF     		nop
 1048              	.L35:
 1049              	.LBE21:
 1050              	.LBE20:
  40:Src/generated/texts/src/Texts.cpp ****         }
  41:Src/generated/texts/src/Texts.cpp ****     }
  42:Src/generated/texts/src/Texts.cpp ****     return getNextChar();
 1051              		.loc 3 42 23
 1052 011e 7868     		ldr	r0, [r7, #4]
 1053 0120 FFF7FEFF 		bl	_ZN8touchgfx12TextProvider11getNextCharEv
 1054 0124 0346     		mov	r3, r0
  43:Src/generated/texts/src/Texts.cpp **** }
 1055              		.loc 3 43 1
 1056 0126 1846     		mov	r0, r3
 1057 0128 2837     		adds	r7, r7, #40
 1058              	.LCFI84:
 1059              		.cfi_def_cfa_offset 8
 1060 012a BD46     		mov	sp, r7
 1061              	.LCFI85:
 1062              		.cfi_def_cfa_register 13
 1063              		@ sp needed
 1064 012c 80BD     		pop	{r7, pc}
 1065              	.L47:
 1066 012e 00BF     		.align	2
 1067              	.L46:
 1068 0130 00000000 		.word	.LC0
 1069 0134 0C000000 		.word	.LC1
 1070 0138 B8000000 		.word	.LC2
 1071 013c FC000000 		.word	.LC3
 1072 0140 0C010000 		.word	.LC4
 1073 0144 E0010000 		.word	.LC5
 1074 0148 EC010000 		.word	.LC6
 1075              		.cfi_endproc
 1076              	.LFE382:
 1078              		.section	.text._ZN8touchgfx12TextProvider18initializeInternalEv,"ax",%progbits
 1079              		.align	1
 1080              		.global	_ZN8touchgfx12TextProvider18initializeInternalEv
 1081              		.syntax unified
 1082              		.thumb
 1083              		.thumb_func
 1084              		.fpu fpv4-sp-d16
 1086              	_ZN8touchgfx12TextProvider18initializeInternalEv:
 1087              	.LFB383:
  44:Src/generated/texts/src/Texts.cpp **** 
  45:Src/generated/texts/src/Texts.cpp **** void touchgfx::TextProvider::initializeInternal()
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 36


  46:Src/generated/texts/src/Texts.cpp **** {
 1088              		.loc 3 46 1
 1089              		.cfi_startproc
 1090              		@ args = 0, pretend = 0, frame = 8
 1091              		@ frame_needed = 1, uses_anonymous_args = 0
 1092 0000 80B5     		push	{r7, lr}
 1093              	.LCFI86:
 1094              		.cfi_def_cfa_offset 8
 1095              		.cfi_offset 7, -8
 1096              		.cfi_offset 14, -4
 1097 0002 82B0     		sub	sp, sp, #8
 1098              	.LCFI87:
 1099              		.cfi_def_cfa_offset 16
 1100 0004 00AF     		add	r7, sp, #0
 1101              	.LCFI88:
 1102              		.cfi_def_cfa_register 7
 1103 0006 7860     		str	r0, [r7, #4]
  47:Src/generated/texts/src/Texts.cpp ****     fillInputBuffer();
 1104              		.loc 3 47 20
 1105 0008 7868     		ldr	r0, [r7, #4]
 1106 000a FFF7FEFF 		bl	_ZN8touchgfx12TextProvider15fillInputBufferEv
  48:Src/generated/texts/src/Texts.cpp **** }
 1107              		.loc 3 48 1
 1108 000e 00BF     		nop
 1109 0010 0837     		adds	r7, r7, #8
 1110              	.LCFI89:
 1111              		.cfi_def_cfa_offset 8
 1112 0012 BD46     		mov	sp, r7
 1113              	.LCFI90:
 1114              		.cfi_def_cfa_register 13
 1115              		@ sp needed
 1116 0014 80BD     		pop	{r7, pc}
 1117              		.cfi_endproc
 1118              	.LFE383:
 1120              		.section	.text._ZN8touchgfx3LCD10drawStringENS_4RectERKS1_RKNS0_13StringVisualsEPKtz,"ax",%progbit
 1121              		.align	1
 1122              		.global	_ZN8touchgfx3LCD10drawStringENS_4RectERKS1_RKNS0_13StringVisualsEPKtz
 1123              		.syntax unified
 1124              		.thumb
 1125              		.thumb_func
 1126              		.fpu fpv4-sp-d16
 1128              	_ZN8touchgfx3LCD10drawStringENS_4RectERKS1_RKNS0_13StringVisualsEPKtz:
 1129              	.LFB384:
  49:Src/generated/texts/src/Texts.cpp **** 
  50:Src/generated/texts/src/Texts.cpp **** void touchgfx::LCD::drawString(touchgfx::Rect widgetArea, const touchgfx::Rect& invalidatedArea, co
  51:Src/generated/texts/src/Texts.cpp **** {
 1130              		.loc 3 51 1
 1131              		.cfi_startproc
 1132              		@ args = 8, pretend = 0, frame = 24
 1133              		@ frame_needed = 1, uses_anonymous_args = 1
 1134 0000 80B5     		push	{r7, lr}
 1135              	.LCFI91:
 1136              		.cfi_def_cfa_offset 8
 1137              		.cfi_offset 7, -8
 1138              		.cfi_offset 14, -4
 1139 0002 88B0     		sub	sp, sp, #32
 1140              	.LCFI92:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 37


 1141              		.cfi_def_cfa_offset 40
 1142 0004 02AF     		add	r7, sp, #8
 1143              	.LCFI93:
 1144              		.cfi_def_cfa 7, 32
 1145 0006 F860     		str	r0, [r7, #12]
 1146 0008 381D     		adds	r0, r7, #4
 1147 000a 80E80600 		stm	r0, {r1, r2}
 1148 000e 3B60     		str	r3, [r7]
  52:Src/generated/texts/src/Texts.cpp ****     va_list pArg;
  53:Src/generated/texts/src/Texts.cpp ****     va_start(pArg, format);
 1149              		.loc 3 53 5
 1150 0010 07F12803 		add	r3, r7, #40
 1151 0014 7B61     		str	r3, [r7, #20]
  54:Src/generated/texts/src/Texts.cpp ****     drawStringLTR(widgetArea, invalidatedArea, stringVisuals, format, pArg);
 1152              		.loc 3 54 18
 1153 0016 391D     		adds	r1, r7, #4
 1154 0018 7B69     		ldr	r3, [r7, #20]
 1155 001a 0193     		str	r3, [sp, #4]
 1156 001c 7B6A     		ldr	r3, [r7, #36]
 1157 001e 0093     		str	r3, [sp]
 1158 0020 3B6A     		ldr	r3, [r7, #32]
 1159 0022 3A68     		ldr	r2, [r7]
 1160 0024 F868     		ldr	r0, [r7, #12]
 1161 0026 FFF7FEFF 		bl	_ZN8touchgfx3LCD13drawStringLTRERKNS_4RectES3_RKNS0_13StringVisualsEPKtSt9__va_list
  55:Src/generated/texts/src/Texts.cpp ****     va_end(pArg);
  56:Src/generated/texts/src/Texts.cpp **** }
 1162              		.loc 3 56 1
 1163 002a 00BF     		nop
 1164 002c 1837     		adds	r7, r7, #24
 1165              	.LCFI94:
 1166              		.cfi_def_cfa_offset 8
 1167 002e BD46     		mov	sp, r7
 1168              	.LCFI95:
 1169              		.cfi_def_cfa_register 13
 1170              		@ sp needed
 1171 0030 80BD     		pop	{r7, pc}
 1172              		.cfi_endproc
 1173              	.LFE384:
 1175              		.global	texts_all_languages
 1176              		.section	"TextFlashSection","a"
 1177              		.align	2
 1180              	texts_all_languages:
 1181 0000 0000     		.space	2
 1182              		.section	.bss._ZL14languagesArray,"aw",%nobits
 1183              		.align	2
 1186              	_ZL14languagesArray:
 1187 0000 00000000 		.space	4
 1188              		.section	.rodata._ZL21staticLanguageIndices,"a"
 1189              		.align	2
 1192              	_ZL21staticLanguageIndices:
 1193 0000 00000000 		.space	4
 1194              		.global	_ZN8touchgfx5Texts15currentLanguageE
 1195              		.section	.bss._ZN8touchgfx5Texts15currentLanguageE,"aw",%nobits
 1196              		.align	1
 1199              	_ZN8touchgfx5Texts15currentLanguageE:
 1200 0000 0000     		.space	2
 1201              		.section	.bss._ZL18currentLanguagePtr,"aw",%nobits
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 38


 1202              		.align	2
 1205              	_ZL18currentLanguagePtr:
 1206 0000 00000000 		.space	4
 1207              		.section	.bss._ZL22currentLanguageIndices,"aw",%nobits
 1208              		.align	2
 1211              	_ZL22currentLanguageIndices:
 1212 0000 00000000 		.space	4
 1213              		.section	.text._ZN8touchgfx5Texts11setLanguageEt,"ax",%progbits
 1214              		.align	1
 1215              		.global	_ZN8touchgfx5Texts11setLanguageEt
 1216              		.syntax unified
 1217              		.thumb
 1218              		.thumb_func
 1219              		.fpu fpv4-sp-d16
 1221              	_ZN8touchgfx5Texts11setLanguageEt:
 1222              	.LFB385:
  57:Src/generated/texts/src/Texts.cpp **** 
  58:Src/generated/texts/src/Texts.cpp **** //Default typed text database
  59:Src/generated/texts/src/Texts.cpp **** extern const touchgfx::TypedText::TypedTextData* const typedTextDatabaseArray[];
  60:Src/generated/texts/src/Texts.cpp **** 
  61:Src/generated/texts/src/Texts.cpp **** TEXT_LOCATION_FLASH_PRAGMA
  62:Src/generated/texts/src/Texts.cpp **** KEEP extern const touchgfx::Unicode::UnicodeChar texts_all_languages[] TEXT_LOCATION_FLASH_ATTRIBUT
  63:Src/generated/texts/src/Texts.cpp ****     0 // No characters in application
  64:Src/generated/texts/src/Texts.cpp **** };
  65:Src/generated/texts/src/Texts.cpp **** 
  66:Src/generated/texts/src/Texts.cpp **** //array holding dynamically installed languages
  67:Src/generated/texts/src/Texts.cpp **** struct TranslationHeader
  68:Src/generated/texts/src/Texts.cpp **** {
  69:Src/generated/texts/src/Texts.cpp ****     uint32_t offset_to_texts;
  70:Src/generated/texts/src/Texts.cpp ****     uint32_t offset_to_indices;
  71:Src/generated/texts/src/Texts.cpp ****     uint32_t offset_to_typedtext;
  72:Src/generated/texts/src/Texts.cpp **** };
  73:Src/generated/texts/src/Texts.cpp **** static const TranslationHeader* languagesArray[1] = { 0 };
  74:Src/generated/texts/src/Texts.cpp **** 
  75:Src/generated/texts/src/Texts.cpp **** //Compiled and linked in languages
  76:Src/generated/texts/src/Texts.cpp **** static const uint32_t* const staticLanguageIndices[] = {
  77:Src/generated/texts/src/Texts.cpp ****     0
  78:Src/generated/texts/src/Texts.cpp **** };
  79:Src/generated/texts/src/Texts.cpp **** 
  80:Src/generated/texts/src/Texts.cpp **** touchgfx::LanguageId touchgfx::Texts::currentLanguage = static_cast<touchgfx::LanguageId>(0);
  81:Src/generated/texts/src/Texts.cpp **** static const touchgfx::Unicode::UnicodeChar* currentLanguagePtr = 0;
  82:Src/generated/texts/src/Texts.cpp **** static const uint32_t* currentLanguageIndices = 0;
  83:Src/generated/texts/src/Texts.cpp **** 
  84:Src/generated/texts/src/Texts.cpp **** void touchgfx::Texts::setLanguage(touchgfx::LanguageId id)
  85:Src/generated/texts/src/Texts.cpp **** {
 1223              		.loc 3 85 1
 1224              		.cfi_startproc
 1225              		@ args = 0, pretend = 0, frame = 16
 1226              		@ frame_needed = 1, uses_anonymous_args = 0
 1227 0000 90B5     		push	{r4, r7, lr}
 1228              	.LCFI96:
 1229              		.cfi_def_cfa_offset 12
 1230              		.cfi_offset 4, -12
 1231              		.cfi_offset 7, -8
 1232              		.cfi_offset 14, -4
 1233 0002 85B0     		sub	sp, sp, #20
 1234              	.LCFI97:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 39


 1235              		.cfi_def_cfa_offset 32
 1236 0004 00AF     		add	r7, sp, #0
 1237              	.LCFI98:
 1238              		.cfi_def_cfa_register 7
 1239 0006 0346     		mov	r3, r0
 1240 0008 FB80     		strh	r3, [r7, #6]	@ movhi
  86:Src/generated/texts/src/Texts.cpp ****     const touchgfx::TypedText::TypedTextData* currentLanguageTypedText = 0;
 1241              		.loc 3 86 47
 1242 000a 0023     		movs	r3, #0
 1243 000c FB60     		str	r3, [r7, #12]
 1244              	.LBB22:
  87:Src/generated/texts/src/Texts.cpp ****     if (id < 1)
 1245              		.loc 3 87 5
 1246 000e FB88     		ldrh	r3, [r7, #6]
 1247 0010 002B     		cmp	r3, #0
 1248 0012 27D1     		bne	.L51
 1249              	.LBB23:
 1250              	.LBB24:
  88:Src/generated/texts/src/Texts.cpp ****     {
  89:Src/generated/texts/src/Texts.cpp ****         if (languagesArray[id] != 0)
 1251              		.loc 3 89 28
 1252 0014 FB88     		ldrh	r3, [r7, #6]
 1253              		.loc 3 89 30
 1254 0016 1E4A     		ldr	r2, .L55
 1255 0018 52F82330 		ldr	r3, [r2, r3, lsl #2]
 1256              		.loc 3 89 9
 1257 001c 002B     		cmp	r3, #0
 1258 001e 16D0     		beq	.L52
 1259              	.LBB25:
  90:Src/generated/texts/src/Texts.cpp ****         {
  91:Src/generated/texts/src/Texts.cpp ****             //dynamic translation is added
  92:Src/generated/texts/src/Texts.cpp ****             const TranslationHeader* translation = languagesArray[id];
 1260              		.loc 3 92 67
 1261 0020 FB88     		ldrh	r3, [r7, #6]
 1262              		.loc 3 92 38
 1263 0022 1B4A     		ldr	r2, .L55
 1264 0024 52F82330 		ldr	r3, [r2, r3, lsl #2]
 1265 0028 BB60     		str	r3, [r7, #8]
  93:Src/generated/texts/src/Texts.cpp ****             currentLanguagePtr = (const touchgfx::Unicode::UnicodeChar*)(((const uint8_t*)translati
 1266              		.loc 3 93 119
 1267 002a BB68     		ldr	r3, [r7, #8]
 1268 002c 1B68     		ldr	r3, [r3]
 1269              		.loc 3 93 34
 1270 002e BA68     		ldr	r2, [r7, #8]
 1271 0030 1344     		add	r3, r3, r2
 1272              		.loc 3 93 32
 1273 0032 184A     		ldr	r2, .L55+4
 1274 0034 1360     		str	r3, [r2]
  94:Src/generated/texts/src/Texts.cpp ****             currentLanguageIndices = (const uint32_t*)(((const uint8_t*)translation) + translation-
 1275              		.loc 3 94 101
 1276 0036 BB68     		ldr	r3, [r7, #8]
 1277 0038 5B68     		ldr	r3, [r3, #4]
 1278              		.loc 3 94 38
 1279 003a BA68     		ldr	r2, [r7, #8]
 1280 003c 1344     		add	r3, r3, r2
 1281              		.loc 3 94 36
 1282 003e 164A     		ldr	r2, .L55+8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 40


 1283 0040 1360     		str	r3, [r2]
  95:Src/generated/texts/src/Texts.cpp ****             currentLanguageTypedText = (const touchgfx::TypedText::TypedTextData*)(((const uint8_t*
 1284              		.loc 3 95 129
 1285 0042 BB68     		ldr	r3, [r7, #8]
 1286 0044 9B68     		ldr	r3, [r3, #8]
 1287              		.loc 3 95 38
 1288 0046 BA68     		ldr	r2, [r7, #8]
 1289 0048 1344     		add	r3, r3, r2
 1290 004a FB60     		str	r3, [r7, #12]
 1291              	.LBE25:
 1292 004c 0AE0     		b	.L51
 1293              	.L52:
  96:Src/generated/texts/src/Texts.cpp ****         }
  97:Src/generated/texts/src/Texts.cpp ****         else
  98:Src/generated/texts/src/Texts.cpp ****         {
  99:Src/generated/texts/src/Texts.cpp ****             //compiled and linked in languages
 100:Src/generated/texts/src/Texts.cpp ****             currentLanguagePtr = texts_all_languages;
 1294              		.loc 3 100 32
 1295 004e 114B     		ldr	r3, .L55+4
 1296 0050 124A     		ldr	r2, .L55+12
 1297 0052 1A60     		str	r2, [r3]
 101:Src/generated/texts/src/Texts.cpp ****             currentLanguageIndices = staticLanguageIndices[id];
 1298              		.loc 3 101 62
 1299 0054 0022     		movs	r2, #0
 1300              		.loc 3 101 36
 1301 0056 104B     		ldr	r3, .L55+8
 1302 0058 1A60     		str	r2, [r3]
 102:Src/generated/texts/src/Texts.cpp ****             currentLanguageTypedText = typedTextDatabaseArray[id];
 1303              		.loc 3 102 63
 1304 005a FB88     		ldrh	r3, [r7, #6]
 1305              		.loc 3 102 38
 1306 005c 104A     		ldr	r2, .L55+16
 1307 005e 52F82330 		ldr	r3, [r2, r3, lsl #2]
 1308 0062 FB60     		str	r3, [r7, #12]
 1309              	.L51:
 1310              	.LBE24:
 1311              	.LBE23:
 1312              	.LBE22:
 103:Src/generated/texts/src/Texts.cpp ****         }
 104:Src/generated/texts/src/Texts.cpp ****     }
 105:Src/generated/texts/src/Texts.cpp **** 
 106:Src/generated/texts/src/Texts.cpp ****     if (currentLanguageTypedText)
 1313              		.loc 3 106 5
 1314 0064 FB68     		ldr	r3, [r7, #12]
 1315 0066 002B     		cmp	r3, #0
 1316 0068 0DD0     		beq	.L54
 107:Src/generated/texts/src/Texts.cpp ****     {
 108:Src/generated/texts/src/Texts.cpp ****         currentLanguage = id;
 1317              		.loc 3 108 25
 1318 006a 0E4A     		ldr	r2, .L55+20
 1319 006c FB88     		ldrh	r3, [r7, #6]	@ movhi
 1320 006e 1380     		strh	r3, [r2]	@ movhi
 109:Src/generated/texts/src/Texts.cpp ****         touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
 110:Src/generated/texts/src/Texts.cpp ****                                                        TypedTextDatabase::getFonts(), TypedTextData
 1321              		.loc 3 110 83
 1322 0070 FFF7FEFF 		bl	_ZN17TypedTextDatabase8getFontsEv
 1323 0074 0446     		mov	r4, r0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 41


 109:Src/generated/texts/src/Texts.cpp ****         touchgfx::TypedText::registerTypedTextDatabase(currentLanguageTypedText,
 1324              		.loc 3 109 55
 1325 0076 FFF7FEFF 		bl	_ZN17TypedTextDatabase15getInstanceSizeEv
 1326 007a 0346     		mov	r3, r0
 1327 007c 1A46     		mov	r2, r3
 1328 007e 2146     		mov	r1, r4
 1329 0080 F868     		ldr	r0, [r7, #12]
 1330 0082 FFF7FEFF 		bl	_ZN8touchgfx9TypedText25registerTypedTextDatabaseEPKNS0_13TypedTextDataEPKPKNS_4FontEt
 1331              	.L54:
 111:Src/generated/texts/src/Texts.cpp ****     }
 112:Src/generated/texts/src/Texts.cpp **** }
 1332              		.loc 3 112 1
 1333 0086 00BF     		nop
 1334 0088 1437     		adds	r7, r7, #20
 1335              	.LCFI99:
 1336              		.cfi_def_cfa_offset 12
 1337 008a BD46     		mov	sp, r7
 1338              	.LCFI100:
 1339              		.cfi_def_cfa_register 13
 1340              		@ sp needed
 1341 008c 90BD     		pop	{r4, r7, pc}
 1342              	.L56:
 1343 008e 00BF     		.align	2
 1344              	.L55:
 1345 0090 00000000 		.word	_ZL14languagesArray
 1346 0094 00000000 		.word	_ZL18currentLanguagePtr
 1347 0098 00000000 		.word	_ZL22currentLanguageIndices
 1348 009c 00000000 		.word	texts_all_languages
 1349 00a0 00000000 		.word	typedTextDatabaseArray
 1350 00a4 00000000 		.word	_ZN8touchgfx5Texts15currentLanguageE
 1351              		.cfi_endproc
 1352              	.LFE385:
 1354              		.section	.text._ZN8touchgfx5Texts14setTranslationEtPKv,"ax",%progbits
 1355              		.align	1
 1356              		.global	_ZN8touchgfx5Texts14setTranslationEtPKv
 1357              		.syntax unified
 1358              		.thumb
 1359              		.thumb_func
 1360              		.fpu fpv4-sp-d16
 1362              	_ZN8touchgfx5Texts14setTranslationEtPKv:
 1363              	.LFB386:
 113:Src/generated/texts/src/Texts.cpp **** 
 114:Src/generated/texts/src/Texts.cpp **** void touchgfx::Texts::setTranslation(touchgfx::LanguageId id, const void* translation)
 115:Src/generated/texts/src/Texts.cpp **** {
 1364              		.loc 3 115 1
 1365              		.cfi_startproc
 1366              		@ args = 0, pretend = 0, frame = 8
 1367              		@ frame_needed = 1, uses_anonymous_args = 0
 1368              		@ link register save eliminated.
 1369 0000 80B4     		push	{r7}
 1370              	.LCFI101:
 1371              		.cfi_def_cfa_offset 4
 1372              		.cfi_offset 7, -4
 1373 0002 83B0     		sub	sp, sp, #12
 1374              	.LCFI102:
 1375              		.cfi_def_cfa_offset 16
 1376 0004 00AF     		add	r7, sp, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 42


 1377              	.LCFI103:
 1378              		.cfi_def_cfa_register 7
 1379 0006 0346     		mov	r3, r0
 1380 0008 3960     		str	r1, [r7]
 1381 000a FB80     		strh	r3, [r7, #6]	@ movhi
 116:Src/generated/texts/src/Texts.cpp ****     languagesArray[id] = (const TranslationHeader*)translation;
 1382              		.loc 3 116 20
 1383 000c FB88     		ldrh	r3, [r7, #6]
 1384              		.loc 3 116 24
 1385 000e 0549     		ldr	r1, .L58
 1386 0010 3A68     		ldr	r2, [r7]
 1387 0012 41F82320 		str	r2, [r1, r3, lsl #2]
 117:Src/generated/texts/src/Texts.cpp **** }
 1388              		.loc 3 117 1
 1389 0016 00BF     		nop
 1390 0018 0C37     		adds	r7, r7, #12
 1391              	.LCFI104:
 1392              		.cfi_def_cfa_offset 4
 1393 001a BD46     		mov	sp, r7
 1394              	.LCFI105:
 1395              		.cfi_def_cfa_register 13
 1396              		@ sp needed
 1397 001c 5DF8047B 		ldr	r7, [sp], #4
 1398              	.LCFI106:
 1399              		.cfi_restore 7
 1400              		.cfi_def_cfa_offset 0
 1401 0020 7047     		bx	lr
 1402              	.L59:
 1403 0022 00BF     		.align	2
 1404              	.L58:
 1405 0024 00000000 		.word	_ZL14languagesArray
 1406              		.cfi_endproc
 1407              	.LFE386:
 1409              		.section	.text._ZNK8touchgfx5Texts7getTextEt,"ax",%progbits
 1410              		.align	1
 1411              		.global	_ZNK8touchgfx5Texts7getTextEt
 1412              		.syntax unified
 1413              		.thumb
 1414              		.thumb_func
 1415              		.fpu fpv4-sp-d16
 1417              	_ZNK8touchgfx5Texts7getTextEt:
 1418              	.LFB387:
 118:Src/generated/texts/src/Texts.cpp **** 
 119:Src/generated/texts/src/Texts.cpp **** const touchgfx::Unicode::UnicodeChar* touchgfx::Texts::getText(TypedTextId id) const
 120:Src/generated/texts/src/Texts.cpp **** {
 1419              		.loc 3 120 1
 1420              		.cfi_startproc
 1421              		@ args = 0, pretend = 0, frame = 8
 1422              		@ frame_needed = 1, uses_anonymous_args = 0
 1423              		@ link register save eliminated.
 1424 0000 80B4     		push	{r7}
 1425              	.LCFI107:
 1426              		.cfi_def_cfa_offset 4
 1427              		.cfi_offset 7, -4
 1428 0002 83B0     		sub	sp, sp, #12
 1429              	.LCFI108:
 1430              		.cfi_def_cfa_offset 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 43


 1431 0004 00AF     		add	r7, sp, #0
 1432              	.LCFI109:
 1433              		.cfi_def_cfa_register 7
 1434 0006 7860     		str	r0, [r7, #4]
 1435 0008 0B46     		mov	r3, r1
 1436 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 121:Src/generated/texts/src/Texts.cpp ****     return &currentLanguagePtr[currentLanguageIndices[id]];
 1437              		.loc 3 121 12
 1438 000c 074B     		ldr	r3, .L62
 1439 000e 1A68     		ldr	r2, [r3]
 1440              		.loc 3 121 57
 1441 0010 074B     		ldr	r3, .L62+4
 1442 0012 1968     		ldr	r1, [r3]
 1443              		.loc 3 121 55
 1444 0014 7B88     		ldrh	r3, [r7, #2]
 1445              		.loc 3 121 57
 1446 0016 9B00     		lsls	r3, r3, #2
 1447 0018 0B44     		add	r3, r3, r1
 1448 001a 1B68     		ldr	r3, [r3]
 1449              		.loc 3 121 58
 1450 001c 5B00     		lsls	r3, r3, #1
 1451 001e 1344     		add	r3, r3, r2
 122:Src/generated/texts/src/Texts.cpp **** }
 1452              		.loc 3 122 1
 1453 0020 1846     		mov	r0, r3
 1454 0022 0C37     		adds	r7, r7, #12
 1455              	.LCFI110:
 1456              		.cfi_def_cfa_offset 4
 1457 0024 BD46     		mov	sp, r7
 1458              	.LCFI111:
 1459              		.cfi_def_cfa_register 13
 1460              		@ sp needed
 1461 0026 5DF8047B 		ldr	r7, [sp], #4
 1462              	.LCFI112:
 1463              		.cfi_restore 7
 1464              		.cfi_def_cfa_offset 0
 1465 002a 7047     		bx	lr
 1466              	.L63:
 1467              		.align	2
 1468              	.L62:
 1469 002c 00000000 		.word	_ZL18currentLanguagePtr
 1470 0030 00000000 		.word	_ZL22currentLanguageIndices
 1471              		.cfi_endproc
 1472              	.LFE387:
 1474              		.global	_ZTVN8touchgfx4FontE
 1475              		.section	.rodata._ZTVN8touchgfx4FontE,"a"
 1476              		.align	2
 1479              	_ZTVN8touchgfx4FontE:
 1480 0000 00000000 		.word	0
 1481 0004 00000000 		.word	0
 1482 0008 00000000 		.word	0
 1483 000c 00000000 		.word	0
 1484 0010 00000000 		.word	__cxa_pure_virtual
 1485 0014 00000000 		.word	_ZNK8touchgfx4Font8getGlyphEt
 1486 0018 00000000 		.word	_ZNK8touchgfx4Font15getFallbackCharEv
 1487 001c 00000000 		.word	_ZNK8touchgfx4Font15getEllipsisCharEv
 1488 0020 00000000 		.word	_ZNK8touchgfx4Font14getStringWidthEPKtz
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 44


 1489 0024 00000000 		.word	_ZNK8touchgfx4Font14getStringWidthEhPKtz
 1490 0028 00000000 		.word	_ZNK8touchgfx4Font12getCharWidthEt
 1491 002c 00000000 		.word	_ZNK8touchgfx4Font15getSpacingAboveEPKtz
 1492 0030 00000000 		.word	_ZNK8touchgfx4Font16getMaxTextHeightEPKtz
 1493 0034 00000000 		.word	_ZNK8touchgfx4Font13getFontHeightEv
 1494 0038 00000000 		.word	_ZNK8touchgfx4Font20getMinimumTextHeightEv
 1495 003c 00000000 		.word	_ZNK8touchgfx4Font15getBitsPerPixelEv
 1496 0040 00000000 		.word	_ZNK8touchgfx4Font15getByteAlignRowEv
 1497 0044 00000000 		.word	_ZNK8touchgfx4Font10getKerningEtPKNS_9GlyphNodeE
 1498 0048 00000000 		.word	_ZNK8touchgfx4Font16getNumberOfLinesEPKtz
 1499 004c 00000000 		.word	_ZNK8touchgfx4Font12getGSUBTableEv
 1500 0050 00000000 		.word	_ZNK8touchgfx4Font23getContextualFormsTableEv
 1501              		.text
 1502              	.Letext0:
 1503              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/i
 1504              		.file 6 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 1505              		.file 7 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 1506              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 1507              		.file 9 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 1508              		.file 10 "Middlewares/ST/touchgfx/framework/include/touchgfx/Texts.hpp"
 1509              		.file 11 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 1510              		.file 12 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextureMapTypes.hpp"
 1511              		.file 13 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp"
 1512              		.file 14 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1513              		.file 15 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1514              		.file 16 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/sig
 1515              		.file 17 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/signal.
 1516              		.file 18 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 45


DEFINED SYMBOLS
                            *ABS*:0000000000000000 Texts.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:79     .text._ZNK8touchgfx4Font8getGlyphEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:87     .text._ZNK8touchgfx4Font8getGlyphEt:0000000000000000 _ZNK8touchgfx4Font8getGlyphEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:153    .text._ZNK8touchgfx4Font15getFallbackCharEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:160    .text._ZNK8touchgfx4Font15getFallbackCharEv:0000000000000000 _ZNK8touchgfx4Font15getFallbackCharEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:199    .text._ZNK8touchgfx4Font15getEllipsisCharEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:206    .text._ZNK8touchgfx4Font15getEllipsisCharEv:0000000000000000 _ZNK8touchgfx4Font15getEllipsisCharEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:245    .text._ZNK8touchgfx4Font13getFontHeightEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:252    .text._ZNK8touchgfx4Font13getFontHeightEv:0000000000000000 _ZNK8touchgfx4Font13getFontHeightEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:291    .text._ZNK8touchgfx4Font20getMinimumTextHeightEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:298    .text._ZNK8touchgfx4Font20getMinimumTextHeightEv:0000000000000000 _ZNK8touchgfx4Font20getMinimumTextHeightEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:343    .text._ZNK8touchgfx4Font15getBitsPerPixelEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:350    .text._ZNK8touchgfx4Font15getBitsPerPixelEv:0000000000000000 _ZNK8touchgfx4Font15getBitsPerPixelEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:391    .text._ZNK8touchgfx4Font15getByteAlignRowEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:398    .text._ZNK8touchgfx4Font15getByteAlignRowEv:0000000000000000 _ZNK8touchgfx4Font15getByteAlignRowEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:439    .text._ZNK8touchgfx4Font10getKerningEtPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:446    .text._ZNK8touchgfx4Font10getKerningEtPKNS_9GlyphNodeE:0000000000000000 _ZNK8touchgfx4Font10getKerningEtPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:487    .text._ZNK8touchgfx4Font12getGSUBTableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:494    .text._ZNK8touchgfx4Font12getGSUBTableEv:0000000000000000 _ZNK8touchgfx4Font12getGSUBTableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:532    .text._ZNK8touchgfx4Font23getContextualFormsTableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:539    .text._ZNK8touchgfx4Font23getContextualFormsTableEv:0000000000000000 _ZNK8touchgfx4Font23getContextualFormsTableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:577    .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:580    .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 _ZN8touchgfxL18TYPED_TEXT_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:583    .text._ZN8touchgfx9TypedText25registerTypedTextDatabaseEPKNS0_13TypedTextDataEPKPKNS_4FontEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:590    .text._ZN8touchgfx9TypedText25registerTypedTextDatabaseEPKNS0_13TypedTextDataEPKPKNS_4FontEt:0000000000000000 _ZN8touchgfx9TypedText25registerTypedTextDatabaseEPKNS0_13TypedTextDataEPKPKNS_4FontEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:641    .text._ZN8touchgfx9TypedText25registerTypedTextDatabaseEPKNS0_13TypedTextDataEPKPKNS_4FontEt:000000000000002c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:648    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:651    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:654    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:657    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:660    .text._ZNK8touchgfx4Font14getStringWidthEPKtz:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:667    .text._ZNK8touchgfx4Font14getStringWidthEPKtz:0000000000000000 _ZNK8touchgfx4Font14getStringWidthEPKtz
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:730    .text._ZNK8touchgfx4Font14getStringWidthEhPKtz:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:737    .text._ZNK8touchgfx4Font14getStringWidthEhPKtz:0000000000000000 _ZNK8touchgfx4Font14getStringWidthEhPKtz
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:799    .rodata:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:832    .text._ZN8touchgfx12TextProvider15getNextLigatureEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:839    .text._ZN8touchgfx12TextProvider15getNextLigatureEh:0000000000000000 _ZN8touchgfx12TextProvider15getNextLigatureEh
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 46


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1068   .text._ZN8touchgfx12TextProvider15getNextLigatureEh:0000000000000130 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1079   .text._ZN8touchgfx12TextProvider18initializeInternalEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1086   .text._ZN8touchgfx12TextProvider18initializeInternalEv:0000000000000000 _ZN8touchgfx12TextProvider18initializeInternalEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1121   .text._ZN8touchgfx3LCD10drawStringENS_4RectERKS1_RKNS0_13StringVisualsEPKtz:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1128   .text._ZN8touchgfx3LCD10drawStringENS_4RectERKS1_RKNS0_13StringVisualsEPKtz:0000000000000000 _ZN8touchgfx3LCD10drawStringENS_4RectERKS1_RKNS0_13StringVisualsEPKtz
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1180   TextFlashSection:0000000000000000 texts_all_languages
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1177   TextFlashSection:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1183   .bss._ZL14languagesArray:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1186   .bss._ZL14languagesArray:0000000000000000 _ZL14languagesArray
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1189   .rodata._ZL21staticLanguageIndices:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1192   .rodata._ZL21staticLanguageIndices:0000000000000000 _ZL21staticLanguageIndices
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1199   .bss._ZN8touchgfx5Texts15currentLanguageE:0000000000000000 _ZN8touchgfx5Texts15currentLanguageE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1196   .bss._ZN8touchgfx5Texts15currentLanguageE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1202   .bss._ZL18currentLanguagePtr:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1205   .bss._ZL18currentLanguagePtr:0000000000000000 _ZL18currentLanguagePtr
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1208   .bss._ZL22currentLanguageIndices:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1211   .bss._ZL22currentLanguageIndices:0000000000000000 _ZL22currentLanguageIndices
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1214   .text._ZN8touchgfx5Texts11setLanguageEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1221   .text._ZN8touchgfx5Texts11setLanguageEt:0000000000000000 _ZN8touchgfx5Texts11setLanguageEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1345   .text._ZN8touchgfx5Texts11setLanguageEt:0000000000000090 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1355   .text._ZN8touchgfx5Texts14setTranslationEtPKv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1362   .text._ZN8touchgfx5Texts14setTranslationEtPKv:0000000000000000 _ZN8touchgfx5Texts14setTranslationEtPKv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1405   .text._ZN8touchgfx5Texts14setTranslationEtPKv:0000000000000024 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1410   .text._ZNK8touchgfx5Texts7getTextEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1417   .text._ZNK8touchgfx5Texts7getTextEt:0000000000000000 _ZNK8touchgfx5Texts7getTextEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1469   .text._ZNK8touchgfx5Texts7getTextEt:000000000000002c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1479   .rodata._ZTVN8touchgfx4FontE:0000000000000000 _ZTVN8touchgfx4FontE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s:1476   .rodata._ZTVN8touchgfx4FontE:0000000000000000 $d
                           .group:0000000000000000 wm4.0.8f82b9771446a4c5d395a560643408f9
                           .group:0000000000000000 wm4.stdarg.h.31.b55da1089056868966f25de5dbfc7d3c
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
                           .group:0000000000000000 wm4.cconfig.h.31.9a7f23fec851cb698f0e4b12b5a812df
                           .group:0000000000000000 wm4.cpu_defines.h.31.bf53b50a3b7882b34c717ebded187478
                           .group:0000000000000000 wm4.cconfig.h.530.716755664a180b5214d4137991428173
                           .group:0000000000000000 wm4.stddef.h.39.cdc2cef840622b974aa19abcc0caae93
                           .group:0000000000000000 wm4.cdefs.h.49.6cb61cdf7b446f131d08825667c792f6
                           .group:0000000000000000 wm4.types.h.40.8b6acba56cefbb11746718204edc8f5e
                           .group:0000000000000000 wm4._types.h.20.dd0d04dca3800a0d2a6129b87f3adbb2
                           .group:0000000000000000 wm4.stddef.h.155.7076294d263a8c080378a0849fe2c570
                           .group:0000000000000000 wm4._types.h.127.34941de1b2539d59d5cac00e0dd27a45
                           .group:0000000000000000 wm4._endian.h.31.65a10590763c3dde1ac4a7f66d7d4891
                           .group:0000000000000000 wm4.endian.h.9.49f3a4695c1b61e8a0808de3c4a106cb
                           .group:0000000000000000 wm4._timeval.h.32.bec3221fa7a9bb0bdde696c9c57e47d2
                           .group:0000000000000000 wm4.timespec.h.41.d855182eb0e690443ab8651bcedca6e1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccEePVBF.s 			page 47


                           .group:0000000000000000 wm4.select.h.19.97ca6fd0c752a0f3b6719fd314d361e6
                           .group:0000000000000000 wm4.types.h.51.5571ec98f267d17d3c670b7a3ba33afa
                           .group:0000000000000000 wm4.sched.h.22.c60982713a5c428609783c78f9c78d95
                           .group:0000000000000000 wm4._pthreadtypes.h.36.fcee9961c35163dde6267ef772ad1972
                           .group:0000000000000000 wm4.signal.h.30.5277b477a5ebb7d1254c1af3095d1011
                           .group:0000000000000000 wm4.signal.h.18.14c8d0c03fc1e06775633fad7399cfc7
                           .group:0000000000000000 wm4.csignal.45.00534e27a59328df5aaaf458020a025c

UNDEFINED SYMBOLS
_ZN8touchgfx9TypedText10typedTextsE
_ZN8touchgfx9TypedText5fontsE
_ZN8touchgfx9TypedText18numberOfTypedTextsE
_ZNK8touchgfx4Font17getStringWidthLTREhPKtSt9__va_list
__assert_func
_ZN8touchgfx12TextProvider16substituteGlyphsEv
_ZN8touchgfx12TextProvider11getNextCharEv
_ZN8touchgfx12TextProvider15fillInputBufferEv
_ZN8touchgfx3LCD13drawStringLTRERKNS_4RectES3_RKNS0_13StringVisualsEPKtSt9__va_list
_ZN17TypedTextDatabase8getFontsEv
_ZN17TypedTextDatabase15getInstanceSizeEv
typedTextDatabaseArray
__cxa_pure_virtual
_ZNK8touchgfx4Font12getCharWidthEt
_ZNK8touchgfx4Font15getSpacingAboveEPKtz
_ZNK8touchgfx4Font16getMaxTextHeightEPKtz
_ZNK8touchgfx4Font16getNumberOfLinesEPKtz
