ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 1


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
  13              		.file	"UnmappedDataFont.cpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 2


  80              		.weak	_ZN8touchgfx4FontD2Ev
  81              		.arch armv7e-m
  82              		.syntax unified
  83              		.thumb
  84              		.thumb_func
  85              		.fpu fpv4-sp-d16
  87              	_ZN8touchgfx4FontD2Ev:
  88              	.LFB57:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 3


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 4


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 5


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
 132              	.LFE57:
 134              		.weak	_ZN8touchgfx4FontD1Ev
 135              		.thumb_set _ZN8touchgfx4FontD1Ev,_ZN8touchgfx4FontD2Ev
 136              		.section	.text._ZN8touchgfx4FontD0Ev,"axG",%progbits,_ZN8touchgfx4FontD5Ev,comdat
 137              		.align	1
 138              		.weak	_ZN8touchgfx4FontD0Ev
 139              		.syntax unified
 140              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 6


 141              		.thumb_func
 142              		.fpu fpv4-sp-d16
 144              	_ZN8touchgfx4FontD0Ev:
 145              	.LFB59:
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
 179              	.LFE59:
 181              		.section	.text._ZNK8touchgfx4Font8getGlyphEt,"axG",%progbits,_ZNK8touchgfx4Font8getGlyphEt,comdat
 182              		.align	1
 183              		.weak	_ZNK8touchgfx4Font8getGlyphEt
 184              		.syntax unified
 185              		.thumb
 186              		.thumb_func
 187              		.fpu fpv4-sp-d16
 189              	_ZNK8touchgfx4Font8getGlyphEt:
 190              	.LFB60:
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the glyph data associated with the specified Unicode. Please note that in case
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * of Thai letters and Arabic letters where diacritics can be placed relative to the
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * previous character(s), please use TextProvider::getNextLigature() instead as it will
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * create a temporary GlyphNode that will be adjusted with respect to X/Y position.
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param       unicode      The character to look up.
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param       pixelData    Pointer to the pixel data for the glyph if the glyph is
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 7


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 8


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
 251              	.LFE60:
 253              		.section	.text._ZNK8touchgfx4Font15getFallbackCharEv,"axG",%progbits,_ZNK8touchgfx4Font15getFallba
 254              		.align	1
 255              		.weak	_ZNK8touchgfx4Font15getFallbackCharEv
 256              		.syntax unified
 257              		.thumb
 258              		.thumb_func
 259              		.fpu fpv4-sp-d16
 261              	_ZNK8touchgfx4Font15getFallbackCharEv:
 262              	.LFB61:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 9


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
 297              	.LFE61:
 299              		.section	.text._ZNK8touchgfx4Font15getEllipsisCharEv,"axG",%progbits,_ZNK8touchgfx4Font15getEllips
 300              		.align	1
 301              		.weak	_ZNK8touchgfx4Font15getEllipsisCharEv
 302              		.syntax unified
 303              		.thumb
 304              		.thumb_func
 305              		.fpu fpv4-sp-d16
 307              	_ZNK8touchgfx4Font15getEllipsisCharEv:
 308              	.LFB62:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 10


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
 343              	.LFE62:
 345              		.section	.text._ZNK8touchgfx4Font13getFontHeightEv,"axG",%progbits,_ZNK8touchgfx4Font13getFontHeig
 346              		.align	1
 347              		.weak	_ZNK8touchgfx4Font13getFontHeightEv
 348              		.syntax unified
 349              		.thumb
 350              		.thumb_func
 351              		.fpu fpv4-sp-d16
 353              	_ZNK8touchgfx4Font13getFontHeightEv:
 354              	.LFB63:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 11


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 12


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
 389              	.LFE63:
 391              		.section	.text._ZNK8touchgfx4Font20getMinimumTextHeightEv,"axG",%progbits,_ZNK8touchgfx4Font20getM
 392              		.align	1
 393              		.weak	_ZNK8touchgfx4Font20getMinimumTextHeightEv
 394              		.syntax unified
 395              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 13


 396              		.thumb_func
 397              		.fpu fpv4-sp-d16
 399              	_ZNK8touchgfx4Font20getMinimumTextHeightEv:
 400              	.LFB64:
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
 441              	.LFE64:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 14


 443              		.section	.text._ZNK8touchgfx4Font15getBitsPerPixelEv,"axG",%progbits,_ZNK8touchgfx4Font15getBitsPe
 444              		.align	1
 445              		.weak	_ZNK8touchgfx4Font15getBitsPerPixelEv
 446              		.syntax unified
 447              		.thumb
 448              		.thumb_func
 449              		.fpu fpv4-sp-d16
 451              	_ZNK8touchgfx4Font15getBitsPerPixelEv:
 452              	.LFB65:
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
 489              	.LFE65:
 491              		.section	.text._ZNK8touchgfx4Font15getByteAlignRowEv,"axG",%progbits,_ZNK8touchgfx4Font15getByteAl
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 15


 492              		.align	1
 493              		.weak	_ZNK8touchgfx4Font15getByteAlignRowEv
 494              		.syntax unified
 495              		.thumb
 496              		.thumb_func
 497              		.fpu fpv4-sp-d16
 499              	_ZNK8touchgfx4Font15getByteAlignRowEv:
 500              	.LFB66:
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
 537              	.LFE66:
 539              		.section	.text._ZN8touchgfx4FontC2Ethhhhhtt,"axG",%progbits,_ZN8touchgfx4FontC5Ethhhhhtt,comdat
 540              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 16


 541              		.weak	_ZN8touchgfx4FontC2Ethhhhhtt
 542              		.syntax unified
 543              		.thumb
 544              		.thumb_func
 545              		.fpu fpv4-sp-d16
 547              	_ZN8touchgfx4FontC2Ethhhhhtt:
 548              	.LFB74:
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
 389:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 390:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return 0;
 391:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 392:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 393:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 394:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Count the number of lines in a given text.
 395:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 396:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  text The text.
 397:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  ...  Variable arguments providing additional information.
 398:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 399:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The number of lines.
 400:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 401:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual uint16_t getNumberOfLines(const Unicode::UnicodeChar* text, ...) const;
 402:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 403:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 404:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets GSUB table. Currently only used for Devanagari fonts.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 17


 405:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 406:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The GSUB table or null if font has GSUB no table.
 407:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 408:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual const uint16_t* getGSUBTable() const
 409:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 410:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return 0;
 411:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 412:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 413:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 414:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the contextual forms table used in arabic fonts.
 415:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 416:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The FontContextualFormsTable or null if the font has no table.
 417:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 418:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     virtual const FontContextualFormsTable* getContextualFormsTable() const
 419:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 420:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return 0;
 421:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 422:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 423:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Query if 'character' is invisible, zero width.
 425:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 426:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  character The character.
 427:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 428:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return True if invisible, zero width, false if not.
 429:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 430:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     FORCE_INLINE_FUNCTION static bool isInvisibleZeroWidth(Unicode::UnicodeChar character)
 431:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 432:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         return character == 0xFEFF || character == 0x200B;
 433:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 434:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 435:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** protected:
 436:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 437:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the width in pixels of the specified string. If the string contains multiple
 438:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * lines, the width of the widest line is found. Please note that the correct number of
 439:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * arguments must be given if the text contains wildcards.
 440:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 441:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  textDirection The text direction.
 442:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  text          A null-terminated Unicode string with arguments to insert if the text
 443:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *                       contains wildcards.
 444:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  pArg          Variable arguments providing additional information inserted at
 445:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *                       wildcard placeholders.
 446:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 447:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The width in pixels of the longest line of the specified string.
 448:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 449:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @note The string is assumed to be purely left-to-right.
 450:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 451:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint16_t getStringWidthLTR(TextDirection textDirection, const Unicode::UnicodeChar* text, va_li
 452:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 453:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 454:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Gets the width in pixels of the specified string. If the string contains multiple
 455:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * lines, the width of the widest line is found. Please note that the correct number of
 456:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * arguments must be given if the text contains wildcards.
 457:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 458:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * The string is handled as a right-to-left string and subdivided into smaller text
 459:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * strings to correctly handle mixing of left-to-right and right-to-left strings.
 460:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 461:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  textDirection The text direction.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 18


 462:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  text          A null-terminated Unicode string with arguments to insert if the text
 463:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *                       contains wildcards.
 464:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  pArg          Variable arguments providing additional information inserted at
 465:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *                       wildcard placeholders.
 466:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 467:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @return The string width RTL.
 468:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 469:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     uint16_t getStringWidthRTL(TextDirection textDirection, const Unicode::UnicodeChar* text, va_li
 470:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp **** 
 471:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     /**
 472:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * Initializes a new instance of the Font class. The protected constructor of a Font.
 473:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *
 474:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  height       The font height in pixels.
 475:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  pixBelowBase The number of pixels below the base line.
 476:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  bitsPerPixel The number of bits per pixel.
 477:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  byteAlignRow The glyphs are saved with each row byte aligned.
 478:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  maxLeft      The maximum left extend for a glyph in the font.
 479:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  maxRight     The maximum right extend for a glyph in the font.
 480:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  fallbackChar The fallback character for the typography in case no glyph is
 481:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      *                      available.
 482:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      * @param  ellipsisChar The ellipsis character used for truncating long texts.
 483:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****      */
 484:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     Font(uint16_t height, uint8_t pixBelowBase, uint8_t bitsPerPixel, uint8_t byteAlignRow, uint8_t
 549              		.loc 1 484 5
 550              		.cfi_startproc
 551              		@ args = 20, pretend = 0, frame = 8
 552              		@ frame_needed = 1, uses_anonymous_args = 0
 553              		@ link register save eliminated.
 554 0000 80B4     		push	{r7}
 555              	.LCFI52:
 556              		.cfi_def_cfa_offset 4
 557              		.cfi_offset 7, -4
 558 0002 83B0     		sub	sp, sp, #12
 559              	.LCFI53:
 560              		.cfi_def_cfa_offset 16
 561 0004 00AF     		add	r7, sp, #0
 562              	.LCFI54:
 563              		.cfi_def_cfa_register 7
 564 0006 7860     		str	r0, [r7, #4]
 565 0008 0846     		mov	r0, r1
 566 000a 1146     		mov	r1, r2
 567 000c 1A46     		mov	r2, r3
 568 000e 0346     		mov	r3, r0	@ movhi
 569 0010 7B80     		strh	r3, [r7, #2]	@ movhi
 570 0012 0B46     		mov	r3, r1
 571 0014 7B70     		strb	r3, [r7, #1]
 572 0016 1346     		mov	r3, r2
 573 0018 3B70     		strb	r3, [r7]
 574              	.LBB6:
 485:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****         : fontHeight(height),
 486:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           pixelsBelowBaseline(pixBelowBase),
 487:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           bPerPixel(bitsPerPixel),
 488:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           bAlignRow(byteAlignRow),
 489:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           maxPixelsLeft(maxLeft),
 490:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           maxPixelsRight(maxRight),
 491:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           fallbackCharacter(fallbackChar),
 492:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           ellipsisCharacter(ellipsisChar)
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 19


 575              		.loc 1 492 41
 576 001a 174A     		ldr	r2, .L25
 577 001c 7B68     		ldr	r3, [r7, #4]
 578 001e 1A60     		str	r2, [r3]
 579 0020 7B68     		ldr	r3, [r7, #4]
 580 0022 7A88     		ldrh	r2, [r7, #2]	@ movhi
 581 0024 9A80     		strh	r2, [r3, #4]	@ movhi
 582 0026 7B68     		ldr	r3, [r7, #4]
 583 0028 7A78     		ldrb	r2, [r7, #1]
 584 002a 9A71     		strb	r2, [r3, #6]
 487:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           bAlignRow(byteAlignRow),
 585              		.loc 1 487 21
 586 002c 3B78     		ldrb	r3, [r7]
 587 002e 03F07F03 		and	r3, r3, #127
 588 0032 D9B2     		uxtb	r1, r3
 589              		.loc 1 492 41
 590 0034 7A68     		ldr	r2, [r7, #4]
 591 0036 D379     		ldrb	r3, [r2, #7]
 592 0038 61F30603 		bfi	r3, r1, #0, #7
 593 003c D371     		strb	r3, [r2, #7]
 488:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****           maxPixelsLeft(maxLeft),
 594              		.loc 1 488 21
 595 003e 3B7C     		ldrb	r3, [r7, #16]
 596 0040 03F00103 		and	r3, r3, #1
 597 0044 D9B2     		uxtb	r1, r3
 598              		.loc 1 492 41
 599 0046 7A68     		ldr	r2, [r7, #4]
 600 0048 D379     		ldrb	r3, [r2, #7]
 601 004a 61F3C713 		bfi	r3, r1, #7, #1
 602 004e D371     		strb	r3, [r2, #7]
 603 0050 7B68     		ldr	r3, [r7, #4]
 604 0052 3A7D     		ldrb	r2, [r7, #20]
 605 0054 1A72     		strb	r2, [r3, #8]
 606 0056 7B68     		ldr	r3, [r7, #4]
 607 0058 3A7E     		ldrb	r2, [r7, #24]
 608 005a 5A72     		strb	r2, [r3, #9]
 609 005c 7B68     		ldr	r3, [r7, #4]
 610 005e BA8B     		ldrh	r2, [r7, #28]	@ movhi
 611 0060 5A81     		strh	r2, [r3, #10]	@ movhi
 612 0062 7B68     		ldr	r3, [r7, #4]
 613 0064 3A8C     		ldrh	r2, [r7, #32]	@ movhi
 614 0066 9A81     		strh	r2, [r3, #12]	@ movhi
 615              	.LBE6:
 493:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     {
 494:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 616              		.loc 1 494 5
 617 0068 7B68     		ldr	r3, [r7, #4]
 618 006a 1846     		mov	r0, r3
 619 006c 0C37     		adds	r7, r7, #12
 620              	.LCFI55:
 621              		.cfi_def_cfa_offset 4
 622 006e BD46     		mov	sp, r7
 623              	.LCFI56:
 624              		.cfi_def_cfa_register 13
 625              		@ sp needed
 626 0070 5DF8047B 		ldr	r7, [sp], #4
 627              	.LCFI57:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 20


 628              		.cfi_restore 7
 629              		.cfi_def_cfa_offset 0
 630 0074 7047     		bx	lr
 631              	.L26:
 632 0076 00BF     		.align	2
 633              	.L25:
 634 0078 08000000 		.word	_ZTVN8touchgfx4FontE+8
 635              		.cfi_endproc
 636              	.LFE74:
 638              		.weak	_ZN8touchgfx4FontC1Ethhhhhtt
 639              		.thumb_set _ZN8touchgfx4FontC1Ethhhhhtt,_ZN8touchgfx4FontC2Ethhhhhtt
 640              		.section	.text._ZN23ApplicationFontProvider14getFlashReaderEv,"axG",%progbits,_ZN23ApplicationFont
 641              		.align	1
 642              		.weak	_ZN23ApplicationFontProvider14getFlashReaderEv
 643              		.syntax unified
 644              		.thumb
 645              		.thumb_func
 646              		.fpu fpv4-sp-d16
 648              	_ZN23ApplicationFontProvider14getFlashReaderEv:
 649              	.LFB81:
 650              		.file 2 "Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp"
   1:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** 
   4:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** #ifndef TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
   5:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** #define TOUCHGFX_APPLICATIONFONTPROVIDER_HPP
   6:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** 
   7:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** #include <touchgfx/FontManager.hpp>
   8:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** 
   9:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** namespace touchgfx
  10:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** {
  11:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** class FlashDataReader;
  12:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** }
  13:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** 
  14:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** struct Typography
  15:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** {
  16:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static const touchgfx::FontId DEFAULT = 0;
  17:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static const touchgfx::FontId LARGE = 1;
  18:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static const touchgfx::FontId SMALL = 2;
  19:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** };
  20:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** 
  21:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** struct TypographyFontIndex
  22:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** {
  23:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static const touchgfx::FontId DEFAULT = 0; // verdana_20_4bpp
  24:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static const touchgfx::FontId LARGE = 1;   // verdana_40_4bpp
  25:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static const touchgfx::FontId SMALL = 2;   // verdana_10_4bpp
  26:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static const uint16_t NUMBER_OF_FONTS = 3;
  27:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** };
  28:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** 
  29:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** class ApplicationFontProvider : public touchgfx::FontProvider
  30:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** {
  31:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** public:
  32:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     virtual touchgfx::Font* getFont(touchgfx::FontId typography);
  33:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp **** 
  34:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static void setFlashReader(touchgfx::FlashDataReader* /* flashReader */)
  35:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     {
  36:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 21


  37:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     static touchgfx::FlashDataReader* getFlashReader()
 651              		.loc 2 37 39
 652              		.cfi_startproc
 653              		@ args = 0, pretend = 0, frame = 0
 654              		@ frame_needed = 1, uses_anonymous_args = 0
 655              		@ link register save eliminated.
 656 0000 80B4     		push	{r7}
 657              	.LCFI58:
 658              		.cfi_def_cfa_offset 4
 659              		.cfi_offset 7, -4
 660 0002 00AF     		add	r7, sp, #0
 661              	.LCFI59:
 662              		.cfi_def_cfa_register 7
  38:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     {
  39:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****         return 0;
 663              		.loc 2 39 16
 664 0004 0023     		movs	r3, #0
  40:Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp ****     }
 665              		.loc 2 40 5
 666 0006 1846     		mov	r0, r3
 667 0008 BD46     		mov	sp, r7
 668              	.LCFI60:
 669              		.cfi_def_cfa_register 13
 670              		@ sp needed
 671 000a 5DF8047B 		ldr	r7, [sp], #4
 672              	.LCFI61:
 673              		.cfi_restore 7
 674              		.cfi_def_cfa_offset 0
 675 000e 7047     		bx	lr
 676              		.cfi_endproc
 677              	.LFE81:
 679              		.section	.text._ZNK8touchgfx16UnmappedDataFont12getGSUBTableEv,"axG",%progbits,_ZNK8touchgfx16Unma
 680              		.align	1
 681              		.weak	_ZNK8touchgfx16UnmappedDataFont12getGSUBTableEv
 682              		.syntax unified
 683              		.thumb
 684              		.thumb_func
 685              		.fpu fpv4-sp-d16
 687              	_ZNK8touchgfx16UnmappedDataFont12getGSUBTableEv:
 688              	.LFB82:
 689              		.file 3 "Src/generated/fonts/include/fonts/UnmappedDataFont.hpp"
   1:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
   4:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** #ifndef TOUCHGFX_UNMAPPEDDATAFONT_HPP
   5:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** #define TOUCHGFX_UNMAPPEDDATAFONT_HPP
   6:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
   7:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** #include <touchgfx/Font.hpp>
   8:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
   9:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** namespace touchgfx
  10:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** {
  11:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** /**
  12:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****  * An UnmappedDataFont has both glyph table and glyph data placed in a
  13:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****  * flash which does not support random access read (indirect
  14:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****  * access). A unicode table is located in a flash with random read
  15:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****  * access (direct access).
  16:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****  *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 22


  17:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****  * @see Font, ConstFont
  18:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****  */
  19:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** class UnmappedDataFont : public Font
  20:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** {
  21:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** public:
  22:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     /**
  23:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * Construct the UnmappedDataFont.
  24:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  25:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param list                   The array of glyphs known to this font (indirect).
  26:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param unicodes               The array of unicodes known to this font (direct).
  27:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param size                   The number of glyphs in list.
  28:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param height                 The height in pixels of the highest character in this font.
  29:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param pixBelowBase           The maximum number of pixels that can be drawn below the
  30:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *                               baseline in this font.
  31:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param bitsPerPixel           The number of bits per pixel in this font.
  32:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param byteAlignRow           Are glyphs encoded using A4 format
  33:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param maxLeft                The maximum a character extends to the left.
  34:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param maxRight               The maximum a character extends to the right.
  35:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param glyphDataList          Pointer to pointers the glyph data for the font (indirect).
  36:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param kerningList            pointer to the kerning data for the font (direct).
  37:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param fallbackChar           The fallback character for the typography in case no glyph is
  38:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *                               available.
  39:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param ellipsisChar           The ellipsis character used for truncating long texts.
  40:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param gsubTable              Pointer to GSUB table (direct).
  41:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      */
  42:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     UnmappedDataFont(const GlyphNode* list, const uint16_t* unicodes, uint16_t size, uint16_t heigh
  43:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
  44:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     using Font::getGlyph;
  45:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
  46:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     /**
  47:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * Gets the glyph data associated with the specified Unicode. The
  48:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****        GlyphNode is allocated in the buffer passed to the constructor.
  49:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  50:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * Please note that in case of Thai letters and Arabic letters
  51:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * where diacritics can be placed relative to the previous
  52:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * character(s), please use TextProvider::getNextLigature()
  53:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * instead as it will create a temporary GlyphNode that will be
  54:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * adjusted with respect to X/Y position.
  55:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  56:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param       unicode      The character to look up.
  57:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param       pixelData    Pointer to the pixel data for the glyph if the glyph is
  58:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *                           found. This is set by this method.
  59:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param [out] bitsPerPixel Reference where to place the number of bits per pixel.
  60:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  61:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @return A pointer to the glyph node or null if the glyph was not found.
  62:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      */
  63:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     virtual const GlyphNode* getGlyph(Unicode::UnicodeChar unicode, const uint8_t*& pixelData, uint
  64:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
  65:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     /**
  66:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * Obtains the address to the pixel data for the specified glyph.
  67:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  68:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param glyph The glyph to get the pixels data of.
  69:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  70:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @return The address of the pixel data of the glyph.
  71:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      */
  72:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     virtual const uint8_t* getPixelData(const GlyphNode* glyph) const;
  73:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 23


  74:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     /**
  75:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * Gets the kerning distance between two characters.
  76:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  77:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param prevChar The unicode value of the previous character.
  78:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @param glyph    the glyph object for the current character.
  79:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  80:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @return The kerning distance between prevChar and glyph char.
  81:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      */
  82:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     virtual int8_t getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const;
  83:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
  84:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     /**
  85:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * Gets GSUB table.
  86:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  87:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @return The GSUB table or null if font has GSUB no table
  88:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      */
  89:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     virtual const uint16_t* getGSUBTable() const
 690              		.loc 3 89 29
 691              		.cfi_startproc
 692              		@ args = 0, pretend = 0, frame = 8
 693              		@ frame_needed = 1, uses_anonymous_args = 0
 694              		@ link register save eliminated.
 695 0000 80B4     		push	{r7}
 696              	.LCFI62:
 697              		.cfi_def_cfa_offset 4
 698              		.cfi_offset 7, -4
 699 0002 83B0     		sub	sp, sp, #12
 700              	.LCFI63:
 701              		.cfi_def_cfa_offset 16
 702 0004 00AF     		add	r7, sp, #0
 703              	.LCFI64:
 704              		.cfi_def_cfa_register 7
 705 0006 7860     		str	r0, [r7, #4]
  90:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     {
  91:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****         return gsubTable;
 706              		.loc 3 91 16
 707 0008 7B68     		ldr	r3, [r7, #4]
 708 000a 5B6A     		ldr	r3, [r3, #36]
  92:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     }
 709              		.loc 3 92 5
 710 000c 1846     		mov	r0, r3
 711 000e 0C37     		adds	r7, r7, #12
 712              	.LCFI65:
 713              		.cfi_def_cfa_offset 4
 714 0010 BD46     		mov	sp, r7
 715              	.LCFI66:
 716              		.cfi_def_cfa_register 13
 717              		@ sp needed
 718 0012 5DF8047B 		ldr	r7, [sp], #4
 719              	.LCFI67:
 720              		.cfi_restore 7
 721              		.cfi_def_cfa_offset 0
 722 0016 7047     		bx	lr
 723              		.cfi_endproc
 724              	.LFE82:
 726              		.section	.text._ZNK8touchgfx16UnmappedDataFont23getContextualFormsTableEv,"axG",%progbits,_ZNK8tou
 727              		.align	1
 728              		.weak	_ZNK8touchgfx16UnmappedDataFont23getContextualFormsTableEv
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 24


 729              		.syntax unified
 730              		.thumb
 731              		.thumb_func
 732              		.fpu fpv4-sp-d16
 734              	_ZNK8touchgfx16UnmappedDataFont23getContextualFormsTableEv:
 735              	.LFB83:
  93:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** 
  94:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     /**
  95:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * Gets the contextual forms table used in arabic fonts.
  96:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      *
  97:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      * @return The FontContextualFormsTable or null if the font has no table.
  98:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****      */
  99:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     virtual const FontContextualFormsTable* getContextualFormsTable() const
 736              		.loc 3 99 45
 737              		.cfi_startproc
 738              		@ args = 0, pretend = 0, frame = 8
 739              		@ frame_needed = 1, uses_anonymous_args = 0
 740              		@ link register save eliminated.
 741 0000 80B4     		push	{r7}
 742              	.LCFI68:
 743              		.cfi_def_cfa_offset 4
 744              		.cfi_offset 7, -4
 745 0002 83B0     		sub	sp, sp, #12
 746              	.LCFI69:
 747              		.cfi_def_cfa_offset 16
 748 0004 00AF     		add	r7, sp, #0
 749              	.LCFI70:
 750              		.cfi_def_cfa_register 7
 751 0006 7860     		str	r0, [r7, #4]
 100:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     {
 101:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****         return arabicTable;
 752              		.loc 3 101 16
 753 0008 7B68     		ldr	r3, [r7, #4]
 754 000a 9B6A     		ldr	r3, [r3, #40]
 102:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp ****     }
 755              		.loc 3 102 5
 756 000c 1846     		mov	r0, r3
 757 000e 0C37     		adds	r7, r7, #12
 758              	.LCFI71:
 759              		.cfi_def_cfa_offset 4
 760 0010 BD46     		mov	sp, r7
 761              	.LCFI72:
 762              		.cfi_def_cfa_register 13
 763              		@ sp needed
 764 0012 5DF8047B 		ldr	r7, [sp], #4
 765              	.LCFI73:
 766              		.cfi_restore 7
 767              		.cfi_def_cfa_offset 0
 768 0016 7047     		bx	lr
 769              		.cfi_endproc
 770              	.LFE83:
 772              		.global	_ZN8touchgfx16UnmappedDataFont15glyphNodeBufferE
 773              		.section	.bss._ZN8touchgfx16UnmappedDataFont15glyphNodeBufferE,"aw",%nobits
 774              		.align	2
 777              	_ZN8touchgfx16UnmappedDataFont15glyphNodeBufferE:
 778 0000 00000000 		.space	14
 778      00000000 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 25


 778      00000000 
 778      0000
 779              		.section	.text._ZN8touchgfx16UnmappedDataFontC2EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeE
 780              		.align	1
 781              		.global	_ZN8touchgfx16UnmappedDataFontC2EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PK
 782              		.syntax unified
 783              		.thumb
 784              		.thumb_func
 785              		.fpu fpv4-sp-d16
 787              	_ZN8touchgfx16UnmappedDataFontC2EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PKNS_24Font
 788              	.LFB88:
 789              		.file 4 "Src/generated/fonts/src/UnmappedDataFont.cpp"
   1:Src/generated/fonts/src/UnmappedDataFont.cpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/src/UnmappedDataFont.cpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
   4:Src/generated/fonts/src/UnmappedDataFont.cpp **** #include <touchgfx/hal/FlashDataReader.hpp>
   5:Src/generated/fonts/src/UnmappedDataFont.cpp **** #include <fonts/ApplicationFontProvider.hpp>
   6:Src/generated/fonts/src/UnmappedDataFont.cpp **** #include <fonts/UnmappedDataFont.hpp>
   7:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
   8:Src/generated/fonts/src/UnmappedDataFont.cpp **** namespace touchgfx
   9:Src/generated/fonts/src/UnmappedDataFont.cpp **** {
  10:Src/generated/fonts/src/UnmappedDataFont.cpp **** GlyphNode UnmappedDataFont::glyphNodeBuffer;
  11:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  12:Src/generated/fonts/src/UnmappedDataFont.cpp **** UnmappedDataFont::UnmappedDataFont(const GlyphNode* list, const uint16_t* unicodeList, uint16_t siz
 790              		.loc 4 12 1
 791              		.cfi_startproc
 792              		@ args = 48, pretend = 0, frame = 16
 793              		@ frame_needed = 1, uses_anonymous_args = 0
 794 0000 90B5     		push	{r4, r7, lr}
 795              	.LCFI74:
 796              		.cfi_def_cfa_offset 12
 797              		.cfi_offset 4, -12
 798              		.cfi_offset 7, -8
 799              		.cfi_offset 14, -4
 800 0002 8BB0     		sub	sp, sp, #44
 801              	.LCFI75:
 802              		.cfi_def_cfa_offset 56
 803 0004 06AF     		add	r7, sp, #24
 804              	.LCFI76:
 805              		.cfi_def_cfa 7, 32
 806 0006 F860     		str	r0, [r7, #12]
 807 0008 B960     		str	r1, [r7, #8]
 808 000a 7A60     		str	r2, [r7, #4]
 809 000c 7B80     		strh	r3, [r7, #2]	@ movhi
 810              	.LBB7:
  13:Src/generated/fonts/src/UnmappedDataFont.cpp ****     : Font(height, pixBelowBase, bitsPerPixel, byteAlignRow, maxLeft, maxRight, fallbackChar, ellip
  14:Src/generated/fonts/src/UnmappedDataFont.cpp ****       glyphList(list),
  15:Src/generated/fonts/src/UnmappedDataFont.cpp ****       listSize(size),
  16:Src/generated/fonts/src/UnmappedDataFont.cpp ****       unicodes(unicodeList),
  17:Src/generated/fonts/src/UnmappedDataFont.cpp ****       glyphDataList(glyphDataList),
  18:Src/generated/fonts/src/UnmappedDataFont.cpp ****       kerningData(kerningList),
  19:Src/generated/fonts/src/UnmappedDataFont.cpp ****       gsubTable(gsubData),
  20:Src/generated/fonts/src/UnmappedDataFont.cpp ****       arabicTable(formsTable)
 811              		.loc 4 20 29
 812 000e F868     		ldr	r0, [r7, #12]
 813 0010 97F82840 		ldrb	r4, [r7, #40]	@ zero_extendqisi2
 814 0014 97F82420 		ldrb	r2, [r7, #36]	@ zero_extendqisi2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 26


 815 0018 398C     		ldrh	r1, [r7, #32]
 816 001a B7F84430 		ldrh	r3, [r7, #68]
 817 001e 0493     		str	r3, [sp, #16]
 818 0020 B7F84030 		ldrh	r3, [r7, #64]
 819 0024 0393     		str	r3, [sp, #12]
 820 0026 97F83430 		ldrb	r3, [r7, #52]	@ zero_extendqisi2
 821 002a 0293     		str	r3, [sp, #8]
 822 002c 97F83030 		ldrb	r3, [r7, #48]	@ zero_extendqisi2
 823 0030 0193     		str	r3, [sp, #4]
 824 0032 97F82C30 		ldrb	r3, [r7, #44]	@ zero_extendqisi2
 825 0036 0093     		str	r3, [sp]
 826 0038 2346     		mov	r3, r4
 827 003a FFF7FEFF 		bl	_ZN8touchgfx4FontC2Ethhhhhtt
 828 003e 0E4A     		ldr	r2, .L35
 829 0040 FB68     		ldr	r3, [r7, #12]
 830 0042 1A60     		str	r2, [r3]
 831 0044 FB68     		ldr	r3, [r7, #12]
 832 0046 BA68     		ldr	r2, [r7, #8]
 833 0048 1A61     		str	r2, [r3, #16]
 834 004a FB68     		ldr	r3, [r7, #12]
 835 004c 7A88     		ldrh	r2, [r7, #2]	@ movhi
 836 004e 9A82     		strh	r2, [r3, #20]	@ movhi
 837 0050 FB68     		ldr	r3, [r7, #12]
 838 0052 7A68     		ldr	r2, [r7, #4]
 839 0054 9A61     		str	r2, [r3, #24]
 840 0056 FB68     		ldr	r3, [r7, #12]
 841 0058 BA6B     		ldr	r2, [r7, #56]
 842 005a DA61     		str	r2, [r3, #28]
 843 005c FB68     		ldr	r3, [r7, #12]
 844 005e FA6B     		ldr	r2, [r7, #60]
 845 0060 1A62     		str	r2, [r3, #32]
 846 0062 FB68     		ldr	r3, [r7, #12]
 847 0064 BA6C     		ldr	r2, [r7, #72]
 848 0066 5A62     		str	r2, [r3, #36]
 849 0068 FB68     		ldr	r3, [r7, #12]
 850 006a FA6C     		ldr	r2, [r7, #76]
 851 006c 9A62     		str	r2, [r3, #40]
 852              	.LBE7:
  21:Src/generated/fonts/src/UnmappedDataFont.cpp **** {
  22:Src/generated/fonts/src/UnmappedDataFont.cpp **** }
 853              		.loc 4 22 1
 854 006e FB68     		ldr	r3, [r7, #12]
 855 0070 1846     		mov	r0, r3
 856 0072 1437     		adds	r7, r7, #20
 857              	.LCFI77:
 858              		.cfi_def_cfa_offset 12
 859 0074 BD46     		mov	sp, r7
 860              	.LCFI78:
 861              		.cfi_def_cfa_register 13
 862              		@ sp needed
 863 0076 90BD     		pop	{r4, r7, pc}
 864              	.L36:
 865              		.align	2
 866              	.L35:
 867 0078 08000000 		.word	_ZTVN8touchgfx16UnmappedDataFontE+8
 868              		.cfi_endproc
 869              	.LFE88:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 27


 871              		.global	_ZN8touchgfx16UnmappedDataFontC1EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PK
 872              		.thumb_set _ZN8touchgfx16UnmappedDataFontC1EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5
 873              		.section	.text._ZNK8touchgfx16UnmappedDataFont8getGlyphEtRPKhRh,"ax",%progbits
 874              		.align	1
 875              		.global	_ZNK8touchgfx16UnmappedDataFont8getGlyphEtRPKhRh
 876              		.syntax unified
 877              		.thumb
 878              		.thumb_func
 879              		.fpu fpv4-sp-d16
 881              	_ZNK8touchgfx16UnmappedDataFont8getGlyphEtRPKhRh:
 882              	.LFB90:
  23:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  24:Src/generated/fonts/src/UnmappedDataFont.cpp **** const GlyphNode* UnmappedDataFont::getGlyph(Unicode::UnicodeChar unicode, const uint8_t*& pixelData
  25:Src/generated/fonts/src/UnmappedDataFont.cpp **** {
 883              		.loc 4 25 1
 884              		.cfi_startproc
 885              		@ args = 0, pretend = 0, frame = 24
 886              		@ frame_needed = 1, uses_anonymous_args = 0
 887 0000 90B5     		push	{r4, r7, lr}
 888              	.LCFI79:
 889              		.cfi_def_cfa_offset 12
 890              		.cfi_offset 4, -12
 891              		.cfi_offset 7, -8
 892              		.cfi_offset 14, -4
 893 0002 87B0     		sub	sp, sp, #28
 894              	.LCFI80:
 895              		.cfi_def_cfa_offset 40
 896 0004 00AF     		add	r7, sp, #0
 897              	.LCFI81:
 898              		.cfi_def_cfa_register 7
 899 0006 F860     		str	r0, [r7, #12]
 900 0008 7A60     		str	r2, [r7, #4]
 901 000a 3B60     		str	r3, [r7]
 902 000c 0B46     		mov	r3, r1	@ movhi
 903 000e 7B81     		strh	r3, [r7, #10]	@ movhi
  26:Src/generated/fonts/src/UnmappedDataFont.cpp ****     int index = lookupUnicode(unicode);
 904              		.loc 4 26 30
 905 0010 7B89     		ldrh	r3, [r7, #10]
 906 0012 1946     		mov	r1, r3
 907 0014 F868     		ldr	r0, [r7, #12]
 908 0016 FFF7FEFF 		bl	_ZNK8touchgfx16UnmappedDataFont13lookupUnicodeEt
 909 001a 7861     		str	r0, [r7, #20]
 910              	.LBB8:
  27:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  28:Src/generated/fonts/src/UnmappedDataFont.cpp ****     if (index != -1)
 911              		.loc 4 28 5
 912 001c 7B69     		ldr	r3, [r7, #20]
 913 001e B3F1FF3F 		cmp	r3, #-1
 914 0022 29D0     		beq	.L38
 915              	.LBB9:
  29:Src/generated/fonts/src/UnmappedDataFont.cpp ****     {
  30:Src/generated/fonts/src/UnmappedDataFont.cpp ****         //Read glyphNode from unmapped flash
  31:Src/generated/fonts/src/UnmappedDataFont.cpp ****         touchgfx::FlashDataReader* const flashReader = ApplicationFontProvider::getFlashReader();
 916              		.loc 4 31 95
 917 0024 FFF7FEFF 		bl	_ZN23ApplicationFontProvider14getFlashReaderEv
 918 0028 3861     		str	r0, [r7, #16]
  32:Src/generated/fonts/src/UnmappedDataFont.cpp ****         flashReader->copyData(glyphList + index, &glyphNodeBuffer, sizeof(GlyphNode));
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 28


 919              		.loc 4 32 85
 920 002a 3B69     		ldr	r3, [r7, #16]
 921 002c 1B68     		ldr	r3, [r3]
 922 002e 0C33     		adds	r3, r3, #12
 923 0030 1C68     		ldr	r4, [r3]
 924              		.loc 4 32 31
 925 0032 FB68     		ldr	r3, [r7, #12]
 926 0034 1969     		ldr	r1, [r3, #16]
 927              		.loc 4 32 43
 928 0036 7A69     		ldr	r2, [r7, #20]
 929              		.loc 4 32 41
 930 0038 1346     		mov	r3, r2
 931 003a DB00     		lsls	r3, r3, #3
 932 003c 9B1A     		subs	r3, r3, r2
 933 003e 5B00     		lsls	r3, r3, #1
 934              		.loc 4 32 30
 935 0040 1944     		add	r1, r1, r3
 936 0042 0E23     		movs	r3, #14
 937 0044 0F4A     		ldr	r2, .L40
 938 0046 3869     		ldr	r0, [r7, #16]
 939 0048 A047     		blx	r4
 940              	.LVL1:
  33:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  34:Src/generated/fonts/src/UnmappedDataFont.cpp ****         pixelData = getPixelData(const_cast<const GlyphNode*>(&glyphNodeBuffer));
 941              		.loc 4 34 80
 942 004a FB68     		ldr	r3, [r7, #12]
 943 004c 1B68     		ldr	r3, [r3]
 944 004e 4C33     		adds	r3, r3, #76
 945 0050 1B68     		ldr	r3, [r3]
 946              		.loc 4 34 33
 947 0052 0C49     		ldr	r1, .L40
 948 0054 F868     		ldr	r0, [r7, #12]
 949 0056 9847     		blx	r3
 950              	.LVL2:
 951 0058 0246     		mov	r2, r0
 952              		.loc 4 34 19
 953 005a 7B68     		ldr	r3, [r7, #4]
 954 005c 1A60     		str	r2, [r3]
  35:Src/generated/fonts/src/UnmappedDataFont.cpp ****         bitsPerPixel = getBitsPerPixel();
 955              		.loc 4 35 39
 956 005e FA68     		ldr	r2, [r7, #12]
 957              		.loc 4 35 40
 958 0060 FB68     		ldr	r3, [r7, #12]
 959 0062 1B68     		ldr	r3, [r3]
 960 0064 3433     		adds	r3, r3, #52
 961 0066 1B68     		ldr	r3, [r3]
 962              		.loc 4 35 39
 963 0068 1046     		mov	r0, r2
 964 006a 9847     		blx	r3
 965              	.LVL3:
 966 006c 0346     		mov	r3, r0
 967 006e 1A46     		mov	r2, r3
 968              		.loc 4 35 22
 969 0070 3B68     		ldr	r3, [r7]
 970 0072 1A70     		strb	r2, [r3]
  36:Src/generated/fonts/src/UnmappedDataFont.cpp ****         return &glyphNodeBuffer;
 971              		.loc 4 36 17
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 29


 972 0074 034B     		ldr	r3, .L40
 973 0076 00E0     		b	.L39
 974              	.L38:
 975              	.LBE9:
 976              	.LBE8:
  37:Src/generated/fonts/src/UnmappedDataFont.cpp ****     }
  38:Src/generated/fonts/src/UnmappedDataFont.cpp ****     return 0;
 977              		.loc 4 38 12
 978 0078 0023     		movs	r3, #0
 979              	.L39:
  39:Src/generated/fonts/src/UnmappedDataFont.cpp **** }
 980              		.loc 4 39 1
 981 007a 1846     		mov	r0, r3
 982 007c 1C37     		adds	r7, r7, #28
 983              	.LCFI82:
 984              		.cfi_def_cfa_offset 12
 985 007e BD46     		mov	sp, r7
 986              	.LCFI83:
 987              		.cfi_def_cfa_register 13
 988              		@ sp needed
 989 0080 90BD     		pop	{r4, r7, pc}
 990              	.L41:
 991 0082 00BF     		.align	2
 992              	.L40:
 993 0084 00000000 		.word	_ZN8touchgfx16UnmappedDataFont15glyphNodeBufferE
 994              		.cfi_endproc
 995              	.LFE90:
 997              		.section	.text._ZNK8touchgfx16UnmappedDataFont12getPixelDataEPKNS_9GlyphNodeE,"ax",%progbits
 998              		.align	1
 999              		.global	_ZNK8touchgfx16UnmappedDataFont12getPixelDataEPKNS_9GlyphNodeE
 1000              		.syntax unified
 1001              		.thumb
 1002              		.thumb_func
 1003              		.fpu fpv4-sp-d16
 1005              	_ZNK8touchgfx16UnmappedDataFont12getPixelDataEPKNS_9GlyphNodeE:
 1006              	.LFB91:
  40:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  41:Src/generated/fonts/src/UnmappedDataFont.cpp **** const uint8_t* UnmappedDataFont::getPixelData(const GlyphNode* glyph) const
  42:Src/generated/fonts/src/UnmappedDataFont.cpp **** {
 1007              		.loc 4 42 1
 1008              		.cfi_startproc
 1009              		@ args = 0, pretend = 0, frame = 16
 1010              		@ frame_needed = 1, uses_anonymous_args = 0
 1011              		@ link register save eliminated.
 1012 0000 80B4     		push	{r7}
 1013              	.LCFI84:
 1014              		.cfi_def_cfa_offset 4
 1015              		.cfi_offset 7, -4
 1016 0002 85B0     		sub	sp, sp, #20
 1017              	.LCFI85:
 1018              		.cfi_def_cfa_offset 24
 1019 0004 00AF     		add	r7, sp, #0
 1020              	.LCFI86:
 1021              		.cfi_def_cfa_register 7
 1022 0006 7860     		str	r0, [r7, #4]
 1023 0008 3960     		str	r1, [r7]
  43:Src/generated/fonts/src/UnmappedDataFont.cpp ****     const uint8_t* const* table = (const uint8_t* const*)glyphDataList;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 30


 1024              		.loc 4 43 27
 1025 000a 7B68     		ldr	r3, [r7, #4]
 1026 000c DB69     		ldr	r3, [r3, #28]
 1027 000e FB60     		str	r3, [r7, #12]
  44:Src/generated/fonts/src/UnmappedDataFont.cpp ****     return &(table[glyph->unicode / 2048][glyph->dataOffset]);
 1028              		.loc 4 44 27
 1029 0010 3B68     		ldr	r3, [r7]
 1030 0012 9B88     		ldrh	r3, [r3, #4]
 1031              		.loc 4 44 35
 1032 0014 DB0A     		lsrs	r3, r3, #11
 1033 0016 9BB2     		uxth	r3, r3
 1034              		.loc 4 44 41
 1035 0018 9B00     		lsls	r3, r3, #2
 1036 001a FA68     		ldr	r2, [r7, #12]
 1037 001c 1344     		add	r3, r3, r2
 1038 001e 1A68     		ldr	r2, [r3]
 1039              		.loc 4 44 50
 1040 0020 3B68     		ldr	r3, [r7]
 1041 0022 1B68     		ldr	r3, [r3]	@ unaligned
 1042              		.loc 4 44 61
 1043 0024 1344     		add	r3, r3, r2
  45:Src/generated/fonts/src/UnmappedDataFont.cpp **** }
 1044              		.loc 4 45 1
 1045 0026 1846     		mov	r0, r3
 1046 0028 1437     		adds	r7, r7, #20
 1047              	.LCFI87:
 1048              		.cfi_def_cfa_offset 4
 1049 002a BD46     		mov	sp, r7
 1050              	.LCFI88:
 1051              		.cfi_def_cfa_register 13
 1052              		@ sp needed
 1053 002c 5DF8047B 		ldr	r7, [sp], #4
 1054              	.LCFI89:
 1055              		.cfi_restore 7
 1056              		.cfi_def_cfa_offset 0
 1057 0030 7047     		bx	lr
 1058              		.cfi_endproc
 1059              	.LFE91:
 1061              		.section	.text._ZNK8touchgfx16UnmappedDataFont10getKerningEtPKNS_9GlyphNodeE,"ax",%progbits
 1062              		.align	1
 1063              		.global	_ZNK8touchgfx16UnmappedDataFont10getKerningEtPKNS_9GlyphNodeE
 1064              		.syntax unified
 1065              		.thumb
 1066              		.thumb_func
 1067              		.fpu fpv4-sp-d16
 1069              	_ZNK8touchgfx16UnmappedDataFont10getKerningEtPKNS_9GlyphNodeE:
 1070              	.LFB92:
  46:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  47:Src/generated/fonts/src/UnmappedDataFont.cpp **** int8_t UnmappedDataFont::getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const
  48:Src/generated/fonts/src/UnmappedDataFont.cpp **** {
 1071              		.loc 4 48 1
 1072              		.cfi_startproc
 1073              		@ args = 0, pretend = 0, frame = 32
 1074              		@ frame_needed = 1, uses_anonymous_args = 0
 1075              		@ link register save eliminated.
 1076 0000 80B4     		push	{r7}
 1077              	.LCFI90:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 31


 1078              		.cfi_def_cfa_offset 4
 1079              		.cfi_offset 7, -4
 1080 0002 89B0     		sub	sp, sp, #36
 1081              	.LCFI91:
 1082              		.cfi_def_cfa_offset 40
 1083 0004 00AF     		add	r7, sp, #0
 1084              	.LCFI92:
 1085              		.cfi_def_cfa_register 7
 1086 0006 F860     		str	r0, [r7, #12]
 1087 0008 0B46     		mov	r3, r1
 1088 000a 7A60     		str	r2, [r7, #4]
 1089 000c 7B81     		strh	r3, [r7, #10]	@ movhi
  49:Src/generated/fonts/src/UnmappedDataFont.cpp ****     if (!glyph || glyph->kerningTableSize == 0)
 1090              		.loc 4 49 5
 1091 000e 7B68     		ldr	r3, [r7, #4]
 1092 0010 002B     		cmp	r3, #0
 1093 0012 03D0     		beq	.L45
 1094              		.loc 4 49 26 discriminator 1
 1095 0014 7B68     		ldr	r3, [r7, #4]
 1096 0016 1B7B     		ldrb	r3, [r3, #12]	@ zero_extendqisi2
 1097              		.loc 4 49 16 discriminator 1
 1098 0018 002B     		cmp	r3, #0
 1099 001a 01D1     		bne	.L46
 1100              	.L45:
  50:Src/generated/fonts/src/UnmappedDataFont.cpp ****     {
  51:Src/generated/fonts/src/UnmappedDataFont.cpp ****         return 0;
 1101              		.loc 4 51 16
 1102 001c 0023     		movs	r3, #0
 1103 001e 30E0     		b	.L47
 1104              	.L46:
  52:Src/generated/fonts/src/UnmappedDataFont.cpp ****     }
  53:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  54:Src/generated/fonts/src/UnmappedDataFont.cpp ****     const KerningNode* kerndata = kerningData + glyph->kerningTablePos();
 1105              		.loc 4 54 35
 1106 0020 FB68     		ldr	r3, [r7, #12]
 1107 0022 1A6A     		ldr	r2, [r3, #32]
 1108 0024 7B68     		ldr	r3, [r7, #4]
 1109 0026 7B61     		str	r3, [r7, #20]
 1110              	.LBB10:
 1111              	.LBB11:
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1112              		.loc 1 60 18
 1113 0028 7B69     		ldr	r3, [r7, #20]
 1114 002a 5B7B     		ldrb	r3, [r3, #13]	@ zero_extendqisi2
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1115              		.loc 1 60 62
 1116 002c 1B02     		lsls	r3, r3, #8
 1117 002e 1BB2     		sxth	r3, r3
 1118 0030 03F4E063 		and	r3, r3, #1792
 1119 0034 19B2     		sxth	r1, r3
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1120              		.loc 1 60 70
 1121 0036 7B69     		ldr	r3, [r7, #20]
 1122 0038 DB7A     		ldrb	r3, [r3, #11]	@ zero_extendqisi2
 1123 003a 1BB2     		sxth	r3, r3
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1124              		.loc 1 60 68
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 32


 1125 003c 0B43     		orrs	r3, r3, r1
 1126 003e 1BB2     		sxth	r3, r3
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp ****     }
 1127              		.loc 1 60 70
 1128 0040 9BB2     		uxth	r3, r3
 1129              	.LBE11:
 1130              	.LBE10:
 1131              		.loc 4 54 47
 1132 0042 9B00     		lsls	r3, r3, #2
 1133              		.loc 4 54 72
 1134 0044 1344     		add	r3, r3, r2
 1135 0046 FB61     		str	r3, [r7, #28]
 1136              	.LBB12:
  55:Src/generated/fonts/src/UnmappedDataFont.cpp ****     for (uint16_t i = glyph->kerningTableSize; i > 0; i--, kerndata++)
 1137              		.loc 4 55 30
 1138 0048 7B68     		ldr	r3, [r7, #4]
 1139 004a 1B7B     		ldrb	r3, [r3, #12]	@ zero_extendqisi2
 1140              		.loc 4 55 19
 1141 004c 7B83     		strh	r3, [r7, #26]	@ movhi
 1142              	.L52:
 1143              		.loc 4 55 50 discriminator 1
 1144 004e 7B8B     		ldrh	r3, [r7, #26]
 1145 0050 002B     		cmp	r3, #0
 1146 0052 15D0     		beq	.L49
  56:Src/generated/fonts/src/UnmappedDataFont.cpp ****     {
  57:Src/generated/fonts/src/UnmappedDataFont.cpp ****         if (prevChar == kerndata->unicodePrevChar)
 1147              		.loc 4 57 35
 1148 0054 FB69     		ldr	r3, [r7, #28]
 1149 0056 1B88     		ldrh	r3, [r3]
 1150              		.loc 4 57 9
 1151 0058 7A89     		ldrh	r2, [r7, #10]
 1152 005a 9A42     		cmp	r2, r3
 1153 005c 03D1     		bne	.L50
  58:Src/generated/fonts/src/UnmappedDataFont.cpp ****         {
  59:Src/generated/fonts/src/UnmappedDataFont.cpp ****             return kerndata->distance;
 1154              		.loc 4 59 30
 1155 005e FB69     		ldr	r3, [r7, #28]
 1156 0060 93F90230 		ldrsb	r3, [r3, #2]
 1157 0064 0DE0     		b	.L47
 1158              	.L50:
  60:Src/generated/fonts/src/UnmappedDataFont.cpp ****         }
  61:Src/generated/fonts/src/UnmappedDataFont.cpp ****         if (prevChar < kerndata->unicodePrevChar)
 1159              		.loc 4 61 34
 1160 0066 FB69     		ldr	r3, [r7, #28]
 1161 0068 1B88     		ldrh	r3, [r3]
 1162              		.loc 4 61 9
 1163 006a 7A89     		ldrh	r2, [r7, #10]
 1164 006c 9A42     		cmp	r2, r3
 1165 006e 06D3     		bcc	.L53
  55:Src/generated/fonts/src/UnmappedDataFont.cpp ****     {
 1166              		.loc 4 55 5 discriminator 2
 1167 0070 7B8B     		ldrh	r3, [r7, #26]
 1168 0072 013B     		subs	r3, r3, #1
 1169 0074 7B83     		strh	r3, [r7, #26]	@ movhi
 1170 0076 FB69     		ldr	r3, [r7, #28]
 1171 0078 0433     		adds	r3, r3, #4
 1172 007a FB61     		str	r3, [r7, #28]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 33


 1173 007c E7E7     		b	.L52
 1174              	.L53:
  62:Src/generated/fonts/src/UnmappedDataFont.cpp ****         {
  63:Src/generated/fonts/src/UnmappedDataFont.cpp ****             break;
 1175              		.loc 4 63 13
 1176 007e 00BF     		nop
 1177              	.L49:
 1178              	.LBE12:
  64:Src/generated/fonts/src/UnmappedDataFont.cpp ****         }
  65:Src/generated/fonts/src/UnmappedDataFont.cpp ****     }
  66:Src/generated/fonts/src/UnmappedDataFont.cpp ****     return 0;
 1179              		.loc 4 66 12
 1180 0080 0023     		movs	r3, #0
 1181              	.L47:
  67:Src/generated/fonts/src/UnmappedDataFont.cpp **** }
 1182              		.loc 4 67 1
 1183 0082 1846     		mov	r0, r3
 1184 0084 2437     		adds	r7, r7, #36
 1185              	.LCFI93:
 1186              		.cfi_def_cfa_offset 4
 1187 0086 BD46     		mov	sp, r7
 1188              	.LCFI94:
 1189              		.cfi_def_cfa_register 13
 1190              		@ sp needed
 1191 0088 5DF8047B 		ldr	r7, [sp], #4
 1192              	.LCFI95:
 1193              		.cfi_restore 7
 1194              		.cfi_def_cfa_offset 0
 1195 008c 7047     		bx	lr
 1196              		.cfi_endproc
 1197              	.LFE92:
 1199              		.section	.text._ZNK8touchgfx16UnmappedDataFont13lookupUnicodeEt,"ax",%progbits
 1200              		.align	1
 1201              		.global	_ZNK8touchgfx16UnmappedDataFont13lookupUnicodeEt
 1202              		.syntax unified
 1203              		.thumb
 1204              		.thumb_func
 1205              		.fpu fpv4-sp-d16
 1207              	_ZNK8touchgfx16UnmappedDataFont13lookupUnicodeEt:
 1208              	.LFB93:
  68:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  69:Src/generated/fonts/src/UnmappedDataFont.cpp **** int UnmappedDataFont::lookupUnicode(uint16_t unicode) const
  70:Src/generated/fonts/src/UnmappedDataFont.cpp **** {
 1209              		.loc 4 70 1
 1210              		.cfi_startproc
 1211              		@ args = 0, pretend = 0, frame = 24
 1212              		@ frame_needed = 1, uses_anonymous_args = 0
 1213              		@ link register save eliminated.
 1214 0000 80B4     		push	{r7}
 1215              	.LCFI96:
 1216              		.cfi_def_cfa_offset 4
 1217              		.cfi_offset 7, -4
 1218 0002 87B0     		sub	sp, sp, #28
 1219              	.LCFI97:
 1220              		.cfi_def_cfa_offset 32
 1221 0004 00AF     		add	r7, sp, #0
 1222              	.LCFI98:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 34


 1223              		.cfi_def_cfa_register 7
 1224 0006 7860     		str	r0, [r7, #4]
 1225 0008 0B46     		mov	r3, r1
 1226 000a 7B80     		strh	r3, [r7, #2]	@ movhi
  71:Src/generated/fonts/src/UnmappedDataFont.cpp ****     int32_t min = 0;
 1227              		.loc 4 71 13
 1228 000c 0023     		movs	r3, #0
 1229 000e 7B61     		str	r3, [r7, #20]
  72:Src/generated/fonts/src/UnmappedDataFont.cpp ****     int32_t max = listSize - 1;
 1230              		.loc 4 72 19
 1231 0010 7B68     		ldr	r3, [r7, #4]
 1232 0012 9B8A     		ldrh	r3, [r3, #20]
 1233              		.loc 4 72 13
 1234 0014 013B     		subs	r3, r3, #1
 1235 0016 3B61     		str	r3, [r7, #16]
  73:Src/generated/fonts/src/UnmappedDataFont.cpp **** 
  74:Src/generated/fonts/src/UnmappedDataFont.cpp ****     int32_t mid = min + (unicode - unicodes[min]); // Linear up from [min].unicode
 1236              		.loc 4 74 26
 1237 0018 7B88     		ldrh	r3, [r7, #2]
 1238              		.loc 4 74 36
 1239 001a 7A68     		ldr	r2, [r7, #4]
 1240 001c 9169     		ldr	r1, [r2, #24]
 1241              		.loc 4 74 45
 1242 001e 7A69     		ldr	r2, [r7, #20]
 1243              		.loc 4 74 48
 1244 0020 5200     		lsls	r2, r2, #1
 1245 0022 0A44     		add	r2, r2, r1
 1246 0024 1288     		ldrh	r2, [r2]
 1247              		.loc 4 74 34
 1248 0026 9B1A     		subs	r3, r3, r2
 1249              		.loc 4 74 13
 1250 0028 7A69     		ldr	r2, [r7, #20]
 1251 002a 1344     		add	r3, r3, r2
 1252 002c FB60     		str	r3, [r7, #12]
  75:Src/generated/fonts/src/UnmappedDataFont.cpp ****     if (mid < min)
 1253              		.loc 4 75 5
 1254 002e FA68     		ldr	r2, [r7, #12]
 1255 0030 7B69     		ldr	r3, [r7, #20]
 1256 0032 9A42     		cmp	r2, r3
 1257 0034 02DA     		bge	.L55
  76:Src/generated/fonts/src/UnmappedDataFont.cpp ****     {
  77:Src/generated/fonts/src/UnmappedDataFont.cpp ****         // Unicode < unicodes[min] => not found
  78:Src/generated/fonts/src/UnmappedDataFont.cpp ****         return -1;
 1258              		.loc 4 78 17
 1259 0036 4FF0FF33 		mov	r3, #-1
 1260 003a 87E0     		b	.L56
 1261              	.L55:
  79:Src/generated/fonts/src/UnmappedDataFont.cpp ****     }
  80:Src/generated/fonts/src/UnmappedDataFont.cpp ****     if (mid > max)
 1262              		.loc 4 80 5
 1263 003c FA68     		ldr	r2, [r7, #12]
 1264 003e 3B69     		ldr	r3, [r7, #16]
 1265 0040 9A42     		cmp	r2, r3
 1266 0042 1DDD     		ble	.L67
  81:Src/generated/fonts/src/UnmappedDataFont.cpp ****     {
  82:Src/generated/fonts/src/UnmappedDataFont.cpp ****         // Linear up ends too high
  83:Src/generated/fonts/src/UnmappedDataFont.cpp ****         mid = max - (unicodes[max] - unicode); // Linear down from [max].unicode
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 35


 1267              		.loc 4 83 22
 1268 0044 7B68     		ldr	r3, [r7, #4]
 1269 0046 9A69     		ldr	r2, [r3, #24]
 1270              		.loc 4 83 31
 1271 0048 3B69     		ldr	r3, [r7, #16]
 1272              		.loc 4 83 34
 1273 004a 5B00     		lsls	r3, r3, #1
 1274 004c 1344     		add	r3, r3, r2
 1275 004e 1B88     		ldrh	r3, [r3]
 1276 0050 1A46     		mov	r2, r3
 1277              		.loc 4 83 38
 1278 0052 7B88     		ldrh	r3, [r7, #2]
 1279              		.loc 4 83 36
 1280 0054 D31A     		subs	r3, r2, r3
 1281              		.loc 4 83 13
 1282 0056 3A69     		ldr	r2, [r7, #16]
 1283 0058 D31A     		subs	r3, r2, r3
 1284 005a FB60     		str	r3, [r7, #12]
  84:Src/generated/fonts/src/UnmappedDataFont.cpp ****         if (mid > max)
 1285              		.loc 4 84 9
 1286 005c FA68     		ldr	r2, [r7, #12]
 1287 005e 3B69     		ldr	r3, [r7, #16]
 1288 0060 9A42     		cmp	r2, r3
 1289 0062 02DD     		ble	.L58
  85:Src/generated/fonts/src/UnmappedDataFont.cpp ****         {
  86:Src/generated/fonts/src/UnmappedDataFont.cpp ****             // Unicode > unicodes[max] => not found
  87:Src/generated/fonts/src/UnmappedDataFont.cpp ****             return -1;
 1290              		.loc 4 87 21
 1291 0064 4FF0FF33 		mov	r3, #-1
 1292 0068 70E0     		b	.L56
 1293              	.L58:
  88:Src/generated/fonts/src/UnmappedDataFont.cpp ****         }
  89:Src/generated/fonts/src/UnmappedDataFont.cpp ****         if (mid < min)
 1294              		.loc 4 89 9
 1295 006a FA68     		ldr	r2, [r7, #12]
 1296 006c 7B69     		ldr	r3, [r7, #20]
 1297 006e 9A42     		cmp	r2, r3
 1298 0070 06DA     		bge	.L67
  90:Src/generated/fonts/src/UnmappedDataFont.cpp ****         {
  91:Src/generated/fonts/src/UnmappedDataFont.cpp ****             // Linear down ends too low, take the middle element
  92:Src/generated/fonts/src/UnmappedDataFont.cpp ****             mid = (min + max) / 2;
 1299              		.loc 4 92 24
 1300 0072 7A69     		ldr	r2, [r7, #20]
 1301 0074 3B69     		ldr	r3, [r7, #16]
 1302 0076 1344     		add	r3, r3, r2
 1303              		.loc 4 92 17
 1304 0078 DA0F     		lsrs	r2, r3, #31
 1305 007a 1344     		add	r3, r3, r2
 1306 007c 5B10     		asrs	r3, r3, #1
 1307 007e FB60     		str	r3, [r7, #12]
 1308              	.L67:
  93:Src/generated/fonts/src/UnmappedDataFont.cpp ****         }
  94:Src/generated/fonts/src/UnmappedDataFont.cpp ****     }
  95:Src/generated/fonts/src/UnmappedDataFont.cpp ****     while (min <= max)
 1309              		.loc 4 95 16
 1310 0080 7A69     		ldr	r2, [r7, #20]
 1311 0082 3B69     		ldr	r3, [r7, #16]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 36


 1312 0084 9A42     		cmp	r2, r3
 1313 0086 5FDC     		bgt	.L59
  96:Src/generated/fonts/src/UnmappedDataFont.cpp ****     {
  97:Src/generated/fonts/src/UnmappedDataFont.cpp ****         if (unicode == unicodes[mid])
 1314              		.loc 4 97 24
 1315 0088 7B68     		ldr	r3, [r7, #4]
 1316 008a 9A69     		ldr	r2, [r3, #24]
 1317              		.loc 4 97 33
 1318 008c FB68     		ldr	r3, [r7, #12]
 1319              		.loc 4 97 36
 1320 008e 5B00     		lsls	r3, r3, #1
 1321 0090 1344     		add	r3, r3, r2
 1322              		.loc 4 97 21
 1323 0092 1B88     		ldrh	r3, [r3]
 1324              		.loc 4 97 9
 1325 0094 7A88     		ldrh	r2, [r7, #2]
 1326 0096 9A42     		cmp	r2, r3
 1327 0098 01D1     		bne	.L60
  98:Src/generated/fonts/src/UnmappedDataFont.cpp ****         {
  99:Src/generated/fonts/src/UnmappedDataFont.cpp ****             // Found at [mid]
 100:Src/generated/fonts/src/UnmappedDataFont.cpp ****             return mid;
 1328              		.loc 4 100 20
 1329 009a FB68     		ldr	r3, [r7, #12]
 1330 009c 56E0     		b	.L56
 1331              	.L60:
 101:Src/generated/fonts/src/UnmappedDataFont.cpp ****         }
 102:Src/generated/fonts/src/UnmappedDataFont.cpp ****         if (unicode < unicodes[mid])
 1332              		.loc 4 102 23
 1333 009e 7B68     		ldr	r3, [r7, #4]
 1334 00a0 9A69     		ldr	r2, [r3, #24]
 1335              		.loc 4 102 32
 1336 00a2 FB68     		ldr	r3, [r7, #12]
 1337              		.loc 4 102 35
 1338 00a4 5B00     		lsls	r3, r3, #1
 1339 00a6 1344     		add	r3, r3, r2
 1340              		.loc 4 102 21
 1341 00a8 1B88     		ldrh	r3, [r3]
 1342              		.loc 4 102 9
 1343 00aa 7A88     		ldrh	r2, [r7, #2]
 1344 00ac 9A42     		cmp	r2, r3
 1345 00ae 22D2     		bcs	.L61
 103:Src/generated/fonts/src/UnmappedDataFont.cpp ****         {
 104:Src/generated/fonts/src/UnmappedDataFont.cpp ****             // Unicode is in lower half
 105:Src/generated/fonts/src/UnmappedDataFont.cpp ****             max = mid - 1;
 1346              		.loc 4 105 17
 1347 00b0 FB68     		ldr	r3, [r7, #12]
 1348 00b2 013B     		subs	r3, r3, #1
 1349 00b4 3B61     		str	r3, [r7, #16]
 106:Src/generated/fonts/src/UnmappedDataFont.cpp ****             if (max < min)
 1350              		.loc 4 106 13
 1351 00b6 3A69     		ldr	r2, [r7, #16]
 1352 00b8 7B69     		ldr	r3, [r7, #20]
 1353 00ba 9A42     		cmp	r2, r3
 1354 00bc 3DDB     		blt	.L68
 107:Src/generated/fonts/src/UnmappedDataFont.cpp ****             {
 108:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 // Range is empty => not found
 109:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 break;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 37


 110:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 111:Src/generated/fonts/src/UnmappedDataFont.cpp ****             // We adjusted max, try linear down from [max].unicode
 112:Src/generated/fonts/src/UnmappedDataFont.cpp ****             mid = max - (unicodes[max] - unicode);
 1355              		.loc 4 112 26
 1356 00be 7B68     		ldr	r3, [r7, #4]
 1357 00c0 9A69     		ldr	r2, [r3, #24]
 1358              		.loc 4 112 35
 1359 00c2 3B69     		ldr	r3, [r7, #16]
 1360              		.loc 4 112 38
 1361 00c4 5B00     		lsls	r3, r3, #1
 1362 00c6 1344     		add	r3, r3, r2
 1363 00c8 1B88     		ldrh	r3, [r3]
 1364 00ca 1A46     		mov	r2, r3
 1365              		.loc 4 112 42
 1366 00cc 7B88     		ldrh	r3, [r7, #2]
 1367              		.loc 4 112 40
 1368 00ce D31A     		subs	r3, r2, r3
 1369              		.loc 4 112 17
 1370 00d0 3A69     		ldr	r2, [r7, #16]
 1371 00d2 D31A     		subs	r3, r2, r3
 1372 00d4 FB60     		str	r3, [r7, #12]
 113:Src/generated/fonts/src/UnmappedDataFont.cpp ****             if (mid > max)
 1373              		.loc 4 113 13
 1374 00d6 FA68     		ldr	r2, [r7, #12]
 1375 00d8 3B69     		ldr	r3, [r7, #16]
 1376 00da 9A42     		cmp	r2, r3
 1377 00dc 2FDC     		bgt	.L69
 114:Src/generated/fonts/src/UnmappedDataFont.cpp ****             {
 115:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 // Unicode > [max].unicode => not found
 116:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 break;
 117:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 118:Src/generated/fonts/src/UnmappedDataFont.cpp ****             if (mid < min)
 1378              		.loc 4 118 13
 1379 00de FA68     		ldr	r2, [r7, #12]
 1380 00e0 7B69     		ldr	r3, [r7, #20]
 1381 00e2 9A42     		cmp	r2, r3
 1382 00e4 CCDA     		bge	.L67
 119:Src/generated/fonts/src/UnmappedDataFont.cpp ****             {
 120:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 // Linear down ends too low, take the middle element
 121:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 mid = (min + max) / 2;
 1383              		.loc 4 121 28
 1384 00e6 7A69     		ldr	r2, [r7, #20]
 1385 00e8 3B69     		ldr	r3, [r7, #16]
 1386 00ea 1344     		add	r3, r3, r2
 1387              		.loc 4 121 21
 1388 00ec DA0F     		lsrs	r2, r3, #31
 1389 00ee 1344     		add	r3, r3, r2
 1390 00f0 5B10     		asrs	r3, r3, #1
 1391 00f2 FB60     		str	r3, [r7, #12]
 1392 00f4 C4E7     		b	.L67
 1393              	.L61:
 122:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 123:Src/generated/fonts/src/UnmappedDataFont.cpp ****         }
 124:Src/generated/fonts/src/UnmappedDataFont.cpp ****         else
 125:Src/generated/fonts/src/UnmappedDataFont.cpp ****         {
 126:Src/generated/fonts/src/UnmappedDataFont.cpp ****             // Unicode is in upper half
 127:Src/generated/fonts/src/UnmappedDataFont.cpp ****             min = mid + 1;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 38


 1394              		.loc 4 127 17
 1395 00f6 FB68     		ldr	r3, [r7, #12]
 1396 00f8 0133     		adds	r3, r3, #1
 1397 00fa 7B61     		str	r3, [r7, #20]
 128:Src/generated/fonts/src/UnmappedDataFont.cpp ****             if (min > max)
 1398              		.loc 4 128 13
 1399 00fc 7A69     		ldr	r2, [r7, #20]
 1400 00fe 3B69     		ldr	r3, [r7, #16]
 1401 0100 9A42     		cmp	r2, r3
 1402 0102 1EDC     		bgt	.L70
 129:Src/generated/fonts/src/UnmappedDataFont.cpp ****             {
 130:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 // Range is empty => not found
 131:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 break;
 132:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 133:Src/generated/fonts/src/UnmappedDataFont.cpp ****             // We adjusted min, try linear up from [min].unicode
 134:Src/generated/fonts/src/UnmappedDataFont.cpp ****             mid = min + (unicode - unicodes[min]);
 1403              		.loc 4 134 26
 1404 0104 7B88     		ldrh	r3, [r7, #2]
 1405              		.loc 4 134 36
 1406 0106 7A68     		ldr	r2, [r7, #4]
 1407 0108 9169     		ldr	r1, [r2, #24]
 1408              		.loc 4 134 45
 1409 010a 7A69     		ldr	r2, [r7, #20]
 1410              		.loc 4 134 48
 1411 010c 5200     		lsls	r2, r2, #1
 1412 010e 0A44     		add	r2, r2, r1
 1413 0110 1288     		ldrh	r2, [r2]
 1414              		.loc 4 134 34
 1415 0112 9B1A     		subs	r3, r3, r2
 1416              		.loc 4 134 17
 1417 0114 7A69     		ldr	r2, [r7, #20]
 1418 0116 1344     		add	r3, r3, r2
 1419 0118 FB60     		str	r3, [r7, #12]
 135:Src/generated/fonts/src/UnmappedDataFont.cpp ****             if (mid < min)
 1420              		.loc 4 135 13
 1421 011a FA68     		ldr	r2, [r7, #12]
 1422 011c 7B69     		ldr	r3, [r7, #20]
 1423 011e 9A42     		cmp	r2, r3
 1424 0120 11DB     		blt	.L71
 136:Src/generated/fonts/src/UnmappedDataFont.cpp ****             {
 137:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 // Unicode < [min].unicode => not found
 138:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 break;
 139:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 140:Src/generated/fonts/src/UnmappedDataFont.cpp ****             if (mid > max)
 1425              		.loc 4 140 13
 1426 0122 FA68     		ldr	r2, [r7, #12]
 1427 0124 3B69     		ldr	r3, [r7, #16]
 1428 0126 9A42     		cmp	r2, r3
 1429 0128 AADD     		ble	.L67
 141:Src/generated/fonts/src/UnmappedDataFont.cpp ****             {
 142:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 // Linear up ends too high, take the middle element
 143:Src/generated/fonts/src/UnmappedDataFont.cpp ****                 mid = (min + max) / 2;
 1430              		.loc 4 143 28
 1431 012a 7A69     		ldr	r2, [r7, #20]
 1432 012c 3B69     		ldr	r3, [r7, #16]
 1433 012e 1344     		add	r3, r3, r2
 1434              		.loc 4 143 21
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 39


 1435 0130 DA0F     		lsrs	r2, r3, #31
 1436 0132 1344     		add	r3, r3, r2
 1437 0134 5B10     		asrs	r3, r3, #1
 1438 0136 FB60     		str	r3, [r7, #12]
  95:Src/generated/fonts/src/UnmappedDataFont.cpp ****     {
 1439              		.loc 4 95 5
 1440 0138 A2E7     		b	.L67
 1441              	.L68:
 109:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 1442              		.loc 4 109 17
 1443 013a 00BF     		nop
 1444 013c 04E0     		b	.L59
 1445              	.L69:
 116:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 1446              		.loc 4 116 17
 1447 013e 00BF     		nop
 1448 0140 02E0     		b	.L59
 1449              	.L70:
 131:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 1450              		.loc 4 131 17
 1451 0142 00BF     		nop
 1452 0144 00E0     		b	.L59
 1453              	.L71:
 138:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 1454              		.loc 4 138 17
 1455 0146 00BF     		nop
 1456              	.L59:
 144:Src/generated/fonts/src/UnmappedDataFont.cpp ****             }
 145:Src/generated/fonts/src/UnmappedDataFont.cpp ****         }
 146:Src/generated/fonts/src/UnmappedDataFont.cpp ****     }
 147:Src/generated/fonts/src/UnmappedDataFont.cpp ****     return -1;
 1457              		.loc 4 147 13
 1458 0148 4FF0FF33 		mov	r3, #-1
 1459              	.L56:
 148:Src/generated/fonts/src/UnmappedDataFont.cpp **** }
 1460              		.loc 4 148 1
 1461 014c 1846     		mov	r0, r3
 1462 014e 1C37     		adds	r7, r7, #28
 1463              	.LCFI99:
 1464              		.cfi_def_cfa_offset 4
 1465 0150 BD46     		mov	sp, r7
 1466              	.LCFI100:
 1467              		.cfi_def_cfa_register 13
 1468              		@ sp needed
 1469 0152 5DF8047B 		ldr	r7, [sp], #4
 1470              	.LCFI101:
 1471              		.cfi_restore 7
 1472              		.cfi_def_cfa_offset 0
 1473 0156 7047     		bx	lr
 1474              		.cfi_endproc
 1475              	.LFE93:
 1477              		.global	_ZTVN8touchgfx16UnmappedDataFontE
 1478              		.section	.rodata._ZTVN8touchgfx16UnmappedDataFontE,"a"
 1479              		.align	2
 1482              	_ZTVN8touchgfx16UnmappedDataFontE:
 1483 0000 00000000 		.word	0
 1484 0004 00000000 		.word	0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 40


 1485 0008 00000000 		.word	_ZN8touchgfx16UnmappedDataFontD1Ev
 1486 000c 00000000 		.word	_ZN8touchgfx16UnmappedDataFontD0Ev
 1487 0010 00000000 		.word	_ZNK8touchgfx16UnmappedDataFont8getGlyphEtRPKhRh
 1488 0014 00000000 		.word	_ZNK8touchgfx4Font8getGlyphEt
 1489 0018 00000000 		.word	_ZNK8touchgfx4Font15getFallbackCharEv
 1490 001c 00000000 		.word	_ZNK8touchgfx4Font15getEllipsisCharEv
 1491 0020 00000000 		.word	_ZNK8touchgfx4Font14getStringWidthEPKtz
 1492 0024 00000000 		.word	_ZNK8touchgfx4Font14getStringWidthEhPKtz
 1493 0028 00000000 		.word	_ZNK8touchgfx4Font12getCharWidthEt
 1494 002c 00000000 		.word	_ZNK8touchgfx4Font15getSpacingAboveEPKtz
 1495 0030 00000000 		.word	_ZNK8touchgfx4Font16getMaxTextHeightEPKtz
 1496 0034 00000000 		.word	_ZNK8touchgfx4Font13getFontHeightEv
 1497 0038 00000000 		.word	_ZNK8touchgfx4Font20getMinimumTextHeightEv
 1498 003c 00000000 		.word	_ZNK8touchgfx4Font15getBitsPerPixelEv
 1499 0040 00000000 		.word	_ZNK8touchgfx4Font15getByteAlignRowEv
 1500 0044 00000000 		.word	_ZNK8touchgfx16UnmappedDataFont10getKerningEtPKNS_9GlyphNodeE
 1501 0048 00000000 		.word	_ZNK8touchgfx4Font16getNumberOfLinesEPKtz
 1502 004c 00000000 		.word	_ZNK8touchgfx16UnmappedDataFont12getGSUBTableEv
 1503 0050 00000000 		.word	_ZNK8touchgfx16UnmappedDataFont23getContextualFormsTableEv
 1504 0054 00000000 		.word	_ZNK8touchgfx16UnmappedDataFont12getPixelDataEPKNS_9GlyphNodeE
 1505              		.section	.text._ZN8touchgfx16UnmappedDataFontD2Ev,"axG",%progbits,_ZN8touchgfx16UnmappedDataFontD5
 1506              		.align	1
 1507              		.weak	_ZN8touchgfx16UnmappedDataFontD2Ev
 1508              		.syntax unified
 1509              		.thumb
 1510              		.thumb_func
 1511              		.fpu fpv4-sp-d16
 1513              	_ZN8touchgfx16UnmappedDataFontD2Ev:
 1514              	.LFB95:
  19:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** {
 1515              		.loc 3 19 7
 1516              		.cfi_startproc
 1517              		@ args = 0, pretend = 0, frame = 8
 1518              		@ frame_needed = 1, uses_anonymous_args = 0
 1519 0000 80B5     		push	{r7, lr}
 1520              	.LCFI102:
 1521              		.cfi_def_cfa_offset 8
 1522              		.cfi_offset 7, -8
 1523              		.cfi_offset 14, -4
 1524 0002 82B0     		sub	sp, sp, #8
 1525              	.LCFI103:
 1526              		.cfi_def_cfa_offset 16
 1527 0004 00AF     		add	r7, sp, #0
 1528              	.LCFI104:
 1529              		.cfi_def_cfa_register 7
 1530 0006 7860     		str	r0, [r7, #4]
 1531              	.LBB13:
  19:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** {
 1532              		.loc 3 19 7
 1533 0008 054A     		ldr	r2, .L74
 1534 000a 7B68     		ldr	r3, [r7, #4]
 1535 000c 1A60     		str	r2, [r3]
 1536 000e 7B68     		ldr	r3, [r7, #4]
 1537 0010 1846     		mov	r0, r3
 1538 0012 FFF7FEFF 		bl	_ZN8touchgfx4FontD2Ev
 1539              	.LBE13:
 1540 0016 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 41


 1541 0018 1846     		mov	r0, r3
 1542 001a 0837     		adds	r7, r7, #8
 1543              	.LCFI105:
 1544              		.cfi_def_cfa_offset 8
 1545 001c BD46     		mov	sp, r7
 1546              	.LCFI106:
 1547              		.cfi_def_cfa_register 13
 1548              		@ sp needed
 1549 001e 80BD     		pop	{r7, pc}
 1550              	.L75:
 1551              		.align	2
 1552              	.L74:
 1553 0020 08000000 		.word	_ZTVN8touchgfx16UnmappedDataFontE+8
 1554              		.cfi_endproc
 1555              	.LFE95:
 1557              		.weak	_ZN8touchgfx16UnmappedDataFontD1Ev
 1558              		.thumb_set _ZN8touchgfx16UnmappedDataFontD1Ev,_ZN8touchgfx16UnmappedDataFontD2Ev
 1559              		.section	.text._ZN8touchgfx16UnmappedDataFontD0Ev,"axG",%progbits,_ZN8touchgfx16UnmappedDataFontD5
 1560              		.align	1
 1561              		.weak	_ZN8touchgfx16UnmappedDataFontD0Ev
 1562              		.syntax unified
 1563              		.thumb
 1564              		.thumb_func
 1565              		.fpu fpv4-sp-d16
 1567              	_ZN8touchgfx16UnmappedDataFontD0Ev:
 1568              	.LFB97:
  19:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** {
 1569              		.loc 3 19 7
 1570              		.cfi_startproc
 1571              		@ args = 0, pretend = 0, frame = 8
 1572              		@ frame_needed = 1, uses_anonymous_args = 0
 1573 0000 80B5     		push	{r7, lr}
 1574              	.LCFI107:
 1575              		.cfi_def_cfa_offset 8
 1576              		.cfi_offset 7, -8
 1577              		.cfi_offset 14, -4
 1578 0002 82B0     		sub	sp, sp, #8
 1579              	.LCFI108:
 1580              		.cfi_def_cfa_offset 16
 1581 0004 00AF     		add	r7, sp, #0
 1582              	.LCFI109:
 1583              		.cfi_def_cfa_register 7
 1584 0006 7860     		str	r0, [r7, #4]
  19:Src/generated/fonts/include/fonts/UnmappedDataFont.hpp **** {
 1585              		.loc 3 19 7
 1586 0008 7868     		ldr	r0, [r7, #4]
 1587 000a FFF7FEFF 		bl	_ZN8touchgfx16UnmappedDataFontD1Ev
 1588 000e 2C21     		movs	r1, #44
 1589 0010 7868     		ldr	r0, [r7, #4]
 1590 0012 FFF7FEFF 		bl	_ZdlPvj
 1591 0016 7B68     		ldr	r3, [r7, #4]
 1592 0018 1846     		mov	r0, r3
 1593 001a 0837     		adds	r7, r7, #8
 1594              	.LCFI110:
 1595              		.cfi_def_cfa_offset 8
 1596 001c BD46     		mov	sp, r7
 1597              	.LCFI111:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 42


 1598              		.cfi_def_cfa_register 13
 1599              		@ sp needed
 1600 001e 80BD     		pop	{r7, pc}
 1601              		.cfi_endproc
 1602              	.LFE97:
 1604              		.text
 1605              	.Letext0:
 1606              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 1607              		.file 6 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 1608              		.file 7 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 1609              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/FlashDataReader.hpp"
 1610              		.file 9 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 1611              		.file 10 "Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp"
 1612              		.file 11 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/
 1613              		.file 12 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 43


DEFINED SYMBOLS
                            *ABS*:0000000000000000 UnmappedDataFont.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:79     .text._ZN8touchgfx4FontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:130    .text._ZN8touchgfx4FontD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:87     .text._ZN8touchgfx4FontD2Ev:0000000000000000 _ZN8touchgfx4FontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:137    .text._ZN8touchgfx4FontD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:144    .text._ZN8touchgfx4FontD0Ev:0000000000000000 _ZN8touchgfx4FontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:182    .text._ZNK8touchgfx4Font8getGlyphEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:189    .text._ZNK8touchgfx4Font8getGlyphEt:0000000000000000 _ZNK8touchgfx4Font8getGlyphEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:254    .text._ZNK8touchgfx4Font15getFallbackCharEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:261    .text._ZNK8touchgfx4Font15getFallbackCharEv:0000000000000000 _ZNK8touchgfx4Font15getFallbackCharEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:300    .text._ZNK8touchgfx4Font15getEllipsisCharEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:307    .text._ZNK8touchgfx4Font15getEllipsisCharEv:0000000000000000 _ZNK8touchgfx4Font15getEllipsisCharEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:346    .text._ZNK8touchgfx4Font13getFontHeightEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:353    .text._ZNK8touchgfx4Font13getFontHeightEv:0000000000000000 _ZNK8touchgfx4Font13getFontHeightEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:392    .text._ZNK8touchgfx4Font20getMinimumTextHeightEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:399    .text._ZNK8touchgfx4Font20getMinimumTextHeightEv:0000000000000000 _ZNK8touchgfx4Font20getMinimumTextHeightEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:444    .text._ZNK8touchgfx4Font15getBitsPerPixelEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:451    .text._ZNK8touchgfx4Font15getBitsPerPixelEv:0000000000000000 _ZNK8touchgfx4Font15getBitsPerPixelEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:492    .text._ZNK8touchgfx4Font15getByteAlignRowEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:499    .text._ZNK8touchgfx4Font15getByteAlignRowEv:0000000000000000 _ZNK8touchgfx4Font15getByteAlignRowEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:540    .text._ZN8touchgfx4FontC2Ethhhhhtt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:547    .text._ZN8touchgfx4FontC2Ethhhhhtt:0000000000000000 _ZN8touchgfx4FontC2Ethhhhhtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:634    .text._ZN8touchgfx4FontC2Ethhhhhtt:0000000000000078 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:547    .text._ZN8touchgfx4FontC2Ethhhhhtt:0000000000000000 _ZN8touchgfx4FontC1Ethhhhhtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:641    .text._ZN23ApplicationFontProvider14getFlashReaderEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:648    .text._ZN23ApplicationFontProvider14getFlashReaderEv:0000000000000000 _ZN23ApplicationFontProvider14getFlashReaderEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:680    .text._ZNK8touchgfx16UnmappedDataFont12getGSUBTableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:687    .text._ZNK8touchgfx16UnmappedDataFont12getGSUBTableEv:0000000000000000 _ZNK8touchgfx16UnmappedDataFont12getGSUBTableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:727    .text._ZNK8touchgfx16UnmappedDataFont23getContextualFormsTableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:734    .text._ZNK8touchgfx16UnmappedDataFont23getContextualFormsTableEv:0000000000000000 _ZNK8touchgfx16UnmappedDataFont23getContextualFormsTableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:777    .bss._ZN8touchgfx16UnmappedDataFont15glyphNodeBufferE:0000000000000000 _ZN8touchgfx16UnmappedDataFont15glyphNodeBufferE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:774    .bss._ZN8touchgfx16UnmappedDataFont15glyphNodeBufferE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:780    .text._ZN8touchgfx16UnmappedDataFontC2EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PKNS_24FontContextualFormsTableE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:787    .text._ZN8touchgfx16UnmappedDataFontC2EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PKNS_24FontContextualFormsTableE:0000000000000000 _ZN8touchgfx16UnmappedDataFontC2EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PKNS_24FontContextualFormsTableE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:867    .text._ZN8touchgfx16UnmappedDataFontC2EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PKNS_24FontContextualFormsTableE:0000000000000078 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1482   .rodata._ZTVN8touchgfx16UnmappedDataFontE:0000000000000000 _ZTVN8touchgfx16UnmappedDataFontE
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s 			page 44


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:787    .text._ZN8touchgfx16UnmappedDataFontC2EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PKNS_24FontContextualFormsTableE:0000000000000000 _ZN8touchgfx16UnmappedDataFontC1EPKNS_9GlyphNodeEPKttthhhhhPKPKhPKNS_11KerningNodeEttS5_PKNS_24FontContextualFormsTableE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:874    .text._ZNK8touchgfx16UnmappedDataFont8getGlyphEtRPKhRh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:881    .text._ZNK8touchgfx16UnmappedDataFont8getGlyphEtRPKhRh:0000000000000000 _ZNK8touchgfx16UnmappedDataFont8getGlyphEtRPKhRh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1207   .text._ZNK8touchgfx16UnmappedDataFont13lookupUnicodeEt:0000000000000000 _ZNK8touchgfx16UnmappedDataFont13lookupUnicodeEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:993    .text._ZNK8touchgfx16UnmappedDataFont8getGlyphEtRPKhRh:0000000000000084 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:998    .text._ZNK8touchgfx16UnmappedDataFont12getPixelDataEPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1005   .text._ZNK8touchgfx16UnmappedDataFont12getPixelDataEPKNS_9GlyphNodeE:0000000000000000 _ZNK8touchgfx16UnmappedDataFont12getPixelDataEPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1062   .text._ZNK8touchgfx16UnmappedDataFont10getKerningEtPKNS_9GlyphNodeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1069   .text._ZNK8touchgfx16UnmappedDataFont10getKerningEtPKNS_9GlyphNodeE:0000000000000000 _ZNK8touchgfx16UnmappedDataFont10getKerningEtPKNS_9GlyphNodeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1200   .text._ZNK8touchgfx16UnmappedDataFont13lookupUnicodeEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1479   .rodata._ZTVN8touchgfx16UnmappedDataFontE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1513   .text._ZN8touchgfx16UnmappedDataFontD2Ev:0000000000000000 _ZN8touchgfx16UnmappedDataFontD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1567   .text._ZN8touchgfx16UnmappedDataFontD0Ev:0000000000000000 _ZN8touchgfx16UnmappedDataFontD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1506   .text._ZN8touchgfx16UnmappedDataFontD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1513   .text._ZN8touchgfx16UnmappedDataFontD2Ev:0000000000000000 _ZN8touchgfx16UnmappedDataFontD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1553   .text._ZN8touchgfx16UnmappedDataFontD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJwJLFr.s:1560   .text._ZN8touchgfx16UnmappedDataFontD0Ev:0000000000000000 $t
                           .group:0000000000000000 _ZN8touchgfx4FontD5Ev
                           .group:0000000000000000 _ZN8touchgfx4FontC5Ethhhhhtt
                           .group:0000000000000000 _ZN8touchgfx16UnmappedDataFontD5Ev
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
_ZNK8touchgfx4Font14getStringWidthEPKtz
_ZNK8touchgfx4Font14getStringWidthEhPKtz
_ZNK8touchgfx4Font12getCharWidthEt
_ZNK8touchgfx4Font15getSpacingAboveEPKtz
_ZNK8touchgfx4Font16getMaxTextHeightEPKtz
_ZNK8touchgfx4Font16getNumberOfLinesEPKtz
