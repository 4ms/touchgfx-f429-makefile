ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 1


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
  13              		.file	"screenViewBase.cpp"
  14              		.text
  15              	.Ltext0:
  16              		.cfi_sections	.debug_frame
  17              		.section	.rodata._ZN8touchgfxL2PIE,"a"
  18              		.align	2
  21              	_ZN8touchgfxL2PIE:
  22 0000 DB0F4940 		.word	1078530011
  23              		.section	.text._ZN8touchgfx9colortypeC2Em,"axG",%progbits,_ZN8touchgfx9colortypeC5Em,comdat
  24              		.align	1
  25              		.weak	_ZN8touchgfx9colortypeC2Em
  26              		.arch armv7e-m
  27              		.syntax unified
  28              		.thumb
  29              		.thumb_func
  30              		.fpu fpv4-sp-d16
  32              	_ZN8touchgfx9colortypeC2Em:
  33              	.LFB75:
  34              		.file 1 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @file touchgfx/hal/Types.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * Declares the touchgfx::colortype, touchgfx::Rect, touchgfx::Vector, touchgfx::Point,
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * touchgfx::Pair classes as well as some less used classes and structs.
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  */
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #ifndef TOUCHGFX_TYPES_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #define TOUCHGFX_TYPES_HPP
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #include <assert.h>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #include <stdint.h>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #include <touchgfx/hal/Config.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 2


  27:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * A macro that returns the smallest of two items.
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  *
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @param  a The first item.
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @param  b The second item.
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  */
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #ifndef MIN
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #define MIN(a, b) (((a) < (b)) ? (a) : (b))
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #endif
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** /**
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * A macro that returns the largest of two items.
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  *
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @param a The first item.
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @param b The second item.
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  */
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #ifndef MAX
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #define MAX(a, b) (((a) > (b)) ? (a) : (b))
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #endif
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** /**
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * A macro that rounds a number up to the next multiple. Works for negative numbers, too.
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  *
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @param num      The number to round up.
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @param multiple The multiple.
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  */
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #ifndef ROUNDUP
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #define ROUNDUP(num, multiple) ((multiple) == 0 ? (num) : ((num) + (abs(multiple) - ((num) % abs(mu
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #endif
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** /**
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * A macro that rounds a number down to the next multiple. Works for negative numbers, too.
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  *
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @param num      The number to round down.
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * @param multiple The multiple.
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  */
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #ifndef ROUNDDOWN
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #define ROUNDDOWN(num, multiple) (-(ROUNDUP(-(num), multiple)))
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** #endif
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** namespace touchgfx
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** {
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** static const float PI = 3.14159265358979323846f; ///< PI
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** /**
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * This type can contain a color value. Note that in order to maintain backwards
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * compatibility, casting this type to an integral value will yield a 16-bit value. To
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  * extract a 24/32-bit color from this type, use the getColor32 function.
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****  */
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** struct colortype
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** {
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     /** Default constructor. Creates a black (0) color. */
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     colortype()
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****         : color(0)
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     {
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     }
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 3


  84:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * Constructor which creates a colortype with the given color. Use
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * Color::getColorFrom24BitRGB() to create a color that will work on your selected LCD type.
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      *
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * @param  col The color.
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      *
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * @see Color::getColorFrom24BitRGB
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      */
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     colortype(uint32_t col)
  35              		.loc 1 91 5
  36              		.cfi_startproc
  37              		@ args = 0, pretend = 0, frame = 8
  38              		@ frame_needed = 1, uses_anonymous_args = 0
  39              		@ link register save eliminated.
  40 0000 80B4     		push	{r7}
  41              	.LCFI0:
  42              		.cfi_def_cfa_offset 4
  43              		.cfi_offset 7, -4
  44 0002 83B0     		sub	sp, sp, #12
  45              	.LCFI1:
  46              		.cfi_def_cfa_offset 16
  47 0004 00AF     		add	r7, sp, #0
  48              	.LCFI2:
  49              		.cfi_def_cfa_register 7
  50 0006 7860     		str	r0, [r7, #4]
  51 0008 3960     		str	r1, [r7]
  52              	.LBB24:
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****         : color(col)
  53              		.loc 1 92 20
  54 000a 7B68     		ldr	r3, [r7, #4]
  55 000c 3A68     		ldr	r2, [r7]
  56 000e 1A60     		str	r2, [r3]
  57              	.LBE24:
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     {
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     }
  58              		.loc 1 94 5
  59 0010 7B68     		ldr	r3, [r7, #4]
  60 0012 1846     		mov	r0, r3
  61 0014 0C37     		adds	r7, r7, #12
  62              	.LCFI3:
  63              		.cfi_def_cfa_offset 4
  64 0016 BD46     		mov	sp, r7
  65              	.LCFI4:
  66              		.cfi_def_cfa_register 13
  67              		@ sp needed
  68 0018 5DF8047B 		ldr	r7, [sp], #4
  69              	.LCFI5:
  70              		.cfi_restore 7
  71              		.cfi_def_cfa_offset 0
  72 001c 7047     		bx	lr
  73              		.cfi_endproc
  74              	.LFE75:
  76              		.weak	_ZN8touchgfx9colortypeC1Em
  77              		.thumb_set _ZN8touchgfx9colortypeC1Em,_ZN8touchgfx9colortypeC2Em
  78              		.section	.text._ZN8touchgfx4RectC2Ev,"axG",%progbits,_ZN8touchgfx4RectC5Ev,comdat
  79              		.align	1
  80              		.weak	_ZN8touchgfx4RectC2Ev
  81              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 4


  82              		.thumb
  83              		.thumb_func
  84              		.fpu fpv4-sp-d16
  86              	_ZN8touchgfx4RectC2Ev:
  87              	.LFB80:
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     /**
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * Gets color as a 32bit value suitable for passing to Color::getRed(),
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * Color::getGreen() and Color::getBlue() which will handle all bitdeptchs.
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      *
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * @return The color 32.
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      *
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * @see Color::getRed, Color::getGreen, Color::getBlue
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      */
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     FORCE_INLINE_FUNCTION uint32_t getColor32() const
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     {
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****         return color;
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     }
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     /**
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * Cast that converts the given colortype to an uint32_t.
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      *
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * @return The result of the operation.
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      */
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     operator uint32_t() const
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     {
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****         return color;
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     }
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     uint32_t color; ///< The color
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** };
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** /** Class representing a Rectangle with a few convenient methods. */
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** class Rect
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** {
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** public:
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     /** Default constructor. Resulting in an empty Rect with coordinates 0,0. */
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     Rect()
  88              		.loc 1 127 5
  89              		.cfi_startproc
  90              		@ args = 0, pretend = 0, frame = 8
  91              		@ frame_needed = 1, uses_anonymous_args = 0
  92              		@ link register save eliminated.
  93 0000 80B4     		push	{r7}
  94              	.LCFI6:
  95              		.cfi_def_cfa_offset 4
  96              		.cfi_offset 7, -4
  97 0002 83B0     		sub	sp, sp, #12
  98              	.LCFI7:
  99              		.cfi_def_cfa_offset 16
 100 0004 00AF     		add	r7, sp, #0
 101              	.LCFI8:
 102              		.cfi_def_cfa_register 7
 103 0006 7860     		str	r0, [r7, #4]
 104              	.LBB25:
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****         : x(0), y(0), width(0), height(0)
 105              		.loc 1 128 41
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 5


 106 0008 7B68     		ldr	r3, [r7, #4]
 107 000a 0022     		movs	r2, #0
 108 000c 1A80     		strh	r2, [r3]	@ movhi
 109 000e 7B68     		ldr	r3, [r7, #4]
 110 0010 0022     		movs	r2, #0
 111 0012 5A80     		strh	r2, [r3, #2]	@ movhi
 112 0014 7B68     		ldr	r3, [r7, #4]
 113 0016 0022     		movs	r2, #0
 114 0018 9A80     		strh	r2, [r3, #4]	@ movhi
 115 001a 7B68     		ldr	r3, [r7, #4]
 116 001c 0022     		movs	r2, #0
 117 001e DA80     		strh	r2, [r3, #6]	@ movhi
 118              	.LBE25:
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     {
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     }
 119              		.loc 1 130 5
 120 0020 7B68     		ldr	r3, [r7, #4]
 121 0022 1846     		mov	r0, r3
 122 0024 0C37     		adds	r7, r7, #12
 123              	.LCFI9:
 124              		.cfi_def_cfa_offset 4
 125 0026 BD46     		mov	sp, r7
 126              	.LCFI10:
 127              		.cfi_def_cfa_register 13
 128              		@ sp needed
 129 0028 5DF8047B 		ldr	r7, [sp], #4
 130              	.LCFI11:
 131              		.cfi_restore 7
 132              		.cfi_def_cfa_offset 0
 133 002c 7047     		bx	lr
 134              		.cfi_endproc
 135              	.LFE80:
 137              		.weak	_ZN8touchgfx4RectC1Ev
 138              		.thumb_set _ZN8touchgfx4RectC1Ev,_ZN8touchgfx4RectC2Ev
 139              		.section	.rodata._ZN8touchgfxL4LEFTE,"a"
 142              	_ZN8touchgfxL4LEFTE:
 143 0000 00       		.space	1
 144              		.section	.rodata._ZN8touchgfxL6CENTERE,"a"
 147              	_ZN8touchgfxL6CENTERE:
 148 0000 01       		.byte	1
 149              		.section	.rodata._ZN8touchgfxL5RIGHTE,"a"
 152              	_ZN8touchgfxL5RIGHTE:
 153 0000 02       		.byte	2
 154              		.section	.rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE,"a"
 157              	_ZN8touchgfxL18TEXT_DIRECTION_LTRE:
 158 0000 00       		.space	1
 159              		.section	.rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE,"a"
 162              	_ZN8touchgfxL18TEXT_DIRECTION_RTLE:
 163 0000 01       		.byte	1
 164              		.section	.rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE,"a"
 165              		.align	1
 168              	_ZN8touchgfxL32RenderingVariant_NearestNeighborE:
 169 0000 0000     		.space	2
 170              		.section	.rodata._ZN8touchgfxL25RenderingVariant_BilinearE,"a"
 171              		.align	1
 174              	_ZN8touchgfxL25RenderingVariant_BilinearE:
 175 0000 0100     		.short	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 6


 176              		.section	.rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE,"a"
 177              		.align	1
 180              	_ZN8touchgfxL24RenderingVariant_NoAlphaE:
 181 0000 0000     		.space	2
 182              		.section	.rodata._ZN8touchgfxL22RenderingVariant_AlphaE,"a"
 183              		.align	1
 186              	_ZN8touchgfxL22RenderingVariant_AlphaE:
 187 0000 0200     		.short	2
 188              		.section	.rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE,"a"
 189              		.align	1
 192              	_ZN8touchgfxL28RenderingVariant_FormatShiftE:
 193 0000 0200     		.short	2
 194              		.section	.rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE,"a"
 195              		.align	1
 198              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
 199 0000 FEFF     		.short	-2
 200              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
 201              		.align	1
 204              	_ZN8touchgfxL14BITMAP_INVALIDE:
 205 0000 FFFF     		.short	-1
 206              		.section	.text._ZN8touchgfx8DrawableC2Ev,"axG",%progbits,_ZN8touchgfx8DrawableC5Ev,comdat
 207              		.align	1
 208              		.weak	_ZN8touchgfx8DrawableC2Ev
 209              		.syntax unified
 210              		.thumb
 211              		.thumb_func
 212              		.fpu fpv4-sp-d16
 214              	_ZN8touchgfx8DrawableC2Ev:
 215              	.LFB312:
 216              		.file 2 "Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * @file touchgfx/Drawable.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * Declares the touchgfx::Drawable class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** #ifndef TOUCHGFX_DRAWABLE_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** #define TOUCHGFX_DRAWABLE_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** #include <touchgfx/Bitmap.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** #include <touchgfx/events/ClickEvent.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** #include <touchgfx/events/DragEvent.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** #include <touchgfx/events/GestureEvent.hpp>
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** namespace touchgfx
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 7


  28:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** {
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** /**
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * The Drawable class is an abstract definition of something that can be drawn. In the composite
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * design pattern, the Drawable is the component interface. Drawables can be added to a
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * screen as a tree structure through the leaf node class Widget and the Container
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * class. A Drawable contains a pointer to its next sibling and a pointer to its parent
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * node. These are maintained by the Container to which the Drawable is added.
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  *
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * The Drawable interface contains two pure virtual functions which must be implemented
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * by widgets, namely draw() and getSolidRect(). In addition it contains general
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * functionality for receiving events and navigating the tree structure.
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  *
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * The coordinates of a Drawable are always relative to its parent node.
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  *
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * @see Widget, Container
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  */
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** class Drawable
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** {
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** public:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /** Initializes a new instance of the Drawable class. */
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Drawable()
 217              		.loc 2 48 5
 218              		.cfi_startproc
 219              		@ args = 0, pretend = 0, frame = 8
 220              		@ frame_needed = 1, uses_anonymous_args = 0
 221 0000 80B5     		push	{r7, lr}
 222              	.LCFI12:
 223              		.cfi_def_cfa_offset 8
 224              		.cfi_offset 7, -8
 225              		.cfi_offset 14, -4
 226 0002 82B0     		sub	sp, sp, #8
 227              	.LCFI13:
 228              		.cfi_def_cfa_offset 16
 229 0004 00AF     		add	r7, sp, #0
 230              	.LCFI14:
 231              		.cfi_def_cfa_register 7
 232 0006 7860     		str	r0, [r7, #4]
 233              	.LBB26:
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         : rect(),
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           cachedVisibleRect(),
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           parent(0),
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           nextSibling(0),
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           nextDrawChainElement(0),
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           cachedAbsX(0),
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           cachedAbsY(0),
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           touchable(false),
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           visible(true)
 234              		.loc 2 57 23
 235 0008 144A     		ldr	r2, .L7
 236 000a 7B68     		ldr	r3, [r7, #4]
 237 000c 1A60     		str	r2, [r3]
 238 000e 7B68     		ldr	r3, [r7, #4]
 239 0010 0433     		adds	r3, r3, #4
 240 0012 1846     		mov	r0, r3
 241 0014 FFF7FEFF 		bl	_ZN8touchgfx4RectC1Ev
 242 0018 7B68     		ldr	r3, [r7, #4]
 243 001a 0C33     		adds	r3, r3, #12
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 8


 244 001c 1846     		mov	r0, r3
 245 001e FFF7FEFF 		bl	_ZN8touchgfx4RectC1Ev
 246 0022 7B68     		ldr	r3, [r7, #4]
 247 0024 0022     		movs	r2, #0
 248 0026 5A61     		str	r2, [r3, #20]
 249 0028 7B68     		ldr	r3, [r7, #4]
 250 002a 0022     		movs	r2, #0
 251 002c 9A61     		str	r2, [r3, #24]
 252 002e 7B68     		ldr	r3, [r7, #4]
 253 0030 0022     		movs	r2, #0
 254 0032 DA61     		str	r2, [r3, #28]
 255 0034 7B68     		ldr	r3, [r7, #4]
 256 0036 0022     		movs	r2, #0
 257 0038 1A84     		strh	r2, [r3, #32]	@ movhi
 258 003a 7B68     		ldr	r3, [r7, #4]
 259 003c 0022     		movs	r2, #0
 260 003e 5A84     		strh	r2, [r3, #34]	@ movhi
 261 0040 7B68     		ldr	r3, [r7, #4]
 262 0042 0022     		movs	r2, #0
 263 0044 83F82420 		strb	r2, [r3, #36]
 264 0048 7B68     		ldr	r3, [r7, #4]
 265 004a 0122     		movs	r2, #1
 266 004c 83F82520 		strb	r2, [r3, #37]
 267              	.LBE26:
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 268              		.loc 2 59 5
 269 0050 7B68     		ldr	r3, [r7, #4]
 270 0052 1846     		mov	r0, r3
 271 0054 0837     		adds	r7, r7, #8
 272              	.LCFI15:
 273              		.cfi_def_cfa_offset 8
 274 0056 BD46     		mov	sp, r7
 275              	.LCFI16:
 276              		.cfi_def_cfa_register 13
 277              		@ sp needed
 278 0058 80BD     		pop	{r7, pc}
 279              	.L8:
 280 005a 00BF     		.align	2
 281              	.L7:
 282 005c 08000000 		.word	_ZTVN8touchgfx8DrawableE+8
 283              		.cfi_endproc
 284              	.LFE312:
 286              		.weak	_ZN8touchgfx8DrawableC1Ev
 287              		.thumb_set _ZN8touchgfx8DrawableC1Ev,_ZN8touchgfx8DrawableC2Ev
 288              		.section	.text._ZN8touchgfx8DrawableD2Ev,"axG",%progbits,_ZN8touchgfx8DrawableD5Ev,comdat
 289              		.align	1
 290              		.weak	_ZN8touchgfx8DrawableD2Ev
 291              		.syntax unified
 292              		.thumb
 293              		.thumb_func
 294              		.fpu fpv4-sp-d16
 296              	_ZN8touchgfx8DrawableD2Ev:
 297              	.LFB315:
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /** Finalizes an instance of the Drawable class. */
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual ~Drawable()
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 9


 298              		.loc 2 62 13
 299              		.cfi_startproc
 300              		@ args = 0, pretend = 0, frame = 8
 301              		@ frame_needed = 1, uses_anonymous_args = 0
 302              		@ link register save eliminated.
 303 0000 80B4     		push	{r7}
 304              	.LCFI17:
 305              		.cfi_def_cfa_offset 4
 306              		.cfi_offset 7, -4
 307 0002 83B0     		sub	sp, sp, #12
 308              	.LCFI18:
 309              		.cfi_def_cfa_offset 16
 310 0004 00AF     		add	r7, sp, #0
 311              	.LCFI19:
 312              		.cfi_def_cfa_register 7
 313 0006 7860     		str	r0, [r7, #4]
 314              	.LBB27:
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 315              		.loc 2 63 5
 316 0008 044A     		ldr	r2, .L11
 317 000a 7B68     		ldr	r3, [r7, #4]
 318 000c 1A60     		str	r2, [r3]
 319              	.LBE27:
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 320              		.loc 2 64 5
 321 000e 7B68     		ldr	r3, [r7, #4]
 322 0010 1846     		mov	r0, r3
 323 0012 0C37     		adds	r7, r7, #12
 324              	.LCFI20:
 325              		.cfi_def_cfa_offset 4
 326 0014 BD46     		mov	sp, r7
 327              	.LCFI21:
 328              		.cfi_def_cfa_register 13
 329              		@ sp needed
 330 0016 5DF8047B 		ldr	r7, [sp], #4
 331              	.LCFI22:
 332              		.cfi_restore 7
 333              		.cfi_def_cfa_offset 0
 334 001a 7047     		bx	lr
 335              	.L12:
 336              		.align	2
 337              	.L11:
 338 001c 08000000 		.word	_ZTVN8touchgfx8DrawableE+8
 339              		.cfi_endproc
 340              	.LFE315:
 342              		.weak	_ZN8touchgfx8DrawableD1Ev
 343              		.thumb_set _ZN8touchgfx8DrawableD1Ev,_ZN8touchgfx8DrawableD2Ev
 344              		.section	.text._ZN8touchgfx8DrawableD0Ev,"axG",%progbits,_ZN8touchgfx8DrawableD5Ev,comdat
 345              		.align	1
 346              		.weak	_ZN8touchgfx8DrawableD0Ev
 347              		.syntax unified
 348              		.thumb
 349              		.thumb_func
 350              		.fpu fpv4-sp-d16
 352              	_ZN8touchgfx8DrawableD0Ev:
 353              	.LFB317:
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 10


 354              		.loc 2 62 13
 355              		.cfi_startproc
 356              		@ args = 0, pretend = 0, frame = 8
 357              		@ frame_needed = 1, uses_anonymous_args = 0
 358 0000 80B5     		push	{r7, lr}
 359              	.LCFI23:
 360              		.cfi_def_cfa_offset 8
 361              		.cfi_offset 7, -8
 362              		.cfi_offset 14, -4
 363 0002 82B0     		sub	sp, sp, #8
 364              	.LCFI24:
 365              		.cfi_def_cfa_offset 16
 366 0004 00AF     		add	r7, sp, #0
 367              	.LCFI25:
 368              		.cfi_def_cfa_register 7
 369 0006 7860     		str	r0, [r7, #4]
 370              		.loc 2 64 5
 371 0008 7868     		ldr	r0, [r7, #4]
 372 000a FFF7FEFF 		bl	_ZN8touchgfx8DrawableD1Ev
 373 000e 2821     		movs	r1, #40
 374 0010 7868     		ldr	r0, [r7, #4]
 375 0012 FFF7FEFF 		bl	_ZdlPvj
 376 0016 7B68     		ldr	r3, [r7, #4]
 377 0018 1846     		mov	r0, r3
 378 001a 0837     		adds	r7, r7, #8
 379              	.LCFI26:
 380              		.cfi_def_cfa_offset 8
 381 001c BD46     		mov	sp, r7
 382              	.LCFI27:
 383              		.cfi_def_cfa_register 13
 384              		@ sp needed
 385 001e 80BD     		pop	{r7, pc}
 386              		.cfi_endproc
 387              	.LFE317:
 389              		.section	.text._ZN8touchgfx8Drawable13getFirstChildEv,"axG",%progbits,_ZN8touchgfx8Drawable13getFi
 390              		.align	1
 391              		.weak	_ZN8touchgfx8Drawable13getFirstChildEv
 392              		.syntax unified
 393              		.thumb
 394              		.thumb_func
 395              		.fpu fpv4-sp-d16
 397              	_ZN8touchgfx8Drawable13getFirstChildEv:
 398              	.LFB319:
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Draw this drawable. It is a requirement that the draw implementation does not draw
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * outside the region specified by invalidatedArea.
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  invalidatedArea The sub-region of this drawable that needs to be redrawn,
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *                         expressed in coordinates relative to its parent (e.g. for a
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *                         complete redraw, invalidatedArea will be (0, 0, width,
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *                         height).
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void draw(const Rect& invalidatedArea) const = 0;
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Get (the largest possible) rectangle that is guaranteed to be solid (opaque). This
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 11


  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * information is important, as any Drawable underneath the solid area does not need to
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * be drawn.
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The solid rectangle part of the Drawable.
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note The rectangle returned must be relative to upper left corner of the Drawable, meaning
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *       that a completely solid widget should return the full size Rect(0, 0,
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *       getWidth(), getHeight()). If no area can be guaranteed to be solid, an empty
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *       Rect(0, 0, 0, 0) must be returned. Failing to return the correct rectangle
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *       may result in errors on the display.
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual Rect getSolidRect() const = 0;
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Request that a region of this drawable is redrawn. Will recursively traverse the tree
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * towards the root, and once reached, issue a draw operation. When this function
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * returns, the specified invalidated area has been redrawn for all appropriate
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Drawables covering the region.
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * To invalidate the entire Drawable, use invalidate()
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param [in] invalidatedArea The area of this drawable to redraw expressed in relative
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *                             coordinates.
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see invalidate
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void invalidateRect(Rect& invalidatedArea) const;
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Tell the framework that this entire Drawable needs to be redrawn. It is the same as
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * calling invalidateRect() with Rect(0, 0, getWidth(), getHeight()).
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see invalidateRect
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void invalidate() const;
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets the next sibling node. This will be the next Drawable that has been added to the
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * same Container as this Drawable.
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The next sibling. If there are no more siblings, the return value is 0.
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Drawable* getNextSibling()
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return nextSibling;
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Function for obtaining the first child of this drawable if any.
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return A pointer on the first child drawable if any.
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see Container::getFirstChild
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual Drawable* getFirstChild()
 399              		.loc 2 132 23
 400              		.cfi_startproc
 401              		@ args = 0, pretend = 0, frame = 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 12


 402              		@ frame_needed = 1, uses_anonymous_args = 0
 403              		@ link register save eliminated.
 404 0000 80B4     		push	{r7}
 405              	.LCFI28:
 406              		.cfi_def_cfa_offset 4
 407              		.cfi_offset 7, -4
 408 0002 83B0     		sub	sp, sp, #12
 409              	.LCFI29:
 410              		.cfi_def_cfa_offset 16
 411 0004 00AF     		add	r7, sp, #0
 412              	.LCFI30:
 413              		.cfi_def_cfa_register 7
 414 0006 7860     		str	r0, [r7, #4]
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return 0;
 415              		.loc 2 134 16
 416 0008 0023     		movs	r3, #0
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 417              		.loc 2 135 5
 418 000a 1846     		mov	r0, r3
 419 000c 0C37     		adds	r7, r7, #12
 420              	.LCFI31:
 421              		.cfi_def_cfa_offset 4
 422 000e BD46     		mov	sp, r7
 423              	.LCFI32:
 424              		.cfi_def_cfa_register 13
 425              		@ sp needed
 426 0010 5DF8047B 		ldr	r7, [sp], #4
 427              	.LCFI33:
 428              		.cfi_restore 7
 429              		.cfi_def_cfa_offset 0
 430 0014 7047     		bx	lr
 431              		.cfi_endproc
 432              	.LFE319:
 434              		.section	.text._ZN8touchgfx8Drawable11setPositionEssss,"axG",%progbits,_ZN8touchgfx8Drawable11setP
 435              		.align	1
 436              		.weak	_ZN8touchgfx8Drawable11setPositionEssss
 437              		.syntax unified
 438              		.thumb
 439              		.thumb_func
 440              		.fpu fpv4-sp-d16
 442              	_ZN8touchgfx8Drawable11setPositionEssss:
 443              	.LFB321:
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Helper function for obtaining the largest solid rect (as implemented by
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * getSolidRect()) expressed in absolute coordinates. Will recursively traverse to the
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * root of the tree to find the proper location of the rectangle on the display.
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The (largest) solid rect (as implemented by getSolidRect()) expressed in absolute
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *         coordinates.
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual Rect getSolidRectAbsolute();
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Function for obtaining the the last child of this drawable that intersects with the
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * specified point. The last child is the Drawable that is drawn last and therefore the
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 13


 150:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * topmost child. Used in input event handling for obtaining the appropriate drawable
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * that should receive the event.
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param       x    The point of intersection expressed in coordinates relative to the
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *                   parent.
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param       y    The point of intersection expressed in coordinates relative to the
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *                   parent.
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param [out] last Last (topmost) Drawable on the given coordinate.
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note Input events must be delegated to the last drawable of the tree (meaning highest z-
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *       order / front-most drawable).
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void getLastChild(int16_t x, int16_t y, Drawable** last) = 0;
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Function for finding the visible part of this drawable. If the parent node has a
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * smaller area than this Drawable, or if the Drawable is placed "over the edge" of the
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * parent, the parent will act as a view port, cutting off the parts of this Drawable
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * that are outside the region. Traverses the tree and yields a result expressed in
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * absolute coordinates.
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param [out] rect The region of the Drawable that is visible.
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void getVisibleRect(Rect& rect) const;
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets the rectangle this Drawable covers, in coordinates relative to its parent.
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The rectangle this Drawable covers expressed in coordinates relative to its
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *         parent.
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see getAbsoluteRect
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     const Rect& getRect() const
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return rect;
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Helper function for obtaining the rectangle this Drawable covers, expressed in
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * absolute coordinates.
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The rectangle this Drawable covers expressed in absolute coordinates.
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see getRect, translateRectToAbsolute
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Rect getAbsoluteRect() const;
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Helper function for converting a region of this Drawable to absolute coordinates.
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param [in,out] r The Rect to translate.
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void translateRectToAbsolute(Rect& r) const;
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the size and position of this Drawable, relative to its parent. The same as
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 14


 207:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * calling setXY(), setWidth() and setHeight() in that order.
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  x      The x coordinate of this Drawable relative to its parent.
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  y      The y coordinate of this Drawable relative to its parent.
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  width  The width of this Drawable.
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  height The height of this Drawable.
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setPosition(int16_t x, int16_t y, int16_t width, int16_t height)
 444              		.loc 2 216 10
 445              		.cfi_startproc
 446              		@ args = 4, pretend = 0, frame = 16
 447              		@ frame_needed = 1, uses_anonymous_args = 0
 448 0000 80B5     		push	{r7, lr}
 449              	.LCFI34:
 450              		.cfi_def_cfa_offset 8
 451              		.cfi_offset 7, -8
 452              		.cfi_offset 14, -4
 453 0002 84B0     		sub	sp, sp, #16
 454              	.LCFI35:
 455              		.cfi_def_cfa_offset 24
 456 0004 00AF     		add	r7, sp, #0
 457              	.LCFI36:
 458              		.cfi_def_cfa_register 7
 459 0006 F860     		str	r0, [r7, #12]
 460 0008 0846     		mov	r0, r1
 461 000a 1146     		mov	r1, r2
 462 000c 1A46     		mov	r2, r3
 463 000e 0346     		mov	r3, r0	@ movhi
 464 0010 7B81     		strh	r3, [r7, #10]	@ movhi
 465 0012 0B46     		mov	r3, r1	@ movhi
 466 0014 3B81     		strh	r3, [r7, #8]	@ movhi
 467 0016 1346     		mov	r3, r2	@ movhi
 468 0018 FB80     		strh	r3, [r7, #6]	@ movhi
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setXY(x, y);
 469              		.loc 2 218 14
 470 001a B7F90820 		ldrsh	r2, [r7, #8]
 471 001e B7F90A30 		ldrsh	r3, [r7, #10]
 472 0022 1946     		mov	r1, r3
 473 0024 F868     		ldr	r0, [r7, #12]
 474 0026 FFF7FEFF 		bl	_ZN8touchgfx8Drawable5setXYEss
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setWidthHeight(width, height);
 475              		.loc 2 219 23
 476 002a B7F91820 		ldrsh	r2, [r7, #24]
 477 002e B7F90630 		ldrsh	r3, [r7, #6]
 478 0032 1946     		mov	r1, r3
 479 0034 F868     		ldr	r0, [r7, #12]
 480 0036 FFF7FEFF 		bl	_ZN8touchgfx8Drawable14setWidthHeightEss
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 481              		.loc 2 220 5
 482 003a 00BF     		nop
 483 003c 1037     		adds	r7, r7, #16
 484              	.LCFI37:
 485              		.cfi_def_cfa_offset 8
 486 003e BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 15


 487              	.LCFI38:
 488              		.cfi_def_cfa_register 13
 489              		@ sp needed
 490 0040 80BD     		pop	{r7, pc}
 491              		.cfi_endproc
 492              	.LFE321:
 494              		.section	.text._ZN8touchgfx8Drawable4setXEs,"axG",%progbits,_ZN8touchgfx8Drawable4setXEs,comdat
 495              		.align	1
 496              		.weak	_ZN8touchgfx8Drawable4setXEs
 497              		.syntax unified
 498              		.thumb
 499              		.thumb_func
 500              		.fpu fpv4-sp-d16
 502              	_ZN8touchgfx8Drawable4setXEs:
 503              	.LFB326:
 221:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets the x coordinate of this Drawable, relative to its parent.
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 225:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The x value, relative to the parent.
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     int16_t getX() const
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return rect.x;
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets the y coordinate of this Drawable, relative to its parent.
 234:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 235:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The y value, relative to the parent.
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     int16_t getY() const
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return rect.y;
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 241:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 242:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 243:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets the width of this Drawable.
 244:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 245:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The width of this Drawable.
 246:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 247:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     int16_t getWidth() const
 248:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 249:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return rect.width;
 250:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 251:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 252:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 253:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets the height of this Drawable.
 254:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 255:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The height of this Drawable.
 256:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 257:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     int16_t getHeight() const
 258:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 259:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return rect.height;
 260:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 261:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 262:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 16


 263:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the x coordinate of this Drawable, relative to its parent.
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  x The new x value, relative to the parent. A negative value is allowed.
 266:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 267:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 268:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 269:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setX(int16_t x)
 504              		.loc 2 269 18
 505              		.cfi_startproc
 506              		@ args = 0, pretend = 0, frame = 8
 507              		@ frame_needed = 1, uses_anonymous_args = 0
 508              		@ link register save eliminated.
 509 0000 80B4     		push	{r7}
 510              	.LCFI39:
 511              		.cfi_def_cfa_offset 4
 512              		.cfi_offset 7, -4
 513 0002 83B0     		sub	sp, sp, #12
 514              	.LCFI40:
 515              		.cfi_def_cfa_offset 16
 516 0004 00AF     		add	r7, sp, #0
 517              	.LCFI41:
 518              		.cfi_def_cfa_register 7
 519 0006 7860     		str	r0, [r7, #4]
 520 0008 0B46     		mov	r3, r1
 521 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 270:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 271:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         rect.x = x;
 522              		.loc 2 271 16
 523 000c 7B68     		ldr	r3, [r7, #4]
 524 000e 7A88     		ldrh	r2, [r7, #2]	@ movhi
 525 0010 9A80     		strh	r2, [r3, #4]	@ movhi
 272:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 526              		.loc 2 272 5
 527 0012 00BF     		nop
 528 0014 0C37     		adds	r7, r7, #12
 529              	.LCFI42:
 530              		.cfi_def_cfa_offset 4
 531 0016 BD46     		mov	sp, r7
 532              	.LCFI43:
 533              		.cfi_def_cfa_register 13
 534              		@ sp needed
 535 0018 5DF8047B 		ldr	r7, [sp], #4
 536              	.LCFI44:
 537              		.cfi_restore 7
 538              		.cfi_def_cfa_offset 0
 539 001c 7047     		bx	lr
 540              		.cfi_endproc
 541              	.LFE326:
 543              		.section	.text._ZN8touchgfx8Drawable4setYEs,"axG",%progbits,_ZN8touchgfx8Drawable4setYEs,comdat
 544              		.align	1
 545              		.weak	_ZN8touchgfx8Drawable4setYEs
 546              		.syntax unified
 547              		.thumb
 548              		.thumb_func
 549              		.fpu fpv4-sp-d16
 551              	_ZN8touchgfx8Drawable4setYEs:
 552              	.LFB327:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 17


 273:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 274:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 275:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the y coordinate of this Drawable, relative to its parent.
 276:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 277:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  y The new y value, relative to the parent. A negative value is allowed.
 278:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 279:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 280:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 281:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setY(int16_t y)
 553              		.loc 2 281 18
 554              		.cfi_startproc
 555              		@ args = 0, pretend = 0, frame = 8
 556              		@ frame_needed = 1, uses_anonymous_args = 0
 557              		@ link register save eliminated.
 558 0000 80B4     		push	{r7}
 559              	.LCFI45:
 560              		.cfi_def_cfa_offset 4
 561              		.cfi_offset 7, -4
 562 0002 83B0     		sub	sp, sp, #12
 563              	.LCFI46:
 564              		.cfi_def_cfa_offset 16
 565 0004 00AF     		add	r7, sp, #0
 566              	.LCFI47:
 567              		.cfi_def_cfa_register 7
 568 0006 7860     		str	r0, [r7, #4]
 569 0008 0B46     		mov	r3, r1
 570 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 282:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 283:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         rect.y = y;
 571              		.loc 2 283 16
 572 000c 7B68     		ldr	r3, [r7, #4]
 573 000e 7A88     		ldrh	r2, [r7, #2]	@ movhi
 574 0010 DA80     		strh	r2, [r3, #6]	@ movhi
 284:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 575              		.loc 2 284 5
 576 0012 00BF     		nop
 577 0014 0C37     		adds	r7, r7, #12
 578              	.LCFI48:
 579              		.cfi_def_cfa_offset 4
 580 0016 BD46     		mov	sp, r7
 581              	.LCFI49:
 582              		.cfi_def_cfa_register 13
 583              		@ sp needed
 584 0018 5DF8047B 		ldr	r7, [sp], #4
 585              	.LCFI50:
 586              		.cfi_restore 7
 587              		.cfi_def_cfa_offset 0
 588 001c 7047     		bx	lr
 589              		.cfi_endproc
 590              	.LFE327:
 592              		.section	.text._ZN8touchgfx8Drawable5setXYEss,"axG",%progbits,_ZN8touchgfx8Drawable5setXYEss,comda
 593              		.align	1
 594              		.weak	_ZN8touchgfx8Drawable5setXYEss
 595              		.syntax unified
 596              		.thumb
 597              		.thumb_func
 598              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 18


 600              	_ZN8touchgfx8Drawable5setXYEss:
 601              	.LFB328:
 285:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 286:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 287:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the x and y coordinates of this Drawable, relative to its parent. The same as
 288:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * calling setX() followed by calling setY().
 289:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 290:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  x The new x value, relative to the parent. A negative value is allowed.
 291:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  y The new y value, relative to the parent. A negative value is allowed.
 292:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 293:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see moveTo
 294:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 295:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 296:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 297:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setXY(int16_t x, int16_t y)
 602              		.loc 2 297 10
 603              		.cfi_startproc
 604              		@ args = 0, pretend = 0, frame = 8
 605              		@ frame_needed = 1, uses_anonymous_args = 0
 606 0000 80B5     		push	{r7, lr}
 607              	.LCFI51:
 608              		.cfi_def_cfa_offset 8
 609              		.cfi_offset 7, -8
 610              		.cfi_offset 14, -4
 611 0002 82B0     		sub	sp, sp, #8
 612              	.LCFI52:
 613              		.cfi_def_cfa_offset 16
 614 0004 00AF     		add	r7, sp, #0
 615              	.LCFI53:
 616              		.cfi_def_cfa_register 7
 617 0006 7860     		str	r0, [r7, #4]
 618 0008 0B46     		mov	r3, r1
 619 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 620 000c 1346     		mov	r3, r2	@ movhi
 621 000e 3B80     		strh	r3, [r7]	@ movhi
 298:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 299:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setX(x);
 622              		.loc 2 299 15
 623 0010 7B68     		ldr	r3, [r7, #4]
 624 0012 1B68     		ldr	r3, [r3]
 625 0014 2C33     		adds	r3, r3, #44
 626 0016 1B68     		ldr	r3, [r3]
 627              		.loc 2 299 13
 628 0018 B7F90220 		ldrsh	r2, [r7, #2]
 629 001c 1146     		mov	r1, r2
 630 001e 7868     		ldr	r0, [r7, #4]
 631 0020 9847     		blx	r3
 632              	.LVL0:
 300:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setY(y);
 633              		.loc 2 300 15
 634 0022 7B68     		ldr	r3, [r7, #4]
 635 0024 1B68     		ldr	r3, [r3]
 636 0026 3033     		adds	r3, r3, #48
 637 0028 1B68     		ldr	r3, [r3]
 638              		.loc 2 300 13
 639 002a B7F90020 		ldrsh	r2, [r7]
 640 002e 1146     		mov	r1, r2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 19


 641 0030 7868     		ldr	r0, [r7, #4]
 642 0032 9847     		blx	r3
 643              	.LVL1:
 301:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 644              		.loc 2 301 5
 645 0034 00BF     		nop
 646 0036 0837     		adds	r7, r7, #8
 647              	.LCFI54:
 648              		.cfi_def_cfa_offset 8
 649 0038 BD46     		mov	sp, r7
 650              	.LCFI55:
 651              		.cfi_def_cfa_register 13
 652              		@ sp needed
 653 003a 80BD     		pop	{r7, pc}
 654              		.cfi_endproc
 655              	.LFE328:
 657              		.section	.text._ZN8touchgfx8Drawable8setWidthEs,"axG",%progbits,_ZN8touchgfx8Drawable8setWidthEs,c
 658              		.align	1
 659              		.weak	_ZN8touchgfx8Drawable8setWidthEs
 660              		.syntax unified
 661              		.thumb
 662              		.thumb_func
 663              		.fpu fpv4-sp-d16
 665              	_ZN8touchgfx8Drawable8setWidthEs:
 666              	.LFB329:
 302:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 303:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 304:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the width of this drawable.
 305:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 306:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  width The new width.
 307:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 308:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 309:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 310:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setWidth(int16_t width)
 667              		.loc 2 310 18
 668              		.cfi_startproc
 669              		@ args = 0, pretend = 0, frame = 8
 670              		@ frame_needed = 1, uses_anonymous_args = 0
 671              		@ link register save eliminated.
 672 0000 80B4     		push	{r7}
 673              	.LCFI56:
 674              		.cfi_def_cfa_offset 4
 675              		.cfi_offset 7, -4
 676 0002 83B0     		sub	sp, sp, #12
 677              	.LCFI57:
 678              		.cfi_def_cfa_offset 16
 679 0004 00AF     		add	r7, sp, #0
 680              	.LCFI58:
 681              		.cfi_def_cfa_register 7
 682 0006 7860     		str	r0, [r7, #4]
 683 0008 0B46     		mov	r3, r1
 684 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 311:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 312:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         rect.width = width;
 685              		.loc 2 312 20
 686 000c 7B68     		ldr	r3, [r7, #4]
 687 000e 7A88     		ldrh	r2, [r7, #2]	@ movhi
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 20


 688 0010 1A81     		strh	r2, [r3, #8]	@ movhi
 313:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 689              		.loc 2 313 5
 690 0012 00BF     		nop
 691 0014 0C37     		adds	r7, r7, #12
 692              	.LCFI59:
 693              		.cfi_def_cfa_offset 4
 694 0016 BD46     		mov	sp, r7
 695              	.LCFI60:
 696              		.cfi_def_cfa_register 13
 697              		@ sp needed
 698 0018 5DF8047B 		ldr	r7, [sp], #4
 699              	.LCFI61:
 700              		.cfi_restore 7
 701              		.cfi_def_cfa_offset 0
 702 001c 7047     		bx	lr
 703              		.cfi_endproc
 704              	.LFE329:
 706              		.section	.text._ZN8touchgfx8Drawable9setHeightEs,"axG",%progbits,_ZN8touchgfx8Drawable9setHeightEs
 707              		.align	1
 708              		.weak	_ZN8touchgfx8Drawable9setHeightEs
 709              		.syntax unified
 710              		.thumb
 711              		.thumb_func
 712              		.fpu fpv4-sp-d16
 714              	_ZN8touchgfx8Drawable9setHeightEs:
 715              	.LFB330:
 314:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 315:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 316:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the height of this drawable.
 317:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 318:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  height The new height.
 319:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 320:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 321:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 322:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setHeight(int16_t height)
 716              		.loc 2 322 18
 717              		.cfi_startproc
 718              		@ args = 0, pretend = 0, frame = 8
 719              		@ frame_needed = 1, uses_anonymous_args = 0
 720              		@ link register save eliminated.
 721 0000 80B4     		push	{r7}
 722              	.LCFI62:
 723              		.cfi_def_cfa_offset 4
 724              		.cfi_offset 7, -4
 725 0002 83B0     		sub	sp, sp, #12
 726              	.LCFI63:
 727              		.cfi_def_cfa_offset 16
 728 0004 00AF     		add	r7, sp, #0
 729              	.LCFI64:
 730              		.cfi_def_cfa_register 7
 731 0006 7860     		str	r0, [r7, #4]
 732 0008 0B46     		mov	r3, r1
 733 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 323:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 324:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         rect.height = height;
 734              		.loc 2 324 21
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 21


 735 000c 7B68     		ldr	r3, [r7, #4]
 736 000e 7A88     		ldrh	r2, [r7, #2]	@ movhi
 737 0010 5A81     		strh	r2, [r3, #10]	@ movhi
 325:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 738              		.loc 2 325 5
 739 0012 00BF     		nop
 740 0014 0C37     		adds	r7, r7, #12
 741              	.LCFI65:
 742              		.cfi_def_cfa_offset 4
 743 0016 BD46     		mov	sp, r7
 744              	.LCFI66:
 745              		.cfi_def_cfa_register 13
 746              		@ sp needed
 747 0018 5DF8047B 		ldr	r7, [sp], #4
 748              	.LCFI67:
 749              		.cfi_restore 7
 750              		.cfi_def_cfa_offset 0
 751 001c 7047     		bx	lr
 752              		.cfi_endproc
 753              	.LFE330:
 755              		.section	.text._ZN8touchgfx8Drawable20childGeometryChangedEv,"axG",%progbits,_ZN8touchgfx8Drawable
 756              		.align	1
 757              		.weak	_ZN8touchgfx8Drawable20childGeometryChangedEv
 758              		.syntax unified
 759              		.thumb
 760              		.thumb_func
 761              		.fpu fpv4-sp-d16
 763              	_ZN8touchgfx8Drawable20childGeometryChangedEv:
 764              	.LFB331:
 326:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 327:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 328:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * This function can be called on parent nodes to signal that the size or position of
 329:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * one or more of its children has changed. Currently only used in ScrollableContainer
 330:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * to redraw scrollbars when the size of the scrolling contents changes.
 331:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 332:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void childGeometryChanged()
 765              		.loc 2 332 18
 766              		.cfi_startproc
 767              		@ args = 0, pretend = 0, frame = 8
 768              		@ frame_needed = 1, uses_anonymous_args = 0
 769              		@ link register save eliminated.
 770 0000 80B4     		push	{r7}
 771              	.LCFI68:
 772              		.cfi_def_cfa_offset 4
 773              		.cfi_offset 7, -4
 774 0002 83B0     		sub	sp, sp, #12
 775              	.LCFI69:
 776              		.cfi_def_cfa_offset 16
 777 0004 00AF     		add	r7, sp, #0
 778              	.LCFI70:
 779              		.cfi_def_cfa_register 7
 780 0006 7860     		str	r0, [r7, #4]
 333:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 334:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 781              		.loc 2 334 5
 782 0008 00BF     		nop
 783 000a 0C37     		adds	r7, r7, #12
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 22


 784              	.LCFI71:
 785              		.cfi_def_cfa_offset 4
 786 000c BD46     		mov	sp, r7
 787              	.LCFI72:
 788              		.cfi_def_cfa_register 13
 789              		@ sp needed
 790 000e 5DF8047B 		ldr	r7, [sp], #4
 791              	.LCFI73:
 792              		.cfi_restore 7
 793              		.cfi_def_cfa_offset 0
 794 0012 7047     		bx	lr
 795              		.cfi_endproc
 796              	.LFE331:
 798              		.section	.text._ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE,"axG",%progbits,_ZN8touc
 799              		.align	1
 800              		.weak	_ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE
 801              		.syntax unified
 802              		.thumb
 803              		.thumb_func
 804              		.fpu fpv4-sp-d16
 806              	_ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE:
 807              	.LFB332:
 335:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 336:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 337:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Defines the event handler interface for ClickEvents. The default implementation
 338:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * ignores the event. The event is only received if the Drawable is touchable and
 339:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * visible.
 340:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 341:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  event The ClickEvent received from the HAL.
 342:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 343:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void handleClickEvent(const ClickEvent& event)
 808              		.loc 2 343 18
 809              		.cfi_startproc
 810              		@ args = 0, pretend = 0, frame = 8
 811              		@ frame_needed = 1, uses_anonymous_args = 0
 812              		@ link register save eliminated.
 813 0000 80B4     		push	{r7}
 814              	.LCFI74:
 815              		.cfi_def_cfa_offset 4
 816              		.cfi_offset 7, -4
 817 0002 83B0     		sub	sp, sp, #12
 818              	.LCFI75:
 819              		.cfi_def_cfa_offset 16
 820 0004 00AF     		add	r7, sp, #0
 821              	.LCFI76:
 822              		.cfi_def_cfa_register 7
 823 0006 7860     		str	r0, [r7, #4]
 824 0008 3960     		str	r1, [r7]
 344:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 345:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 825              		.loc 2 345 5
 826 000a 00BF     		nop
 827 000c 0C37     		adds	r7, r7, #12
 828              	.LCFI77:
 829              		.cfi_def_cfa_offset 4
 830 000e BD46     		mov	sp, r7
 831              	.LCFI78:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 23


 832              		.cfi_def_cfa_register 13
 833              		@ sp needed
 834 0010 5DF8047B 		ldr	r7, [sp], #4
 835              	.LCFI79:
 836              		.cfi_restore 7
 837              		.cfi_def_cfa_offset 0
 838 0014 7047     		bx	lr
 839              		.cfi_endproc
 840              	.LFE332:
 842              		.section	.text._ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE,"axG",%progbits,_ZN8
 843              		.align	1
 844              		.weak	_ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE
 845              		.syntax unified
 846              		.thumb
 847              		.thumb_func
 848              		.fpu fpv4-sp-d16
 850              	_ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE:
 851              	.LFB333:
 346:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 347:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 348:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Defines the event handler interface for GestureEvents. The default implementation
 349:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * ignores the event. The event is only received if the Drawable is touchable and
 350:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * visible.
 351:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 352:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  event The GestureEvent received from the HAL.
 353:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 354:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void handleGestureEvent(const GestureEvent& event)
 852              		.loc 2 354 18
 853              		.cfi_startproc
 854              		@ args = 0, pretend = 0, frame = 8
 855              		@ frame_needed = 1, uses_anonymous_args = 0
 856              		@ link register save eliminated.
 857 0000 80B4     		push	{r7}
 858              	.LCFI80:
 859              		.cfi_def_cfa_offset 4
 860              		.cfi_offset 7, -4
 861 0002 83B0     		sub	sp, sp, #12
 862              	.LCFI81:
 863              		.cfi_def_cfa_offset 16
 864 0004 00AF     		add	r7, sp, #0
 865              	.LCFI82:
 866              		.cfi_def_cfa_register 7
 867 0006 7860     		str	r0, [r7, #4]
 868 0008 3960     		str	r1, [r7]
 355:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 356:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 869              		.loc 2 356 5
 870 000a 00BF     		nop
 871 000c 0C37     		adds	r7, r7, #12
 872              	.LCFI83:
 873              		.cfi_def_cfa_offset 4
 874 000e BD46     		mov	sp, r7
 875              	.LCFI84:
 876              		.cfi_def_cfa_register 13
 877              		@ sp needed
 878 0010 5DF8047B 		ldr	r7, [sp], #4
 879              	.LCFI85:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 24


 880              		.cfi_restore 7
 881              		.cfi_def_cfa_offset 0
 882 0014 7047     		bx	lr
 883              		.cfi_endproc
 884              	.LFE333:
 886              		.section	.text._ZN8touchgfx8Drawable14setWidthHeightEss,"axG",%progbits,_ZN8touchgfx8Drawable14set
 887              		.align	1
 888              		.weak	_ZN8touchgfx8Drawable14setWidthHeightEss
 889              		.syntax unified
 890              		.thumb
 891              		.thumb_func
 892              		.fpu fpv4-sp-d16
 894              	_ZN8touchgfx8Drawable14setWidthHeightEss:
 895              	.LFB334:
 357:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 358:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 359:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the dimensions (width and height) of the Drawable without changing the x and y
 360:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * coordinates).
 361:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 362:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  width  The width.
 363:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  height The height.
 364:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 365:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setWidthHeight(int16_t width, int16_t height)
 896              		.loc 2 365 10
 897              		.cfi_startproc
 898              		@ args = 0, pretend = 0, frame = 8
 899              		@ frame_needed = 1, uses_anonymous_args = 0
 900 0000 80B5     		push	{r7, lr}
 901              	.LCFI86:
 902              		.cfi_def_cfa_offset 8
 903              		.cfi_offset 7, -8
 904              		.cfi_offset 14, -4
 905 0002 82B0     		sub	sp, sp, #8
 906              	.LCFI87:
 907              		.cfi_def_cfa_offset 16
 908 0004 00AF     		add	r7, sp, #0
 909              	.LCFI88:
 910              		.cfi_def_cfa_register 7
 911 0006 7860     		str	r0, [r7, #4]
 912 0008 0B46     		mov	r3, r1
 913 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 914 000c 1346     		mov	r3, r2	@ movhi
 915 000e 3B80     		strh	r3, [r7]	@ movhi
 366:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 367:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setWidth(width);
 916              		.loc 2 367 23
 917 0010 7B68     		ldr	r3, [r7, #4]
 918 0012 1B68     		ldr	r3, [r3]
 919 0014 3433     		adds	r3, r3, #52
 920 0016 1B68     		ldr	r3, [r3]
 921              		.loc 2 367 17
 922 0018 B7F90220 		ldrsh	r2, [r7, #2]
 923 001c 1146     		mov	r1, r2
 924 001e 7868     		ldr	r0, [r7, #4]
 925 0020 9847     		blx	r3
 926              	.LVL2:
 368:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setHeight(height);
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 25


 927              		.loc 2 368 25
 928 0022 7B68     		ldr	r3, [r7, #4]
 929 0024 1B68     		ldr	r3, [r3]
 930 0026 3833     		adds	r3, r3, #56
 931 0028 1B68     		ldr	r3, [r3]
 932              		.loc 2 368 18
 933 002a B7F90020 		ldrsh	r2, [r7]
 934 002e 1146     		mov	r1, r2
 935 0030 7868     		ldr	r0, [r7, #4]
 936 0032 9847     		blx	r3
 937              	.LVL3:
 369:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 938              		.loc 2 369 5
 939 0034 00BF     		nop
 940 0036 0837     		adds	r7, r7, #8
 941              	.LCFI89:
 942              		.cfi_def_cfa_offset 8
 943 0038 BD46     		mov	sp, r7
 944              	.LCFI90:
 945              		.cfi_def_cfa_register 13
 946              		@ sp needed
 947 003a 80BD     		pop	{r7, pc}
 948              		.cfi_endproc
 949              	.LFE334:
 951              		.section	.text._ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE,"axG",%progbits,_ZN8touchgf
 952              		.align	1
 953              		.weak	_ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE
 954              		.syntax unified
 955              		.thumb
 956              		.thumb_func
 957              		.fpu fpv4-sp-d16
 959              	_ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE:
 960              	.LFB340:
 370:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 371:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 372:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the position of the Drawable to the same as the given Drawable. This will copy
 373:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * the x, y, width and height.
 374:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 375:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  drawable The drawable.
 376:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 377:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setPosition(int16_t,int16_t,int16_t,int16_t)
 378:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 379:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setPosition(const Drawable& drawable)
 380:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 381:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setPosition(drawable.getX(), drawable.getY(), drawable.getWidth(), drawable.getHeight());
 382:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 383:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 384:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 385:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the x and y coordinates of this Drawable.
 386:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 387:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  drawable The Drawable to copy the x and y coordinates from.
 388:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 389:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setXY(int16_t,int16_t)
 390:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 391:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setXY(const Drawable& drawable)
 392:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 393:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setXY(drawable.getX(), drawable.getY());
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 26


 394:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 395:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 396:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 397:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the dimensions (width and height) of the Drawable without changing the x and y
 398:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * coordinates).
 399:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 400:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  drawable The Drawable to copy the width and height from.
 401:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 402:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setWidthHeight(int16_t,int16_t)
 403:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 404:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setWidthHeight(const Drawable& drawable)
 405:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 406:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setWidthHeight(drawable.getWidth(), drawable.getHeight());
 407:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 408:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 409:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 410:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the dimensions (width and height) of the Drawable without changing the x and y
 411:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * coordinates).
 412:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 413:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  bitmap The Bitmap to copy the width and height from.
 414:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 415:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setWidthHeight(int16_t,int16_t)
 416:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 417:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setWidthHeight(const Bitmap& bitmap)
 418:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 419:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setWidthHeight(bitmap.getWidth(), bitmap.getHeight());
 420:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 421:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 422:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 423:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the dimensions (width and height) of the Drawable without changing the x and y
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * coordinates).
 425:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 426:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  rect The Rect to copy the width and height from.
 427:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 428:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setWidthHeight(int16_t,int16_t)
 429:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 430:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setWidthHeight(const Rect& rect)
 431:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 432:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setWidthHeight(rect.width, rect.height);
 433:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 434:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 435:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 436:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Defines the event handler interface for DragEvents. The default implementation
 437:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * ignores the event. The event is only received if the drawable is touchable and
 438:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * visible.
 439:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 440:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  event The DragEvent received from the HAL.
 441:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 442:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void handleDragEvent(const DragEvent& event)
 961              		.loc 2 442 18
 962              		.cfi_startproc
 963              		@ args = 0, pretend = 0, frame = 8
 964              		@ frame_needed = 1, uses_anonymous_args = 0
 965              		@ link register save eliminated.
 966 0000 80B4     		push	{r7}
 967              	.LCFI91:
 968              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 27


 969              		.cfi_offset 7, -4
 970 0002 83B0     		sub	sp, sp, #12
 971              	.LCFI92:
 972              		.cfi_def_cfa_offset 16
 973 0004 00AF     		add	r7, sp, #0
 974              	.LCFI93:
 975              		.cfi_def_cfa_register 7
 976 0006 7860     		str	r0, [r7, #4]
 977 0008 3960     		str	r1, [r7]
 443:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 444:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 978              		.loc 2 444 5
 979 000a 00BF     		nop
 980 000c 0C37     		adds	r7, r7, #12
 981              	.LCFI94:
 982              		.cfi_def_cfa_offset 4
 983 000e BD46     		mov	sp, r7
 984              	.LCFI95:
 985              		.cfi_def_cfa_register 13
 986              		@ sp needed
 987 0010 5DF8047B 		ldr	r7, [sp], #4
 988              	.LCFI96:
 989              		.cfi_restore 7
 990              		.cfi_def_cfa_offset 0
 991 0014 7047     		bx	lr
 992              		.cfi_endproc
 993              	.LFE340:
 995              		.section	.text._ZN8touchgfx8Drawable15handleTickEventEv,"axG",%progbits,_ZN8touchgfx8Drawable15han
 996              		.align	1
 997              		.weak	_ZN8touchgfx8Drawable15handleTickEventEv
 998              		.syntax unified
 999              		.thumb
 1000              		.thumb_func
 1001              		.fpu fpv4-sp-d16
 1003              	_ZN8touchgfx8Drawable15handleTickEventEv:
 1004              	.LFB341:
 445:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 446:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 447:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Called periodically by the framework if the Drawable instance has subscribed to timer
 448:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * ticks.
 449:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 450:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see Application::registerTimerWidget
 451:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 452:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void handleTickEvent()
 1005              		.loc 2 452 18
 1006              		.cfi_startproc
 1007              		@ args = 0, pretend = 0, frame = 8
 1008              		@ frame_needed = 1, uses_anonymous_args = 0
 1009              		@ link register save eliminated.
 1010 0000 80B4     		push	{r7}
 1011              	.LCFI97:
 1012              		.cfi_def_cfa_offset 4
 1013              		.cfi_offset 7, -4
 1014 0002 83B0     		sub	sp, sp, #12
 1015              	.LCFI98:
 1016              		.cfi_def_cfa_offset 16
 1017 0004 00AF     		add	r7, sp, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 28


 1018              	.LCFI99:
 1019              		.cfi_def_cfa_register 7
 1020 0006 7860     		str	r0, [r7, #4]
 453:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 454:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 1021              		.loc 2 454 5
 1022 0008 00BF     		nop
 1023 000a 0C37     		adds	r7, r7, #12
 1024              	.LCFI100:
 1025              		.cfi_def_cfa_offset 4
 1026 000c BD46     		mov	sp, r7
 1027              	.LCFI101:
 1028              		.cfi_def_cfa_register 13
 1029              		@ sp needed
 1030 000e 5DF8047B 		ldr	r7, [sp], #4
 1031              	.LCFI102:
 1032              		.cfi_restore 7
 1033              		.cfi_def_cfa_offset 0
 1034 0012 7047     		bx	lr
 1035              		.cfi_endproc
 1036              	.LFE341:
 1038              		.section	.text._ZNK8touchgfx8Drawable9isVisibleEv,"axG",%progbits,_ZNK8touchgfx8Drawable9isVisible
 1039              		.align	1
 1040              		.weak	_ZNK8touchgfx8Drawable9isVisibleEv
 1041              		.syntax unified
 1042              		.thumb
 1043              		.thumb_func
 1044              		.fpu fpv4-sp-d16
 1046              	_ZNK8touchgfx8Drawable9isVisibleEv:
 1047              	.LFB344:
 455:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 456:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 457:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Controls whether this Drawable should be visible. Only visible Drawables will have
 458:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * their draw function called. Additionally, invisible drawables will not receive input
 459:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * events.
 460:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 461:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  vis true if this Drawable should be visible. By default, drawables are visible
 462:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *             unless this function has been called with false as argument.
 463:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 464:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 465:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 466:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setVisible(bool vis)
 467:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 468:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         visible = vis;
 469:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 470:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 471:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 472:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Controls whether this Drawable receives touch events or not.
 473:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 474:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  touch If true it will receive touch events, if false it will not.
 475:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 476:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setTouchable(bool touch)
 477:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 478:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         touchable = touch;
 479:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 480:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 481:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 29


 482:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets whether this Drawable is visible.
 483:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 484:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return true if the Drawable is visible.
 485:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 486:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setVisible
 487:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 488:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     bool isVisible() const
 1048              		.loc 2 488 10
 1049              		.cfi_startproc
 1050              		@ args = 0, pretend = 0, frame = 8
 1051              		@ frame_needed = 1, uses_anonymous_args = 0
 1052              		@ link register save eliminated.
 1053 0000 80B4     		push	{r7}
 1054              	.LCFI103:
 1055              		.cfi_def_cfa_offset 4
 1056              		.cfi_offset 7, -4
 1057 0002 83B0     		sub	sp, sp, #12
 1058              	.LCFI104:
 1059              		.cfi_def_cfa_offset 16
 1060 0004 00AF     		add	r7, sp, #0
 1061              	.LCFI105:
 1062              		.cfi_def_cfa_register 7
 1063 0006 7860     		str	r0, [r7, #4]
 489:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 490:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return visible;
 1064              		.loc 2 490 16
 1065 0008 7B68     		ldr	r3, [r7, #4]
 1066 000a 93F82530 		ldrb	r3, [r3, #37]	@ zero_extendqisi2
 491:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 1067              		.loc 2 491 5
 1068 000e 1846     		mov	r0, r3
 1069 0010 0C37     		adds	r7, r7, #12
 1070              	.LCFI106:
 1071              		.cfi_def_cfa_offset 4
 1072 0012 BD46     		mov	sp, r7
 1073              	.LCFI107:
 1074              		.cfi_def_cfa_register 13
 1075              		@ sp needed
 1076 0014 5DF8047B 		ldr	r7, [sp], #4
 1077              	.LCFI108:
 1078              		.cfi_restore 7
 1079              		.cfi_def_cfa_offset 0
 1080 0018 7047     		bx	lr
 1081              		.cfi_endproc
 1082              	.LFE344:
 1084              		.section	.text._ZNK8touchgfx8Drawable11isTouchableEv,"axG",%progbits,_ZNK8touchgfx8Drawable11isTou
 1085              		.align	1
 1086              		.weak	_ZNK8touchgfx8Drawable11isTouchableEv
 1087              		.syntax unified
 1088              		.thumb
 1089              		.thumb_func
 1090              		.fpu fpv4-sp-d16
 1092              	_ZNK8touchgfx8Drawable11isTouchableEv:
 1093              	.LFB345:
 492:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 493:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 494:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets whether this Drawable receives touch events or not.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 30


 495:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 496:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return True if touch events are received.
 497:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 498:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setTouchable
 499:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 500:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     bool isTouchable() const
 1094              		.loc 2 500 10
 1095              		.cfi_startproc
 1096              		@ args = 0, pretend = 0, frame = 8
 1097              		@ frame_needed = 1, uses_anonymous_args = 0
 1098              		@ link register save eliminated.
 1099 0000 80B4     		push	{r7}
 1100              	.LCFI109:
 1101              		.cfi_def_cfa_offset 4
 1102              		.cfi_offset 7, -4
 1103 0002 83B0     		sub	sp, sp, #12
 1104              	.LCFI110:
 1105              		.cfi_def_cfa_offset 16
 1106 0004 00AF     		add	r7, sp, #0
 1107              	.LCFI111:
 1108              		.cfi_def_cfa_register 7
 1109 0006 7860     		str	r0, [r7, #4]
 501:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 502:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return touchable;
 1110              		.loc 2 502 16
 1111 0008 7B68     		ldr	r3, [r7, #4]
 1112 000a 93F82430 		ldrb	r3, [r3, #36]	@ zero_extendqisi2
 503:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 1113              		.loc 2 503 5
 1114 000e 1846     		mov	r0, r3
 1115 0010 0C37     		adds	r7, r7, #12
 1116              	.LCFI112:
 1117              		.cfi_def_cfa_offset 4
 1118 0012 BD46     		mov	sp, r7
 1119              	.LCFI113:
 1120              		.cfi_def_cfa_register 13
 1121              		@ sp needed
 1122 0014 5DF8047B 		ldr	r7, [sp], #4
 1123              	.LCFI114:
 1124              		.cfi_restore 7
 1125              		.cfi_def_cfa_offset 0
 1126 0018 7047     		bx	lr
 1127              		.cfi_endproc
 1128              	.LFE345:
 1130              		.section	.text._ZN8touchgfx8Drawable6moveToEss,"axG",%progbits,_ZN8touchgfx8Drawable6moveToEss,com
 1131              		.align	1
 1132              		.weak	_ZN8touchgfx8Drawable6moveToEss
 1133              		.syntax unified
 1134              		.thumb
 1135              		.thumb_func
 1136              		.fpu fpv4-sp-d16
 1138              	_ZN8touchgfx8Drawable6moveToEss:
 1139              	.LFB347:
 504:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 505:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 506:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Returns the parent node. For the root container, the return value is 0.
 507:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 31


 508:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The parent node. For the root container, the return value is 0.
 509:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 510:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note A disconnected Drawable also has parent 0 which may cause strange side effects.
 511:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 512:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Drawable* getParent() const
 513:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 514:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return parent;
 515:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 516:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 517:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 518:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Moves the drawable.
 519:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 520:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  x The relative position to move to.
 521:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  y The relative position to move to.
 522:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 523:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see moveTo, setXY
 524:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 525:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note Will redraw the appropriate areas of the screen.
 526:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 527:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void moveRelative(int16_t x, int16_t y);
 528:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 529:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 530:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Moves the drawable.
 531:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 532:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  x The absolute position to move to.
 533:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  y The absolute position to move to.
 534:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 535:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see moveRelative, setXY
 536:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 537:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note Will redraw the appropriate areas of the screen.
 538:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 539:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void moveTo(int16_t x, int16_t y)
 1140              		.loc 2 539 18
 1141              		.cfi_startproc
 1142              		@ args = 0, pretend = 0, frame = 8
 1143              		@ frame_needed = 1, uses_anonymous_args = 0
 1144 0000 80B5     		push	{r7, lr}
 1145              	.LCFI115:
 1146              		.cfi_def_cfa_offset 8
 1147              		.cfi_offset 7, -8
 1148              		.cfi_offset 14, -4
 1149 0002 82B0     		sub	sp, sp, #8
 1150              	.LCFI116:
 1151              		.cfi_def_cfa_offset 16
 1152 0004 00AF     		add	r7, sp, #0
 1153              	.LCFI117:
 1154              		.cfi_def_cfa_register 7
 1155 0006 7860     		str	r0, [r7, #4]
 1156 0008 0B46     		mov	r3, r1
 1157 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 1158 000c 1346     		mov	r3, r2	@ movhi
 1159 000e 3B80     		strh	r3, [r7]	@ movhi
 540:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 541:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         moveRelative(x - rect.x, y - rect.y);
 1160              		.loc 2 541 44
 1161 0010 7B68     		ldr	r3, [r7, #4]
 1162 0012 1B68     		ldr	r3, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 32


 1163 0014 5033     		adds	r3, r3, #80
 1164 0016 1B68     		ldr	r3, [r3]
 1165              		.loc 2 541 24
 1166 0018 7988     		ldrh	r1, [r7, #2]
 1167              		.loc 2 541 31
 1168 001a 7A68     		ldr	r2, [r7, #4]
 1169 001c B2F90420 		ldrsh	r2, [r2, #4]
 1170 0020 92B2     		uxth	r2, r2
 1171              		.loc 2 541 24
 1172 0022 8A1A     		subs	r2, r1, r2
 1173 0024 92B2     		uxth	r2, r2
 1174              		.loc 2 541 21
 1175 0026 10B2     		sxth	r0, r2
 1176              		.loc 2 541 36
 1177 0028 3988     		ldrh	r1, [r7]
 1178              		.loc 2 541 43
 1179 002a 7A68     		ldr	r2, [r7, #4]
 1180 002c B2F90620 		ldrsh	r2, [r2, #6]
 1181 0030 92B2     		uxth	r2, r2
 1182              		.loc 2 541 36
 1183 0032 8A1A     		subs	r2, r1, r2
 1184 0034 92B2     		uxth	r2, r2
 1185              		.loc 2 541 21
 1186 0036 12B2     		sxth	r2, r2
 1187 0038 0146     		mov	r1, r0
 1188 003a 7868     		ldr	r0, [r7, #4]
 1189 003c 9847     		blx	r3
 1190              	.LVL4:
 542:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 1191              		.loc 2 542 5
 1192 003e 00BF     		nop
 1193 0040 0837     		adds	r7, r7, #8
 1194              	.LCFI118:
 1195              		.cfi_def_cfa_offset 8
 1196 0042 BD46     		mov	sp, r7
 1197              	.LCFI119:
 1198              		.cfi_def_cfa_register 13
 1199              		@ sp needed
 1200 0044 80BD     		pop	{r7, pc}
 1201              		.cfi_endproc
 1202              	.LFE347:
 1204              		.section	.text._ZN8touchgfx8Drawable19resetDrawChainCacheEv,"axG",%progbits,_ZN8touchgfx8Drawable1
 1205              		.align	1
 1206              		.weak	_ZN8touchgfx8Drawable19resetDrawChainCacheEv
 1207              		.syntax unified
 1208              		.thumb
 1209              		.thumb_func
 1210              		.fpu fpv4-sp-d16
 1212              	_ZN8touchgfx8Drawable19resetDrawChainCacheEv:
 1213              	.LFB348:
 543:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 544:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 545:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Render the Drawable object into a dynamic bitmap.
 546:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 547:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  id The target dynamic bitmap to use for rendering.
 548:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 549:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void drawToDynamicBitmap(BitmapId id);
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 33


 550:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 551:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** protected:
 552:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Rect rect; ///< The coordinates of this Drawable, relative to its parent.
 553:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /// @cond
 554:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Rect cachedVisibleRect; ///< Cached representation of currently visible area. For TouchGFX inte
 555:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /// @endcond
 556:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Drawable* parent;      ///< Pointer to this drawable's parent.
 557:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Drawable* nextSibling; ///< Pointer to the next Drawable. Maintained by containers.
 558:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /// @cond
 559:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Drawable* nextDrawChainElement; ///< Next in draw chain. For TouchGFX internal use.
 560:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     int16_t cachedAbsX;             ///< Cached value of absolute x coordinate. For TouchGFX intern
 561:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     int16_t cachedAbsY;             ///< Cached value of absolute y coordinate. For TouchGFX intern
 562:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /// @endcond
 563:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     bool touchable; ///< True if this drawable should receive touch events.
 564:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     bool visible;   ///< True if this drawable should be drawn.
 565:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 566:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /// @cond
 567:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     static const int16_t UNCACHED_INDICATOR = -1; ///< Constant representing uncached value. For To
 568:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 569:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 570:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * For TouchGFX internal use only.
 571:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 572:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Reset cached coordinate data.
 573:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 574:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For TouchGFX internal use only.
 575:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 576:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void resetDrawChainCache()
 1214              		.loc 2 576 10
 1215              		.cfi_startproc
 1216              		@ args = 0, pretend = 0, frame = 8
 1217              		@ frame_needed = 1, uses_anonymous_args = 0
 1218              		@ link register save eliminated.
 1219 0000 80B4     		push	{r7}
 1220              	.LCFI120:
 1221              		.cfi_def_cfa_offset 4
 1222              		.cfi_offset 7, -4
 1223 0002 83B0     		sub	sp, sp, #12
 1224              	.LCFI121:
 1225              		.cfi_def_cfa_offset 16
 1226 0004 00AF     		add	r7, sp, #0
 1227              	.LCFI122:
 1228              		.cfi_def_cfa_register 7
 1229 0006 7860     		str	r0, [r7, #4]
 577:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 578:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         // Resetting the cached indicators
 579:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         cachedVisibleRect.x = UNCACHED_INDICATOR;
 1230              		.loc 2 579 29
 1231 0008 7B68     		ldr	r3, [r7, #4]
 1232 000a 4FF6FF72 		movw	r2, #65535
 1233 000e 9A81     		strh	r2, [r3, #12]	@ movhi
 580:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         cachedAbsX = UNCACHED_INDICATOR;
 1234              		.loc 2 580 20
 1235 0010 7B68     		ldr	r3, [r7, #4]
 1236 0012 4FF6FF72 		movw	r2, #65535
 1237 0016 1A84     		strh	r2, [r3, #32]	@ movhi
 581:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         cachedAbsY = UNCACHED_INDICATOR;
 1238              		.loc 2 581 20
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 34


 1239 0018 7B68     		ldr	r3, [r7, #4]
 1240 001a 4FF6FF72 		movw	r2, #65535
 1241 001e 5A84     		strh	r2, [r3, #34]	@ movhi
 582:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 1242              		.loc 2 582 5
 1243 0020 00BF     		nop
 1244 0022 0C37     		adds	r7, r7, #12
 1245              	.LCFI123:
 1246              		.cfi_def_cfa_offset 4
 1247 0024 BD46     		mov	sp, r7
 1248              	.LCFI124:
 1249              		.cfi_def_cfa_register 13
 1250              		@ sp needed
 1251 0026 5DF8047B 		ldr	r7, [sp], #4
 1252              	.LCFI125:
 1253              		.cfi_restore 7
 1254              		.cfi_def_cfa_offset 0
 1255 002a 7047     		bx	lr
 1256              		.cfi_endproc
 1257              	.LFE348:
 1259              		.section	.text._ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_,"axG",%progbits,_ZN8touchgfx
 1260              		.align	1
 1261              		.weak	_ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_
 1262              		.syntax unified
 1263              		.thumb
 1264              		.thumb_func
 1265              		.fpu fpv4-sp-d16
 1267              	_ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_:
 1268              	.LFB352:
 583:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 584:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 585:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * For TouchGFX internal use only.
 586:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 587:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Obtain cached version of visible rect.
 588:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 589:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The Visible rect for this drawable. Only calculated once.
 590:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 591:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For TouchGFX internal use only.
 592:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 593:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Rect& getCachedVisibleRect()
 594:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 595:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         if (cachedVisibleRect.x == UNCACHED_INDICATOR)
 596:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         {
 597:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             Rect visibleRect(0, 0, getWidth(), getHeight());
 598:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             getVisibleRect(visibleRect);
 599:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             cachedVisibleRect = visibleRect;
 600:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         }
 601:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return cachedVisibleRect;
 602:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 603:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 604:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 605:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * For TouchGFX internal use only.
 606:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 607:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Obtain cached version of absolute X-coord.
 608:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 609:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The absolute x coordinate for this drawable. Only calculated once.
 610:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 35


 611:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For TouchGFX internal use only.
 612:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 613:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     int16_t getCachedAbsX()
 614:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 615:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         if (cachedAbsX == UNCACHED_INDICATOR)
 616:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         {
 617:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             Rect absRect = getAbsoluteRect();
 618:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             cachedAbsX = absRect.x;
 619:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             cachedAbsY = absRect.y;
 620:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         }
 621:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return cachedAbsX;
 622:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 623:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 624:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 625:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * For TouchGFX internal use only.
 626:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 627:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Obtain cached version of absolute Y-coord.
 628:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 629:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The absolute y coordinate for this drawable. Only calculated once.
 630:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 631:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For TouchGFX internal use only.
 632:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 633:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     int16_t getCachedAbsY()
 634:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 635:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         if (cachedAbsY == UNCACHED_INDICATOR)
 636:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         {
 637:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             Rect absRect = getAbsoluteRect();
 638:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             cachedAbsX = absRect.x;
 639:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****             cachedAbsY = absRect.y;
 640:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         }
 641:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return cachedAbsY;
 642:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 643:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 644:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 645:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * For TouchGFX internal use only.
 646:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 647:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Configure linked list for draw chain.
 648:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 649:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param          invalidatedArea     Include drawables that intersect with this area only.
 650:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param [in,out] nextPreviousElement Modifiable element in linked list.
 651:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 652:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For TouchGFX internal use only.
 653:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 654:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setupDrawChain(const Rect& invalidatedArea, Drawable** nextPreviousElement)
 1269              		.loc 2 654 18
 1270              		.cfi_startproc
 1271              		@ args = 0, pretend = 0, frame = 16
 1272              		@ frame_needed = 1, uses_anonymous_args = 0
 1273 0000 80B5     		push	{r7, lr}
 1274              	.LCFI126:
 1275              		.cfi_def_cfa_offset 8
 1276              		.cfi_offset 7, -8
 1277              		.cfi_offset 14, -4
 1278 0002 84B0     		sub	sp, sp, #16
 1279              	.LCFI127:
 1280              		.cfi_def_cfa_offset 24
 1281 0004 00AF     		add	r7, sp, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 36


 1282              	.LCFI128:
 1283              		.cfi_def_cfa_register 7
 1284 0006 F860     		str	r0, [r7, #12]
 1285 0008 B960     		str	r1, [r7, #8]
 1286 000a 7A60     		str	r2, [r7, #4]
 655:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 656:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         resetDrawChainCache();
 1287              		.loc 2 656 28
 1288 000c F868     		ldr	r0, [r7, #12]
 1289 000e FFF7FEFF 		bl	_ZN8touchgfx8Drawable19resetDrawChainCacheEv
 657:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         nextDrawChainElement = *nextPreviousElement;
 1290              		.loc 2 657 32
 1291 0012 7B68     		ldr	r3, [r7, #4]
 1292 0014 1A68     		ldr	r2, [r3]
 1293              		.loc 2 657 30
 1294 0016 FB68     		ldr	r3, [r7, #12]
 1295 0018 DA61     		str	r2, [r3, #28]
 658:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         *nextPreviousElement = this;
 1296              		.loc 2 658 30
 1297 001a 7B68     		ldr	r3, [r7, #4]
 1298 001c FA68     		ldr	r2, [r7, #12]
 1299 001e 1A60     		str	r2, [r3]
 659:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 1300              		.loc 2 659 5
 1301 0020 00BF     		nop
 1302 0022 1037     		adds	r7, r7, #16
 1303              	.LCFI129:
 1304              		.cfi_def_cfa_offset 8
 1305 0024 BD46     		mov	sp, r7
 1306              	.LCFI130:
 1307              		.cfi_def_cfa_register 13
 1308              		@ sp needed
 1309 0026 80BD     		pop	{r7, pc}
 1310              		.cfi_endproc
 1311              	.LFE352:
 1313              		.section	.text._ZN8touchgfx6ScreenD2Ev,"axG",%progbits,_ZN8touchgfx6ScreenD5Ev,comdat
 1314              		.align	1
 1315              		.weak	_ZN8touchgfx6ScreenD2Ev
 1316              		.syntax unified
 1317              		.thumb
 1318              		.thumb_func
 1319              		.fpu fpv4-sp-d16
 1321              	_ZN8touchgfx6ScreenD2Ev:
 1322              	.LFB358:
 1323              		.file 3 "Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 37


  13:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  * @file touchgfx/Screen.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  * Declares the touchgfx::Screen class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** #ifndef TOUCHGFX_SCREEN_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** #define TOUCHGFX_SCREEN_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** #include <touchgfx/containers/Container.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** #include <touchgfx/events/ClickEvent.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** #include <touchgfx/events/DragEvent.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** #include <touchgfx/events/GestureEvent.hpp>
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** namespace touchgfx
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** {
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** class Drawable;
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** class Transition;
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** /**
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  * A Screen represents a full-screen drawable area. Applications create specific screens by
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  * subclassing this class. Each Screen has a root container to which drawables are
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  * added. The Screen makes sure to delegate draw requests and various events to the
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  * appropriate drawables in correct order.
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****  */
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** class Screen
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** {
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** public:
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /** Initializes a new instance of the Screen class. */
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     Screen();
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /** Finalizes an instance of the Screen class. */
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual ~Screen()
 1324              		.loc 3 45 13
 1325              		.cfi_startproc
 1326              		@ args = 0, pretend = 0, frame = 8
 1327              		@ frame_needed = 1, uses_anonymous_args = 0
 1328 0000 80B5     		push	{r7, lr}
 1329              	.LCFI131:
 1330              		.cfi_def_cfa_offset 8
 1331              		.cfi_offset 7, -8
 1332              		.cfi_offset 14, -4
 1333 0002 82B0     		sub	sp, sp, #8
 1334              	.LCFI132:
 1335              		.cfi_def_cfa_offset 16
 1336 0004 00AF     		add	r7, sp, #0
 1337              	.LCFI133:
 1338              		.cfi_def_cfa_register 7
 1339 0006 7860     		str	r0, [r7, #4]
 1340              	.LBB28:
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 1341              		.loc 3 46 5
 1342 0008 064A     		ldr	r2, .L38
 1343 000a 7B68     		ldr	r3, [r7, #4]
 1344 000c 1A60     		str	r2, [r3]
 1345 000e 7B68     		ldr	r3, [r7, #4]
 1346 0010 0433     		adds	r3, r3, #4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 38


 1347 0012 1846     		mov	r0, r3
 1348 0014 FFF7FEFF 		bl	_ZN8touchgfx9ContainerD1Ev
 1349              	.LBE28:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1350              		.loc 3 47 5
 1351 0018 7B68     		ldr	r3, [r7, #4]
 1352 001a 1846     		mov	r0, r3
 1353 001c 0837     		adds	r7, r7, #8
 1354              	.LCFI134:
 1355              		.cfi_def_cfa_offset 8
 1356 001e BD46     		mov	sp, r7
 1357              	.LCFI135:
 1358              		.cfi_def_cfa_register 13
 1359              		@ sp needed
 1360 0020 80BD     		pop	{r7, pc}
 1361              	.L39:
 1362 0022 00BF     		.align	2
 1363              	.L38:
 1364 0024 08000000 		.word	_ZTVN8touchgfx6ScreenE+8
 1365              		.cfi_endproc
 1366              	.LFE358:
 1368              		.weak	_ZN8touchgfx6ScreenD1Ev
 1369              		.thumb_set _ZN8touchgfx6ScreenD1Ev,_ZN8touchgfx6ScreenD2Ev
 1370              		.section	.text._ZN8touchgfx6ScreenD0Ev,"axG",%progbits,_ZN8touchgfx6ScreenD5Ev,comdat
 1371              		.align	1
 1372              		.weak	_ZN8touchgfx6ScreenD0Ev
 1373              		.syntax unified
 1374              		.thumb
 1375              		.thumb_func
 1376              		.fpu fpv4-sp-d16
 1378              	_ZN8touchgfx6ScreenD0Ev:
 1379              	.LFB360:
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 1380              		.loc 3 45 13
 1381              		.cfi_startproc
 1382              		@ args = 0, pretend = 0, frame = 8
 1383              		@ frame_needed = 1, uses_anonymous_args = 0
 1384 0000 80B5     		push	{r7, lr}
 1385              	.LCFI136:
 1386              		.cfi_def_cfa_offset 8
 1387              		.cfi_offset 7, -8
 1388              		.cfi_offset 14, -4
 1389 0002 82B0     		sub	sp, sp, #8
 1390              	.LCFI137:
 1391              		.cfi_def_cfa_offset 16
 1392 0004 00AF     		add	r7, sp, #0
 1393              	.LCFI138:
 1394              		.cfi_def_cfa_register 7
 1395 0006 7860     		str	r0, [r7, #4]
 1396              		.loc 3 47 5
 1397 0008 7868     		ldr	r0, [r7, #4]
 1398 000a FFF7FEFF 		bl	_ZN8touchgfx6ScreenD1Ev
 1399 000e 3C21     		movs	r1, #60
 1400 0010 7868     		ldr	r0, [r7, #4]
 1401 0012 FFF7FEFF 		bl	_ZdlPvj
 1402 0016 7B68     		ldr	r3, [r7, #4]
 1403 0018 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 39


 1404 001a 0837     		adds	r7, r7, #8
 1405              	.LCFI139:
 1406              		.cfi_def_cfa_offset 8
 1407 001c BD46     		mov	sp, r7
 1408              	.LCFI140:
 1409              		.cfi_def_cfa_register 13
 1410              		@ sp needed
 1411 001e 80BD     		pop	{r7, pc}
 1412              		.cfi_endproc
 1413              	.LFE360:
 1415              		.section	.text._ZN8touchgfx6Screen11setupScreenEv,"axG",%progbits,_ZN8touchgfx6Screen11setupScreen
 1416              		.align	1
 1417              		.weak	_ZN8touchgfx6Screen11setupScreenEv
 1418              		.syntax unified
 1419              		.thumb
 1420              		.thumb_func
 1421              		.fpu fpv4-sp-d16
 1423              	_ZN8touchgfx6Screen11setupScreenEv:
 1424              	.LFB361:
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Tells the screen to draw its entire area.
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @note The more specific draw(Rect&amp;) version is preferred when possible.
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     void draw();
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Starts a JSMOC run, analyzing what parts of what widgets should be redrawn.
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param [in] invalidatedArea The area to redraw, expressed in absolute coordinates.
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @note SMOC is an abbreviation of <em>S&oslash;ren &amp; Martin's Occlusion Culling</em>.
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     void startSMOC(const Rect& invalidatedArea);
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Recursive JSMOC function. This is the actual occlusion culling implementation.
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param [in] invalidatedArea The area to redraw, expressed in absolute coordinates.
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param [in] widgetToDraw    Widget currently being drawn.
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @note JSMOC is an abbreviation of <em>Jesper, S&oslash;ren &amp; Martin's Occlusion Culling<
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     void JSMOC(const Rect& invalidatedArea, Drawable* widgetToDraw);
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Tell the screen to draw the specified area. Will traverse the drawables tree from in
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * z-order and delegate draw to them.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param [in] rect The area in absolute coordinates.
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @note The given rect must be in absolute coordinates.
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void draw(Rect& rect);
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 40


  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by Application::switchScreen() when this screen is going to be displayed. Base
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * version does nothing, but place any screen specific initialization code in an
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * overridden version.
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @see Application::switchScreen
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void setupScreen()
 1425              		.loc 3 92 18
 1426              		.cfi_startproc
 1427              		@ args = 0, pretend = 0, frame = 8
 1428              		@ frame_needed = 1, uses_anonymous_args = 0
 1429              		@ link register save eliminated.
 1430 0000 80B4     		push	{r7}
 1431              	.LCFI141:
 1432              		.cfi_def_cfa_offset 4
 1433              		.cfi_offset 7, -4
 1434 0002 83B0     		sub	sp, sp, #12
 1435              	.LCFI142:
 1436              		.cfi_def_cfa_offset 16
 1437 0004 00AF     		add	r7, sp, #0
 1438              	.LCFI143:
 1439              		.cfi_def_cfa_register 7
 1440 0006 7860     		str	r0, [r7, #4]
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1441              		.loc 3 94 5
 1442 0008 00BF     		nop
 1443 000a 0C37     		adds	r7, r7, #12
 1444              	.LCFI144:
 1445              		.cfi_def_cfa_offset 4
 1446 000c BD46     		mov	sp, r7
 1447              	.LCFI145:
 1448              		.cfi_def_cfa_register 13
 1449              		@ sp needed
 1450 000e 5DF8047B 		ldr	r7, [sp], #4
 1451              	.LCFI146:
 1452              		.cfi_restore 7
 1453              		.cfi_def_cfa_offset 0
 1454 0012 7047     		bx	lr
 1455              		.cfi_endproc
 1456              	.LFE361:
 1458              		.section	.text._ZN8touchgfx6Screen15afterTransitionEv,"axG",%progbits,_ZN8touchgfx6Screen15afterTr
 1459              		.align	1
 1460              		.weak	_ZN8touchgfx6Screen15afterTransitionEv
 1461              		.syntax unified
 1462              		.thumb
 1463              		.thumb_func
 1464              		.fpu fpv4-sp-d16
 1466              	_ZN8touchgfx6Screen15afterTransitionEv:
 1467              	.LFB362:
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by Application::handleTickEvent() when the transition to the screen is done. Base
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * version does nothing, but override to do screen specific initialization code that has
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * to be done after the transition to the screen.
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @see Application::handleTickEvent
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 41


 102:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void afterTransition()
 1468              		.loc 3 103 18
 1469              		.cfi_startproc
 1470              		@ args = 0, pretend = 0, frame = 8
 1471              		@ frame_needed = 1, uses_anonymous_args = 0
 1472              		@ link register save eliminated.
 1473 0000 80B4     		push	{r7}
 1474              	.LCFI147:
 1475              		.cfi_def_cfa_offset 4
 1476              		.cfi_offset 7, -4
 1477 0002 83B0     		sub	sp, sp, #12
 1478              	.LCFI148:
 1479              		.cfi_def_cfa_offset 16
 1480 0004 00AF     		add	r7, sp, #0
 1481              	.LCFI149:
 1482              		.cfi_def_cfa_register 7
 1483 0006 7860     		str	r0, [r7, #4]
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1484              		.loc 3 105 5
 1485 0008 00BF     		nop
 1486 000a 0C37     		adds	r7, r7, #12
 1487              	.LCFI150:
 1488              		.cfi_def_cfa_offset 4
 1489 000c BD46     		mov	sp, r7
 1490              	.LCFI151:
 1491              		.cfi_def_cfa_register 13
 1492              		@ sp needed
 1493 000e 5DF8047B 		ldr	r7, [sp], #4
 1494              	.LCFI152:
 1495              		.cfi_restore 7
 1496              		.cfi_def_cfa_offset 0
 1497 0012 7047     		bx	lr
 1498              		.cfi_endproc
 1499              	.LFE362:
 1501              		.section	.text._ZN8touchgfx6Screen14tearDownScreenEv,"axG",%progbits,_ZN8touchgfx6Screen14tearDown
 1502              		.align	1
 1503              		.weak	_ZN8touchgfx6Screen14tearDownScreenEv
 1504              		.syntax unified
 1505              		.thumb
 1506              		.thumb_func
 1507              		.fpu fpv4-sp-d16
 1509              	_ZN8touchgfx6Screen14tearDownScreenEv:
 1510              	.LFB363:
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by Application::switchScreen() when this screen will no longer be displayed.
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Base version does nothing, but place any screen specific cleanup code in an
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * overridden version.
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @see Application::switchScreen
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void tearDownScreen()
 1511              		.loc 3 114 18
 1512              		.cfi_startproc
 1513              		@ args = 0, pretend = 0, frame = 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 42


 1514              		@ frame_needed = 1, uses_anonymous_args = 0
 1515              		@ link register save eliminated.
 1516 0000 80B4     		push	{r7}
 1517              	.LCFI153:
 1518              		.cfi_def_cfa_offset 4
 1519              		.cfi_offset 7, -4
 1520 0002 83B0     		sub	sp, sp, #12
 1521              	.LCFI154:
 1522              		.cfi_def_cfa_offset 16
 1523 0004 00AF     		add	r7, sp, #0
 1524              	.LCFI155:
 1525              		.cfi_def_cfa_register 7
 1526 0006 7860     		str	r0, [r7, #4]
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1527              		.loc 3 116 5
 1528 0008 00BF     		nop
 1529 000a 0C37     		adds	r7, r7, #12
 1530              	.LCFI156:
 1531              		.cfi_def_cfa_offset 4
 1532 000c BD46     		mov	sp, r7
 1533              	.LCFI157:
 1534              		.cfi_def_cfa_register 13
 1535              		@ sp needed
 1536 000e 5DF8047B 		ldr	r7, [sp], #4
 1537              	.LCFI158:
 1538              		.cfi_restore 7
 1539              		.cfi_def_cfa_offset 0
 1540 0012 7047     		bx	lr
 1541              		.cfi_endproc
 1542              	.LFE363:
 1544              		.section	.text._ZN8touchgfx6Screen15handleTickEventEv,"axG",%progbits,_ZN8touchgfx6Screen15handleT
 1545              		.align	1
 1546              		.weak	_ZN8touchgfx6Screen15handleTickEventEv
 1547              		.syntax unified
 1548              		.thumb
 1549              		.thumb_func
 1550              		.fpu fpv4-sp-d16
 1552              	_ZN8touchgfx6Screen15handleTickEventEv:
 1553              	.LFB364:
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Traverse the drawables in reverse z-order and notify them of a click event.
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param  event The event to handle.
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void handleClickEvent(const ClickEvent& event);
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Traverse the drawables in reverse z-order and notify them of a drag event.
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param  event The event to handle.
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void handleDragEvent(const DragEvent& event);
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Handle gestures. Traverses drawables in reverse-z and notifies them of the gesture.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 43


 134:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param  event The event to handle.
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void handleGestureEvent(const GestureEvent& event);
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by the Application on the current screen with a frequency of
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Application::TICK_INTERVAL_MS.
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void handleTickEvent()
 1554              		.loc 3 143 18
 1555              		.cfi_startproc
 1556              		@ args = 0, pretend = 0, frame = 8
 1557              		@ frame_needed = 1, uses_anonymous_args = 0
 1558              		@ link register save eliminated.
 1559 0000 80B4     		push	{r7}
 1560              	.LCFI159:
 1561              		.cfi_def_cfa_offset 4
 1562              		.cfi_offset 7, -4
 1563 0002 83B0     		sub	sp, sp, #12
 1564              	.LCFI160:
 1565              		.cfi_def_cfa_offset 16
 1566 0004 00AF     		add	r7, sp, #0
 1567              	.LCFI161:
 1568              		.cfi_def_cfa_register 7
 1569 0006 7860     		str	r0, [r7, #4]
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1570              		.loc 3 145 5
 1571 0008 00BF     		nop
 1572 000a 0C37     		adds	r7, r7, #12
 1573              	.LCFI162:
 1574              		.cfi_def_cfa_offset 4
 1575 000c BD46     		mov	sp, r7
 1576              	.LCFI163:
 1577              		.cfi_def_cfa_register 13
 1578              		@ sp needed
 1579 000e 5DF8047B 		ldr	r7, [sp], #4
 1580              	.LCFI164:
 1581              		.cfi_restore 7
 1582              		.cfi_def_cfa_offset 0
 1583 0012 7047     		bx	lr
 1584              		.cfi_endproc
 1585              	.LFE364:
 1587              		.section	.text._ZN8touchgfx6Screen14handleKeyEventEh,"axG",%progbits,_ZN8touchgfx6Screen14handleKe
 1588              		.align	1
 1589              		.weak	_ZN8touchgfx6Screen14handleKeyEventEh
 1590              		.syntax unified
 1591              		.thumb
 1592              		.thumb_func
 1593              		.fpu fpv4-sp-d16
 1595              	_ZN8touchgfx6Screen14handleKeyEventEh:
 1596              	.LFB365:
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by the Application on the reception of a "key", the meaning of which is
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * platform/application specific. Default implementation does nothing.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 44


 150:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param  key The key to handle.
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void handleKeyEvent(uint8_t key)
 1597              		.loc 3 153 18
 1598              		.cfi_startproc
 1599              		@ args = 0, pretend = 0, frame = 8
 1600              		@ frame_needed = 1, uses_anonymous_args = 0
 1601              		@ link register save eliminated.
 1602 0000 80B4     		push	{r7}
 1603              	.LCFI165:
 1604              		.cfi_def_cfa_offset 4
 1605              		.cfi_offset 7, -4
 1606 0002 83B0     		sub	sp, sp, #12
 1607              	.LCFI166:
 1608              		.cfi_def_cfa_offset 16
 1609 0004 00AF     		add	r7, sp, #0
 1610              	.LCFI167:
 1611              		.cfi_def_cfa_register 7
 1612 0006 7860     		str	r0, [r7, #4]
 1613 0008 0B46     		mov	r3, r1
 1614 000a FB70     		strb	r3, [r7, #3]
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1615              		.loc 3 155 5
 1616 000c 00BF     		nop
 1617 000e 0C37     		adds	r7, r7, #12
 1618              	.LCFI168:
 1619              		.cfi_def_cfa_offset 4
 1620 0010 BD46     		mov	sp, r7
 1621              	.LCFI169:
 1622              		.cfi_def_cfa_register 13
 1623              		@ sp needed
 1624 0012 5DF8047B 		ldr	r7, [sp], #4
 1625              	.LCFI170:
 1626              		.cfi_restore 7
 1627              		.cfi_def_cfa_offset 0
 1628 0016 7047     		bx	lr
 1629              		.cfi_endproc
 1630              	.LFE365:
 1632              		.section	.text._ZN8touchgfx6Screen3addERNS_8DrawableE,"axG",%progbits,_ZN8touchgfx6Screen3addERNS_
 1633              		.align	1
 1634              		.weak	_ZN8touchgfx6Screen3addERNS_8DrawableE
 1635              		.syntax unified
 1636              		.thumb
 1637              		.thumb_func
 1638              		.fpu fpv4-sp-d16
 1640              	_ZN8touchgfx6Screen3addERNS_8DrawableE:
 1641              	.LFB370:
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Determines if using JSMOC.
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @return true if this screen uses the JSMOC drawing algorithm.
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     bool usingSMOC() const
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 45


 164:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****         return useSMOC;
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Enables the transition to access the containers.
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param [in] trans The transition to bind.
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     void bindTransition(Transition& trans);
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Obtain a reference to the root container of this screen.
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @return The root container.
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     Container& getRootContainer()
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****         return container;
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Gets width of the current screen. In most cases, this is the same as HAL::DISPLAY_WIDTH.
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @return  The screen width.
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     int16_t getScreenWidth() const
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****         return container.getWidth();
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Gets height of the current screen. In most cases, this is the same as HAL::DISPLAY_HEIGHT.
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @return  The screen height.
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     int16_t getScreenHeight() const
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****         return container.getHeight();
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** protected:
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Determines whether to use JSMOC or painter's algorithm for drawing.
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param  enabled true if JSMOC should be enabled, false if disabled (meaning painter's
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *                 algorithm is employed instead).
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     void useSMOCDrawing(bool enabled);
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Add a drawable to the content container.
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param [in] d The Drawable to add.
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @note Must not be called with a Drawable that was already added to the screen. If in doubt,
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *       call remove() first.
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 46


 221:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     void add(Drawable& d)
 1642              		.loc 3 221 10
 1643              		.cfi_startproc
 1644              		@ args = 0, pretend = 0, frame = 8
 1645              		@ frame_needed = 1, uses_anonymous_args = 0
 1646 0000 80B5     		push	{r7, lr}
 1647              	.LCFI171:
 1648              		.cfi_def_cfa_offset 8
 1649              		.cfi_offset 7, -8
 1650              		.cfi_offset 14, -4
 1651 0002 82B0     		sub	sp, sp, #8
 1652              	.LCFI172:
 1653              		.cfi_def_cfa_offset 16
 1654 0004 00AF     		add	r7, sp, #0
 1655              	.LCFI173:
 1656              		.cfi_def_cfa_register 7
 1657 0006 7860     		str	r0, [r7, #4]
 1658 0008 3960     		str	r1, [r7]
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****         container.add(d);
 1659              		.loc 3 223 22
 1660 000a 7B68     		ldr	r3, [r7, #4]
 1661 000c 0433     		adds	r3, r3, #4
 1662 000e 3968     		ldr	r1, [r7]
 1663 0010 1846     		mov	r0, r3
 1664 0012 FFF7FEFF 		bl	_ZN8touchgfx9Container3addERNS_8DrawableE
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1665              		.loc 3 224 5
 1666 0016 00BF     		nop
 1667 0018 0837     		adds	r7, r7, #8
 1668              	.LCFI174:
 1669              		.cfi_def_cfa_offset 8
 1670 001a BD46     		mov	sp, r7
 1671              	.LCFI175:
 1672              		.cfi_def_cfa_register 13
 1673              		@ sp needed
 1674 001c 80BD     		pop	{r7, pc}
 1675              		.cfi_endproc
 1676              	.LFE370:
 1678              		.section	.text._ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE,"axG",%progbits,_ZN8touchgfx6Wi
 1679              		.align	1
 1680              		.weak	_ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE
 1681              		.syntax unified
 1682              		.thumb
 1683              		.thumb_func
 1684              		.fpu fpv4-sp-d16
 1686              	_ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE:
 1687              	.LFB450:
 1688              		.file 4 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * the root directory of this software component.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 47


   9:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  * @file touchgfx/widgets/Widget.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  * Declares the touchgfx::Widget class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** #ifndef TOUCHGFX_WIDGET_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** #define TOUCHGFX_WIDGET_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** #include <touchgfx/Drawable.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** 
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** namespace touchgfx
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** /**
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  * A Widget is an element which can be displayed (drawn) in the framebuffer. Hence a Widget is a
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  * subclass of Drawable. It implements getLastChild(), but leaves the implementation of
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  * draw() and getSolidRect() to subclasses of Widget, so it is still an abstract class.
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  *
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  * If a Widget contains more than one logical element, consider implementing several
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  * subclasses of Widget and create a Container with the Widgets.
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  *
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  * @see Drawable
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****  */
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** class Widget : public Drawable
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** public:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****     /**
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****      * Since a Widget is only one Drawable, Widget::getLastChild simply yields itself as
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****      * result, but only if the Widget isVisible and isTouchable.
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****      *
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****      * @param       x    Not used since this Widget is the only "child".
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****      * @param       y    Not used since this Widget is the only "child".
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****      * @param [out] last Result, the address of the actual instance of the Widget.
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****      */
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****     virtual void getLastChild(int16_t x, int16_t y, Drawable** last)
 1689              		.loc 4 47 18
 1690              		.cfi_startproc
 1691              		@ args = 0, pretend = 0, frame = 16
 1692              		@ frame_needed = 1, uses_anonymous_args = 0
 1693 0000 80B5     		push	{r7, lr}
 1694              	.LCFI176:
 1695              		.cfi_def_cfa_offset 8
 1696              		.cfi_offset 7, -8
 1697              		.cfi_offset 14, -4
 1698 0002 84B0     		sub	sp, sp, #16
 1699              	.LCFI177:
 1700              		.cfi_def_cfa_offset 24
 1701 0004 00AF     		add	r7, sp, #0
 1702              	.LCFI178:
 1703              		.cfi_def_cfa_register 7
 1704 0006 F860     		str	r0, [r7, #12]
 1705 0008 7B60     		str	r3, [r7, #4]
 1706 000a 0B46     		mov	r3, r1	@ movhi
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 48


 1707 000c 7B81     		strh	r3, [r7, #10]	@ movhi
 1708 000e 1346     		mov	r3, r2	@ movhi
 1709 0010 3B81     		strh	r3, [r7, #8]	@ movhi
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****     {
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         (void)x;
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         (void)y;
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         if (isVisible() && isTouchable())
 1710              		.loc 4 51 22
 1711 0012 FB68     		ldr	r3, [r7, #12]
 1712 0014 1846     		mov	r0, r3
 1713 0016 FFF7FEFF 		bl	_ZNK8touchgfx8Drawable9isVisibleEv
 1714 001a 0346     		mov	r3, r0
 1715              		.loc 4 51 25
 1716 001c 002B     		cmp	r3, #0
 1717 001e 08D0     		beq	.L49
 1718              		.loc 4 51 39 discriminator 1
 1719 0020 FB68     		ldr	r3, [r7, #12]
 1720 0022 1846     		mov	r0, r3
 1721 0024 FFF7FEFF 		bl	_ZNK8touchgfx8Drawable11isTouchableEv
 1722 0028 0346     		mov	r3, r0
 1723              		.loc 4 51 25 discriminator 1
 1724 002a 002B     		cmp	r3, #0
 1725 002c 01D0     		beq	.L49
 1726              		.loc 4 51 25 is_stmt 0 discriminator 3
 1727 002e 0123     		movs	r3, #1
 1728 0030 00E0     		b	.L50
 1729              	.L49:
 1730              		.loc 4 51 25 discriminator 4
 1731 0032 0023     		movs	r3, #0
 1732              	.L50:
 1733              		.loc 4 51 9 is_stmt 1 discriminator 6
 1734 0034 002B     		cmp	r3, #0
 1735 0036 02D0     		beq	.L52
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         {
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****             *last = this;
 1736              		.loc 4 53 19
 1737 0038 FA68     		ldr	r2, [r7, #12]
 1738 003a 7B68     		ldr	r3, [r7, #4]
 1739 003c 1A60     		str	r2, [r3]
 1740              	.L52:
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         }
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****     }
 1741              		.loc 4 55 5
 1742 003e 00BF     		nop
 1743 0040 1037     		adds	r7, r7, #16
 1744              	.LCFI179:
 1745              		.cfi_def_cfa_offset 8
 1746 0042 BD46     		mov	sp, r7
 1747              	.LCFI180:
 1748              		.cfi_def_cfa_register 13
 1749              		@ sp needed
 1750 0044 80BD     		pop	{r7, pc}
 1751              		.cfi_endproc
 1752              	.LFE450:
 1754              		.section	.text._ZN8touchgfx6WidgetC2Ev,"axG",%progbits,_ZN8touchgfx6WidgetC5Ev,comdat
 1755              		.align	1
 1756              		.weak	_ZN8touchgfx6WidgetC2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 49


 1757              		.syntax unified
 1758              		.thumb
 1759              		.thumb_func
 1760              		.fpu fpv4-sp-d16
 1762              	_ZN8touchgfx6WidgetC2Ev:
 1763              	.LFB453:
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1764              		.loc 4 36 7
 1765              		.cfi_startproc
 1766              		@ args = 0, pretend = 0, frame = 8
 1767              		@ frame_needed = 1, uses_anonymous_args = 0
 1768 0000 80B5     		push	{r7, lr}
 1769              	.LCFI181:
 1770              		.cfi_def_cfa_offset 8
 1771              		.cfi_offset 7, -8
 1772              		.cfi_offset 14, -4
 1773 0002 82B0     		sub	sp, sp, #8
 1774              	.LCFI182:
 1775              		.cfi_def_cfa_offset 16
 1776 0004 00AF     		add	r7, sp, #0
 1777              	.LCFI183:
 1778              		.cfi_def_cfa_register 7
 1779 0006 7860     		str	r0, [r7, #4]
 1780              	.LBB29:
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1781              		.loc 4 36 7
 1782 0008 7B68     		ldr	r3, [r7, #4]
 1783 000a 1846     		mov	r0, r3
 1784 000c FFF7FEFF 		bl	_ZN8touchgfx8DrawableC2Ev
 1785 0010 034A     		ldr	r2, .L55
 1786 0012 7B68     		ldr	r3, [r7, #4]
 1787 0014 1A60     		str	r2, [r3]
 1788              	.LBE29:
 1789 0016 7B68     		ldr	r3, [r7, #4]
 1790 0018 1846     		mov	r0, r3
 1791 001a 0837     		adds	r7, r7, #8
 1792              	.LCFI184:
 1793              		.cfi_def_cfa_offset 8
 1794 001c BD46     		mov	sp, r7
 1795              	.LCFI185:
 1796              		.cfi_def_cfa_register 13
 1797              		@ sp needed
 1798 001e 80BD     		pop	{r7, pc}
 1799              	.L56:
 1800              		.align	2
 1801              	.L55:
 1802 0020 08000000 		.word	_ZTVN8touchgfx6WidgetE+8
 1803              		.cfi_endproc
 1804              	.LFE453:
 1806              		.weak	_ZN8touchgfx6WidgetC1Ev
 1807              		.thumb_set _ZN8touchgfx6WidgetC1Ev,_ZN8touchgfx6WidgetC2Ev
 1808              		.section	.text._ZN8touchgfx6WidgetD2Ev,"axG",%progbits,_ZN8touchgfx6WidgetD5Ev,comdat
 1809              		.align	1
 1810              		.weak	_ZN8touchgfx6WidgetD2Ev
 1811              		.syntax unified
 1812              		.thumb
 1813              		.thumb_func
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 50


 1814              		.fpu fpv4-sp-d16
 1816              	_ZN8touchgfx6WidgetD2Ev:
 1817              	.LFB456:
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1818              		.loc 4 36 7
 1819              		.cfi_startproc
 1820              		@ args = 0, pretend = 0, frame = 8
 1821              		@ frame_needed = 1, uses_anonymous_args = 0
 1822 0000 80B5     		push	{r7, lr}
 1823              	.LCFI186:
 1824              		.cfi_def_cfa_offset 8
 1825              		.cfi_offset 7, -8
 1826              		.cfi_offset 14, -4
 1827 0002 82B0     		sub	sp, sp, #8
 1828              	.LCFI187:
 1829              		.cfi_def_cfa_offset 16
 1830 0004 00AF     		add	r7, sp, #0
 1831              	.LCFI188:
 1832              		.cfi_def_cfa_register 7
 1833 0006 7860     		str	r0, [r7, #4]
 1834              	.LBB30:
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1835              		.loc 4 36 7
 1836 0008 054A     		ldr	r2, .L59
 1837 000a 7B68     		ldr	r3, [r7, #4]
 1838 000c 1A60     		str	r2, [r3]
 1839 000e 7B68     		ldr	r3, [r7, #4]
 1840 0010 1846     		mov	r0, r3
 1841 0012 FFF7FEFF 		bl	_ZN8touchgfx8DrawableD2Ev
 1842              	.LBE30:
 1843 0016 7B68     		ldr	r3, [r7, #4]
 1844 0018 1846     		mov	r0, r3
 1845 001a 0837     		adds	r7, r7, #8
 1846              	.LCFI189:
 1847              		.cfi_def_cfa_offset 8
 1848 001c BD46     		mov	sp, r7
 1849              	.LCFI190:
 1850              		.cfi_def_cfa_register 13
 1851              		@ sp needed
 1852 001e 80BD     		pop	{r7, pc}
 1853              	.L60:
 1854              		.align	2
 1855              	.L59:
 1856 0020 08000000 		.word	_ZTVN8touchgfx6WidgetE+8
 1857              		.cfi_endproc
 1858              	.LFE456:
 1860              		.weak	_ZN8touchgfx6WidgetD1Ev
 1861              		.thumb_set _ZN8touchgfx6WidgetD1Ev,_ZN8touchgfx6WidgetD2Ev
 1862              		.section	.text._ZN8touchgfx6WidgetD0Ev,"axG",%progbits,_ZN8touchgfx6WidgetD5Ev,comdat
 1863              		.align	1
 1864              		.weak	_ZN8touchgfx6WidgetD0Ev
 1865              		.syntax unified
 1866              		.thumb
 1867              		.thumb_func
 1868              		.fpu fpv4-sp-d16
 1870              	_ZN8touchgfx6WidgetD0Ev:
 1871              	.LFB458:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 51


  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1872              		.loc 4 36 7
 1873              		.cfi_startproc
 1874              		@ args = 0, pretend = 0, frame = 8
 1875              		@ frame_needed = 1, uses_anonymous_args = 0
 1876 0000 80B5     		push	{r7, lr}
 1877              	.LCFI191:
 1878              		.cfi_def_cfa_offset 8
 1879              		.cfi_offset 7, -8
 1880              		.cfi_offset 14, -4
 1881 0002 82B0     		sub	sp, sp, #8
 1882              	.LCFI192:
 1883              		.cfi_def_cfa_offset 16
 1884 0004 00AF     		add	r7, sp, #0
 1885              	.LCFI193:
 1886              		.cfi_def_cfa_register 7
 1887 0006 7860     		str	r0, [r7, #4]
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1888              		.loc 4 36 7
 1889 0008 7868     		ldr	r0, [r7, #4]
 1890 000a FFF7FEFF 		bl	_ZN8touchgfx6WidgetD1Ev
 1891 000e 2821     		movs	r1, #40
 1892 0010 7868     		ldr	r0, [r7, #4]
 1893 0012 FFF7FEFF 		bl	_ZdlPvj
 1894 0016 7B68     		ldr	r3, [r7, #4]
 1895 0018 1846     		mov	r0, r3
 1896 001a 0837     		adds	r7, r7, #8
 1897              	.LCFI194:
 1898              		.cfi_def_cfa_offset 8
 1899 001c BD46     		mov	sp, r7
 1900              	.LCFI195:
 1901              		.cfi_def_cfa_register 13
 1902              		@ sp needed
 1903 001e 80BD     		pop	{r7, pc}
 1904              		.cfi_endproc
 1905              	.LFE458:
 1907              		.section	.text._ZN8touchgfx3BoxC2Ev,"axG",%progbits,_ZN8touchgfx3BoxC5Ev,comdat
 1908              		.align	1
 1909              		.weak	_ZN8touchgfx3BoxC2Ev
 1910              		.syntax unified
 1911              		.thumb
 1912              		.thumb_func
 1913              		.fpu fpv4-sp-d16
 1915              	_ZN8touchgfx3BoxC2Ev:
 1916              	.LFB459:
 1917              		.file 5 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** *******************************************************************************/
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 52


  12:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****  * @file touchgfx/widgets/Box.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****  * Declares the touchgfx::Box class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** #ifndef TOUCHGFX_BOX_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** #define TOUCHGFX_BOX_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** #include <touchgfx/widgets/Widget.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** 
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** namespace touchgfx
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** {
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** /**
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****  * Simple widget capable of showing a rectangle of a specific color and an optional alpha.
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****  */
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** class Box : public Widget
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** {
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** public:
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     /** Construct a new Box with a default alpha value of 255 (solid) */
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     Box()
 1918              		.loc 5 33 5
 1919              		.cfi_startproc
 1920              		@ args = 0, pretend = 0, frame = 8
 1921              		@ frame_needed = 1, uses_anonymous_args = 0
 1922 0000 80B5     		push	{r7, lr}
 1923              	.LCFI196:
 1924              		.cfi_def_cfa_offset 8
 1925              		.cfi_offset 7, -8
 1926              		.cfi_offset 14, -4
 1927 0002 82B0     		sub	sp, sp, #8
 1928              	.LCFI197:
 1929              		.cfi_def_cfa_offset 16
 1930 0004 00AF     		add	r7, sp, #0
 1931              	.LCFI198:
 1932              		.cfi_def_cfa_register 7
 1933 0006 7860     		str	r0, [r7, #4]
 1934              	.LBB31:
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****         : Widget(), alpha(255), color(0)
 1935              		.loc 5 34 40
 1936 0008 7B68     		ldr	r3, [r7, #4]
 1937 000a 1846     		mov	r0, r3
 1938 000c 2623     		movs	r3, #38
 1939 000e 1A46     		mov	r2, r3
 1940 0010 0021     		movs	r1, #0
 1941 0012 FFF7FEFF 		bl	memset
 1942 0016 7B68     		ldr	r3, [r7, #4]
 1943 0018 1846     		mov	r0, r3
 1944 001a FFF7FEFF 		bl	_ZN8touchgfx6WidgetC2Ev
 1945 001e 094A     		ldr	r2, .L65
 1946 0020 7B68     		ldr	r3, [r7, #4]
 1947 0022 1A60     		str	r2, [r3]
 1948 0024 7B68     		ldr	r3, [r7, #4]
 1949 0026 FF22     		movs	r2, #255
 1950 0028 83F82620 		strb	r2, [r3, #38]
 1951 002c 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 53


 1952 002e 2833     		adds	r3, r3, #40
 1953 0030 0021     		movs	r1, #0
 1954 0032 1846     		mov	r0, r3
 1955 0034 FFF7FEFF 		bl	_ZN8touchgfx9colortypeC1Em
 1956              	.LBE31:
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     {
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     }
 1957              		.loc 5 36 5
 1958 0038 7B68     		ldr	r3, [r7, #4]
 1959 003a 1846     		mov	r0, r3
 1960 003c 0837     		adds	r7, r7, #8
 1961              	.LCFI199:
 1962              		.cfi_def_cfa_offset 8
 1963 003e BD46     		mov	sp, r7
 1964              	.LCFI200:
 1965              		.cfi_def_cfa_register 13
 1966              		@ sp needed
 1967 0040 80BD     		pop	{r7, pc}
 1968              	.L66:
 1969 0042 00BF     		.align	2
 1970              	.L65:
 1971 0044 08000000 		.word	_ZTVN8touchgfx3BoxE+8
 1972              		.cfi_endproc
 1973              	.LFE459:
 1975              		.weak	_ZN8touchgfx3BoxC1Ev
 1976              		.thumb_set _ZN8touchgfx3BoxC1Ev,_ZN8touchgfx3BoxC2Ev
 1977              		.section	.text._ZN8touchgfx3Box8setColorENS_9colortypeE,"axG",%progbits,_ZN8touchgfx3Box8setColorE
 1978              		.align	1
 1979              		.weak	_ZN8touchgfx3Box8setColorENS_9colortypeE
 1980              		.syntax unified
 1981              		.thumb
 1982              		.thumb_func
 1983              		.fpu fpv4-sp-d16
 1985              	_ZN8touchgfx3Box8setColorENS_9colortypeE:
 1986              	.LFB464:
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** 
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     /**
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      * Construct a Box with the given size and color (and optionally alpha).
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      *
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      * @param  width  The width of the box.
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      * @param  height The height of the box.
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      * @param  color  The color of the box.
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      * @param  alpha  (Optional) The alpha of the box. Default is 255 (solid).
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      */
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     Box(uint16_t width, uint16_t height, colortype color, uint8_t alpha = 255)
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****         : Widget(),
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****           alpha(alpha), color(color)
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     {
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****         rect.width = width;
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****         rect.height = height;
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     }
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** 
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     virtual Rect getSolidRect() const;
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** 
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     /**
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      * Sets the color of the Box.
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 54


  59:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      * @param  color The color of the box.
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      *
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      * @see getColor, Color::getColorFrom24BitRGB
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****      */
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     void setColor(colortype color)
 1987              		.loc 5 63 10
 1988              		.cfi_startproc
 1989              		@ args = 0, pretend = 0, frame = 8
 1990              		@ frame_needed = 1, uses_anonymous_args = 0
 1991              		@ link register save eliminated.
 1992 0000 80B4     		push	{r7}
 1993              	.LCFI201:
 1994              		.cfi_def_cfa_offset 4
 1995              		.cfi_offset 7, -4
 1996 0002 83B0     		sub	sp, sp, #12
 1997              	.LCFI202:
 1998              		.cfi_def_cfa_offset 16
 1999 0004 00AF     		add	r7, sp, #0
 2000              	.LCFI203:
 2001              		.cfi_def_cfa_register 7
 2002 0006 7860     		str	r0, [r7, #4]
 2003 0008 3960     		str	r1, [r7]
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     {
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****         this->color = color;
 2004              		.loc 5 65 21
 2005 000a 7B68     		ldr	r3, [r7, #4]
 2006 000c 3A68     		ldr	r2, [r7]
 2007 000e 9A62     		str	r2, [r3, #40]
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp ****     }
 2008              		.loc 5 66 5
 2009 0010 00BF     		nop
 2010 0012 0C37     		adds	r7, r7, #12
 2011              	.LCFI204:
 2012              		.cfi_def_cfa_offset 4
 2013 0014 BD46     		mov	sp, r7
 2014              	.LCFI205:
 2015              		.cfi_def_cfa_register 13
 2016              		@ sp needed
 2017 0016 5DF8047B 		ldr	r7, [sp], #4
 2018              	.LCFI206:
 2019              		.cfi_restore 7
 2020              		.cfi_def_cfa_offset 0
 2021 001a 7047     		bx	lr
 2022              		.cfi_endproc
 2023              	.LFE464:
 2025              		.section	.text._ZN8touchgfx3HAL11getInstanceEv,"axG",%progbits,_ZN8touchgfx3HAL11getInstanceEv,com
 2026              		.align	1
 2027              		.weak	_ZN8touchgfx3HAL11getInstanceEv
 2028              		.syntax unified
 2029              		.thumb
 2030              		.thumb_func
 2031              		.fpu fpv4-sp-d16
 2033              	_ZN8touchgfx3HAL11getInstanceEv:
 2034              	.LFB572:
 2035              		.file 6 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 55


   3:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  * @file touchgfx/hal/HAL.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  * Declares the touchgfx::HAL class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #ifndef TOUCHGFX_HAL_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #define TOUCHGFX_HAL_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <touchgfx/Bitmap.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <touchgfx/Drawable.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <touchgfx/hal/BlitOp.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <touchgfx/hal/DMA.hpp>
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <touchgfx/hal/FrameBufferAllocator.hpp>
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <touchgfx/hal/Gestures.hpp>
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <touchgfx/lcd/LCD.hpp>
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <platform/core/MCUInstrumentation.hpp>
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <platform/driver/button/ButtonController.hpp>
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** #include <platform/driver/touch/TouchController.hpp>
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** namespace touchgfx
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** {
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** class FlashDataReader;
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** class UIEventListener;
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** /**
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  * Hardware Abstraction Layer.
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  *
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  * Contains functions that are specific to the hardware platform the code is running on.
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  */
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** class HAL
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** {
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** public:
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Initializes a new instance of the HAL class.
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] dmaInterface Reference to the DMA interface.
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] display      Reference to the LCD.
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] touchCtrl    Reference to the touch controller.
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param width             The width of the LCD display, in pixels.
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param height            The height of the LCD display, in pixels.
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     HAL(DMA_Interface& dmaInterface, LCD& display, TouchController& touchCtrl, uint16_t width, uint
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         : dma(dmaInterface),
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           lcdRef(display),
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           touchController(touchCtrl),
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           mcuInstrumentation(0),
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 56


  60:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           buttonController(0),
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           frameBufferAllocator(0),
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           gestures(),
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           nativeDisplayOrientation(ORIENTATION_LANDSCAPE),
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           taskDelayFunc(0),
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           frameBuffer0(0),
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           frameBuffer1(0),
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           frameBuffer2(0),
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           refreshStrategy(REFRESH_STRATEGY_DEFAULT),
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           fingerSize(1),
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           lockDMAToPorch(false),
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           frameBufferUpdatedThisFrame(false),
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           auxiliaryLCD(0),
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           partialFrameBufferRect(),
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           listener(0),
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           lastX(0),
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           lastY(0),
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           touchSampleRate(1),
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           mcuLoadPct(0),
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           vSyncCnt(0),
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           vSyncForFrame(1),
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           vSyncCompensationEnabled(false),
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           clientDirty(false),
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           swapRequested(false),
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           lastTouched(false),
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           updateMCULoad(0),
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           cc_begin(0),
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           requestedOrientation(ORIENTATION_LANDSCAPE),
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           displayOrientationChangeRequested(false),
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           useAuxiliaryLCD(false),
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           useDMAAcceleration(true),
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           lastRenderMethod(HARDWARE)
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         instance = this;
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         DISPLAY_WIDTH = width;
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         DISPLAY_HEIGHT = height;
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         DISPLAY_ROTATION = rotate0;
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         FRAME_BUFFER_WIDTH = DISPLAY_WIDTH;
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         FRAME_BUFFER_HEIGHT = DISPLAY_HEIGHT;
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         nativeDisplayOrientation = ((width >= height) ? ORIENTATION_LANDSCAPE : ORIENTATION_PORTRAI
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Finalizes an instance of the HAL class. */
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual ~HAL()
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the HAL instance.
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The HAL instance.
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static HAL* getInstance()
 2036              		.loc 6 112 17
 2037              		.cfi_startproc
 2038              		@ args = 0, pretend = 0, frame = 0
 2039              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 57


 2040              		@ link register save eliminated.
 2041 0000 80B4     		push	{r7}
 2042              	.LCFI207:
 2043              		.cfi_def_cfa_offset 4
 2044              		.cfi_offset 7, -4
 2045 0002 00AF     		add	r7, sp, #0
 2046              	.LCFI208:
 2047              		.cfi_def_cfa_register 7
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return instance;
 2048              		.loc 6 114 16
 2049 0004 034B     		ldr	r3, .L70
 2050 0006 1B68     		ldr	r3, [r3]
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 2051              		.loc 6 115 5
 2052 0008 1846     		mov	r0, r3
 2053 000a BD46     		mov	sp, r7
 2054              	.LCFI209:
 2055              		.cfi_def_cfa_register 13
 2056              		@ sp needed
 2057 000c 5DF8047B 		ldr	r7, [sp], #4
 2058              	.LCFI210:
 2059              		.cfi_restore 7
 2060              		.cfi_def_cfa_offset 0
 2061 0010 7047     		bx	lr
 2062              	.L71:
 2063 0012 00BF     		.align	2
 2064              	.L70:
 2065 0014 00000000 		.word	_ZN8touchgfx3HAL8instanceE
 2066              		.cfi_endproc
 2067              	.LFE572:
 2069              		.section	.text._ZN8touchgfx3HAL3lcdEv,"axG",%progbits,_ZN8touchgfx3HAL3lcdEv,comdat
 2070              		.align	1
 2071              		.weak	_ZN8touchgfx3HAL3lcdEv
 2072              		.syntax unified
 2073              		.thumb
 2074              		.thumb_func
 2075              		.fpu fpv4-sp-d16
 2077              	_ZN8touchgfx3HAL3lcdEv:
 2078              	.LFB577:
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets the desired display orientation (landscape or portrait). If desired orientation
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * is different from the native orientation of the display, a rotation is automatically
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * applied. The rotation does not incur any performance cost.
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  orientation The desired display orientation.
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note A screen transition must occur before this takes effect!
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void setDisplayOrientation(DisplayOrientation orientation)
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         requestedOrientation = orientation;
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         displayOrientationChangeRequested = true;
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 58


 133:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the current display orientation. Will be equal to the native orientation of the
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * display unless setDisplayOrientation has been explicitly called earlier.
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The current display orientation.
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     DisplayOrientation getDisplayOrientation() const
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (DISPLAY_ROTATION == rotate0)
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return nativeDisplayOrientation;
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         else
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return (nativeDisplayOrientation == ORIENTATION_LANDSCAPE ? ORIENTATION_PORTRAIT : ORIE
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Notify the framework that a DMA interrupt has occurred. */
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void signalDMAInterrupt()
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         dma.signalDMAInterrupt();
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * This function initializes the HAL, DMA, TouchController, and interrupts.
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @see configureInterrupts
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void initialize();
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Main event loop. Will wait for VSYNC signal, and then process next frame. Call this
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * function from your GUI task.
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note This function never returns!
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void taskEntry();
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * This function is called whenever the framework has performed a complete draw.
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *  On some platforms, a local framebuffer needs to be pushed to the display through a
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *  SPI channel or similar. Implement that functionality here. This function is called
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *  whenever the framework has performed a complete draw.
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void flushFrameBuffer();
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * This function is called whenever the framework has performed a partial draw.
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  rect The area of the screen that has been drawn, expressed in absolute coordinates.
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @see flushFrameBuffer
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void flushFrameBuffer(const Rect& rect);
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Allow the DMA to start transfers. Front Porch Entry is a good place to call this. */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 59


 190:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void allowDMATransfers();
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Has to be called from within the LCD IRQ routine when the Front Porch Entry is
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * reached.
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void frontPorchEntered()
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         allowDMATransfers();
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** This function blocks until the DMA queue (containing BlitOps) is empty. */
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void flushDMA();
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Waits for the framebuffer to become available for use (i.e. not used by DMA
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * transfers).
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A pointer to the beginning of the currently used framebuffer.
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Function blocks until framebuffer is available. Client code MUST call
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *       unlockFrameBuffer() when framebuffer operation has completed.
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual uint16_t* lockFrameBuffer();
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Unlocks the framebuffer (MUST be called exactly once for each call to
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * lockFrameBuffer()).
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void unlockFrameBuffer();
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 221:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the framebuffer address used by the TFT controller.
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The address of the framebuffer currently being displayed on the TFT.
 225:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual uint16_t* getTFTFrameBuffer() const = 0;
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets a reference to the LCD.
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A reference to the LCD.
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static LCD& lcd()
 2079              		.loc 6 233 17
 2080              		.cfi_startproc
 2081              		@ args = 0, pretend = 0, frame = 0
 2082              		@ frame_needed = 1, uses_anonymous_args = 0
 2083              		@ link register save eliminated.
 2084 0000 80B4     		push	{r7}
 2085              	.LCFI211:
 2086              		.cfi_def_cfa_offset 4
 2087              		.cfi_offset 7, -4
 2088 0002 00AF     		add	r7, sp, #0
 2089              	.LCFI212:
 2090              		.cfi_def_cfa_register 7
 234:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 60


 235:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (instance->useAuxiliaryLCD && instance->auxiliaryLCD)
 2091              		.loc 6 235 23
 2092 0004 0B4B     		ldr	r3, .L75
 2093 0006 1B68     		ldr	r3, [r3]
 2094 0008 93F87630 		ldrb	r3, [r3, #118]	@ zero_extendqisi2
 2095              		.loc 6 235 9
 2096 000c 002B     		cmp	r3, #0
 2097 000e 08D0     		beq	.L73
 2098              		.loc 6 235 52 discriminator 1
 2099 0010 084B     		ldr	r3, .L75
 2100 0012 1B68     		ldr	r3, [r3]
 2101 0014 DB6C     		ldr	r3, [r3, #76]
 2102              		.loc 6 235 39 discriminator 1
 2103 0016 002B     		cmp	r3, #0
 2104 0018 03D0     		beq	.L73
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return *instance->auxiliaryLCD;
 2105              		.loc 6 237 31
 2106 001a 064B     		ldr	r3, .L75
 2107 001c 1B68     		ldr	r3, [r3]
 2108 001e DB6C     		ldr	r3, [r3, #76]
 2109 0020 02E0     		b	.L74
 2110              	.L73:
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return instance->lcdRef;
 2111              		.loc 6 239 26
 2112 0022 044B     		ldr	r3, .L75
 2113 0024 1B68     		ldr	r3, [r3]
 2114 0026 9B68     		ldr	r3, [r3, #8]
 2115              	.L74:
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 2116              		.loc 6 240 5
 2117 0028 1846     		mov	r0, r3
 2118 002a BD46     		mov	sp, r7
 2119              	.LCFI213:
 2120              		.cfi_def_cfa_register 13
 2121              		@ sp needed
 2122 002c 5DF8047B 		ldr	r7, [sp], #4
 2123              	.LCFI214:
 2124              		.cfi_restore 7
 2125              		.cfi_def_cfa_offset 0
 2126 0030 7047     		bx	lr
 2127              	.L76:
 2128 0032 00BF     		.align	2
 2129              	.L75:
 2130 0034 00000000 		.word	_ZN8touchgfx3HAL8instanceE
 2131              		.cfi_endproc
 2132              	.LFE577:
 2134              		.section	.text._ZN8touchgfx3HAL15getAuxiliaryLCDEv,"axG",%progbits,_ZN8touchgfx3HAL15getAuxiliaryL
 2135              		.align	1
 2136              		.weak	_ZN8touchgfx3HAL15getAuxiliaryLCDEv
 2137              		.syntax unified
 2138              		.thumb
 2139              		.thumb_func
 2140              		.fpu fpv4-sp-d16
 2142              	_ZN8touchgfx3HAL15getAuxiliaryLCDEv:
 2143              	.LFB611:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 61


 241:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 242:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 243:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Function to set whether the DMA transfers are locked to the TFT update cycle. If
 244:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * locked, DMA transfer will not begin until the TFT controller has finished updating
 245:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * the display. If not locked, DMA transfers will begin as soon as possible. Default is
 246:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * true (DMA is locked with TFT).
 247:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 248:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Disabling the lock will in most cases significantly increase rendering performance.
 249:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * It is therefore strongly recommended to disable it. Depending on platform this may in
 250:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * rare cases cause rendering problems (visible tearing on display). Please see the
 251:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * chapter "Optimizing DMA During TFT Controller Access" for details on this setting.
 252:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 253:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  enableLock True to lock DMA transfers to the front porch signal. Conservative,
 254:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                    default setting. False to disable, which will normally yield
 255:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                    substantial performance improvement.
 256:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 257:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note This setting only has effect when using double buffering.
 258:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 259:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void lockDMAToFrontPorch(bool enableLock)
 260:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 261:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         lockDMAToPorch = enableLock;
 262:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 263:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * This function performs a platform-specific memcpy, if supported by the hardware.
 266:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 267:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [out] dest     Pointer to destination memory.
 268:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in]  src      Pointer to source memory.
 269:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param       numBytes Number of bytes to copy.
 270:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 271:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return true if the copy succeeded, false if copy was not performed.
 272:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 273:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual bool blockCopy(void* RESTRICT dest, const void* RESTRICT src, uint32_t numBytes);
 274:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 275:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 276:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Function for obtaining the blit capabilities of the concrete HAL implementation. As
 277:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * default, will return whatever blitcaps are reported by the associated DMA object.
 278:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 279:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * DMA operations can be disabled by calling enableDMAAcceleration(bool).
 280:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 281:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return a bitmask of the supported blitcaps.
 282:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 283:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @see enableDMAAcceleration
 284:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 285:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual BlitOperations getBlitCaps()
 286:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 287:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (useDMAAcceleration)
 288:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 289:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return dma.getBlitCaps();
 290:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 291:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         else
 292:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 293:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return static_cast<BlitOperations>(0);
 294:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 295:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 296:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 297:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 62


 298:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets a flag to allow use of DMA operations to speed up drawing operations.
 299:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 300:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  enable True to enable, false to disable.
 301:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 302:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @see getBlitCaps
 303:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 304:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void enableDMAAcceleration(const bool enable)
 305:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 306:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         useDMAAcceleration = enable;
 307:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 308:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 309:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 310:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Blits a 2D source-array to the framebuffer performing alpha-blending as specified.
 311:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 312:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  pSrc                 The source-array pointer (points to first value to copy)
 313:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  pClut                The CLUT pointer (points to CLUT header data which include
 314:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              the type and size of this CLUT followed by colors data)
 315:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x                    The destination x coordinate on the framebuffer.
 316:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y                    The destination y coordinate on the framebuffer.
 317:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  width                The width desired area of the source 2D array.
 318:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  height               The height of desired area of the source 2D array.
 319:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  srcWidth             The distance (in elements) from first value of first line, to
 320:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              first value of second line (the source 2D array width)
 321:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  alpha                The alpha value to use for blending (255 = solid, no blending)
 322:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  hasTransparentPixels If true, this data copy contains transparent pixels and
 323:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              require hardware support for that to be enabled.
 324:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  dstWidth             The distance (in elements) from first value of first line, to
 325:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              first value of second line (the destination 2D array width)
 326:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  srcFormat            The source buffer color format (default is the framebuffer
 327:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              format)
 328:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  dstFormat            The destination buffer color format (default is the
 329:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              framebuffer format)
 330:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 331:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Alpha=255 is assumed "solid" and shall be used if HAL does not support
 332:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *       BLIT_OP_COPY_WITH_ALPHA.
 333:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 334:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitCopy(const uint16_t* pSrc, const uint8_t* pClut, uint16_t x, uint16_t y, uint1
 335:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 336:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 337:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Blits a 2D source-array to the framebuffer performing alpha-blending as specified.
 338:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 339:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  pSrc                 The source-array pointer (points to first value to copy)
 340:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x                    The destination x coordinate on the framebuffer.
 341:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y                    The destination y coordinate on the framebuffer.
 342:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  width                The width desired area of the source 2D array.
 343:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  height               The height of desired area of the source 2D array.
 344:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  srcWidth             The distance (in elements) from first value of first line, to
 345:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              first value of second line (the source 2D array width)
 346:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  alpha                The alpha value to use for blending (255 = solid, no blending)
 347:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  hasTransparentPixels If true, this data copy contains transparent pixels and
 348:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              require hardware support for that to be enabled.
 349:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  dstWidth             The distance (in elements) from first value of first line, to
 350:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              first value of second line (the destination 2D array width)
 351:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  srcFormat            The source buffer color format (default is the framebuffer
 352:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              format)
 353:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  dstFormat            The destination buffer color format (default is the
 354:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              framebuffer format)
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 63


 355:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 356:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Alpha=255 is assumed "solid" and shall be used if HAL does not support
 357:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *       BLIT_OP_COPY_WITH_ALPHA.
 358:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 359:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitCopy(const uint16_t* pSrc, uint16_t x, uint16_t y, uint16_t width, uint16_t he
 360:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 361:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 362:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Blits a 2D source-array to the framebuffer performing alpha-blending as specified using
 363:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * the default lcd format.
 364:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 365:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  pSrc                 The source-array pointer (points to first value to copy)
 366:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x                    The destination x coordinate on the framebuffer.
 367:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y                    The destination y coordinate on the framebuffer.
 368:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  width                The width desired area of the source 2D array.
 369:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  height               The height of desired area of the source 2D array.
 370:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  srcWidth             The distance (in elements) from first value of first line, to
 371:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              first value of second line (the source 2D array width)
 372:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  alpha                The alpha value to use for blending (255 = solid, no blending)
 373:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  hasTransparentPixels If true, this data copy contains transparent pixels and
 374:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              require hardware support for that to be enabled.
 375:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 376:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Alpha=255 is assumed "solid" and shall be used if HAL does not support
 377:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *       BLIT_OP_COPY_WITH_ALPHA.
 378:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 379:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitCopy(const uint16_t* pSrc, uint16_t x, uint16_t y, uint16_t width, uint16_t he
 380:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 381:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 382:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Blits a 2D source-array to the framebuffer using 16-bit copy
 383:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * without conversion. This operation can be used to perform
 384:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * hardware accelerated copies to the framebuffer even when the
 385:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * image (and framebuffer) format is not 16-bit.
 386:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 387:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * All parameters (e.g. x) must correspond to their 16-bit
 388:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * values. I.e. the 10th bytes corresponds to x=5.
 389:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 390:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param pSrc     Pointer to the source data (points to first value to copy)
 391:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param x        The destination x coordinate in the framebuffer with 16-bit pixels.
 392:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param y        The destination y coordinate in the framebuffer with 16-bit pixels.
 393:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param width    The width of the area to copy in 16-bit pixels.
 394:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param height   The height of the area to copy
 395:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param srcWidth The width of the source bitmap (stride) in 16-bit pixels.
 396:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param dstWidth The width of the framebuffer in 16-bit pixels.
 397:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 398:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitCopyWord(const uint16_t* pSrc, uint16_t x, uint16_t y, uint16_t width, uint16_
 399:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 400:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 401:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Fills a part of the framebuffer using 16-bit fill without
 402:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * conversion. This operation can be used to perform hardware
 403:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * accelerated fills in the framebuffer even when the framebuffer
 404:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * format is not 16-bit.
 405:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 406:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * All parameters (e.g. x) must correspond to their 16-bit
 407:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * values. I.e. the 10th bytes corresponds to x=5.
 408:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 409:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param colorValue The 16-bit value to fill in the framebuffer.
 410:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param x          The destination x coordinate in the framebuffer with 16-bit pixels.
 411:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param y          The destination y coordinate in the framebuffer with 16-bit pixels.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 64


 412:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param width      The width of the area to copy in 16-bit pixels.
 413:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param height     The height of the area to copy
 414:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param dstWidth   The width of the framebuffer in 16-bit pixels.
 415:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 416:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitFillWord(uint16_t colorValue, uint16_t x, uint16_t y, uint16_t width, uint16_t
 417:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 418:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 419:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Blits a 2D source-array to the framebuffer performing per-pixel alpha blending.
 420:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 421:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  pSrc     The source-array pointer (points to first value to copy)
 422:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x        The destination x coordinate on the framebuffer.
 423:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y        The destination y coordinate on the framebuffer.
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  width    The width desired area of the source 2D array.
 425:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  height   The height of desired area of the source 2D array.
 426:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  srcWidth The distance (in elements) from first value of first line, to first
 427:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                  value of second line (the source 2D array width)
 428:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  alpha    The alpha value to use for blending. This is applied on every pixel,
 429:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                  in addition to the per-pixel alpha value (255 = solid, no blending)
 430:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 431:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitCopyARGB8888(const uint16_t* pSrc, uint16_t x, uint16_t y, uint16_t width, uin
 432:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 433:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 434:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Blits a 4bpp or 8bpp glyph - maybe use the same method and supply additional color
 435:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * mode arg.
 436:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 437:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  pSrc      The source-array pointer (points to first value to copy)
 438:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x         The destination x coordinate on the framebuffer.
 439:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y         The destination y coordinate on the framebuffer.
 440:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  width     The width desired area of the source 2D array.
 441:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  height    The height of desired area of the source 2D array.
 442:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  srcWidth  The distance (in elements) from first value of first line, to first
 443:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                   value of second line (the source 2D array width)
 444:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  color     Color of the text.
 445:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  alpha     The alpha value to use for blending (255 = solid, no blending)
 446:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  operation The operation type to use for blit copy.
 447:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 448:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitCopyGlyph(const uint8_t* pSrc, uint16_t x, uint16_t y, uint16_t width, uint16_
 449:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 450:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 451:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Blits a color value to the framebuffer performing alpha-blending as specified.
 452:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 453:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  color     The desired fill-color.
 454:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x         The destination x coordinate on the framebuffer.
 455:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y         The destination y coordinate on the framebuffer.
 456:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  width     The width desired area of the source 2D array.
 457:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  height    The height of desired area of the source 2D array.
 458:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  alpha     The alpha value to use for blending (255 = solid, no blending)
 459:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  dstWidth  The distance (in elements) from first value of first line, to first value
 460:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                   of second line (the destination 2D array width)
 461:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  dstFormat The destination buffer color format (default is the framebuffer format)
 462:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 463:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Alpha=255 is assumed "solid" and shall be used if HAL does not support
 464:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *       BLIT_OP_FILL_WITH_ALPHA.
 465:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 466:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitFill(colortype color, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
 467:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 468:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 65


 469:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Blits a color value to the framebuffer performing alpha-blending as specified.
 470:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 471:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  color  The desired fill-color.
 472:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x      The destination x coordinate on the framebuffer.
 473:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y      The destination y coordinate on the framebuffer.
 474:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  width  The width desired area of the source 2D array.
 475:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  height The height of desired area of the source 2D array.
 476:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  alpha  The alpha value to use for blending (255 = solid, no blending)
 477:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 478:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Alpha=255 is assumed "solid" and shall be used if HAL does not support
 479:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *       BLIT_OP_FILL_WITH_ALPHA.
 480:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 481:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void blitFill(colortype color, uint16_t x, uint16_t y, uint16_t width, uint16_t height,
 482:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 483:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 484:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Registers an event handler implementation with the underlying event system. The
 485:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * actual HAL implementation decides whether or not multiple UIEventListener instances
 486:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * are allowed (including execution order).
 487:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 488:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] listener The listener to register.
 489:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 490:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void registerEventListener(UIEventListener& listener);
 491:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 492:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 493:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Copies a region of the currently displayed framebuffer to memory. Used for e.g.
 494:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * SlideTransition and for displaying pre-rendered drawables
 495:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * e.g. in animations where redrawing the drawable is not necessary.
 496:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 497:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  meAbs The framebuffer region to copy.
 498:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 499:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A pointer to the memory address containing the copy of the framebuffer.
 500:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 501:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Requires animation storage to be present.
 502:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 503:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual uint16_t* copyFBRegionToMemory(Rect meAbs);
 504:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 505:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 506:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Copies a region of the currently displayed framebuffer to a buffer. Used for e.g.
 507:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * SlideTransition and for displaying pre-rendered drawables e.g. in animations where
 508:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * redrawing the drawable is not necessary. The buffer can e.g. be a dynamic bitmap.
 509:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 510:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param          meAbs  The framebuffer region to copy.
 511:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in,out] dst    Address of the buffer to store the copy in.
 512:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param          stride The width of the target buffer (row length).
 513:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 514:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A pointer to the memory address containing the copy of the framebuffer.
 515:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 516:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Requires animation storage to be present.
 517:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 518:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual uint16_t* copyFBRegionToMemory(Rect meAbs, uint16_t* dst, uint32_t stride);
 519:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 520:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 521:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets display width.
 522:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 523:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The display width.
 524:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 525:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     uint16_t getDisplayWidth() const
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 66


 526:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 527:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return DISPLAY_WIDTH;
 528:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 529:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 530:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 531:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets display height.
 532:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 533:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The display height.
 534:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 535:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     uint16_t getDisplayHeight() const
 536:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 537:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return DISPLAY_HEIGHT;
 538:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 539:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 540:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Swaps the two framebuffers. */
 541:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void swapFrameBuffers();
 542:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 543:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 544:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Returns the number of VSync interrupts between the current drawing operation and the
 545:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * last drawing operation, i.e. the number of lost frames.
 546:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 547:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return Number of VSync since previous draw.
 548:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 549:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     uint32_t getLCDRefreshCount()
 550:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 551:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return vSyncForFrame;
 552:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 553:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 554:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 555:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Enables or disables compensation for lost frames. See knowledge base article.
 556:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 557:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  enabled true to enable, false to disable.
 558:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 559:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setFrameRateCompensation(bool enabled)
 560:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 561:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         vSyncCompensationEnabled = enabled;
 562:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 563:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 564:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 565:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Called by the VSync interrupt.
 566:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 567:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Called by the VSync interrupt for counting of LCD refreshes.
 568:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 569:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void vSync()
 570:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 571:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         vSyncCnt++;
 572:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 573:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 574:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 575:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Has to be called from within the LCD IRQ rutine when the Back Porch Exit is reached.
 576:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 577:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Has to be called from within the LCD IRQ rutine when the Back Porch Exit is reached.
 578:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 579:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void backPorchExited()
 580:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 581:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         swapFrameBuffers();
 582:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         tick();
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 67


 583:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 584:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 585:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 586:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Configures the interrupts relevant for TouchGFX. This primarily entails setting the
 587:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * interrupt priorities for the DMA and LCD interrupts.
 588:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 589:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void configureInterrupts() = 0;
 590:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 591:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Enables the DMA and LCD interrupts. */
 592:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void enableInterrupts() = 0;
 593:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 594:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Disables the DMA and LCD interrupts. */
 595:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void disableInterrupts() = 0;
 596:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 597:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 598:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Configure the LCD controller to fire interrupts at VSYNC. Called automatically once
 599:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * TouchGFX initialization has completed.
 600:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 601:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void enableLCDControllerInterrupt() = 0;
 602:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 603:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 604:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sample external key event.
 605:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 606:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [out] key Output parameter that will be set to the key value if a keypress was
 607:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                  detected.
 608:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 609:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return True if a keypress was detected and the "key" parameter is set to a value.
 610:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 611:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual bool sampleKey(uint8_t& key)
 612:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 613:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return false;
 614:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 615:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 616:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 617:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Configure the threshold for reporting drag events. A touch input movement must exceed
 618:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * this value in either axis in order to report a drag. Default value is 0.
 619:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 620:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  value New threshold value.
 621:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 622:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note Use if touch controller is not completely accurate to avoid "false" drags.
 623:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 624:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setDragThreshold(uint8_t value)
 625:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 626:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         gestures.setDragThreshold(value);
 627:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 628:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 629:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 630:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Get the Gesture class attached to the HAL instance.
 631:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 632:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A pointer to the Gestures object.
 633:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 634:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     Gestures* getGestures()
 635:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 636:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return &gestures;
 637:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 638:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 639:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static uint16_t DISPLAY_WIDTH;           ///< The width of the LCD display in pixels.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 68


 640:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static uint16_t DISPLAY_HEIGHT;          ///< The height of the LCD display in pixels.
 641:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static DisplayRotation DISPLAY_ROTATION; ///< The rotation from display to framebuffer.
 642:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static uint16_t FRAME_BUFFER_WIDTH;      ///< The width of the framebuffer in pixels.
 643:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static uint16_t FRAME_BUFFER_HEIGHT;     ///< The height of the framebuffer in pixels.
 644:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static bool USE_DOUBLE_BUFFERING;        ///< Is double buffering enabled?
 645:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static bool USE_ANIMATION_STORAGE;       ///< Is animation storage enabled?
 646:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 647:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 648:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets framebuffer start addresses.
 649:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 650:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets individual framebuffer start addresses.
 651:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 652:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] frameBuffer      Buffer for framebuffer data, must be non-null.
 653:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] doubleBuffer     If non-null, buffer for double buffer data. If null double
 654:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              buffering is disabled.
 655:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] animationStorage If non-null, the animation storage. If null animation storage
 656:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                              is disabled.
 657:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 658:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void setFrameBufferStartAddresses(void* frameBuffer, void* doubleBuffer, void* animatio
 659:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 660:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         assert(frameBuffer != 0 && "A framebuffer address must be set");
 661:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         frameBuffer0 = reinterpret_cast<uint16_t*>(frameBuffer);
 662:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         frameBuffer1 = reinterpret_cast<uint16_t*>(doubleBuffer);
 663:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         frameBuffer2 = reinterpret_cast<uint16_t*>(animationStorage);
 664:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         USE_DOUBLE_BUFFERING = doubleBuffer != 0;
 665:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         USE_ANIMATION_STORAGE = animationStorage != 0;
 666:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 667:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 668:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 669:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Configures a partial framebuffer as current framebuffer. This method uses the
 670:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * assigned FrameBufferAllocator to allocate block of compatible dimensions. The height
 671:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * of the allocated block is returned.
 672:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 673:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x      The absolute x coordinate of the block on the screen.
 674:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y      The absolute y coordinate of the block on the screen.
 675:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  width  The width of the block.
 676:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  height The height of the block requested.
 677:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 678:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The height of the block allocated.
 679:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 680:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual uint16_t configurePartialFrameBuffer(const uint16_t x, const uint16_t y, const uint16_t
 681:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 682:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 683:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets the number of ticks between each touch screen sample.
 684:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 685:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  sampleRateInTicks Sample rate. Default is 1 (every tick).
 686:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 687:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setTouchSampleRate(int8_t sampleRateInTicks)
 688:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 689:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (sampleRateInTicks > 0)
 690:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 691:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             touchSampleRate = sampleRateInTicks;
 692:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 693:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 694:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 695:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 696:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the number of ticks between each touch screen sample.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 69


 697:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 698:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return Number of ticks between each touch screen sample.
 699:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 700:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     int8_t getTouchSampleRate() const
 701:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 702:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return touchSampleRate;
 703:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 704:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 705:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 706:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Register if MCU is active by measuring cpu cycles. If user wishes to track MCU load,
 707:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * this method should be called whenever the OS Idle task is scheduled in or out. This
 708:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * method makes calls to a concrete implementation of GPIO functionality and a concrete
 709:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * implementation of cpu cycles.
 710:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 711:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  active If true, MCU is registered as being active, inactive otherwise.
 712:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 713:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setMCUActive(bool active);
 714:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 715:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 716:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the current cycle counter.
 717:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 718:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return the cycle counter.
 719:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 720:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     uint32_t getCPUCycles();
 721:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 722:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 723:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Stores a pointer to an instance of an MCU specific instrumentation class.
 724:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 725:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] mcuInstr pointer to MCU instrumentation.
 726:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 727:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setMCUInstrumentation(MCUInstrumentation* mcuInstr)
 728:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 729:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         mcuInstrumentation = mcuInstr;
 730:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 731:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 732:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 733:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * This method sets a flag that determines if generic HAL should calculate MCU load
 734:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * based on concrete MCU instrumentation.
 735:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 736:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  enabled If true, set flag to update MCU load.
 737:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 738:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void enableMCULoadCalculation(bool enabled)
 739:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 740:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         updateMCULoad = enabled;
 741:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 742:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 743:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 744:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the current MCU load.
 745:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 746:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return mcuLoadPct the MCU Load in %.
 747:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 748:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     uint8_t getMCULoadPct() const
 749:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 750:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return mcuLoadPct;
 751:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 752:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 753:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 70


 754:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Stores a pointer to an instance of a specific implementation of a ButtonController.
 755:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 756:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] btnCtrl pointer to button controller.
 757:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 758:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setButtonController(ButtonController* btnCtrl)
 759:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 760:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         buttonController = btnCtrl;
 761:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 762:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 763:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 764:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the associated ButtonController.
 765:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 766:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A pointer to the ButtonController, or zero if no ButtonController has been
 767:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *         set.
 768:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 769:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     ButtonController* getButtonController() const
 770:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 771:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return buttonController;
 772:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 773:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 774:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 775:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets a framebuffer allocator. The framebuffer allocator is only used in partial
 776:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * framebuffer mode.
 777:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 778:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] allocator pointer to a framebuffer allocator object.
 779:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 780:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setFrameBufferAllocator(FrameBufferAllocator* allocator)
 781:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 782:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         frameBufferAllocator = allocator;
 783:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 784:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 785:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 786:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the framebuffer allocator.
 787:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 788:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The framebuffer allocator.
 789:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 790:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     FrameBufferAllocator* getFrameBufferAllocator()
 791:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 792:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return frameBufferAllocator;
 793:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 794:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 795:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 796:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the flash data reader. This method must be implemented in
 797:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * subclasses that uses a FlashDataReader object.
 798:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 799:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return the FlashDataReader.
 800:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 801:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual FlashDataReader* getFlashDataReader() const
 802:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 803:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return 0;
 804:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 805:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 806:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 807:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets the finger size in pixels. Setting the finger size to a size of more than 1
 808:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * pixel will emulate a finger of width and height of 2*(fingersize-1)+1. This can be
 809:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * especially useful when trying to interact with small elements on a high ppi display.
 810:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * The finger size will influence which element is chosen as the point of interaction,
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 71


 811:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * when clicking, dragging, ... the display. A number of samples will be drawn from
 812:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * within the finger area and a best matching drawable will be chosen. The best matching
 813:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * algorithm will consider the size of the drawable and the distance from the touch
 814:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * point.
 815:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 816:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] size the size of the finger.
 817:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 818:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setFingerSize(uint8_t size)
 819:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 820:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         fingerSize = size;
 821:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 822:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 823:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 824:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the finger size in pixels.
 825:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 826:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The size of the finger in pixels, 1 is the default value.
 827:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 828:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     uint8_t getFingerSize() const
 829:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 830:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return fingerSize;
 831:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 832:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 833:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 834:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the optional framebuffer used for animation storage.
 835:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 836:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The address or 0 if unused.
 837:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 838:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     uint16_t* getAnimationStorage() const
 839:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 840:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return frameBuffer2;
 841:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 842:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 843:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 844:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * A list of available frame refresh strategies.
 845:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 846:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @see setFrameRefreshStrategy
 847:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 848:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     enum FrameRefreshStrategy
 849:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 850:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         REFRESH_STRATEGY_DEFAULT,                      ///< If not explicitly set, this strategy is
 851:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         REFRESH_STRATEGY_OPTIM_SINGLE_BUFFER_TFT_CTRL, ///< Strategy optimized for single framebuff
 852:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         REFRESH_STRATEGY_PARTIAL_FRAMEBUFFER           ///< Strategy using less than a full framebu
 853:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     };
 854:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 855:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 856:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Set a specific strategy for handling timing and mechanism of framebuffer drawing.
 857:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 858:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * By setting a different frame refresh strategy, the internals of how TouchGFX
 859:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * interacts with the framebuffer can be modified.
 860:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 861:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Currently there are two strategies available. This will increase over time.
 862:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * - REFRESH_STRATEGY_OPTIM_SINGLE_BUFFER_TFT_CTRL: this strategy is available
 863:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * on targets that use single buffering on a TFT controller based system. It requires an
 864:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * implementation of the getTFTCurrentLine() function as well as a task delay function
 865:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * being registered. The implementation of this strategy is that TouchGFX will carefully
 866:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * track the progress of the TFT controller, and draw parts of the framebuffer whenever
 867:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * possible. The effect is that the risk of tearing is much reduced compared to the
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 72


 868:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * default single buffer strategy of only drawing in porch areas. It does have a
 869:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * drawback of slightly increased MCU load. But in many cases employing this strategy
 870:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * will make it possible to avoid external RAM, by using just a single framebuffer in
 871:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * internal RAM and still avoid tearing.
 872:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * - REFRESH_STRATEGY_DEFAULT: This is a general strategy that works for all target
 873:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * configurations.
 874:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 875:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Recommendation: Try using REFRESH_STRATEGY_OPTIM_SINGLE_BUFFER_TFT_CTRL if you're on
 876:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * a TFT controller based system (ie. non-8080) and you have a desire to avoid external
 877:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * RAM. Otherwise stick to REFRESH_STRATEGY_DEFAULT.
 878:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 879:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  s The desired strategy to use.
 880:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 881:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return true if the desired strategy will be used, false otherwise.
 882:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 883:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     bool setFrameRefreshStrategy(FrameRefreshStrategy s)
 884:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 885:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (s == REFRESH_STRATEGY_DEFAULT || s == REFRESH_STRATEGY_PARTIAL_FRAMEBUFFER)
 886:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 887:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             refreshStrategy = s;
 888:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return true;
 889:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 890:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         else if (s == REFRESH_STRATEGY_OPTIM_SINGLE_BUFFER_TFT_CTRL)
 891:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 892:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             // Perform sanity checks. This strategy requires
 893:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             //   - task delay function
 894:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             //   - a TFT controller (+ an impl of getTFTCurrentLine())
 895:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             //   - single buffering
 896:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             if (taskDelayFunc != 0 && getTFTCurrentLine() != 0xFFFF && !USE_DOUBLE_BUFFERING)
 897:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             {
 898:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****                 refreshStrategy = s;
 899:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****                 return true;
 900:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             }
 901:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return false;
 902:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 903:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         // Unknown strategy
 904:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return false;
 905:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 906:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 907:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 908:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Used internally by TouchGFX core to manage the timing and process of drawing into the
 909:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * framebuffer.
 910:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 911:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return Current frame refresh strategy.
 912:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 913:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @see setFrameRefreshStrategy
 914:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 915:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     FrameRefreshStrategy getFrameRefreshStrategy() const
 916:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 917:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return refreshStrategy;
 918:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 919:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 920:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 921:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Registers a function capable of delaying GUI task execution
 922:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 923:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * In order to make use of the HAL::taskDelay function, a delay function must be
 924:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * registered by calling this function. Usually the delay function would be
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 73


 925:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * OSWrappers::taskDelay.
 926:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 927:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] delayF A pointer to a function returning void with an uint16_t parameter
 928:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *                    specifying number of milliseconds to delay.
 929:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 930:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @note The task delay capability is only used when the frame refresh strategy
 931:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *       REFRESH_STRATEGY_OPTIM_SINGLE_BUFFER_TFT_CTRL is selected. Otherwise it is
 932:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *       not necessary to register a delay function.
 933:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 934:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void registerTaskDelayFunction(void (*delayF)(uint16_t))
 935:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 936:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         taskDelayFunc = delayF;
 937:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 938:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 939:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 940:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Delay GUI task execution by number of milliseconds
 941:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 942:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * This function requires the presence of a task delay function. If a task delay
 943:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * function has not been registered, it returns immediately. Otherwise it returns when
 944:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * number of milliseconds has passed.
 945:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 946:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  ms Number of milliseconds to wait.
 947:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 948:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @see registerTaskDelayFunction
 949:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 950:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void taskDelay(uint16_t ms)
 951:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 952:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (taskDelayFunc)
 953:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 954:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             taskDelayFunc(ms);
 955:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 956:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 957:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 958:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 959:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Get the current line (Y) of the TFT controller
 960:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 961:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * This function is used to obtain the progress of the TFT controller. More specifically,
 962:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * the line (or Y-value) currently being transferred.
 963:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 964:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Note: The value must be adjusted to account for vertical back porch before returning,
 965:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * such that the value is always within the range of [0;
 966:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * actual display height in pixels[
 967:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 968:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * It is used for the REFRESH_STRATEGY_OPTIM_SINGLE_BUFFER_TFT_CTRL frame refresh
 969:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * strategy in order to synchronize framebuffer drawing with TFT controller progress. If
 970:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * this strategy is used, the concrete HAL subclass must provide an override of this
 971:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * function that returns correct line value. If this strategy is not used, then the
 972:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * getTFTCurrentLine function is never called and can be disregarded.
 973:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 974:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return In this default implementation, 0xFFFF is returned to signify "not
 975:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *         implemented".
 976:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 977:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual uint16_t getTFTCurrentLine()
 978:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 979:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return 0xFFFFu;
 980:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 981:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 74


 982:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 983:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Function for obtaining the DMA type of the concrete DMA implementation. As default,
 984:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * will return DMA_TYPE_GENERIC type value.
 985:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 986:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return a DMAType value of the concrete DMA implementation.
 987:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 988:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual DMAType getDMAType()
 989:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 990:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return dma.getDMAType();
 991:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 992:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 993:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 994:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Render a Drawable and its widgets into a dynamic bitmap.
 995:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 996:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in,out] drawable A reference on the Drawable object to render.
 997:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param          bitmapId Dynamic bitmap to be used as a rendertarget.
 998:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 999:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void drawDrawableInDynamicBitmap(Drawable& drawable, BitmapId bitmapId);
1000:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1001:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1002:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Render a Drawable and its widgets into a dynamic bitmap. Only the specified Rect
1003:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * region is updated.
1004:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1005:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in,out] drawable A reference on the Drawable object to render.
1006:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param          bitmapId Dynamic bitmap to be used as a rendertarget.
1007:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param          rect     Region to update.
1008:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1009:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void drawDrawableInDynamicBitmap(Drawable& drawable, BitmapId bitmapId, const Rect& rec
1010:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1011:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1012:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Set an auxiliary LCD class to be used for offscreen rendering.
1013:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1014:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in,out] auxLCD A pointer on the axiliary LCD class to use for offscreen rendering.
1015:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1016:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setAuxiliaryLCD(LCD* auxLCD)
1017:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
1018:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         auxiliaryLCD = auxLCD;
1019:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
1020:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1021:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1022:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Get the auxiliary LCD class attached to the HAL instance if any.
1023:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1024:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A pointer on the axiliary LCD class attached to the HAL instance.
1025:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1026:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     LCD* getAuxiliaryLCD()
 2144              		.loc 6 1026 10
 2145              		.cfi_startproc
 2146              		@ args = 0, pretend = 0, frame = 8
 2147              		@ frame_needed = 1, uses_anonymous_args = 0
 2148              		@ link register save eliminated.
 2149 0000 80B4     		push	{r7}
 2150              	.LCFI215:
 2151              		.cfi_def_cfa_offset 4
 2152              		.cfi_offset 7, -4
 2153 0002 83B0     		sub	sp, sp, #12
 2154              	.LCFI216:
 2155              		.cfi_def_cfa_offset 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 75


 2156 0004 00AF     		add	r7, sp, #0
 2157              	.LCFI217:
 2158              		.cfi_def_cfa_register 7
 2159 0006 7860     		str	r0, [r7, #4]
1027:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
1028:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return auxiliaryLCD;
 2160              		.loc 6 1028 16
 2161 0008 7B68     		ldr	r3, [r7, #4]
 2162 000a DB6C     		ldr	r3, [r3, #76]
1029:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 2163              		.loc 6 1029 5
 2164 000c 1846     		mov	r0, r3
 2165 000e 0C37     		adds	r7, r7, #12
 2166              	.LCFI218:
 2167              		.cfi_def_cfa_offset 4
 2168 0010 BD46     		mov	sp, r7
 2169              	.LCFI219:
 2170              		.cfi_def_cfa_register 13
 2171              		@ sp needed
 2172 0012 5DF8047B 		ldr	r7, [sp], #4
 2173              	.LCFI220:
 2174              		.cfi_restore 7
 2175              		.cfi_def_cfa_offset 0
 2176 0016 7047     		bx	lr
 2177              		.cfi_endproc
 2178              	.LFE611:
 2180              		.section	.text._ZN8touchgfx15AbstractPainterC2Ev,"axG",%progbits,_ZN8touchgfx15AbstractPainterC5Ev
 2181              		.align	1
 2182              		.weak	_ZN8touchgfx15AbstractPainterC2Ev
 2183              		.syntax unified
 2184              		.thumb
 2185              		.thumb_func
 2186              		.fpu fpv4-sp-d16
 2188              	_ZN8touchgfx15AbstractPainterC2Ev:
 2189              	.LFB617:
 2190              		.file 7 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * @file touchgfx/widgets/canvas/AbstractPainter.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * Declares the touchgfx::AbstractPainter class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** #ifndef TOUCHGFX_ABSTRACTPAINTER_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** #define TOUCHGFX_ABSTRACTPAINTER_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** #include <touchgfx/hal/Types.hpp>
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 76


  22:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** #include <touchgfx/Bitmap.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** #include <touchgfx/hal/HAL.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** #include <touchgfx/lcd/LCD.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** namespace touchgfx
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** {
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** /**
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * An abstract class for creating painter classes for drawing canvas widgets. All canvas widgets
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * need a painter to fill the shape drawn with a CanvasWidgetRenderer. The painter must
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * provide the color of a pixel on a given coordinate, which will the be blended into
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * the framebuffer depending on the position of the canvas widget and the transparency
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * of the given pixel.
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  *
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * The AbstractPainter also implements a function which will blend each pixel in a
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * scanline snippet into the framebuffer, but for better performance, the function
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  * should be reimplemented in each painter.
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****  */
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** class AbstractPainter
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** {
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** public:
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     /** Initializes a new instance of the AbstractPainter class. */
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     AbstractPainter()
 2191              		.loc 7 43 5
 2192              		.cfi_startproc
 2193              		@ args = 0, pretend = 0, frame = 8
 2194              		@ frame_needed = 1, uses_anonymous_args = 0
 2195              		@ link register save eliminated.
 2196 0000 80B4     		push	{r7}
 2197              	.LCFI221:
 2198              		.cfi_def_cfa_offset 4
 2199              		.cfi_offset 7, -4
 2200 0002 83B0     		sub	sp, sp, #12
 2201              	.LCFI222:
 2202              		.cfi_def_cfa_offset 16
 2203 0004 00AF     		add	r7, sp, #0
 2204              	.LCFI223:
 2205              		.cfi_def_cfa_register 7
 2206 0006 7860     		str	r0, [r7, #4]
 2207              	.LBB32:
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         : areaOffsetX(0),
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****           areaOffsetY(0),
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****           widgetAlpha(255)
 2208              		.loc 7 46 26
 2209 0008 094A     		ldr	r2, .L81
 2210 000a 7B68     		ldr	r3, [r7, #4]
 2211 000c 1A60     		str	r2, [r3]
 2212 000e 7B68     		ldr	r3, [r7, #4]
 2213 0010 0022     		movs	r2, #0
 2214 0012 9A80     		strh	r2, [r3, #4]	@ movhi
 2215 0014 7B68     		ldr	r3, [r7, #4]
 2216 0016 0022     		movs	r2, #0
 2217 0018 DA80     		strh	r2, [r3, #6]	@ movhi
 2218 001a 7B68     		ldr	r3, [r7, #4]
 2219 001c FF22     		movs	r2, #255
 2220 001e 1A72     		strb	r2, [r3, #8]
 2221              	.LBE32:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 77


  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     }
 2222              		.loc 7 48 5
 2223 0020 7B68     		ldr	r3, [r7, #4]
 2224 0022 1846     		mov	r0, r3
 2225 0024 0C37     		adds	r7, r7, #12
 2226              	.LCFI224:
 2227              		.cfi_def_cfa_offset 4
 2228 0026 BD46     		mov	sp, r7
 2229              	.LCFI225:
 2230              		.cfi_def_cfa_register 13
 2231              		@ sp needed
 2232 0028 5DF8047B 		ldr	r7, [sp], #4
 2233              	.LCFI226:
 2234              		.cfi_restore 7
 2235              		.cfi_def_cfa_offset 0
 2236 002c 7047     		bx	lr
 2237              	.L82:
 2238 002e 00BF     		.align	2
 2239              	.L81:
 2240 0030 08000000 		.word	_ZTVN8touchgfx15AbstractPainterE+8
 2241              		.cfi_endproc
 2242              	.LFE617:
 2244              		.weak	_ZN8touchgfx15AbstractPainterC1Ev
 2245              		.thumb_set _ZN8touchgfx15AbstractPainterC1Ev,_ZN8touchgfx15AbstractPainterC2Ev
 2246              		.section	.text._ZN8touchgfx15AbstractPainterD2Ev,"axG",%progbits,_ZN8touchgfx15AbstractPainterD5Ev
 2247              		.align	1
 2248              		.weak	_ZN8touchgfx15AbstractPainterD2Ev
 2249              		.syntax unified
 2250              		.thumb
 2251              		.thumb_func
 2252              		.fpu fpv4-sp-d16
 2254              	_ZN8touchgfx15AbstractPainterD2Ev:
 2255              	.LFB620:
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     /** Finalizes an instance of the AbstractPainter class. */
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     virtual ~AbstractPainter()
 2256              		.loc 7 51 13
 2257              		.cfi_startproc
 2258              		@ args = 0, pretend = 0, frame = 8
 2259              		@ frame_needed = 1, uses_anonymous_args = 0
 2260              		@ link register save eliminated.
 2261 0000 80B4     		push	{r7}
 2262              	.LCFI227:
 2263              		.cfi_def_cfa_offset 4
 2264              		.cfi_offset 7, -4
 2265 0002 83B0     		sub	sp, sp, #12
 2266              	.LCFI228:
 2267              		.cfi_def_cfa_offset 16
 2268 0004 00AF     		add	r7, sp, #0
 2269              	.LCFI229:
 2270              		.cfi_def_cfa_register 7
 2271 0006 7860     		str	r0, [r7, #4]
 2272              	.LBB33:
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
 2273              		.loc 7 52 5
 2274 0008 044A     		ldr	r2, .L85
 2275 000a 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 78


 2276 000c 1A60     		str	r2, [r3]
 2277              	.LBE33:
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     }
 2278              		.loc 7 53 5
 2279 000e 7B68     		ldr	r3, [r7, #4]
 2280 0010 1846     		mov	r0, r3
 2281 0012 0C37     		adds	r7, r7, #12
 2282              	.LCFI230:
 2283              		.cfi_def_cfa_offset 4
 2284 0014 BD46     		mov	sp, r7
 2285              	.LCFI231:
 2286              		.cfi_def_cfa_register 13
 2287              		@ sp needed
 2288 0016 5DF8047B 		ldr	r7, [sp], #4
 2289              	.LCFI232:
 2290              		.cfi_restore 7
 2291              		.cfi_def_cfa_offset 0
 2292 001a 7047     		bx	lr
 2293              	.L86:
 2294              		.align	2
 2295              	.L85:
 2296 001c 08000000 		.word	_ZTVN8touchgfx15AbstractPainterE+8
 2297              		.cfi_endproc
 2298              	.LFE620:
 2300              		.weak	_ZN8touchgfx15AbstractPainterD1Ev
 2301              		.thumb_set _ZN8touchgfx15AbstractPainterD1Ev,_ZN8touchgfx15AbstractPainterD2Ev
 2302              		.section	.text._ZN8touchgfx15AbstractPainterD0Ev,"axG",%progbits,_ZN8touchgfx15AbstractPainterD5Ev
 2303              		.align	1
 2304              		.weak	_ZN8touchgfx15AbstractPainterD0Ev
 2305              		.syntax unified
 2306              		.thumb
 2307              		.thumb_func
 2308              		.fpu fpv4-sp-d16
 2310              	_ZN8touchgfx15AbstractPainterD0Ev:
 2311              	.LFB622:
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
 2312              		.loc 7 51 13
 2313              		.cfi_startproc
 2314              		@ args = 0, pretend = 0, frame = 8
 2315              		@ frame_needed = 1, uses_anonymous_args = 0
 2316 0000 80B5     		push	{r7, lr}
 2317              	.LCFI233:
 2318              		.cfi_def_cfa_offset 8
 2319              		.cfi_offset 7, -8
 2320              		.cfi_offset 14, -4
 2321 0002 82B0     		sub	sp, sp, #8
 2322              	.LCFI234:
 2323              		.cfi_def_cfa_offset 16
 2324 0004 00AF     		add	r7, sp, #0
 2325              	.LCFI235:
 2326              		.cfi_def_cfa_register 7
 2327 0006 7860     		str	r0, [r7, #4]
 2328              		.loc 7 53 5
 2329 0008 7868     		ldr	r0, [r7, #4]
 2330 000a FFF7FEFF 		bl	_ZN8touchgfx15AbstractPainterD1Ev
 2331 000e 0C21     		movs	r1, #12
 2332 0010 7868     		ldr	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 79


 2333 0012 FFF7FEFF 		bl	_ZdlPvj
 2334 0016 7B68     		ldr	r3, [r7, #4]
 2335 0018 1846     		mov	r0, r3
 2336 001a 0837     		adds	r7, r7, #8
 2337              	.LCFI236:
 2338              		.cfi_def_cfa_offset 8
 2339 001c BD46     		mov	sp, r7
 2340              	.LCFI237:
 2341              		.cfi_def_cfa_register 13
 2342              		@ sp needed
 2343 001e 80BD     		pop	{r7, pc}
 2344              		.cfi_endproc
 2345              	.LFE622:
 2347              		.section	.text._ZN8touchgfx7CWRUtil2Q5C2Ei,"axG",%progbits,_ZN8touchgfx7CWRUtil2Q5C5Ei,comdat
 2348              		.align	1
 2349              		.weak	_ZN8touchgfx7CWRUtil2Q5C2Ei
 2350              		.syntax unified
 2351              		.thumb
 2352              		.thumb_func
 2353              		.fpu fpv4-sp-d16
 2355              	_ZN8touchgfx7CWRUtil2Q5C2Ei:
 2356              	.LFB647:
 2357              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * @file touchgfx/widgets/canvas/CWRUtil.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * Declares the touchgfx:: class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** #ifndef TOUCHGFX_CWRUTIL_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** #define TOUCHGFX_CWRUTIL_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** #include <touchgfx/Utils.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** #include <touchgfx/canvas_widget_renderer/Rasterizer.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** /**
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * Helper classes and functions for CanvasWidget. A handful of utility functions can be found
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * here. These include helper functions for converting between float, int and Q5/Q10/Q15
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * formats. There are also functions for calculating sin() and cos() in integers with a
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * high number of bits (15) reserved for fraction. Having sin() and cos() pre-calculated
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * in this way allows very fast drawing of circles without the need for floating point
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * arithmetic.
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 80


  35:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * Using Q5, which uses 32 bit value internally, numbers from -67108865 to
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * +67108864.96875 with a precision of 1/32 = 0.03125 can be represented, as described
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * in http://en.wikipedia.org/wiki/Q_%28number_format%29.
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  *
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * Doing arithmetic operations on Q5, Q10 and Q15 numbers is described in detail on
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  * http://en.wikipedia.org/wiki/Fixed-point_arithmetic.
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****  */
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** struct CWRUtil
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** {
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     class Q10;
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     class Q15;
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     /**
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Defines a "floating point number" with 5 bits reserved for the fractional part of the
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * decimal number. Q5 implements some simple arithmetic operations, most yielding a Q5
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * number and some yielding a Q10 number as a result. Other operations also work with
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Q15 numbers.
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * @see Q10, Q15
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      */
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     class Q5
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     {
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     public:
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /** Initializes a new instance of the Q5 class. */
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5()
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             : v(0)
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Constructor from integer. No conversion is done - the integer is assumed to already
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * be in Q5 format.
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  i Integer pre-formattet in Q5 format.
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         explicit Q5(int i)
 2358              		.loc 8 70 18
 2359              		.cfi_startproc
 2360              		@ args = 0, pretend = 0, frame = 8
 2361              		@ frame_needed = 1, uses_anonymous_args = 0
 2362              		@ link register save eliminated.
 2363 0000 80B4     		push	{r7}
 2364              	.LCFI238:
 2365              		.cfi_def_cfa_offset 4
 2366              		.cfi_offset 7, -4
 2367 0002 83B0     		sub	sp, sp, #12
 2368              	.LCFI239:
 2369              		.cfi_def_cfa_offset 16
 2370 0004 00AF     		add	r7, sp, #0
 2371              	.LCFI240:
 2372              		.cfi_def_cfa_register 7
 2373 0006 7860     		str	r0, [r7, #4]
 2374 0008 3960     		str	r1, [r7]
 2375              	.LBB34:
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             : v(i)
 2376              		.loc 8 71 18
 2377 000a 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 81


 2378 000c 3A68     		ldr	r2, [r7]
 2379 000e 1A60     		str	r2, [r3]
 2380              	.LBE34:
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 2381              		.loc 8 73 9
 2382 0010 7B68     		ldr	r3, [r7, #4]
 2383 0012 1846     		mov	r0, r3
 2384 0014 0C37     		adds	r7, r7, #12
 2385              	.LCFI241:
 2386              		.cfi_def_cfa_offset 4
 2387 0016 BD46     		mov	sp, r7
 2388              	.LCFI242:
 2389              		.cfi_def_cfa_register 13
 2390              		@ sp needed
 2391 0018 5DF8047B 		ldr	r7, [sp], #4
 2392              	.LCFI243:
 2393              		.cfi_restore 7
 2394              		.cfi_def_cfa_offset 0
 2395 001c 7047     		bx	lr
 2396              		.cfi_endproc
 2397              	.LFE647:
 2399              		.weak	_ZN8touchgfx7CWRUtil2Q5C1Ei
 2400              		.thumb_set _ZN8touchgfx7CWRUtil2Q5C1Ei,_ZN8touchgfx7CWRUtil2Q5C2Ei
 2401              		.section	.rodata
 2402              		.align	2
 2403              	.LC0:
 2404 0000 636F6D70 		.ascii	"compatibleFramebuffer(Bitmap::RGB565) && \"The chos"
 2404      61746962 
 2404      6C654672 
 2404      616D6562 
 2404      75666665 
 2405 0032 656E2070 		.ascii	"en painter only works with RGB565 displays\"\000"
 2405      61696E74 
 2405      6572206F 
 2405      6E6C7920 
 2405      776F726B 
 2406 005e 0000     		.align	2
 2407              	.LC1:
 2408 0060 746F7563 		.ascii	"touchgfx::AbstractPainterRGB565::AbstractPainterRGB"
 2408      68676678 
 2408      3A3A4162 
 2408      73747261 
 2408      63745061 
 2409 0093 35363528 		.ascii	"565()\000"
 2409      2900
 2410 0099 000000   		.align	2
 2411              	.LC2:
 2412 009c 4D696464 		.ascii	"Middlewares/ST/touchgfx/framework/include/touchgfx/"
 2412      6C657761 
 2412      7265732F 
 2412      53542F74 
 2412      6F756368 
 2413 00cf 77696467 		.ascii	"widgets/canvas/AbstractPainterRGB565.hpp\000"
 2413      6574732F 
 2413      63616E76 
 2413      61732F41 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 82


 2413      62737472 
 2414              		.section	.text._ZN8touchgfx21AbstractPainterRGB565C2Ev,"axG",%progbits,_ZN8touchgfx21AbstractPaint
 2415              		.align	1
 2416              		.weak	_ZN8touchgfx21AbstractPainterRGB565C2Ev
 2417              		.syntax unified
 2418              		.thumb
 2419              		.thumb_func
 2420              		.fpu fpv4-sp-d16
 2422              	_ZN8touchgfx21AbstractPainterRGB565C2Ev:
 2423              	.LFB729:
 2424              		.file 9 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.h
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  * @file touchgfx/widgets/canvas/AbstractPainterRGB565.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  * Declares the touchgfx::AbstractPainterRGB565 class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** #ifndef TOUCHGFX_ABSTRACTPAINTERRGB565_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** #define TOUCHGFX_ABSTRACTPAINTERRGB565_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** #include <touchgfx/Bitmap.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** #include <touchgfx/lcd/LCD.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** #include <touchgfx/widgets/canvas/AbstractPainter.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** 
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** namespace touchgfx
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** {
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** /**
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  * The AbstractPainterRGB565 class is an abstract class for creating a painter to draw on a
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  * RGB565 display using CanvasWidgetRenderer.
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  *
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  * @see AbstractPainter
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****  */
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** class AbstractPainterRGB565 : public AbstractPainter
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** {
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** public:
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****     static const uint16_t RMASK = 0xF800; ///< Mask for red   (1111100000000000)
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****     static const uint16_t GMASK = 0x07E0; ///< Mask for green (0000011111100000)
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****     static const uint16_t BMASK = 0x001F; ///< Mask for blue  (0000000000011111)
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** 
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****     AbstractPainterRGB565()
 2425              		.loc 9 41 5
 2426              		.cfi_startproc
 2427              		@ args = 0, pretend = 0, frame = 16
 2428              		@ frame_needed = 1, uses_anonymous_args = 0
 2429 0000 80B5     		push	{r7, lr}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 83


 2430              	.LCFI244:
 2431              		.cfi_def_cfa_offset 8
 2432              		.cfi_offset 7, -8
 2433              		.cfi_offset 14, -4
 2434 0002 84B0     		sub	sp, sp, #16
 2435              	.LCFI245:
 2436              		.cfi_def_cfa_offset 24
 2437 0004 00AF     		add	r7, sp, #0
 2438              	.LCFI246:
 2439              		.cfi_def_cfa_register 7
 2440 0006 7860     		str	r0, [r7, #4]
 2441              	.LBB35:
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****         : AbstractPainter(), currentX(0), currentY(0)
 2442              		.loc 9 42 53
 2443 0008 7B68     		ldr	r3, [r7, #4]
 2444 000a 1846     		mov	r0, r3
 2445 000c FFF7FEFF 		bl	_ZN8touchgfx15AbstractPainterC2Ev
 2446 0010 294A     		ldr	r2, .L99
 2447 0012 7B68     		ldr	r3, [r7, #4]
 2448 0014 1A60     		str	r2, [r3]
 2449 0016 7B68     		ldr	r3, [r7, #4]
 2450 0018 0022     		movs	r2, #0
 2451 001a DA60     		str	r2, [r3, #12]
 2452 001c 7B68     		ldr	r3, [r7, #4]
 2453 001e 0022     		movs	r2, #0
 2454 0020 1A61     		str	r2, [r3, #16]
 2455 0022 0023     		movs	r3, #0
 2456 0024 FB73     		strb	r3, [r7, #15]
 2457              	.LBB36:
 2458              	.LBB37:
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     /**
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * Sets the offset of the area being drawn. This allows render() to calculate the x, y
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * relative to the widget, and not just relative to the invalidated area.
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param  offsetX The offset x coordinate of the invalidated area relative to the
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *                 widget.
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param  offsetY The offset y coordinate of the invalidated area relative to the
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *                 widget.
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @note Used by CanvasWidgetRenderer - should not be overwritten.
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      */
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     void setOffset(uint16_t offsetX, uint16_t offsetY)
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         areaOffsetX = offsetX;
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         areaOffsetY = offsetY;
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     }
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     /**
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * Paint a designated part of the RenderingBuffer with respect to the amount of coverage
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * of each pixel given by the parameter covers. The cover is the alpha for each pixel,
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * which is what makes it possible to have smooth anti-aliased edges on the shapes drawn
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * with CanvasWidgetRenderer.
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param [in] ptr     Pointer to the row in the RenderingBuffer.
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param      x       The x coordinate.
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param      xAdjust The minor adjustment of x (used when a pixel is smaller than a byte
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 84


  81:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *                     to specify that the \a ptr should have been advanced
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *                     "xAdjust" pixels futher into the byte).
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param      y       The y coordinate.
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param      count   Number of pixels to fill.
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param      covers  The coverage in of each pixel.
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @note The implementation of render() in the AbstractPainter classes is a generic (i.e. slow)
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *       implementation that should be completely implemented in subclasses of
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *       AbstractPainter for better performance.
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      */
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     virtual void render(uint8_t* ptr, int x, int xAdjust, int y, unsigned count, const uint8_t* cov
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** protected:
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     int16_t areaOffsetX; ///< The offset x coordinate of the area being drawn.
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     int16_t areaOffsetY; ///< The offset y coordinate of the area being drawn.
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     uint8_t widgetAlpha; ///< The alpha of the widget using the painter.
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     /**
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * Sets the widget alpha to allow an entire canvas widget to easily be faded without
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * changing the painter of the widget.
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param  alpha The alpha.
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @note Used internally by CanvasWidgetRenderer.
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      */
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     void setWidgetAlpha(const uint8_t alpha)
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         widgetAlpha = alpha;
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     }
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     /**
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * Helper function to check if the provided bitmap format matches the current
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * framebuffer format.
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @param  format A bitmap format.
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      *
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      * @return True if the format matches the framebuffer format, false otherwise.
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****      */
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     FORCE_INLINE_FUNCTION static bool compatibleFramebuffer(Bitmap::BitmapFormat format)
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         bool compat = HAL::lcd().framebufferFormat() == format;
 2459              		.loc 7 121 32
 2460 0026 FFF7FEFF 		bl	_ZN8touchgfx3HAL3lcdEv
 2461 002a 0346     		mov	r3, r0
 2462              		.loc 7 121 52
 2463 002c 1A68     		ldr	r2, [r3]
 2464 002e 2432     		adds	r2, r2, #36
 2465 0030 1268     		ldr	r2, [r2]
 2466              		.loc 7 121 51
 2467 0032 1846     		mov	r0, r3
 2468 0034 9047     		blx	r2
 2469              	.LVL5:
 2470 0036 0346     		mov	r3, r0
 2471 0038 1A46     		mov	r2, r3
 2472              		.loc 7 121 57
 2473 003a FB7B     		ldrb	r3, [r7, #15]	@ zero_extendqisi2
 2474 003c 9342     		cmp	r3, r2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 85


 2475 003e 0CBF     		ite	eq
 2476 0040 0123     		moveq	r3, #1
 2477 0042 0023     		movne	r3, #0
 2478 0044 BB73     		strb	r3, [r7, #14]
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         if (HAL::getInstance()->getAuxiliaryLCD())
 2479              		.loc 7 122 48
 2480 0046 FFF7FEFF 		bl	_ZN8touchgfx3HAL11getInstanceEv
 2481 004a 0346     		mov	r3, r0
 2482 004c 1846     		mov	r0, r3
 2483 004e FFF7FEFF 		bl	_ZN8touchgfx3HAL15getAuxiliaryLCDEv
 2484 0052 0346     		mov	r3, r0
 2485 0054 002B     		cmp	r3, #0
 2486 0056 14BF     		ite	ne
 2487 0058 0123     		movne	r3, #1
 2488 005a 0023     		moveq	r3, #0
 2489 005c DBB2     		uxtb	r3, r3
 2490              		.loc 7 122 9
 2491 005e 002B     		cmp	r3, #0
 2492 0060 1BD0     		beq	.L92
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         {
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****             compat |= HAL::getInstance()->getAuxiliaryLCD()->framebufferFormat() == format;
 2493              		.loc 7 124 58
 2494 0062 FFF7FEFF 		bl	_ZN8touchgfx3HAL11getInstanceEv
 2495 0066 0346     		mov	r3, r0
 2496 0068 1846     		mov	r0, r3
 2497 006a FFF7FEFF 		bl	_ZN8touchgfx3HAL15getAuxiliaryLCDEv
 2498 006e 0346     		mov	r3, r0
 2499              		.loc 7 124 80
 2500 0070 1A68     		ldr	r2, [r3]
 2501 0072 2432     		adds	r2, r2, #36
 2502 0074 1268     		ldr	r2, [r2]
 2503              		.loc 7 124 79
 2504 0076 1846     		mov	r0, r3
 2505 0078 9047     		blx	r2
 2506              	.LVL6:
 2507 007a 0346     		mov	r3, r0
 2508 007c 1A46     		mov	r2, r3
 2509              		.loc 7 124 82
 2510 007e FB7B     		ldrb	r3, [r7, #15]	@ zero_extendqisi2
 2511 0080 9342     		cmp	r3, r2
 2512 0082 0CBF     		ite	eq
 2513 0084 0123     		moveq	r3, #1
 2514 0086 0023     		movne	r3, #0
 2515 0088 DAB2     		uxtb	r2, r3
 2516              		.loc 7 124 20
 2517 008a BB7B     		ldrb	r3, [r7, #14]
 2518 008c 1343     		orrs	r3, r3, r2
 2519 008e DBB2     		uxtb	r3, r3
 2520 0090 002B     		cmp	r3, #0
 2521 0092 14BF     		ite	ne
 2522 0094 0123     		movne	r3, #1
 2523 0096 0023     		moveq	r3, #0
 2524 0098 BB73     		strb	r3, [r7, #14]
 2525              	.L92:
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         }
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         return compat;
 2526              		.loc 7 126 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 86


 2527 009a BB7B     		ldrb	r3, [r7, #14]	@ zero_extendqisi2
 2528              	.LBE37:
 2529              	.LBE36:
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****     {
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****         assert(compatibleFramebuffer(Bitmap::RGB565) && "The chosen painter only works with RGB565 
 2530              		.loc 9 44 9
 2531 009c 002B     		cmp	r3, #0
 2532 009e 05D1     		bne	.L98
 2533              		.loc 9 44 9 is_stmt 0 discriminator 3
 2534 00a0 064B     		ldr	r3, .L99+4
 2535 00a2 074A     		ldr	r2, .L99+8
 2536 00a4 2C21     		movs	r1, #44
 2537 00a6 0748     		ldr	r0, .L99+12
 2538 00a8 FFF7FEFF 		bl	__assert_func
 2539              	.L98:
 2540              		.loc 9 44 9
 2541 00ac 00BF     		nop
 2542              	.LBE35:
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp ****     }
 2543              		.loc 9 45 5 is_stmt 1
 2544 00ae 7B68     		ldr	r3, [r7, #4]
 2545 00b0 1846     		mov	r0, r3
 2546 00b2 1037     		adds	r7, r7, #16
 2547              	.LCFI247:
 2548              		.cfi_def_cfa_offset 8
 2549 00b4 BD46     		mov	sp, r7
 2550              	.LCFI248:
 2551              		.cfi_def_cfa_register 13
 2552              		@ sp needed
 2553 00b6 80BD     		pop	{r7, pc}
 2554              	.L100:
 2555              		.align	2
 2556              	.L99:
 2557 00b8 08000000 		.word	_ZTVN8touchgfx21AbstractPainterRGB565E+8
 2558 00bc 00000000 		.word	.LC0
 2559 00c0 60000000 		.word	.LC1
 2560 00c4 9C000000 		.word	.LC2
 2561              		.cfi_endproc
 2562              	.LFE729:
 2564              		.weak	_ZN8touchgfx21AbstractPainterRGB565C1Ev
 2565              		.thumb_set _ZN8touchgfx21AbstractPainterRGB565C1Ev,_ZN8touchgfx21AbstractPainterRGB565C2Ev
 2566              		.section	.text._ZN8touchgfx21AbstractPainterRGB565D2Ev,"axG",%progbits,_ZN8touchgfx21AbstractPaint
 2567              		.align	1
 2568              		.weak	_ZN8touchgfx21AbstractPainterRGB565D2Ev
 2569              		.syntax unified
 2570              		.thumb
 2571              		.thumb_func
 2572              		.fpu fpv4-sp-d16
 2574              	_ZN8touchgfx21AbstractPainterRGB565D2Ev:
 2575              	.LFB736:
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** {
 2576              		.loc 9 34 7
 2577              		.cfi_startproc
 2578              		@ args = 0, pretend = 0, frame = 8
 2579              		@ frame_needed = 1, uses_anonymous_args = 0
 2580 0000 80B5     		push	{r7, lr}
 2581              	.LCFI249:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 87


 2582              		.cfi_def_cfa_offset 8
 2583              		.cfi_offset 7, -8
 2584              		.cfi_offset 14, -4
 2585 0002 82B0     		sub	sp, sp, #8
 2586              	.LCFI250:
 2587              		.cfi_def_cfa_offset 16
 2588 0004 00AF     		add	r7, sp, #0
 2589              	.LCFI251:
 2590              		.cfi_def_cfa_register 7
 2591 0006 7860     		str	r0, [r7, #4]
 2592              	.LBB38:
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** {
 2593              		.loc 9 34 7
 2594 0008 054A     		ldr	r2, .L103
 2595 000a 7B68     		ldr	r3, [r7, #4]
 2596 000c 1A60     		str	r2, [r3]
 2597 000e 7B68     		ldr	r3, [r7, #4]
 2598 0010 1846     		mov	r0, r3
 2599 0012 FFF7FEFF 		bl	_ZN8touchgfx15AbstractPainterD2Ev
 2600              	.LBE38:
 2601 0016 7B68     		ldr	r3, [r7, #4]
 2602 0018 1846     		mov	r0, r3
 2603 001a 0837     		adds	r7, r7, #8
 2604              	.LCFI252:
 2605              		.cfi_def_cfa_offset 8
 2606 001c BD46     		mov	sp, r7
 2607              	.LCFI253:
 2608              		.cfi_def_cfa_register 13
 2609              		@ sp needed
 2610 001e 80BD     		pop	{r7, pc}
 2611              	.L104:
 2612              		.align	2
 2613              	.L103:
 2614 0020 08000000 		.word	_ZTVN8touchgfx21AbstractPainterRGB565E+8
 2615              		.cfi_endproc
 2616              	.LFE736:
 2618              		.weak	_ZN8touchgfx21AbstractPainterRGB565D1Ev
 2619              		.thumb_set _ZN8touchgfx21AbstractPainterRGB565D1Ev,_ZN8touchgfx21AbstractPainterRGB565D2Ev
 2620              		.section	.text._ZN8touchgfx21AbstractPainterRGB565D0Ev,"axG",%progbits,_ZN8touchgfx21AbstractPaint
 2621              		.align	1
 2622              		.weak	_ZN8touchgfx21AbstractPainterRGB565D0Ev
 2623              		.syntax unified
 2624              		.thumb
 2625              		.thumb_func
 2626              		.fpu fpv4-sp-d16
 2628              	_ZN8touchgfx21AbstractPainterRGB565D0Ev:
 2629              	.LFB738:
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** {
 2630              		.loc 9 34 7
 2631              		.cfi_startproc
 2632              		@ args = 0, pretend = 0, frame = 8
 2633              		@ frame_needed = 1, uses_anonymous_args = 0
 2634 0000 80B5     		push	{r7, lr}
 2635              	.LCFI254:
 2636              		.cfi_def_cfa_offset 8
 2637              		.cfi_offset 7, -8
 2638              		.cfi_offset 14, -4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 88


 2639 0002 82B0     		sub	sp, sp, #8
 2640              	.LCFI255:
 2641              		.cfi_def_cfa_offset 16
 2642 0004 00AF     		add	r7, sp, #0
 2643              	.LCFI256:
 2644              		.cfi_def_cfa_register 7
 2645 0006 7860     		str	r0, [r7, #4]
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.hpp **** {
 2646              		.loc 9 34 7
 2647 0008 7868     		ldr	r0, [r7, #4]
 2648 000a FFF7FEFF 		bl	_ZN8touchgfx21AbstractPainterRGB565D1Ev
 2649 000e 1421     		movs	r1, #20
 2650 0010 7868     		ldr	r0, [r7, #4]
 2651 0012 FFF7FEFF 		bl	_ZdlPvj
 2652 0016 7B68     		ldr	r3, [r7, #4]
 2653 0018 1846     		mov	r0, r3
 2654 001a 0837     		adds	r7, r7, #8
 2655              	.LCFI257:
 2656              		.cfi_def_cfa_offset 8
 2657 001c BD46     		mov	sp, r7
 2658              	.LCFI258:
 2659              		.cfi_def_cfa_register 13
 2660              		@ sp needed
 2661 001e 80BD     		pop	{r7, pc}
 2662              		.cfi_endproc
 2663              	.LFE738:
 2665              		.section	.text._ZN8touchgfx13PainterRGB565C2ENS_9colortypeE,"axG",%progbits,_ZN8touchgfx13PainterR
 2666              		.align	1
 2667              		.weak	_ZN8touchgfx13PainterRGB565C2ENS_9colortypeE
 2668              		.syntax unified
 2669              		.thumb
 2670              		.thumb_func
 2671              		.fpu fpv4-sp-d16
 2673              	_ZN8touchgfx13PainterRGB565C2ENS_9colortypeE:
 2674              	.LFB739:
 2675              		.file 10 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  * @file touchgfx/widgets/canvas/PainterRGB565.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  * Declares the touchgfx::PainterRGB565 class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** #ifndef TOUCHGFX_PAINTERRGB565_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** #define TOUCHGFX_PAINTERRGB565_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** #include <touchgfx/hal/Types.hpp>
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 89


  22:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** #include <touchgfx/widgets/canvas/AbstractPainterRGB565.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** 
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** namespace touchgfx
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** {
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** /**
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  * The PainterRGB565 class allows a shape to be filled with a given color and alpha
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  * value. This allows transparent, anti-aliased elements to be drawn.
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  *
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  * @see AbstractPainter
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****  */
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** class PainterRGB565 : public AbstractPainterRGB565
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** {
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** public:
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****     /**
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****      * Initializes a new instance of the PainterRGB565 class.
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****      *
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****      * @param  color (Optional) the color, default is black.
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****      */
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****     PainterRGB565(colortype color = 0)
 2676              		.loc 10 40 5
 2677              		.cfi_startproc
 2678              		@ args = 0, pretend = 0, frame = 8
 2679              		@ frame_needed = 1, uses_anonymous_args = 0
 2680 0000 80B5     		push	{r7, lr}
 2681              	.LCFI259:
 2682              		.cfi_def_cfa_offset 8
 2683              		.cfi_offset 7, -8
 2684              		.cfi_offset 14, -4
 2685 0002 82B0     		sub	sp, sp, #8
 2686              	.LCFI260:
 2687              		.cfi_def_cfa_offset 16
 2688 0004 00AF     		add	r7, sp, #0
 2689              	.LCFI261:
 2690              		.cfi_def_cfa_register 7
 2691 0006 7860     		str	r0, [r7, #4]
 2692 0008 3960     		str	r1, [r7]
 2693              	.LBB39:
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****         : AbstractPainterRGB565(), painterColor(0)
 2694              		.loc 10 41 50
 2695 000a 7B68     		ldr	r3, [r7, #4]
 2696 000c 1846     		mov	r0, r3
 2697 000e FFF7FEFF 		bl	_ZN8touchgfx21AbstractPainterRGB565C2Ev
 2698 0012 094A     		ldr	r2, .L109
 2699 0014 7B68     		ldr	r3, [r7, #4]
 2700 0016 1A60     		str	r2, [r3]
 2701 0018 7B68     		ldr	r3, [r7, #4]
 2702 001a 1433     		adds	r3, r3, #20
 2703 001c 0021     		movs	r1, #0
 2704 001e 1846     		mov	r0, r3
 2705 0020 FFF7FEFF 		bl	_ZN8touchgfx9colortypeC1Em
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****     {
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****         setColor(color);
 2706              		.loc 10 43 17
 2707 0024 3968     		ldr	r1, [r7]
 2708 0026 7868     		ldr	r0, [r7, #4]
 2709 0028 FFF7FEFF 		bl	_ZN8touchgfx13PainterRGB5658setColorENS_9colortypeE
 2710              	.LBE39:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 90


  44:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****     }
 2711              		.loc 10 44 5
 2712 002c 7B68     		ldr	r3, [r7, #4]
 2713 002e 1846     		mov	r0, r3
 2714 0030 0837     		adds	r7, r7, #8
 2715              	.LCFI262:
 2716              		.cfi_def_cfa_offset 8
 2717 0032 BD46     		mov	sp, r7
 2718              	.LCFI263:
 2719              		.cfi_def_cfa_register 13
 2720              		@ sp needed
 2721 0034 80BD     		pop	{r7, pc}
 2722              	.L110:
 2723 0036 00BF     		.align	2
 2724              	.L109:
 2725 0038 08000000 		.word	_ZTVN8touchgfx13PainterRGB565E+8
 2726              		.cfi_endproc
 2727              	.LFE739:
 2729              		.weak	_ZN8touchgfx13PainterRGB565C1ENS_9colortypeE
 2730              		.thumb_set _ZN8touchgfx13PainterRGB565C1ENS_9colortypeE,_ZN8touchgfx13PainterRGB565C2ENS_9colortyp
 2731              		.section	.text._ZN8touchgfx13PainterRGB5658setColorENS_9colortypeE,"axG",%progbits,_ZN8touchgfx13P
 2732              		.align	1
 2733              		.weak	_ZN8touchgfx13PainterRGB5658setColorENS_9colortypeE
 2734              		.syntax unified
 2735              		.thumb
 2736              		.thumb_func
 2737              		.fpu fpv4-sp-d16
 2739              	_ZN8touchgfx13PainterRGB5658setColorENS_9colortypeE:
 2740              	.LFB741:
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** 
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****     /**
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****      * Sets color and alpha to use when drawing the CanvasWidget.
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****      *
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****      * @param  color The color.
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****      */
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****     void setColor(colortype color)
 2741              		.loc 10 51 10
 2742              		.cfi_startproc
 2743              		@ args = 0, pretend = 0, frame = 8
 2744              		@ frame_needed = 1, uses_anonymous_args = 0
 2745              		@ link register save eliminated.
 2746 0000 80B4     		push	{r7}
 2747              	.LCFI264:
 2748              		.cfi_def_cfa_offset 4
 2749              		.cfi_offset 7, -4
 2750 0002 83B0     		sub	sp, sp, #12
 2751              	.LCFI265:
 2752              		.cfi_def_cfa_offset 16
 2753 0004 00AF     		add	r7, sp, #0
 2754              	.LCFI266:
 2755              		.cfi_def_cfa_register 7
 2756 0006 7860     		str	r0, [r7, #4]
 2757 0008 3960     		str	r1, [r7]
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****     {
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****         painterColor = color;
 2758              		.loc 10 53 22
 2759 000a 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 91


 2760 000c 3A68     		ldr	r2, [r7]
 2761 000e 5A61     		str	r2, [r3, #20]
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp ****     }
 2762              		.loc 10 54 5
 2763 0010 00BF     		nop
 2764 0012 0C37     		adds	r7, r7, #12
 2765              	.LCFI267:
 2766              		.cfi_def_cfa_offset 4
 2767 0014 BD46     		mov	sp, r7
 2768              	.LCFI268:
 2769              		.cfi_def_cfa_register 13
 2770              		@ sp needed
 2771 0016 5DF8047B 		ldr	r7, [sp], #4
 2772              	.LCFI269:
 2773              		.cfi_restore 7
 2774              		.cfi_def_cfa_offset 0
 2775 001a 7047     		bx	lr
 2776              		.cfi_endproc
 2777              	.LFE741:
 2779              		.section	.text._ZN8touchgfx4ViewI15screenPresenterED2Ev,"axG",%progbits,_ZN8touchgfx4ViewI15screen
 2780              		.align	1
 2781              		.weak	_ZN8touchgfx4ViewI15screenPresenterED2Ev
 2782              		.syntax unified
 2783              		.thumb
 2784              		.thumb_func
 2785              		.fpu fpv4-sp-d16
 2787              	_ZN8touchgfx4ViewI15screenPresenterED2Ev:
 2788              	.LFB745:
 2789              		.file 11 "Middlewares/ST/touchgfx/framework/include/mvp/View.hpp"
   1:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @file mvp/View.hpp
  15:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * Declares the touchgfx::View class.
  17:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** #ifndef TOUCHGFX_VIEW_HPP
  19:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** #define TOUCHGFX_VIEW_HPP
  20:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** #include <touchgfx/Screen.hpp>
  22:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** 
  23:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** namespace touchgfx
  24:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** {
  25:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** /**
  26:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * This is a generic touchgfx::Screen specialization for normal applications. It provides a link
  27:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * to the Presenter class.
  28:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 92


  29:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @tparam T The type of Presenter associated with this view.
  30:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  *
  31:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @see Screen
  32:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  *
  33:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @note All views in the application must be a subclass of this type.
  34:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  */
  35:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** template <class T>
  36:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** class View : public Screen
 2790              		.loc 11 36 7
 2791              		.cfi_startproc
 2792              		@ args = 0, pretend = 0, frame = 8
 2793              		@ frame_needed = 1, uses_anonymous_args = 0
 2794 0000 80B5     		push	{r7, lr}
 2795              	.LCFI270:
 2796              		.cfi_def_cfa_offset 8
 2797              		.cfi_offset 7, -8
 2798              		.cfi_offset 14, -4
 2799 0002 82B0     		sub	sp, sp, #8
 2800              	.LCFI271:
 2801              		.cfi_def_cfa_offset 16
 2802 0004 00AF     		add	r7, sp, #0
 2803              	.LCFI272:
 2804              		.cfi_def_cfa_register 7
 2805 0006 7860     		str	r0, [r7, #4]
 2806              	.LBB40:
 2807              		.loc 11 36 7
 2808 0008 054A     		ldr	r2, .L114
 2809 000a 7B68     		ldr	r3, [r7, #4]
 2810 000c 1A60     		str	r2, [r3]
 2811 000e 7B68     		ldr	r3, [r7, #4]
 2812 0010 1846     		mov	r0, r3
 2813 0012 FFF7FEFF 		bl	_ZN8touchgfx6ScreenD2Ev
 2814              	.LBE40:
 2815 0016 7B68     		ldr	r3, [r7, #4]
 2816 0018 1846     		mov	r0, r3
 2817 001a 0837     		adds	r7, r7, #8
 2818              	.LCFI273:
 2819              		.cfi_def_cfa_offset 8
 2820 001c BD46     		mov	sp, r7
 2821              	.LCFI274:
 2822              		.cfi_def_cfa_register 13
 2823              		@ sp needed
 2824 001e 80BD     		pop	{r7, pc}
 2825              	.L115:
 2826              		.align	2
 2827              	.L114:
 2828 0020 08000000 		.word	_ZTVN8touchgfx4ViewI15screenPresenterEE+8
 2829              		.cfi_endproc
 2830              	.LFE745:
 2832              		.weak	_ZN8touchgfx4ViewI15screenPresenterED1Ev
 2833              		.thumb_set _ZN8touchgfx4ViewI15screenPresenterED1Ev,_ZN8touchgfx4ViewI15screenPresenterED2Ev
 2834              		.section	.text._ZN8touchgfx4ViewI15screenPresenterED0Ev,"axG",%progbits,_ZN8touchgfx4ViewI15screen
 2835              		.align	1
 2836              		.weak	_ZN8touchgfx4ViewI15screenPresenterED0Ev
 2837              		.syntax unified
 2838              		.thumb
 2839              		.thumb_func
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 93


 2840              		.fpu fpv4-sp-d16
 2842              	_ZN8touchgfx4ViewI15screenPresenterED0Ev:
 2843              	.LFB747:
 2844              		.loc 11 36 7
 2845              		.cfi_startproc
 2846              		@ args = 0, pretend = 0, frame = 8
 2847              		@ frame_needed = 1, uses_anonymous_args = 0
 2848 0000 80B5     		push	{r7, lr}
 2849              	.LCFI275:
 2850              		.cfi_def_cfa_offset 8
 2851              		.cfi_offset 7, -8
 2852              		.cfi_offset 14, -4
 2853 0002 82B0     		sub	sp, sp, #8
 2854              	.LCFI276:
 2855              		.cfi_def_cfa_offset 16
 2856 0004 00AF     		add	r7, sp, #0
 2857              	.LCFI277:
 2858              		.cfi_def_cfa_register 7
 2859 0006 7860     		str	r0, [r7, #4]
 2860              		.loc 11 36 7
 2861 0008 7868     		ldr	r0, [r7, #4]
 2862 000a FFF7FEFF 		bl	_ZN8touchgfx4ViewI15screenPresenterED1Ev
 2863 000e 4021     		movs	r1, #64
 2864 0010 7868     		ldr	r0, [r7, #4]
 2865 0012 FFF7FEFF 		bl	_ZdlPvj
 2866 0016 7B68     		ldr	r3, [r7, #4]
 2867 0018 1846     		mov	r0, r3
 2868 001a 0837     		adds	r7, r7, #8
 2869              	.LCFI278:
 2870              		.cfi_def_cfa_offset 8
 2871 001c BD46     		mov	sp, r7
 2872              	.LCFI279:
 2873              		.cfi_def_cfa_register 13
 2874              		@ sp needed
 2875 001e 80BD     		pop	{r7, pc}
 2876              		.cfi_endproc
 2877              	.LFE747:
 2879              		.section	.text._ZN14screenViewBaseD2Ev,"axG",%progbits,_ZN14screenViewBaseD5Ev,comdat
 2880              		.align	1
 2881              		.weak	_ZN14screenViewBaseD2Ev
 2882              		.syntax unified
 2883              		.thumb
 2884              		.thumb_func
 2885              		.fpu fpv4-sp-d16
 2887              	_ZN14screenViewBaseD2Ev:
 2888              	.LFB748:
 2889              		.file 12 "Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp"
   1:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** /*********************************************************************************/
   2:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** /********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
   3:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** /*********************************************************************************/
   4:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #ifndef SCREENVIEWBASE_HPP
   5:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #define SCREENVIEWBASE_HPP
   6:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** 
   7:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <gui/common/FrontendApplication.hpp>
   8:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <mvp/View.hpp>
   9:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <gui/screen_screen/screenPresenter.hpp>
  10:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <touchgfx/widgets/Box.hpp>
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 94


  11:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <touchgfx/containers/ScrollableContainer.hpp>
  12:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <touchgfx/widgets/canvas/Circle.hpp>
  13:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <touchgfx/widgets/canvas/PainterRGB565.hpp>
  14:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** 
  15:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** class screenViewBase : public touchgfx::View<screenPresenter>
  16:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** {
  17:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** public:
  18:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp ****     screenViewBase();
  19:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp ****     virtual ~screenViewBase() {}
 2890              		.loc 12 19 13
 2891              		.cfi_startproc
 2892              		@ args = 0, pretend = 0, frame = 8
 2893              		@ frame_needed = 1, uses_anonymous_args = 0
 2894 0000 80B5     		push	{r7, lr}
 2895              	.LCFI280:
 2896              		.cfi_def_cfa_offset 8
 2897              		.cfi_offset 7, -8
 2898              		.cfi_offset 14, -4
 2899 0002 82B0     		sub	sp, sp, #8
 2900              	.LCFI281:
 2901              		.cfi_def_cfa_offset 16
 2902 0004 00AF     		add	r7, sp, #0
 2903              	.LCFI282:
 2904              		.cfi_def_cfa_register 7
 2905 0006 7860     		str	r0, [r7, #4]
 2906              	.LBB41:
 2907              		.loc 12 19 31
 2908 0008 104A     		ldr	r2, .L120
 2909 000a 7B68     		ldr	r3, [r7, #4]
 2910 000c 1A60     		str	r2, [r3]
 2911 000e 7B68     		ldr	r3, [r7, #4]
 2912 0010 03F5BA73 		add	r3, r3, #372
 2913 0014 1846     		mov	r0, r3
 2914 0016 FFF7FEFF 		bl	_ZN8touchgfx13PainterRGB565D1Ev
 2915 001a 7B68     		ldr	r3, [r7, #4]
 2916 001c 03F59473 		add	r3, r3, #296
 2917 0020 1846     		mov	r0, r3
 2918 0022 FFF7FEFF 		bl	_ZN8touchgfx6CircleD1Ev
 2919 0026 7B68     		ldr	r3, [r7, #4]
 2920 0028 6C33     		adds	r3, r3, #108
 2921 002a 1846     		mov	r0, r3
 2922 002c FFF7FEFF 		bl	_ZN8touchgfx19ScrollableContainerD1Ev
 2923 0030 7B68     		ldr	r3, [r7, #4]
 2924 0032 4033     		adds	r3, r3, #64
 2925 0034 1846     		mov	r0, r3
 2926 0036 FFF7FEFF 		bl	_ZN8touchgfx3BoxD1Ev
 2927 003a 7B68     		ldr	r3, [r7, #4]
 2928 003c 1846     		mov	r0, r3
 2929 003e FFF7FEFF 		bl	_ZN8touchgfx4ViewI15screenPresenterED2Ev
 2930              	.LBE41:
 2931              		.loc 12 19 32
 2932 0042 7B68     		ldr	r3, [r7, #4]
 2933 0044 1846     		mov	r0, r3
 2934 0046 0837     		adds	r7, r7, #8
 2935              	.LCFI283:
 2936              		.cfi_def_cfa_offset 8
 2937 0048 BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 95


 2938              	.LCFI284:
 2939              		.cfi_def_cfa_register 13
 2940              		@ sp needed
 2941 004a 80BD     		pop	{r7, pc}
 2942              	.L121:
 2943              		.align	2
 2944              	.L120:
 2945 004c 08000000 		.word	_ZTV14screenViewBase+8
 2946              		.cfi_endproc
 2947              	.LFE748:
 2949              		.weak	_ZN14screenViewBaseD1Ev
 2950              		.thumb_set _ZN14screenViewBaseD1Ev,_ZN14screenViewBaseD2Ev
 2951              		.section	.text._ZN14screenViewBaseD0Ev,"axG",%progbits,_ZN14screenViewBaseD5Ev,comdat
 2952              		.align	1
 2953              		.weak	_ZN14screenViewBaseD0Ev
 2954              		.syntax unified
 2955              		.thumb
 2956              		.thumb_func
 2957              		.fpu fpv4-sp-d16
 2959              	_ZN14screenViewBaseD0Ev:
 2960              	.LFB750:
 2961              		.loc 12 19 13
 2962              		.cfi_startproc
 2963              		@ args = 0, pretend = 0, frame = 8
 2964              		@ frame_needed = 1, uses_anonymous_args = 0
 2965 0000 80B5     		push	{r7, lr}
 2966              	.LCFI285:
 2967              		.cfi_def_cfa_offset 8
 2968              		.cfi_offset 7, -8
 2969              		.cfi_offset 14, -4
 2970 0002 82B0     		sub	sp, sp, #8
 2971              	.LCFI286:
 2972              		.cfi_def_cfa_offset 16
 2973 0004 00AF     		add	r7, sp, #0
 2974              	.LCFI287:
 2975              		.cfi_def_cfa_register 7
 2976 0006 7860     		str	r0, [r7, #4]
 2977              		.loc 12 19 32
 2978 0008 7868     		ldr	r0, [r7, #4]
 2979 000a FFF7FEFF 		bl	_ZN14screenViewBaseD1Ev
 2980 000e 41F24C41 		movw	r1, #5196
 2981 0012 7868     		ldr	r0, [r7, #4]
 2982 0014 FFF7FEFF 		bl	_ZdlPvj
 2983 0018 7B68     		ldr	r3, [r7, #4]
 2984 001a 1846     		mov	r0, r3
 2985 001c 0837     		adds	r7, r7, #8
 2986              	.LCFI288:
 2987              		.cfi_def_cfa_offset 8
 2988 001e BD46     		mov	sp, r7
 2989              	.LCFI289:
 2990              		.cfi_def_cfa_register 13
 2991              		@ sp needed
 2992 0020 80BD     		pop	{r7, pc}
 2993              		.cfi_endproc
 2994              	.LFE750:
 2996              		.section	.text._ZN14screenViewBaseC2Ev,"ax",%progbits
 2997              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 96


 2998              		.global	_ZN14screenViewBaseC2Ev
 2999              		.syntax unified
 3000              		.thumb
 3001              		.thumb_func
 3002              		.fpu fpv4-sp-d16
 3004              	_ZN14screenViewBaseC2Ev:
 3005              	.LFB781:
 3006              		.file 13 "Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp"
   1:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** /*********************************************************************************/
   2:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** /********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
   3:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** /*********************************************************************************/
   4:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** #include <gui_generated/screen_screen/screenViewBase.hpp>
   5:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** #include <touchgfx/Color.hpp>
   6:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** 
   7:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** screenViewBase::screenViewBase()
 3007              		.loc 13 7 1
 3008              		.cfi_startproc
 3009              		@ args = 0, pretend = 0, frame = 40
 3010              		@ frame_needed = 1, uses_anonymous_args = 0
 3011 0000 90B5     		push	{r4, r7, lr}
 3012              	.LCFI290:
 3013              		.cfi_def_cfa_offset 12
 3014              		.cfi_offset 4, -12
 3015              		.cfi_offset 7, -8
 3016              		.cfi_offset 14, -4
 3017 0002 8DB0     		sub	sp, sp, #52
 3018              	.LCFI291:
 3019              		.cfi_def_cfa_offset 64
 3020 0004 02AF     		add	r7, sp, #8
 3021              	.LCFI292:
 3022              		.cfi_def_cfa 7, 56
 3023 0006 7860     		str	r0, [r7, #4]
 3024              	.LBB42:
 3025              		.loc 13 7 32
 3026 0008 7B68     		ldr	r3, [r7, #4]
 3027 000a 1846     		mov	r0, r3
 3028 000c FFF7FEFF 		bl	_ZN8touchgfx4ViewI15screenPresenterEC2Ev
 3029 0010 7A4A     		ldr	r2, .L129
 3030 0012 7B68     		ldr	r3, [r7, #4]
 3031 0014 1A60     		str	r2, [r3]
 3032 0016 7B68     		ldr	r3, [r7, #4]
 3033 0018 4033     		adds	r3, r3, #64
 3034 001a 1846     		mov	r0, r3
 3035 001c FFF7FEFF 		bl	_ZN8touchgfx3BoxC1Ev
 3036 0020 7B68     		ldr	r3, [r7, #4]
 3037 0022 6C33     		adds	r3, r3, #108
 3038 0024 1846     		mov	r0, r3
 3039 0026 FFF7FEFF 		bl	_ZN8touchgfx19ScrollableContainerC1Ev
 3040 002a 7B68     		ldr	r3, [r7, #4]
 3041 002c 03F59473 		add	r3, r3, #296
 3042 0030 1846     		mov	r0, r3
 3043 0032 FFF7FEFF 		bl	_ZN8touchgfx6CircleC1Ev
 3044 0036 7B68     		ldr	r3, [r7, #4]
 3045 0038 03F5BA74 		add	r4, r3, #372
 3046 003c 07F10C03 		add	r3, r7, #12
 3047 0040 0021     		movs	r1, #0
 3048 0042 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 97


 3049 0044 FFF7FEFF 		bl	_ZN8touchgfx9colortypeC1Em
 3050 0048 F968     		ldr	r1, [r7, #12]
 3051 004a 2046     		mov	r0, r4
 3052 004c FFF7FEFF 		bl	_ZN8touchgfx13PainterRGB565C1ENS_9colortypeE
   8:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** {
   9:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** 
  10:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
 3053              		.loc 13 10 49
 3054 0050 7B68     		ldr	r3, [r7, #4]
 3055 0052 03F5C673 		add	r3, r3, #396
 3056              		.loc 13 10 48
 3057 0056 4FF49651 		mov	r1, #4800
 3058 005a 1846     		mov	r0, r3
 3059 005c FFF7FEFF 		bl	_ZN8touchgfx20CanvasWidgetRenderer11setupBufferEPhj
  11:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** 
  12:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     __background.setPosition(0, 0, 320, 240);
 3060              		.loc 13 12 29
 3061 0060 7B68     		ldr	r3, [r7, #4]
 3062 0062 03F14000 		add	r0, r3, #64
 3063 0066 F023     		movs	r3, #240
 3064 0068 0093     		str	r3, [sp]
 3065 006a 4FF4A073 		mov	r3, #320
 3066 006e 0022     		movs	r2, #0
 3067 0070 0021     		movs	r1, #0
 3068 0072 FFF7FEFF 		bl	_ZN8touchgfx8Drawable11setPositionEssss
  13:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
 3069              		.loc 13 13 26
 3070 0076 7B68     		ldr	r3, [r7, #4]
 3071 0078 03F14004 		add	r4, r3, #64
 3072 007c 0023     		movs	r3, #0
 3073 007e 87F82130 		strb	r3, [r7, #33]
 3074 0082 0023     		movs	r3, #0
 3075 0084 87F82030 		strb	r3, [r7, #32]
 3076 0088 0023     		movs	r3, #0
 3077 008a FB77     		strb	r3, [r7, #31]
 3078              	.LBB43:
 3079              	.LBB44:
 3080              		.file 14 "Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****  * @file touchgfx/Color.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****  * Declares the touchgfx::Color class
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** #ifndef TOUCHGFX_COLOR_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** #define TOUCHGFX_COLOR_HPP
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 98


  20:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** #include <touchgfx/lcd/LCD.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** namespace touchgfx
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** {
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** /** Contains functionality for color conversion. */
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** class Color
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** {
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** public:
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Generates a color representation to be used on the LCD, based on 24 bit RGB values.
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  red   Value of the red part (0-255).
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  green Value of the green part (0-255).
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  blue  Value of the blue part (0-255).
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @return The color representation depending on LCD color format.
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Please use getColorFromRGB(uint8_t,uint8_t,uint8_t)
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static colortype getColorFrom24BitRGB(uint8_t red, uint8_t green, uint8_t
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         return getColorFromRGB(red, green, blue);
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Gets the red color part of a color.
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  color The color value.
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @return The red part of the color.
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getRed(colortype)
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static uint8_t getRedColor(colortype color)
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         return getRed(color);
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Gets the green color part of a color.
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  color The color value.
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @return The green part of the color.
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getGreen(colortype)
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static uint8_t getGreenColor(colortype color)
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         return getGreen(color);
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Gets the blue color part of a color.
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 99


  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  color The color value.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @return The blue part of the color.
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getBlue(colortype)
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static uint8_t getBlueColor(colortype color)
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         return getBlue(color);
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Convert a given color from HSV (Hue, Saturation, Value) to RGB (Red, Green, Blue).
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       hue        The input Hue (0 to 255).
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       saturation The input Saturation (0 to 255).
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       value      The input Value (0 to 255).
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] red        The output Red (0 to 255).
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] green      The output Green (0 to 255).
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] blue       The output Blue (0 to 255).
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @note The conversion is an approximation.
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getRGBFromHSV(uint8_t,uint8_t,uint8_t,uint8_t&,uint8_t&,uint8_t&)
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static void getRGBFrom24BitHSV(uint8_t hue, uint8_t saturation, uint8_t v
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         getRGBFromHSV(hue, saturation, value, red, green, blue);
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Convert a given color from RGB (Red, Green, Blue) to HSV (Hue, Saturation, Value).
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       red        The input Red.
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       green      The input Green.
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       blue       The input Blue.
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] hue        The output Hue.
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] saturation The output Saturation.
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] value      The output Value.
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @note The conversion is an approximation.
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getHSVFromRGB(uint8_t,uint8_t,uint8_t,uint8_t&,uint8_t&,uint8_t&)
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static void getHSVFrom24BitRGB(uint8_t red, uint8_t green, uint8_t blue, 
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         getHSVFromRGB(red, green, blue, hue, saturation, value);
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Convert a given color from HSV (Hue, Saturation, Value) to RGB (Red, Green, Blue).
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       hue        The input Hue (0 to 255).
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       saturation The input Saturation (0 to 255).
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       luminance  The input Value (0 to 255).
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] red        The output Red (0 to 255).
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] green      The output Green (0 to 255).
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 100


 134:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] blue       The output Blue (0 to 255).
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @note The conversion is an approximation.
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getRGBFromHSL(uint8_t,uint8_t,uint8_t,uint8_t&,uint8_t&,uint8_t&)
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static void getRGBFrom24BitHSL(uint8_t hue, uint8_t saturation, uint8_t l
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         getRGBFromHSL(hue, saturation, luminance, red, green, blue);
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Convert a given color from RGB (Red, Green, Blue) to HSV (Hue, Saturation, Value).
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       red        The input Red (0 to 255).
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       green      The input Green (0 to 255).
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param       blue       The input Blue (0 to 255).
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] hue        The output Hue (0 to 255).
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] saturation The output Saturation (0 to 255).
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out] luminance  The output Value (0 to 255).
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @note The conversion is an approximation.
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getHSLFrom24BitRGB(uint8_t,uint8_t,uint8_t,uint8_t&,uint8_t&,uint8_t&)
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static void getHSLFrom24BitRGB(uint8_t red, uint8_t green, uint8_t blue, 
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         getHSLFromRGB(red, green, blue, hue, saturation, luminance);
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Convert HSL (Hue, Saturation, Luminance) to HSV (Hue, Saturation, Value). The Hue is
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * unaltered, the Saturation is changed and the Value is calculated.
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param          hue        The hue (0 to 255).
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [in,out] saturation The saturation (0 to 255).
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param          luminance  The luminance (0 to 255).
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out]    value      The value (0 to 255).
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getHSVFromHSL(uint8_t,uint8_t,int8_t,uint8_t&,uint8_t&,uint8_t&)
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static void getHSVFromHSL(uint8_t hue, uint8_t& saturation, uint8_t lumin
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         value = luminance + LCD::div255(saturation * MIN(luminance, 255 - luminance));
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         saturation = value == 0 ? 0 : 510 - ((luminance * 510) / value);
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Convert HSV (Hue, Saturation, Value) to HSL (Hue, Saturation, Luminance). The Hue is
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * unaltered, the Saturation is changed and the Luminance is calculated.
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param          hue        The hue (0 to 255).
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [in,out] saturation The saturation (0 to 255).
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param          value      The value (0 to 255).
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param [out]    luminance  The luminance (0 to 255).
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @deprecated Use getHSLFromHSV(uint8_t,uint8_t,int8_t,uint8_t&,uint8_t&,uint8_t&)
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 101


 191:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static void getHSLFromHSV(uint8_t hue, uint8_t& saturation, uint8_t value
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         uint16_t luminance2 = (value * (510 - saturation)) / 255;
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         luminance = luminance2 >> 1;
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         saturation = (luminance == 0 || luminance == 255) ? 0 : (uint8_t)(((value * 2 - luminance2)
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     }
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp **** 
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     /**
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * Generates a color representation to be used on the LCD, based on 24 bit RGB values. The
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * embedded alpha value is set to 255.
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  red   Value of the red part (0-255).
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  green Value of the green part (0-255).
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @param  blue  Value of the blue part (0-255).
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      *
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      * @return The color representation depending on LCD color format.
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****      */
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     FORCE_INLINE_FUNCTION static colortype getColorFromRGB(uint8_t red, uint8_t green, uint8_t blue
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****     {
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/Color.hpp ****         return 0xFF000000 | (red << 16) | (green << 8) | (blue);
 3081              		.loc 14 210 30
 3082 008c 97F82130 		ldrb	r3, [r7, #33]	@ zero_extendqisi2
 3083              		.loc 14 210 34
 3084 0090 1B04     		lsls	r3, r3, #16
 3085 0092 1A46     		mov	r2, r3
 3086              		.loc 14 210 44
 3087 0094 97F82030 		ldrb	r3, [r7, #32]	@ zero_extendqisi2
 3088              		.loc 14 210 50
 3089 0098 1B02     		lsls	r3, r3, #8
 3090              		.loc 14 210 41
 3091 009a 1A43     		orrs	r2, r2, r3
 3092              		.loc 14 210 59
 3093 009c FB7F     		ldrb	r3, [r7, #31]	@ zero_extendqisi2
 3094              		.loc 14 210 56
 3095 009e 1343     		orrs	r3, r3, r2
 3096 00a0 43F07F42 		orr	r2, r3, #-16777216
 3097              		.loc 14 210 63
 3098 00a4 07F11803 		add	r3, r7, #24
 3099 00a8 1146     		mov	r1, r2
 3100 00aa 1846     		mov	r0, r3
 3101 00ac FFF7FEFF 		bl	_ZN8touchgfx9colortypeC1Em
 3102 00b0 BB69     		ldr	r3, [r7, #24]
 3103              	.LBE44:
 3104              	.LBE43:
 3105              		.loc 13 13 26
 3106 00b2 1946     		mov	r1, r3
 3107 00b4 2046     		mov	r0, r4
 3108 00b6 FFF7FEFF 		bl	_ZN8touchgfx3Box8setColorENS_9colortypeE
  14:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** 
  15:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     scrollableContainer1.setPosition(0, 0, 250, 250);
 3109              		.loc 13 15 37
 3110 00ba 7B68     		ldr	r3, [r7, #4]
 3111 00bc 03F16C00 		add	r0, r3, #108
 3112 00c0 FA23     		movs	r3, #250
 3113 00c2 0093     		str	r3, [sp]
 3114 00c4 FA23     		movs	r3, #250
 3115 00c6 0022     		movs	r2, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 102


 3116 00c8 0021     		movs	r1, #0
 3117 00ca FFF7FEFF 		bl	_ZN8touchgfx8Drawable11setPositionEssss
  16:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     scrollableContainer1.setScrollbarsColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
 3118              		.loc 13 16 44
 3119 00ce 7B68     		ldr	r3, [r7, #4]
 3120 00d0 03F16C04 		add	r4, r3, #108
 3121 00d4 0023     		movs	r3, #0
 3122 00d6 87F82430 		strb	r3, [r7, #36]
 3123 00da 0023     		movs	r3, #0
 3124 00dc 87F82330 		strb	r3, [r7, #35]
 3125 00e0 0023     		movs	r3, #0
 3126 00e2 87F82230 		strb	r3, [r7, #34]
 3127              	.LBB45:
 3128              	.LBB46:
 3129              		.loc 14 210 30
 3130 00e6 97F82430 		ldrb	r3, [r7, #36]	@ zero_extendqisi2
 3131              		.loc 14 210 34
 3132 00ea 1B04     		lsls	r3, r3, #16
 3133 00ec 1A46     		mov	r2, r3
 3134              		.loc 14 210 44
 3135 00ee 97F82330 		ldrb	r3, [r7, #35]	@ zero_extendqisi2
 3136              		.loc 14 210 50
 3137 00f2 1B02     		lsls	r3, r3, #8
 3138              		.loc 14 210 41
 3139 00f4 1A43     		orrs	r2, r2, r3
 3140              		.loc 14 210 59
 3141 00f6 97F82230 		ldrb	r3, [r7, #34]	@ zero_extendqisi2
 3142              		.loc 14 210 56
 3143 00fa 1343     		orrs	r3, r3, r2
 3144 00fc 43F07F42 		orr	r2, r3, #-16777216
 3145              		.loc 14 210 63
 3146 0100 07F11403 		add	r3, r7, #20
 3147 0104 1146     		mov	r1, r2
 3148 0106 1846     		mov	r0, r3
 3149 0108 FFF7FEFF 		bl	_ZN8touchgfx9colortypeC1Em
 3150 010c 7B69     		ldr	r3, [r7, #20]
 3151              	.LBE46:
 3152              	.LBE45:
 3153              		.loc 13 16 44
 3154 010e 1946     		mov	r1, r3
 3155 0110 2046     		mov	r0, r4
 3156 0112 FFF7FEFF 		bl	_ZN8touchgfx19ScrollableContainer18setScrollbarsColorENS_9colortypeE
  17:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** 
  18:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     circle1.setPosition(80, 65, 80, 80);
 3157              		.loc 13 18 24
 3158 0116 7B68     		ldr	r3, [r7, #4]
 3159 0118 03F59470 		add	r0, r3, #296
 3160 011c 5023     		movs	r3, #80
 3161 011e 0093     		str	r3, [sp]
 3162 0120 5023     		movs	r3, #80
 3163 0122 4122     		movs	r2, #65
 3164 0124 5021     		movs	r1, #80
 3165 0126 FFF7FEFF 		bl	_ZN8touchgfx8Drawable11setPositionEssss
  19:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     circle1.setCenter(40, 40);
 3166              		.loc 13 19 22
 3167 012a 7B68     		ldr	r3, [r7, #4]
 3168 012c 03F59473 		add	r3, r3, #296
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 103


 3169 0130 2822     		movs	r2, #40
 3170 0132 2821     		movs	r1, #40
 3171 0134 1846     		mov	r0, r3
 3172 0136 FFF7FEFF 		bl	_ZN8touchgfx6Circle9setCenterIiEEvT_S2_
  20:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     circle1.setRadius(40);
 3173              		.loc 13 20 22
 3174 013a 7B68     		ldr	r3, [r7, #4]
 3175 013c 03F59473 		add	r3, r3, #296
 3176 0140 2821     		movs	r1, #40
 3177 0142 1846     		mov	r0, r3
 3178 0144 FFF7FEFF 		bl	_ZN8touchgfx6Circle9setRadiusIiEEvT_
  21:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     circle1.setLineWidth(0);
 3179              		.loc 13 21 25
 3180 0148 7B68     		ldr	r3, [r7, #4]
 3181 014a 03F59473 		add	r3, r3, #296
 3182 014e 0021     		movs	r1, #0
 3183 0150 1846     		mov	r0, r3
 3184 0152 FFF7FEFF 		bl	_ZN8touchgfx6Circle12setLineWidthIiEEvT_
  22:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     circle1.setArc(0, 360);
 3185              		.loc 13 22 19
 3186 0156 7B68     		ldr	r3, [r7, #4]
 3187 0158 03F59473 		add	r3, r3, #296
 3188 015c 4FF4B472 		mov	r2, #360
 3189 0160 0021     		movs	r1, #0
 3190 0162 1846     		mov	r0, r3
 3191 0164 FFF7FEFF 		bl	_ZN8touchgfx6Circle6setArcIiEEvT_S2_
  23:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     circle1Painter.setColor(touchgfx::Color::getColorFromRGB(235, 5, 5));
 3192              		.loc 13 23 28
 3193 0168 7B68     		ldr	r3, [r7, #4]
 3194 016a 03F5BA74 		add	r4, r3, #372
 3195 016e EB23     		movs	r3, #235
 3196 0170 87F82730 		strb	r3, [r7, #39]
 3197 0174 0523     		movs	r3, #5
 3198 0176 87F82630 		strb	r3, [r7, #38]
 3199 017a 0523     		movs	r3, #5
 3200 017c 87F82530 		strb	r3, [r7, #37]
 3201              	.LBB47:
 3202              	.LBB48:
 3203              		.loc 14 210 30
 3204 0180 97F82730 		ldrb	r3, [r7, #39]	@ zero_extendqisi2
 3205              		.loc 14 210 34
 3206 0184 1B04     		lsls	r3, r3, #16
 3207 0186 1A46     		mov	r2, r3
 3208              		.loc 14 210 44
 3209 0188 97F82630 		ldrb	r3, [r7, #38]	@ zero_extendqisi2
 3210              		.loc 14 210 50
 3211 018c 1B02     		lsls	r3, r3, #8
 3212              		.loc 14 210 41
 3213 018e 1A43     		orrs	r2, r2, r3
 3214              		.loc 14 210 59
 3215 0190 97F82530 		ldrb	r3, [r7, #37]	@ zero_extendqisi2
 3216              		.loc 14 210 56
 3217 0194 1343     		orrs	r3, r3, r2
 3218 0196 43F07F42 		orr	r2, r3, #-16777216
 3219              		.loc 14 210 63
 3220 019a 07F11003 		add	r3, r7, #16
 3221 019e 1146     		mov	r1, r2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 104


 3222 01a0 1846     		mov	r0, r3
 3223 01a2 FFF7FEFF 		bl	_ZN8touchgfx9colortypeC1Em
 3224 01a6 3B69     		ldr	r3, [r7, #16]
 3225              	.LBE48:
 3226              	.LBE47:
 3227              		.loc 13 23 28
 3228 01a8 1946     		mov	r1, r3
 3229 01aa 2046     		mov	r0, r4
 3230 01ac FFF7FEFF 		bl	_ZN8touchgfx13PainterRGB5658setColorENS_9colortypeE
  24:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     circle1.setPainter(circle1Painter);
 3231              		.loc 13 24 23
 3232 01b0 7B68     		ldr	r3, [r7, #4]
 3233 01b2 03F59472 		add	r2, r3, #296
 3234 01b6 7B68     		ldr	r3, [r7, #4]
 3235 01b8 03F5BA73 		add	r3, r3, #372
 3236 01bc 1946     		mov	r1, r3
 3237 01be 1046     		mov	r0, r2
 3238 01c0 FFF7FEFF 		bl	_ZN8touchgfx12CanvasWidget10setPainterERNS_15AbstractPainterE
  25:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** 
  26:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     add(__background);
 3239              		.loc 13 26 8
 3240 01c4 7A68     		ldr	r2, [r7, #4]
 3241 01c6 7B68     		ldr	r3, [r7, #4]
 3242 01c8 4033     		adds	r3, r3, #64
 3243 01ca 1946     		mov	r1, r3
 3244 01cc 1046     		mov	r0, r2
 3245 01ce FFF7FEFF 		bl	_ZN8touchgfx6Screen3addERNS_8DrawableE
  27:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     add(scrollableContainer1);
 3246              		.loc 13 27 8
 3247 01d2 7A68     		ldr	r2, [r7, #4]
 3248 01d4 7B68     		ldr	r3, [r7, #4]
 3249 01d6 6C33     		adds	r3, r3, #108
 3250 01d8 1946     		mov	r1, r3
 3251 01da 1046     		mov	r0, r2
 3252 01dc FFF7FEFF 		bl	_ZN8touchgfx6Screen3addERNS_8DrawableE
  28:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp ****     add(circle1);
 3253              		.loc 13 28 8
 3254 01e0 7A68     		ldr	r2, [r7, #4]
 3255 01e2 7B68     		ldr	r3, [r7, #4]
 3256 01e4 03F59473 		add	r3, r3, #296
 3257 01e8 1946     		mov	r1, r3
 3258 01ea 1046     		mov	r0, r2
 3259 01ec FFF7FEFF 		bl	_ZN8touchgfx6Screen3addERNS_8DrawableE
 3260              	.LBE42:
  29:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** }
 3261              		.loc 13 29 1
 3262 01f0 7B68     		ldr	r3, [r7, #4]
 3263 01f2 1846     		mov	r0, r3
 3264 01f4 2C37     		adds	r7, r7, #44
 3265              	.LCFI293:
 3266              		.cfi_def_cfa_offset 12
 3267 01f6 BD46     		mov	sp, r7
 3268              	.LCFI294:
 3269              		.cfi_def_cfa_register 13
 3270              		@ sp needed
 3271 01f8 90BD     		pop	{r4, r7, pc}
 3272              	.L130:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 105


 3273 01fa 00BF     		.align	2
 3274              	.L129:
 3275 01fc 08000000 		.word	_ZTV14screenViewBase+8
 3276              		.cfi_endproc
 3277              	.LFE781:
 3279              		.global	_ZN14screenViewBaseC1Ev
 3280              		.thumb_set _ZN14screenViewBaseC1Ev,_ZN14screenViewBaseC2Ev
 3281              		.section	.text._ZN14screenViewBase11setupScreenEv,"ax",%progbits
 3282              		.align	1
 3283              		.global	_ZN14screenViewBase11setupScreenEv
 3284              		.syntax unified
 3285              		.thumb
 3286              		.thumb_func
 3287              		.fpu fpv4-sp-d16
 3289              	_ZN14screenViewBase11setupScreenEv:
 3290              	.LFB783:
  30:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** 
  31:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** void screenViewBase::setupScreen()
  32:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** {
 3291              		.loc 13 32 1
 3292              		.cfi_startproc
 3293              		@ args = 0, pretend = 0, frame = 8
 3294              		@ frame_needed = 1, uses_anonymous_args = 0
 3295              		@ link register save eliminated.
 3296 0000 80B4     		push	{r7}
 3297              	.LCFI295:
 3298              		.cfi_def_cfa_offset 4
 3299              		.cfi_offset 7, -4
 3300 0002 83B0     		sub	sp, sp, #12
 3301              	.LCFI296:
 3302              		.cfi_def_cfa_offset 16
 3303 0004 00AF     		add	r7, sp, #0
 3304              	.LCFI297:
 3305              		.cfi_def_cfa_register 7
 3306 0006 7860     		str	r0, [r7, #4]
  33:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** 
  34:Src/generated/gui_generated/src/screen_screen/screenViewBase.cpp **** }
 3307              		.loc 13 34 1
 3308 0008 00BF     		nop
 3309 000a 0C37     		adds	r7, r7, #12
 3310              	.LCFI298:
 3311              		.cfi_def_cfa_offset 4
 3312 000c BD46     		mov	sp, r7
 3313              	.LCFI299:
 3314              		.cfi_def_cfa_register 13
 3315              		@ sp needed
 3316 000e 5DF8047B 		ldr	r7, [sp], #4
 3317              	.LCFI300:
 3318              		.cfi_restore 7
 3319              		.cfi_def_cfa_offset 0
 3320 0012 7047     		bx	lr
 3321              		.cfi_endproc
 3322              	.LFE783:
 3324              		.section	.text._ZN8touchgfx6Circle9setCenterIiEEvT_S2_,"axG",%progbits,_ZN8touchgfx6Circle9setCent
 3325              		.align	1
 3326              		.weak	_ZN8touchgfx6Circle9setCenterIiEEvT_S2_
 3327              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 106


 3328              		.thumb
 3329              		.thumb_func
 3330              		.fpu fpv4-sp-d16
 3332              	_ZN8touchgfx6Circle9setCenterIiEEvT_S2_:
 3333              	.LFB790:
 3334              		.file 15 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  * @file touchgfx/widgets/canvas/Circle.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  * Declares the touchgfx::Circle class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** #ifndef TOUCHGFX_CIRCLE_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** #define TOUCHGFX_CIRCLE_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** #include <touchgfx/widgets/canvas/CWRUtil.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** #include <touchgfx/widgets/canvas/Canvas.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** #include <touchgfx/widgets/canvas/CanvasWidget.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** namespace touchgfx
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** {
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** /**
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  * Simple widget capable of drawing a circle, or part of a circle (an arc). The Circle can be
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  * filled or be drawn as a simple line along the circumference of the circle. Several
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  * parameters of the circle can be changed: Center, radius, line width, line cap, start
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  * angle and end angle.
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  * @note Since the underlying CanwasWidgetRenderer only supports straight lines, the circle is
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *       drawn using many small straight lines segments. The granularity can be adjusted to
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *       match the requirements - large circles need more line segments, small circles need
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *       fewer line segments, to look smooth and round.
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  * @note All circle parameters are internally handled as CWRUtil::Q5 which means that floating
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *       point values are rounded down to a fixed number of binary digits, for example:
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *       @code
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *            Circle circle;
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *            circle.setCircle(1.1f, 1.1f, 0.9); // Will use (35/32, 35/32, 28/32) = (1.09375f, 1.0
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *            int x, y, r;
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *            circle.getCenter(&amp;x, &amp;y); // Will return (1, 1)
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *            circle.getRadius(&amp;r); // Will return 0
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  *       @endcode.
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****  */
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** class Circle : public CanvasWidget
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** {
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** public:
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     Circle();
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 107


  52:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the center and radius of the Circle.
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  x The x coordinate of center.
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  y The y coordinate of center.
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  r The radius.
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setCenter, setRadius
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the Circle is not invalidated.
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setCircle(const T x, const T y, const T r)
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         setCenter<T>(x, y);
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         setRadius<T>(r);
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the center and radius of the Circle.
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  x The x coordinate of center.
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  y The y coordinate of center.
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  r The radius.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setCenter, setRadius
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the Circle is not invalidated.
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setCircle(const int16_t x, const int16_t y, const int16_t r)
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         setCircle<int>(x, y, r);
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the center of the Circle.
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  x The x coordinate of center.
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  y The y coordinate of center.
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setRadius, setCircle, getCenter
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the Circle is not invalidated.
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setCenter(const T x, const T y)
 3335              		.loc 15 100 10
 3336              		.cfi_startproc
 3337              		@ args = 0, pretend = 0, frame = 32
 3338              		@ frame_needed = 1, uses_anonymous_args = 0
 3339 0000 80B5     		push	{r7, lr}
 3340              	.LCFI301:
 3341              		.cfi_def_cfa_offset 8
 3342              		.cfi_offset 7, -8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 108


 3343              		.cfi_offset 14, -4
 3344 0002 88B0     		sub	sp, sp, #32
 3345              	.LCFI302:
 3346              		.cfi_def_cfa_offset 40
 3347 0004 00AF     		add	r7, sp, #0
 3348              	.LCFI303:
 3349              		.cfi_def_cfa_register 7
 3350 0006 F860     		str	r0, [r7, #12]
 3351 0008 B960     		str	r1, [r7, #8]
 3352 000a 7A60     		str	r2, [r7, #4]
 3353 000c BB68     		ldr	r3, [r7, #8]
 3354 000e BB61     		str	r3, [r7, #24]
 3355              	.LBB49:
 3356              	.LBB50:
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Constructor from Q10. The Q10 is shifted down to convert it to Q5, thus the value is
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * rounded down in the conversion.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q10 The Q10 value to convert to a Q5 value.
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @see Q10
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5(const Q10 q10)
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             : v(int(q10) / Rasterizer::POLY_BASE_SIZE)
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Gets the Q5 as an integer without conversion.
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The unconverted Q5 value.
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         operator int() const
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return v;
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Negation operator.
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The negative value of this.
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5 operator-() const
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q5(-v);
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Addition operator.
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q5 The Q5 to add to this.
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5 operator+(const Q5& q5) const
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 109


 117:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q5(v + q5.v);
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Subtraction operator.
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q5 The Q5 to subtract from this.
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5 operator-(const Q5& q5) const
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q5(v - q5.v);
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Multiplication operator. The result is a Q10, not a Q5, for increased precision.
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q5 The Q5 to multiply this with.
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @see Q10
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q10 operator*(const Q5& q5) const
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q10(v * q5.v);
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Multiplication operator. Often used in relation with sine and cosine calculation
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * which are pre-calculated as Q15. As the result is needed as a Q5, this
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * operator multiplies with the given Q15 and converts the result to a Q5.
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q15 The Q15 to multiply this with.
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @see Q15
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5 operator*(const Q15& q15) const
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             int32_t remainder;
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q5(muldiv(v, int(q15), Rasterizer::POLY_BASE_SIZE* Rasterizer::POLY_BASE_SIZE* R
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Multiplication operator.
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  i The integer to multiply this with.
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5 operator*(const int i) const
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q5(v * i);
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 110


 174:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Division operator.
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  i The integer to divide this by.
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5 operator/(const int i) const
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q5(v / i);
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Division operator. Internally this Q5 is converted to Q10 before the division to
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * increased precision.
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q5 The Q5 to divide this by.
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @see Q10
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5 operator/(const Q5 q5) const
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q5(v * Rasterizer::POLY_BASE_SIZE / q5.v);
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Convert the Q5 value to an integer by removing the 5 bits used for the fraction, or
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * to a floating point value by dividing by 32, depending on the type specified as T.
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @tparam T Either int or float.
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return Q5 value as a type T.
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @note Using "to<int16_t>()" result in loss of precision. Use "(int16_t)to<int>()" instea
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         template <typename T>
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         T to() const
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return (T)((T)v / (T)Rasterizer::POLY_BASE_SIZE);
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Convert the Q5 value to an integer by removing the 5 bits used for the fraction. The
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * number is rounded up to the nearest integer.
 221:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The first integer value higher than (or equal to) the Q5 value.
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         int ceil() const
 225:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return v < 0 ? to<int>() : (v + (Rasterizer::POLY_BASE_SIZE - 1)) / Rasterizer::POLY_BA
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Round the Q5 value to the nearest integer value.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 111


 231:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The integer closest to the Q5 value.
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 234:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         int round() const
 235:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return v < 0 ? Q5((v + 1) - toQ5(1).v / 2).to<int>() : Q5(v + toQ5(1).v / 2).to<int>();
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     private:
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         int32_t v;
 241:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     };
 242:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 243:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     /**
 244:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Defines a "floating point number" with 10 bits reserved for the fractional part of
 245:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * the decimal number. Q10 implements some simple arithmetic operations, most yielding a
 246:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Q10 number and some yielding a Q5 number or a Q15 number as a result.
 247:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
 248:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Q5*Q5=Q10, Q10/Q5=Q5, ...
 249:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
 250:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * @see Q5, Q15
 251:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      */
 252:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     class Q10
 253:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     {
 254:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     public:
 255:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /** Initializes a new instance of the Q10 class. */
 256:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q10()
 257:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             : v(0)
 258:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 259:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 260:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 261:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 262:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Constructor from integer. No conversion is done - the integer is assumed to already
 263:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * be in Q10 format.
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  i int pre-formattet in Q10 format.
 266:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 267:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         explicit Q10(int i)
 268:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             : v(i)
 269:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 270:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 271:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 272:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 273:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Gets the Q10 as an integer without conversion.
 274:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 275:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The unconverted Q10 value.
 276:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 277:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         operator int() const
 278:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 279:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return v;
 280:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 281:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 282:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 283:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Negation operator.
 284:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 285:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The negative value of this.
 286:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 287:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q10 operator-() const
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 112


 288:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 289:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q10(-v);
 290:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 291:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 292:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 293:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Addition operator.
 294:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 295:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q10 The Q10 to add to this.
 296:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 297:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 298:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 299:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q10 operator+(const Q10& q10) const
 300:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 301:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q10(v + q10.v);
 302:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 303:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 304:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 305:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Multiplication operator. The result is a Q15, not a Q10, for increased precision.
 306:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 307:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q5 The Q5 to multiply this with.
 308:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 309:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 310:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 311:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q15 operator*(const Q5& q5) const
 312:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 313:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q15(v * int(q5));
 314:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 315:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 316:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 317:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Division operator.
 318:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 319:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q5 The Q5 to divide this by.
 320:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 321:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 322:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 323:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q5 operator/(const Q5& q5) const
 324:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 325:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q5(v / int(q5));
 326:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 327:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 328:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 329:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Converts the Q10 value to an int or a float.
 330:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 331:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Convert the Q10 value to an integer by removing the 10 bits used for the
 332:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * fraction, or to a floating point value by dividing by 32 * 32, depending on
 333:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * the type specified as T.
 334:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 335:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @tparam T Either int or float.
 336:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 337:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return Q10 value as a type T.
 338:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 339:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         template <typename T>
 340:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         T to() const
 341:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 342:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return (T)(v / (Rasterizer::POLY_BASE_SIZE * Rasterizer::POLY_BASE_SIZE));
 343:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 344:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 113


 345:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     private:
 346:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         int32_t v;
 347:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     };
 348:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 349:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     /**
 350:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Defines a "floating point number" with 15 bits reserved for the fractional part of
 351:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * the decimal number. Q15 is only used for sine/cosine and for intermediate
 352:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * calculations when multiplying.
 353:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
 354:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Q5*Q5=Q10, Q10/Q5=Q5, ...
 355:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
 356:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * @see Q5, Q10
 357:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      */
 358:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     class Q15
 359:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     {
 360:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     public:
 361:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 362:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Constructor from integer. No conversion is done - the integer is assumed to already
 363:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * be in Q15 format.
 364:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 365:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  i int pre-formattet in Q15 format.
 366:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 367:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         explicit Q15(int i)
 368:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             : v(i)
 369:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 370:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 371:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 372:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 373:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Gets the Q15 as an integer without conversion.
 374:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 375:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The unconverted Q15 value.
 376:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 377:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         operator int() const
 378:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 379:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return v;
 380:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 381:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 382:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 383:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Negation operator.
 384:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 385:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The negative value of this.
 386:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 387:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q15 operator-() const
 388:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 389:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q15(-v);
 390:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 391:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 392:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 393:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Addition operator.
 394:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 395:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q15 The Q15 to add to this.
 396:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 397:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 398:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 399:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q15 operator+(const Q15& q15) const
 400:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 401:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q15(v + q15.v);
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 114


 402:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 403:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 404:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         /**
 405:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * Calculate Q15 / Q5 as a Q10.
 406:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 407:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @param  q5 The Q5 to divide this by.
 408:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          *
 409:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          * @return The result of the operation.
 410:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****          */
 411:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         Q10 operator/(const Q5& q5) const
 412:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         {
 413:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****             return Q10(v / int(q5));
 414:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         }
 415:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 416:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     private:
 417:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         int32_t v;
 418:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     };
 419:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 420:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     /**
 421:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Convert a Q5 to itself. Allows toQ5 to be called with a variable that is already Q5.
 422:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
 423:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * @param  value the Q5.
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
 425:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * @return the value passed.
 426:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      */
 427:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     FORCE_INLINE_FUNCTION static Q5 toQ5(Q5 value)
 428:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     {
 429:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         return value;
 430:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     }
 431:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** 
 432:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     /**
 433:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * Convert an integer to a fixed point number. This is done by multiplying
 434:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * the floating point value by (1 << 5)
 435:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
 436:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * @tparam T Should be either int or float.
 437:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * @param value the integer to convert.
 438:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      *
 439:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      * @return the converted integer.
 440:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****      */
 441:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** #ifdef __ICCARM__
 442:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     FORCE_INLINE_FUNCTION
 443:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     template <typename T>
 444:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** #else
 445:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     template <typename T>
 446:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     FORCE_INLINE_FUNCTION
 447:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp **** #endif
 448:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     static Q5 toQ5(T value)
 449:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****     {
 450:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp ****         return Q5(int(value * Rasterizer::POLY_BASE_SIZE));
 3357              		.loc 8 450 16
 3358 0010 BB69     		ldr	r3, [r7, #24]
 3359 0012 5A01     		lsls	r2, r3, #5
 3360 0014 07F11403 		add	r3, r7, #20
 3361 0018 1146     		mov	r1, r2
 3362 001a 1846     		mov	r0, r3
 3363 001c FFF7FEFF 		bl	_ZN8touchgfx7CWRUtil2Q5C1Ei
 3364              		.loc 8 450 58
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 115


 3365 0020 7B69     		ldr	r3, [r7, #20]
 3366 0022 1A46     		mov	r2, r3
 3367              	.LBE50:
 3368              	.LBE49:
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         this->circleCenterX = CWRUtil::toQ5(x);
 3369              		.loc 15 102 44
 3370 0024 FB68     		ldr	r3, [r7, #12]
 3371 0026 1A63     		str	r2, [r3, #48]
 3372 0028 7B68     		ldr	r3, [r7, #4]
 3373 002a FB61     		str	r3, [r7, #28]
 3374              	.LBB51:
 3375              	.LBB52:
 3376              		.loc 8 450 16
 3377 002c FB69     		ldr	r3, [r7, #28]
 3378 002e 5A01     		lsls	r2, r3, #5
 3379 0030 07F11003 		add	r3, r7, #16
 3380 0034 1146     		mov	r1, r2
 3381 0036 1846     		mov	r0, r3
 3382 0038 FFF7FEFF 		bl	_ZN8touchgfx7CWRUtil2Q5C1Ei
 3383              		.loc 8 450 58
 3384 003c 3B69     		ldr	r3, [r7, #16]
 3385 003e 1A46     		mov	r2, r3
 3386              	.LBE52:
 3387              	.LBE51:
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         this->circleCenterY = CWRUtil::toQ5(y);
 3388              		.loc 15 103 44
 3389 0040 FB68     		ldr	r3, [r7, #12]
 3390 0042 5A63     		str	r2, [r3, #52]
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 3391              		.loc 15 104 5
 3392 0044 00BF     		nop
 3393 0046 2037     		adds	r7, r7, #32
 3394              	.LCFI304:
 3395              		.cfi_def_cfa_offset 8
 3396 0048 BD46     		mov	sp, r7
 3397              	.LCFI305:
 3398              		.cfi_def_cfa_register 13
 3399              		@ sp needed
 3400 004a 80BD     		pop	{r7, pc}
 3401              		.cfi_endproc
 3402              	.LFE790:
 3404              		.section	.text._ZN8touchgfx6Circle6setArcIiEEvT_S2_,"axG",%progbits,_ZN8touchgfx6Circle6setArcIiEE
 3405              		.align	1
 3406              		.weak	_ZN8touchgfx6Circle6setArcIiEEvT_S2_
 3407              		.syntax unified
 3408              		.thumb
 3409              		.thumb_func
 3410              		.fpu fpv4-sp-d16
 3412              	_ZN8touchgfx6Circle6setArcIiEEvT_S2_:
 3413              	.LFB792:
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the center of the Circle.
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  x The x coordinate of center.
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  y The y coordinate of center.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 116


 111:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setRadius, setCircle, getCenter
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the Circle is not invalidated.
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setCenter(const int16_t x, const int16_t y)
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         setCenter<int>(x, y);
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the center of the circle / arc in the middle of a pixel. Normally the coordinate is
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * between pixel number x and x+1 horizontally and between pixel y and y+1 vertically. This
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * function will set the center in the middle of the pixel by adding 0.5 to both x and y.
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  x The x coordinate of the center of the circle.
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  y The y coordinate of the center of the circle.
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setPixelCenter(int x, int y)
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         int32_t half = (int32_t)CWRUtil::toQ5(1) / 2;
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         setCenter<CWRUtil::Q5>(CWRUtil::Q5((int32_t)CWRUtil::toQ5(x) + half), CWRUtil::Q5((int32_t)
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Gets the center coordinates of the Circle.
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param [out] x The x coordinate of the center rounded down to the precision of T.
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param [out] y The y coordinate of the center rounded down to the precision of T.
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setCenter
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void getCenter(T& x, T& y) const
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         x = circleCenterX.to<T>();
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         y = circleCenterY.to<T>();
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the radius of the Circle.
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  r The radius.
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setCircle, setCenter, getRadius
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the Circle is not invalidated.
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setRadius(const T r)
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         this->circleRadius = CWRUtil::toQ5(r);
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 117


 168:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Gets the radius of the Circle.
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param [out] r The radius rounded down to the precision of T.
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void getRadius(T& r) const
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         r = circleRadius.to<T>();
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the start and end angles in degrees of the Circle arc. 0 degrees is straight up
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * (12 o'clock) and 90 degrees is to the left (3 o'clock). Any positive or negative
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * degrees can be used to specify the part of the Circle to draw.
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  startAngle The start degrees.
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  endAngle   The end degrees.
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see getArc, updateArcStart, updateArcEnd, updateArc
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the Circle is not invalidated.
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setArc(const T startAngle, const T endAngle)
 3414              		.loc 15 193 10
 3415              		.cfi_startproc
 3416              		@ args = 0, pretend = 0, frame = 32
 3417              		@ frame_needed = 1, uses_anonymous_args = 0
 3418 0000 80B5     		push	{r7, lr}
 3419              	.LCFI306:
 3420              		.cfi_def_cfa_offset 8
 3421              		.cfi_offset 7, -8
 3422              		.cfi_offset 14, -4
 3423 0002 88B0     		sub	sp, sp, #32
 3424              	.LCFI307:
 3425              		.cfi_def_cfa_offset 40
 3426 0004 00AF     		add	r7, sp, #0
 3427              	.LCFI308:
 3428              		.cfi_def_cfa_register 7
 3429 0006 F860     		str	r0, [r7, #12]
 3430 0008 B960     		str	r1, [r7, #8]
 3431 000a 7A60     		str	r2, [r7, #4]
 3432 000c BB68     		ldr	r3, [r7, #8]
 3433 000e BB61     		str	r3, [r7, #24]
 3434              	.LBB53:
 3435              	.LBB54:
 3436              		.loc 8 450 16
 3437 0010 BB69     		ldr	r3, [r7, #24]
 3438 0012 5A01     		lsls	r2, r3, #5
 3439 0014 07F11403 		add	r3, r7, #20
 3440 0018 1146     		mov	r1, r2
 3441 001a 1846     		mov	r0, r3
 3442 001c FFF7FEFF 		bl	_ZN8touchgfx7CWRUtil2Q5C1Ei
 3443              		.loc 8 450 58
 3444 0020 7B69     		ldr	r3, [r7, #20]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 118


 3445 0022 1A46     		mov	r2, r3
 3446              	.LBE54:
 3447              	.LBE53:
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         circleArcAngleStart = CWRUtil::toQ5(startAngle);
 3448              		.loc 15 195 44
 3449 0024 FB68     		ldr	r3, [r7, #12]
 3450 0026 DA63     		str	r2, [r3, #60]
 3451 0028 7B68     		ldr	r3, [r7, #4]
 3452 002a FB61     		str	r3, [r7, #28]
 3453              	.LBB55:
 3454              	.LBB56:
 3455              		.loc 8 450 16
 3456 002c FB69     		ldr	r3, [r7, #28]
 3457 002e 5A01     		lsls	r2, r3, #5
 3458 0030 07F11003 		add	r3, r7, #16
 3459 0034 1146     		mov	r1, r2
 3460 0036 1846     		mov	r0, r3
 3461 0038 FFF7FEFF 		bl	_ZN8touchgfx7CWRUtil2Q5C1Ei
 3462              		.loc 8 450 58
 3463 003c 3B69     		ldr	r3, [r7, #16]
 3464 003e 1A46     		mov	r2, r3
 3465              	.LBE56:
 3466              	.LBE55:
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         circleArcAngleEnd = CWRUtil::toQ5(endAngle);
 3467              		.loc 15 196 42
 3468 0040 FB68     		ldr	r3, [r7, #12]
 3469 0042 1A64     		str	r2, [r3, #64]
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 3470              		.loc 15 197 5
 3471 0044 00BF     		nop
 3472 0046 2037     		adds	r7, r7, #32
 3473              	.LCFI309:
 3474              		.cfi_def_cfa_offset 8
 3475 0048 BD46     		mov	sp, r7
 3476              	.LCFI310:
 3477              		.cfi_def_cfa_register 13
 3478              		@ sp needed
 3479 004a 80BD     		pop	{r7, pc}
 3480              		.cfi_endproc
 3481              	.LFE792:
 3483              		.section	.text._ZN8touchgfx4ViewI15screenPresenterEC2Ev,"axG",%progbits,_ZN8touchgfx4ViewI15screen
 3484              		.align	1
 3485              		.weak	_ZN8touchgfx4ViewI15screenPresenterEC2Ev
 3486              		.syntax unified
 3487              		.thumb
 3488              		.thumb_func
 3489              		.fpu fpv4-sp-d16
 3491              	_ZN8touchgfx4ViewI15screenPresenterEC2Ev:
 3492              	.LFB794:
  37:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** {
  38:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** public:
  39:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     View()
 3493              		.loc 11 39 5
 3494              		.cfi_startproc
 3495              		@ args = 0, pretend = 0, frame = 8
 3496              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 119


 3497 0000 80B5     		push	{r7, lr}
 3498              	.LCFI311:
 3499              		.cfi_def_cfa_offset 8
 3500              		.cfi_offset 7, -8
 3501              		.cfi_offset 14, -4
 3502 0002 82B0     		sub	sp, sp, #8
 3503              	.LCFI312:
 3504              		.cfi_def_cfa_offset 16
 3505 0004 00AF     		add	r7, sp, #0
 3506              	.LCFI313:
 3507              		.cfi_def_cfa_register 7
 3508 0006 7860     		str	r0, [r7, #4]
 3509              	.LBB57:
  40:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****         : presenter(0)
 3510              		.loc 11 40 22
 3511 0008 7B68     		ldr	r3, [r7, #4]
 3512 000a 1846     		mov	r0, r3
 3513 000c FFF7FEFF 		bl	_ZN8touchgfx6ScreenC2Ev
 3514 0010 054A     		ldr	r2, .L140
 3515 0012 7B68     		ldr	r3, [r7, #4]
 3516 0014 1A60     		str	r2, [r3]
 3517 0016 7B68     		ldr	r3, [r7, #4]
 3518 0018 0022     		movs	r2, #0
 3519 001a DA63     		str	r2, [r3, #60]
 3520              	.LBE57:
  41:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     {
  42:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     }
 3521              		.loc 11 42 5
 3522 001c 7B68     		ldr	r3, [r7, #4]
 3523 001e 1846     		mov	r0, r3
 3524 0020 0837     		adds	r7, r7, #8
 3525              	.LCFI314:
 3526              		.cfi_def_cfa_offset 8
 3527 0022 BD46     		mov	sp, r7
 3528              	.LCFI315:
 3529              		.cfi_def_cfa_register 13
 3530              		@ sp needed
 3531 0024 80BD     		pop	{r7, pc}
 3532              	.L141:
 3533 0026 00BF     		.align	2
 3534              	.L140:
 3535 0028 08000000 		.word	_ZTVN8touchgfx4ViewI15screenPresenterEE+8
 3536              		.cfi_endproc
 3537              	.LFE794:
 3539              		.weak	_ZN8touchgfx4ViewI15screenPresenterEC1Ev
 3540              		.thumb_set _ZN8touchgfx4ViewI15screenPresenterEC1Ev,_ZN8touchgfx4ViewI15screenPresenterEC2Ev
 3541              		.section	.text._ZN8touchgfx6Circle9setRadiusIiEEvT_,"axG",%progbits,_ZN8touchgfx6Circle9setRadiusI
 3542              		.align	1
 3543              		.weak	_ZN8touchgfx6Circle9setRadiusIiEEvT_
 3544              		.syntax unified
 3545              		.thumb
 3546              		.thumb_func
 3547              		.fpu fpv4-sp-d16
 3549              	_ZN8touchgfx6Circle9setRadiusIiEEvT_:
 3550              	.LFB796:
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 3551              		.loc 15 162 10
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 120


 3552              		.cfi_startproc
 3553              		@ args = 0, pretend = 0, frame = 16
 3554              		@ frame_needed = 1, uses_anonymous_args = 0
 3555 0000 80B5     		push	{r7, lr}
 3556              	.LCFI316:
 3557              		.cfi_def_cfa_offset 8
 3558              		.cfi_offset 7, -8
 3559              		.cfi_offset 14, -4
 3560 0002 84B0     		sub	sp, sp, #16
 3561              	.LCFI317:
 3562              		.cfi_def_cfa_offset 24
 3563 0004 00AF     		add	r7, sp, #0
 3564              	.LCFI318:
 3565              		.cfi_def_cfa_register 7
 3566 0006 7860     		str	r0, [r7, #4]
 3567 0008 3960     		str	r1, [r7]
 3568 000a 3B68     		ldr	r3, [r7]
 3569 000c FB60     		str	r3, [r7, #12]
 3570              	.LBB58:
 3571              	.LBB59:
 3572              		.loc 8 450 16
 3573 000e FB68     		ldr	r3, [r7, #12]
 3574 0010 5A01     		lsls	r2, r3, #5
 3575 0012 07F10803 		add	r3, r7, #8
 3576 0016 1146     		mov	r1, r2
 3577 0018 1846     		mov	r0, r3
 3578 001a FFF7FEFF 		bl	_ZN8touchgfx7CWRUtil2Q5C1Ei
 3579              		.loc 8 450 58
 3580 001e BB68     		ldr	r3, [r7, #8]
 3581 0020 1A46     		mov	r2, r3
 3582              	.LBE59:
 3583              	.LBE58:
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 3584              		.loc 15 164 43
 3585 0022 7B68     		ldr	r3, [r7, #4]
 3586 0024 9A63     		str	r2, [r3, #56]
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 3587              		.loc 15 165 5
 3588 0026 00BF     		nop
 3589 0028 1037     		adds	r7, r7, #16
 3590              	.LCFI319:
 3591              		.cfi_def_cfa_offset 8
 3592 002a BD46     		mov	sp, r7
 3593              	.LCFI320:
 3594              		.cfi_def_cfa_register 13
 3595              		@ sp needed
 3596 002c 80BD     		pop	{r7, pc}
 3597              		.cfi_endproc
 3598              	.LFE796:
 3600              		.section	.text._ZN8touchgfx6Circle12setLineWidthIiEEvT_,"axG",%progbits,_ZN8touchgfx6Circle12setLi
 3601              		.align	1
 3602              		.weak	_ZN8touchgfx6Circle12setLineWidthIiEEvT_
 3603              		.syntax unified
 3604              		.thumb
 3605              		.thumb_func
 3606              		.fpu fpv4-sp-d16
 3608              	_ZN8touchgfx6Circle12setLineWidthIiEEvT_:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 121


 3609              	.LFB797:
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the start and end angles in degrees of the Circle arc. 0 degrees is straight up
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * (12 o'clock) and 90 degrees is to the left (3 o'clock). Any positive or negative
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * degrees can be used to specify the part of the Circle to draw.
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  startAngle The start degrees.
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  endAngle   The end degrees.
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see getArc, updateArcStart, updateArcEnd, updateArc
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the Circle is not invalidated.
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setArc(const int16_t startAngle, const int16_t endAngle)
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         setArc<int>(startAngle, endAngle);
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Gets the start and end angles in degrees for the circle arc.
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param [out] startAngle The start angle rounded down to the precision of T.
 221:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param [out] endAngle   The end angle rounded down to the precision of T.
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setArc
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 225:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void getArc(T& startAngle, T& endAngle) const
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         startAngle = circleArcAngleStart.to<T>();
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         endAngle = circleArcAngleEnd.to<T>();
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Gets the start angle in degrees for the arc.
 234:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 235:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @return The starting angle for the arc rounded down to an integer.
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see getArc, setArc
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     int16_t getArcStart() const
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 241:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         return circleArcAngleStart.to<int>();
 242:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 243:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 244:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 245:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Gets the start angle in degrees for the arc.
 246:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 247:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 248:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param [out] angle The starting angle rounded down to the precision of T.
 249:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 250:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see getArc, setArc
 251:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 252:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 253:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void getArcStart(T& angle) const
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 122


 254:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 255:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         angle = circleArcAngleStart.to<T>();
 256:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 257:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 258:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 259:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Gets the end angle in degrees for the arc.
 260:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 261:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @return The end angle for the arc rounded down to an integer.
 262:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 263:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see getArc, setArc
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     int16_t getArcEnd() const
 266:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 267:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         return circleArcAngleEnd.to<int>();
 268:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 269:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 270:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 271:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Gets the end angle in degrees for the arc.
 272:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 273:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 274:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param [out] angle The end angle rounded down to the precision of T.
 275:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 276:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 277:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void getArcEnd(T& angle) const
 278:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 279:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         angle = circleArcAngleEnd.to<T>();
 280:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 281:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 282:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 283:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Updates the start angle in degrees for this Circle arc.
 284:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 285:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 286:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  startAngle The start angle in degrees.
 287:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 288:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setArc, updateArcEnd, updateArc
 289:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 290:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the updated Circle arc is invalidated.
 291:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 292:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 293:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void updateArcStart(const T startAngle)
 294:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 295:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         CWRUtil::Q5 startAngleQ5 = CWRUtil::toQ5(startAngle);
 296:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         if (circleArcAngleStart == startAngleQ5)
 297:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         {
 298:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****             return;
 299:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         }
 300:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 301:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         Rect minimalRect = getMinimalRectForUpdatedStartAngle(startAngleQ5);
 302:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 303:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         circleArcAngleStart = startAngleQ5;
 304:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 305:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         invalidateRect(minimalRect);
 306:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 307:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 308:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 309:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Updates the end angle in degrees for this Circle arc.
 310:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 123


 311:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 312:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  endAngle The end angle in degrees.
 313:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 314:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setArc, updateArcStart, updateArc
 315:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 316:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the updated Circle arc is invalidated.
 317:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 318:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 319:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void updateArcEnd(const T endAngle)
 320:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 321:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         CWRUtil::Q5 endAngleQ5 = CWRUtil::toQ5(endAngle);
 322:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         if (circleArcAngleEnd == endAngleQ5)
 323:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         {
 324:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****             return;
 325:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         }
 326:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 327:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         Rect minimalRect = getMinimalRectForUpdatedEndAngle(endAngleQ5);
 328:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 329:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         circleArcAngleEnd = endAngleQ5;
 330:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 331:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         invalidateRect(minimalRect);
 332:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 333:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 334:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 335:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Updates the start and end angle in degrees for this Circle arc.
 336:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 337:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 338:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  startAngle The new start angle in degrees.
 339:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  endAngle   The new end angle in degrees.
 340:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 341:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @see setArc, getArc, updateArcStart, updateArcEnd
 342:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 343:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The areas containing the updated Circle arcs are invalidated. As little as possible
 344:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *       will be invalidated for best performance.
 345:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 346:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 347:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void updateArc(const T startAngle, const T endAngle)
 348:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 349:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         updateArc(CWRUtil::toQ5(startAngle), CWRUtil::toQ5(endAngle));
 350:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 351:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** 
 352:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     /**
 353:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * Sets the line width for this Circle. If the line width is set to zero, the circle
 354:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * will be filled.
 355:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 356:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @tparam T Generic type parameter, either int or float.
 357:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @param  width The width of the line measured in pixels.
 358:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *
 359:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note The area containing the Circle is not invalidated.
 360:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      * @note if the new line with is smaller than the old width, the circle should be invalidated
 361:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      *       before updating the width to ensure that the old circle is completely erased.
 362:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****      */
 363:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     template <typename T>
 364:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     void setLineWidth(const T width)
 3610              		.loc 15 364 10
 3611              		.cfi_startproc
 3612              		@ args = 0, pretend = 0, frame = 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 124


 3613              		@ frame_needed = 1, uses_anonymous_args = 0
 3614 0000 80B5     		push	{r7, lr}
 3615              	.LCFI321:
 3616              		.cfi_def_cfa_offset 8
 3617              		.cfi_offset 7, -8
 3618              		.cfi_offset 14, -4
 3619 0002 84B0     		sub	sp, sp, #16
 3620              	.LCFI322:
 3621              		.cfi_def_cfa_offset 24
 3622 0004 00AF     		add	r7, sp, #0
 3623              	.LCFI323:
 3624              		.cfi_def_cfa_register 7
 3625 0006 7860     		str	r0, [r7, #4]
 3626 0008 3960     		str	r1, [r7]
 3627 000a 3B68     		ldr	r3, [r7]
 3628 000c FB60     		str	r3, [r7, #12]
 3629              	.LBB60:
 3630              	.LBB61:
 3631              		.loc 8 450 16
 3632 000e FB68     		ldr	r3, [r7, #12]
 3633 0010 5A01     		lsls	r2, r3, #5
 3634 0012 07F10803 		add	r3, r7, #8
 3635 0016 1146     		mov	r1, r2
 3636 0018 1846     		mov	r0, r3
 3637 001a FFF7FEFF 		bl	_ZN8touchgfx7CWRUtil2Q5C1Ei
 3638              		.loc 8 450 58
 3639 001e BB68     		ldr	r3, [r7, #8]
 3640 0020 1A46     		mov	r2, r3
 3641              	.LBE61:
 3642              	.LBE60:
 365:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     {
 366:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****         this->circleLineWidth = CWRUtil::toQ5(width);
 3643              		.loc 15 366 46
 3644 0022 7B68     		ldr	r3, [r7, #4]
 3645 0024 5A64     		str	r2, [r3, #68]
 367:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp ****     }
 3646              		.loc 15 367 5
 3647 0026 00BF     		nop
 3648 0028 1037     		adds	r7, r7, #16
 3649              	.LCFI324:
 3650              		.cfi_def_cfa_offset 8
 3651 002a BD46     		mov	sp, r7
 3652              	.LCFI325:
 3653              		.cfi_def_cfa_register 13
 3654              		@ sp needed
 3655 002c 80BD     		pop	{r7, pc}
 3656              		.cfi_endproc
 3657              	.LFE797:
 3659              		.global	_ZTV14screenViewBase
 3660              		.section	.rodata._ZTV14screenViewBase,"a"
 3661              		.align	2
 3664              	_ZTV14screenViewBase:
 3665 0000 00000000 		.word	0
 3666 0004 00000000 		.word	0
 3667 0008 00000000 		.word	_ZN14screenViewBaseD1Ev
 3668 000c 00000000 		.word	_ZN14screenViewBaseD0Ev
 3669 0010 00000000 		.word	_ZN8touchgfx6Screen4drawERNS_4RectE
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 125


 3670 0014 00000000 		.word	_ZN14screenViewBase11setupScreenEv
 3671 0018 00000000 		.word	_ZN8touchgfx6Screen15afterTransitionEv
 3672 001c 00000000 		.word	_ZN8touchgfx6Screen14tearDownScreenEv
 3673 0020 00000000 		.word	_ZN8touchgfx6Screen16handleClickEventERKNS_10ClickEventE
 3674 0024 00000000 		.word	_ZN8touchgfx6Screen15handleDragEventERKNS_9DragEventE
 3675 0028 00000000 		.word	_ZN8touchgfx6Screen18handleGestureEventERKNS_12GestureEventE
 3676 002c 00000000 		.word	_ZN8touchgfx6Screen15handleTickEventEv
 3677 0030 00000000 		.word	_ZN8touchgfx6Screen14handleKeyEventEh
 3678              		.weak	_ZTVN8touchgfx4ViewI15screenPresenterEE
 3679              		.section	.rodata._ZTVN8touchgfx4ViewI15screenPresenterEE,"aG",%progbits,_ZTVN8touchgfx4ViewI15scre
 3680              		.align	2
 3683              	_ZTVN8touchgfx4ViewI15screenPresenterEE:
 3684 0000 00000000 		.word	0
 3685 0004 00000000 		.word	0
 3686 0008 00000000 		.word	_ZN8touchgfx4ViewI15screenPresenterED1Ev
 3687 000c 00000000 		.word	_ZN8touchgfx4ViewI15screenPresenterED0Ev
 3688 0010 00000000 		.word	_ZN8touchgfx6Screen4drawERNS_4RectE
 3689 0014 00000000 		.word	_ZN8touchgfx6Screen11setupScreenEv
 3690 0018 00000000 		.word	_ZN8touchgfx6Screen15afterTransitionEv
 3691 001c 00000000 		.word	_ZN8touchgfx6Screen14tearDownScreenEv
 3692 0020 00000000 		.word	_ZN8touchgfx6Screen16handleClickEventERKNS_10ClickEventE
 3693 0024 00000000 		.word	_ZN8touchgfx6Screen15handleDragEventERKNS_9DragEventE
 3694 0028 00000000 		.word	_ZN8touchgfx6Screen18handleGestureEventERKNS_12GestureEventE
 3695 002c 00000000 		.word	_ZN8touchgfx6Screen15handleTickEventEv
 3696 0030 00000000 		.word	_ZN8touchgfx6Screen14handleKeyEventEh
 3697              		.weak	_ZTVN8touchgfx15AbstractPainterE
 3698              		.section	.rodata._ZTVN8touchgfx15AbstractPainterE,"aG",%progbits,_ZTVN8touchgfx15AbstractPainterE,
 3699              		.align	2
 3702              	_ZTVN8touchgfx15AbstractPainterE:
 3703 0000 00000000 		.word	0
 3704 0004 00000000 		.word	0
 3705 0008 00000000 		.word	0
 3706 000c 00000000 		.word	0
 3707 0010 00000000 		.word	__cxa_pure_virtual
 3708              		.weak	_ZTVN8touchgfx6WidgetE
 3709              		.section	.rodata._ZTVN8touchgfx6WidgetE,"aG",%progbits,_ZTVN8touchgfx6WidgetE,comdat
 3710              		.align	2
 3713              	_ZTVN8touchgfx6WidgetE:
 3714 0000 00000000 		.word	0
 3715 0004 00000000 		.word	0
 3716 0008 00000000 		.word	0
 3717 000c 00000000 		.word	0
 3718 0010 00000000 		.word	__cxa_pure_virtual
 3719 0014 00000000 		.word	__cxa_pure_virtual
 3720 0018 00000000 		.word	_ZNK8touchgfx8Drawable14invalidateRectERNS_4RectE
 3721 001c 00000000 		.word	_ZNK8touchgfx8Drawable10invalidateEv
 3722 0020 00000000 		.word	_ZN8touchgfx8Drawable13getFirstChildEv
 3723 0024 00000000 		.word	_ZN8touchgfx8Drawable20getSolidRectAbsoluteEv
 3724 0028 00000000 		.word	_ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE
 3725 002c 00000000 		.word	_ZNK8touchgfx8Drawable14getVisibleRectERNS_4RectE
 3726 0030 00000000 		.word	_ZNK8touchgfx8Drawable23translateRectToAbsoluteERNS_4RectE
 3727 0034 00000000 		.word	_ZN8touchgfx8Drawable4setXEs
 3728 0038 00000000 		.word	_ZN8touchgfx8Drawable4setYEs
 3729 003c 00000000 		.word	_ZN8touchgfx8Drawable8setWidthEs
 3730 0040 00000000 		.word	_ZN8touchgfx8Drawable9setHeightEs
 3731 0044 00000000 		.word	_ZN8touchgfx8Drawable20childGeometryChangedEv
 3732 0048 00000000 		.word	_ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 126


 3733 004c 00000000 		.word	_ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE
 3734 0050 00000000 		.word	_ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE
 3735 0054 00000000 		.word	_ZN8touchgfx8Drawable15handleTickEventEv
 3736 0058 00000000 		.word	_ZN8touchgfx8Drawable12moveRelativeEss
 3737 005c 00000000 		.word	_ZN8touchgfx8Drawable6moveToEss
 3738 0060 00000000 		.word	_ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_
 3739              		.section	.text._ZN8touchgfx9ContainerD2Ev,"axG",%progbits,_ZN8touchgfx9ContainerD5Ev,comdat
 3740              		.align	1
 3741              		.weak	_ZN8touchgfx9ContainerD2Ev
 3742              		.syntax unified
 3743              		.thumb
 3744              		.thumb_func
 3745              		.fpu fpv4-sp-d16
 3747              	_ZN8touchgfx9ContainerD2Ev:
 3748              	.LFB811:
 3749              		.file 16 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * @file touchgfx/containers/Container.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * Declares the touchgfx::Container class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** #ifndef TOUCHGFX_CONTAINER_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** #define TOUCHGFX_CONTAINER_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** #include <touchgfx/Callback.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** #include <touchgfx/Drawable.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** /**
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * A Container is a Drawable that can have child nodes. The z-order of children is determined by
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * the order in which Drawables are added to the container - the Drawable added last
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * will be front-most on the screen.
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  *
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * This class overrides a few functions in Drawable in order to traverse child nodes.
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  *
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * Note that containers act as view ports - that is, only the parts of children that
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * intersect with the geometry of the container will be visible (e.g. setting a
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * container's width to 0 will render all children invisible).
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  *
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * @see Drawable
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  */
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** class Container : public Drawable
 3750              		.loc 16 40 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 127


 3751              		.cfi_startproc
 3752              		@ args = 0, pretend = 0, frame = 8
 3753              		@ frame_needed = 1, uses_anonymous_args = 0
 3754 0000 80B5     		push	{r7, lr}
 3755              	.LCFI326:
 3756              		.cfi_def_cfa_offset 8
 3757              		.cfi_offset 7, -8
 3758              		.cfi_offset 14, -4
 3759 0002 82B0     		sub	sp, sp, #8
 3760              	.LCFI327:
 3761              		.cfi_def_cfa_offset 16
 3762 0004 00AF     		add	r7, sp, #0
 3763              	.LCFI328:
 3764              		.cfi_def_cfa_register 7
 3765 0006 7860     		str	r0, [r7, #4]
 3766              	.LBB62:
 3767              		.loc 16 40 7
 3768 0008 054A     		ldr	r2, .L148
 3769 000a 7B68     		ldr	r3, [r7, #4]
 3770 000c 1A60     		str	r2, [r3]
 3771 000e 7B68     		ldr	r3, [r7, #4]
 3772 0010 1846     		mov	r0, r3
 3773 0012 FFF7FEFF 		bl	_ZN8touchgfx8DrawableD2Ev
 3774              	.LBE62:
 3775 0016 7B68     		ldr	r3, [r7, #4]
 3776 0018 1846     		mov	r0, r3
 3777 001a 0837     		adds	r7, r7, #8
 3778              	.LCFI329:
 3779              		.cfi_def_cfa_offset 8
 3780 001c BD46     		mov	sp, r7
 3781              	.LCFI330:
 3782              		.cfi_def_cfa_register 13
 3783              		@ sp needed
 3784 001e 80BD     		pop	{r7, pc}
 3785              	.L149:
 3786              		.align	2
 3787              	.L148:
 3788 0020 08000000 		.word	_ZTVN8touchgfx9ContainerE+8
 3789              		.cfi_endproc
 3790              	.LFE811:
 3792              		.weak	_ZN8touchgfx9ContainerD1Ev
 3793              		.thumb_set _ZN8touchgfx9ContainerD1Ev,_ZN8touchgfx9ContainerD2Ev
 3794              		.section	.text._ZN8touchgfx9ContainerD0Ev,"axG",%progbits,_ZN8touchgfx9ContainerD5Ev,comdat
 3795              		.align	1
 3796              		.weak	_ZN8touchgfx9ContainerD0Ev
 3797              		.syntax unified
 3798              		.thumb
 3799              		.thumb_func
 3800              		.fpu fpv4-sp-d16
 3802              	_ZN8touchgfx9ContainerD0Ev:
 3803              	.LFB813:
 3804              		.loc 16 40 7
 3805              		.cfi_startproc
 3806              		@ args = 0, pretend = 0, frame = 8
 3807              		@ frame_needed = 1, uses_anonymous_args = 0
 3808 0000 80B5     		push	{r7, lr}
 3809              	.LCFI331:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 128


 3810              		.cfi_def_cfa_offset 8
 3811              		.cfi_offset 7, -8
 3812              		.cfi_offset 14, -4
 3813 0002 82B0     		sub	sp, sp, #8
 3814              	.LCFI332:
 3815              		.cfi_def_cfa_offset 16
 3816 0004 00AF     		add	r7, sp, #0
 3817              	.LCFI333:
 3818              		.cfi_def_cfa_register 7
 3819 0006 7860     		str	r0, [r7, #4]
 3820              		.loc 16 40 7
 3821 0008 7868     		ldr	r0, [r7, #4]
 3822 000a FFF7FEFF 		bl	_ZN8touchgfx9ContainerD1Ev
 3823 000e 2C21     		movs	r1, #44
 3824 0010 7868     		ldr	r0, [r7, #4]
 3825 0012 FFF7FEFF 		bl	_ZdlPvj
 3826 0016 7B68     		ldr	r3, [r7, #4]
 3827 0018 1846     		mov	r0, r3
 3828 001a 0837     		adds	r7, r7, #8
 3829              	.LCFI334:
 3830              		.cfi_def_cfa_offset 8
 3831 001c BD46     		mov	sp, r7
 3832              	.LCFI335:
 3833              		.cfi_def_cfa_register 13
 3834              		@ sp needed
 3835 001e 80BD     		pop	{r7, pc}
 3836              		.cfi_endproc
 3837              	.LFE813:
 3839              		.section	.text._ZN8touchgfx3BoxD2Ev,"axG",%progbits,_ZN8touchgfx3BoxD5Ev,comdat
 3840              		.align	1
 3841              		.weak	_ZN8touchgfx3BoxD2Ev
 3842              		.syntax unified
 3843              		.thumb
 3844              		.thumb_func
 3845              		.fpu fpv4-sp-d16
 3847              	_ZN8touchgfx3BoxD2Ev:
 3848              	.LFB819:
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** {
 3849              		.loc 5 29 7
 3850              		.cfi_startproc
 3851              		@ args = 0, pretend = 0, frame = 8
 3852              		@ frame_needed = 1, uses_anonymous_args = 0
 3853 0000 80B5     		push	{r7, lr}
 3854              	.LCFI336:
 3855              		.cfi_def_cfa_offset 8
 3856              		.cfi_offset 7, -8
 3857              		.cfi_offset 14, -4
 3858 0002 82B0     		sub	sp, sp, #8
 3859              	.LCFI337:
 3860              		.cfi_def_cfa_offset 16
 3861 0004 00AF     		add	r7, sp, #0
 3862              	.LCFI338:
 3863              		.cfi_def_cfa_register 7
 3864 0006 7860     		str	r0, [r7, #4]
 3865              	.LBB63:
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** {
 3866              		.loc 5 29 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 129


 3867 0008 054A     		ldr	r2, .L154
 3868 000a 7B68     		ldr	r3, [r7, #4]
 3869 000c 1A60     		str	r2, [r3]
 3870 000e 7B68     		ldr	r3, [r7, #4]
 3871 0010 1846     		mov	r0, r3
 3872 0012 FFF7FEFF 		bl	_ZN8touchgfx6WidgetD2Ev
 3873              	.LBE63:
 3874 0016 7B68     		ldr	r3, [r7, #4]
 3875 0018 1846     		mov	r0, r3
 3876 001a 0837     		adds	r7, r7, #8
 3877              	.LCFI339:
 3878              		.cfi_def_cfa_offset 8
 3879 001c BD46     		mov	sp, r7
 3880              	.LCFI340:
 3881              		.cfi_def_cfa_register 13
 3882              		@ sp needed
 3883 001e 80BD     		pop	{r7, pc}
 3884              	.L155:
 3885              		.align	2
 3886              	.L154:
 3887 0020 08000000 		.word	_ZTVN8touchgfx3BoxE+8
 3888              		.cfi_endproc
 3889              	.LFE819:
 3891              		.weak	_ZN8touchgfx3BoxD1Ev
 3892              		.thumb_set _ZN8touchgfx3BoxD1Ev,_ZN8touchgfx3BoxD2Ev
 3893              		.section	.text._ZN8touchgfx3BoxD0Ev,"axG",%progbits,_ZN8touchgfx3BoxD5Ev,comdat
 3894              		.align	1
 3895              		.weak	_ZN8touchgfx3BoxD0Ev
 3896              		.syntax unified
 3897              		.thumb
 3898              		.thumb_func
 3899              		.fpu fpv4-sp-d16
 3901              	_ZN8touchgfx3BoxD0Ev:
 3902              	.LFB821:
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** {
 3903              		.loc 5 29 7
 3904              		.cfi_startproc
 3905              		@ args = 0, pretend = 0, frame = 8
 3906              		@ frame_needed = 1, uses_anonymous_args = 0
 3907 0000 80B5     		push	{r7, lr}
 3908              	.LCFI341:
 3909              		.cfi_def_cfa_offset 8
 3910              		.cfi_offset 7, -8
 3911              		.cfi_offset 14, -4
 3912 0002 82B0     		sub	sp, sp, #8
 3913              	.LCFI342:
 3914              		.cfi_def_cfa_offset 16
 3915 0004 00AF     		add	r7, sp, #0
 3916              	.LCFI343:
 3917              		.cfi_def_cfa_register 7
 3918 0006 7860     		str	r0, [r7, #4]
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** {
 3919              		.loc 5 29 7
 3920 0008 7868     		ldr	r0, [r7, #4]
 3921 000a FFF7FEFF 		bl	_ZN8touchgfx3BoxD1Ev
 3922 000e 2C21     		movs	r1, #44
 3923 0010 7868     		ldr	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 130


 3924 0012 FFF7FEFF 		bl	_ZdlPvj
 3925 0016 7B68     		ldr	r3, [r7, #4]
 3926 0018 1846     		mov	r0, r3
 3927 001a 0837     		adds	r7, r7, #8
 3928              	.LCFI344:
 3929              		.cfi_def_cfa_offset 8
 3930 001c BD46     		mov	sp, r7
 3931              	.LCFI345:
 3932              		.cfi_def_cfa_register 13
 3933              		@ sp needed
 3934 001e 80BD     		pop	{r7, pc}
 3935              		.cfi_endproc
 3936              	.LFE821:
 3938              		.section	.text._ZN8touchgfx19ScrollableContainerD2Ev,"axG",%progbits,_ZN8touchgfx19ScrollableConta
 3939              		.align	1
 3940              		.weak	_ZN8touchgfx19ScrollableContainerD2Ev
 3941              		.syntax unified
 3942              		.thumb
 3943              		.thumb_func
 3944              		.fpu fpv4-sp-d16
 3946              	_ZN8touchgfx19ScrollableContainerD2Ev:
 3947              	.LFB823:
 3948              		.file 17 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * @file touchgfx/containers/ScrollableContainer.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * Declares the touchgfx::ScrollableContainer class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** #ifndef TOUCHGFX_SCROLLABLECONTAINER_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** #define TOUCHGFX_SCROLLABLECONTAINER_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** #include <touchgfx/containers/Container.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** #include <touchgfx/events/ClickEvent.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** #include <touchgfx/events/DragEvent.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** #include <touchgfx/events/GestureEvent.hpp>
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** #include <touchgfx/widgets/Box.hpp>
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** 
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** namespace touchgfx
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** {
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** /**
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * A ScrollableContainer is a container that allows its contents to be scrolled. It will
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * intercept drag operations and move child nodes accordingly.
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  *
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * A standard Container will simply clip children that are either larger than the
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 131


  35:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * container itself, or children that extend beyond the borders of the container or
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * children that are placed outside the borders of the container. A ScrollableContainer
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * behaves much like a Container, except it enables the user to scroll the children and
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * thereby act like a viewport. When the contents of the ScrollableContainer is
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * scrollable, scrollbars can be seen near the edge of the ScrollableContainer.
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  *
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * @see Container
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  *
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  * @note The ScrollableContainer will consume all DragEvents in the area covered by the
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  *       container.
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp ****  */
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp **** class ScrollableContainer : public Container
 3949              		.loc 17 46 7
 3950              		.cfi_startproc
 3951              		@ args = 0, pretend = 0, frame = 8
 3952              		@ frame_needed = 1, uses_anonymous_args = 0
 3953 0000 80B5     		push	{r7, lr}
 3954              	.LCFI346:
 3955              		.cfi_def_cfa_offset 8
 3956              		.cfi_offset 7, -8
 3957              		.cfi_offset 14, -4
 3958 0002 82B0     		sub	sp, sp, #8
 3959              	.LCFI347:
 3960              		.cfi_def_cfa_offset 16
 3961 0004 00AF     		add	r7, sp, #0
 3962              	.LCFI348:
 3963              		.cfi_def_cfa_register 7
 3964 0006 7860     		str	r0, [r7, #4]
 3965              	.LBB64:
 3966              		.loc 17 46 7
 3967 0008 0A4A     		ldr	r2, .L160
 3968 000a 7B68     		ldr	r3, [r7, #4]
 3969 000c 1A60     		str	r2, [r3]
 3970 000e 7B68     		ldr	r3, [r7, #4]
 3971 0010 6433     		adds	r3, r3, #100
 3972 0012 1846     		mov	r0, r3
 3973 0014 FFF7FEFF 		bl	_ZN8touchgfx3BoxD1Ev
 3974 0018 7B68     		ldr	r3, [r7, #4]
 3975 001a 3833     		adds	r3, r3, #56
 3976 001c 1846     		mov	r0, r3
 3977 001e FFF7FEFF 		bl	_ZN8touchgfx3BoxD1Ev
 3978 0022 7B68     		ldr	r3, [r7, #4]
 3979 0024 1846     		mov	r0, r3
 3980 0026 FFF7FEFF 		bl	_ZN8touchgfx9ContainerD2Ev
 3981              	.LBE64:
 3982 002a 7B68     		ldr	r3, [r7, #4]
 3983 002c 1846     		mov	r0, r3
 3984 002e 0837     		adds	r7, r7, #8
 3985              	.LCFI349:
 3986              		.cfi_def_cfa_offset 8
 3987 0030 BD46     		mov	sp, r7
 3988              	.LCFI350:
 3989              		.cfi_def_cfa_register 13
 3990              		@ sp needed
 3991 0032 80BD     		pop	{r7, pc}
 3992              	.L161:
 3993              		.align	2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 132


 3994              	.L160:
 3995 0034 08000000 		.word	_ZTVN8touchgfx19ScrollableContainerE+8
 3996              		.cfi_endproc
 3997              	.LFE823:
 3999              		.weak	_ZN8touchgfx19ScrollableContainerD1Ev
 4000              		.thumb_set _ZN8touchgfx19ScrollableContainerD1Ev,_ZN8touchgfx19ScrollableContainerD2Ev
 4001              		.section	.text._ZN8touchgfx19ScrollableContainerD0Ev,"axG",%progbits,_ZN8touchgfx19ScrollableConta
 4002              		.align	1
 4003              		.weak	_ZN8touchgfx19ScrollableContainerD0Ev
 4004              		.syntax unified
 4005              		.thumb
 4006              		.thumb_func
 4007              		.fpu fpv4-sp-d16
 4009              	_ZN8touchgfx19ScrollableContainerD0Ev:
 4010              	.LFB825:
 4011              		.loc 17 46 7
 4012              		.cfi_startproc
 4013              		@ args = 0, pretend = 0, frame = 8
 4014              		@ frame_needed = 1, uses_anonymous_args = 0
 4015 0000 80B5     		push	{r7, lr}
 4016              	.LCFI351:
 4017              		.cfi_def_cfa_offset 8
 4018              		.cfi_offset 7, -8
 4019              		.cfi_offset 14, -4
 4020 0002 82B0     		sub	sp, sp, #8
 4021              	.LCFI352:
 4022              		.cfi_def_cfa_offset 16
 4023 0004 00AF     		add	r7, sp, #0
 4024              	.LCFI353:
 4025              		.cfi_def_cfa_register 7
 4026 0006 7860     		str	r0, [r7, #4]
 4027              		.loc 17 46 7
 4028 0008 7868     		ldr	r0, [r7, #4]
 4029 000a FFF7FEFF 		bl	_ZN8touchgfx19ScrollableContainerD1Ev
 4030 000e BC21     		movs	r1, #188
 4031 0010 7868     		ldr	r0, [r7, #4]
 4032 0012 FFF7FEFF 		bl	_ZdlPvj
 4033 0016 7B68     		ldr	r3, [r7, #4]
 4034 0018 1846     		mov	r0, r3
 4035 001a 0837     		adds	r7, r7, #8
 4036              	.LCFI354:
 4037              		.cfi_def_cfa_offset 8
 4038 001c BD46     		mov	sp, r7
 4039              	.LCFI355:
 4040              		.cfi_def_cfa_register 13
 4041              		@ sp needed
 4042 001e 80BD     		pop	{r7, pc}
 4043              		.cfi_endproc
 4044              	.LFE825:
 4046              		.section	.text._ZN8touchgfx12CanvasWidgetD2Ev,"axG",%progbits,_ZN8touchgfx12CanvasWidgetD5Ev,comda
 4047              		.align	1
 4048              		.weak	_ZN8touchgfx12CanvasWidgetD2Ev
 4049              		.syntax unified
 4050              		.thumb
 4051              		.thumb_func
 4052              		.fpu fpv4-sp-d16
 4054              	_ZN8touchgfx12CanvasWidgetD2Ev:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 133


 4055              	.LFB828:
 4056              		.file 18 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  * @file touchgfx/widgets/canvas/CanvasWidget.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  * Declares the touchgfx::CanvasWidget class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** #ifndef TOUCHGFX_CANVASWIDGET_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** #define TOUCHGFX_CANVASWIDGET_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** #include <touchgfx/widgets/Widget.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** #include <touchgfx/widgets/canvas/AbstractPainter.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** /**
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  * Class for drawing complex polygons on the display using CanvasWidgetRenderer. The
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  * CanvasWidget is used by passing it to a Canvas object, drawing the outline of the
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  * object and then having CanvasWidget render the outline on the display using the
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  * assigned painter.
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp ****  */
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp **** class CanvasWidget : public Widget
 4057              		.loc 18 33 7
 4058              		.cfi_startproc
 4059              		@ args = 0, pretend = 0, frame = 8
 4060              		@ frame_needed = 1, uses_anonymous_args = 0
 4061 0000 80B5     		push	{r7, lr}
 4062              	.LCFI356:
 4063              		.cfi_def_cfa_offset 8
 4064              		.cfi_offset 7, -8
 4065              		.cfi_offset 14, -4
 4066 0002 82B0     		sub	sp, sp, #8
 4067              	.LCFI357:
 4068              		.cfi_def_cfa_offset 16
 4069 0004 00AF     		add	r7, sp, #0
 4070              	.LCFI358:
 4071              		.cfi_def_cfa_register 7
 4072 0006 7860     		str	r0, [r7, #4]
 4073              	.LBB65:
 4074              		.loc 18 33 7
 4075 0008 054A     		ldr	r2, .L166
 4076 000a 7B68     		ldr	r3, [r7, #4]
 4077 000c 1A60     		str	r2, [r3]
 4078 000e 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 134


 4079 0010 1846     		mov	r0, r3
 4080 0012 FFF7FEFF 		bl	_ZN8touchgfx6WidgetD2Ev
 4081              	.LBE65:
 4082 0016 7B68     		ldr	r3, [r7, #4]
 4083 0018 1846     		mov	r0, r3
 4084 001a 0837     		adds	r7, r7, #8
 4085              	.LCFI359:
 4086              		.cfi_def_cfa_offset 8
 4087 001c BD46     		mov	sp, r7
 4088              	.LCFI360:
 4089              		.cfi_def_cfa_register 13
 4090              		@ sp needed
 4091 001e 80BD     		pop	{r7, pc}
 4092              	.L167:
 4093              		.align	2
 4094              	.L166:
 4095 0020 08000000 		.word	_ZTVN8touchgfx12CanvasWidgetE+8
 4096              		.cfi_endproc
 4097              	.LFE828:
 4099              		.weak	_ZN8touchgfx12CanvasWidgetD1Ev
 4100              		.thumb_set _ZN8touchgfx12CanvasWidgetD1Ev,_ZN8touchgfx12CanvasWidgetD2Ev
 4101              		.section	.text._ZN8touchgfx12CanvasWidgetD0Ev,"axG",%progbits,_ZN8touchgfx12CanvasWidgetD5Ev,comda
 4102              		.align	1
 4103              		.weak	_ZN8touchgfx12CanvasWidgetD0Ev
 4104              		.syntax unified
 4105              		.thumb
 4106              		.thumb_func
 4107              		.fpu fpv4-sp-d16
 4109              	_ZN8touchgfx12CanvasWidgetD0Ev:
 4110              	.LFB830:
 4111              		.loc 18 33 7
 4112              		.cfi_startproc
 4113              		@ args = 0, pretend = 0, frame = 8
 4114              		@ frame_needed = 1, uses_anonymous_args = 0
 4115 0000 80B5     		push	{r7, lr}
 4116              	.LCFI361:
 4117              		.cfi_def_cfa_offset 8
 4118              		.cfi_offset 7, -8
 4119              		.cfi_offset 14, -4
 4120 0002 82B0     		sub	sp, sp, #8
 4121              	.LCFI362:
 4122              		.cfi_def_cfa_offset 16
 4123 0004 00AF     		add	r7, sp, #0
 4124              	.LCFI363:
 4125              		.cfi_def_cfa_register 7
 4126 0006 7860     		str	r0, [r7, #4]
 4127              		.loc 18 33 7
 4128 0008 7868     		ldr	r0, [r7, #4]
 4129 000a FFF7FEFF 		bl	_ZN8touchgfx12CanvasWidgetD1Ev
 4130 000e 3021     		movs	r1, #48
 4131 0010 7868     		ldr	r0, [r7, #4]
 4132 0012 FFF7FEFF 		bl	_ZdlPvj
 4133 0016 7B68     		ldr	r3, [r7, #4]
 4134 0018 1846     		mov	r0, r3
 4135 001a 0837     		adds	r7, r7, #8
 4136              	.LCFI364:
 4137              		.cfi_def_cfa_offset 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 135


 4138 001c BD46     		mov	sp, r7
 4139              	.LCFI365:
 4140              		.cfi_def_cfa_register 13
 4141              		@ sp needed
 4142 001e 80BD     		pop	{r7, pc}
 4143              		.cfi_endproc
 4144              	.LFE830:
 4146              		.section	.text._ZN8touchgfx6CircleD2Ev,"axG",%progbits,_ZN8touchgfx6CircleD5Ev,comdat
 4147              		.align	1
 4148              		.weak	_ZN8touchgfx6CircleD2Ev
 4149              		.syntax unified
 4150              		.thumb
 4151              		.thumb_func
 4152              		.fpu fpv4-sp-d16
 4154              	_ZN8touchgfx6CircleD2Ev:
 4155              	.LFB831:
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** {
 4156              		.loc 15 48 7
 4157              		.cfi_startproc
 4158              		@ args = 0, pretend = 0, frame = 8
 4159              		@ frame_needed = 1, uses_anonymous_args = 0
 4160 0000 80B5     		push	{r7, lr}
 4161              	.LCFI366:
 4162              		.cfi_def_cfa_offset 8
 4163              		.cfi_offset 7, -8
 4164              		.cfi_offset 14, -4
 4165 0002 82B0     		sub	sp, sp, #8
 4166              	.LCFI367:
 4167              		.cfi_def_cfa_offset 16
 4168 0004 00AF     		add	r7, sp, #0
 4169              	.LCFI368:
 4170              		.cfi_def_cfa_register 7
 4171 0006 7860     		str	r0, [r7, #4]
 4172              	.LBB66:
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** {
 4173              		.loc 15 48 7
 4174 0008 054A     		ldr	r2, .L172
 4175 000a 7B68     		ldr	r3, [r7, #4]
 4176 000c 1A60     		str	r2, [r3]
 4177 000e 7B68     		ldr	r3, [r7, #4]
 4178 0010 1846     		mov	r0, r3
 4179 0012 FFF7FEFF 		bl	_ZN8touchgfx12CanvasWidgetD2Ev
 4180              	.LBE66:
 4181 0016 7B68     		ldr	r3, [r7, #4]
 4182 0018 1846     		mov	r0, r3
 4183 001a 0837     		adds	r7, r7, #8
 4184              	.LCFI369:
 4185              		.cfi_def_cfa_offset 8
 4186 001c BD46     		mov	sp, r7
 4187              	.LCFI370:
 4188              		.cfi_def_cfa_register 13
 4189              		@ sp needed
 4190 001e 80BD     		pop	{r7, pc}
 4191              	.L173:
 4192              		.align	2
 4193              	.L172:
 4194 0020 08000000 		.word	_ZTVN8touchgfx6CircleE+8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 136


 4195              		.cfi_endproc
 4196              	.LFE831:
 4198              		.weak	_ZN8touchgfx6CircleD1Ev
 4199              		.thumb_set _ZN8touchgfx6CircleD1Ev,_ZN8touchgfx6CircleD2Ev
 4200              		.section	.text._ZN8touchgfx6CircleD0Ev,"axG",%progbits,_ZN8touchgfx6CircleD5Ev,comdat
 4201              		.align	1
 4202              		.weak	_ZN8touchgfx6CircleD0Ev
 4203              		.syntax unified
 4204              		.thumb
 4205              		.thumb_func
 4206              		.fpu fpv4-sp-d16
 4208              	_ZN8touchgfx6CircleD0Ev:
 4209              	.LFB833:
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** {
 4210              		.loc 15 48 7
 4211              		.cfi_startproc
 4212              		@ args = 0, pretend = 0, frame = 8
 4213              		@ frame_needed = 1, uses_anonymous_args = 0
 4214 0000 80B5     		push	{r7, lr}
 4215              	.LCFI371:
 4216              		.cfi_def_cfa_offset 8
 4217              		.cfi_offset 7, -8
 4218              		.cfi_offset 14, -4
 4219 0002 82B0     		sub	sp, sp, #8
 4220              	.LCFI372:
 4221              		.cfi_def_cfa_offset 16
 4222 0004 00AF     		add	r7, sp, #0
 4223              	.LCFI373:
 4224              		.cfi_def_cfa_register 7
 4225 0006 7860     		str	r0, [r7, #4]
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** {
 4226              		.loc 15 48 7
 4227 0008 7868     		ldr	r0, [r7, #4]
 4228 000a FFF7FEFF 		bl	_ZN8touchgfx6CircleD1Ev
 4229 000e 4C21     		movs	r1, #76
 4230 0010 7868     		ldr	r0, [r7, #4]
 4231 0012 FFF7FEFF 		bl	_ZdlPvj
 4232 0016 7B68     		ldr	r3, [r7, #4]
 4233 0018 1846     		mov	r0, r3
 4234 001a 0837     		adds	r7, r7, #8
 4235              	.LCFI374:
 4236              		.cfi_def_cfa_offset 8
 4237 001c BD46     		mov	sp, r7
 4238              	.LCFI375:
 4239              		.cfi_def_cfa_register 13
 4240              		@ sp needed
 4241 001e 80BD     		pop	{r7, pc}
 4242              		.cfi_endproc
 4243              	.LFE833:
 4245              		.section	.text._ZN8touchgfx13PainterRGB565D2Ev,"axG",%progbits,_ZN8touchgfx13PainterRGB565D5Ev,com
 4246              		.align	1
 4247              		.weak	_ZN8touchgfx13PainterRGB565D2Ev
 4248              		.syntax unified
 4249              		.thumb
 4250              		.thumb_func
 4251              		.fpu fpv4-sp-d16
 4253              	_ZN8touchgfx13PainterRGB565D2Ev:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 137


 4254              	.LFB835:
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** {
 4255              		.loc 10 32 7
 4256              		.cfi_startproc
 4257              		@ args = 0, pretend = 0, frame = 8
 4258              		@ frame_needed = 1, uses_anonymous_args = 0
 4259 0000 80B5     		push	{r7, lr}
 4260              	.LCFI376:
 4261              		.cfi_def_cfa_offset 8
 4262              		.cfi_offset 7, -8
 4263              		.cfi_offset 14, -4
 4264 0002 82B0     		sub	sp, sp, #8
 4265              	.LCFI377:
 4266              		.cfi_def_cfa_offset 16
 4267 0004 00AF     		add	r7, sp, #0
 4268              	.LCFI378:
 4269              		.cfi_def_cfa_register 7
 4270 0006 7860     		str	r0, [r7, #4]
 4271              	.LBB67:
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** {
 4272              		.loc 10 32 7
 4273 0008 054A     		ldr	r2, .L178
 4274 000a 7B68     		ldr	r3, [r7, #4]
 4275 000c 1A60     		str	r2, [r3]
 4276 000e 7B68     		ldr	r3, [r7, #4]
 4277 0010 1846     		mov	r0, r3
 4278 0012 FFF7FEFF 		bl	_ZN8touchgfx21AbstractPainterRGB565D2Ev
 4279              	.LBE67:
 4280 0016 7B68     		ldr	r3, [r7, #4]
 4281 0018 1846     		mov	r0, r3
 4282 001a 0837     		adds	r7, r7, #8
 4283              	.LCFI379:
 4284              		.cfi_def_cfa_offset 8
 4285 001c BD46     		mov	sp, r7
 4286              	.LCFI380:
 4287              		.cfi_def_cfa_register 13
 4288              		@ sp needed
 4289 001e 80BD     		pop	{r7, pc}
 4290              	.L179:
 4291              		.align	2
 4292              	.L178:
 4293 0020 08000000 		.word	_ZTVN8touchgfx13PainterRGB565E+8
 4294              		.cfi_endproc
 4295              	.LFE835:
 4297              		.weak	_ZN8touchgfx13PainterRGB565D1Ev
 4298              		.thumb_set _ZN8touchgfx13PainterRGB565D1Ev,_ZN8touchgfx13PainterRGB565D2Ev
 4299              		.section	.text._ZN8touchgfx13PainterRGB565D0Ev,"axG",%progbits,_ZN8touchgfx13PainterRGB565D5Ev,com
 4300              		.align	1
 4301              		.weak	_ZN8touchgfx13PainterRGB565D0Ev
 4302              		.syntax unified
 4303              		.thumb
 4304              		.thumb_func
 4305              		.fpu fpv4-sp-d16
 4307              	_ZN8touchgfx13PainterRGB565D0Ev:
 4308              	.LFB837:
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** {
 4309              		.loc 10 32 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 138


 4310              		.cfi_startproc
 4311              		@ args = 0, pretend = 0, frame = 8
 4312              		@ frame_needed = 1, uses_anonymous_args = 0
 4313 0000 80B5     		push	{r7, lr}
 4314              	.LCFI381:
 4315              		.cfi_def_cfa_offset 8
 4316              		.cfi_offset 7, -8
 4317              		.cfi_offset 14, -4
 4318 0002 82B0     		sub	sp, sp, #8
 4319              	.LCFI382:
 4320              		.cfi_def_cfa_offset 16
 4321 0004 00AF     		add	r7, sp, #0
 4322              	.LCFI383:
 4323              		.cfi_def_cfa_register 7
 4324 0006 7860     		str	r0, [r7, #4]
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp **** {
 4325              		.loc 10 32 7
 4326 0008 7868     		ldr	r0, [r7, #4]
 4327 000a FFF7FEFF 		bl	_ZN8touchgfx13PainterRGB565D1Ev
 4328 000e 1821     		movs	r1, #24
 4329 0010 7868     		ldr	r0, [r7, #4]
 4330 0012 FFF7FEFF 		bl	_ZdlPvj
 4331 0016 7B68     		ldr	r3, [r7, #4]
 4332 0018 1846     		mov	r0, r3
 4333 001a 0837     		adds	r7, r7, #8
 4334              	.LCFI384:
 4335              		.cfi_def_cfa_offset 8
 4336 001c BD46     		mov	sp, r7
 4337              	.LCFI385:
 4338              		.cfi_def_cfa_register 13
 4339              		@ sp needed
 4340 001e 80BD     		pop	{r7, pc}
 4341              		.cfi_endproc
 4342              	.LFE837:
 4344              		.text
 4345              	.Letext0:
 4346              		.file 19 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 4347              		.file 20 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 4348              		.file 21 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 4349              		.file 22 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 4350              		.file 23 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 4351              		.file 24 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine
 4352              		.file 25 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_st
 4353              		.file 26 "Middlewares/ST/touchgfx/framework/include/touchgfx/Event.hpp"
 4354              		.file 27 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/ClickEvent.hpp"
 4355              		.file 28 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/DragEvent.hpp"
 4356              		.file 29 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/GestureEvent.hpp"
 4357              		.file 30 "Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp"
 4358              		.file 31 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 4359              		.file 32 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 4360              		.file 33 "Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp"
 4361              		.file 34 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp"
 4362              		.file 35 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextureMapTypes.hpp"
 4363              		.file 36 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/DebugPrinter.hpp"
 4364              		.file 37 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp"
 4365              		.file 38 "Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp"
 4366              		.file 39 "Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 139


 4367              		.file 40 "Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp"
 4368              		.file 41 "Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp"
 4369              		.file 42 "Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp"
 4370              		.file 43 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Cell.hpp"
 4371              		.file 44 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Outline.hpp"
 4372              		.file 45 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/RenderingBuffe
 4373              		.file 46 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/CanvasWidgetRe
 4374              		.file 47 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Scanline.hpp"
 4375              		.file 48 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp"
 4376              		.file 49 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp"
 4377              		.file 50 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/FrameBufferAllocator.hpp"
 4378              		.file 51 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp"
 4379              		.file 52 "Middlewares/ST/touchgfx/framework/include/platform/core/MCUInstrumentation.hpp"
 4380              		.file 53 "Middlewares/ST/touchgfx/framework/include/platform/driver/button/ButtonController.hpp"
 4381              		.file 54 "Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp"
 4382              		.file 55 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Rasterizer.hpp
 4383              		.file 56 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Canvas.hpp"
 4384              		.file 57 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/
 4385              		.file 58 "Src/gui/include/gui/model/Model.hpp"
 4386              		.file 59 "Src/gui/include/gui/model/ModelListener.hpp"
 4387              		.file 60 "Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp"
 4388              		.file 61 "Src/gui/include/gui/common/FrontendApplication.hpp"
 4389              		.file 62 "Src/gui/include/gui/screen_screen/screenPresenter.hpp"
 4390              		.file 63 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/sig
 4391              		.file 64 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/signal.
 4392              		.file 65 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 140


DEFINED SYMBOLS
                            *ABS*:0000000000000000 screenViewBase.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:24     .text._ZN8touchgfx9colortypeC2Em:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:32     .text._ZN8touchgfx9colortypeC2Em:0000000000000000 _ZN8touchgfx9colortypeC2Em
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:32     .text._ZN8touchgfx9colortypeC2Em:0000000000000000 _ZN8touchgfx9colortypeC1Em
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:79     .text._ZN8touchgfx4RectC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:86     .text._ZN8touchgfx4RectC2Ev:0000000000000000 _ZN8touchgfx4RectC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:86     .text._ZN8touchgfx4RectC2Ev:0000000000000000 _ZN8touchgfx4RectC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:142    .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:143    .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:147    .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:152    .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:157    .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:158    .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:162    .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:165    .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:168    .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:171    .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:174    .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:177    .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:180    .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:183    .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:186    .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:189    .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:192    .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:195    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:198    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:201    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:204    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:207    .text._ZN8touchgfx8DrawableC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:214    .text._ZN8touchgfx8DrawableC2Ev:0000000000000000 _ZN8touchgfx8DrawableC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:282    .text._ZN8touchgfx8DrawableC2Ev:000000000000005c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:214    .text._ZN8touchgfx8DrawableC2Ev:0000000000000000 _ZN8touchgfx8DrawableC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:289    .text._ZN8touchgfx8DrawableD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:296    .text._ZN8touchgfx8DrawableD2Ev:0000000000000000 _ZN8touchgfx8DrawableD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:338    .text._ZN8touchgfx8DrawableD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:296    .text._ZN8touchgfx8DrawableD2Ev:0000000000000000 _ZN8touchgfx8DrawableD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:345    .text._ZN8touchgfx8DrawableD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:352    .text._ZN8touchgfx8DrawableD0Ev:0000000000000000 _ZN8touchgfx8DrawableD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:390    .text._ZN8touchgfx8Drawable13getFirstChildEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:397    .text._ZN8touchgfx8Drawable13getFirstChildEv:0000000000000000 _ZN8touchgfx8Drawable13getFirstChildEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:435    .text._ZN8touchgfx8Drawable11setPositionEssss:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:442    .text._ZN8touchgfx8Drawable11setPositionEssss:0000000000000000 _ZN8touchgfx8Drawable11setPositionEssss
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:600    .text._ZN8touchgfx8Drawable5setXYEss:0000000000000000 _ZN8touchgfx8Drawable5setXYEss
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:894    .text._ZN8touchgfx8Drawable14setWidthHeightEss:0000000000000000 _ZN8touchgfx8Drawable14setWidthHeightEss
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:495    .text._ZN8touchgfx8Drawable4setXEs:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:502    .text._ZN8touchgfx8Drawable4setXEs:0000000000000000 _ZN8touchgfx8Drawable4setXEs
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:544    .text._ZN8touchgfx8Drawable4setYEs:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:551    .text._ZN8touchgfx8Drawable4setYEs:0000000000000000 _ZN8touchgfx8Drawable4setYEs
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:593    .text._ZN8touchgfx8Drawable5setXYEss:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:658    .text._ZN8touchgfx8Drawable8setWidthEs:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:665    .text._ZN8touchgfx8Drawable8setWidthEs:0000000000000000 _ZN8touchgfx8Drawable8setWidthEs
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:707    .text._ZN8touchgfx8Drawable9setHeightEs:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:714    .text._ZN8touchgfx8Drawable9setHeightEs:0000000000000000 _ZN8touchgfx8Drawable9setHeightEs
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:756    .text._ZN8touchgfx8Drawable20childGeometryChangedEv:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 141


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:763    .text._ZN8touchgfx8Drawable20childGeometryChangedEv:0000000000000000 _ZN8touchgfx8Drawable20childGeometryChangedEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:799    .text._ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:806    .text._ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE:0000000000000000 _ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:843    .text._ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:850    .text._ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE:0000000000000000 _ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:887    .text._ZN8touchgfx8Drawable14setWidthHeightEss:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:952    .text._ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:959    .text._ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE:0000000000000000 _ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:996    .text._ZN8touchgfx8Drawable15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1003   .text._ZN8touchgfx8Drawable15handleTickEventEv:0000000000000000 _ZN8touchgfx8Drawable15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1039   .text._ZNK8touchgfx8Drawable9isVisibleEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1046   .text._ZNK8touchgfx8Drawable9isVisibleEv:0000000000000000 _ZNK8touchgfx8Drawable9isVisibleEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1085   .text._ZNK8touchgfx8Drawable11isTouchableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1092   .text._ZNK8touchgfx8Drawable11isTouchableEv:0000000000000000 _ZNK8touchgfx8Drawable11isTouchableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1131   .text._ZN8touchgfx8Drawable6moveToEss:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1138   .text._ZN8touchgfx8Drawable6moveToEss:0000000000000000 _ZN8touchgfx8Drawable6moveToEss
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1205   .text._ZN8touchgfx8Drawable19resetDrawChainCacheEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1212   .text._ZN8touchgfx8Drawable19resetDrawChainCacheEv:0000000000000000 _ZN8touchgfx8Drawable19resetDrawChainCacheEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1260   .text._ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1267   .text._ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_:0000000000000000 _ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1314   .text._ZN8touchgfx6ScreenD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1321   .text._ZN8touchgfx6ScreenD2Ev:0000000000000000 _ZN8touchgfx6ScreenD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3747   .text._ZN8touchgfx9ContainerD2Ev:0000000000000000 _ZN8touchgfx9ContainerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1364   .text._ZN8touchgfx6ScreenD2Ev:0000000000000024 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1321   .text._ZN8touchgfx6ScreenD2Ev:0000000000000000 _ZN8touchgfx6ScreenD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1371   .text._ZN8touchgfx6ScreenD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1378   .text._ZN8touchgfx6ScreenD0Ev:0000000000000000 _ZN8touchgfx6ScreenD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1416   .text._ZN8touchgfx6Screen11setupScreenEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1423   .text._ZN8touchgfx6Screen11setupScreenEv:0000000000000000 _ZN8touchgfx6Screen11setupScreenEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1459   .text._ZN8touchgfx6Screen15afterTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1466   .text._ZN8touchgfx6Screen15afterTransitionEv:0000000000000000 _ZN8touchgfx6Screen15afterTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1502   .text._ZN8touchgfx6Screen14tearDownScreenEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1509   .text._ZN8touchgfx6Screen14tearDownScreenEv:0000000000000000 _ZN8touchgfx6Screen14tearDownScreenEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1545   .text._ZN8touchgfx6Screen15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1552   .text._ZN8touchgfx6Screen15handleTickEventEv:0000000000000000 _ZN8touchgfx6Screen15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1588   .text._ZN8touchgfx6Screen14handleKeyEventEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1595   .text._ZN8touchgfx6Screen14handleKeyEventEh:0000000000000000 _ZN8touchgfx6Screen14handleKeyEventEh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1633   .text._ZN8touchgfx6Screen3addERNS_8DrawableE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1640   .text._ZN8touchgfx6Screen3addERNS_8DrawableE:0000000000000000 _ZN8touchgfx6Screen3addERNS_8DrawableE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1679   .text._ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1686   .text._ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE:0000000000000000 _ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1755   .text._ZN8touchgfx6WidgetC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1762   .text._ZN8touchgfx6WidgetC2Ev:0000000000000000 _ZN8touchgfx6WidgetC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1802   .text._ZN8touchgfx6WidgetC2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3713   .rodata._ZTVN8touchgfx6WidgetE:0000000000000000 _ZTVN8touchgfx6WidgetE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1762   .text._ZN8touchgfx6WidgetC2Ev:0000000000000000 _ZN8touchgfx6WidgetC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1809   .text._ZN8touchgfx6WidgetD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1816   .text._ZN8touchgfx6WidgetD2Ev:0000000000000000 _ZN8touchgfx6WidgetD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1856   .text._ZN8touchgfx6WidgetD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1816   .text._ZN8touchgfx6WidgetD2Ev:0000000000000000 _ZN8touchgfx6WidgetD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1863   .text._ZN8touchgfx6WidgetD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1870   .text._ZN8touchgfx6WidgetD0Ev:0000000000000000 _ZN8touchgfx6WidgetD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1908   .text._ZN8touchgfx3BoxC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1915   .text._ZN8touchgfx3BoxC2Ev:0000000000000000 _ZN8touchgfx3BoxC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1971   .text._ZN8touchgfx3BoxC2Ev:0000000000000044 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1915   .text._ZN8touchgfx3BoxC2Ev:0000000000000000 _ZN8touchgfx3BoxC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1978   .text._ZN8touchgfx3Box8setColorENS_9colortypeE:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 142


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:1985   .text._ZN8touchgfx3Box8setColorENS_9colortypeE:0000000000000000 _ZN8touchgfx3Box8setColorENS_9colortypeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2026   .text._ZN8touchgfx3HAL11getInstanceEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2033   .text._ZN8touchgfx3HAL11getInstanceEv:0000000000000000 _ZN8touchgfx3HAL11getInstanceEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2065   .text._ZN8touchgfx3HAL11getInstanceEv:0000000000000014 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2070   .text._ZN8touchgfx3HAL3lcdEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2077   .text._ZN8touchgfx3HAL3lcdEv:0000000000000000 _ZN8touchgfx3HAL3lcdEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2130   .text._ZN8touchgfx3HAL3lcdEv:0000000000000034 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2135   .text._ZN8touchgfx3HAL15getAuxiliaryLCDEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2142   .text._ZN8touchgfx3HAL15getAuxiliaryLCDEv:0000000000000000 _ZN8touchgfx3HAL15getAuxiliaryLCDEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2181   .text._ZN8touchgfx15AbstractPainterC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2188   .text._ZN8touchgfx15AbstractPainterC2Ev:0000000000000000 _ZN8touchgfx15AbstractPainterC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2240   .text._ZN8touchgfx15AbstractPainterC2Ev:0000000000000030 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3702   .rodata._ZTVN8touchgfx15AbstractPainterE:0000000000000000 _ZTVN8touchgfx15AbstractPainterE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2188   .text._ZN8touchgfx15AbstractPainterC2Ev:0000000000000000 _ZN8touchgfx15AbstractPainterC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2247   .text._ZN8touchgfx15AbstractPainterD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2254   .text._ZN8touchgfx15AbstractPainterD2Ev:0000000000000000 _ZN8touchgfx15AbstractPainterD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2296   .text._ZN8touchgfx15AbstractPainterD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2254   .text._ZN8touchgfx15AbstractPainterD2Ev:0000000000000000 _ZN8touchgfx15AbstractPainterD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2303   .text._ZN8touchgfx15AbstractPainterD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2310   .text._ZN8touchgfx15AbstractPainterD0Ev:0000000000000000 _ZN8touchgfx15AbstractPainterD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2348   .text._ZN8touchgfx7CWRUtil2Q5C2Ei:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2355   .text._ZN8touchgfx7CWRUtil2Q5C2Ei:0000000000000000 _ZN8touchgfx7CWRUtil2Q5C2Ei
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2355   .text._ZN8touchgfx7CWRUtil2Q5C2Ei:0000000000000000 _ZN8touchgfx7CWRUtil2Q5C1Ei
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2402   .rodata:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2415   .text._ZN8touchgfx21AbstractPainterRGB565C2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2422   .text._ZN8touchgfx21AbstractPainterRGB565C2Ev:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565C2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2557   .text._ZN8touchgfx21AbstractPainterRGB565C2Ev:00000000000000b8 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2422   .text._ZN8touchgfx21AbstractPainterRGB565C2Ev:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565C1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2567   .text._ZN8touchgfx21AbstractPainterRGB565D2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2574   .text._ZN8touchgfx21AbstractPainterRGB565D2Ev:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565D2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2614   .text._ZN8touchgfx21AbstractPainterRGB565D2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2574   .text._ZN8touchgfx21AbstractPainterRGB565D2Ev:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565D1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2621   .text._ZN8touchgfx21AbstractPainterRGB565D0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2628   .text._ZN8touchgfx21AbstractPainterRGB565D0Ev:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565D0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2666   .text._ZN8touchgfx13PainterRGB565C2ENS_9colortypeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2673   .text._ZN8touchgfx13PainterRGB565C2ENS_9colortypeE:0000000000000000 _ZN8touchgfx13PainterRGB565C2ENS_9colortypeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2739   .text._ZN8touchgfx13PainterRGB5658setColorENS_9colortypeE:0000000000000000 _ZN8touchgfx13PainterRGB5658setColorENS_9colortypeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2725   .text._ZN8touchgfx13PainterRGB565C2ENS_9colortypeE:0000000000000038 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2673   .text._ZN8touchgfx13PainterRGB565C2ENS_9colortypeE:0000000000000000 _ZN8touchgfx13PainterRGB565C1ENS_9colortypeE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2732   .text._ZN8touchgfx13PainterRGB5658setColorENS_9colortypeE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2780   .text._ZN8touchgfx4ViewI15screenPresenterED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2787   .text._ZN8touchgfx4ViewI15screenPresenterED2Ev:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2828   .text._ZN8touchgfx4ViewI15screenPresenterED2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3683   .rodata._ZTVN8touchgfx4ViewI15screenPresenterEE:0000000000000000 _ZTVN8touchgfx4ViewI15screenPresenterEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2787   .text._ZN8touchgfx4ViewI15screenPresenterED2Ev:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2835   .text._ZN8touchgfx4ViewI15screenPresenterED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2842   .text._ZN8touchgfx4ViewI15screenPresenterED0Ev:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2880   .text._ZN14screenViewBaseD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2887   .text._ZN14screenViewBaseD2Ev:0000000000000000 _ZN14screenViewBaseD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4253   .text._ZN8touchgfx13PainterRGB565D2Ev:0000000000000000 _ZN8touchgfx13PainterRGB565D1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4154   .text._ZN8touchgfx6CircleD2Ev:0000000000000000 _ZN8touchgfx6CircleD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3946   .text._ZN8touchgfx19ScrollableContainerD2Ev:0000000000000000 _ZN8touchgfx19ScrollableContainerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3847   .text._ZN8touchgfx3BoxD2Ev:0000000000000000 _ZN8touchgfx3BoxD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2945   .text._ZN14screenViewBaseD2Ev:000000000000004c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3664   .rodata._ZTV14screenViewBase:0000000000000000 _ZTV14screenViewBase
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2887   .text._ZN14screenViewBaseD2Ev:0000000000000000 _ZN14screenViewBaseD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2952   .text._ZN14screenViewBaseD0Ev:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 143


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2959   .text._ZN14screenViewBaseD0Ev:0000000000000000 _ZN14screenViewBaseD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:2997   .text._ZN14screenViewBaseC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3004   .text._ZN14screenViewBaseC2Ev:0000000000000000 _ZN14screenViewBaseC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3491   .text._ZN8touchgfx4ViewI15screenPresenterEC2Ev:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterEC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3332   .text._ZN8touchgfx6Circle9setCenterIiEEvT_S2_:0000000000000000 _ZN8touchgfx6Circle9setCenterIiEEvT_S2_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3549   .text._ZN8touchgfx6Circle9setRadiusIiEEvT_:0000000000000000 _ZN8touchgfx6Circle9setRadiusIiEEvT_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3608   .text._ZN8touchgfx6Circle12setLineWidthIiEEvT_:0000000000000000 _ZN8touchgfx6Circle12setLineWidthIiEEvT_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3412   .text._ZN8touchgfx6Circle6setArcIiEEvT_S2_:0000000000000000 _ZN8touchgfx6Circle6setArcIiEEvT_S2_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3275   .text._ZN14screenViewBaseC2Ev:00000000000001fc $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3004   .text._ZN14screenViewBaseC2Ev:0000000000000000 _ZN14screenViewBaseC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3282   .text._ZN14screenViewBase11setupScreenEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3289   .text._ZN14screenViewBase11setupScreenEv:0000000000000000 _ZN14screenViewBase11setupScreenEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3325   .text._ZN8touchgfx6Circle9setCenterIiEEvT_S2_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3405   .text._ZN8touchgfx6Circle6setArcIiEEvT_S2_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3484   .text._ZN8touchgfx4ViewI15screenPresenterEC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3535   .text._ZN8touchgfx4ViewI15screenPresenterEC2Ev:0000000000000028 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3491   .text._ZN8touchgfx4ViewI15screenPresenterEC2Ev:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterEC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3542   .text._ZN8touchgfx6Circle9setRadiusIiEEvT_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3601   .text._ZN8touchgfx6Circle12setLineWidthIiEEvT_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3661   .rodata._ZTV14screenViewBase:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3680   .rodata._ZTVN8touchgfx4ViewI15screenPresenterEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3699   .rodata._ZTVN8touchgfx15AbstractPainterE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3710   .rodata._ZTVN8touchgfx6WidgetE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3740   .text._ZN8touchgfx9ContainerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3747   .text._ZN8touchgfx9ContainerD2Ev:0000000000000000 _ZN8touchgfx9ContainerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3788   .text._ZN8touchgfx9ContainerD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3795   .text._ZN8touchgfx9ContainerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3802   .text._ZN8touchgfx9ContainerD0Ev:0000000000000000 _ZN8touchgfx9ContainerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3840   .text._ZN8touchgfx3BoxD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3847   .text._ZN8touchgfx3BoxD2Ev:0000000000000000 _ZN8touchgfx3BoxD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3887   .text._ZN8touchgfx3BoxD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3894   .text._ZN8touchgfx3BoxD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3901   .text._ZN8touchgfx3BoxD0Ev:0000000000000000 _ZN8touchgfx3BoxD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3939   .text._ZN8touchgfx19ScrollableContainerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3946   .text._ZN8touchgfx19ScrollableContainerD2Ev:0000000000000000 _ZN8touchgfx19ScrollableContainerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:3995   .text._ZN8touchgfx19ScrollableContainerD2Ev:0000000000000034 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4002   .text._ZN8touchgfx19ScrollableContainerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4009   .text._ZN8touchgfx19ScrollableContainerD0Ev:0000000000000000 _ZN8touchgfx19ScrollableContainerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4047   .text._ZN8touchgfx12CanvasWidgetD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4054   .text._ZN8touchgfx12CanvasWidgetD2Ev:0000000000000000 _ZN8touchgfx12CanvasWidgetD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4095   .text._ZN8touchgfx12CanvasWidgetD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4054   .text._ZN8touchgfx12CanvasWidgetD2Ev:0000000000000000 _ZN8touchgfx12CanvasWidgetD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4102   .text._ZN8touchgfx12CanvasWidgetD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4109   .text._ZN8touchgfx12CanvasWidgetD0Ev:0000000000000000 _ZN8touchgfx12CanvasWidgetD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4147   .text._ZN8touchgfx6CircleD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4154   .text._ZN8touchgfx6CircleD2Ev:0000000000000000 _ZN8touchgfx6CircleD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4194   .text._ZN8touchgfx6CircleD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4201   .text._ZN8touchgfx6CircleD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4208   .text._ZN8touchgfx6CircleD0Ev:0000000000000000 _ZN8touchgfx6CircleD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4246   .text._ZN8touchgfx13PainterRGB565D2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4253   .text._ZN8touchgfx13PainterRGB565D2Ev:0000000000000000 _ZN8touchgfx13PainterRGB565D2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4293   .text._ZN8touchgfx13PainterRGB565D2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4300   .text._ZN8touchgfx13PainterRGB565D0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s:4307   .text._ZN8touchgfx13PainterRGB565D0Ev:0000000000000000 _ZN8touchgfx13PainterRGB565D0Ev
                           .group:0000000000000000 _ZN8touchgfx9colortypeC5Em
                           .group:0000000000000000 _ZN8touchgfx4RectC5Ev
                           .group:0000000000000000 _ZN8touchgfx8DrawableC5Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 144


                           .group:0000000000000000 _ZN8touchgfx8DrawableD5Ev
                           .group:0000000000000000 _ZN8touchgfx6ScreenD5Ev
                           .group:0000000000000000 _ZN8touchgfx6WidgetC5Ev
                           .group:0000000000000000 _ZN8touchgfx6WidgetD5Ev
                           .group:0000000000000000 _ZN8touchgfx3BoxC5Ev
                           .group:0000000000000000 _ZN8touchgfx15AbstractPainterC5Ev
                           .group:0000000000000000 _ZN8touchgfx15AbstractPainterD5Ev
                           .group:0000000000000000 _ZN8touchgfx7CWRUtil2Q5C5Ei
                           .group:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565C5Ev
                           .group:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565D5Ev
                           .group:0000000000000000 _ZN8touchgfx13PainterRGB565C5ENS_9colortypeE
                           .group:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterED5Ev
                           .group:0000000000000000 _ZN14screenViewBaseD5Ev
                           .group:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterEC5Ev
                           .group:0000000000000000 _ZN8touchgfx9ContainerD5Ev
                           .group:0000000000000000 _ZN8touchgfx3BoxD5Ev
                           .group:0000000000000000 _ZN8touchgfx19ScrollableContainerD5Ev
                           .group:0000000000000000 _ZN8touchgfx12CanvasWidgetD5Ev
                           .group:0000000000000000 _ZN8touchgfx6CircleD5Ev
                           .group:0000000000000000 _ZN8touchgfx13PainterRGB565D5Ev
                           .group:0000000000000000 wm4.0.8f82b9771446a4c5d395a560643408f9
                           .group:0000000000000000 wm4.cconfig.h.31.9a7f23fec851cb698f0e4b12b5a812df
                           .group:0000000000000000 wm4.cpu_defines.h.31.bf53b50a3b7882b34c717ebded187478
                           .group:0000000000000000 wm4.cconfig.h.530.716755664a180b5214d4137991428173
                           .group:0000000000000000 wm4.exception_defines.h.31.b944334bb23842f2d39bb0d8b467613a
                           .group:0000000000000000 wm4.stddef.h.39.cdc2cef840622b974aa19abcc0caae93
                           .group:0000000000000000 wm4.cxxabi_init_exception.h.42.029852b0f286014c9c193b74ad22df55
                           .group:0000000000000000 wm4.type_traits.30.a1ad4787ed06e819fc9410a5d6c895dc
                           .group:0000000000000000 wm4.move.h.161.4ce4b89a4714eb3a7aabe70c85c6bbc3
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
                           .group:0000000000000000 wm4.Utils.hpp.19.3cc10dfadb70e459e4fbf3def7a46f1d
                           .group:0000000000000000 wm4.cdefs.h.49.6cb61cdf7b446f131d08825667c792f6
                           .group:0000000000000000 wm4.types.h.40.8b6acba56cefbb11746718204edc8f5e
                           .group:0000000000000000 wm4._types.h.20.dd0d04dca3800a0d2a6129b87f3adbb2
                           .group:0000000000000000 wm4.stddef.h.155.7076294d263a8c080378a0849fe2c570
                           .group:0000000000000000 wm4._types.h.127.34941de1b2539d59d5cac00e0dd27a45
                           .group:0000000000000000 wm4._endian.h.31.65a10590763c3dde1ac4a7f66d7d4891
                           .group:0000000000000000 wm4.endian.h.9.49f3a4695c1b61e8a0808de3c4a106cb
                           .group:0000000000000000 wm4._timeval.h.32.bec3221fa7a9bb0bdde696c9c57e47d2
                           .group:0000000000000000 wm4.timespec.h.41.d855182eb0e690443ab8651bcedca6e1
                           .group:0000000000000000 wm4.select.h.19.97ca6fd0c752a0f3b6719fd314d361e6
                           .group:0000000000000000 wm4.types.h.51.5571ec98f267d17d3c670b7a3ba33afa
                           .group:0000000000000000 wm4.sched.h.22.c60982713a5c428609783c78f9c78d95
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccIt6Ds0.s 			page 145


                           .group:0000000000000000 wm4._pthreadtypes.h.36.fcee9961c35163dde6267ef772ad1972
                           .group:0000000000000000 wm4.signal.h.30.5277b477a5ebb7d1254c1af3095d1011
                           .group:0000000000000000 wm4.signal.h.18.14c8d0c03fc1e06775633fad7399cfc7
                           .group:0000000000000000 wm4.csignal.45.00534e27a59328df5aaaf458020a025c

UNDEFINED SYMBOLS
_ZTVN8touchgfx8DrawableE
_ZdlPvj
_ZTVN8touchgfx6ScreenE
_ZN8touchgfx9Container3addERNS_8DrawableE
memset
_ZTVN8touchgfx3BoxE
_ZN8touchgfx3HAL8instanceE
__assert_func
_ZTVN8touchgfx21AbstractPainterRGB565E
_ZTVN8touchgfx13PainterRGB565E
_ZN8touchgfx19ScrollableContainerC1Ev
_ZN8touchgfx6CircleC1Ev
_ZN8touchgfx20CanvasWidgetRenderer11setupBufferEPhj
_ZN8touchgfx19ScrollableContainer18setScrollbarsColorENS_9colortypeE
_ZN8touchgfx12CanvasWidget10setPainterERNS_15AbstractPainterE
_ZN8touchgfx6ScreenC2Ev
_ZN8touchgfx6Screen4drawERNS_4RectE
_ZN8touchgfx6Screen16handleClickEventERKNS_10ClickEventE
_ZN8touchgfx6Screen15handleDragEventERKNS_9DragEventE
_ZN8touchgfx6Screen18handleGestureEventERKNS_12GestureEventE
__cxa_pure_virtual
_ZNK8touchgfx8Drawable14invalidateRectERNS_4RectE
_ZNK8touchgfx8Drawable10invalidateEv
_ZN8touchgfx8Drawable20getSolidRectAbsoluteEv
_ZNK8touchgfx8Drawable14getVisibleRectERNS_4RectE
_ZNK8touchgfx8Drawable23translateRectToAbsoluteERNS_4RectE
_ZN8touchgfx8Drawable12moveRelativeEss
_ZTVN8touchgfx9ContainerE
_ZTVN8touchgfx19ScrollableContainerE
_ZTVN8touchgfx12CanvasWidgetE
_ZTVN8touchgfx6CircleE
