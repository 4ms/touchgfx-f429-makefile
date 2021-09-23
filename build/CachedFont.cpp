ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 1


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
  13              		.file	"CachedFont.cpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 2


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 3


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 4


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 5


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 6


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 7


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 8


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 9


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 10


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 11


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 12


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 13


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 14


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 15


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
 539              		.section	.rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE,"a"
 540              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 16


 543              	_ZN8touchgfxL18TYPED_TEXT_INVALIDE:
 544 0000 FFFF     		.short	-1
 545              		.section	.text._ZN8touchgfx9FontCache12getPixelDataEPKNS_9GlyphNodeE,"axG",%progbits,_ZN8touchgfx9
 546              		.align	1
 547              		.weak	_ZN8touchgfx9FontCache12getPixelDataEPKNS_9GlyphNodeE
 548              		.syntax unified
 549              		.thumb
 550              		.thumb_func
 551              		.fpu fpv4-sp-d16
 553              	_ZN8touchgfx9FontCache12getPixelDataEPKNS_9GlyphNodeE:
 554              	.LFB101:
 555              		.file 2 "Src/generated/fonts/include/fonts/FontCache.hpp"
   1:Src/generated/fonts/include/fonts/FontCache.hpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/include/fonts/FontCache.hpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/include/fonts/FontCache.hpp **** 
   4:Src/generated/fonts/include/fonts/FontCache.hpp **** #ifndef TOUCHGFX_FONTCACHE_HPP
   5:Src/generated/fonts/include/fonts/FontCache.hpp **** #define TOUCHGFX_FONTCACHE_HPP
   6:Src/generated/fonts/include/fonts/FontCache.hpp **** 
   7:Src/generated/fonts/include/fonts/FontCache.hpp **** #include <touchgfx/Font.hpp>
   8:Src/generated/fonts/include/fonts/FontCache.hpp **** #include <touchgfx/TypedText.hpp>
   9:Src/generated/fonts/include/fonts/FontCache.hpp **** #include <fonts/ApplicationFontProvider.hpp>
  10:Src/generated/fonts/include/fonts/FontCache.hpp **** 
  11:Src/generated/fonts/include/fonts/FontCache.hpp **** namespace touchgfx
  12:Src/generated/fonts/include/fonts/FontCache.hpp **** {
  13:Src/generated/fonts/include/fonts/FontCache.hpp **** class CachedFont;
  14:Src/generated/fonts/include/fonts/FontCache.hpp **** 
  15:Src/generated/fonts/include/fonts/FontCache.hpp **** class FontDataReader
  16:Src/generated/fonts/include/fonts/FontCache.hpp **** {
  17:Src/generated/fonts/include/fonts/FontCache.hpp **** public:
  18:Src/generated/fonts/include/fonts/FontCache.hpp ****     virtual ~FontDataReader()
  19:Src/generated/fonts/include/fonts/FontCache.hpp ****     {
  20:Src/generated/fonts/include/fonts/FontCache.hpp ****     }
  21:Src/generated/fonts/include/fonts/FontCache.hpp ****     virtual void open() = 0;
  22:Src/generated/fonts/include/fonts/FontCache.hpp ****     virtual void close() = 0;
  23:Src/generated/fonts/include/fonts/FontCache.hpp ****     virtual void setPosition(uint32_t position) = 0;
  24:Src/generated/fonts/include/fonts/FontCache.hpp ****     virtual void readData(void* out, uint32_t numberOfBytes) = 0;
  25:Src/generated/fonts/include/fonts/FontCache.hpp **** };
  26:Src/generated/fonts/include/fonts/FontCache.hpp **** 
  27:Src/generated/fonts/include/fonts/FontCache.hpp **** class FontCache
  28:Src/generated/fonts/include/fonts/FontCache.hpp **** {
  29:Src/generated/fonts/include/fonts/FontCache.hpp **** public:
  30:Src/generated/fonts/include/fonts/FontCache.hpp ****     FontCache();
  31:Src/generated/fonts/include/fonts/FontCache.hpp ****     void setReader(FontDataReader* reader);
  32:Src/generated/fonts/include/fonts/FontCache.hpp ****     void clear(bool keepGsubOrContextTable = false);
  33:Src/generated/fonts/include/fonts/FontCache.hpp ****     void setMemory(uint8_t* memory, uint32_t size);
  34:Src/generated/fonts/include/fonts/FontCache.hpp ****     void initializeCachedFont(TypedText t, CachedFont* font, bool loadGsubOrContextTable = false);
  35:Src/generated/fonts/include/fonts/FontCache.hpp ****     bool cacheString(TypedText t, const Unicode::UnicodeChar* string);
  36:Src/generated/fonts/include/fonts/FontCache.hpp ****     bool cacheLigatures(CachedFont* font, TypedText t, const Unicode::UnicodeChar* string);
  37:Src/generated/fonts/include/fonts/FontCache.hpp **** 
  38:Src/generated/fonts/include/fonts/FontCache.hpp ****     const GlyphNode* getGlyph(Unicode::UnicodeChar unicode, FontId font) const;
  39:Src/generated/fonts/include/fonts/FontCache.hpp ****     uint32_t getMemoryUsage()
  40:Src/generated/fonts/include/fonts/FontCache.hpp ****     {
  41:Src/generated/fonts/include/fonts/FontCache.hpp ****         return memorySize - (gsubStart - top);
  42:Src/generated/fonts/include/fonts/FontCache.hpp ****     }
  43:Src/generated/fonts/include/fonts/FontCache.hpp **** 
  44:Src/generated/fonts/include/fonts/FontCache.hpp ****     void open();
  45:Src/generated/fonts/include/fonts/FontCache.hpp ****     void close();
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 17


  46:Src/generated/fonts/include/fonts/FontCache.hpp **** 
  47:Src/generated/fonts/include/fonts/FontCache.hpp ****     static inline const uint8_t* getPixelData(const GlyphNode* glyph)
 556              		.loc 2 47 34
 557              		.cfi_startproc
 558              		@ args = 0, pretend = 0, frame = 8
 559              		@ frame_needed = 1, uses_anonymous_args = 0
 560              		@ link register save eliminated.
 561 0000 80B4     		push	{r7}
 562              	.LCFI52:
 563              		.cfi_def_cfa_offset 4
 564              		.cfi_offset 7, -4
 565 0002 83B0     		sub	sp, sp, #12
 566              	.LCFI53:
 567              		.cfi_def_cfa_offset 16
 568 0004 00AF     		add	r7, sp, #0
 569              	.LCFI54:
 570              		.cfi_def_cfa_register 7
 571 0006 7860     		str	r0, [r7, #4]
  48:Src/generated/fonts/include/fonts/FontCache.hpp ****     {
  49:Src/generated/fonts/include/fonts/FontCache.hpp ****         return ((const uint8_t*)glyph) + SizeGlyphNode + 4;
 572              		.loc 2 49 58
 573 0008 7B68     		ldr	r3, [r7, #4]
 574 000a 1433     		adds	r3, r3, #20
  50:Src/generated/fonts/include/fonts/FontCache.hpp ****     }
 575              		.loc 2 50 5
 576 000c 1846     		mov	r0, r3
 577 000e 0C37     		adds	r7, r7, #12
 578              	.LCFI55:
 579              		.cfi_def_cfa_offset 4
 580 0010 BD46     		mov	sp, r7
 581              	.LCFI56:
 582              		.cfi_def_cfa_register 13
 583              		@ sp needed
 584 0012 5DF8047B 		ldr	r7, [sp], #4
 585              	.LCFI57:
 586              		.cfi_restore 7
 587              		.cfi_def_cfa_offset 0
 588 0016 7047     		bx	lr
 589              		.cfi_endproc
 590              	.LFE101:
 592              		.section	.text._ZN8touchgfx9FontCache8isCachedEPKNS_9GlyphNodeE,"axG",%progbits,_ZN8touchgfx9FontC
 593              		.align	1
 594              		.weak	_ZN8touchgfx9FontCache8isCachedEPKNS_9GlyphNodeE
 595              		.syntax unified
 596              		.thumb
 597              		.thumb_func
 598              		.fpu fpv4-sp-d16
 600              	_ZN8touchgfx9FontCache8isCachedEPKNS_9GlyphNodeE:
 601              	.LFB102:
  51:Src/generated/fonts/include/fonts/FontCache.hpp ****     static inline bool isCached(const GlyphNode* g)
 602              		.loc 2 51 24
 603              		.cfi_startproc
 604              		@ args = 0, pretend = 0, frame = 8
 605              		@ frame_needed = 1, uses_anonymous_args = 0
 606              		@ link register save eliminated.
 607 0000 80B4     		push	{r7}
 608              	.LCFI58:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 18


 609              		.cfi_def_cfa_offset 4
 610              		.cfi_offset 7, -4
 611 0002 83B0     		sub	sp, sp, #12
 612              	.LCFI59:
 613              		.cfi_def_cfa_offset 16
 614 0004 00AF     		add	r7, sp, #0
 615              	.LCFI60:
 616              		.cfi_def_cfa_register 7
 617 0006 7860     		str	r0, [r7, #4]
  52:Src/generated/fonts/include/fonts/FontCache.hpp ****     {
  53:Src/generated/fonts/include/fonts/FontCache.hpp ****         return g->dataOffset == 0xFFFFFFFF;
 618              		.loc 2 53 19
 619 0008 7B68     		ldr	r3, [r7, #4]
 620 000a 1B68     		ldr	r3, [r3]	@ unaligned
 621              		.loc 2 53 33
 622 000c B3F1FF3F 		cmp	r3, #-1
 623 0010 0CBF     		ite	eq
 624 0012 0123     		moveq	r3, #1
 625 0014 0023     		movne	r3, #0
 626 0016 DBB2     		uxtb	r3, r3
  54:Src/generated/fonts/include/fonts/FontCache.hpp ****     }
 627              		.loc 2 54 5
 628 0018 1846     		mov	r0, r3
 629 001a 0C37     		adds	r7, r7, #12
 630              	.LCFI61:
 631              		.cfi_def_cfa_offset 4
 632 001c BD46     		mov	sp, r7
 633              	.LCFI62:
 634              		.cfi_def_cfa_register 13
 635              		@ sp needed
 636 001e 5DF8047B 		ldr	r7, [sp], #4
 637              	.LCFI63:
 638              		.cfi_restore 7
 639              		.cfi_def_cfa_offset 0
 640 0022 7047     		bx	lr
 641              		.cfi_endproc
 642              	.LFE102:
 644              		.section	.text._ZN8touchgfx9ConstFontD2Ev,"axG",%progbits,_ZN8touchgfx9ConstFontD5Ev,comdat
 645              		.align	1
 646              		.weak	_ZN8touchgfx9ConstFontD2Ev
 647              		.syntax unified
 648              		.thumb
 649              		.thumb_func
 650              		.fpu fpv4-sp-d16
 652              	_ZN8touchgfx9ConstFontD2Ev:
 653              	.LFB110:
 654              		.file 3 "Middlewares/ST/touchgfx/framework/include/touchgfx/ConstFont.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 19


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
 655              		.loc 3 35 7
 656              		.cfi_startproc
 657              		@ args = 0, pretend = 0, frame = 8
 658              		@ frame_needed = 1, uses_anonymous_args = 0
 659 0000 80B5     		push	{r7, lr}
 660              	.LCFI64:
 661              		.cfi_def_cfa_offset 8
 662              		.cfi_offset 7, -8
 663              		.cfi_offset 14, -4
 664 0002 82B0     		sub	sp, sp, #8
 665              	.LCFI65:
 666              		.cfi_def_cfa_offset 16
 667 0004 00AF     		add	r7, sp, #0
 668              	.LCFI66:
 669              		.cfi_def_cfa_register 7
 670 0006 7860     		str	r0, [r7, #4]
 671              	.LBB3:
 672              		.loc 3 35 7
 673 0008 054A     		ldr	r2, .L29
 674 000a 7B68     		ldr	r3, [r7, #4]
 675 000c 1A60     		str	r2, [r3]
 676 000e 7B68     		ldr	r3, [r7, #4]
 677 0010 1846     		mov	r0, r3
 678 0012 FFF7FEFF 		bl	_ZN8touchgfx4FontD2Ev
 679              	.LBE3:
 680 0016 7B68     		ldr	r3, [r7, #4]
 681 0018 1846     		mov	r0, r3
 682 001a 0837     		adds	r7, r7, #8
 683              	.LCFI67:
 684              		.cfi_def_cfa_offset 8
 685 001c BD46     		mov	sp, r7
 686              	.LCFI68:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 20


 687              		.cfi_def_cfa_register 13
 688              		@ sp needed
 689 001e 80BD     		pop	{r7, pc}
 690              	.L30:
 691              		.align	2
 692              	.L29:
 693 0020 08000000 		.word	_ZTVN8touchgfx9ConstFontE+8
 694              		.cfi_endproc
 695              	.LFE110:
 697              		.weak	_ZN8touchgfx9ConstFontD1Ev
 698              		.thumb_set _ZN8touchgfx9ConstFontD1Ev,_ZN8touchgfx9ConstFontD2Ev
 699              		.section	.text._ZN8touchgfx9ConstFontD0Ev,"axG",%progbits,_ZN8touchgfx9ConstFontD5Ev,comdat
 700              		.align	1
 701              		.weak	_ZN8touchgfx9ConstFontD0Ev
 702              		.syntax unified
 703              		.thumb
 704              		.thumb_func
 705              		.fpu fpv4-sp-d16
 707              	_ZN8touchgfx9ConstFontD0Ev:
 708              	.LFB112:
 709              		.loc 3 35 7
 710              		.cfi_startproc
 711              		@ args = 0, pretend = 0, frame = 8
 712              		@ frame_needed = 1, uses_anonymous_args = 0
 713 0000 80B5     		push	{r7, lr}
 714              	.LCFI69:
 715              		.cfi_def_cfa_offset 8
 716              		.cfi_offset 7, -8
 717              		.cfi_offset 14, -4
 718 0002 82B0     		sub	sp, sp, #8
 719              	.LCFI70:
 720              		.cfi_def_cfa_offset 16
 721 0004 00AF     		add	r7, sp, #0
 722              	.LCFI71:
 723              		.cfi_def_cfa_register 7
 724 0006 7860     		str	r0, [r7, #4]
 725              		.loc 3 35 7
 726 0008 7868     		ldr	r0, [r7, #4]
 727 000a FFF7FEFF 		bl	_ZN8touchgfx9ConstFontD1Ev
 728 000e 1821     		movs	r1, #24
 729 0010 7868     		ldr	r0, [r7, #4]
 730 0012 FFF7FEFF 		bl	_ZdlPvj
 731 0016 7B68     		ldr	r3, [r7, #4]
 732 0018 1846     		mov	r0, r3
 733 001a 0837     		adds	r7, r7, #8
 734              	.LCFI72:
 735              		.cfi_def_cfa_offset 8
 736 001c BD46     		mov	sp, r7
 737              	.LCFI73:
 738              		.cfi_def_cfa_register 13
 739              		@ sp needed
 740 001e 80BD     		pop	{r7, pc}
 741              		.cfi_endproc
 742              	.LFE112:
 744              		.section	.text._ZN8touchgfx13GeneratedFontD2Ev,"axG",%progbits,_ZN8touchgfx13GeneratedFontD5Ev,com
 745              		.align	1
 746              		.weak	_ZN8touchgfx13GeneratedFontD2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 21


 747              		.syntax unified
 748              		.thumb
 749              		.thumb_func
 750              		.fpu fpv4-sp-d16
 752              	_ZN8touchgfx13GeneratedFontD2Ev:
 753              	.LFB117:
 754              		.file 4 "Src/generated/fonts/include/fonts/GeneratedFont.hpp"
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
 755              		.loc 4 17 7
 756              		.cfi_startproc
 757              		@ args = 0, pretend = 0, frame = 8
 758              		@ frame_needed = 1, uses_anonymous_args = 0
 759 0000 80B5     		push	{r7, lr}
 760              	.LCFI74:
 761              		.cfi_def_cfa_offset 8
 762              		.cfi_offset 7, -8
 763              		.cfi_offset 14, -4
 764 0002 82B0     		sub	sp, sp, #8
 765              	.LCFI75:
 766              		.cfi_def_cfa_offset 16
 767 0004 00AF     		add	r7, sp, #0
 768              	.LCFI76:
 769              		.cfi_def_cfa_register 7
 770 0006 7860     		str	r0, [r7, #4]
 771              	.LBB4:
 772              		.loc 4 17 7
 773 0008 054A     		ldr	r2, .L35
 774 000a 7B68     		ldr	r3, [r7, #4]
 775 000c 1A60     		str	r2, [r3]
 776 000e 7B68     		ldr	r3, [r7, #4]
 777 0010 1846     		mov	r0, r3
 778 0012 FFF7FEFF 		bl	_ZN8touchgfx9ConstFontD2Ev
 779              	.LBE4:
 780 0016 7B68     		ldr	r3, [r7, #4]
 781 0018 1846     		mov	r0, r3
 782 001a 0837     		adds	r7, r7, #8
 783              	.LCFI77:
 784              		.cfi_def_cfa_offset 8
 785 001c BD46     		mov	sp, r7
 786              	.LCFI78:
 787              		.cfi_def_cfa_register 13
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 22


 788              		@ sp needed
 789 001e 80BD     		pop	{r7, pc}
 790              	.L36:
 791              		.align	2
 792              	.L35:
 793 0020 08000000 		.word	_ZTVN8touchgfx13GeneratedFontE+8
 794              		.cfi_endproc
 795              	.LFE117:
 797              		.weak	_ZN8touchgfx13GeneratedFontD1Ev
 798              		.thumb_set _ZN8touchgfx13GeneratedFontD1Ev,_ZN8touchgfx13GeneratedFontD2Ev
 799              		.section	.text._ZN8touchgfx13GeneratedFontD0Ev,"axG",%progbits,_ZN8touchgfx13GeneratedFontD5Ev,com
 800              		.align	1
 801              		.weak	_ZN8touchgfx13GeneratedFontD0Ev
 802              		.syntax unified
 803              		.thumb
 804              		.thumb_func
 805              		.fpu fpv4-sp-d16
 807              	_ZN8touchgfx13GeneratedFontD0Ev:
 808              	.LFB119:
 809              		.loc 4 17 7
 810              		.cfi_startproc
 811              		@ args = 0, pretend = 0, frame = 8
 812              		@ frame_needed = 1, uses_anonymous_args = 0
 813 0000 80B5     		push	{r7, lr}
 814              	.LCFI79:
 815              		.cfi_def_cfa_offset 8
 816              		.cfi_offset 7, -8
 817              		.cfi_offset 14, -4
 818 0002 82B0     		sub	sp, sp, #8
 819              	.LCFI80:
 820              		.cfi_def_cfa_offset 16
 821 0004 00AF     		add	r7, sp, #0
 822              	.LCFI81:
 823              		.cfi_def_cfa_register 7
 824 0006 7860     		str	r0, [r7, #4]
 825              		.loc 4 17 7
 826 0008 7868     		ldr	r0, [r7, #4]
 827 000a FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontD1Ev
 828 000e 2821     		movs	r1, #40
 829 0010 7868     		ldr	r0, [r7, #4]
 830 0012 FFF7FEFF 		bl	_ZdlPvj
 831 0016 7B68     		ldr	r3, [r7, #4]
 832 0018 1846     		mov	r0, r3
 833 001a 0837     		adds	r7, r7, #8
 834              	.LCFI82:
 835              		.cfi_def_cfa_offset 8
 836 001c BD46     		mov	sp, r7
 837              	.LCFI83:
 838              		.cfi_def_cfa_register 13
 839              		@ sp needed
 840 001e 80BD     		pop	{r7, pc}
 841              		.cfi_endproc
 842              	.LFE119:
 844              		.section	.text._ZNK8touchgfx10CachedFont12getGSUBTableEv,"axG",%progbits,_ZNK8touchgfx10CachedFont
 845              		.align	1
 846              		.weak	_ZNK8touchgfx10CachedFont12getGSUBTableEv
 847              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 23


 848              		.thumb
 849              		.thumb_func
 850              		.fpu fpv4-sp-d16
 852              	_ZNK8touchgfx10CachedFont12getGSUBTableEv:
 853              	.LFB134:
 854              		.file 5 "Src/generated/fonts/include/fonts/CachedFont.hpp"
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
  16:Src/generated/fonts/include/fonts/CachedFont.hpp ****         : GeneratedFont(0, //GlyphNode*
  17:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->numberOfGlyphs,
  18:Src/generated/fonts/include/fonts/CachedFont.hpp ****                         data->height,
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
  33:Src/generated/fonts/include/fonts/CachedFont.hpp ****     {
  34:Src/generated/fonts/include/fonts/CachedFont.hpp ****     }
  35:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  36:Src/generated/fonts/include/fonts/CachedFont.hpp ****     CachedFont()
  37:Src/generated/fonts/include/fonts/CachedFont.hpp ****         : GeneratedFont()
  38:Src/generated/fonts/include/fonts/CachedFont.hpp ****     {
  39:Src/generated/fonts/include/fonts/CachedFont.hpp ****     }
  40:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  41:Src/generated/fonts/include/fonts/CachedFont.hpp ****     using GeneratedFont::getGlyph;
  42:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  43:Src/generated/fonts/include/fonts/CachedFont.hpp ****     virtual const GlyphNode* getGlyph(Unicode::UnicodeChar unicode, const uint8_t*& pixelData, uint
  44:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  45:Src/generated/fonts/include/fonts/CachedFont.hpp ****     virtual const uint8_t* getPixelData(const GlyphNode* glyph) const;
  46:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  47:Src/generated/fonts/include/fonts/CachedFont.hpp ****     virtual int8_t getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const;
  48:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  49:Src/generated/fonts/include/fonts/CachedFont.hpp ****     void setFontCache(FontCache& cache);
  50:Src/generated/fonts/include/fonts/CachedFont.hpp ****     FontId getFontId() const
  51:Src/generated/fonts/include/fonts/CachedFont.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 24


  52:Src/generated/fonts/include/fonts/CachedFont.hpp ****         return fontId;
  53:Src/generated/fonts/include/fonts/CachedFont.hpp ****     }
  54:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  55:Src/generated/fonts/include/fonts/CachedFont.hpp ****     virtual const uint16_t* getGSUBTable() const
 855              		.loc 5 55 29
 856              		.cfi_startproc
 857              		@ args = 0, pretend = 0, frame = 8
 858              		@ frame_needed = 1, uses_anonymous_args = 0
 859 0000 80B5     		push	{r7, lr}
 860              	.LCFI84:
 861              		.cfi_def_cfa_offset 8
 862              		.cfi_offset 7, -8
 863              		.cfi_offset 14, -4
 864 0002 82B0     		sub	sp, sp, #8
 865              	.LCFI85:
 866              		.cfi_def_cfa_offset 16
 867 0004 00AF     		add	r7, sp, #0
 868              	.LCFI86:
 869              		.cfi_def_cfa_register 7
 870 0006 7860     		str	r0, [r7, #4]
  56:Src/generated/fonts/include/fonts/CachedFont.hpp ****     {
  57:Src/generated/fonts/include/fonts/CachedFont.hpp ****         if (gsubTable != 0)
 871              		.loc 5 57 13
 872 0008 7B68     		ldr	r3, [r7, #4]
 873 000a 1B6A     		ldr	r3, [r3, #32]
 874              		.loc 5 57 9
 875 000c 002B     		cmp	r3, #0
 876 000e 02D0     		beq	.L40
  58:Src/generated/fonts/include/fonts/CachedFont.hpp ****         {
  59:Src/generated/fonts/include/fonts/CachedFont.hpp ****             return gsubTable;
 877              		.loc 5 59 20
 878 0010 7B68     		ldr	r3, [r7, #4]
 879 0012 1B6A     		ldr	r3, [r3, #32]
 880 0014 0AE0     		b	.L41
 881              	.L40:
  60:Src/generated/fonts/include/fonts/CachedFont.hpp ****         }
  61:Src/generated/fonts/include/fonts/CachedFont.hpp ****         return flashFont->getGSUBTable();
 882              		.loc 5 61 16
 883 0016 7B68     		ldr	r3, [r7, #4]
 884 0018 1A6B     		ldr	r2, [r3, #48]
 885 001a 7B68     		ldr	r3, [r7, #4]
 886 001c 1B6B     		ldr	r3, [r3, #48]
 887              		.loc 5 61 40
 888 001e 1B68     		ldr	r3, [r3]
 889 0020 4433     		adds	r3, r3, #68
 890 0022 1B68     		ldr	r3, [r3]
 891              		.loc 5 61 39
 892 0024 1046     		mov	r0, r2
 893 0026 9847     		blx	r3
 894              	.LVL1:
 895 0028 0346     		mov	r3, r0
 896              		.loc 5 61 40
 897 002a 00BF     		nop
 898              	.L41:
  62:Src/generated/fonts/include/fonts/CachedFont.hpp ****     }
 899              		.loc 5 62 5
 900 002c 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 25


 901 002e 0837     		adds	r7, r7, #8
 902              	.LCFI87:
 903              		.cfi_def_cfa_offset 8
 904 0030 BD46     		mov	sp, r7
 905              	.LCFI88:
 906              		.cfi_def_cfa_register 13
 907              		@ sp needed
 908 0032 80BD     		pop	{r7, pc}
 909              		.cfi_endproc
 910              	.LFE134:
 912              		.section	.text._ZN8touchgfx10CachedFont12setGSUBTableEPKt,"axG",%progbits,_ZN8touchgfx10CachedFont
 913              		.align	1
 914              		.weak	_ZN8touchgfx10CachedFont12setGSUBTableEPKt
 915              		.syntax unified
 916              		.thumb
 917              		.thumb_func
 918              		.fpu fpv4-sp-d16
 920              	_ZN8touchgfx10CachedFont12setGSUBTableEPKt:
 921              	.LFB135:
  63:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  64:Src/generated/fonts/include/fonts/CachedFont.hpp ****     virtual void setGSUBTable(const uint16_t* table)
 922              		.loc 5 64 18
 923              		.cfi_startproc
 924              		@ args = 0, pretend = 0, frame = 8
 925              		@ frame_needed = 1, uses_anonymous_args = 0
 926              		@ link register save eliminated.
 927 0000 80B4     		push	{r7}
 928              	.LCFI89:
 929              		.cfi_def_cfa_offset 4
 930              		.cfi_offset 7, -4
 931 0002 83B0     		sub	sp, sp, #12
 932              	.LCFI90:
 933              		.cfi_def_cfa_offset 16
 934 0004 00AF     		add	r7, sp, #0
 935              	.LCFI91:
 936              		.cfi_def_cfa_register 7
 937 0006 7860     		str	r0, [r7, #4]
 938 0008 3960     		str	r1, [r7]
  65:Src/generated/fonts/include/fonts/CachedFont.hpp ****     {
  66:Src/generated/fonts/include/fonts/CachedFont.hpp ****         gsubTable = table;
 939              		.loc 5 66 19
 940 000a 7B68     		ldr	r3, [r7, #4]
 941 000c 3A68     		ldr	r2, [r7]
 942 000e 1A62     		str	r2, [r3, #32]
  67:Src/generated/fonts/include/fonts/CachedFont.hpp ****     }
 943              		.loc 5 67 5
 944 0010 00BF     		nop
 945 0012 0C37     		adds	r7, r7, #12
 946              	.LCFI92:
 947              		.cfi_def_cfa_offset 4
 948 0014 BD46     		mov	sp, r7
 949              	.LCFI93:
 950              		.cfi_def_cfa_register 13
 951              		@ sp needed
 952 0016 5DF8047B 		ldr	r7, [sp], #4
 953              	.LCFI94:
 954              		.cfi_restore 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 26


 955              		.cfi_def_cfa_offset 0
 956 001a 7047     		bx	lr
 957              		.cfi_endproc
 958              	.LFE135:
 960              		.section	.text._ZNK8touchgfx10CachedFont23getContextualFormsTableEv,"axG",%progbits,_ZNK8touchgfx1
 961              		.align	1
 962              		.weak	_ZNK8touchgfx10CachedFont23getContextualFormsTableEv
 963              		.syntax unified
 964              		.thumb
 965              		.thumb_func
 966              		.fpu fpv4-sp-d16
 968              	_ZNK8touchgfx10CachedFont23getContextualFormsTableEv:
 969              	.LFB136:
  68:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  69:Src/generated/fonts/include/fonts/CachedFont.hpp ****     virtual const FontContextualFormsTable* getContextualFormsTable() const
 970              		.loc 5 69 45
 971              		.cfi_startproc
 972              		@ args = 0, pretend = 0, frame = 8
 973              		@ frame_needed = 1, uses_anonymous_args = 0
 974 0000 80B5     		push	{r7, lr}
 975              	.LCFI95:
 976              		.cfi_def_cfa_offset 8
 977              		.cfi_offset 7, -8
 978              		.cfi_offset 14, -4
 979 0002 82B0     		sub	sp, sp, #8
 980              	.LCFI96:
 981              		.cfi_def_cfa_offset 16
 982 0004 00AF     		add	r7, sp, #0
 983              	.LCFI97:
 984              		.cfi_def_cfa_register 7
 985 0006 7860     		str	r0, [r7, #4]
  70:Src/generated/fonts/include/fonts/CachedFont.hpp ****     {
  71:Src/generated/fonts/include/fonts/CachedFont.hpp ****         if (arabicTable != 0)
 986              		.loc 5 71 13
 987 0008 7B68     		ldr	r3, [r7, #4]
 988 000a 5B6A     		ldr	r3, [r3, #36]
 989              		.loc 5 71 9
 990 000c 002B     		cmp	r3, #0
 991 000e 02D0     		beq	.L44
  72:Src/generated/fonts/include/fonts/CachedFont.hpp ****         {
  73:Src/generated/fonts/include/fonts/CachedFont.hpp ****             return arabicTable;
 992              		.loc 5 73 20
 993 0010 7B68     		ldr	r3, [r7, #4]
 994 0012 5B6A     		ldr	r3, [r3, #36]
 995 0014 0AE0     		b	.L45
 996              	.L44:
  74:Src/generated/fonts/include/fonts/CachedFont.hpp ****         }
  75:Src/generated/fonts/include/fonts/CachedFont.hpp ****         return flashFont->getContextualFormsTable();
 997              		.loc 5 75 16
 998 0016 7B68     		ldr	r3, [r7, #4]
 999 0018 1A6B     		ldr	r2, [r3, #48]
 1000 001a 7B68     		ldr	r3, [r7, #4]
 1001 001c 1B6B     		ldr	r3, [r3, #48]
 1002              		.loc 5 75 51
 1003 001e 1B68     		ldr	r3, [r3]
 1004 0020 4833     		adds	r3, r3, #72
 1005 0022 1B68     		ldr	r3, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 27


 1006              		.loc 5 75 50
 1007 0024 1046     		mov	r0, r2
 1008 0026 9847     		blx	r3
 1009              	.LVL2:
 1010 0028 0346     		mov	r3, r0
 1011              		.loc 5 75 51
 1012 002a 00BF     		nop
 1013              	.L45:
  76:Src/generated/fonts/include/fonts/CachedFont.hpp ****     }
 1014              		.loc 5 76 5
 1015 002c 1846     		mov	r0, r3
 1016 002e 0837     		adds	r7, r7, #8
 1017              	.LCFI98:
 1018              		.cfi_def_cfa_offset 8
 1019 0030 BD46     		mov	sp, r7
 1020              	.LCFI99:
 1021              		.cfi_def_cfa_register 13
 1022              		@ sp needed
 1023 0032 80BD     		pop	{r7, pc}
 1024              		.cfi_endproc
 1025              	.LFE136:
 1027              		.section	.text._ZN8touchgfx10CachedFont23setContextualFormsTableEPKNS_24FontContextualFormsTableE,
 1028              		.align	1
 1029              		.weak	_ZN8touchgfx10CachedFont23setContextualFormsTableEPKNS_24FontContextualFormsTableE
 1030              		.syntax unified
 1031              		.thumb
 1032              		.thumb_func
 1033              		.fpu fpv4-sp-d16
 1035              	_ZN8touchgfx10CachedFont23setContextualFormsTableEPKNS_24FontContextualFormsTableE:
 1036              	.LFB137:
  77:Src/generated/fonts/include/fonts/CachedFont.hpp **** 
  78:Src/generated/fonts/include/fonts/CachedFont.hpp ****     virtual void setContextualFormsTable(const FontContextualFormsTable* table)
 1037              		.loc 5 78 18
 1038              		.cfi_startproc
 1039              		@ args = 0, pretend = 0, frame = 8
 1040              		@ frame_needed = 1, uses_anonymous_args = 0
 1041              		@ link register save eliminated.
 1042 0000 80B4     		push	{r7}
 1043              	.LCFI100:
 1044              		.cfi_def_cfa_offset 4
 1045              		.cfi_offset 7, -4
 1046 0002 83B0     		sub	sp, sp, #12
 1047              	.LCFI101:
 1048              		.cfi_def_cfa_offset 16
 1049 0004 00AF     		add	r7, sp, #0
 1050              	.LCFI102:
 1051              		.cfi_def_cfa_register 7
 1052 0006 7860     		str	r0, [r7, #4]
 1053 0008 3960     		str	r1, [r7]
  79:Src/generated/fonts/include/fonts/CachedFont.hpp ****     {
  80:Src/generated/fonts/include/fonts/CachedFont.hpp ****         arabicTable = table;
 1054              		.loc 5 80 21
 1055 000a 7B68     		ldr	r3, [r7, #4]
 1056 000c 3A68     		ldr	r2, [r7]
 1057 000e 5A62     		str	r2, [r3, #36]
  81:Src/generated/fonts/include/fonts/CachedFont.hpp ****     }
 1058              		.loc 5 81 5
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 28


 1059 0010 00BF     		nop
 1060 0012 0C37     		adds	r7, r7, #12
 1061              	.LCFI103:
 1062              		.cfi_def_cfa_offset 4
 1063 0014 BD46     		mov	sp, r7
 1064              	.LCFI104:
 1065              		.cfi_def_cfa_register 13
 1066              		@ sp needed
 1067 0016 5DF8047B 		ldr	r7, [sp], #4
 1068              	.LCFI105:
 1069              		.cfi_restore 7
 1070              		.cfi_def_cfa_offset 0
 1071 001a 7047     		bx	lr
 1072              		.cfi_endproc
 1073              	.LFE137:
 1075              		.section	.text._ZNK8touchgfx10CachedFont12getPixelDataEPKNS_9GlyphNodeE,"ax",%progbits
 1076              		.align	1
 1077              		.global	_ZNK8touchgfx10CachedFont12getPixelDataEPKNS_9GlyphNodeE
 1078              		.syntax unified
 1079              		.thumb
 1080              		.thumb_func
 1081              		.fpu fpv4-sp-d16
 1083              	_ZNK8touchgfx10CachedFont12getPixelDataEPKNS_9GlyphNodeE:
 1084              	.LFB138:
 1085              		.file 6 "Src/generated/fonts/src/CachedFont.cpp"
   1:Src/generated/fonts/src/CachedFont.cpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/src/CachedFont.cpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/src/CachedFont.cpp **** 
   4:Src/generated/fonts/src/CachedFont.cpp **** #include <fonts/CachedFont.hpp>
   5:Src/generated/fonts/src/CachedFont.cpp **** 
   6:Src/generated/fonts/src/CachedFont.cpp **** namespace touchgfx
   7:Src/generated/fonts/src/CachedFont.cpp **** {
   8:Src/generated/fonts/src/CachedFont.cpp **** const uint8_t* CachedFont::getPixelData(const GlyphNode* glyph) const
   9:Src/generated/fonts/src/CachedFont.cpp **** {
 1086              		.loc 6 9 1
 1087              		.cfi_startproc
 1088              		@ args = 0, pretend = 0, frame = 16
 1089              		@ frame_needed = 1, uses_anonymous_args = 0
 1090 0000 80B5     		push	{r7, lr}
 1091              	.LCFI106:
 1092              		.cfi_def_cfa_offset 8
 1093              		.cfi_offset 7, -8
 1094              		.cfi_offset 14, -4
 1095 0002 84B0     		sub	sp, sp, #16
 1096              	.LCFI107:
 1097              		.cfi_def_cfa_offset 24
 1098 0004 00AF     		add	r7, sp, #0
 1099              	.LCFI108:
 1100              		.cfi_def_cfa_register 7
 1101 0006 7860     		str	r0, [r7, #4]
 1102 0008 3960     		str	r1, [r7]
 1103              	.LBB5:
  10:Src/generated/fonts/src/CachedFont.cpp ****     //if glyph is cached, then data is present just after the GlyphNode
  11:Src/generated/fonts/src/CachedFont.cpp ****     if (FontCache::isCached(glyph))
 1104              		.loc 6 11 28
 1105 000a 3868     		ldr	r0, [r7]
 1106 000c FFF7FEFF 		bl	_ZN8touchgfx9FontCache8isCachedEPKNS_9GlyphNodeE
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 29


 1107 0010 0346     		mov	r3, r0
 1108              		.loc 6 11 5
 1109 0012 002B     		cmp	r3, #0
 1110 0014 05D0     		beq	.L48
 1111              	.LBB6:
  12:Src/generated/fonts/src/CachedFont.cpp ****     {
  13:Src/generated/fonts/src/CachedFont.cpp ****         const uint8_t* data = FontCache::getPixelData(glyph);
 1112              		.loc 6 13 54
 1113 0016 3868     		ldr	r0, [r7]
 1114 0018 FFF7FEFF 		bl	_ZN8touchgfx9FontCache12getPixelDataEPKNS_9GlyphNodeE
 1115 001c F860     		str	r0, [r7, #12]
  14:Src/generated/fonts/src/CachedFont.cpp ****         return data;
 1116              		.loc 6 14 16
 1117 001e FB68     		ldr	r3, [r7, #12]
 1118 0020 0BE0     		b	.L49
 1119              	.L48:
 1120              	.LBE6:
  15:Src/generated/fonts/src/CachedFont.cpp ****     }
  16:Src/generated/fonts/src/CachedFont.cpp ****     else
  17:Src/generated/fonts/src/CachedFont.cpp ****     {
  18:Src/generated/fonts/src/CachedFont.cpp ****         return flashFont->getPixelData(glyph);
 1121              		.loc 6 18 16
 1122 0022 7B68     		ldr	r3, [r7, #4]
 1123 0024 1A6B     		ldr	r2, [r3, #48]
 1124 0026 7B68     		ldr	r3, [r7, #4]
 1125 0028 1B6B     		ldr	r3, [r3, #48]
 1126              		.loc 6 18 45
 1127 002a 1B68     		ldr	r3, [r3]
 1128 002c 4C33     		adds	r3, r3, #76
 1129 002e 1B68     		ldr	r3, [r3]
 1130              		.loc 6 18 39
 1131 0030 3968     		ldr	r1, [r7]
 1132 0032 1046     		mov	r0, r2
 1133 0034 9847     		blx	r3
 1134              	.LVL3:
 1135 0036 0346     		mov	r3, r0
 1136              		.loc 6 18 45
 1137 0038 00BF     		nop
 1138              	.L49:
 1139              	.LBE5:
  19:Src/generated/fonts/src/CachedFont.cpp ****     }
  20:Src/generated/fonts/src/CachedFont.cpp **** }
 1140              		.loc 6 20 1
 1141 003a 1846     		mov	r0, r3
 1142 003c 1037     		adds	r7, r7, #16
 1143              	.LCFI109:
 1144              		.cfi_def_cfa_offset 8
 1145 003e BD46     		mov	sp, r7
 1146              	.LCFI110:
 1147              		.cfi_def_cfa_register 13
 1148              		@ sp needed
 1149 0040 80BD     		pop	{r7, pc}
 1150              		.cfi_endproc
 1151              	.LFE138:
 1153              		.section	.text._ZNK8touchgfx10CachedFont8getGlyphEtRPKhRh,"ax",%progbits
 1154              		.align	1
 1155              		.global	_ZNK8touchgfx10CachedFont8getGlyphEtRPKhRh
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 30


 1156              		.syntax unified
 1157              		.thumb
 1158              		.thumb_func
 1159              		.fpu fpv4-sp-d16
 1161              	_ZNK8touchgfx10CachedFont8getGlyphEtRPKhRh:
 1162              	.LFB139:
  21:Src/generated/fonts/src/CachedFont.cpp **** 
  22:Src/generated/fonts/src/CachedFont.cpp **** const GlyphNode* CachedFont::getGlyph(Unicode::UnicodeChar unicode, const uint8_t*& pixelData, uint
  23:Src/generated/fonts/src/CachedFont.cpp **** {
 1163              		.loc 6 23 1
 1164              		.cfi_startproc
 1165              		@ args = 0, pretend = 0, frame = 24
 1166              		@ frame_needed = 1, uses_anonymous_args = 0
 1167 0000 80B5     		push	{r7, lr}
 1168              	.LCFI111:
 1169              		.cfi_def_cfa_offset 8
 1170              		.cfi_offset 7, -8
 1171              		.cfi_offset 14, -4
 1172 0002 86B0     		sub	sp, sp, #24
 1173              	.LCFI112:
 1174              		.cfi_def_cfa_offset 32
 1175 0004 00AF     		add	r7, sp, #0
 1176              	.LCFI113:
 1177              		.cfi_def_cfa_register 7
 1178 0006 F860     		str	r0, [r7, #12]
 1179 0008 7A60     		str	r2, [r7, #4]
 1180 000a 3B60     		str	r3, [r7]
 1181 000c 0B46     		mov	r3, r1	@ movhi
 1182 000e 7B81     		strh	r3, [r7, #10]	@ movhi
  24:Src/generated/fonts/src/CachedFont.cpp ****     //look first in internal flash font
  25:Src/generated/fonts/src/CachedFont.cpp ****     const GlyphNode* n = flashFont->find(unicode);
 1183              		.loc 6 25 26
 1184 0010 FB68     		ldr	r3, [r7, #12]
 1185 0012 1B6B     		ldr	r3, [r3, #48]
 1186              		.loc 6 25 41
 1187 0014 1A46     		mov	r2, r3
 1188 0016 7B89     		ldrh	r3, [r7, #10]
 1189 0018 1946     		mov	r1, r3
 1190 001a 1046     		mov	r0, r2
 1191 001c FFF7FEFF 		bl	_ZNK8touchgfx9ConstFont4findEt
 1192 0020 7861     		str	r0, [r7, #20]
  26:Src/generated/fonts/src/CachedFont.cpp **** 
  27:Src/generated/fonts/src/CachedFont.cpp ****     if ((n == 0) && (cache != 0))
 1193              		.loc 6 27 5
 1194 0022 7B69     		ldr	r3, [r7, #20]
 1195 0024 002B     		cmp	r3, #0
 1196 0026 0CD1     		bne	.L51
 1197              		.loc 6 27 22 discriminator 1
 1198 0028 FB68     		ldr	r3, [r7, #12]
 1199 002a DB6A     		ldr	r3, [r3, #44]
 1200              		.loc 6 27 18 discriminator 1
 1201 002c 002B     		cmp	r3, #0
 1202 002e 08D0     		beq	.L51
  28:Src/generated/fonts/src/CachedFont.cpp ****     {
  29:Src/generated/fonts/src/CachedFont.cpp ****         //now look in FontCache table
  30:Src/generated/fonts/src/CachedFont.cpp ****         n = cache->getGlyph(unicode, fontId);
 1203              		.loc 6 30 13
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 31


 1204 0030 FB68     		ldr	r3, [r7, #12]
 1205 0032 D86A     		ldr	r0, [r3, #44]
 1206              		.loc 6 30 38
 1207 0034 FB68     		ldr	r3, [r7, #12]
 1208 0036 1A8D     		ldrh	r2, [r3, #40]
 1209              		.loc 6 30 28
 1210 0038 7B89     		ldrh	r3, [r7, #10]
 1211 003a 1946     		mov	r1, r3
 1212 003c FFF7FEFF 		bl	_ZNK8touchgfx9FontCache8getGlyphEtt
 1213 0040 7861     		str	r0, [r7, #20]
 1214              	.L51:
 1215              	.LBB7:
  31:Src/generated/fonts/src/CachedFont.cpp ****     }
  32:Src/generated/fonts/src/CachedFont.cpp **** 
  33:Src/generated/fonts/src/CachedFont.cpp ****     //revert to normal behaviour if still not found
  34:Src/generated/fonts/src/CachedFont.cpp ****     if (n == 0 && unicode != 0 && unicode != '\n')
 1216              		.loc 6 34 5
 1217 0042 7B69     		ldr	r3, [r7, #20]
 1218 0044 002B     		cmp	r3, #0
 1219 0046 26D1     		bne	.L52
 1220              		.loc 6 34 16 discriminator 1
 1221 0048 7B89     		ldrh	r3, [r7, #10]
 1222 004a 002B     		cmp	r3, #0
 1223 004c 23D0     		beq	.L52
 1224              		.loc 6 34 32 discriminator 2
 1225 004e 7B89     		ldrh	r3, [r7, #10]
 1226 0050 0A2B     		cmp	r3, #10
 1227 0052 20D0     		beq	.L52
 1228              	.LBB8:
  35:Src/generated/fonts/src/CachedFont.cpp ****     {
  36:Src/generated/fonts/src/CachedFont.cpp ****         Unicode::UnicodeChar fallbackChar = flashFont->getFallbackChar();
 1229              		.loc 6 36 45
 1230 0054 FB68     		ldr	r3, [r7, #12]
 1231 0056 1B6B     		ldr	r3, [r3, #48]
 1232              		.loc 6 36 71
 1233 0058 1A46     		mov	r2, r3
 1234              		.loc 6 36 45
 1235 005a FB68     		ldr	r3, [r7, #12]
 1236 005c 1B6B     		ldr	r3, [r3, #48]
 1237              		.loc 6 36 72
 1238 005e 1B68     		ldr	r3, [r3]
 1239 0060 1033     		adds	r3, r3, #16
 1240 0062 1B68     		ldr	r3, [r3]
 1241              		.loc 6 36 71
 1242 0064 1046     		mov	r0, r2
 1243 0066 9847     		blx	r3
 1244              	.LVL4:
 1245 0068 0346     		mov	r3, r0
 1246 006a 7B82     		strh	r3, [r7, #18]	@ movhi
  37:Src/generated/fonts/src/CachedFont.cpp ****         n = flashFont->find(fallbackChar);
 1247              		.loc 6 37 13
 1248 006c FB68     		ldr	r3, [r7, #12]
 1249 006e 1B6B     		ldr	r3, [r3, #48]
 1250              		.loc 6 37 28
 1251 0070 1A46     		mov	r2, r3
 1252 0072 7B8A     		ldrh	r3, [r7, #18]
 1253 0074 1946     		mov	r1, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 32


 1254 0076 1046     		mov	r0, r2
 1255 0078 FFF7FEFF 		bl	_ZNK8touchgfx9ConstFont4findEt
 1256 007c 7861     		str	r0, [r7, #20]
  38:Src/generated/fonts/src/CachedFont.cpp ****         if (n == 0)
 1257              		.loc 6 38 9
 1258 007e 7B69     		ldr	r3, [r7, #20]
 1259 0080 002B     		cmp	r3, #0
 1260 0082 08D1     		bne	.L52
  39:Src/generated/fonts/src/CachedFont.cpp ****         {
  40:Src/generated/fonts/src/CachedFont.cpp ****             n = cache->getGlyph(fallbackChar, fontId);
 1261              		.loc 6 40 17
 1262 0084 FB68     		ldr	r3, [r7, #12]
 1263 0086 D86A     		ldr	r0, [r3, #44]
 1264              		.loc 6 40 47
 1265 0088 FB68     		ldr	r3, [r7, #12]
 1266 008a 1A8D     		ldrh	r2, [r3, #40]
 1267              		.loc 6 40 32
 1268 008c 7B8A     		ldrh	r3, [r7, #18]
 1269 008e 1946     		mov	r1, r3
 1270 0090 FFF7FEFF 		bl	_ZNK8touchgfx9FontCache8getGlyphEtt
 1271 0094 7861     		str	r0, [r7, #20]
 1272              	.L52:
 1273              	.LBE8:
 1274              	.LBE7:
  41:Src/generated/fonts/src/CachedFont.cpp ****         }
  42:Src/generated/fonts/src/CachedFont.cpp ****     }
  43:Src/generated/fonts/src/CachedFont.cpp **** 
  44:Src/generated/fonts/src/CachedFont.cpp ****     if (n != 0)
 1275              		.loc 6 44 5
 1276 0096 7B69     		ldr	r3, [r7, #20]
 1277 0098 002B     		cmp	r3, #0
 1278 009a 16D0     		beq	.L53
  45:Src/generated/fonts/src/CachedFont.cpp ****     {
  46:Src/generated/fonts/src/CachedFont.cpp ****         pixelData = getPixelData(n);
 1279              		.loc 6 46 35
 1280 009c FB68     		ldr	r3, [r7, #12]
 1281 009e 1B68     		ldr	r3, [r3]
 1282 00a0 4C33     		adds	r3, r3, #76
 1283 00a2 1B68     		ldr	r3, [r3]
 1284              		.loc 6 46 33
 1285 00a4 7969     		ldr	r1, [r7, #20]
 1286 00a6 F868     		ldr	r0, [r7, #12]
 1287 00a8 9847     		blx	r3
 1288              	.LVL5:
 1289 00aa 0246     		mov	r2, r0
 1290              		.loc 6 46 19
 1291 00ac 7B68     		ldr	r3, [r7, #4]
 1292 00ae 1A60     		str	r2, [r3]
  47:Src/generated/fonts/src/CachedFont.cpp ****         bitsPerPixel = getBitsPerPixel();
 1293              		.loc 6 47 39
 1294 00b0 FA68     		ldr	r2, [r7, #12]
 1295              		.loc 6 47 40
 1296 00b2 FB68     		ldr	r3, [r7, #12]
 1297 00b4 1B68     		ldr	r3, [r3]
 1298 00b6 3433     		adds	r3, r3, #52
 1299 00b8 1B68     		ldr	r3, [r3]
 1300              		.loc 6 47 39
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 33


 1301 00ba 1046     		mov	r0, r2
 1302 00bc 9847     		blx	r3
 1303              	.LVL6:
 1304 00be 0346     		mov	r3, r0
 1305 00c0 1A46     		mov	r2, r3
 1306              		.loc 6 47 22
 1307 00c2 3B68     		ldr	r3, [r7]
 1308 00c4 1A70     		strb	r2, [r3]
  48:Src/generated/fonts/src/CachedFont.cpp ****         return n;
 1309              		.loc 6 48 16
 1310 00c6 7B69     		ldr	r3, [r7, #20]
 1311 00c8 00E0     		b	.L54
 1312              	.L53:
  49:Src/generated/fonts/src/CachedFont.cpp ****     }
  50:Src/generated/fonts/src/CachedFont.cpp ****     return (const GlyphNode*)0;
 1313              		.loc 6 50 30
 1314 00ca 0023     		movs	r3, #0
 1315              	.L54:
  51:Src/generated/fonts/src/CachedFont.cpp **** }
 1316              		.loc 6 51 1
 1317 00cc 1846     		mov	r0, r3
 1318 00ce 1837     		adds	r7, r7, #24
 1319              	.LCFI114:
 1320              		.cfi_def_cfa_offset 8
 1321 00d0 BD46     		mov	sp, r7
 1322              	.LCFI115:
 1323              		.cfi_def_cfa_register 13
 1324              		@ sp needed
 1325 00d2 80BD     		pop	{r7, pc}
 1326              		.cfi_endproc
 1327              	.LFE139:
 1329              		.section	.text._ZNK8touchgfx10CachedFont10getKerningEtPKNS_9GlyphNodeE,"ax",%progbits
 1330              		.align	1
 1331              		.global	_ZNK8touchgfx10CachedFont10getKerningEtPKNS_9GlyphNodeE
 1332              		.syntax unified
 1333              		.thumb
 1334              		.thumb_func
 1335              		.fpu fpv4-sp-d16
 1337              	_ZNK8touchgfx10CachedFont10getKerningEtPKNS_9GlyphNodeE:
 1338              	.LFB140:
  52:Src/generated/fonts/src/CachedFont.cpp **** 
  53:Src/generated/fonts/src/CachedFont.cpp **** int8_t CachedFont::getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const
  54:Src/generated/fonts/src/CachedFont.cpp **** {
 1339              		.loc 6 54 1
 1340              		.cfi_startproc
 1341              		@ args = 0, pretend = 0, frame = 16
 1342              		@ frame_needed = 1, uses_anonymous_args = 0
 1343              		@ link register save eliminated.
 1344 0000 80B4     		push	{r7}
 1345              	.LCFI116:
 1346              		.cfi_def_cfa_offset 4
 1347              		.cfi_offset 7, -4
 1348 0002 85B0     		sub	sp, sp, #20
 1349              	.LCFI117:
 1350              		.cfi_def_cfa_offset 24
 1351 0004 00AF     		add	r7, sp, #0
 1352              	.LCFI118:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 34


 1353              		.cfi_def_cfa_register 7
 1354 0006 F860     		str	r0, [r7, #12]
 1355 0008 0B46     		mov	r3, r1
 1356 000a 7A60     		str	r2, [r7, #4]
 1357 000c 7B81     		strh	r3, [r7, #10]	@ movhi
  55:Src/generated/fonts/src/CachedFont.cpp ****     //Kerning is not supported by Font Caching
  56:Src/generated/fonts/src/CachedFont.cpp ****     return 0;
 1358              		.loc 6 56 12
 1359 000e 0023     		movs	r3, #0
  57:Src/generated/fonts/src/CachedFont.cpp **** }
 1360              		.loc 6 57 1
 1361 0010 1846     		mov	r0, r3
 1362 0012 1437     		adds	r7, r7, #20
 1363              	.LCFI119:
 1364              		.cfi_def_cfa_offset 4
 1365 0014 BD46     		mov	sp, r7
 1366              	.LCFI120:
 1367              		.cfi_def_cfa_register 13
 1368              		@ sp needed
 1369 0016 5DF8047B 		ldr	r7, [sp], #4
 1370              	.LCFI121:
 1371              		.cfi_restore 7
 1372              		.cfi_def_cfa_offset 0
 1373 001a 7047     		bx	lr
 1374              		.cfi_endproc
 1375              	.LFE140:
 1377              		.global	_ZTVN8touchgfx10CachedFontE
 1378              		.section	.rodata._ZTVN8touchgfx10CachedFontE,"a"
 1379              		.align	2
 1382              	_ZTVN8touchgfx10CachedFontE:
 1383 0000 00000000 		.word	0
 1384 0004 00000000 		.word	0
 1385 0008 00000000 		.word	_ZN8touchgfx10CachedFontD1Ev
 1386 000c 00000000 		.word	_ZN8touchgfx10CachedFontD0Ev
 1387 0010 00000000 		.word	_ZNK8touchgfx10CachedFont8getGlyphEtRPKhRh
 1388 0014 00000000 		.word	_ZNK8touchgfx4Font8getGlyphEt
 1389 0018 00000000 		.word	_ZNK8touchgfx4Font15getFallbackCharEv
 1390 001c 00000000 		.word	_ZNK8touchgfx4Font15getEllipsisCharEv
 1391 0020 00000000 		.word	_ZNK8touchgfx4Font14getStringWidthEPKtz
 1392 0024 00000000 		.word	_ZNK8touchgfx4Font14getStringWidthEhPKtz
 1393 0028 00000000 		.word	_ZNK8touchgfx4Font12getCharWidthEt
 1394 002c 00000000 		.word	_ZNK8touchgfx4Font15getSpacingAboveEPKtz
 1395 0030 00000000 		.word	_ZNK8touchgfx4Font16getMaxTextHeightEPKtz
 1396 0034 00000000 		.word	_ZNK8touchgfx4Font13getFontHeightEv
 1397 0038 00000000 		.word	_ZNK8touchgfx4Font20getMinimumTextHeightEv
 1398 003c 00000000 		.word	_ZNK8touchgfx4Font15getBitsPerPixelEv
 1399 0040 00000000 		.word	_ZNK8touchgfx4Font15getByteAlignRowEv
 1400 0044 00000000 		.word	_ZNK8touchgfx10CachedFont10getKerningEtPKNS_9GlyphNodeE
 1401 0048 00000000 		.word	_ZNK8touchgfx4Font16getNumberOfLinesEPKtz
 1402 004c 00000000 		.word	_ZNK8touchgfx10CachedFont12getGSUBTableEv
 1403 0050 00000000 		.word	_ZNK8touchgfx10CachedFont23getContextualFormsTableEv
 1404 0054 00000000 		.word	_ZNK8touchgfx10CachedFont12getPixelDataEPKNS_9GlyphNodeE
 1405 0058 00000000 		.word	_ZN8touchgfx10CachedFont12setGSUBTableEPKt
 1406 005c 00000000 		.word	_ZN8touchgfx10CachedFont23setContextualFormsTableEPKNS_24FontContextualFormsTableE
 1407              		.section	.text._ZN8touchgfx10CachedFontD2Ev,"axG",%progbits,_ZN8touchgfx10CachedFontD5Ev,comdat
 1408              		.align	1
 1409              		.weak	_ZN8touchgfx10CachedFontD2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 35


 1410              		.syntax unified
 1411              		.thumb
 1412              		.thumb_func
 1413              		.fpu fpv4-sp-d16
 1415              	_ZN8touchgfx10CachedFontD2Ev:
 1416              	.LFB142:
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 1417              		.loc 5 12 7
 1418              		.cfi_startproc
 1419              		@ args = 0, pretend = 0, frame = 8
 1420              		@ frame_needed = 1, uses_anonymous_args = 0
 1421 0000 80B5     		push	{r7, lr}
 1422              	.LCFI122:
 1423              		.cfi_def_cfa_offset 8
 1424              		.cfi_offset 7, -8
 1425              		.cfi_offset 14, -4
 1426 0002 82B0     		sub	sp, sp, #8
 1427              	.LCFI123:
 1428              		.cfi_def_cfa_offset 16
 1429 0004 00AF     		add	r7, sp, #0
 1430              	.LCFI124:
 1431              		.cfi_def_cfa_register 7
 1432 0006 7860     		str	r0, [r7, #4]
 1433              	.LBB9:
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 1434              		.loc 5 12 7
 1435 0008 054A     		ldr	r2, .L59
 1436 000a 7B68     		ldr	r3, [r7, #4]
 1437 000c 1A60     		str	r2, [r3]
 1438 000e 7B68     		ldr	r3, [r7, #4]
 1439 0010 1846     		mov	r0, r3
 1440 0012 FFF7FEFF 		bl	_ZN8touchgfx13GeneratedFontD2Ev
 1441              	.LBE9:
 1442 0016 7B68     		ldr	r3, [r7, #4]
 1443 0018 1846     		mov	r0, r3
 1444 001a 0837     		adds	r7, r7, #8
 1445              	.LCFI125:
 1446              		.cfi_def_cfa_offset 8
 1447 001c BD46     		mov	sp, r7
 1448              	.LCFI126:
 1449              		.cfi_def_cfa_register 13
 1450              		@ sp needed
 1451 001e 80BD     		pop	{r7, pc}
 1452              	.L60:
 1453              		.align	2
 1454              	.L59:
 1455 0020 08000000 		.word	_ZTVN8touchgfx10CachedFontE+8
 1456              		.cfi_endproc
 1457              	.LFE142:
 1459              		.weak	_ZN8touchgfx10CachedFontD1Ev
 1460              		.thumb_set _ZN8touchgfx10CachedFontD1Ev,_ZN8touchgfx10CachedFontD2Ev
 1461              		.section	.text._ZN8touchgfx10CachedFontD0Ev,"axG",%progbits,_ZN8touchgfx10CachedFontD5Ev,comdat
 1462              		.align	1
 1463              		.weak	_ZN8touchgfx10CachedFontD0Ev
 1464              		.syntax unified
 1465              		.thumb
 1466              		.thumb_func
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 36


 1467              		.fpu fpv4-sp-d16
 1469              	_ZN8touchgfx10CachedFontD0Ev:
 1470              	.LFB144:
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 1471              		.loc 5 12 7
 1472              		.cfi_startproc
 1473              		@ args = 0, pretend = 0, frame = 8
 1474              		@ frame_needed = 1, uses_anonymous_args = 0
 1475 0000 80B5     		push	{r7, lr}
 1476              	.LCFI127:
 1477              		.cfi_def_cfa_offset 8
 1478              		.cfi_offset 7, -8
 1479              		.cfi_offset 14, -4
 1480 0002 82B0     		sub	sp, sp, #8
 1481              	.LCFI128:
 1482              		.cfi_def_cfa_offset 16
 1483 0004 00AF     		add	r7, sp, #0
 1484              	.LCFI129:
 1485              		.cfi_def_cfa_register 7
 1486 0006 7860     		str	r0, [r7, #4]
  12:Src/generated/fonts/include/fonts/CachedFont.hpp **** {
 1487              		.loc 5 12 7
 1488 0008 7868     		ldr	r0, [r7, #4]
 1489 000a FFF7FEFF 		bl	_ZN8touchgfx10CachedFontD1Ev
 1490 000e 3421     		movs	r1, #52
 1491 0010 7868     		ldr	r0, [r7, #4]
 1492 0012 FFF7FEFF 		bl	_ZdlPvj
 1493 0016 7B68     		ldr	r3, [r7, #4]
 1494 0018 1846     		mov	r0, r3
 1495 001a 0837     		adds	r7, r7, #8
 1496              	.LCFI130:
 1497              		.cfi_def_cfa_offset 8
 1498 001c BD46     		mov	sp, r7
 1499              	.LCFI131:
 1500              		.cfi_def_cfa_register 13
 1501              		@ sp needed
 1502 001e 80BD     		pop	{r7, pc}
 1503              		.cfi_endproc
 1504              	.LFE144:
 1506              		.text
 1507              	.Letext0:
 1508              		.file 7 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 1509              		.file 8 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 1510              		.file 9 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 1511              		.file 10 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 1512              		.file 11 "Middlewares/ST/touchgfx/framework/include/touchgfx/Texts.hpp"
 1513              		.file 12 "Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp"
 1514              		.file 13 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/
 1515              		.file 14 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 37


DEFINED SYMBOLS
                            *ABS*:0000000000000000 CachedFont.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:79     .text._ZN8touchgfx4FontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:130    .text._ZN8touchgfx4FontD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:137    .text._ZN8touchgfx4FontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:144    .text._ZN8touchgfx4FontD0Ev:0000000000000000 _ZN8touchgfx4FontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:182    .text._ZNK8touchgfx4Font8getGlyphEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:189    .text._ZNK8touchgfx4Font8getGlyphEt:0000000000000000 _ZNK8touchgfx4Font8getGlyphEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:254    .text._ZNK8touchgfx4Font15getFallbackCharEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:261    .text._ZNK8touchgfx4Font15getFallbackCharEv:0000000000000000 _ZNK8touchgfx4Font15getFallbackCharEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:300    .text._ZNK8touchgfx4Font15getEllipsisCharEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:307    .text._ZNK8touchgfx4Font15getEllipsisCharEv:0000000000000000 _ZNK8touchgfx4Font15getEllipsisCharEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:346    .text._ZNK8touchgfx4Font13getFontHeightEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:353    .text._ZNK8touchgfx4Font13getFontHeightEv:0000000000000000 _ZNK8touchgfx4Font13getFontHeightEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:392    .text._ZNK8touchgfx4Font20getMinimumTextHeightEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:399    .text._ZNK8touchgfx4Font20getMinimumTextHeightEv:0000000000000000 _ZNK8touchgfx4Font20getMinimumTextHeightEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:444    .text._ZNK8touchgfx4Font15getBitsPerPixelEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:451    .text._ZNK8touchgfx4Font15getBitsPerPixelEv:0000000000000000 _ZNK8touchgfx4Font15getBitsPerPixelEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:492    .text._ZNK8touchgfx4Font15getByteAlignRowEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:499    .text._ZNK8touchgfx4Font15getByteAlignRowEv:0000000000000000 _ZNK8touchgfx4Font15getByteAlignRowEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:540    .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:543    .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 _ZN8touchgfxL18TYPED_TEXT_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:546    .text._ZN8touchgfx9FontCache12getPixelDataEPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:553    .text._ZN8touchgfx9FontCache12getPixelDataEPKNS_9GlyphNodeE:0000000000000000 _ZN8touchgfx9FontCache12getPixelDataEPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:593    .text._ZN8touchgfx9FontCache8isCachedEPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:600    .text._ZN8touchgfx9FontCache8isCachedEPKNS_9GlyphNodeE:0000000000000000 _ZN8touchgfx9FontCache8isCachedEPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:645    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:652    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 _ZN8touchgfx9ConstFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:693    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:652    .text._ZN8touchgfx9ConstFontD2Ev:0000000000000000 _ZN8touchgfx9ConstFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:700    .text._ZN8touchgfx9ConstFontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:707    .text._ZN8touchgfx9ConstFontD0Ev:0000000000000000 _ZN8touchgfx9ConstFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:745    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:752    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:793    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:752    .text._ZN8touchgfx13GeneratedFontD2Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD1Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 38


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:800    .text._ZN8touchgfx13GeneratedFontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:807    .text._ZN8touchgfx13GeneratedFontD0Ev:0000000000000000 _ZN8touchgfx13GeneratedFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:845    .text._ZNK8touchgfx10CachedFont12getGSUBTableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:852    .text._ZNK8touchgfx10CachedFont12getGSUBTableEv:0000000000000000 _ZNK8touchgfx10CachedFont12getGSUBTableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:913    .text._ZN8touchgfx10CachedFont12setGSUBTableEPKt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:920    .text._ZN8touchgfx10CachedFont12setGSUBTableEPKt:0000000000000000 _ZN8touchgfx10CachedFont12setGSUBTableEPKt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:961    .text._ZNK8touchgfx10CachedFont23getContextualFormsTableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:968    .text._ZNK8touchgfx10CachedFont23getContextualFormsTableEv:0000000000000000 _ZNK8touchgfx10CachedFont23getContextualFormsTableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1028   .text._ZN8touchgfx10CachedFont23setContextualFormsTableEPKNS_24FontContextualFormsTableE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1035   .text._ZN8touchgfx10CachedFont23setContextualFormsTableEPKNS_24FontContextualFormsTableE:0000000000000000 _ZN8touchgfx10CachedFont23setContextualFormsTableEPKNS_24FontContextualFormsTableE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1076   .text._ZNK8touchgfx10CachedFont12getPixelDataEPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1083   .text._ZNK8touchgfx10CachedFont12getPixelDataEPKNS_9GlyphNodeE:0000000000000000 _ZNK8touchgfx10CachedFont12getPixelDataEPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1154   .text._ZNK8touchgfx10CachedFont8getGlyphEtRPKhRh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1161   .text._ZNK8touchgfx10CachedFont8getGlyphEtRPKhRh:0000000000000000 _ZNK8touchgfx10CachedFont8getGlyphEtRPKhRh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1330   .text._ZNK8touchgfx10CachedFont10getKerningEtPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1337   .text._ZNK8touchgfx10CachedFont10getKerningEtPKNS_9GlyphNodeE:0000000000000000 _ZNK8touchgfx10CachedFont10getKerningEtPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1382   .rodata._ZTVN8touchgfx10CachedFontE:0000000000000000 _ZTVN8touchgfx10CachedFontE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1379   .rodata._ZTVN8touchgfx10CachedFontE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1415   .text._ZN8touchgfx10CachedFontD2Ev:0000000000000000 _ZN8touchgfx10CachedFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1469   .text._ZN8touchgfx10CachedFontD0Ev:0000000000000000 _ZN8touchgfx10CachedFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1408   .text._ZN8touchgfx10CachedFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1415   .text._ZN8touchgfx10CachedFontD2Ev:0000000000000000 _ZN8touchgfx10CachedFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1455   .text._ZN8touchgfx10CachedFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s:1462   .text._ZN8touchgfx10CachedFontD0Ev:0000000000000000 $t
                           .group:0000000000000000 _ZN8touchgfx4FontD5Ev
                           .group:0000000000000000 _ZN8touchgfx9ConstFontD5Ev
                           .group:0000000000000000 _ZN8touchgfx13GeneratedFontD5Ev
                           .group:0000000000000000 _ZN8touchgfx10CachedFontD5Ev
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
_ZTVN8touchgfx13GeneratedFontE
_ZNK8touchgfx9ConstFont4findEt
_ZNK8touchgfx9FontCache8getGlyphEtt
_ZNK8touchgfx4Font14getStringWidthEPKtz
_ZNK8touchgfx4Font14getStringWidthEhPKtz
_ZNK8touchgfx4Font12getCharWidthEt
_ZNK8touchgfx4Font15getSpacingAboveEPKtz
_ZNK8touchgfx4Font16getMaxTextHeightEPKtz
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccBlZdfg.s 			page 39


_ZNK8touchgfx4Font16getNumberOfLinesEPKtz
