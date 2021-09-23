ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 1


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
  13              		.file	"ApplicationFontProvider.cpp"
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
  78              		.section	.text._ZN8touchgfx12FontProviderD2Ev,"axG",%progbits,_ZN8touchgfx12FontProviderD5Ev,comda
  79              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 2


  80              		.weak	_ZN8touchgfx12FontProviderD2Ev
  81              		.arch armv7e-m
  82              		.syntax unified
  83              		.thumb
  84              		.thumb_func
  85              		.fpu fpv4-sp-d16
  87              	_ZN8touchgfx12FontProviderD2Ev:
  88              	.LFB73:
  89              		.file 1 "Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****  * @file touchgfx/FontManager.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****  * Declares the touchgfx::FontProvider class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** #ifndef TOUCHGFX_FONTMANAGER_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** #define TOUCHGFX_FONTMANAGER_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** #include <touchgfx/Font.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** 
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** namespace touchgfx
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** {
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** /**
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****  * A generic pure virtual definition of a FontProvider, which is a class capable of returning a
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****  * Font based on a FontId. An application-specific derivation of this class must be
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****  * implemented.
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****  */
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** class FontProvider
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** {
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** public:
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     /**
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****      * Gets a Font.
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****      *
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****      * @param  fontId The FontId of the font to get.
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****      *
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****      * @return The font with a font id of fontId.
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****      */
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     virtual Font* getFont(FontId fontId) = 0;
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp **** 
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     /** Finalizes an instance of the FontProvider class. */
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     virtual ~FontProvider()
  90              		.loc 1 43 13
  91              		.cfi_startproc
  92              		@ args = 0, pretend = 0, frame = 8
  93              		@ frame_needed = 1, uses_anonymous_args = 0
  94              		@ link register save eliminated.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 3


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
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     {
 107              		.loc 1 44 5
 108 0008 044A     		ldr	r2, .L3
 109 000a 7B68     		ldr	r3, [r7, #4]
 110 000c 1A60     		str	r2, [r3]
 111              	.LBE2:
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     }
 112              		.loc 1 45 5
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
 130 001c 08000000 		.word	_ZTVN8touchgfx12FontProviderE+8
 131              		.cfi_endproc
 132              	.LFE73:
 134              		.weak	_ZN8touchgfx12FontProviderD1Ev
 135              		.thumb_set _ZN8touchgfx12FontProviderD1Ev,_ZN8touchgfx12FontProviderD2Ev
 136              		.section	.text._ZN8touchgfx12FontProviderD0Ev,"axG",%progbits,_ZN8touchgfx12FontProviderD5Ev,comda
 137              		.align	1
 138              		.weak	_ZN8touchgfx12FontProviderD0Ev
 139              		.syntax unified
 140              		.thumb
 141              		.thumb_func
 142              		.fpu fpv4-sp-d16
 144              	_ZN8touchgfx12FontProviderD0Ev:
 145              	.LFB75:
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     {
 146              		.loc 1 43 13
 147              		.cfi_startproc
 148              		@ args = 0, pretend = 0, frame = 8
 149              		@ frame_needed = 1, uses_anonymous_args = 0
 150 0000 80B5     		push	{r7, lr}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 4


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
 162              		.loc 1 45 5
 163 0008 7868     		ldr	r0, [r7, #4]
 164 000a FFF7FEFF 		bl	_ZN8touchgfx12FontProviderD1Ev
 165 000e 0421     		movs	r1, #4
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
 179              	.LFE75:
 181              		.section	.rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE,"a"
 182              		.align	1
 185              	_ZN8touchgfxL18TYPED_TEXT_INVALIDE:
 186 0000 FFFF     		.short	-1
 187              		.section	.text._ZN23ApplicationFontProvider7getFontEt,"ax",%progbits
 188              		.align	1
 189              		.global	_ZN23ApplicationFontProvider7getFontEt
 190              		.syntax unified
 191              		.thumb
 192              		.thumb_func
 193              		.fpu fpv4-sp-d16
 195              	_ZN23ApplicationFontProvider7getFontEt:
 196              	.LFB120:
 197              		.file 2 "Src/generated/fonts/src/ApplicationFontProvider.cpp"
   1:Src/generated/fonts/src/ApplicationFontProvider.cpp **** /* DO NOT EDIT THIS FILE */
   2:Src/generated/fonts/src/ApplicationFontProvider.cpp **** /* This file is autogenerated by the text-database code generator */
   3:Src/generated/fonts/src/ApplicationFontProvider.cpp **** 
   4:Src/generated/fonts/src/ApplicationFontProvider.cpp **** #include <fonts/ApplicationFontProvider.hpp>
   5:Src/generated/fonts/src/ApplicationFontProvider.cpp **** #include <fonts/GeneratedFont.hpp>
   6:Src/generated/fonts/src/ApplicationFontProvider.cpp **** #include <texts/TypedTextDatabase.hpp>
   7:Src/generated/fonts/src/ApplicationFontProvider.cpp **** 
   8:Src/generated/fonts/src/ApplicationFontProvider.cpp **** touchgfx::Font* ApplicationFontProvider::getFont(touchgfx::FontId typography)
   9:Src/generated/fonts/src/ApplicationFontProvider.cpp **** {
 198              		.loc 2 9 1
 199              		.cfi_startproc
 200              		@ args = 0, pretend = 0, frame = 8
 201              		@ frame_needed = 1, uses_anonymous_args = 0
 202 0000 80B5     		push	{r7, lr}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 5


 203              	.LCFI11:
 204              		.cfi_def_cfa_offset 8
 205              		.cfi_offset 7, -8
 206              		.cfi_offset 14, -4
 207 0002 82B0     		sub	sp, sp, #8
 208              	.LCFI12:
 209              		.cfi_def_cfa_offset 16
 210 0004 00AF     		add	r7, sp, #0
 211              	.LCFI13:
 212              		.cfi_def_cfa_register 7
 213 0006 7860     		str	r0, [r7, #4]
 214 0008 0B46     		mov	r3, r1
 215 000a 7B80     		strh	r3, [r7, #2]	@ movhi
  10:Src/generated/fonts/src/ApplicationFontProvider.cpp ****     switch (typography)
 216              		.loc 2 10 13
 217 000c 7B88     		ldrh	r3, [r7, #2]
 218              		.loc 2 10 5
 219 000e 022B     		cmp	r3, #2
 220 0010 10D0     		beq	.L8
 221 0012 022B     		cmp	r3, #2
 222 0014 13DC     		bgt	.L9
 223 0016 002B     		cmp	r3, #0
 224 0018 02D0     		beq	.L10
 225 001a 012B     		cmp	r3, #1
 226 001c 05D0     		beq	.L11
 227 001e 0EE0     		b	.L9
 228              	.L10:
  11:Src/generated/fonts/src/ApplicationFontProvider.cpp ****     {
  12:Src/generated/fonts/src/ApplicationFontProvider.cpp ****     case Typography::DEFAULT:
  13:Src/generated/fonts/src/ApplicationFontProvider.cpp ****         // verdana_20_4bpp
  14:Src/generated/fonts/src/ApplicationFontProvider.cpp ****         return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[0]);
 229              		.loc 2 14 71
 230 0020 FFF7FEFF 		bl	_ZN17TypedTextDatabase8getFontsEv
 231 0024 0346     		mov	r3, r0
 232              		.loc 2 14 76
 233 0026 1B68     		ldr	r3, [r3]
 234 0028 0AE0     		b	.L12
 235              	.L11:
  15:Src/generated/fonts/src/ApplicationFontProvider.cpp ****     case Typography::LARGE:
  16:Src/generated/fonts/src/ApplicationFontProvider.cpp ****         // verdana_40_4bpp
  17:Src/generated/fonts/src/ApplicationFontProvider.cpp ****         return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[1]);
 236              		.loc 2 17 71
 237 002a FFF7FEFF 		bl	_ZN17TypedTextDatabase8getFontsEv
 238 002e 0346     		mov	r3, r0
 239              		.loc 2 17 76
 240 0030 5B68     		ldr	r3, [r3, #4]
 241 0032 05E0     		b	.L12
 242              	.L8:
  18:Src/generated/fonts/src/ApplicationFontProvider.cpp ****     case Typography::SMALL:
  19:Src/generated/fonts/src/ApplicationFontProvider.cpp ****         // verdana_10_4bpp
  20:Src/generated/fonts/src/ApplicationFontProvider.cpp ****         return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[2]);
 243              		.loc 2 20 71
 244 0034 FFF7FEFF 		bl	_ZN17TypedTextDatabase8getFontsEv
 245 0038 0346     		mov	r3, r0
 246              		.loc 2 20 76
 247 003a 9B68     		ldr	r3, [r3, #8]
 248 003c 00E0     		b	.L12
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 6


 249              	.L9:
  21:Src/generated/fonts/src/ApplicationFontProvider.cpp ****     default:
  22:Src/generated/fonts/src/ApplicationFontProvider.cpp ****         return 0;
 250              		.loc 2 22 16
 251 003e 0023     		movs	r3, #0
 252              	.L12:
  23:Src/generated/fonts/src/ApplicationFontProvider.cpp ****     }
  24:Src/generated/fonts/src/ApplicationFontProvider.cpp **** }
 253              		.loc 2 24 1
 254 0040 1846     		mov	r0, r3
 255 0042 0837     		adds	r7, r7, #8
 256              	.LCFI14:
 257              		.cfi_def_cfa_offset 8
 258 0044 BD46     		mov	sp, r7
 259              	.LCFI15:
 260              		.cfi_def_cfa_register 13
 261              		@ sp needed
 262 0046 80BD     		pop	{r7, pc}
 263              		.cfi_endproc
 264              	.LFE120:
 266              		.global	_ZTV23ApplicationFontProvider
 267              		.section	.rodata._ZTV23ApplicationFontProvider,"a"
 268              		.align	2
 271              	_ZTV23ApplicationFontProvider:
 272 0000 00000000 		.word	0
 273 0004 00000000 		.word	0
 274 0008 00000000 		.word	_ZN23ApplicationFontProvider7getFontEt
 275 000c 00000000 		.word	_ZN23ApplicationFontProviderD1Ev
 276 0010 00000000 		.word	_ZN23ApplicationFontProviderD0Ev
 277              		.section	.text._ZN23ApplicationFontProviderD2Ev,"axG",%progbits,_ZN23ApplicationFontProviderD5Ev,c
 278              		.align	1
 279              		.weak	_ZN23ApplicationFontProviderD2Ev
 280              		.syntax unified
 281              		.thumb
 282              		.thumb_func
 283              		.fpu fpv4-sp-d16
 285              	_ZN23ApplicationFontProviderD2Ev:
 286              	.LFB126:
 287              		.file 3 "Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 7


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
 288              		.loc 3 29 7
 289              		.cfi_startproc
 290              		@ args = 0, pretend = 0, frame = 8
 291              		@ frame_needed = 1, uses_anonymous_args = 0
 292 0000 80B5     		push	{r7, lr}
 293              	.LCFI16:
 294              		.cfi_def_cfa_offset 8
 295              		.cfi_offset 7, -8
 296              		.cfi_offset 14, -4
 297 0002 82B0     		sub	sp, sp, #8
 298              	.LCFI17:
 299              		.cfi_def_cfa_offset 16
 300 0004 00AF     		add	r7, sp, #0
 301              	.LCFI18:
 302              		.cfi_def_cfa_register 7
 303 0006 7860     		str	r0, [r7, #4]
 304              	.LBB3:
 305              		.loc 3 29 7
 306 0008 054A     		ldr	r2, .L15
 307 000a 7B68     		ldr	r3, [r7, #4]
 308 000c 1A60     		str	r2, [r3]
 309 000e 7B68     		ldr	r3, [r7, #4]
 310 0010 1846     		mov	r0, r3
 311 0012 FFF7FEFF 		bl	_ZN8touchgfx12FontProviderD2Ev
 312              	.LBE3:
 313 0016 7B68     		ldr	r3, [r7, #4]
 314 0018 1846     		mov	r0, r3
 315 001a 0837     		adds	r7, r7, #8
 316              	.LCFI19:
 317              		.cfi_def_cfa_offset 8
 318 001c BD46     		mov	sp, r7
 319              	.LCFI20:
 320              		.cfi_def_cfa_register 13
 321              		@ sp needed
 322 001e 80BD     		pop	{r7, pc}
 323              	.L16:
 324              		.align	2
 325              	.L15:
 326 0020 08000000 		.word	_ZTV23ApplicationFontProvider+8
 327              		.cfi_endproc
 328              	.LFE126:
 330              		.weak	_ZN23ApplicationFontProviderD1Ev
 331              		.thumb_set _ZN23ApplicationFontProviderD1Ev,_ZN23ApplicationFontProviderD2Ev
 332              		.section	.text._ZN23ApplicationFontProviderD0Ev,"axG",%progbits,_ZN23ApplicationFontProviderD5Ev,c
 333              		.align	1
 334              		.weak	_ZN23ApplicationFontProviderD0Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 8


 335              		.syntax unified
 336              		.thumb
 337              		.thumb_func
 338              		.fpu fpv4-sp-d16
 340              	_ZN23ApplicationFontProviderD0Ev:
 341              	.LFB128:
 342              		.loc 3 29 7
 343              		.cfi_startproc
 344              		@ args = 0, pretend = 0, frame = 8
 345              		@ frame_needed = 1, uses_anonymous_args = 0
 346 0000 80B5     		push	{r7, lr}
 347              	.LCFI21:
 348              		.cfi_def_cfa_offset 8
 349              		.cfi_offset 7, -8
 350              		.cfi_offset 14, -4
 351 0002 82B0     		sub	sp, sp, #8
 352              	.LCFI22:
 353              		.cfi_def_cfa_offset 16
 354 0004 00AF     		add	r7, sp, #0
 355              	.LCFI23:
 356              		.cfi_def_cfa_register 7
 357 0006 7860     		str	r0, [r7, #4]
 358              		.loc 3 29 7
 359 0008 7868     		ldr	r0, [r7, #4]
 360 000a FFF7FEFF 		bl	_ZN23ApplicationFontProviderD1Ev
 361 000e 0421     		movs	r1, #4
 362 0010 7868     		ldr	r0, [r7, #4]
 363 0012 FFF7FEFF 		bl	_ZdlPvj
 364 0016 7B68     		ldr	r3, [r7, #4]
 365 0018 1846     		mov	r0, r3
 366 001a 0837     		adds	r7, r7, #8
 367              	.LCFI24:
 368              		.cfi_def_cfa_offset 8
 369 001c BD46     		mov	sp, r7
 370              	.LCFI25:
 371              		.cfi_def_cfa_register 13
 372              		@ sp needed
 373 001e 80BD     		pop	{r7, pc}
 374              		.cfi_endproc
 375              	.LFE128:
 377              		.weak	_ZTVN8touchgfx12FontProviderE
 378              		.section	.rodata._ZTVN8touchgfx12FontProviderE,"aG",%progbits,_ZTVN8touchgfx12FontProviderE,comdat
 379              		.align	2
 382              	_ZTVN8touchgfx12FontProviderE:
 383 0000 00000000 		.word	0
 384 0004 00000000 		.word	0
 385 0008 00000000 		.word	__cxa_pure_virtual
 386 000c 00000000 		.word	0
 387 0010 00000000 		.word	0
 388              		.text
 389              	.Letext0:
 390              		.file 4 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 391              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 392              		.file 6 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 393              		.file 7 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 394              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp"
 395              		.file 9 "Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 9


 396              		.file 10 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/
 397              		.file 11 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 10


DEFINED SYMBOLS
                            *ABS*:0000000000000000 ApplicationFontProvider.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:79     .text._ZN8touchgfx12FontProviderD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:87     .text._ZN8touchgfx12FontProviderD2Ev:0000000000000000 _ZN8touchgfx12FontProviderD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:130    .text._ZN8touchgfx12FontProviderD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:382    .rodata._ZTVN8touchgfx12FontProviderE:0000000000000000 _ZTVN8touchgfx12FontProviderE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:87     .text._ZN8touchgfx12FontProviderD2Ev:0000000000000000 _ZN8touchgfx12FontProviderD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:137    .text._ZN8touchgfx12FontProviderD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:144    .text._ZN8touchgfx12FontProviderD0Ev:0000000000000000 _ZN8touchgfx12FontProviderD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:182    .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:185    .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 _ZN8touchgfxL18TYPED_TEXT_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:188    .text._ZN23ApplicationFontProvider7getFontEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:195    .text._ZN23ApplicationFontProvider7getFontEt:0000000000000000 _ZN23ApplicationFontProvider7getFontEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:271    .rodata._ZTV23ApplicationFontProvider:0000000000000000 _ZTV23ApplicationFontProvider
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:268    .rodata._ZTV23ApplicationFontProvider:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:285    .text._ZN23ApplicationFontProviderD2Ev:0000000000000000 _ZN23ApplicationFontProviderD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:340    .text._ZN23ApplicationFontProviderD0Ev:0000000000000000 _ZN23ApplicationFontProviderD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:278    .text._ZN23ApplicationFontProviderD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:285    .text._ZN23ApplicationFontProviderD2Ev:0000000000000000 _ZN23ApplicationFontProviderD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:326    .text._ZN23ApplicationFontProviderD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:333    .text._ZN23ApplicationFontProviderD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s:379    .rodata._ZTVN8touchgfx12FontProviderE:0000000000000000 $d
                           .group:0000000000000000 _ZN8touchgfx12FontProviderD5Ev
                           .group:0000000000000000 _ZN23ApplicationFontProviderD5Ev
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cckNTaMg.s 			page 11


                           .group:0000000000000000 wm4.Types.hpp.33.d478feb449e34922fe6c04dfd673bcbc
                           .group:0000000000000000 wm4.stdarg.h.31.b55da1089056868966f25de5dbfc7d3c

UNDEFINED SYMBOLS
_ZdlPvj
_ZN17TypedTextDatabase8getFontsEv
__cxa_pure_virtual
