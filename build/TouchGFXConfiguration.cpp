ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 1


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
  13              		.file	"TouchGFXConfiguration.cpp"
  14              		.text
  15              	.Ltext0:
  16              		.cfi_sections	.debug_frame
  17              		.section	.rodata._ZN8touchgfxL2PIE,"a"
  18              		.align	2
  21              	_ZN8touchgfxL2PIE:
  22 0000 DB0F4940 		.word	1078530011
  23              		.section	.text._ZN8touchgfx9colortypeC2Ev,"axG",%progbits,_ZN8touchgfx9colortypeC5Ev,comdat
  24              		.align	1
  25              		.weak	_ZN8touchgfx9colortypeC2Ev
  26              		.arch armv7e-m
  27              		.syntax unified
  28              		.thumb
  29              		.thumb_func
  30              		.fpu fpv4-sp-d16
  32              	_ZN8touchgfx9colortypeC2Ev:
  33              	.LFB1:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 2


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
  35              		.loc 1 78 5
  36              		.cfi_startproc
  37              		@ args = 0, pretend = 0, frame = 8
  38              		@ frame_needed = 1, uses_anonymous_args = 0
  39              		@ link register save eliminated.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 3


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
  51              	.LBB2:
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****         : color(0)
  52              		.loc 1 79 18
  53 0008 7B68     		ldr	r3, [r7, #4]
  54 000a 0022     		movs	r2, #0
  55 000c 1A60     		str	r2, [r3]
  56              	.LBE2:
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     {
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     }
  57              		.loc 1 81 5
  58 000e 7B68     		ldr	r3, [r7, #4]
  59 0010 1846     		mov	r0, r3
  60 0012 0C37     		adds	r7, r7, #12
  61              	.LCFI3:
  62              		.cfi_def_cfa_offset 4
  63 0014 BD46     		mov	sp, r7
  64              	.LCFI4:
  65              		.cfi_def_cfa_register 13
  66              		@ sp needed
  67 0016 5DF8047B 		ldr	r7, [sp], #4
  68              	.LCFI5:
  69              		.cfi_restore 7
  70              		.cfi_def_cfa_offset 0
  71 001a 7047     		bx	lr
  72              		.cfi_endproc
  73              	.LFE1:
  75              		.weak	_ZN8touchgfx9colortypeC1Ev
  76              		.thumb_set _ZN8touchgfx9colortypeC1Ev,_ZN8touchgfx9colortypeC2Ev
  77              		.section	.text._ZN8touchgfx4RectC2Ev,"axG",%progbits,_ZN8touchgfx4RectC5Ev,comdat
  78              		.align	1
  79              		.weak	_ZN8touchgfx4RectC2Ev
  80              		.syntax unified
  81              		.thumb
  82              		.thumb_func
  83              		.fpu fpv4-sp-d16
  85              	_ZN8touchgfx4RectC2Ev:
  86              	.LFB9:
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp **** 
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     /**
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * Constructor which creates a colortype with the given color. Use
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * Color::getColorFrom24BitRGB() to create a color that will work on your selected LCD type.
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      *
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * @param  col The color.
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      *
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      * @see Color::getColorFrom24BitRGB
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****      */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 4


  91:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     colortype(uint32_t col)
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****         : color(col)
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     {
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     }
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
  87              		.loc 1 127 5
  88              		.cfi_startproc
  89              		@ args = 0, pretend = 0, frame = 8
  90              		@ frame_needed = 1, uses_anonymous_args = 0
  91              		@ link register save eliminated.
  92 0000 80B4     		push	{r7}
  93              	.LCFI6:
  94              		.cfi_def_cfa_offset 4
  95              		.cfi_offset 7, -4
  96 0002 83B0     		sub	sp, sp, #12
  97              	.LCFI7:
  98              		.cfi_def_cfa_offset 16
  99 0004 00AF     		add	r7, sp, #0
 100              	.LCFI8:
 101              		.cfi_def_cfa_register 7
 102 0006 7860     		str	r0, [r7, #4]
 103              	.LBB3:
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****         : x(0), y(0), width(0), height(0)
 104              		.loc 1 128 41
 105 0008 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 5


 106 000a 0022     		movs	r2, #0
 107 000c 1A80     		strh	r2, [r3]	@ movhi
 108 000e 7B68     		ldr	r3, [r7, #4]
 109 0010 0022     		movs	r2, #0
 110 0012 5A80     		strh	r2, [r3, #2]	@ movhi
 111 0014 7B68     		ldr	r3, [r7, #4]
 112 0016 0022     		movs	r2, #0
 113 0018 9A80     		strh	r2, [r3, #4]	@ movhi
 114 001a 7B68     		ldr	r3, [r7, #4]
 115 001c 0022     		movs	r2, #0
 116 001e DA80     		strh	r2, [r3, #6]	@ movhi
 117              	.LBE3:
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     {
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp ****     }
 118              		.loc 1 130 5
 119 0020 7B68     		ldr	r3, [r7, #4]
 120 0022 1846     		mov	r0, r3
 121 0024 0C37     		adds	r7, r7, #12
 122              	.LCFI9:
 123              		.cfi_def_cfa_offset 4
 124 0026 BD46     		mov	sp, r7
 125              	.LCFI10:
 126              		.cfi_def_cfa_register 13
 127              		@ sp needed
 128 0028 5DF8047B 		ldr	r7, [sp], #4
 129              	.LCFI11:
 130              		.cfi_restore 7
 131              		.cfi_def_cfa_offset 0
 132 002c 7047     		bx	lr
 133              		.cfi_endproc
 134              	.LFE9:
 136              		.weak	_ZN8touchgfx4RectC1Ev
 137              		.thumb_set _ZN8touchgfx4RectC1Ev,_ZN8touchgfx4RectC2Ev
 138              		.section	.rodata._ZN8touchgfxL4LEFTE,"a"
 141              	_ZN8touchgfxL4LEFTE:
 142 0000 00       		.space	1
 143              		.section	.rodata._ZN8touchgfxL6CENTERE,"a"
 146              	_ZN8touchgfxL6CENTERE:
 147 0000 01       		.byte	1
 148              		.section	.rodata._ZN8touchgfxL5RIGHTE,"a"
 151              	_ZN8touchgfxL5RIGHTE:
 152 0000 02       		.byte	2
 153              		.section	.rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE,"a"
 156              	_ZN8touchgfxL18TEXT_DIRECTION_LTRE:
 157 0000 00       		.space	1
 158              		.section	.rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE,"a"
 161              	_ZN8touchgfxL18TEXT_DIRECTION_RTLE:
 162 0000 01       		.byte	1
 163              		.section	.rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE,"a"
 164              		.align	1
 167              	_ZN8touchgfxL32RenderingVariant_NearestNeighborE:
 168 0000 0000     		.space	2
 169              		.section	.rodata._ZN8touchgfxL25RenderingVariant_BilinearE,"a"
 170              		.align	1
 173              	_ZN8touchgfxL25RenderingVariant_BilinearE:
 174 0000 0100     		.short	1
 175              		.section	.rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE,"a"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 6


 176              		.align	1
 179              	_ZN8touchgfxL24RenderingVariant_NoAlphaE:
 180 0000 0000     		.space	2
 181              		.section	.rodata._ZN8touchgfxL22RenderingVariant_AlphaE,"a"
 182              		.align	1
 185              	_ZN8touchgfxL22RenderingVariant_AlphaE:
 186 0000 0200     		.short	2
 187              		.section	.rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE,"a"
 188              		.align	1
 191              	_ZN8touchgfxL28RenderingVariant_FormatShiftE:
 192 0000 0200     		.short	2
 193              		.section	.rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE,"a"
 194              		.align	1
 197              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
 198 0000 FEFF     		.short	-2
 199              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
 200              		.align	1
 203              	_ZN8touchgfxL14BITMAP_INVALIDE:
 204 0000 FFFF     		.short	-1
 205              		.section	.text._ZN8touchgfx15TouchControllerD2Ev,"axG",%progbits,_ZN8touchgfx15TouchControllerD5Ev
 206              		.align	1
 207              		.weak	_ZN8touchgfx15TouchControllerD2Ev
 208              		.syntax unified
 209              		.thumb
 210              		.thumb_func
 211              		.fpu fpv4-sp-d16
 213              	_ZN8touchgfx15TouchControllerD2Ev:
 214              	.LFB54:
 215              		.file 2 "Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp"
   1:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****  * @file platform/driver/touch/TouchController.hpp
  15:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****  * Declares the touchgfx::TouchController interface class.
  17:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** #ifndef TOUCHGFX_TOUCHCONTROLLER_HPP
  19:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** #define TOUCHGFX_TOUCHCONTROLLER_HPP
  20:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** 
  23:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** namespace touchgfx
  24:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** {
  25:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** /** Basic Touch Controller interface. */
  26:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** class TouchController
  27:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** {
  28:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** public:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 7


  29:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     /** Finalizes an instance of the TouchController class. */
  30:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     virtual ~TouchController()
 216              		.loc 2 30 13
 217              		.cfi_startproc
 218              		@ args = 0, pretend = 0, frame = 8
 219              		@ frame_needed = 1, uses_anonymous_args = 0
 220              		@ link register save eliminated.
 221 0000 80B4     		push	{r7}
 222              	.LCFI12:
 223              		.cfi_def_cfa_offset 4
 224              		.cfi_offset 7, -4
 225 0002 83B0     		sub	sp, sp, #12
 226              	.LCFI13:
 227              		.cfi_def_cfa_offset 16
 228 0004 00AF     		add	r7, sp, #0
 229              	.LCFI14:
 230              		.cfi_def_cfa_register 7
 231 0006 7860     		str	r0, [r7, #4]
 232              	.LBB4:
  31:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     {
 233              		.loc 2 31 5
 234 0008 044A     		ldr	r2, .L7
 235 000a 7B68     		ldr	r3, [r7, #4]
 236 000c 1A60     		str	r2, [r3]
 237              	.LBE4:
  32:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     }
 238              		.loc 2 32 5
 239 000e 7B68     		ldr	r3, [r7, #4]
 240 0010 1846     		mov	r0, r3
 241 0012 0C37     		adds	r7, r7, #12
 242              	.LCFI15:
 243              		.cfi_def_cfa_offset 4
 244 0014 BD46     		mov	sp, r7
 245              	.LCFI16:
 246              		.cfi_def_cfa_register 13
 247              		@ sp needed
 248 0016 5DF8047B 		ldr	r7, [sp], #4
 249              	.LCFI17:
 250              		.cfi_restore 7
 251              		.cfi_def_cfa_offset 0
 252 001a 7047     		bx	lr
 253              	.L8:
 254              		.align	2
 255              	.L7:
 256 001c 08000000 		.word	_ZTVN8touchgfx15TouchControllerE+8
 257              		.cfi_endproc
 258              	.LFE54:
 260              		.weak	_ZN8touchgfx15TouchControllerD1Ev
 261              		.thumb_set _ZN8touchgfx15TouchControllerD1Ev,_ZN8touchgfx15TouchControllerD2Ev
 262              		.section	.text._ZN8touchgfx15TouchControllerD0Ev,"axG",%progbits,_ZN8touchgfx15TouchControllerD5Ev
 263              		.align	1
 264              		.weak	_ZN8touchgfx15TouchControllerD0Ev
 265              		.syntax unified
 266              		.thumb
 267              		.thumb_func
 268              		.fpu fpv4-sp-d16
 270              	_ZN8touchgfx15TouchControllerD0Ev:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 8


 271              	.LFB56:
  30:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     {
 272              		.loc 2 30 13
 273              		.cfi_startproc
 274              		@ args = 0, pretend = 0, frame = 8
 275              		@ frame_needed = 1, uses_anonymous_args = 0
 276 0000 80B5     		push	{r7, lr}
 277              	.LCFI18:
 278              		.cfi_def_cfa_offset 8
 279              		.cfi_offset 7, -8
 280              		.cfi_offset 14, -4
 281 0002 82B0     		sub	sp, sp, #8
 282              	.LCFI19:
 283              		.cfi_def_cfa_offset 16
 284 0004 00AF     		add	r7, sp, #0
 285              	.LCFI20:
 286              		.cfi_def_cfa_register 7
 287 0006 7860     		str	r0, [r7, #4]
 288              		.loc 2 32 5
 289 0008 7868     		ldr	r0, [r7, #4]
 290 000a FFF7FEFF 		bl	_ZN8touchgfx15TouchControllerD1Ev
 291 000e 0421     		movs	r1, #4
 292 0010 7868     		ldr	r0, [r7, #4]
 293 0012 FFF7FEFF 		bl	_ZdlPvj
 294 0016 7B68     		ldr	r3, [r7, #4]
 295 0018 1846     		mov	r0, r3
 296 001a 0837     		adds	r7, r7, #8
 297              	.LCFI21:
 298              		.cfi_def_cfa_offset 8
 299 001c BD46     		mov	sp, r7
 300              	.LCFI22:
 301              		.cfi_def_cfa_register 13
 302              		@ sp needed
 303 001e 80BD     		pop	{r7, pc}
 304              		.cfi_endproc
 305              	.LFE56:
 307              		.section	.text._ZN8touchgfx15TouchControllerC2Ev,"axG",%progbits,_ZN8touchgfx15TouchControllerC5Ev
 308              		.align	1
 309              		.weak	_ZN8touchgfx15TouchControllerC2Ev
 310              		.syntax unified
 311              		.thumb
 312              		.thumb_func
 313              		.fpu fpv4-sp-d16
 315              	_ZN8touchgfx15TouchControllerC2Ev:
 316              	.LFB59:
  26:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** {
 317              		.loc 2 26 7
 318              		.cfi_startproc
 319              		@ args = 0, pretend = 0, frame = 8
 320              		@ frame_needed = 1, uses_anonymous_args = 0
 321              		@ link register save eliminated.
 322 0000 80B4     		push	{r7}
 323              	.LCFI23:
 324              		.cfi_def_cfa_offset 4
 325              		.cfi_offset 7, -4
 326 0002 83B0     		sub	sp, sp, #12
 327              	.LCFI24:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 9


 328              		.cfi_def_cfa_offset 16
 329 0004 00AF     		add	r7, sp, #0
 330              	.LCFI25:
 331              		.cfi_def_cfa_register 7
 332 0006 7860     		str	r0, [r7, #4]
 333              	.LBB5:
  26:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp **** {
 334              		.loc 2 26 7
 335 0008 044A     		ldr	r2, .L13
 336 000a 7B68     		ldr	r3, [r7, #4]
 337 000c 1A60     		str	r2, [r3]
 338              	.LBE5:
 339 000e 7B68     		ldr	r3, [r7, #4]
 340 0010 1846     		mov	r0, r3
 341 0012 0C37     		adds	r7, r7, #12
 342              	.LCFI26:
 343              		.cfi_def_cfa_offset 4
 344 0014 BD46     		mov	sp, r7
 345              	.LCFI27:
 346              		.cfi_def_cfa_register 13
 347              		@ sp needed
 348 0016 5DF8047B 		ldr	r7, [sp], #4
 349              	.LCFI28:
 350              		.cfi_restore 7
 351              		.cfi_def_cfa_offset 0
 352 001a 7047     		bx	lr
 353              	.L14:
 354              		.align	2
 355              	.L13:
 356 001c 08000000 		.word	_ZTVN8touchgfx15TouchControllerE+8
 357              		.cfi_endproc
 358              	.LFE59:
 360              		.weak	_ZN8touchgfx15TouchControllerC1Ev
 361              		.thumb_set _ZN8touchgfx15TouchControllerC1Ev,_ZN8touchgfx15TouchControllerC2Ev
 362              		.section	.text._ZN20STM32TouchControllerC2Ev,"axG",%progbits,_ZN20STM32TouchControllerC5Ev,comdat
 363              		.align	1
 364              		.weak	_ZN20STM32TouchControllerC2Ev
 365              		.syntax unified
 366              		.thumb
 367              		.thumb_func
 368              		.fpu fpv4-sp-d16
 370              	_ZN20STM32TouchControllerC2Ev:
 371              	.LFB61:
 372              		.file 3 "Src/STM32TouchController.hpp"
   1:Src/STM32TouchController.hpp **** /**
   2:Src/STM32TouchController.hpp ****   ******************************************************************************
   3:Src/STM32TouchController.hpp ****   * File Name          : STM32TouchController.hpp
   4:Src/STM32TouchController.hpp ****   ******************************************************************************
   5:Src/STM32TouchController.hpp ****   * @attention
   6:Src/STM32TouchController.hpp ****   *
   7:Src/STM32TouchController.hpp ****   * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/STM32TouchController.hpp ****   * All rights reserved.</center></h2>
   9:Src/STM32TouchController.hpp ****   *
  10:Src/STM32TouchController.hpp ****   * This software component is licensed by ST under Ultimate Liberty license
  11:Src/STM32TouchController.hpp ****   * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/STM32TouchController.hpp ****   * the License. You may obtain a copy of the License at:
  13:Src/STM32TouchController.hpp ****   *                             www.st.com/SLA0044
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 10


  14:Src/STM32TouchController.hpp ****   *
  15:Src/STM32TouchController.hpp ****   ******************************************************************************
  16:Src/STM32TouchController.hpp ****   */
  17:Src/STM32TouchController.hpp **** 
  18:Src/STM32TouchController.hpp **** /* USER CODE BEGIN STM32TouchController */
  19:Src/STM32TouchController.hpp **** 
  20:Src/STM32TouchController.hpp **** #ifndef STM32TOUCHCONTROLLER_HPP
  21:Src/STM32TouchController.hpp **** #define STM32TOUCHCONTROLLER_HPP
  22:Src/STM32TouchController.hpp **** 
  23:Src/STM32TouchController.hpp **** #include <platform/driver/touch/TouchController.hpp>
  24:Src/STM32TouchController.hpp **** 
  25:Src/STM32TouchController.hpp **** /**
  26:Src/STM32TouchController.hpp ****  * @class STM32TouchController
  27:Src/STM32TouchController.hpp ****  *
  28:Src/STM32TouchController.hpp ****  * @brief This class specializes TouchController Interface.
  29:Src/STM32TouchController.hpp ****  *
  30:Src/STM32TouchController.hpp ****  * @sa touchgfx::TouchController
  31:Src/STM32TouchController.hpp ****  */
  32:Src/STM32TouchController.hpp **** 
  33:Src/STM32TouchController.hpp **** class STM32TouchController : public touchgfx::TouchController
  34:Src/STM32TouchController.hpp **** {
  35:Src/STM32TouchController.hpp **** public:
  36:Src/STM32TouchController.hpp **** 
  37:Src/STM32TouchController.hpp ****     STM32TouchController() {}
 373              		.loc 3 37 5
 374              		.cfi_startproc
 375              		@ args = 0, pretend = 0, frame = 8
 376              		@ frame_needed = 1, uses_anonymous_args = 0
 377 0000 80B5     		push	{r7, lr}
 378              	.LCFI29:
 379              		.cfi_def_cfa_offset 8
 380              		.cfi_offset 7, -8
 381              		.cfi_offset 14, -4
 382 0002 82B0     		sub	sp, sp, #8
 383              	.LCFI30:
 384              		.cfi_def_cfa_offset 16
 385 0004 00AF     		add	r7, sp, #0
 386              	.LCFI31:
 387              		.cfi_def_cfa_register 7
 388 0006 7860     		str	r0, [r7, #4]
 389              	.LBB6:
 390              		.loc 3 37 28
 391 0008 7B68     		ldr	r3, [r7, #4]
 392 000a 1846     		mov	r0, r3
 393 000c FFF7FEFF 		bl	_ZN8touchgfx15TouchControllerC2Ev
 394 0010 034A     		ldr	r2, .L17
 395 0012 7B68     		ldr	r3, [r7, #4]
 396 0014 1A60     		str	r2, [r3]
 397              	.LBE6:
 398              		.loc 3 37 29
 399 0016 7B68     		ldr	r3, [r7, #4]
 400 0018 1846     		mov	r0, r3
 401 001a 0837     		adds	r7, r7, #8
 402              	.LCFI32:
 403              		.cfi_def_cfa_offset 8
 404 001c BD46     		mov	sp, r7
 405              	.LCFI33:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 11


 406              		.cfi_def_cfa_register 13
 407              		@ sp needed
 408 001e 80BD     		pop	{r7, pc}
 409              	.L18:
 410              		.align	2
 411              	.L17:
 412 0020 08000000 		.word	_ZTV20STM32TouchController+8
 413              		.cfi_endproc
 414              	.LFE61:
 416              		.weak	_ZN20STM32TouchControllerC1Ev
 417              		.thumb_set _ZN20STM32TouchControllerC1Ev,_ZN20STM32TouchControllerC2Ev
 418              		.section	.text._ZN8touchgfx9DMA_QueueD2Ev,"axG",%progbits,_ZN8touchgfx9DMA_QueueD5Ev,comdat
 419              		.align	1
 420              		.weak	_ZN8touchgfx9DMA_QueueD2Ev
 421              		.syntax unified
 422              		.thumb
 423              		.thumb_func
 424              		.fpu fpv4-sp-d16
 426              	_ZN8touchgfx9DMA_QueueD2Ev:
 427              	.LFB147:
 428              		.file 4 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * @file touchgfx/hal/DMA.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * Declares the touchgfx::DMA_Queue (abstract), touchgfx::LockFreeDMA_Queue and
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * touchgfx::DMA_Interface (abstract) classes.
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  */
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** #ifndef TOUCHGFX_DMA_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** #define TOUCHGFX_DMA_HPP
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** #include <touchgfx/hal/Types.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** #include <touchgfx/hal/Atomic.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** #include <touchgfx/hal/BlitOp.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** namespace touchgfx
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** {
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** class DMA_Interface;
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** /**
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * This class provides an interface for a FIFO (circular) list used by DMA_Interface and
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * descendants for storing BlitOp's.
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  */
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** class DMA_Queue
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** {
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     friend class DMA_Interface;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 12


  37:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** public:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Query if this object is empty.
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return true if the queue is empty.
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual bool isEmpty() = 0;
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Query if this object is full.
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return true if the queue is full.
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual bool isFull() = 0;
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Adds the specified blitop to the queue.
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @param  op The blitop to add.
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void pushCopyOf(const BlitOp& op) = 0;
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /** Finalizes an instance of the DMA_Queue class. */
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual ~DMA_Queue()
 429              		.loc 4 61 13
 430              		.cfi_startproc
 431              		@ args = 0, pretend = 0, frame = 8
 432              		@ frame_needed = 1, uses_anonymous_args = 0
 433              		@ link register save eliminated.
 434 0000 80B4     		push	{r7}
 435              	.LCFI34:
 436              		.cfi_def_cfa_offset 4
 437              		.cfi_offset 7, -4
 438 0002 83B0     		sub	sp, sp, #12
 439              	.LCFI35:
 440              		.cfi_def_cfa_offset 16
 441 0004 00AF     		add	r7, sp, #0
 442              	.LCFI36:
 443              		.cfi_def_cfa_register 7
 444 0006 7860     		str	r0, [r7, #4]
 445              	.LBB7:
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 446              		.loc 4 62 5
 447 0008 044A     		ldr	r2, .L21
 448 000a 7B68     		ldr	r3, [r7, #4]
 449 000c 1A60     		str	r2, [r3]
 450              	.LBE7:
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 451              		.loc 4 63 5
 452 000e 7B68     		ldr	r3, [r7, #4]
 453 0010 1846     		mov	r0, r3
 454 0012 0C37     		adds	r7, r7, #12
 455              	.LCFI37:
 456              		.cfi_def_cfa_offset 4
 457 0014 BD46     		mov	sp, r7
 458              	.LCFI38:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 13


 459              		.cfi_def_cfa_register 13
 460              		@ sp needed
 461 0016 5DF8047B 		ldr	r7, [sp], #4
 462              	.LCFI39:
 463              		.cfi_restore 7
 464              		.cfi_def_cfa_offset 0
 465 001a 7047     		bx	lr
 466              	.L22:
 467              		.align	2
 468              	.L21:
 469 001c 08000000 		.word	_ZTVN8touchgfx9DMA_QueueE+8
 470              		.cfi_endproc
 471              	.LFE147:
 473              		.weak	_ZN8touchgfx9DMA_QueueD1Ev
 474              		.thumb_set _ZN8touchgfx9DMA_QueueD1Ev,_ZN8touchgfx9DMA_QueueD2Ev
 475              		.section	.text._ZN8touchgfx9DMA_QueueD0Ev,"axG",%progbits,_ZN8touchgfx9DMA_QueueD5Ev,comdat
 476              		.align	1
 477              		.weak	_ZN8touchgfx9DMA_QueueD0Ev
 478              		.syntax unified
 479              		.thumb
 480              		.thumb_func
 481              		.fpu fpv4-sp-d16
 483              	_ZN8touchgfx9DMA_QueueD0Ev:
 484              	.LFB149:
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 485              		.loc 4 61 13
 486              		.cfi_startproc
 487              		@ args = 0, pretend = 0, frame = 8
 488              		@ frame_needed = 1, uses_anonymous_args = 0
 489 0000 80B5     		push	{r7, lr}
 490              	.LCFI40:
 491              		.cfi_def_cfa_offset 8
 492              		.cfi_offset 7, -8
 493              		.cfi_offset 14, -4
 494 0002 82B0     		sub	sp, sp, #8
 495              	.LCFI41:
 496              		.cfi_def_cfa_offset 16
 497 0004 00AF     		add	r7, sp, #0
 498              	.LCFI42:
 499              		.cfi_def_cfa_register 7
 500 0006 7860     		str	r0, [r7, #4]
 501              		.loc 4 63 5
 502 0008 7868     		ldr	r0, [r7, #4]
 503 000a FFF7FEFF 		bl	_ZN8touchgfx9DMA_QueueD1Ev
 504 000e 0421     		movs	r1, #4
 505 0010 7868     		ldr	r0, [r7, #4]
 506 0012 FFF7FEFF 		bl	_ZdlPvj
 507 0016 7B68     		ldr	r3, [r7, #4]
 508 0018 1846     		mov	r0, r3
 509 001a 0837     		adds	r7, r7, #8
 510              	.LCFI43:
 511              		.cfi_def_cfa_offset 8
 512 001c BD46     		mov	sp, r7
 513              	.LCFI44:
 514              		.cfi_def_cfa_register 13
 515              		@ sp needed
 516 001e 80BD     		pop	{r7, pc}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 14


 517              		.cfi_endproc
 518              	.LFE149:
 520              		.section	.text._ZN8touchgfx13DMA_Interface10initializeEv,"axG",%progbits,_ZN8touchgfx13DMA_Interfa
 521              		.align	1
 522              		.weak	_ZN8touchgfx13DMA_Interface10initializeEv
 523              		.syntax unified
 524              		.thumb
 525              		.thumb_func
 526              		.fpu fpv4-sp-d16
 528              	_ZN8touchgfx13DMA_Interface10initializeEv:
 529              	.LFB154:
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** protected:
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /** Initializes a new instance of the DMA_Queue class. */
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     DMA_Queue()
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /** Pops an element from the queue. */
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void pop() = 0;
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Gets the first element in the queue.
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return The first element in the queue.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual const BlitOp* first() = 0;
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** };
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** /**
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * This implements a simple lock-free FIFO queue (single producer, single consumer)
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  *
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * @see DMA_Queue
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  */
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** class LockFreeDMA_Queue : public DMA_Queue
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** {
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** public:
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Constructs a lock-free queue.
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @param [out] mem Pointer to the memory used by the queue to store elements.
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @param       n   Number of elements the memory provided can contain.
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     LockFreeDMA_Queue(BlitOp* mem, atomic_t n);
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual bool isEmpty();
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual bool isFull();
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void pushCopyOf(const BlitOp& op);
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** protected:
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void pop();
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual const BlitOp* first();
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     BlitOp* q;         ///< Pointer to the queue memory.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 15


 110:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     atomic_t capacity; ///< The number of elements the queue can contain.
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     atomic_t head;     ///< Index to the head element.
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     atomic_t tail;     ///< Index to the tail element.
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** };
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** /**
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * DMA_Interface provides basic functionality and structure for processing "blit" operations
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  * using DMA.
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****  */
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** class DMA_Interface
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** {
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** public:
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Gets the blit capabilities of this DMA.
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return The blit operations supported by this DMA implementation.
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual BlitOperations getBlitCaps() = 0;
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Inserts a BlitOp for processing. This also potentially starts the DMA controller, if
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * not already running.
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @param  op The operation to add.
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void addToQueue(const BlitOp& op);
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /** This function blocks until all DMA transfers in the queue have been completed. */
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void flush()
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****         waitForFrameBufferSemaphore();
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /** Perform initialization. Does nothing in this base class. */
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void initialize()
 530              		.loc 4 144 18
 531              		.cfi_startproc
 532              		@ args = 0, pretend = 0, frame = 8
 533              		@ frame_needed = 1, uses_anonymous_args = 0
 534              		@ link register save eliminated.
 535 0000 80B4     		push	{r7}
 536              	.LCFI45:
 537              		.cfi_def_cfa_offset 4
 538              		.cfi_offset 7, -4
 539 0002 83B0     		sub	sp, sp, #12
 540              	.LCFI46:
 541              		.cfi_def_cfa_offset 16
 542 0004 00AF     		add	r7, sp, #0
 543              	.LCFI47:
 544              		.cfi_def_cfa_register 7
 545 0006 7860     		str	r0, [r7, #4]
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 546              		.loc 4 146 5
 547 0008 00BF     		nop
 548 000a 0C37     		adds	r7, r7, #12
 549              	.LCFI48:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 16


 550              		.cfi_def_cfa_offset 4
 551 000c BD46     		mov	sp, r7
 552              	.LCFI49:
 553              		.cfi_def_cfa_register 13
 554              		@ sp needed
 555 000e 5DF8047B 		ldr	r7, [sp], #4
 556              	.LCFI50:
 557              		.cfi_restore 7
 558              		.cfi_def_cfa_offset 0
 559 0012 7047     		bx	lr
 560              		.cfi_endproc
 561              	.LFE154:
 563              		.section	.text._ZN8touchgfx13DMA_Interface10getDMATypeEv,"axG",%progbits,_ZN8touchgfx13DMA_Interfa
 564              		.align	1
 565              		.weak	_ZN8touchgfx13DMA_Interface10getDMATypeEv
 566              		.syntax unified
 567              		.thumb
 568              		.thumb_func
 569              		.fpu fpv4-sp-d16
 571              	_ZN8touchgfx13DMA_Interface10getDMATypeEv:
 572              	.LFB158:
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Query if the DMA is running.
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return true if a DMA operation is currently in progress.
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     bool isDMARunning()
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****         return isRunning;
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Sets whether or not a DMA operation is allowed to begin. Used in single-buffering to
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * avoid changing the framebuffer while display is being updated.
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @param  allowed true if DMA transfers are allowed.
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     void setAllowed(bool allowed)
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****         isAllowed = allowed;
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Gets whether a DMA operation is allowed to begin. Used in single-buffering to avoid
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * changing the framebuffer while display is being updated.
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return true if DMA is allowed to start, false if not.
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     bool getAllowed() const
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****         return isAllowed;
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /** Signals that DMA transfers can start. If any elements are in the queue, start it. */
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void start();
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 17


 183:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * This function is called automatically by the framework when a DMA interrupt has been
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * received.
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * This function is called automatically by the framework when a DMA interrupt has been
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * received.
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual void signalDMAInterrupt() = 0;
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Query if the DMA queue is empty.
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return 1 if DMA queue is empty, else 0.
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     uint8_t isDmaQueueEmpty();
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Query if the DMA queue is full.
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return 1 if DMA queue is full, else 0.
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     uint8_t isDmaQueueFull();
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Function for obtaining the DMA type of the concrete DMA_Interface implementation. As
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * default, will return DMA_TYPE_GENERIC type value.
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @return a DMAType value of the concrete DMA_Interface implementation.
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 212:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual DMAType getDMAType(void)
 573              		.loc 4 212 21
 574              		.cfi_startproc
 575              		@ args = 0, pretend = 0, frame = 8
 576              		@ frame_needed = 1, uses_anonymous_args = 0
 577              		@ link register save eliminated.
 578 0000 80B4     		push	{r7}
 579              	.LCFI51:
 580              		.cfi_def_cfa_offset 4
 581              		.cfi_offset 7, -4
 582 0002 83B0     		sub	sp, sp, #12
 583              	.LCFI52:
 584              		.cfi_def_cfa_offset 16
 585 0004 00AF     		add	r7, sp, #0
 586              	.LCFI53:
 587              		.cfi_def_cfa_register 7
 588 0006 7860     		str	r0, [r7, #4]
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****         return DMA_TYPE_GENERIC;
 589              		.loc 4 214 16
 590 0008 0023     		movs	r3, #0
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 591              		.loc 4 215 5
 592 000a 1846     		mov	r0, r3
 593 000c 0C37     		adds	r7, r7, #12
 594              	.LCFI54:
 595              		.cfi_def_cfa_offset 4
 596 000e BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 18


 597              	.LCFI55:
 598              		.cfi_def_cfa_register 13
 599              		@ sp needed
 600 0010 5DF8047B 		ldr	r7, [sp], #4
 601              	.LCFI56:
 602              		.cfi_restore 7
 603              		.cfi_def_cfa_offset 0
 604 0014 7047     		bx	lr
 605              		.cfi_endproc
 606              	.LFE158:
 608              		.section	.text._ZN8touchgfx13DMA_InterfaceD2Ev,"axG",%progbits,_ZN8touchgfx13DMA_InterfaceD5Ev,com
 609              		.align	1
 610              		.weak	_ZN8touchgfx13DMA_InterfaceD2Ev
 611              		.syntax unified
 612              		.thumb
 613              		.thumb_func
 614              		.fpu fpv4-sp-d16
 616              	_ZN8touchgfx13DMA_InterfaceD2Ev:
 617              	.LFB160:
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /** Finalizes an instance of the DMA_Interface class. */
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     virtual ~DMA_Interface()
 618              		.loc 4 218 13
 619              		.cfi_startproc
 620              		@ args = 0, pretend = 0, frame = 8
 621              		@ frame_needed = 1, uses_anonymous_args = 0
 622              		@ link register save eliminated.
 623 0000 80B4     		push	{r7}
 624              	.LCFI57:
 625              		.cfi_def_cfa_offset 4
 626              		.cfi_offset 7, -4
 627 0002 83B0     		sub	sp, sp, #12
 628              	.LCFI58:
 629              		.cfi_def_cfa_offset 16
 630 0004 00AF     		add	r7, sp, #0
 631              	.LCFI59:
 632              		.cfi_def_cfa_register 7
 633 0006 7860     		str	r0, [r7, #4]
 634              	.LBB8:
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 635              		.loc 4 219 5
 636 0008 044A     		ldr	r2, .L30
 637 000a 7B68     		ldr	r3, [r7, #4]
 638 000c 1A60     		str	r2, [r3]
 639              	.LBE8:
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 640              		.loc 4 220 5
 641 000e 7B68     		ldr	r3, [r7, #4]
 642 0010 1846     		mov	r0, r3
 643 0012 0C37     		adds	r7, r7, #12
 644              	.LCFI60:
 645              		.cfi_def_cfa_offset 4
 646 0014 BD46     		mov	sp, r7
 647              	.LCFI61:
 648              		.cfi_def_cfa_register 13
 649              		@ sp needed
 650 0016 5DF8047B 		ldr	r7, [sp], #4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 19


 651              	.LCFI62:
 652              		.cfi_restore 7
 653              		.cfi_def_cfa_offset 0
 654 001a 7047     		bx	lr
 655              	.L31:
 656              		.align	2
 657              	.L30:
 658 001c 08000000 		.word	_ZTVN8touchgfx13DMA_InterfaceE+8
 659              		.cfi_endproc
 660              	.LFE160:
 662              		.weak	_ZN8touchgfx13DMA_InterfaceD1Ev
 663              		.thumb_set _ZN8touchgfx13DMA_InterfaceD1Ev,_ZN8touchgfx13DMA_InterfaceD2Ev
 664              		.section	.text._ZN8touchgfx13DMA_InterfaceD0Ev,"axG",%progbits,_ZN8touchgfx13DMA_InterfaceD5Ev,com
 665              		.align	1
 666              		.weak	_ZN8touchgfx13DMA_InterfaceD0Ev
 667              		.syntax unified
 668              		.thumb
 669              		.thumb_func
 670              		.fpu fpv4-sp-d16
 672              	_ZN8touchgfx13DMA_InterfaceD0Ev:
 673              	.LFB162:
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 674              		.loc 4 218 13
 675              		.cfi_startproc
 676              		@ args = 0, pretend = 0, frame = 8
 677              		@ frame_needed = 1, uses_anonymous_args = 0
 678 0000 80B5     		push	{r7, lr}
 679              	.LCFI63:
 680              		.cfi_def_cfa_offset 8
 681              		.cfi_offset 7, -8
 682              		.cfi_offset 14, -4
 683 0002 82B0     		sub	sp, sp, #8
 684              	.LCFI64:
 685              		.cfi_def_cfa_offset 16
 686 0004 00AF     		add	r7, sp, #0
 687              	.LCFI65:
 688              		.cfi_def_cfa_register 7
 689 0006 7860     		str	r0, [r7, #4]
 690              		.loc 4 220 5
 691 0008 7868     		ldr	r0, [r7, #4]
 692 000a FFF7FEFF 		bl	_ZN8touchgfx13DMA_InterfaceD1Ev
 693 000e 0C21     		movs	r1, #12
 694 0010 7868     		ldr	r0, [r7, #4]
 695 0012 FFF7FEFF 		bl	_ZdlPvj
 696 0016 7B68     		ldr	r3, [r7, #4]
 697 0018 1846     		mov	r0, r3
 698 001a 0837     		adds	r7, r7, #8
 699              	.LCFI66:
 700              		.cfi_def_cfa_offset 8
 701 001c BD46     		mov	sp, r7
 702              	.LCFI67:
 703              		.cfi_def_cfa_register 13
 704              		@ sp needed
 705 001e 80BD     		pop	{r7, pc}
 706              		.cfi_endproc
 707              	.LFE162:
 709              		.section	.text._ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE,"axG",%progbits,_ZN8touchgfx13DMA_Int
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 20


 710              		.align	1
 711              		.weak	_ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE
 712              		.syntax unified
 713              		.thumb
 714              		.thumb_func
 715              		.fpu fpv4-sp-d16
 717              	_ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE:
 718              	.LFB164:
 221:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** 
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** protected:
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     /**
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * Constructs a DMA Interface object.
 225:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      *
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      * @param [in] dmaQueue Reference to the queue of DMA operations.
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****      */
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     DMA_Interface(DMA_Queue& dmaQueue)
 719              		.loc 4 228 5
 720              		.cfi_startproc
 721              		@ args = 0, pretend = 0, frame = 8
 722              		@ frame_needed = 1, uses_anonymous_args = 0
 723              		@ link register save eliminated.
 724 0000 80B4     		push	{r7}
 725              	.LCFI68:
 726              		.cfi_def_cfa_offset 4
 727              		.cfi_offset 7, -4
 728 0002 83B0     		sub	sp, sp, #12
 729              	.LCFI69:
 730              		.cfi_def_cfa_offset 16
 731 0004 00AF     		add	r7, sp, #0
 732              	.LCFI70:
 733              		.cfi_def_cfa_register 7
 734 0006 7860     		str	r0, [r7, #4]
 735 0008 3960     		str	r1, [r7]
 736              	.LBB9:
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****         : queue(dmaQueue), isRunning(false), isAllowed(false)
 737              		.loc 4 229 61
 738 000a 094A     		ldr	r2, .L36
 739 000c 7B68     		ldr	r3, [r7, #4]
 740 000e 1A60     		str	r2, [r3]
 741 0010 7B68     		ldr	r3, [r7, #4]
 742 0012 3A68     		ldr	r2, [r7]
 743 0014 5A60     		str	r2, [r3, #4]
 744 0016 7B68     		ldr	r3, [r7, #4]
 745 0018 0022     		movs	r2, #0
 746 001a 1A72     		strb	r2, [r3, #8]
 747 001c 7B68     		ldr	r3, [r7, #4]
 748 001e 0022     		movs	r2, #0
 749 0020 5A72     		strb	r2, [r3, #9]
 750              	.LBE9:
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     {
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp ****     }
 751              		.loc 4 231 5
 752 0022 7B68     		ldr	r3, [r7, #4]
 753 0024 1846     		mov	r0, r3
 754 0026 0C37     		adds	r7, r7, #12
 755              	.LCFI71:
 756              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 21


 757 0028 BD46     		mov	sp, r7
 758              	.LCFI72:
 759              		.cfi_def_cfa_register 13
 760              		@ sp needed
 761 002a 5DF8047B 		ldr	r7, [sp], #4
 762              	.LCFI73:
 763              		.cfi_restore 7
 764              		.cfi_def_cfa_offset 0
 765 002e 7047     		bx	lr
 766              	.L37:
 767              		.align	2
 768              	.L36:
 769 0030 08000000 		.word	_ZTVN8touchgfx13DMA_InterfaceE+8
 770              		.cfi_endproc
 771              	.LFE164:
 773              		.weak	_ZN8touchgfx13DMA_InterfaceC1ERNS_9DMA_QueueE
 774              		.thumb_set _ZN8touchgfx13DMA_InterfaceC1ERNS_9DMA_QueueE,_ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_Qu
 775              		.section	.text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE,"axG",%progbits,
 776              		.align	1
 777              		.weak	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
 778              		.syntax unified
 779              		.thumb
 780              		.thumb_func
 781              		.fpu fpv4-sp-d16
 783              	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:
 784              	.LFB178:
 785              		.file 5 "Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  * @file touchgfx/UIEventListener.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  * Declares the touchgfx::ClickEvent, touchgfx::DragEvent, touchgfx::GestureEvent and
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  * touchgfx::UIEventListener classes.
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  */
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** #ifndef TOUCHGFX_UIEVENTLISTENER_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** #define TOUCHGFX_UIEVENTLISTENER_HPP
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** #include <touchgfx/hal/Types.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** #include <touchgfx/events/ClickEvent.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** #include <touchgfx/events/DragEvent.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** #include <touchgfx/events/GestureEvent.hpp>
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** namespace touchgfx
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** {
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** /**
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  * This class declares a handler interface for user interface events, i.e. events generated by
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 22


  31:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  * the users interaction with the device. With the exception of the system timer tick,
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  * all other system events, which are not related to the user interface device
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  * peripherals (display, keys etc.) are not part of this interface.
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****  */
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** class UIEventListener
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** {
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** public:
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a mouse click or display touch event has been detected
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * by the system.
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  event The event data.
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleClickEvent(const ClickEvent& event)
 786              		.loc 5 44 18
 787              		.cfi_startproc
 788              		@ args = 0, pretend = 0, frame = 8
 789              		@ frame_needed = 1, uses_anonymous_args = 0
 790              		@ link register save eliminated.
 791 0000 80B4     		push	{r7}
 792              	.LCFI74:
 793              		.cfi_def_cfa_offset 4
 794              		.cfi_offset 7, -4
 795 0002 83B0     		sub	sp, sp, #12
 796              	.LCFI75:
 797              		.cfi_def_cfa_offset 16
 798 0004 00AF     		add	r7, sp, #0
 799              	.LCFI76:
 800              		.cfi_def_cfa_register 7
 801 0006 7860     		str	r0, [r7, #4]
 802 0008 3960     		str	r1, [r7]
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 803              		.loc 5 46 5
 804 000a 00BF     		nop
 805 000c 0C37     		adds	r7, r7, #12
 806              	.LCFI77:
 807              		.cfi_def_cfa_offset 4
 808 000e BD46     		mov	sp, r7
 809              	.LCFI78:
 810              		.cfi_def_cfa_register 13
 811              		@ sp needed
 812 0010 5DF8047B 		ldr	r7, [sp], #4
 813              	.LCFI79:
 814              		.cfi_restore 7
 815              		.cfi_def_cfa_offset 0
 816 0014 7047     		bx	lr
 817              		.cfi_endproc
 818              	.LFE178:
 820              		.section	.text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE,"axG",%progbits,_ZN
 821              		.align	1
 822              		.weak	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
 823              		.syntax unified
 824              		.thumb
 825              		.thumb_func
 826              		.fpu fpv4-sp-d16
 828              	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 23


 829              	.LFB179:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a drag event has been detected by the system.
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  event The event data.
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleDragEvent(const DragEvent& event)
 830              		.loc 5 53 18
 831              		.cfi_startproc
 832              		@ args = 0, pretend = 0, frame = 8
 833              		@ frame_needed = 1, uses_anonymous_args = 0
 834              		@ link register save eliminated.
 835 0000 80B4     		push	{r7}
 836              	.LCFI80:
 837              		.cfi_def_cfa_offset 4
 838              		.cfi_offset 7, -4
 839 0002 83B0     		sub	sp, sp, #12
 840              	.LCFI81:
 841              		.cfi_def_cfa_offset 16
 842 0004 00AF     		add	r7, sp, #0
 843              	.LCFI82:
 844              		.cfi_def_cfa_register 7
 845 0006 7860     		str	r0, [r7, #4]
 846 0008 3960     		str	r1, [r7]
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 847              		.loc 5 55 5
 848 000a 00BF     		nop
 849 000c 0C37     		adds	r7, r7, #12
 850              	.LCFI83:
 851              		.cfi_def_cfa_offset 4
 852 000e BD46     		mov	sp, r7
 853              	.LCFI84:
 854              		.cfi_def_cfa_register 13
 855              		@ sp needed
 856 0010 5DF8047B 		ldr	r7, [sp], #4
 857              	.LCFI85:
 858              		.cfi_restore 7
 859              		.cfi_def_cfa_offset 0
 860 0014 7047     		bx	lr
 861              		.cfi_endproc
 862              	.LFE179:
 864              		.section	.text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE,"axG",%progb
 865              		.align	1
 866              		.weak	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
 867              		.syntax unified
 868              		.thumb
 869              		.thumb_func
 870              		.fpu fpv4-sp-d16
 872              	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:
 873              	.LFB180:
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a gesture event has been detected by the system.
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  event The event data.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 24


  61:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleGestureEvent(const GestureEvent& event)
 874              		.loc 5 62 18
 875              		.cfi_startproc
 876              		@ args = 0, pretend = 0, frame = 8
 877              		@ frame_needed = 1, uses_anonymous_args = 0
 878              		@ link register save eliminated.
 879 0000 80B4     		push	{r7}
 880              	.LCFI86:
 881              		.cfi_def_cfa_offset 4
 882              		.cfi_offset 7, -4
 883 0002 83B0     		sub	sp, sp, #12
 884              	.LCFI87:
 885              		.cfi_def_cfa_offset 16
 886 0004 00AF     		add	r7, sp, #0
 887              	.LCFI88:
 888              		.cfi_def_cfa_register 7
 889 0006 7860     		str	r0, [r7, #4]
 890 0008 3960     		str	r1, [r7]
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 891              		.loc 5 64 5
 892 000a 00BF     		nop
 893 000c 0C37     		adds	r7, r7, #12
 894              	.LCFI89:
 895              		.cfi_def_cfa_offset 4
 896 000e BD46     		mov	sp, r7
 897              	.LCFI90:
 898              		.cfi_def_cfa_register 13
 899              		@ sp needed
 900 0010 5DF8047B 		ldr	r7, [sp], #4
 901              	.LCFI91:
 902              		.cfi_restore 7
 903              		.cfi_def_cfa_offset 0
 904 0014 7047     		bx	lr
 905              		.cfi_endproc
 906              	.LFE180:
 908              		.section	.text._ZN8touchgfx15UIEventListener14handleKeyEventEh,"axG",%progbits,_ZN8touchgfx15UIEve
 909              		.align	1
 910              		.weak	_ZN8touchgfx15UIEventListener14handleKeyEventEh
 911              		.syntax unified
 912              		.thumb
 913              		.thumb_func
 914              		.fpu fpv4-sp-d16
 916              	_ZN8touchgfx15UIEventListener14handleKeyEventEh:
 917              	.LFB181:
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a key (or button) event has been detected by the system.
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  c The key or button pressed.
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleKeyEvent(uint8_t c)
 918              		.loc 5 71 18
 919              		.cfi_startproc
 920              		@ args = 0, pretend = 0, frame = 8
 921              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 25


 922              		@ link register save eliminated.
 923 0000 80B4     		push	{r7}
 924              	.LCFI92:
 925              		.cfi_def_cfa_offset 4
 926              		.cfi_offset 7, -4
 927 0002 83B0     		sub	sp, sp, #12
 928              	.LCFI93:
 929              		.cfi_def_cfa_offset 16
 930 0004 00AF     		add	r7, sp, #0
 931              	.LCFI94:
 932              		.cfi_def_cfa_register 7
 933 0006 7860     		str	r0, [r7, #4]
 934 0008 0B46     		mov	r3, r1
 935 000a FB70     		strb	r3, [r7, #3]
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 936              		.loc 5 73 5
 937 000c 00BF     		nop
 938 000e 0C37     		adds	r7, r7, #12
 939              	.LCFI95:
 940              		.cfi_def_cfa_offset 4
 941 0010 BD46     		mov	sp, r7
 942              	.LCFI96:
 943              		.cfi_def_cfa_register 13
 944              		@ sp needed
 945 0012 5DF8047B 		ldr	r7, [sp], #4
 946              	.LCFI97:
 947              		.cfi_restore 7
 948              		.cfi_def_cfa_offset 0
 949 0016 7047     		bx	lr
 950              		.cfi_endproc
 951              	.LFE181:
 953              		.section	.text._ZN8touchgfx15UIEventListener15handleTickEventEv,"axG",%progbits,_ZN8touchgfx15UIEv
 954              		.align	1
 955              		.weak	_ZN8touchgfx15UIEventListener15handleTickEventEv
 956              		.syntax unified
 957              		.thumb
 958              		.thumb_func
 959              		.fpu fpv4-sp-d16
 961              	_ZN8touchgfx15UIEventListener15handleTickEventEv:
 962              	.LFB182:
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a system tick event has been generated. The system tick
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * period is configured in the HAL.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleTickEvent()
 963              		.loc 5 79 18
 964              		.cfi_startproc
 965              		@ args = 0, pretend = 0, frame = 8
 966              		@ frame_needed = 1, uses_anonymous_args = 0
 967              		@ link register save eliminated.
 968 0000 80B4     		push	{r7}
 969              	.LCFI98:
 970              		.cfi_def_cfa_offset 4
 971              		.cfi_offset 7, -4
 972 0002 83B0     		sub	sp, sp, #12
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 26


 973              	.LCFI99:
 974              		.cfi_def_cfa_offset 16
 975 0004 00AF     		add	r7, sp, #0
 976              	.LCFI100:
 977              		.cfi_def_cfa_register 7
 978 0006 7860     		str	r0, [r7, #4]
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 979              		.loc 5 81 5
 980 0008 00BF     		nop
 981 000a 0C37     		adds	r7, r7, #12
 982              	.LCFI101:
 983              		.cfi_def_cfa_offset 4
 984 000c BD46     		mov	sp, r7
 985              	.LCFI102:
 986              		.cfi_def_cfa_register 13
 987              		@ sp needed
 988 000e 5DF8047B 		ldr	r7, [sp], #4
 989              	.LCFI103:
 990              		.cfi_restore 7
 991              		.cfi_def_cfa_offset 0
 992 0012 7047     		bx	lr
 993              		.cfi_endproc
 994              	.LFE182:
 996              		.section	.text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv,"axG",%progbits,_ZN8
 997              		.align	1
 998              		.weak	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
 999              		.syntax unified
 1000              		.thumb
 1001              		.thumb_func
 1002              		.fpu fpv4-sp-d16
 1004              	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:
 1005              	.LFB183:
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /** This handler is invoked when a change screen event is pending. */
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handlePendingScreenTransition()
 1006              		.loc 5 84 18
 1007              		.cfi_startproc
 1008              		@ args = 0, pretend = 0, frame = 8
 1009              		@ frame_needed = 1, uses_anonymous_args = 0
 1010              		@ link register save eliminated.
 1011 0000 80B4     		push	{r7}
 1012              	.LCFI104:
 1013              		.cfi_def_cfa_offset 4
 1014              		.cfi_offset 7, -4
 1015 0002 83B0     		sub	sp, sp, #12
 1016              	.LCFI105:
 1017              		.cfi_def_cfa_offset 16
 1018 0004 00AF     		add	r7, sp, #0
 1019              	.LCFI106:
 1020              		.cfi_def_cfa_register 7
 1021 0006 7860     		str	r0, [r7, #4]
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 1022              		.loc 5 86 5
 1023 0008 00BF     		nop
 1024 000a 0C37     		adds	r7, r7, #12
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 27


 1025              	.LCFI107:
 1026              		.cfi_def_cfa_offset 4
 1027 000c BD46     		mov	sp, r7
 1028              	.LCFI108:
 1029              		.cfi_def_cfa_register 13
 1030              		@ sp needed
 1031 000e 5DF8047B 		ldr	r7, [sp], #4
 1032              	.LCFI109:
 1033              		.cfi_restore 7
 1034              		.cfi_def_cfa_offset 0
 1035 0012 7047     		bx	lr
 1036              		.cfi_endproc
 1037              	.LFE183:
 1039              		.section	.text._ZN8touchgfx15UIEventListenerD2Ev,"axG",%progbits,_ZN8touchgfx15UIEventListenerD5Ev
 1040              		.align	1
 1041              		.weak	_ZN8touchgfx15UIEventListenerD2Ev
 1042              		.syntax unified
 1043              		.thumb
 1044              		.thumb_func
 1045              		.fpu fpv4-sp-d16
 1047              	_ZN8touchgfx15UIEventListenerD2Ev:
 1048              	.LFB185:
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /** Finalizes an instance of the UIEventListener class. */
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual ~UIEventListener()
 1049              		.loc 5 89 13
 1050              		.cfi_startproc
 1051              		@ args = 0, pretend = 0, frame = 8
 1052              		@ frame_needed = 1, uses_anonymous_args = 0
 1053              		@ link register save eliminated.
 1054 0000 80B4     		push	{r7}
 1055              	.LCFI110:
 1056              		.cfi_def_cfa_offset 4
 1057              		.cfi_offset 7, -4
 1058 0002 83B0     		sub	sp, sp, #12
 1059              	.LCFI111:
 1060              		.cfi_def_cfa_offset 16
 1061 0004 00AF     		add	r7, sp, #0
 1062              	.LCFI112:
 1063              		.cfi_def_cfa_register 7
 1064 0006 7860     		str	r0, [r7, #4]
 1065              	.LBB10:
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
 1066              		.loc 5 90 5
 1067 0008 044A     		ldr	r2, .L46
 1068 000a 7B68     		ldr	r3, [r7, #4]
 1069 000c 1A60     		str	r2, [r3]
 1070              	.LBE10:
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 1071              		.loc 5 91 5
 1072 000e 7B68     		ldr	r3, [r7, #4]
 1073 0010 1846     		mov	r0, r3
 1074 0012 0C37     		adds	r7, r7, #12
 1075              	.LCFI113:
 1076              		.cfi_def_cfa_offset 4
 1077 0014 BD46     		mov	sp, r7
 1078              	.LCFI114:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 28


 1079              		.cfi_def_cfa_register 13
 1080              		@ sp needed
 1081 0016 5DF8047B 		ldr	r7, [sp], #4
 1082              	.LCFI115:
 1083              		.cfi_restore 7
 1084              		.cfi_def_cfa_offset 0
 1085 001a 7047     		bx	lr
 1086              	.L47:
 1087              		.align	2
 1088              	.L46:
 1089 001c 08000000 		.word	_ZTVN8touchgfx15UIEventListenerE+8
 1090              		.cfi_endproc
 1091              	.LFE185:
 1093              		.weak	_ZN8touchgfx15UIEventListenerD1Ev
 1094              		.thumb_set _ZN8touchgfx15UIEventListenerD1Ev,_ZN8touchgfx15UIEventListenerD2Ev
 1095              		.section	.text._ZN8touchgfx15UIEventListenerD0Ev,"axG",%progbits,_ZN8touchgfx15UIEventListenerD5Ev
 1096              		.align	1
 1097              		.weak	_ZN8touchgfx15UIEventListenerD0Ev
 1098              		.syntax unified
 1099              		.thumb
 1100              		.thumb_func
 1101              		.fpu fpv4-sp-d16
 1103              	_ZN8touchgfx15UIEventListenerD0Ev:
 1104              	.LFB187:
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
 1105              		.loc 5 89 13
 1106              		.cfi_startproc
 1107              		@ args = 0, pretend = 0, frame = 8
 1108              		@ frame_needed = 1, uses_anonymous_args = 0
 1109 0000 80B5     		push	{r7, lr}
 1110              	.LCFI116:
 1111              		.cfi_def_cfa_offset 8
 1112              		.cfi_offset 7, -8
 1113              		.cfi_offset 14, -4
 1114 0002 82B0     		sub	sp, sp, #8
 1115              	.LCFI117:
 1116              		.cfi_def_cfa_offset 16
 1117 0004 00AF     		add	r7, sp, #0
 1118              	.LCFI118:
 1119              		.cfi_def_cfa_register 7
 1120 0006 7860     		str	r0, [r7, #4]
 1121              		.loc 5 91 5
 1122 0008 7868     		ldr	r0, [r7, #4]
 1123 000a FFF7FEFF 		bl	_ZN8touchgfx15UIEventListenerD1Ev
 1124 000e 0421     		movs	r1, #4
 1125 0010 7868     		ldr	r0, [r7, #4]
 1126 0012 FFF7FEFF 		bl	_ZdlPvj
 1127 0016 7B68     		ldr	r3, [r7, #4]
 1128 0018 1846     		mov	r0, r3
 1129 001a 0837     		adds	r7, r7, #8
 1130              	.LCFI119:
 1131              		.cfi_def_cfa_offset 8
 1132 001c BD46     		mov	sp, r7
 1133              	.LCFI120:
 1134              		.cfi_def_cfa_register 13
 1135              		@ sp needed
 1136 001e 80BD     		pop	{r7, pc}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 29


 1137              		.cfi_endproc
 1138              	.LFE187:
 1140              		.section	.text._ZN8touchgfx8Gestures9DragStateC2Ev,"axG",%progbits,_ZN8touchgfx8Gestures9DragState
 1141              		.align	1
 1142              		.weak	_ZN8touchgfx8Gestures9DragStateC2Ev
 1143              		.syntax unified
 1144              		.thumb
 1145              		.thumb_func
 1146              		.fpu fpv4-sp-d16
 1148              	_ZN8touchgfx8Gestures9DragStateC2Ev:
 1149              	.LFB189:
 1150              		.file 6 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****  * @file touchgfx/hal/Gestures.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****  * Declares the touchgfx::Gestures class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** #ifndef TOUCHGFX_GESTURES_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** #define TOUCHGFX_GESTURES_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** #include <touchgfx/UIEventListener.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** #include <touchgfx/events/ClickEvent.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** /** This class implements the detection of gestures. */
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** class Gestures
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** {
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     static const uint8_t MAX_TICKS_BETWEEN_MOVES_FOR_SWIPE = 7;
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     static const uint8_t MIN_VELOCITY_AT_RELEASE_BEFORE_SWIPE = 3;
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** 
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     /** Defines the state of a drag. */
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     struct DragState
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     {
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         DragState()
 1151              		.loc 6 36 9
 1152              		.cfi_startproc
 1153              		@ args = 0, pretend = 0, frame = 8
 1154              		@ frame_needed = 1, uses_anonymous_args = 0
 1155              		@ link register save eliminated.
 1156 0000 80B4     		push	{r7}
 1157              	.LCFI121:
 1158              		.cfi_def_cfa_offset 4
 1159              		.cfi_offset 7, -4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 30


 1160 0002 83B0     		sub	sp, sp, #12
 1161              	.LCFI122:
 1162              		.cfi_def_cfa_offset 16
 1163 0004 00AF     		add	r7, sp, #0
 1164              	.LCFI123:
 1165              		.cfi_def_cfa_register 7
 1166 0006 7860     		str	r0, [r7, #4]
 1167              	.LBB11:
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****             : startX(0),
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****               startY(0),
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****               downX(0),
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****               downY(0),
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****               tickCount(0),
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****               velocityX(0),
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****               velocityY(0),
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****               inProgress(false)
 1168              		.loc 6 44 31
 1169 0008 7B68     		ldr	r3, [r7, #4]
 1170 000a 0022     		movs	r2, #0
 1171 000c 1A80     		strh	r2, [r3]	@ movhi
 1172 000e 7B68     		ldr	r3, [r7, #4]
 1173 0010 0022     		movs	r2, #0
 1174 0012 5A80     		strh	r2, [r3, #2]	@ movhi
 1175 0014 7B68     		ldr	r3, [r7, #4]
 1176 0016 0022     		movs	r2, #0
 1177 0018 9A80     		strh	r2, [r3, #4]	@ movhi
 1178 001a 7B68     		ldr	r3, [r7, #4]
 1179 001c 0022     		movs	r2, #0
 1180 001e DA80     		strh	r2, [r3, #6]	@ movhi
 1181 0020 7B68     		ldr	r3, [r7, #4]
 1182 0022 0022     		movs	r2, #0
 1183 0024 1A81     		strh	r2, [r3, #8]	@ movhi
 1184 0026 7B68     		ldr	r3, [r7, #4]
 1185 0028 0022     		movs	r2, #0
 1186 002a 5A81     		strh	r2, [r3, #10]	@ movhi
 1187 002c 7B68     		ldr	r3, [r7, #4]
 1188 002e 0022     		movs	r2, #0
 1189 0030 9A81     		strh	r2, [r3, #12]	@ movhi
 1190 0032 7B68     		ldr	r3, [r7, #4]
 1191 0034 0022     		movs	r2, #0
 1192 0036 9A73     		strb	r2, [r3, #14]
 1193              	.LBE11:
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         {
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         }
 1194              		.loc 6 46 9
 1195 0038 7B68     		ldr	r3, [r7, #4]
 1196 003a 1846     		mov	r0, r3
 1197 003c 0C37     		adds	r7, r7, #12
 1198              	.LCFI124:
 1199              		.cfi_def_cfa_offset 4
 1200 003e BD46     		mov	sp, r7
 1201              	.LCFI125:
 1202              		.cfi_def_cfa_register 13
 1203              		@ sp needed
 1204 0040 5DF8047B 		ldr	r7, [sp], #4
 1205              	.LCFI126:
 1206              		.cfi_restore 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 31


 1207              		.cfi_def_cfa_offset 0
 1208 0044 7047     		bx	lr
 1209              		.cfi_endproc
 1210              	.LFE189:
 1212              		.weak	_ZN8touchgfx8Gestures9DragStateC1Ev
 1213              		.thumb_set _ZN8touchgfx8Gestures9DragStateC1Ev,_ZN8touchgfx8Gestures9DragStateC2Ev
 1214              		.section	.text._ZN8touchgfx8GesturesC2Ev,"axG",%progbits,_ZN8touchgfx8GesturesC5Ev,comdat
 1215              		.align	1
 1216              		.weak	_ZN8touchgfx8GesturesC2Ev
 1217              		.syntax unified
 1218              		.thumb
 1219              		.thumb_func
 1220              		.fpu fpv4-sp-d16
 1222              	_ZN8touchgfx8GesturesC2Ev:
 1223              	.LFB192:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** 
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         uint16_t startX;    ///< Starting x coordinate
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         uint16_t startY;    ///< Starting y coordinate
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         uint16_t downX;     ///< Starting x coordinate of the drag
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         uint16_t downY;     ///< Starting x coordinate of the drag
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         uint16_t tickCount; ///< Measures the timing of the drag
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         int16_t velocityX;  ///< The velocity (X orientation) of the drag
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         int16_t velocityY;  ///< The velocity (Y orientation) of the drag
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         bool inProgress;    ///< Whether a drag is in progress or not
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     };
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** 
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp **** public:
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     /** Default constructor. Does nothing. */
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     Gestures()
 1224              		.loc 6 60 5
 1225              		.cfi_startproc
 1226              		@ args = 0, pretend = 0, frame = 8
 1227              		@ frame_needed = 1, uses_anonymous_args = 0
 1228 0000 80B5     		push	{r7, lr}
 1229              	.LCFI127:
 1230              		.cfi_def_cfa_offset 8
 1231              		.cfi_offset 7, -8
 1232              		.cfi_offset 14, -4
 1233 0002 82B0     		sub	sp, sp, #8
 1234              	.LCFI128:
 1235              		.cfi_def_cfa_offset 16
 1236 0004 00AF     		add	r7, sp, #0
 1237              	.LCFI129:
 1238              		.cfi_def_cfa_register 7
 1239 0006 7860     		str	r0, [r7, #4]
 1240              	.LBB12:
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****         : drag(), listener(0), dragThresholdValue(0)
 1241              		.loc 6 61 52
 1242 0008 7B68     		ldr	r3, [r7, #4]
 1243 000a 1846     		mov	r0, r3
 1244 000c FFF7FEFF 		bl	_ZN8touchgfx8Gestures9DragStateC1Ev
 1245 0010 7B68     		ldr	r3, [r7, #4]
 1246 0012 0022     		movs	r2, #0
 1247 0014 1A61     		str	r2, [r3, #16]
 1248 0016 7B68     		ldr	r3, [r7, #4]
 1249 0018 0022     		movs	r2, #0
 1250 001a 9A82     		strh	r2, [r3, #20]	@ movhi
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 32


 1251              	.LBE12:
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     {
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp ****     }
 1252              		.loc 6 63 5
 1253 001c 7B68     		ldr	r3, [r7, #4]
 1254 001e 1846     		mov	r0, r3
 1255 0020 0837     		adds	r7, r7, #8
 1256              	.LCFI130:
 1257              		.cfi_def_cfa_offset 8
 1258 0022 BD46     		mov	sp, r7
 1259              	.LCFI131:
 1260              		.cfi_def_cfa_register 13
 1261              		@ sp needed
 1262 0024 80BD     		pop	{r7, pc}
 1263              		.cfi_endproc
 1264              	.LFE192:
 1266              		.weak	_ZN8touchgfx8GesturesC1Ev
 1267              		.thumb_set _ZN8touchgfx8GesturesC1Ev,_ZN8touchgfx8GesturesC2Ev
 1268              		.section	.text._ZN8touchgfx3LCDD2Ev,"axG",%progbits,_ZN8touchgfx3LCDD5Ev,comdat
 1269              		.align	1
 1270              		.weak	_ZN8touchgfx3LCDD2Ev
 1271              		.syntax unified
 1272              		.thumb
 1273              		.thumb_func
 1274              		.fpu fpv4-sp-d16
 1276              	_ZN8touchgfx3LCDD2Ev:
 1277              	.LFB264:
 1278              		.file 7 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * @file touchgfx/lcd/LCD.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * This file contains two super classes, namely LCD and DebugPrinter. The LCD class specifies
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * various functions that allow drawing images, texts and boxes on the display. In general,
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * these functions are available through various widgets which encapsulates these drawing
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * operations and keep track of the state of image/text/etc. Please consult the documentation
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * for the widgets for more information.
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  *
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * @see touchgfx::LCD, touchgfx::DebugPrinter
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  */
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #ifndef TOUCHGFX_LCD_HPP
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #define TOUCHGFX_LCD_HPP
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** 
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** // LCD is defined in some CubeFW C header file. We have to undef to be able to create the LCD class
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #ifdef LCD
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #undef LCD
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 33


  30:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #endif
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** 
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #include <touchgfx/hal/Types.hpp>
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #include <touchgfx/Bitmap.hpp>
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #include <touchgfx/Font.hpp>
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #include <touchgfx/TextProvider.hpp>
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #include <touchgfx/TextureMapTypes.hpp>
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #include <touchgfx/Unicode.hpp>
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** #include <touchgfx/lcd/DebugPrinter.hpp>
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** 
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** namespace touchgfx
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** {
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** /**
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * This class contains the various low-level drawing routines for drawing bitmaps, texts and
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * rectangles/boxes. Normally, these draw operations are called from widgets, which also
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * keep track of logical states such as visibility etc.
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  *
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * The LCD class cannot be instantiated, instead use one of the subclasses which
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * implements the LCD drawing operations for a specific display configuration.
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  *
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  * @note All coordinates sent to functions in the LCD class are expected to be in absolute
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  *       coordinates, i.e. (0, 0) is upper left corner of the display.
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****  */
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** class LCD
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** {
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** public:
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     /** Initializes a new instance of the LCD class. */
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     LCD()
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****         : textureMapperClass(0)
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     {
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     }
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp **** 
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     /** Finalizes an instance of the LCD class. */
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     virtual ~LCD()
 1279              		.loc 7 63 13
 1280              		.cfi_startproc
 1281              		@ args = 0, pretend = 0, frame = 8
 1282              		@ frame_needed = 1, uses_anonymous_args = 0
 1283              		@ link register save eliminated.
 1284 0000 80B4     		push	{r7}
 1285              	.LCFI132:
 1286              		.cfi_def_cfa_offset 4
 1287              		.cfi_offset 7, -4
 1288 0002 83B0     		sub	sp, sp, #12
 1289              	.LCFI133:
 1290              		.cfi_def_cfa_offset 16
 1291 0004 00AF     		add	r7, sp, #0
 1292              	.LCFI134:
 1293              		.cfi_def_cfa_register 7
 1294 0006 7860     		str	r0, [r7, #4]
 1295              	.LBB13:
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     {
 1296              		.loc 7 64 5
 1297 0008 044A     		ldr	r2, .L56
 1298 000a 7B68     		ldr	r3, [r7, #4]
 1299 000c 1A60     		str	r2, [r3]
 1300              	.LBE13:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 34


  65:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     }
 1301              		.loc 7 65 5
 1302 000e 7B68     		ldr	r3, [r7, #4]
 1303 0010 1846     		mov	r0, r3
 1304 0012 0C37     		adds	r7, r7, #12
 1305              	.LCFI135:
 1306              		.cfi_def_cfa_offset 4
 1307 0014 BD46     		mov	sp, r7
 1308              	.LCFI136:
 1309              		.cfi_def_cfa_register 13
 1310              		@ sp needed
 1311 0016 5DF8047B 		ldr	r7, [sp], #4
 1312              	.LCFI137:
 1313              		.cfi_restore 7
 1314              		.cfi_def_cfa_offset 0
 1315 001a 7047     		bx	lr
 1316              	.L57:
 1317              		.align	2
 1318              	.L56:
 1319 001c 08000000 		.word	_ZTVN8touchgfx3LCDE+8
 1320              		.cfi_endproc
 1321              	.LFE264:
 1323              		.weak	_ZN8touchgfx3LCDD1Ev
 1324              		.thumb_set _ZN8touchgfx3LCDD1Ev,_ZN8touchgfx3LCDD2Ev
 1325              		.section	.text._ZN8touchgfx3LCDD0Ev,"axG",%progbits,_ZN8touchgfx3LCDD5Ev,comdat
 1326              		.align	1
 1327              		.weak	_ZN8touchgfx3LCDD0Ev
 1328              		.syntax unified
 1329              		.thumb
 1330              		.thumb_func
 1331              		.fpu fpv4-sp-d16
 1333              	_ZN8touchgfx3LCDD0Ev:
 1334              	.LFB266:
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp ****     {
 1335              		.loc 7 63 13
 1336              		.cfi_startproc
 1337              		@ args = 0, pretend = 0, frame = 8
 1338              		@ frame_needed = 1, uses_anonymous_args = 0
 1339 0000 80B5     		push	{r7, lr}
 1340              	.LCFI138:
 1341              		.cfi_def_cfa_offset 8
 1342              		.cfi_offset 7, -8
 1343              		.cfi_offset 14, -4
 1344 0002 82B0     		sub	sp, sp, #8
 1345              	.LCFI139:
 1346              		.cfi_def_cfa_offset 16
 1347 0004 00AF     		add	r7, sp, #0
 1348              	.LCFI140:
 1349              		.cfi_def_cfa_register 7
 1350 0006 7860     		str	r0, [r7, #4]
 1351              		.loc 7 65 5
 1352 0008 7868     		ldr	r0, [r7, #4]
 1353 000a FFF7FEFF 		bl	_ZN8touchgfx3LCDD1Ev
 1354 000e 0821     		movs	r1, #8
 1355 0010 7868     		ldr	r0, [r7, #4]
 1356 0012 FFF7FEFF 		bl	_ZdlPvj
 1357 0016 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 35


 1358 0018 1846     		mov	r0, r3
 1359 001a 0837     		adds	r7, r7, #8
 1360              	.LCFI141:
 1361              		.cfi_def_cfa_offset 8
 1362 001c BD46     		mov	sp, r7
 1363              	.LCFI142:
 1364              		.cfi_def_cfa_register 13
 1365              		@ sp needed
 1366 001e 80BD     		pop	{r7, pc}
 1367              		.cfi_endproc
 1368              	.LFE266:
 1370              		.section	.text._ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt,"axG",%pro
 1371              		.align	1
 1372              		.weak	_ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt
 1373              		.syntax unified
 1374              		.thumb
 1375              		.thumb_func
 1376              		.fpu fpv4-sp-d16
 1378              	_ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt:
 1379              	.LFB318:
 1380              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 36


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
 1381              		.loc 8 55 5
 1382              		.cfi_startproc
 1383              		@ args = 8, pretend = 0, frame = 16
 1384              		@ frame_needed = 1, uses_anonymous_args = 0
 1385 0000 80B5     		push	{r7, lr}
 1386              	.LCFI143:
 1387              		.cfi_def_cfa_offset 8
 1388              		.cfi_offset 7, -8
 1389              		.cfi_offset 14, -4
 1390 0002 84B0     		sub	sp, sp, #16
 1391              	.LCFI144:
 1392              		.cfi_def_cfa_offset 24
 1393 0004 00AF     		add	r7, sp, #0
 1394              	.LCFI145:
 1395              		.cfi_def_cfa_register 7
 1396 0006 F860     		str	r0, [r7, #12]
 1397 0008 B960     		str	r1, [r7, #8]
 1398 000a 7A60     		str	r2, [r7, #4]
 1399 000c 3B60     		str	r3, [r7]
 1400              	.LBB14:
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         : dma(dmaInterface),
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           lcdRef(display),
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           touchController(touchCtrl),
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****           mcuInstrumentation(0),
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 37


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
 1401              		.loc 8 91 36
 1402 000e 554A     		ldr	r2, .L62
 1403 0010 FB68     		ldr	r3, [r7, #12]
 1404 0012 1A60     		str	r2, [r3]
 1405 0014 FB68     		ldr	r3, [r7, #12]
 1406 0016 BA68     		ldr	r2, [r7, #8]
 1407 0018 5A60     		str	r2, [r3, #4]
 1408 001a FB68     		ldr	r3, [r7, #12]
 1409 001c 7A68     		ldr	r2, [r7, #4]
 1410 001e 9A60     		str	r2, [r3, #8]
 1411 0020 FB68     		ldr	r3, [r7, #12]
 1412 0022 3A68     		ldr	r2, [r7]
 1413 0024 DA60     		str	r2, [r3, #12]
 1414 0026 FB68     		ldr	r3, [r7, #12]
 1415 0028 0022     		movs	r2, #0
 1416 002a 1A61     		str	r2, [r3, #16]
 1417 002c FB68     		ldr	r3, [r7, #12]
 1418 002e 0022     		movs	r2, #0
 1419 0030 5A61     		str	r2, [r3, #20]
 1420 0032 FB68     		ldr	r3, [r7, #12]
 1421 0034 0022     		movs	r2, #0
 1422 0036 9A61     		str	r2, [r3, #24]
 1423 0038 FB68     		ldr	r3, [r7, #12]
 1424 003a 1C33     		adds	r3, r3, #28
 1425 003c 1846     		mov	r0, r3
 1426 003e FFF7FEFF 		bl	_ZN8touchgfx8GesturesC1Ev
 1427 0042 FB68     		ldr	r3, [r7, #12]
 1428 0044 0022     		movs	r2, #0
 1429 0046 83F83420 		strb	r2, [r3, #52]
 1430 004a FB68     		ldr	r3, [r7, #12]
 1431 004c 0022     		movs	r2, #0
 1432 004e 9A63     		str	r2, [r3, #56]
 1433 0050 FB68     		ldr	r3, [r7, #12]
 1434 0052 0022     		movs	r2, #0
 1435 0054 DA63     		str	r2, [r3, #60]
 1436 0056 FB68     		ldr	r3, [r7, #12]
 1437 0058 0022     		movs	r2, #0
 1438 005a 1A64     		str	r2, [r3, #64]
 1439 005c FB68     		ldr	r3, [r7, #12]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 38


 1440 005e 0022     		movs	r2, #0
 1441 0060 5A64     		str	r2, [r3, #68]
 1442 0062 FB68     		ldr	r3, [r7, #12]
 1443 0064 0022     		movs	r2, #0
 1444 0066 83F84820 		strb	r2, [r3, #72]
 1445 006a FB68     		ldr	r3, [r7, #12]
 1446 006c 0122     		movs	r2, #1
 1447 006e 83F84920 		strb	r2, [r3, #73]
 1448 0072 FB68     		ldr	r3, [r7, #12]
 1449 0074 0022     		movs	r2, #0
 1450 0076 83F84A20 		strb	r2, [r3, #74]
 1451 007a FB68     		ldr	r3, [r7, #12]
 1452 007c 0022     		movs	r2, #0
 1453 007e 83F84B20 		strb	r2, [r3, #75]
 1454 0082 FB68     		ldr	r3, [r7, #12]
 1455 0084 0022     		movs	r2, #0
 1456 0086 DA64     		str	r2, [r3, #76]
 1457 0088 FB68     		ldr	r3, [r7, #12]
 1458 008a 5033     		adds	r3, r3, #80
 1459 008c 1846     		mov	r0, r3
 1460 008e FFF7FEFF 		bl	_ZN8touchgfx4RectC1Ev
 1461 0092 FB68     		ldr	r3, [r7, #12]
 1462 0094 0022     		movs	r2, #0
 1463 0096 9A65     		str	r2, [r3, #88]
 1464 0098 FB68     		ldr	r3, [r7, #12]
 1465 009a 0022     		movs	r2, #0
 1466 009c DA65     		str	r2, [r3, #92]
 1467 009e FB68     		ldr	r3, [r7, #12]
 1468 00a0 0022     		movs	r2, #0
 1469 00a2 1A66     		str	r2, [r3, #96]
 1470 00a4 FB68     		ldr	r3, [r7, #12]
 1471 00a6 0122     		movs	r2, #1
 1472 00a8 83F86420 		strb	r2, [r3, #100]
 1473 00ac FB68     		ldr	r3, [r7, #12]
 1474 00ae 0022     		movs	r2, #0
 1475 00b0 83F86520 		strb	r2, [r3, #101]
 1476 00b4 FB68     		ldr	r3, [r7, #12]
 1477 00b6 0022     		movs	r2, #0
 1478 00b8 83F86620 		strb	r2, [r3, #102]
 1479 00bc FB68     		ldr	r3, [r7, #12]
 1480 00be 0122     		movs	r2, #1
 1481 00c0 83F86720 		strb	r2, [r3, #103]
 1482 00c4 FB68     		ldr	r3, [r7, #12]
 1483 00c6 0022     		movs	r2, #0
 1484 00c8 83F86820 		strb	r2, [r3, #104]
 1485 00cc FB68     		ldr	r3, [r7, #12]
 1486 00ce 0022     		movs	r2, #0
 1487 00d0 83F86920 		strb	r2, [r3, #105]
 1488 00d4 FB68     		ldr	r3, [r7, #12]
 1489 00d6 0022     		movs	r2, #0
 1490 00d8 83F86A20 		strb	r2, [r3, #106]
 1491 00dc FB68     		ldr	r3, [r7, #12]
 1492 00de 0022     		movs	r2, #0
 1493 00e0 83F86B20 		strb	r2, [r3, #107]
 1494 00e4 FB68     		ldr	r3, [r7, #12]
 1495 00e6 0022     		movs	r2, #0
 1496 00e8 83F86C20 		strb	r2, [r3, #108]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 39


 1497 00ec FB68     		ldr	r3, [r7, #12]
 1498 00ee 0022     		movs	r2, #0
 1499 00f0 1A67     		str	r2, [r3, #112]
 1500 00f2 FB68     		ldr	r3, [r7, #12]
 1501 00f4 0022     		movs	r2, #0
 1502 00f6 83F87420 		strb	r2, [r3, #116]
 1503 00fa FB68     		ldr	r3, [r7, #12]
 1504 00fc 0022     		movs	r2, #0
 1505 00fe 83F87520 		strb	r2, [r3, #117]
 1506 0102 FB68     		ldr	r3, [r7, #12]
 1507 0104 0022     		movs	r2, #0
 1508 0106 83F87620 		strb	r2, [r3, #118]
 1509 010a FB68     		ldr	r3, [r7, #12]
 1510 010c 0122     		movs	r2, #1
 1511 010e 83F87720 		strb	r2, [r3, #119]
 1512 0112 FB68     		ldr	r3, [r7, #12]
 1513 0114 0122     		movs	r2, #1
 1514 0116 83F87820 		strb	r2, [r3, #120]
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         instance = this;
 1515              		.loc 8 93 18
 1516 011a 134A     		ldr	r2, .L62+4
 1517 011c FB68     		ldr	r3, [r7, #12]
 1518 011e 1360     		str	r3, [r2]
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         DISPLAY_WIDTH = width;
 1519              		.loc 8 94 23
 1520 0120 124A     		ldr	r2, .L62+8
 1521 0122 3B8B     		ldrh	r3, [r7, #24]	@ movhi
 1522 0124 1380     		strh	r3, [r2]	@ movhi
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         DISPLAY_HEIGHT = height;
 1523              		.loc 8 95 24
 1524 0126 124A     		ldr	r2, .L62+12
 1525 0128 BB8B     		ldrh	r3, [r7, #28]	@ movhi
 1526 012a 1380     		strh	r3, [r2]	@ movhi
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         DISPLAY_ROTATION = rotate0;
 1527              		.loc 8 96 26
 1528 012c 114B     		ldr	r3, .L62+16
 1529 012e 0022     		movs	r2, #0
 1530 0130 1A70     		strb	r2, [r3]
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         FRAME_BUFFER_WIDTH = DISPLAY_WIDTH;
 1531              		.loc 8 97 28
 1532 0132 0E4B     		ldr	r3, .L62+8
 1533 0134 1A88     		ldrh	r2, [r3]
 1534 0136 104B     		ldr	r3, .L62+20
 1535 0138 1A80     		strh	r2, [r3]	@ movhi
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         FRAME_BUFFER_HEIGHT = DISPLAY_HEIGHT;
 1536              		.loc 8 98 29
 1537 013a 0D4B     		ldr	r3, .L62+12
 1538 013c 1A88     		ldrh	r2, [r3]
 1539 013e 0F4B     		ldr	r3, .L62+24
 1540 0140 1A80     		strh	r2, [r3]	@ movhi
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         nativeDisplayOrientation = ((width >= height) ? ORIENTATION_LANDSCAPE : ORIENTATION_PORTRAI
 1541              		.loc 8 99 55
 1542 0142 3A8B     		ldrh	r2, [r7, #24]
 1543 0144 BB8B     		ldrh	r3, [r7, #28]
 1544 0146 9A42     		cmp	r2, r3
 1545 0148 34BF     		ite	cc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 40


 1546 014a 0123     		movcc	r3, #1
 1547 014c 0023     		movcs	r3, #0
 1548 014e DBB2     		uxtb	r3, r3
 1549 0150 1A46     		mov	r2, r3
 1550              		.loc 8 99 34
 1551 0152 FB68     		ldr	r3, [r7, #12]
 1552 0154 83F83420 		strb	r2, [r3, #52]
 1553              	.LBE14:
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 1554              		.loc 8 100 5
 1555 0158 FB68     		ldr	r3, [r7, #12]
 1556 015a 1846     		mov	r0, r3
 1557 015c 1037     		adds	r7, r7, #16
 1558              	.LCFI146:
 1559              		.cfi_def_cfa_offset 8
 1560 015e BD46     		mov	sp, r7
 1561              	.LCFI147:
 1562              		.cfi_def_cfa_register 13
 1563              		@ sp needed
 1564 0160 80BD     		pop	{r7, pc}
 1565              	.L63:
 1566 0162 00BF     		.align	2
 1567              	.L62:
 1568 0164 08000000 		.word	_ZTVN8touchgfx3HALE+8
 1569 0168 00000000 		.word	_ZN8touchgfx3HAL8instanceE
 1570 016c 00000000 		.word	_ZN8touchgfx3HAL13DISPLAY_WIDTHE
 1571 0170 00000000 		.word	_ZN8touchgfx3HAL14DISPLAY_HEIGHTE
 1572 0174 00000000 		.word	_ZN8touchgfx3HAL16DISPLAY_ROTATIONE
 1573 0178 00000000 		.word	_ZN8touchgfx3HAL18FRAME_BUFFER_WIDTHE
 1574 017c 00000000 		.word	_ZN8touchgfx3HAL19FRAME_BUFFER_HEIGHTE
 1575              		.cfi_endproc
 1576              	.LFE318:
 1578              		.weak	_ZN8touchgfx3HALC1ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt
 1579              		.thumb_set _ZN8touchgfx3HALC1ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt,_ZN8touchgfx3H
 1580              		.section	.text._ZN8touchgfx3HALD2Ev,"axG",%progbits,_ZN8touchgfx3HALD5Ev,comdat
 1581              		.align	1
 1582              		.weak	_ZN8touchgfx3HALD2Ev
 1583              		.syntax unified
 1584              		.thumb
 1585              		.thumb_func
 1586              		.fpu fpv4-sp-d16
 1588              	_ZN8touchgfx3HALD2Ev:
 1589              	.LFB321:
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Finalizes an instance of the HAL class. */
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual ~HAL()
 1590              		.loc 8 103 13
 1591              		.cfi_startproc
 1592              		@ args = 0, pretend = 0, frame = 8
 1593              		@ frame_needed = 1, uses_anonymous_args = 0
 1594              		@ link register save eliminated.
 1595 0000 80B4     		push	{r7}
 1596              	.LCFI148:
 1597              		.cfi_def_cfa_offset 4
 1598              		.cfi_offset 7, -4
 1599 0002 83B0     		sub	sp, sp, #12
 1600              	.LCFI149:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 41


 1601              		.cfi_def_cfa_offset 16
 1602 0004 00AF     		add	r7, sp, #0
 1603              	.LCFI150:
 1604              		.cfi_def_cfa_register 7
 1605 0006 7860     		str	r0, [r7, #4]
 1606              	.LBB15:
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 1607              		.loc 8 104 5
 1608 0008 044A     		ldr	r2, .L66
 1609 000a 7B68     		ldr	r3, [r7, #4]
 1610 000c 1A60     		str	r2, [r3]
 1611              	.LBE15:
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 1612              		.loc 8 105 5
 1613 000e 7B68     		ldr	r3, [r7, #4]
 1614 0010 1846     		mov	r0, r3
 1615 0012 0C37     		adds	r7, r7, #12
 1616              	.LCFI151:
 1617              		.cfi_def_cfa_offset 4
 1618 0014 BD46     		mov	sp, r7
 1619              	.LCFI152:
 1620              		.cfi_def_cfa_register 13
 1621              		@ sp needed
 1622 0016 5DF8047B 		ldr	r7, [sp], #4
 1623              	.LCFI153:
 1624              		.cfi_restore 7
 1625              		.cfi_def_cfa_offset 0
 1626 001a 7047     		bx	lr
 1627              	.L67:
 1628              		.align	2
 1629              	.L66:
 1630 001c 08000000 		.word	_ZTVN8touchgfx3HALE+8
 1631              		.cfi_endproc
 1632              	.LFE321:
 1634              		.weak	_ZN8touchgfx3HALD1Ev
 1635              		.thumb_set _ZN8touchgfx3HALD1Ev,_ZN8touchgfx3HALD2Ev
 1636              		.section	.text._ZN8touchgfx3HALD0Ev,"axG",%progbits,_ZN8touchgfx3HALD5Ev,comdat
 1637              		.align	1
 1638              		.weak	_ZN8touchgfx3HALD0Ev
 1639              		.syntax unified
 1640              		.thumb
 1641              		.thumb_func
 1642              		.fpu fpv4-sp-d16
 1644              	_ZN8touchgfx3HALD0Ev:
 1645              	.LFB323:
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 1646              		.loc 8 103 13
 1647              		.cfi_startproc
 1648              		@ args = 0, pretend = 0, frame = 8
 1649              		@ frame_needed = 1, uses_anonymous_args = 0
 1650 0000 80B5     		push	{r7, lr}
 1651              	.LCFI154:
 1652              		.cfi_def_cfa_offset 8
 1653              		.cfi_offset 7, -8
 1654              		.cfi_offset 14, -4
 1655 0002 82B0     		sub	sp, sp, #8
 1656              	.LCFI155:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 42


 1657              		.cfi_def_cfa_offset 16
 1658 0004 00AF     		add	r7, sp, #0
 1659              	.LCFI156:
 1660              		.cfi_def_cfa_register 7
 1661 0006 7860     		str	r0, [r7, #4]
 1662              		.loc 8 105 5
 1663 0008 7868     		ldr	r0, [r7, #4]
 1664 000a FFF7FEFF 		bl	_ZN8touchgfx3HALD1Ev
 1665 000e 7C21     		movs	r1, #124
 1666 0010 7868     		ldr	r0, [r7, #4]
 1667 0012 FFF7FEFF 		bl	_ZdlPvj
 1668 0016 7B68     		ldr	r3, [r7, #4]
 1669 0018 1846     		mov	r0, r3
 1670 001a 0837     		adds	r7, r7, #8
 1671              	.LCFI157:
 1672              		.cfi_def_cfa_offset 8
 1673 001c BD46     		mov	sp, r7
 1674              	.LCFI158:
 1675              		.cfi_def_cfa_register 13
 1676              		@ sp needed
 1677 001e 80BD     		pop	{r7, pc}
 1678              		.cfi_endproc
 1679              	.LFE323:
 1681              		.section	.text._ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchContro
 1682              		.align	1
 1683              		.weak	_ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
 1684              		.syntax unified
 1685              		.thumb
 1686              		.thumb_func
 1687              		.fpu fpv4-sp-d16
 1689              	_ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:
 1690              	.LFB369:
 1691              		.file 9 "Src/TouchGFXGeneratedHAL.hpp"
   1:Src/TouchGFXGeneratedHAL.hpp **** /**
   2:Src/TouchGFXGeneratedHAL.hpp ****   ******************************************************************************
   3:Src/TouchGFXGeneratedHAL.hpp ****   * File Name          : TouchGFXGeneratedHAL.hpp
   4:Src/TouchGFXGeneratedHAL.hpp ****   ******************************************************************************
   5:Src/TouchGFXGeneratedHAL.hpp ****   * @attention
   6:Src/TouchGFXGeneratedHAL.hpp ****   *
   7:Src/TouchGFXGeneratedHAL.hpp ****   * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/TouchGFXGeneratedHAL.hpp ****   * All rights reserved.</center></h2>
   9:Src/TouchGFXGeneratedHAL.hpp ****   *
  10:Src/TouchGFXGeneratedHAL.hpp ****   * This software component is licensed by ST under Ultimate Liberty license
  11:Src/TouchGFXGeneratedHAL.hpp ****   * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/TouchGFXGeneratedHAL.hpp ****   * the License. You may obtain a copy of the License at:
  13:Src/TouchGFXGeneratedHAL.hpp ****   *                             www.st.com/SLA0044
  14:Src/TouchGFXGeneratedHAL.hpp ****   *
  15:Src/TouchGFXGeneratedHAL.hpp ****   ******************************************************************************
  16:Src/TouchGFXGeneratedHAL.hpp ****   */
  17:Src/TouchGFXGeneratedHAL.hpp **** #ifndef TouchGFXGeneratedHAL_HPP
  18:Src/TouchGFXGeneratedHAL.hpp **** #define TouchGFXGeneratedHAL_HPP
  19:Src/TouchGFXGeneratedHAL.hpp **** 
  20:Src/TouchGFXGeneratedHAL.hpp **** #include <touchgfx/hal/HAL.hpp>
  21:Src/TouchGFXGeneratedHAL.hpp **** /**
  22:Src/TouchGFXGeneratedHAL.hpp ****  * @class TouchGFXGeneratedHAL
  23:Src/TouchGFXGeneratedHAL.hpp ****  *
  24:Src/TouchGFXGeneratedHAL.hpp ****  * @brief HAL implementation for TouchGFXGenerated.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 43


  25:Src/TouchGFXGeneratedHAL.hpp ****  *
  26:Src/TouchGFXGeneratedHAL.hpp ****  * @sa HAL
  27:Src/TouchGFXGeneratedHAL.hpp ****  */
  28:Src/TouchGFXGeneratedHAL.hpp **** class TouchGFXGeneratedHAL : public touchgfx::HAL
  29:Src/TouchGFXGeneratedHAL.hpp **** {
  30:Src/TouchGFXGeneratedHAL.hpp **** public:
  31:Src/TouchGFXGeneratedHAL.hpp ****     /**
  32:Src/TouchGFXGeneratedHAL.hpp ****      * @fn TouchGFXGeneratedHAL::TouchGFXGeneratedHAL(touchgfx::DMA_Interface& dma, touchgfx::LCD& 
  33:Src/TouchGFXGeneratedHAL.hpp ****      *
  34:Src/TouchGFXGeneratedHAL.hpp ****      * @brief Constructor.
  35:Src/TouchGFXGeneratedHAL.hpp ****      *
  36:Src/TouchGFXGeneratedHAL.hpp ****      *        Constructor. Initializes members.
  37:Src/TouchGFXGeneratedHAL.hpp ****      *
  38:Src/TouchGFXGeneratedHAL.hpp ****      * @param [in,out] dma     Reference to DMA interface.
  39:Src/TouchGFXGeneratedHAL.hpp ****      * @param [in,out] display Reference to LCD interface.
  40:Src/TouchGFXGeneratedHAL.hpp ****      * @param [in,out] tc      Reference to Touch Controller driver.
  41:Src/TouchGFXGeneratedHAL.hpp ****      * @param width            Width of the display.
  42:Src/TouchGFXGeneratedHAL.hpp ****      * @param height           Height of the display.
  43:Src/TouchGFXGeneratedHAL.hpp ****      */
  44:Src/TouchGFXGeneratedHAL.hpp ****     TouchGFXGeneratedHAL(touchgfx::DMA_Interface& dma, touchgfx::LCD& display, touchgfx::TouchContr
 1692              		.loc 9 44 5
 1693              		.cfi_startproc
 1694              		@ args = 8, pretend = 0, frame = 16
 1695              		@ frame_needed = 1, uses_anonymous_args = 0
 1696 0000 80B5     		push	{r7, lr}
 1697              	.LCFI159:
 1698              		.cfi_def_cfa_offset 8
 1699              		.cfi_offset 7, -8
 1700              		.cfi_offset 14, -4
 1701 0002 86B0     		sub	sp, sp, #24
 1702              	.LCFI160:
 1703              		.cfi_def_cfa_offset 32
 1704 0004 02AF     		add	r7, sp, #8
 1705              	.LCFI161:
 1706              		.cfi_def_cfa 7, 24
 1707 0006 F860     		str	r0, [r7, #12]
 1708 0008 B960     		str	r1, [r7, #8]
 1709 000a 7A60     		str	r2, [r7, #4]
 1710 000c 3B60     		str	r3, [r7]
 1711              	.LBB16:
  45:Src/TouchGFXGeneratedHAL.hpp ****         touchgfx::HAL(dma, display, tc, width, height)
 1712              		.loc 9 45 54
 1713 000e F868     		ldr	r0, [r7, #12]
 1714 0010 BB8B     		ldrh	r3, [r7, #28]
 1715 0012 0193     		str	r3, [sp, #4]
 1716 0014 3B8B     		ldrh	r3, [r7, #24]
 1717 0016 0093     		str	r3, [sp]
 1718 0018 3B68     		ldr	r3, [r7]
 1719 001a 7A68     		ldr	r2, [r7, #4]
 1720 001c B968     		ldr	r1, [r7, #8]
 1721 001e FFF7FEFF 		bl	_ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt
 1722 0022 044A     		ldr	r2, .L72
 1723 0024 FB68     		ldr	r3, [r7, #12]
 1724 0026 1A60     		str	r2, [r3]
 1725              	.LBE16:
  46:Src/TouchGFXGeneratedHAL.hpp ****     {
  47:Src/TouchGFXGeneratedHAL.hpp ****     }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 44


 1726              		.loc 9 47 5
 1727 0028 FB68     		ldr	r3, [r7, #12]
 1728 002a 1846     		mov	r0, r3
 1729 002c 1037     		adds	r7, r7, #16
 1730              	.LCFI162:
 1731              		.cfi_def_cfa_offset 8
 1732 002e BD46     		mov	sp, r7
 1733              	.LCFI163:
 1734              		.cfi_def_cfa_register 13
 1735              		@ sp needed
 1736 0030 80BD     		pop	{r7, pc}
 1737              	.L73:
 1738 0032 00BF     		.align	2
 1739              	.L72:
 1740 0034 08000000 		.word	_ZTV20TouchGFXGeneratedHAL+8
 1741              		.cfi_endproc
 1742              	.LFE369:
 1744              		.weak	_ZN20TouchGFXGeneratedHALC1ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
 1745              		.thumb_set _ZN20TouchGFXGeneratedHALC1ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchController
 1746              		.section	.text._ZN20TouchGFXGeneratedHALD2Ev,"axG",%progbits,_ZN20TouchGFXGeneratedHALD5Ev,comdat
 1747              		.align	1
 1748              		.weak	_ZN20TouchGFXGeneratedHALD2Ev
 1749              		.syntax unified
 1750              		.thumb
 1751              		.thumb_func
 1752              		.fpu fpv4-sp-d16
 1754              	_ZN20TouchGFXGeneratedHALD2Ev:
 1755              	.LFB374:
  28:Src/TouchGFXGeneratedHAL.hpp **** {
 1756              		.loc 9 28 7
 1757              		.cfi_startproc
 1758              		@ args = 0, pretend = 0, frame = 8
 1759              		@ frame_needed = 1, uses_anonymous_args = 0
 1760 0000 80B5     		push	{r7, lr}
 1761              	.LCFI164:
 1762              		.cfi_def_cfa_offset 8
 1763              		.cfi_offset 7, -8
 1764              		.cfi_offset 14, -4
 1765 0002 82B0     		sub	sp, sp, #8
 1766              	.LCFI165:
 1767              		.cfi_def_cfa_offset 16
 1768 0004 00AF     		add	r7, sp, #0
 1769              	.LCFI166:
 1770              		.cfi_def_cfa_register 7
 1771 0006 7860     		str	r0, [r7, #4]
 1772              	.LBB17:
  28:Src/TouchGFXGeneratedHAL.hpp **** {
 1773              		.loc 9 28 7
 1774 0008 054A     		ldr	r2, .L76
 1775 000a 7B68     		ldr	r3, [r7, #4]
 1776 000c 1A60     		str	r2, [r3]
 1777 000e 7B68     		ldr	r3, [r7, #4]
 1778 0010 1846     		mov	r0, r3
 1779 0012 FFF7FEFF 		bl	_ZN8touchgfx3HALD2Ev
 1780              	.LBE17:
 1781 0016 7B68     		ldr	r3, [r7, #4]
 1782 0018 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 45


 1783 001a 0837     		adds	r7, r7, #8
 1784              	.LCFI167:
 1785              		.cfi_def_cfa_offset 8
 1786 001c BD46     		mov	sp, r7
 1787              	.LCFI168:
 1788              		.cfi_def_cfa_register 13
 1789              		@ sp needed
 1790 001e 80BD     		pop	{r7, pc}
 1791              	.L77:
 1792              		.align	2
 1793              	.L76:
 1794 0020 08000000 		.word	_ZTV20TouchGFXGeneratedHAL+8
 1795              		.cfi_endproc
 1796              	.LFE374:
 1798              		.weak	_ZN20TouchGFXGeneratedHALD1Ev
 1799              		.thumb_set _ZN20TouchGFXGeneratedHALD1Ev,_ZN20TouchGFXGeneratedHALD2Ev
 1800              		.section	.text._ZN20TouchGFXGeneratedHALD0Ev,"axG",%progbits,_ZN20TouchGFXGeneratedHALD5Ev,comdat
 1801              		.align	1
 1802              		.weak	_ZN20TouchGFXGeneratedHALD0Ev
 1803              		.syntax unified
 1804              		.thumb
 1805              		.thumb_func
 1806              		.fpu fpv4-sp-d16
 1808              	_ZN20TouchGFXGeneratedHALD0Ev:
 1809              	.LFB376:
  28:Src/TouchGFXGeneratedHAL.hpp **** {
 1810              		.loc 9 28 7
 1811              		.cfi_startproc
 1812              		@ args = 0, pretend = 0, frame = 8
 1813              		@ frame_needed = 1, uses_anonymous_args = 0
 1814 0000 80B5     		push	{r7, lr}
 1815              	.LCFI169:
 1816              		.cfi_def_cfa_offset 8
 1817              		.cfi_offset 7, -8
 1818              		.cfi_offset 14, -4
 1819 0002 82B0     		sub	sp, sp, #8
 1820              	.LCFI170:
 1821              		.cfi_def_cfa_offset 16
 1822 0004 00AF     		add	r7, sp, #0
 1823              	.LCFI171:
 1824              		.cfi_def_cfa_register 7
 1825 0006 7860     		str	r0, [r7, #4]
  28:Src/TouchGFXGeneratedHAL.hpp **** {
 1826              		.loc 9 28 7
 1827 0008 7868     		ldr	r0, [r7, #4]
 1828 000a FFF7FEFF 		bl	_ZN20TouchGFXGeneratedHALD1Ev
 1829 000e 7C21     		movs	r1, #124
 1830 0010 7868     		ldr	r0, [r7, #4]
 1831 0012 FFF7FEFF 		bl	_ZdlPvj
 1832 0016 7B68     		ldr	r3, [r7, #4]
 1833 0018 1846     		mov	r0, r3
 1834 001a 0837     		adds	r7, r7, #8
 1835              	.LCFI172:
 1836              		.cfi_def_cfa_offset 8
 1837 001c BD46     		mov	sp, r7
 1838              	.LCFI173:
 1839              		.cfi_def_cfa_register 13
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 46


 1840              		@ sp needed
 1841 001e 80BD     		pop	{r7, pc}
 1842              		.cfi_endproc
 1843              	.LFE376:
 1845              		.section	.text._ZN11TouchGFXHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt,"
 1846              		.align	1
 1847              		.weak	_ZN11TouchGFXHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
 1848              		.syntax unified
 1849              		.thumb
 1850              		.thumb_func
 1851              		.fpu fpv4-sp-d16
 1853              	_ZN11TouchGFXHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:
 1854              	.LFB377:
 1855              		.file 10 "Src/TouchGFXHAL.hpp"
   1:Src/TouchGFXHAL.hpp **** /**
   2:Src/TouchGFXHAL.hpp ****   ******************************************************************************
   3:Src/TouchGFXHAL.hpp ****   * File Name          : TouchGFXHAL.hpp
   4:Src/TouchGFXHAL.hpp ****   ******************************************************************************
   5:Src/TouchGFXHAL.hpp ****   * @attention
   6:Src/TouchGFXHAL.hpp ****   *
   7:Src/TouchGFXHAL.hpp ****   * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/TouchGFXHAL.hpp ****   * All rights reserved.</center></h2>
   9:Src/TouchGFXHAL.hpp ****   *
  10:Src/TouchGFXHAL.hpp ****   * This software component is licensed by ST under Ultimate Liberty license
  11:Src/TouchGFXHAL.hpp ****   * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/TouchGFXHAL.hpp ****   * the License. You may obtain a copy of the License at:
  13:Src/TouchGFXHAL.hpp ****   *                             www.st.com/SLA0044
  14:Src/TouchGFXHAL.hpp ****   *
  15:Src/TouchGFXHAL.hpp ****   ******************************************************************************
  16:Src/TouchGFXHAL.hpp ****   */
  17:Src/TouchGFXHAL.hpp **** #ifndef TouchGFXHAL_HPP
  18:Src/TouchGFXHAL.hpp **** #define TouchGFXHAL_HPP
  19:Src/TouchGFXHAL.hpp **** 
  20:Src/TouchGFXHAL.hpp **** /* USER CODE BEGIN TouchGFXHAL.hpp */
  21:Src/TouchGFXHAL.hpp **** 
  22:Src/TouchGFXHAL.hpp **** #include <TouchGFXGeneratedHAL.hpp>
  23:Src/TouchGFXHAL.hpp **** 
  24:Src/TouchGFXHAL.hpp **** /**
  25:Src/TouchGFXHAL.hpp ****  * @class TouchGFXHAL
  26:Src/TouchGFXHAL.hpp ****  *
  27:Src/TouchGFXHAL.hpp ****  * @brief HAL implementation for TouchGFX.
  28:Src/TouchGFXHAL.hpp ****  *
  29:Src/TouchGFXHAL.hpp ****  * @sa HAL
  30:Src/TouchGFXHAL.hpp ****  */
  31:Src/TouchGFXHAL.hpp **** class TouchGFXHAL : public TouchGFXGeneratedHAL
  32:Src/TouchGFXHAL.hpp **** {
  33:Src/TouchGFXHAL.hpp **** public:
  34:Src/TouchGFXHAL.hpp ****     /**
  35:Src/TouchGFXHAL.hpp ****      * @fn TouchGFXHAL::TouchGFXHAL(touchgfx::DMA_Interface& dma, touchgfx::LCD& display, touchgfx:
  36:Src/TouchGFXHAL.hpp ****      *
  37:Src/TouchGFXHAL.hpp ****      * @brief Constructor.
  38:Src/TouchGFXHAL.hpp ****      *
  39:Src/TouchGFXHAL.hpp ****      *        Constructor. Initializes members.
  40:Src/TouchGFXHAL.hpp ****      *
  41:Src/TouchGFXHAL.hpp ****      * @param [in,out] dma     Reference to DMA interface.
  42:Src/TouchGFXHAL.hpp ****      * @param [in,out] display Reference to LCD interface.
  43:Src/TouchGFXHAL.hpp ****      * @param [in,out] tc      Reference to Touch Controller driver.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 47


  44:Src/TouchGFXHAL.hpp ****      * @param width            Width of the display.
  45:Src/TouchGFXHAL.hpp ****      * @param height           Height of the display.
  46:Src/TouchGFXHAL.hpp ****      */
  47:Src/TouchGFXHAL.hpp ****     TouchGFXHAL(touchgfx::DMA_Interface& dma, touchgfx::LCD& display, touchgfx::TouchController& tc
 1856              		.loc 10 47 5
 1857              		.cfi_startproc
 1858              		@ args = 8, pretend = 0, frame = 16
 1859              		@ frame_needed = 1, uses_anonymous_args = 0
 1860 0000 80B5     		push	{r7, lr}
 1861              	.LCFI174:
 1862              		.cfi_def_cfa_offset 8
 1863              		.cfi_offset 7, -8
 1864              		.cfi_offset 14, -4
 1865 0002 86B0     		sub	sp, sp, #24
 1866              	.LCFI175:
 1867              		.cfi_def_cfa_offset 32
 1868 0004 02AF     		add	r7, sp, #8
 1869              	.LCFI176:
 1870              		.cfi_def_cfa 7, 24
 1871 0006 F860     		str	r0, [r7, #12]
 1872 0008 B960     		str	r1, [r7, #8]
 1873 000a 7A60     		str	r2, [r7, #4]
 1874 000c 3B60     		str	r3, [r7]
 1875              	.LBB18:
 1876              		.loc 10 47 189
 1877 000e F868     		ldr	r0, [r7, #12]
 1878 0010 BB8B     		ldrh	r3, [r7, #28]
 1879 0012 0193     		str	r3, [sp, #4]
 1880 0014 3B8B     		ldrh	r3, [r7, #24]
 1881 0016 0093     		str	r3, [sp]
 1882 0018 3B68     		ldr	r3, [r7]
 1883 001a 7A68     		ldr	r2, [r7, #4]
 1884 001c B968     		ldr	r1, [r7, #8]
 1885 001e FFF7FEFF 		bl	_ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
 1886 0022 044A     		ldr	r2, .L82
 1887 0024 FB68     		ldr	r3, [r7, #12]
 1888 0026 1A60     		str	r2, [r3]
 1889              	.LBE18:
  48:Src/TouchGFXHAL.hpp ****     {
  49:Src/TouchGFXHAL.hpp ****     }
 1890              		.loc 10 49 5
 1891 0028 FB68     		ldr	r3, [r7, #12]
 1892 002a 1846     		mov	r0, r3
 1893 002c 1037     		adds	r7, r7, #16
 1894              	.LCFI177:
 1895              		.cfi_def_cfa_offset 8
 1896 002e BD46     		mov	sp, r7
 1897              	.LCFI178:
 1898              		.cfi_def_cfa_register 13
 1899              		@ sp needed
 1900 0030 80BD     		pop	{r7, pc}
 1901              	.L83:
 1902 0032 00BF     		.align	2
 1903              	.L82:
 1904 0034 08000000 		.word	_ZTV11TouchGFXHAL+8
 1905              		.cfi_endproc
 1906              	.LFE377:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 48


 1908              		.weak	_ZN11TouchGFXHALC1ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
 1909              		.thumb_set _ZN11TouchGFXHALC1ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt,_ZN11
 1910              		.section	.text._ZN8touchgfx12FontProviderD2Ev,"axG",%progbits,_ZN8touchgfx12FontProviderD5Ev,comda
 1911              		.align	1
 1912              		.weak	_ZN8touchgfx12FontProviderD2Ev
 1913              		.syntax unified
 1914              		.thumb
 1915              		.thumb_func
 1916              		.fpu fpv4-sp-d16
 1918              	_ZN8touchgfx12FontProviderD2Ev:
 1919              	.LFB381:
 1920              		.file 11 "Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp"
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
 1921              		.loc 11 43 13
 1922              		.cfi_startproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 49


 1923              		@ args = 0, pretend = 0, frame = 8
 1924              		@ frame_needed = 1, uses_anonymous_args = 0
 1925              		@ link register save eliminated.
 1926 0000 80B4     		push	{r7}
 1927              	.LCFI179:
 1928              		.cfi_def_cfa_offset 4
 1929              		.cfi_offset 7, -4
 1930 0002 83B0     		sub	sp, sp, #12
 1931              	.LCFI180:
 1932              		.cfi_def_cfa_offset 16
 1933 0004 00AF     		add	r7, sp, #0
 1934              	.LCFI181:
 1935              		.cfi_def_cfa_register 7
 1936 0006 7860     		str	r0, [r7, #4]
 1937              	.LBB19:
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     {
 1938              		.loc 11 44 5
 1939 0008 044A     		ldr	r2, .L86
 1940 000a 7B68     		ldr	r3, [r7, #4]
 1941 000c 1A60     		str	r2, [r3]
 1942              	.LBE19:
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     }
 1943              		.loc 11 45 5
 1944 000e 7B68     		ldr	r3, [r7, #4]
 1945 0010 1846     		mov	r0, r3
 1946 0012 0C37     		adds	r7, r7, #12
 1947              	.LCFI182:
 1948              		.cfi_def_cfa_offset 4
 1949 0014 BD46     		mov	sp, r7
 1950              	.LCFI183:
 1951              		.cfi_def_cfa_register 13
 1952              		@ sp needed
 1953 0016 5DF8047B 		ldr	r7, [sp], #4
 1954              	.LCFI184:
 1955              		.cfi_restore 7
 1956              		.cfi_def_cfa_offset 0
 1957 001a 7047     		bx	lr
 1958              	.L87:
 1959              		.align	2
 1960              	.L86:
 1961 001c 08000000 		.word	_ZTVN8touchgfx12FontProviderE+8
 1962              		.cfi_endproc
 1963              	.LFE381:
 1965              		.weak	_ZN8touchgfx12FontProviderD1Ev
 1966              		.thumb_set _ZN8touchgfx12FontProviderD1Ev,_ZN8touchgfx12FontProviderD2Ev
 1967              		.section	.text._ZN8touchgfx12FontProviderD0Ev,"axG",%progbits,_ZN8touchgfx12FontProviderD5Ev,comda
 1968              		.align	1
 1969              		.weak	_ZN8touchgfx12FontProviderD0Ev
 1970              		.syntax unified
 1971              		.thumb
 1972              		.thumb_func
 1973              		.fpu fpv4-sp-d16
 1975              	_ZN8touchgfx12FontProviderD0Ev:
 1976              	.LFB383:
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/FontManager.hpp ****     {
 1977              		.loc 11 43 13
 1978              		.cfi_startproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 50


 1979              		@ args = 0, pretend = 0, frame = 8
 1980              		@ frame_needed = 1, uses_anonymous_args = 0
 1981 0000 80B5     		push	{r7, lr}
 1982              	.LCFI185:
 1983              		.cfi_def_cfa_offset 8
 1984              		.cfi_offset 7, -8
 1985              		.cfi_offset 14, -4
 1986 0002 82B0     		sub	sp, sp, #8
 1987              	.LCFI186:
 1988              		.cfi_def_cfa_offset 16
 1989 0004 00AF     		add	r7, sp, #0
 1990              	.LCFI187:
 1991              		.cfi_def_cfa_register 7
 1992 0006 7860     		str	r0, [r7, #4]
 1993              		.loc 11 45 5
 1994 0008 7868     		ldr	r0, [r7, #4]
 1995 000a FFF7FEFF 		bl	_ZN8touchgfx12FontProviderD1Ev
 1996 000e 0421     		movs	r1, #4
 1997 0010 7868     		ldr	r0, [r7, #4]
 1998 0012 FFF7FEFF 		bl	_ZdlPvj
 1999 0016 7B68     		ldr	r3, [r7, #4]
 2000 0018 1846     		mov	r0, r3
 2001 001a 0837     		adds	r7, r7, #8
 2002              	.LCFI188:
 2003              		.cfi_def_cfa_offset 8
 2004 001c BD46     		mov	sp, r7
 2005              	.LCFI189:
 2006              		.cfi_def_cfa_register 13
 2007              		@ sp needed
 2008 001e 80BD     		pop	{r7, pc}
 2009              		.cfi_endproc
 2010              	.LFE383:
 2012              		.section	.text._ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE,"axG",%p
 2013              		.align	1
 2014              		.weak	_ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE
 2015              		.syntax unified
 2016              		.thumb
 2017              		.thumb_func
 2018              		.fpu fpv4-sp-d16
 2020              	_ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE:
 2021              	.LFB397:
 2022              		.file 12 "Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp"
   1:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  * @file mvp/MVPHeap.hpp
  15:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 51


  16:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  * Declares the touchgfx::MVPHeap class.
  17:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** #ifndef TOUCHGFX_MVPHEAP_HPP
  19:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** #define TOUCHGFX_MVPHEAP_HPP
  20:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** #include "common/AbstractPartition.hpp"
  22:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** 
  23:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** namespace touchgfx
  24:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** {
  25:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** class AbstractPartition;
  26:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** class MVPApplication;
  27:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** 
  28:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** /**
  29:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  * Generic heap class for MVP applications. Serves as a way of obtaining the memory storage
  30:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  * areas for presenters, screens, transitions and the concrete application.
  31:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  *
  32:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  * Subclassed by an application-specific heap which provides the actual storage areas.
  33:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  * This generic interface is used only in makeTransition.
  34:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****  */
  35:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** class MVPHeap
  36:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** {
  37:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** public:
  38:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     /**
  39:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      * Initializes a new instance of the MVPHeap class.
  40:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      *
  41:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      * @param [in] pres A memory partition containing enough memory to hold the largest
  42:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      *                  presenter.
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      * @param [in] scr  A memory partition containing enough memory to hold the largest view.
  44:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      * @param [in] tra  A memory partition containing enough memory to hold the largest
  45:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      *                  transition.
  46:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      * @param [in] app  A reference to the MVPApplication instance.
  47:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****      */
  48:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     MVPHeap(AbstractPartition& pres,
 2023              		.loc 12 48 5
 2024              		.cfi_startproc
 2025              		@ args = 4, pretend = 0, frame = 16
 2026              		@ frame_needed = 1, uses_anonymous_args = 0
 2027              		@ link register save eliminated.
 2028 0000 80B4     		push	{r7}
 2029              	.LCFI190:
 2030              		.cfi_def_cfa_offset 4
 2031              		.cfi_offset 7, -4
 2032 0002 85B0     		sub	sp, sp, #20
 2033              	.LCFI191:
 2034              		.cfi_def_cfa_offset 24
 2035 0004 00AF     		add	r7, sp, #0
 2036              	.LCFI192:
 2037              		.cfi_def_cfa_register 7
 2038 0006 F860     		str	r0, [r7, #12]
 2039 0008 B960     		str	r1, [r7, #8]
 2040 000a 7A60     		str	r2, [r7, #4]
 2041 000c 3B60     		str	r3, [r7]
 2042              	.LBB20:
  49:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****             AbstractPartition& scr,
  50:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****             AbstractPartition& tra,
  51:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****             MVPApplication& app)
  52:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****         : presenterStorage(pres),
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 52


  53:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****           screenStorage(scr),
  54:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****           transitionStorage(tra),
  55:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****           frontendApplication(app)
 2043              		.loc 12 55 34
 2044 000e 0B4A     		ldr	r2, .L92
 2045 0010 FB68     		ldr	r3, [r7, #12]
 2046 0012 1A60     		str	r2, [r3]
 2047 0014 FB68     		ldr	r3, [r7, #12]
 2048 0016 BA68     		ldr	r2, [r7, #8]
 2049 0018 5A60     		str	r2, [r3, #4]
 2050 001a FB68     		ldr	r3, [r7, #12]
 2051 001c 7A68     		ldr	r2, [r7, #4]
 2052 001e 9A60     		str	r2, [r3, #8]
 2053 0020 FB68     		ldr	r3, [r7, #12]
 2054 0022 3A68     		ldr	r2, [r7]
 2055 0024 DA60     		str	r2, [r3, #12]
 2056 0026 FB68     		ldr	r3, [r7, #12]
 2057 0028 BA69     		ldr	r2, [r7, #24]
 2058 002a 1A61     		str	r2, [r3, #16]
 2059              	.LBE20:
  56:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     {
  57:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     }
 2060              		.loc 12 57 5
 2061 002c FB68     		ldr	r3, [r7, #12]
 2062 002e 1846     		mov	r0, r3
 2063 0030 1437     		adds	r7, r7, #20
 2064              	.LCFI193:
 2065              		.cfi_def_cfa_offset 4
 2066 0032 BD46     		mov	sp, r7
 2067              	.LCFI194:
 2068              		.cfi_def_cfa_register 13
 2069              		@ sp needed
 2070 0034 5DF8047B 		ldr	r7, [sp], #4
 2071              	.LCFI195:
 2072              		.cfi_restore 7
 2073              		.cfi_def_cfa_offset 0
 2074 0038 7047     		bx	lr
 2075              	.L93:
 2076 003a 00BF     		.align	2
 2077              	.L92:
 2078 003c 08000000 		.word	_ZTVN8touchgfx7MVPHeapE+8
 2079              		.cfi_endproc
 2080              	.LFE397:
 2082              		.weak	_ZN8touchgfx7MVPHeapC1ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE
 2083              		.thumb_set _ZN8touchgfx7MVPHeapC1ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE,_ZN8touchgfx
 2084              		.section	.text._ZN8touchgfx7MVPHeapD2Ev,"axG",%progbits,_ZN8touchgfx7MVPHeapD5Ev,comdat
 2085              		.align	1
 2086              		.weak	_ZN8touchgfx7MVPHeapD2Ev
 2087              		.syntax unified
 2088              		.thumb
 2089              		.thumb_func
 2090              		.fpu fpv4-sp-d16
 2092              	_ZN8touchgfx7MVPHeapD2Ev:
 2093              	.LFB400:
  58:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp **** 
  59:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     /** Finalizes an instance of the MVPHeap class. */
  60:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     virtual ~MVPHeap()
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 53


 2094              		.loc 12 60 13
 2095              		.cfi_startproc
 2096              		@ args = 0, pretend = 0, frame = 8
 2097              		@ frame_needed = 1, uses_anonymous_args = 0
 2098              		@ link register save eliminated.
 2099 0000 80B4     		push	{r7}
 2100              	.LCFI196:
 2101              		.cfi_def_cfa_offset 4
 2102              		.cfi_offset 7, -4
 2103 0002 83B0     		sub	sp, sp, #12
 2104              	.LCFI197:
 2105              		.cfi_def_cfa_offset 16
 2106 0004 00AF     		add	r7, sp, #0
 2107              	.LCFI198:
 2108              		.cfi_def_cfa_register 7
 2109 0006 7860     		str	r0, [r7, #4]
 2110              	.LBB21:
  61:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     {
 2111              		.loc 12 61 5
 2112 0008 044A     		ldr	r2, .L96
 2113 000a 7B68     		ldr	r3, [r7, #4]
 2114 000c 1A60     		str	r2, [r3]
 2115              	.LBE21:
  62:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     }
 2116              		.loc 12 62 5
 2117 000e 7B68     		ldr	r3, [r7, #4]
 2118 0010 1846     		mov	r0, r3
 2119 0012 0C37     		adds	r7, r7, #12
 2120              	.LCFI199:
 2121              		.cfi_def_cfa_offset 4
 2122 0014 BD46     		mov	sp, r7
 2123              	.LCFI200:
 2124              		.cfi_def_cfa_register 13
 2125              		@ sp needed
 2126 0016 5DF8047B 		ldr	r7, [sp], #4
 2127              	.LCFI201:
 2128              		.cfi_restore 7
 2129              		.cfi_def_cfa_offset 0
 2130 001a 7047     		bx	lr
 2131              	.L97:
 2132              		.align	2
 2133              	.L96:
 2134 001c 08000000 		.word	_ZTVN8touchgfx7MVPHeapE+8
 2135              		.cfi_endproc
 2136              	.LFE400:
 2138              		.weak	_ZN8touchgfx7MVPHeapD1Ev
 2139              		.thumb_set _ZN8touchgfx7MVPHeapD1Ev,_ZN8touchgfx7MVPHeapD2Ev
 2140              		.section	.text._ZN8touchgfx7MVPHeapD0Ev,"axG",%progbits,_ZN8touchgfx7MVPHeapD5Ev,comdat
 2141              		.align	1
 2142              		.weak	_ZN8touchgfx7MVPHeapD0Ev
 2143              		.syntax unified
 2144              		.thumb
 2145              		.thumb_func
 2146              		.fpu fpv4-sp-d16
 2148              	_ZN8touchgfx7MVPHeapD0Ev:
 2149              	.LFB402:
  60:Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 54


 2150              		.loc 12 60 13
 2151              		.cfi_startproc
 2152              		@ args = 0, pretend = 0, frame = 8
 2153              		@ frame_needed = 1, uses_anonymous_args = 0
 2154 0000 80B5     		push	{r7, lr}
 2155              	.LCFI202:
 2156              		.cfi_def_cfa_offset 8
 2157              		.cfi_offset 7, -8
 2158              		.cfi_offset 14, -4
 2159 0002 82B0     		sub	sp, sp, #8
 2160              	.LCFI203:
 2161              		.cfi_def_cfa_offset 16
 2162 0004 00AF     		add	r7, sp, #0
 2163              	.LCFI204:
 2164              		.cfi_def_cfa_register 7
 2165 0006 7860     		str	r0, [r7, #4]
 2166              		.loc 12 62 5
 2167 0008 7868     		ldr	r0, [r7, #4]
 2168 000a FFF7FEFF 		bl	_ZN8touchgfx7MVPHeapD1Ev
 2169 000e 1421     		movs	r1, #20
 2170 0010 7868     		ldr	r0, [r7, #4]
 2171 0012 FFF7FEFF 		bl	_ZdlPvj
 2172 0016 7B68     		ldr	r3, [r7, #4]
 2173 0018 1846     		mov	r0, r3
 2174 001a 0837     		adds	r7, r7, #8
 2175              	.LCFI205:
 2176              		.cfi_def_cfa_offset 8
 2177 001c BD46     		mov	sp, r7
 2178              	.LCFI206:
 2179              		.cfi_def_cfa_register 13
 2180              		@ sp needed
 2181 001e 80BD     		pop	{r7, pc}
 2182              		.cfi_endproc
 2183              	.LFE402:
 2185              		.section	.text._ZN8touchgfx11Application15appSwitchScreenEh,"axG",%progbits,_ZN8touchgfx11Applicat
 2186              		.align	1
 2187              		.weak	_ZN8touchgfx11Application15appSwitchScreenEh
 2188              		.syntax unified
 2189              		.thumb
 2190              		.thumb_func
 2191              		.fpu fpv4-sp-d16
 2193              	_ZN8touchgfx11Application15appSwitchScreenEh:
 2194              	.LFB404:
 2195              		.file 13 "Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 55


  14:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****  * @file touchgfx/Application.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****  * Declares the application class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** #ifndef TOUCHGFX_APPLICATION_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** #define TOUCHGFX_APPLICATION_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** #include <touchgfx/UIEventListener.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** #include <touchgfx/events/ClickEvent.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** #include <touchgfx/events/DragEvent.hpp>
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** #include <touchgfx/events/GestureEvent.hpp>
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** #include <touchgfx/lcd/LCD.hpp>
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** namespace touchgfx
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** class Drawable;
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** class Screen;
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** class Transition;
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** /**
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****  * The Application class is the main interface for manipulating screen contents. It holds a
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****  * pointer to the currently displayed Screen, and delegates draw requests and events to
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****  * that Screen. Additionally it contains some global application settings.
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****  */
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** class Application : public UIEventListener
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** public:
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /**
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * Gets the single instance application.
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @return The instance of this application.
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      */
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     static Application* getInstance();
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /**
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * Gets the current screen.
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @return The current screen.
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      */
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     Screen* getCurrentScreen()
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     {
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****         return currentScreen;
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     }
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /**
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * Switch to another Screen. Will call tearDownScreen on current Screen before switching,
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * and subsequently call setupScreen and draw automatically for the new Screen.
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @param [in] newScreen A pointer to the new screen.
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      */
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void switchScreen(Screen* newScreen);
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /**
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * An application specific function for switching screen. Overloading this can provide a
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * means to switch screen from places that does not have access to a pointer to the new
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * screen. Base implementation is empty.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 56


  71:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @param screenId An id that maps to the desired screen.
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      */
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void appSwitchScreen(uint8_t screenId)
 2196              		.loc 13 74 18
 2197              		.cfi_startproc
 2198              		@ args = 0, pretend = 0, frame = 8
 2199              		@ frame_needed = 1, uses_anonymous_args = 0
 2200              		@ link register save eliminated.
 2201 0000 80B4     		push	{r7}
 2202              	.LCFI207:
 2203              		.cfi_def_cfa_offset 4
 2204              		.cfi_offset 7, -4
 2205 0002 83B0     		sub	sp, sp, #12
 2206              	.LCFI208:
 2207              		.cfi_def_cfa_offset 16
 2208 0004 00AF     		add	r7, sp, #0
 2209              	.LCFI209:
 2210              		.cfi_def_cfa_register 7
 2211 0006 7860     		str	r0, [r7, #4]
 2212 0008 0B46     		mov	r3, r1
 2213 000a FB70     		strb	r3, [r7, #3]
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     {
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     }
 2214              		.loc 13 76 5
 2215 000c 00BF     		nop
 2216 000e 0C37     		adds	r7, r7, #12
 2217              	.LCFI210:
 2218              		.cfi_def_cfa_offset 4
 2219 0010 BD46     		mov	sp, r7
 2220              	.LCFI211:
 2221              		.cfi_def_cfa_register 13
 2222              		@ sp needed
 2223 0012 5DF8047B 		ldr	r7, [sp], #4
 2224              	.LCFI212:
 2225              		.cfi_restore 7
 2226              		.cfi_def_cfa_offset 0
 2227 0016 7047     		bx	lr
 2228              		.cfi_endproc
 2229              	.LFE404:
 2231              		.section	.text._ZN8touchgfx11Application13requestRedrawERNS_4RectE,"axG",%progbits,_ZN8touchgfx11A
 2232              		.align	1
 2233              		.weak	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 2234              		.syntax unified
 2235              		.thumb
 2236              		.thumb_func
 2237              		.fpu fpv4-sp-d16
 2239              	_ZN8touchgfx11Application13requestRedrawERNS_4RectE:
 2240              	.LFB405:
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /** An application specific function for requesting redraw of entire screen. */
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void requestRedraw();
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /**
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * An application specific function for requesting redraw of given Rect.
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @param [in,out] rect The Rect that must be redrawn.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 57


  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      */
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void requestRedraw(Rect& rect)
 2241              		.loc 13 86 18
 2242              		.cfi_startproc
 2243              		@ args = 0, pretend = 0, frame = 8
 2244              		@ frame_needed = 1, uses_anonymous_args = 0
 2245              		@ link register save eliminated.
 2246 0000 80B4     		push	{r7}
 2247              	.LCFI213:
 2248              		.cfi_def_cfa_offset 4
 2249              		.cfi_offset 7, -4
 2250 0002 83B0     		sub	sp, sp, #12
 2251              	.LCFI214:
 2252              		.cfi_def_cfa_offset 16
 2253 0004 00AF     		add	r7, sp, #0
 2254              	.LCFI215:
 2255              		.cfi_def_cfa_register 7
 2256 0006 7860     		str	r0, [r7, #4]
 2257 0008 3960     		str	r1, [r7]
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     {
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****         redraw = rect;
 2258              		.loc 13 88 16
 2259 000a 7B68     		ldr	r3, [r7, #4]
 2260 000c 3A68     		ldr	r2, [r7]
 2261 000e 03F59673 		add	r3, r3, #300
 2262 0012 1068     		ldr	r0, [r2]	@ unaligned
 2263 0014 5168     		ldr	r1, [r2, #4]	@ unaligned
 2264 0016 03C3     		stmia	r3!, {r0, r1}
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     }
 2265              		.loc 13 89 5
 2266 0018 00BF     		nop
 2267 001a 0C37     		adds	r7, r7, #12
 2268              	.LCFI216:
 2269              		.cfi_def_cfa_offset 4
 2270 001c BD46     		mov	sp, r7
 2271              	.LCFI217:
 2272              		.cfi_def_cfa_register 13
 2273              		@ sp needed
 2274 001e 5DF8047B 		ldr	r7, [sp], #4
 2275              	.LCFI218:
 2276              		.cfi_restore 7
 2277              		.cfi_def_cfa_offset 0
 2278 0022 7047     		bx	lr
 2279              		.cfi_endproc
 2280              	.LFE405:
 2282              		.section	.text._ZN8touchgfx15GenericCallbackIvvvED2Ev,"axG",%progbits,_ZN8touchgfx15GenericCallbac
 2283              		.align	1
 2284              		.weak	_ZN8touchgfx15GenericCallbackIvvvED2Ev
 2285              		.syntax unified
 2286              		.thumb
 2287              		.thumb_func
 2288              		.fpu fpv4-sp-d16
 2290              	_ZN8touchgfx15GenericCallbackIvvvED2Ev:
 2291              	.LFB414:
 2292              		.file 14 "Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 58


   3:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @file touchgfx/Callback.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * Declares the touchgfx::GenericCallback and touchgfx::Callback classes.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** #ifndef TOUCHGFX_CALLBACK_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** #define TOUCHGFX_CALLBACK_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** namespace touchgfx
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * GenericCallback is the base class for callbacks.
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The reason this base class exists, is that a normal Callback requires the class type
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * where the callback function resides to be known. This is problematic for ie.
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * framework widgets like AbstractButton, on which it should be possible to register a
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * callback on object types that are user-specific and thus unknown to AbstractButton.
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * This is solved by having AbstractButton contain a pointer to a GenericCallback
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * instead. This pointer must then be initialized to point on an instance of Callback,
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * created by the user, which is initialized with the appropriate object type.
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T1 The type of the first argument in the member function, or void if none.
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T2 The type of the second argument in the member function, or void if none.
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T3 The type of the third argument in the member function, or void if none.
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @see Callback
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @note As with Callback, this class exists in four versions to support callback functions
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *       taking zero, one, two or three arguments.
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <class T1 = void, class T2 = void, class T3 = void>
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** class GenericCallback
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** public:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Finalizes an instance of the GenericCallback class. */
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual ~GenericCallback()
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  val1 This value will be passed as the first argument in the function call.
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  val2 This value will be passed as the second argument in the function call.
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  val3 This value will be passed as the third argument in the function call.
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 59


  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute(T1 val1, T2 val2, T3 val3) = 0;
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const = 0;
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** };
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * GenericCallback is the base class for callbacks.
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The reason this base class exists, is that a normal Callback requires the class type
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * where the callback function resides to be known. This is problematic for ie.
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * framework widgets like AbstractButton, on which it should be possible to register a
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * callback on object types that are user-specific and thus unknown to AbstractButton.
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * This is solved by having AbstractButton contain a pointer to a GenericCallback
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * instead. This pointer must then be initialized to point on an instance of Callback,
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * created by the user, which is initialized with the appropriate object type.
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T1 The type of the first argument in the member function, or void if none.
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T2 The type of the second argument in the member function, or void if none.
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @see Callback
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @note As with Callback, this class exists in four versions to support callback functions
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *       taking zero, one, two or three arguments.
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <class T1, class T2>
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** class GenericCallback<T1, T2, void>
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** public:
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Finalizes an instance of the void> class. */
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual ~GenericCallback()
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  val1 This value will be passed as the first argument in the function call.
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  val2 This value will be passed as the second argument in the function call.
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute(T1 val1, T2 val2) = 0;
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const = 0;
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** };
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * GenericCallback is the base class for callbacks.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 60


 117:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The reason this base class exists, is that a normal Callback requires the class type
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * where the callback function resides to be known. This is problematic for ie.
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * framework widgets like AbstractButton, on which it should be possible to register a
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * callback on object types that are user-specific and thus unknown to AbstractButton.
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * This is solved by having AbstractButton contain a pointer to a GenericCallback
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * instead. This pointer must then be initialized to point on an instance of Callback,
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * created by the user, which is initialized with the appropriate object type.
 125:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T1 The type of the first argument in the member function, or void if none.
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @see Callback
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @note As with Callback, this class exists in four versions to support callback functions
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *       taking zero, one, two or three arguments.
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <class T1>
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** class GenericCallback<T1, void, void>
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 136:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** public:
 137:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Finalizes an instance of the void> class. */
 138:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual ~GenericCallback()
 139:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 140:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 141:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 142:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 143:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  val1 This value will be passed as the first argument in the function call.
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute(T1 val1) = 0;
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const = 0;
 156:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** };
 157:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 158:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * GenericCallback is the base class for callbacks.
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The reason this base class exists, is that a normal Callback requires the class type
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * where the callback function resides to be known. This is problematic for ie.
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * framework widgets like AbstractButton, on which it should be possible to register a
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * callback on object types that are user-specific and thus unknown to AbstractButton.
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * This is solved by having AbstractButton contain a pointer to a GenericCallback
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * instead. This pointer must then be initialized to point on an instance of Callback,
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * created by the user, which is initialized with the appropriate object type.
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @see Callback
 170:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 171:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @note As with Callback, this class exists in four versions to support callback functions
 172:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *       taking zero, one, two or three arguments.
 173:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 61


 174:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <>
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** class GenericCallback<void>
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** public:
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Finalizes an instance of the GenericCallback<void> class. */
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual ~GenericCallback()
 2293              		.loc 14 179 13
 2294              		.cfi_startproc
 2295              		@ args = 0, pretend = 0, frame = 8
 2296              		@ frame_needed = 1, uses_anonymous_args = 0
 2297              		@ link register save eliminated.
 2298 0000 80B4     		push	{r7}
 2299              	.LCFI219:
 2300              		.cfi_def_cfa_offset 4
 2301              		.cfi_offset 7, -4
 2302 0002 83B0     		sub	sp, sp, #12
 2303              	.LCFI220:
 2304              		.cfi_def_cfa_offset 16
 2305 0004 00AF     		add	r7, sp, #0
 2306              	.LCFI221:
 2307              		.cfi_def_cfa_register 7
 2308 0006 7860     		str	r0, [r7, #4]
 2309              	.LBB22:
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 2310              		.loc 14 180 5
 2311 0008 044A     		ldr	r2, .L104
 2312 000a 7B68     		ldr	r3, [r7, #4]
 2313 000c 1A60     		str	r2, [r3]
 2314              	.LBE22:
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 2315              		.loc 14 181 5
 2316 000e 7B68     		ldr	r3, [r7, #4]
 2317 0010 1846     		mov	r0, r3
 2318 0012 0C37     		adds	r7, r7, #12
 2319              	.LCFI222:
 2320              		.cfi_def_cfa_offset 4
 2321 0014 BD46     		mov	sp, r7
 2322              	.LCFI223:
 2323              		.cfi_def_cfa_register 13
 2324              		@ sp needed
 2325 0016 5DF8047B 		ldr	r7, [sp], #4
 2326              	.LCFI224:
 2327              		.cfi_restore 7
 2328              		.cfi_def_cfa_offset 0
 2329 001a 7047     		bx	lr
 2330              	.L105:
 2331              		.align	2
 2332              	.L104:
 2333 001c 08000000 		.word	_ZTVN8touchgfx15GenericCallbackIvvvEE+8
 2334              		.cfi_endproc
 2335              	.LFE414:
 2337              		.weak	_ZN8touchgfx15GenericCallbackIvvvED1Ev
 2338              		.thumb_set _ZN8touchgfx15GenericCallbackIvvvED1Ev,_ZN8touchgfx15GenericCallbackIvvvED2Ev
 2339              		.section	.text._ZN8touchgfx15GenericCallbackIvvvED0Ev,"axG",%progbits,_ZN8touchgfx15GenericCallbac
 2340              		.align	1
 2341              		.weak	_ZN8touchgfx15GenericCallbackIvvvED0Ev
 2342              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 62


 2343              		.thumb
 2344              		.thumb_func
 2345              		.fpu fpv4-sp-d16
 2347              	_ZN8touchgfx15GenericCallbackIvvvED0Ev:
 2348              	.LFB416:
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 2349              		.loc 14 179 13
 2350              		.cfi_startproc
 2351              		@ args = 0, pretend = 0, frame = 8
 2352              		@ frame_needed = 1, uses_anonymous_args = 0
 2353 0000 80B5     		push	{r7, lr}
 2354              	.LCFI225:
 2355              		.cfi_def_cfa_offset 8
 2356              		.cfi_offset 7, -8
 2357              		.cfi_offset 14, -4
 2358 0002 82B0     		sub	sp, sp, #8
 2359              	.LCFI226:
 2360              		.cfi_def_cfa_offset 16
 2361 0004 00AF     		add	r7, sp, #0
 2362              	.LCFI227:
 2363              		.cfi_def_cfa_register 7
 2364 0006 7860     		str	r0, [r7, #4]
 2365              		.loc 14 181 5
 2366 0008 7868     		ldr	r0, [r7, #4]
 2367 000a FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvED1Ev
 2368 000e 0421     		movs	r1, #4
 2369 0010 7868     		ldr	r0, [r7, #4]
 2370 0012 FFF7FEFF 		bl	_ZdlPvj
 2371 0016 7B68     		ldr	r3, [r7, #4]
 2372 0018 1846     		mov	r0, r3
 2373 001a 0837     		adds	r7, r7, #8
 2374              	.LCFI228:
 2375              		.cfi_def_cfa_offset 8
 2376 001c BD46     		mov	sp, r7
 2377              	.LCFI229:
 2378              		.cfi_def_cfa_register 13
 2379              		@ sp needed
 2380 001e 80BD     		pop	{r7, pc}
 2381              		.cfi_endproc
 2382              	.LFE416:
 2384              		.section	.text._ZN8touchgfx11ApplicationD2Ev,"axG",%progbits,_ZN8touchgfx11ApplicationD5Ev,comdat
 2385              		.align	1
 2386              		.weak	_ZN8touchgfx11ApplicationD2Ev
 2387              		.syntax unified
 2388              		.thumb
 2389              		.thumb_func
 2390              		.fpu fpv4-sp-d16
 2392              	_ZN8touchgfx11ApplicationD2Ev:
 2393              	.LFB551:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 2394              		.loc 13 39 7
 2395              		.cfi_startproc
 2396              		@ args = 0, pretend = 0, frame = 8
 2397              		@ frame_needed = 1, uses_anonymous_args = 0
 2398 0000 80B5     		push	{r7, lr}
 2399              	.LCFI230:
 2400              		.cfi_def_cfa_offset 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 63


 2401              		.cfi_offset 7, -8
 2402              		.cfi_offset 14, -4
 2403 0002 82B0     		sub	sp, sp, #8
 2404              	.LCFI231:
 2405              		.cfi_def_cfa_offset 16
 2406 0004 00AF     		add	r7, sp, #0
 2407              	.LCFI232:
 2408              		.cfi_def_cfa_register 7
 2409 0006 7860     		str	r0, [r7, #4]
 2410              	.LBB23:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 2411              		.loc 13 39 7
 2412 0008 054A     		ldr	r2, .L110
 2413 000a 7B68     		ldr	r3, [r7, #4]
 2414 000c 1A60     		str	r2, [r3]
 2415 000e 7B68     		ldr	r3, [r7, #4]
 2416 0010 1846     		mov	r0, r3
 2417 0012 FFF7FEFF 		bl	_ZN8touchgfx15UIEventListenerD2Ev
 2418              	.LBE23:
 2419 0016 7B68     		ldr	r3, [r7, #4]
 2420 0018 1846     		mov	r0, r3
 2421 001a 0837     		adds	r7, r7, #8
 2422              	.LCFI233:
 2423              		.cfi_def_cfa_offset 8
 2424 001c BD46     		mov	sp, r7
 2425              	.LCFI234:
 2426              		.cfi_def_cfa_register 13
 2427              		@ sp needed
 2428 001e 80BD     		pop	{r7, pc}
 2429              	.L111:
 2430              		.align	2
 2431              	.L110:
 2432 0020 08000000 		.word	_ZTVN8touchgfx11ApplicationE+8
 2433              		.cfi_endproc
 2434              	.LFE551:
 2436              		.weak	_ZN8touchgfx11ApplicationD1Ev
 2437              		.thumb_set _ZN8touchgfx11ApplicationD1Ev,_ZN8touchgfx11ApplicationD2Ev
 2438              		.section	.text._ZN8touchgfx11ApplicationD0Ev,"axG",%progbits,_ZN8touchgfx11ApplicationD5Ev,comdat
 2439              		.align	1
 2440              		.weak	_ZN8touchgfx11ApplicationD0Ev
 2441              		.syntax unified
 2442              		.thumb
 2443              		.thumb_func
 2444              		.fpu fpv4-sp-d16
 2446              	_ZN8touchgfx11ApplicationD0Ev:
 2447              	.LFB553:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 2448              		.loc 13 39 7
 2449              		.cfi_startproc
 2450              		@ args = 0, pretend = 0, frame = 8
 2451              		@ frame_needed = 1, uses_anonymous_args = 0
 2452 0000 80B5     		push	{r7, lr}
 2453              	.LCFI235:
 2454              		.cfi_def_cfa_offset 8
 2455              		.cfi_offset 7, -8
 2456              		.cfi_offset 14, -4
 2457 0002 82B0     		sub	sp, sp, #8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 64


 2458              	.LCFI236:
 2459              		.cfi_def_cfa_offset 16
 2460 0004 00AF     		add	r7, sp, #0
 2461              	.LCFI237:
 2462              		.cfi_def_cfa_register 7
 2463 0006 7860     		str	r0, [r7, #4]
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 2464              		.loc 13 39 7
 2465 0008 7868     		ldr	r0, [r7, #4]
 2466 000a FFF7FEFF 		bl	_ZN8touchgfx11ApplicationD1Ev
 2467 000e 4FF49C71 		mov	r1, #312
 2468 0012 7868     		ldr	r0, [r7, #4]
 2469 0014 FFF7FEFF 		bl	_ZdlPvj
 2470 0018 7B68     		ldr	r3, [r7, #4]
 2471 001a 1846     		mov	r0, r3
 2472 001c 0837     		adds	r7, r7, #8
 2473              	.LCFI238:
 2474              		.cfi_def_cfa_offset 8
 2475 001e BD46     		mov	sp, r7
 2476              	.LCFI239:
 2477              		.cfi_def_cfa_register 13
 2478              		@ sp needed
 2479 0020 80BD     		pop	{r7, pc}
 2480              		.cfi_endproc
 2481              	.LFE553:
 2483              		.section	.text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv,"axG",%progbits,_ZN8t
 2484              		.align	1
 2485              		.weak	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 2486              		.syntax unified
 2487              		.thumb
 2488              		.thumb_func
 2489              		.fpu fpv4-sp-d16
 2491              	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:
 2492              	.LFB556:
 2493              		.file 15 "Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp"
   1:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @file mvp/MVPApplication.hpp
  15:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * Declares the touchgfx::MVPApplication class.
  17:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #ifndef TOUCHGFX_MVPAPPLICATION_HPP
  19:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #define TOUCHGFX_MVPAPPLICATION_HPP
  20:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <new>
  22:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <touchgfx/hal/Types.hpp>
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 65


  23:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <touchgfx/Application.hpp>
  24:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <touchgfx/Callback.hpp>
  25:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <touchgfx/Screen.hpp>
  26:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <touchgfx/transitions/Transition.hpp>
  27:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <common/AbstractPartition.hpp>
  28:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <mvp/MVPHeap.hpp>
  29:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** #include <mvp/Presenter.hpp>
  30:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  31:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** namespace touchgfx
  32:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
  33:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** class Presenter;
  34:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  35:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** /**
  36:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * A specialization of the TouchGFX Application class that provides the necessary glue for
  37:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * transitioning between presenter/view pairs.
  38:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *
  39:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * It maintains a callback for transitioning and evaluates this at each tick.
  40:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *
  41:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @see Application
  42:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  */
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** class MVPApplication : public Application
  44:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
  45:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** public:
  46:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     /** Initializes a new instance of the MVPApplication class. */
  47:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     MVPApplication()
  48:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         : currentPresenter(0),
  49:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****           pendingScreenTransitionCallback(0)
  50:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  51:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         instance = this;
  52:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
  53:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  54:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     /**
  55:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      * Handles the pending screen transition.
  56:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      *
  57:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      * Delegates the work to evaluatePendingScreenTransition()
  58:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      */
  59:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     virtual void handlePendingScreenTransition()
 2494              		.loc 15 59 18
 2495              		.cfi_startproc
 2496              		@ args = 0, pretend = 0, frame = 8
 2497              		@ frame_needed = 1, uses_anonymous_args = 0
 2498 0000 80B5     		push	{r7, lr}
 2499              	.LCFI240:
 2500              		.cfi_def_cfa_offset 8
 2501              		.cfi_offset 7, -8
 2502              		.cfi_offset 14, -4
 2503 0002 82B0     		sub	sp, sp, #8
 2504              	.LCFI241:
 2505              		.cfi_def_cfa_offset 16
 2506 0004 00AF     		add	r7, sp, #0
 2507              	.LCFI242:
 2508              		.cfi_def_cfa_register 7
 2509 0006 7860     		str	r0, [r7, #4]
  60:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  61:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         evaluatePendingScreenTransition();
 2510              		.loc 15 61 40
 2511 0008 7868     		ldr	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 66


 2512 000a FFF7FEFF 		bl	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
  62:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2513              		.loc 15 62 5
 2514 000e 00BF     		nop
 2515 0010 0837     		adds	r7, r7, #8
 2516              	.LCFI243:
 2517              		.cfi_def_cfa_offset 8
 2518 0012 BD46     		mov	sp, r7
 2519              	.LCFI244:
 2520              		.cfi_def_cfa_register 13
 2521              		@ sp needed
 2522 0014 80BD     		pop	{r7, pc}
 2523              		.cfi_endproc
 2524              	.LFE556:
 2526              		.section	.text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv,"axG",%progbits,_ZN
 2527              		.align	1
 2528              		.weak	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
 2529              		.syntax unified
 2530              		.thumb
 2531              		.thumb_func
 2532              		.fpu fpv4-sp-d16
 2534              	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:
 2535              	.LFB557:
  63:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  64:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** protected:
  65:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     Presenter* currentPresenter; ///< Pointer to the currently active presenter.
  66:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  67:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     GenericCallback<>* pendingScreenTransitionCallback; ///< Callback for screen transitions. Will 
  68:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  69:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     /**
  70:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      * Evaluates the pending Callback instances. If a callback is valid, it is executed and
  71:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      * a Screen transition is executed.
  72:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      */
  73:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     void evaluatePendingScreenTransition()
 2536              		.loc 15 73 10
 2537              		.cfi_startproc
 2538              		@ args = 0, pretend = 0, frame = 8
 2539              		@ frame_needed = 1, uses_anonymous_args = 0
 2540 0000 80B5     		push	{r7, lr}
 2541              	.LCFI245:
 2542              		.cfi_def_cfa_offset 8
 2543              		.cfi_offset 7, -8
 2544              		.cfi_offset 14, -4
 2545 0002 82B0     		sub	sp, sp, #8
 2546              	.LCFI246:
 2547              		.cfi_def_cfa_offset 16
 2548 0004 00AF     		add	r7, sp, #0
 2549              	.LCFI247:
 2550              		.cfi_def_cfa_register 7
 2551 0006 7860     		str	r0, [r7, #4]
  74:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  75:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         if (pendingScreenTransitionCallback && pendingScreenTransitionCallback->isValid())
 2552              		.loc 15 75 13
 2553 0008 7B68     		ldr	r3, [r7, #4]
 2554 000a D3F83C31 		ldr	r3, [r3, #316]
 2555              		.loc 15 75 45
 2556 000e 002B     		cmp	r3, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 67


 2557 0010 0FD0     		beq	.L116
 2558              		.loc 15 75 48 discriminator 1
 2559 0012 7B68     		ldr	r3, [r7, #4]
 2560 0014 D3F83C21 		ldr	r2, [r3, #316]
 2561 0018 7B68     		ldr	r3, [r7, #4]
 2562 001a D3F83C31 		ldr	r3, [r3, #316]
 2563              		.loc 15 75 89 discriminator 1
 2564 001e 1B68     		ldr	r3, [r3]
 2565 0020 0C33     		adds	r3, r3, #12
 2566 0022 1B68     		ldr	r3, [r3]
 2567              		.loc 15 75 88 discriminator 1
 2568 0024 1046     		mov	r0, r2
 2569 0026 9847     		blx	r3
 2570              	.LVL0:
 2571 0028 0346     		mov	r3, r0
 2572              		.loc 15 75 45 discriminator 1
 2573 002a 002B     		cmp	r3, #0
 2574 002c 01D0     		beq	.L116
 2575              		.loc 15 75 45 is_stmt 0 discriminator 3
 2576 002e 0123     		movs	r3, #1
 2577 0030 00E0     		b	.L117
 2578              	.L116:
 2579              		.loc 15 75 45 discriminator 4
 2580 0032 0023     		movs	r3, #0
 2581              	.L117:
 2582              		.loc 15 75 9 is_stmt 1 discriminator 6
 2583 0034 002B     		cmp	r3, #0
 2584 0036 0ED0     		beq	.L119
  76:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         {
  77:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****             pendingScreenTransitionCallback->execute();
 2585              		.loc 15 77 13
 2586 0038 7B68     		ldr	r3, [r7, #4]
 2587 003a D3F83C21 		ldr	r2, [r3, #316]
 2588 003e 7B68     		ldr	r3, [r7, #4]
 2589 0040 D3F83C31 		ldr	r3, [r3, #316]
 2590              		.loc 15 77 54
 2591 0044 1B68     		ldr	r3, [r3]
 2592 0046 0833     		adds	r3, r3, #8
 2593 0048 1B68     		ldr	r3, [r3]
 2594              		.loc 15 77 53
 2595 004a 1046     		mov	r0, r2
 2596 004c 9847     		blx	r3
 2597              	.LVL1:
  78:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****             pendingScreenTransitionCallback = 0;
 2598              		.loc 15 78 45
 2599 004e 7B68     		ldr	r3, [r7, #4]
 2600 0050 0022     		movs	r2, #0
 2601 0052 C3F83C21 		str	r2, [r3, #316]
 2602              	.L119:
  79:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         }
  80:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2603              		.loc 15 80 5
 2604 0056 00BF     		nop
 2605 0058 0837     		adds	r7, r7, #8
 2606              	.LCFI248:
 2607              		.cfi_def_cfa_offset 8
 2608 005a BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 68


 2609              	.LCFI249:
 2610              		.cfi_def_cfa_register 13
 2611              		@ sp needed
 2612 005c 80BD     		pop	{r7, pc}
 2613              		.cfi_endproc
 2614              	.LFE557:
 2616              		.section	.text._ZN8touchgfx14MVPApplicationD2Ev,"axG",%progbits,_ZN8touchgfx14MVPApplicationD5Ev,c
 2617              		.align	1
 2618              		.weak	_ZN8touchgfx14MVPApplicationD2Ev
 2619              		.syntax unified
 2620              		.thumb
 2621              		.thumb_func
 2622              		.fpu fpv4-sp-d16
 2624              	_ZN8touchgfx14MVPApplicationD2Ev:
 2625              	.LFB564:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 2626              		.loc 15 43 7
 2627              		.cfi_startproc
 2628              		@ args = 0, pretend = 0, frame = 8
 2629              		@ frame_needed = 1, uses_anonymous_args = 0
 2630 0000 80B5     		push	{r7, lr}
 2631              	.LCFI250:
 2632              		.cfi_def_cfa_offset 8
 2633              		.cfi_offset 7, -8
 2634              		.cfi_offset 14, -4
 2635 0002 82B0     		sub	sp, sp, #8
 2636              	.LCFI251:
 2637              		.cfi_def_cfa_offset 16
 2638 0004 00AF     		add	r7, sp, #0
 2639              	.LCFI252:
 2640              		.cfi_def_cfa_register 7
 2641 0006 7860     		str	r0, [r7, #4]
 2642              	.LBB24:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 2643              		.loc 15 43 7
 2644 0008 054A     		ldr	r2, .L122
 2645 000a 7B68     		ldr	r3, [r7, #4]
 2646 000c 1A60     		str	r2, [r3]
 2647 000e 7B68     		ldr	r3, [r7, #4]
 2648 0010 1846     		mov	r0, r3
 2649 0012 FFF7FEFF 		bl	_ZN8touchgfx11ApplicationD2Ev
 2650              	.LBE24:
 2651 0016 7B68     		ldr	r3, [r7, #4]
 2652 0018 1846     		mov	r0, r3
 2653 001a 0837     		adds	r7, r7, #8
 2654              	.LCFI253:
 2655              		.cfi_def_cfa_offset 8
 2656 001c BD46     		mov	sp, r7
 2657              	.LCFI254:
 2658              		.cfi_def_cfa_register 13
 2659              		@ sp needed
 2660 001e 80BD     		pop	{r7, pc}
 2661              	.L123:
 2662              		.align	2
 2663              	.L122:
 2664 0020 08000000 		.word	_ZTVN8touchgfx14MVPApplicationE+8
 2665              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 69


 2666              	.LFE564:
 2668              		.weak	_ZN8touchgfx14MVPApplicationD1Ev
 2669              		.thumb_set _ZN8touchgfx14MVPApplicationD1Ev,_ZN8touchgfx14MVPApplicationD2Ev
 2670              		.section	.text._ZN8touchgfx14MVPApplicationD0Ev,"axG",%progbits,_ZN8touchgfx14MVPApplicationD5Ev,c
 2671              		.align	1
 2672              		.weak	_ZN8touchgfx14MVPApplicationD0Ev
 2673              		.syntax unified
 2674              		.thumb
 2675              		.thumb_func
 2676              		.fpu fpv4-sp-d16
 2678              	_ZN8touchgfx14MVPApplicationD0Ev:
 2679              	.LFB566:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 2680              		.loc 15 43 7
 2681              		.cfi_startproc
 2682              		@ args = 0, pretend = 0, frame = 8
 2683              		@ frame_needed = 1, uses_anonymous_args = 0
 2684 0000 80B5     		push	{r7, lr}
 2685              	.LCFI255:
 2686              		.cfi_def_cfa_offset 8
 2687              		.cfi_offset 7, -8
 2688              		.cfi_offset 14, -4
 2689 0002 82B0     		sub	sp, sp, #8
 2690              	.LCFI256:
 2691              		.cfi_def_cfa_offset 16
 2692 0004 00AF     		add	r7, sp, #0
 2693              	.LCFI257:
 2694              		.cfi_def_cfa_register 7
 2695 0006 7860     		str	r0, [r7, #4]
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 2696              		.loc 15 43 7
 2697 0008 7868     		ldr	r0, [r7, #4]
 2698 000a FFF7FEFF 		bl	_ZN8touchgfx14MVPApplicationD1Ev
 2699 000e 4FF4A071 		mov	r1, #320
 2700 0012 7868     		ldr	r0, [r7, #4]
 2701 0014 FFF7FEFF 		bl	_ZdlPvj
 2702 0018 7B68     		ldr	r3, [r7, #4]
 2703 001a 1846     		mov	r0, r3
 2704 001c 0837     		adds	r7, r7, #8
 2705              	.LCFI258:
 2706              		.cfi_def_cfa_offset 8
 2707 001e BD46     		mov	sp, r7
 2708              	.LCFI259:
 2709              		.cfi_def_cfa_register 13
 2710              		@ sp needed
 2711 0020 80BD     		pop	{r7, pc}
 2712              		.cfi_endproc
 2713              	.LFE566:
 2715              		.section	.text._ZN23FrontendApplicationBaseD2Ev,"axG",%progbits,_ZN23FrontendApplicationBaseD5Ev,c
 2716              		.align	1
 2717              		.weak	_ZN23FrontendApplicationBaseD2Ev
 2718              		.syntax unified
 2719              		.thumb
 2720              		.thumb_func
 2721              		.fpu fpv4-sp-d16
 2723              	_ZN23FrontendApplicationBaseD2Ev:
 2724              	.LFB567:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 70


 2725              		.file 16 "Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp"
   1:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** /*********************************************************************************/
   2:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** /********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
   3:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** /*********************************************************************************/
   4:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** #ifndef FRONTENDAPPLICATIONBASE_HPP
   5:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** #define FRONTENDAPPLICATIONBASE_HPP
   6:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** 
   7:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** #include <mvp/MVPApplication.hpp>
   8:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** #include <gui/model/Model.hpp>
   9:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** 
  10:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** class FrontendHeap;
  11:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** 
  12:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** class FrontendApplicationBase : public touchgfx::MVPApplication
  13:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** {
  14:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp **** public:
  15:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp ****     FrontendApplicationBase(Model& m, FrontendHeap& heap);
  16:Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp ****     virtual ~FrontendApplicationBase() { }
 2726              		.loc 16 16 13
 2727              		.cfi_startproc
 2728              		@ args = 0, pretend = 0, frame = 8
 2729              		@ frame_needed = 1, uses_anonymous_args = 0
 2730 0000 80B5     		push	{r7, lr}
 2731              	.LCFI260:
 2732              		.cfi_def_cfa_offset 8
 2733              		.cfi_offset 7, -8
 2734              		.cfi_offset 14, -4
 2735 0002 82B0     		sub	sp, sp, #8
 2736              	.LCFI261:
 2737              		.cfi_def_cfa_offset 16
 2738 0004 00AF     		add	r7, sp, #0
 2739              	.LCFI262:
 2740              		.cfi_def_cfa_register 7
 2741 0006 7860     		str	r0, [r7, #4]
 2742              	.LBB25:
 2743              		.loc 16 16 40
 2744 0008 084A     		ldr	r2, .L128
 2745 000a 7B68     		ldr	r3, [r7, #4]
 2746 000c 1A60     		str	r2, [r3]
 2747 000e 7B68     		ldr	r3, [r7, #4]
 2748 0010 03F5A073 		add	r3, r3, #320
 2749 0014 1846     		mov	r0, r3
 2750 0016 FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 2751 001a 7B68     		ldr	r3, [r7, #4]
 2752 001c 1846     		mov	r0, r3
 2753 001e FFF7FEFF 		bl	_ZN8touchgfx14MVPApplicationD2Ev
 2754              	.LBE25:
 2755              		.loc 16 16 42
 2756 0022 7B68     		ldr	r3, [r7, #4]
 2757 0024 1846     		mov	r0, r3
 2758 0026 0837     		adds	r7, r7, #8
 2759              	.LCFI263:
 2760              		.cfi_def_cfa_offset 8
 2761 0028 BD46     		mov	sp, r7
 2762              	.LCFI264:
 2763              		.cfi_def_cfa_register 13
 2764              		@ sp needed
 2765 002a 80BD     		pop	{r7, pc}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 71


 2766              	.L129:
 2767              		.align	2
 2768              	.L128:
 2769 002c 08000000 		.word	_ZTV23FrontendApplicationBase+8
 2770              		.cfi_endproc
 2771              	.LFE567:
 2773              		.weak	_ZN23FrontendApplicationBaseD1Ev
 2774              		.thumb_set _ZN23FrontendApplicationBaseD1Ev,_ZN23FrontendApplicationBaseD2Ev
 2775              		.section	.text._ZN23FrontendApplicationBaseD0Ev,"axG",%progbits,_ZN23FrontendApplicationBaseD5Ev,c
 2776              		.align	1
 2777              		.weak	_ZN23FrontendApplicationBaseD0Ev
 2778              		.syntax unified
 2779              		.thumb
 2780              		.thumb_func
 2781              		.fpu fpv4-sp-d16
 2783              	_ZN23FrontendApplicationBaseD0Ev:
 2784              	.LFB569:
 2785              		.loc 16 16 13
 2786              		.cfi_startproc
 2787              		@ args = 0, pretend = 0, frame = 8
 2788              		@ frame_needed = 1, uses_anonymous_args = 0
 2789 0000 80B5     		push	{r7, lr}
 2790              	.LCFI265:
 2791              		.cfi_def_cfa_offset 8
 2792              		.cfi_offset 7, -8
 2793              		.cfi_offset 14, -4
 2794 0002 82B0     		sub	sp, sp, #8
 2795              	.LCFI266:
 2796              		.cfi_def_cfa_offset 16
 2797 0004 00AF     		add	r7, sp, #0
 2798              	.LCFI267:
 2799              		.cfi_def_cfa_register 7
 2800 0006 7860     		str	r0, [r7, #4]
 2801              		.loc 16 16 42
 2802 0008 7868     		ldr	r0, [r7, #4]
 2803 000a FFF7FEFF 		bl	_ZN23FrontendApplicationBaseD1Ev
 2804 000e 4FF4AC71 		mov	r1, #344
 2805 0012 7868     		ldr	r0, [r7, #4]
 2806 0014 FFF7FEFF 		bl	_ZdlPvj
 2807 0018 7B68     		ldr	r3, [r7, #4]
 2808 001a 1846     		mov	r0, r3
 2809 001c 0837     		adds	r7, r7, #8
 2810              	.LCFI268:
 2811              		.cfi_def_cfa_offset 8
 2812 001e BD46     		mov	sp, r7
 2813              	.LCFI269:
 2814              		.cfi_def_cfa_register 13
 2815              		@ sp needed
 2816 0020 80BD     		pop	{r7, pc}
 2817              		.cfi_endproc
 2818              	.LFE569:
 2820              		.section	.text._ZN19FrontendApplicationD2Ev,"axG",%progbits,_ZN19FrontendApplicationD5Ev,comdat
 2821              		.align	1
 2822              		.weak	_ZN19FrontendApplicationD2Ev
 2823              		.syntax unified
 2824              		.thumb
 2825              		.thumb_func
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 72


 2826              		.fpu fpv4-sp-d16
 2828              	_ZN19FrontendApplicationD2Ev:
 2829              	.LFB571:
 2830              		.file 17 "Src/gui/include/gui/common/FrontendApplication.hpp"
   1:Src/gui/include/gui/common/FrontendApplication.hpp **** #ifndef FRONTENDAPPLICATION_HPP
   2:Src/gui/include/gui/common/FrontendApplication.hpp **** #define FRONTENDAPPLICATION_HPP
   3:Src/gui/include/gui/common/FrontendApplication.hpp **** 
   4:Src/gui/include/gui/common/FrontendApplication.hpp **** #include <gui_generated/common/FrontendApplicationBase.hpp>
   5:Src/gui/include/gui/common/FrontendApplication.hpp **** 
   6:Src/gui/include/gui/common/FrontendApplication.hpp **** class FrontendHeap;
   7:Src/gui/include/gui/common/FrontendApplication.hpp **** 
   8:Src/gui/include/gui/common/FrontendApplication.hpp **** using namespace touchgfx;
   9:Src/gui/include/gui/common/FrontendApplication.hpp **** 
  10:Src/gui/include/gui/common/FrontendApplication.hpp **** class FrontendApplication : public FrontendApplicationBase
  11:Src/gui/include/gui/common/FrontendApplication.hpp **** {
  12:Src/gui/include/gui/common/FrontendApplication.hpp **** public:
  13:Src/gui/include/gui/common/FrontendApplication.hpp ****     FrontendApplication(Model& m, FrontendHeap& heap);
  14:Src/gui/include/gui/common/FrontendApplication.hpp ****     virtual ~FrontendApplication() { }
 2831              		.loc 17 14 13
 2832              		.cfi_startproc
 2833              		@ args = 0, pretend = 0, frame = 8
 2834              		@ frame_needed = 1, uses_anonymous_args = 0
 2835 0000 80B5     		push	{r7, lr}
 2836              	.LCFI270:
 2837              		.cfi_def_cfa_offset 8
 2838              		.cfi_offset 7, -8
 2839              		.cfi_offset 14, -4
 2840 0002 82B0     		sub	sp, sp, #8
 2841              	.LCFI271:
 2842              		.cfi_def_cfa_offset 16
 2843 0004 00AF     		add	r7, sp, #0
 2844              	.LCFI272:
 2845              		.cfi_def_cfa_register 7
 2846 0006 7860     		str	r0, [r7, #4]
 2847              	.LBB26:
 2848              		.loc 17 14 36
 2849 0008 054A     		ldr	r2, .L134
 2850 000a 7B68     		ldr	r3, [r7, #4]
 2851 000c 1A60     		str	r2, [r3]
 2852 000e 7B68     		ldr	r3, [r7, #4]
 2853 0010 1846     		mov	r0, r3
 2854 0012 FFF7FEFF 		bl	_ZN23FrontendApplicationBaseD2Ev
 2855              	.LBE26:
 2856              		.loc 17 14 38
 2857 0016 7B68     		ldr	r3, [r7, #4]
 2858 0018 1846     		mov	r0, r3
 2859 001a 0837     		adds	r7, r7, #8
 2860              	.LCFI273:
 2861              		.cfi_def_cfa_offset 8
 2862 001c BD46     		mov	sp, r7
 2863              	.LCFI274:
 2864              		.cfi_def_cfa_register 13
 2865              		@ sp needed
 2866 001e 80BD     		pop	{r7, pc}
 2867              	.L135:
 2868              		.align	2
 2869              	.L134:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 73


 2870 0020 08000000 		.word	_ZTV19FrontendApplication+8
 2871              		.cfi_endproc
 2872              	.LFE571:
 2874              		.weak	_ZN19FrontendApplicationD1Ev
 2875              		.thumb_set _ZN19FrontendApplicationD1Ev,_ZN19FrontendApplicationD2Ev
 2876              		.section	.text._ZN19FrontendApplicationD0Ev,"axG",%progbits,_ZN19FrontendApplicationD5Ev,comdat
 2877              		.align	1
 2878              		.weak	_ZN19FrontendApplicationD0Ev
 2879              		.syntax unified
 2880              		.thumb
 2881              		.thumb_func
 2882              		.fpu fpv4-sp-d16
 2884              	_ZN19FrontendApplicationD0Ev:
 2885              	.LFB573:
 2886              		.loc 17 14 13
 2887              		.cfi_startproc
 2888              		@ args = 0, pretend = 0, frame = 8
 2889              		@ frame_needed = 1, uses_anonymous_args = 0
 2890 0000 80B5     		push	{r7, lr}
 2891              	.LCFI275:
 2892              		.cfi_def_cfa_offset 8
 2893              		.cfi_offset 7, -8
 2894              		.cfi_offset 14, -4
 2895 0002 82B0     		sub	sp, sp, #8
 2896              	.LCFI276:
 2897              		.cfi_def_cfa_offset 16
 2898 0004 00AF     		add	r7, sp, #0
 2899              	.LCFI277:
 2900              		.cfi_def_cfa_register 7
 2901 0006 7860     		str	r0, [r7, #4]
 2902              		.loc 17 14 38
 2903 0008 7868     		ldr	r0, [r7, #4]
 2904 000a FFF7FEFF 		bl	_ZN19FrontendApplicationD1Ev
 2905 000e 4FF4AC71 		mov	r1, #344
 2906 0012 7868     		ldr	r0, [r7, #4]
 2907 0014 FFF7FEFF 		bl	_ZdlPvj
 2908 0018 7B68     		ldr	r3, [r7, #4]
 2909 001a 1846     		mov	r0, r3
 2910 001c 0837     		adds	r7, r7, #8
 2911              	.LCFI278:
 2912              		.cfi_def_cfa_offset 8
 2913 001e BD46     		mov	sp, r7
 2914              	.LCFI279:
 2915              		.cfi_def_cfa_register 13
 2916              		@ sp needed
 2917 0020 80BD     		pop	{r7, pc}
 2918              		.cfi_endproc
 2919              	.LFE573:
 2921              		.section	.text._ZN19FrontendApplication15handleTickEventEv,"axG",%progbits,_ZN19FrontendApplicatio
 2922              		.align	1
 2923              		.weak	_ZN19FrontendApplication15handleTickEventEv
 2924              		.syntax unified
 2925              		.thumb
 2926              		.thumb_func
 2927              		.fpu fpv4-sp-d16
 2929              	_ZN19FrontendApplication15handleTickEventEv:
 2930              	.LFB574:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 74


  15:Src/gui/include/gui/common/FrontendApplication.hpp **** 
  16:Src/gui/include/gui/common/FrontendApplication.hpp ****     virtual void handleTickEvent()
 2931              		.loc 17 16 18
 2932              		.cfi_startproc
 2933              		@ args = 0, pretend = 0, frame = 8
 2934              		@ frame_needed = 1, uses_anonymous_args = 0
 2935 0000 80B5     		push	{r7, lr}
 2936              	.LCFI280:
 2937              		.cfi_def_cfa_offset 8
 2938              		.cfi_offset 7, -8
 2939              		.cfi_offset 14, -4
 2940 0002 82B0     		sub	sp, sp, #8
 2941              	.LCFI281:
 2942              		.cfi_def_cfa_offset 16
 2943 0004 00AF     		add	r7, sp, #0
 2944              	.LCFI282:
 2945              		.cfi_def_cfa_register 7
 2946 0006 7860     		str	r0, [r7, #4]
  17:Src/gui/include/gui/common/FrontendApplication.hpp ****     {
  18:Src/gui/include/gui/common/FrontendApplication.hpp ****         model.tick();
 2947              		.loc 17 18 9
 2948 0008 7B68     		ldr	r3, [r7, #4]
 2949 000a D3F85431 		ldr	r3, [r3, #340]
 2950              		.loc 17 18 19
 2951 000e 1846     		mov	r0, r3
 2952 0010 FFF7FEFF 		bl	_ZN5Model4tickEv
  19:Src/gui/include/gui/common/FrontendApplication.hpp ****         FrontendApplicationBase::handleTickEvent();
 2953              		.loc 17 19 49
 2954 0014 7B68     		ldr	r3, [r7, #4]
 2955 0016 1846     		mov	r0, r3
 2956 0018 FFF7FEFF 		bl	_ZN8touchgfx11Application15handleTickEventEv
  20:Src/gui/include/gui/common/FrontendApplication.hpp ****     }
 2957              		.loc 17 20 5
 2958 001c 00BF     		nop
 2959 001e 0837     		adds	r7, r7, #8
 2960              	.LCFI283:
 2961              		.cfi_def_cfa_offset 8
 2962 0020 BD46     		mov	sp, r7
 2963              	.LCFI284:
 2964              		.cfi_def_cfa_register 13
 2965              		@ sp needed
 2966 0022 80BD     		pop	{r7, pc}
 2967              		.cfi_endproc
 2968              	.LFE574:
 2970              		.section	.text._ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication,"axG",%progbits,_ZN16
 2971              		.align	1
 2972              		.weak	_ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication
 2973              		.syntax unified
 2974              		.thumb
 2975              		.thumb_func
 2976              		.fpu fpv4-sp-d16
 2978              	_ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication:
 2979              	.LFB785:
 2980              		.file 18 "Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp"
   1:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** /*********************************************************************************/
   2:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** /********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
   3:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** /*********************************************************************************/
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 75


   4:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #ifndef FRONTENDHEAPBASE_HPP
   5:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #define FRONTENDHEAPBASE_HPP
   6:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
   7:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #include <common/Meta.hpp>
   8:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #include <common/Partition.hpp>
   9:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #include <mvp/MVPHeap.hpp>
  10:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  11:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #include <touchgfx/transitions/NoTransition.hpp>
  12:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #include <gui/common/FrontendApplication.hpp>
  13:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #include <gui/model/Model.hpp>
  14:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  15:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #include <gui/screen_screen/screenView.hpp>
  16:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** #include <gui/screen_screen/screenPresenter.hpp>
  17:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  18:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  19:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** /**
  20:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * This class provides the memory that shall be used for memory allocations
  21:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * in the frontend. A single instance of the FrontendHeap is allocated once (in heap
  22:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * memory), and all other frontend objects such as views, presenters and data model are
  23:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * allocated within the scope of this FrontendHeap. As such, the RAM usage of the entire
  24:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * user interface is sizeof(FrontendHeap).
  25:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  *
  26:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * @note The FrontendHeap reserves memory for the most memory-consuming presenter and
  27:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * view only. The largest of these classes are determined at compile-time using template
  28:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * magic. As such, it is important to add all presenters, views and transitions to the
  29:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  * type lists in this class.
  30:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  *
  31:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****  */
  32:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** class FrontendHeapBase : public touchgfx::MVPHeap
  33:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** {
  34:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** public:
  35:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     /**
  36:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * A list of all view types. Must end with meta::Nil.
  37:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * @note All view types used in the application MUST be added to this list!
  38:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      */
  39:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     typedef touchgfx::meta::TypeList< screenView,
  40:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****             touchgfx::meta::Nil
  41:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****             > GeneratedViewTypes;
  42:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  43:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     /**
  44:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * Determine (compile time) the View type of largest size.
  45:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      */
  46:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     typedef touchgfx::meta::select_type_maxsize< GeneratedViewTypes >::type MaxGeneratedViewType;
  47:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  48:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     /**
  49:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * A list of all presenter types. Must end with meta::Nil.
  50:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * @note All presenter types used in the application MUST be added to this list!
  51:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      */
  52:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     typedef touchgfx::meta::TypeList< screenPresenter,
  53:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****             touchgfx::meta::Nil
  54:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****             > GeneratedPresenterTypes;
  55:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  56:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     /**
  57:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * Determine (compile time) the Presenter type of largest size.
  58:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      */
  59:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     typedef touchgfx::meta::select_type_maxsize< GeneratedPresenterTypes >::type MaxGeneratedPresen
  60:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 76


  61:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     /**
  62:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * A list of all transition types. Must end with meta::Nil.
  63:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * @note All transition types used in the application MUST be added to this list!
  64:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      */
  65:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     typedef touchgfx::meta::TypeList< touchgfx::NoTransition,
  66:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****             touchgfx::meta::Nil
  67:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****             > GeneratedTransitionTypes;
  68:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  69:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     /**
  70:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      * Determine (compile time) the Transition type of largest size.
  71:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****      */
  72:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     typedef touchgfx::meta::select_type_maxsize< GeneratedTransitionTypes >::type MaxGeneratedTrans
  73:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  74:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     virtual void gotoStartScreen(FrontendApplication& app)
 2981              		.loc 18 74 18
 2982              		.cfi_startproc
 2983              		@ args = 0, pretend = 0, frame = 8
 2984              		@ frame_needed = 1, uses_anonymous_args = 0
 2985 0000 80B5     		push	{r7, lr}
 2986              	.LCFI285:
 2987              		.cfi_def_cfa_offset 8
 2988              		.cfi_offset 7, -8
 2989              		.cfi_offset 14, -4
 2990 0002 82B0     		sub	sp, sp, #8
 2991              	.LCFI286:
 2992              		.cfi_def_cfa_offset 16
 2993 0004 00AF     		add	r7, sp, #0
 2994              	.LCFI287:
 2995              		.cfi_def_cfa_register 7
 2996 0006 7860     		str	r0, [r7, #4]
 2997 0008 3960     		str	r1, [r7]
  75:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     {
  76:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****         app.gotoscreenScreenNoTransition();
 2998              		.loc 18 76 41
 2999 000a 3B68     		ldr	r3, [r7]
 3000 000c 1846     		mov	r0, r3
 3001 000e FFF7FEFF 		bl	_ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv
  77:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     }
 3002              		.loc 18 77 5
 3003 0012 00BF     		nop
 3004 0014 0837     		adds	r7, r7, #8
 3005              	.LCFI288:
 3006              		.cfi_def_cfa_offset 8
 3007 0016 BD46     		mov	sp, r7
 3008              	.LCFI289:
 3009              		.cfi_def_cfa_register 13
 3010              		@ sp needed
 3011 0018 80BD     		pop	{r7, pc}
 3012              		.cfi_endproc
 3013              	.LFE785:
 3015              		.section	.text._ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication
 3016              		.align	1
 3017              		.weak	_ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication
 3018              		.syntax unified
 3019              		.thumb
 3020              		.thumb_func
 3021              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 77


 3023              	_ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication:
 3024              	.LFB787:
  78:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** protected:
  79:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     FrontendHeapBase(touchgfx::AbstractPartition& presenters, touchgfx::AbstractPartition& views, t
 3025              		.loc 18 79 5
 3026              		.cfi_startproc
 3027              		@ args = 4, pretend = 0, frame = 16
 3028              		@ frame_needed = 1, uses_anonymous_args = 0
 3029 0000 80B5     		push	{r7, lr}
 3030              	.LCFI290:
 3031              		.cfi_def_cfa_offset 8
 3032              		.cfi_offset 7, -8
 3033              		.cfi_offset 14, -4
 3034 0002 86B0     		sub	sp, sp, #24
 3035              	.LCFI291:
 3036              		.cfi_def_cfa_offset 32
 3037 0004 02AF     		add	r7, sp, #8
 3038              	.LCFI292:
 3039              		.cfi_def_cfa 7, 24
 3040 0006 F860     		str	r0, [r7, #12]
 3041 0008 B960     		str	r1, [r7, #8]
 3042 000a 7A60     		str	r2, [r7, #4]
 3043 000c 3B60     		str	r3, [r7]
 3044              	.LBB27:
  80:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****         : MVPHeap(presenters, views, transitions, app)
 3045              		.loc 18 80 54
 3046 000e F868     		ldr	r0, [r7, #12]
 3047 0010 BB69     		ldr	r3, [r7, #24]
 3048 0012 0093     		str	r3, [sp]
 3049 0014 3B68     		ldr	r3, [r7]
 3050 0016 7A68     		ldr	r2, [r7, #4]
 3051 0018 B968     		ldr	r1, [r7, #8]
 3052 001a FFF7FEFF 		bl	_ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE
 3053 001e 044A     		ldr	r2, .L142
 3054 0020 FB68     		ldr	r3, [r7, #12]
 3055 0022 1A60     		str	r2, [r3]
 3056              	.LBE27:
  81:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     {
  82:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** 
  83:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp ****     }
 3057              		.loc 18 83 5
 3058 0024 FB68     		ldr	r3, [r7, #12]
 3059 0026 1846     		mov	r0, r3
 3060 0028 1037     		adds	r7, r7, #16
 3061              	.LCFI293:
 3062              		.cfi_def_cfa_offset 8
 3063 002a BD46     		mov	sp, r7
 3064              	.LCFI294:
 3065              		.cfi_def_cfa_register 13
 3066              		@ sp needed
 3067 002c 80BD     		pop	{r7, pc}
 3068              	.L143:
 3069 002e 00BF     		.align	2
 3070              	.L142:
 3071 0030 08000000 		.word	_ZTV16FrontendHeapBase+8
 3072              		.cfi_endproc
 3073              	.LFE787:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 78


 3075              		.weak	_ZN16FrontendHeapBaseC1ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication
 3076              		.thumb_set _ZN16FrontendHeapBaseC1ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication,_ZN
 3077              		.weak	_ZZN12FrontendHeap11getInstanceEvE8instance
 3078              		.section	.bss._ZZN12FrontendHeap11getInstanceEvE8instance,"awG",%nobits,_ZZN12FrontendHeap11getIns
 3079              		.align	2
 3082              	_ZZN12FrontendHeap11getInstanceEvE8instance:
 3083 0000 00000000 		.space	5616
 3083      00000000 
 3083      00000000 
 3083      00000000 
 3083      00000000 
 3084              		.weak	_ZGVZN12FrontendHeap11getInstanceEvE8instance
 3085              		.section	.bss._ZGVZN12FrontendHeap11getInstanceEvE8instance,"awG",%nobits,_ZGVZN12FrontendHeap11ge
 3086              		.align	2
 3089              	_ZGVZN12FrontendHeap11getInstanceEvE8instance:
 3090 0000 00000000 		.space	4
 3091              		.section	.text.__tcf_0,"axG",%progbits,_ZN12FrontendHeap11getInstanceEv,comdat
 3092              		.align	1
 3093              		.syntax unified
 3094              		.thumb
 3095              		.thumb_func
 3096              		.fpu fpv4-sp-d16
 3098              	__tcf_0:
 3099              	.LFB790:
 3100              		.file 19 "Src/gui/include/gui/common/FrontendHeap.hpp"
   1:Src/gui/include/gui/common/FrontendHeap.hpp **** #ifndef FRONTENDHEAP_HPP
   2:Src/gui/include/gui/common/FrontendHeap.hpp **** #define FRONTENDHEAP_HPP
   3:Src/gui/include/gui/common/FrontendHeap.hpp **** 
   4:Src/gui/include/gui/common/FrontendHeap.hpp **** #include <gui_generated/common/FrontendHeapBase.hpp>
   5:Src/gui/include/gui/common/FrontendHeap.hpp **** 
   6:Src/gui/include/gui/common/FrontendHeap.hpp **** class FrontendHeap : public FrontendHeapBase
   7:Src/gui/include/gui/common/FrontendHeap.hpp **** {
   8:Src/gui/include/gui/common/FrontendHeap.hpp **** public:
   9:Src/gui/include/gui/common/FrontendHeap.hpp ****     /* List any user-defined view types here*/
  10:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::TypeList< touchgfx::meta::Nil, //Replace this with first user-defined t
  11:Src/gui/include/gui/common/FrontendHeap.hpp ****                             touchgfx::meta::Nil  //List must always end with meta::Nil !
  12:Src/gui/include/gui/common/FrontendHeap.hpp ****                             > UserDefinedViewTypes;
  13:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  14:Src/gui/include/gui/common/FrontendHeap.hpp ****     /* List any user-defined presenter types here*/
  15:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::TypeList< touchgfx::meta::Nil, //Replace this with first user-defined t
  16:Src/gui/include/gui/common/FrontendHeap.hpp ****                             touchgfx::meta::Nil  //List must always end with meta::Nil !
  17:Src/gui/include/gui/common/FrontendHeap.hpp ****                             > UserDefinedPresenterTypes;
  18:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  19:Src/gui/include/gui/common/FrontendHeap.hpp ****     /* List any user-defined transition types here*/
  20:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::TypeList< touchgfx::meta::Nil, //Replace this with first user-defined t
  21:Src/gui/include/gui/common/FrontendHeap.hpp ****                             touchgfx::meta::Nil  //List must always end with meta::Nil !
  22:Src/gui/include/gui/common/FrontendHeap.hpp ****                             > UserDefinedTransitionTypes;
  23:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  24:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  25:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  26:Src/gui/include/gui/common/FrontendHeap.hpp ****     /* Calculate largest view, both from generated and user-defined typelists */
  27:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::select_type_maxsize< UserDefinedViewTypes >::type MaxUserViewType;
  28:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  29:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::TypeList< MaxGeneratedViewType,
  30:Src/gui/include/gui/common/FrontendHeap.hpp **** 	        touchgfx::meta::TypeList< MaxUserViewType,
  31:Src/gui/include/gui/common/FrontendHeap.hpp ****                             touchgfx::meta::Nil
  32:Src/gui/include/gui/common/FrontendHeap.hpp ****                             > > CombinedViewTypes;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 79


  33:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  34:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::select_type_maxsize< CombinedViewTypes >::type MaxViewType;
  35:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  36:Src/gui/include/gui/common/FrontendHeap.hpp ****     /* Calculate largest presenter, both from generated and user-defined typelists */
  37:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::select_type_maxsize< UserDefinedPresenterTypes >::type MaxUserPresenter
  38:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  39:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::TypeList< MaxGeneratedPresenterType,
  40:Src/gui/include/gui/common/FrontendHeap.hpp ****             touchgfx::meta::TypeList< MaxUserPresenterType,
  41:Src/gui/include/gui/common/FrontendHeap.hpp ****                             touchgfx::meta::Nil
  42:Src/gui/include/gui/common/FrontendHeap.hpp ****                             > > CombinedPresenterTypes;
  43:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::select_type_maxsize< CombinedPresenterTypes >::type MaxPresenterType;
  44:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  45:Src/gui/include/gui/common/FrontendHeap.hpp ****     /* Calculate largest transition, both from generated and user-defined typelists */
  46:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::select_type_maxsize< UserDefinedTransitionTypes >::type MaxUserTransiti
  47:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  48:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::TypeList< MaxGeneratedTransitionType,
  49:Src/gui/include/gui/common/FrontendHeap.hpp ****             touchgfx::meta::TypeList< MaxUserTransitionType,
  50:Src/gui/include/gui/common/FrontendHeap.hpp ****                             touchgfx::meta::Nil
  51:Src/gui/include/gui/common/FrontendHeap.hpp ****                             > > CombinedTransitionTypes;
  52:Src/gui/include/gui/common/FrontendHeap.hpp ****     typedef touchgfx::meta::select_type_maxsize< CombinedTransitionTypes >::type MaxTransitionType;
  53:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  54:Src/gui/include/gui/common/FrontendHeap.hpp ****     static FrontendHeap& getInstance()
  55:Src/gui/include/gui/common/FrontendHeap.hpp ****     {
  56:Src/gui/include/gui/common/FrontendHeap.hpp ****         static FrontendHeap instance;
 3101              		.loc 19 56 29
 3102              		.cfi_startproc
 3103              		@ args = 0, pretend = 0, frame = 0
 3104              		@ frame_needed = 1, uses_anonymous_args = 0
 3105 0000 80B5     		push	{r7, lr}
 3106              	.LCFI295:
 3107              		.cfi_def_cfa_offset 8
 3108              		.cfi_offset 7, -8
 3109              		.cfi_offset 14, -4
 3110 0002 00AF     		add	r7, sp, #0
 3111              	.LCFI296:
 3112              		.cfi_def_cfa_register 7
 3113              		.loc 19 56 29
 3114 0004 0148     		ldr	r0, .L145
 3115 0006 FFF7FEFF 		bl	_ZN12FrontendHeapD1Ev
 3116 000a 80BD     		pop	{r7, pc}
 3117              	.L146:
 3118              		.align	2
 3119              	.L145:
 3120 000c 00000000 		.word	_ZZN12FrontendHeap11getInstanceEvE8instance
 3121              		.cfi_endproc
 3122              	.LFE790:
 3124              		.section	.text._ZN12FrontendHeap11getInstanceEv,"axG",%progbits,_ZN12FrontendHeap11getInstanceEv,c
 3125              		.align	1
 3126              		.weak	_ZN12FrontendHeap11getInstanceEv
 3127              		.syntax unified
 3128              		.thumb
 3129              		.thumb_func
 3130              		.fpu fpv4-sp-d16
 3132              	_ZN12FrontendHeap11getInstanceEv:
 3133              	.LFB789:
  54:Src/gui/include/gui/common/FrontendHeap.hpp ****     {
 3134              		.loc 19 54 26
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 80


 3135              		.cfi_startproc
 3136              		@ args = 0, pretend = 0, frame = 0
 3137              		@ frame_needed = 1, uses_anonymous_args = 0
 3138 0000 80B5     		push	{r7, lr}
 3139              	.LCFI297:
 3140              		.cfi_def_cfa_offset 8
 3141              		.cfi_offset 7, -8
 3142              		.cfi_offset 14, -4
 3143 0002 00AF     		add	r7, sp, #0
 3144              	.LCFI298:
 3145              		.cfi_def_cfa_register 7
 3146              		.loc 19 56 29
 3147 0004 124B     		ldr	r3, .L150
 3148 0006 1B78     		ldrb	r3, [r3]
 3149 0008 BFF35B8F 		dmb	ish
 3150 000c DBB2     		uxtb	r3, r3
 3151 000e 03F00103 		and	r3, r3, #1
 3152 0012 002B     		cmp	r3, #0
 3153 0014 0CBF     		ite	eq
 3154 0016 0123     		moveq	r3, #1
 3155 0018 0023     		movne	r3, #0
 3156 001a DBB2     		uxtb	r3, r3
 3157 001c 002B     		cmp	r3, #0
 3158 001e 13D0     		beq	.L148
 3159              		.loc 19 56 29 is_stmt 0 discriminator 1
 3160 0020 0B48     		ldr	r0, .L150
 3161 0022 FFF7FEFF 		bl	__cxa_guard_acquire
 3162 0026 0346     		mov	r3, r0
 3163 0028 002B     		cmp	r3, #0
 3164 002a 14BF     		ite	ne
 3165 002c 0123     		movne	r3, #1
 3166 002e 0023     		moveq	r3, #0
 3167 0030 DBB2     		uxtb	r3, r3
 3168 0032 002B     		cmp	r3, #0
 3169 0034 08D0     		beq	.L148
 3170              		.loc 19 56 29 discriminator 2
 3171 0036 0748     		ldr	r0, .L150+4
 3172 0038 FFF7FEFF 		bl	_ZN12FrontendHeapC1Ev
 3173 003c 0448     		ldr	r0, .L150
 3174 003e FFF7FEFF 		bl	__cxa_guard_release
 3175 0042 0548     		ldr	r0, .L150+8
 3176 0044 FFF7FEFF 		bl	atexit
 3177              	.L148:
  57:Src/gui/include/gui/common/FrontendHeap.hpp ****         return instance;
 3178              		.loc 19 57 16 is_stmt 1
 3179 0048 024B     		ldr	r3, .L150+4
  58:Src/gui/include/gui/common/FrontendHeap.hpp ****     }
 3180              		.loc 19 58 5
 3181 004a 1846     		mov	r0, r3
 3182 004c 80BD     		pop	{r7, pc}
 3183              	.L151:
 3184 004e 00BF     		.align	2
 3185              	.L150:
 3186 0050 00000000 		.word	_ZGVZN12FrontendHeap11getInstanceEvE8instance
 3187 0054 00000000 		.word	_ZZN12FrontendHeap11getInstanceEvE8instance
 3188 0058 00000000 		.word	__tcf_0
 3189              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 81


 3190              	.LFE789:
 3192              		.section	.text._ZN16FrontendHeapBaseD2Ev,"axG",%progbits,_ZN16FrontendHeapBaseD5Ev,comdat
 3193              		.align	1
 3194              		.weak	_ZN16FrontendHeapBaseD2Ev
 3195              		.syntax unified
 3196              		.thumb
 3197              		.thumb_func
 3198              		.fpu fpv4-sp-d16
 3200              	_ZN16FrontendHeapBaseD2Ev:
 3201              	.LFB793:
  32:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** {
 3202              		.loc 18 32 7
 3203              		.cfi_startproc
 3204              		@ args = 0, pretend = 0, frame = 8
 3205              		@ frame_needed = 1, uses_anonymous_args = 0
 3206 0000 80B5     		push	{r7, lr}
 3207              	.LCFI299:
 3208              		.cfi_def_cfa_offset 8
 3209              		.cfi_offset 7, -8
 3210              		.cfi_offset 14, -4
 3211 0002 82B0     		sub	sp, sp, #8
 3212              	.LCFI300:
 3213              		.cfi_def_cfa_offset 16
 3214 0004 00AF     		add	r7, sp, #0
 3215              	.LCFI301:
 3216              		.cfi_def_cfa_register 7
 3217 0006 7860     		str	r0, [r7, #4]
 3218              	.LBB28:
  32:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** {
 3219              		.loc 18 32 7
 3220 0008 054A     		ldr	r2, .L154
 3221 000a 7B68     		ldr	r3, [r7, #4]
 3222 000c 1A60     		str	r2, [r3]
 3223 000e 7B68     		ldr	r3, [r7, #4]
 3224 0010 1846     		mov	r0, r3
 3225 0012 FFF7FEFF 		bl	_ZN8touchgfx7MVPHeapD2Ev
 3226              	.LBE28:
 3227 0016 7B68     		ldr	r3, [r7, #4]
 3228 0018 1846     		mov	r0, r3
 3229 001a 0837     		adds	r7, r7, #8
 3230              	.LCFI302:
 3231              		.cfi_def_cfa_offset 8
 3232 001c BD46     		mov	sp, r7
 3233              	.LCFI303:
 3234              		.cfi_def_cfa_register 13
 3235              		@ sp needed
 3236 001e 80BD     		pop	{r7, pc}
 3237              	.L155:
 3238              		.align	2
 3239              	.L154:
 3240 0020 08000000 		.word	_ZTV16FrontendHeapBase+8
 3241              		.cfi_endproc
 3242              	.LFE793:
 3244              		.weak	_ZN16FrontendHeapBaseD1Ev
 3245              		.thumb_set _ZN16FrontendHeapBaseD1Ev,_ZN16FrontendHeapBaseD2Ev
 3246              		.section	.text._ZN16FrontendHeapBaseD0Ev,"axG",%progbits,_ZN16FrontendHeapBaseD5Ev,comdat
 3247              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 82


 3248              		.weak	_ZN16FrontendHeapBaseD0Ev
 3249              		.syntax unified
 3250              		.thumb
 3251              		.thumb_func
 3252              		.fpu fpv4-sp-d16
 3254              	_ZN16FrontendHeapBaseD0Ev:
 3255              	.LFB795:
  32:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** {
 3256              		.loc 18 32 7
 3257              		.cfi_startproc
 3258              		@ args = 0, pretend = 0, frame = 8
 3259              		@ frame_needed = 1, uses_anonymous_args = 0
 3260 0000 80B5     		push	{r7, lr}
 3261              	.LCFI304:
 3262              		.cfi_def_cfa_offset 8
 3263              		.cfi_offset 7, -8
 3264              		.cfi_offset 14, -4
 3265 0002 82B0     		sub	sp, sp, #8
 3266              	.LCFI305:
 3267              		.cfi_def_cfa_offset 16
 3268 0004 00AF     		add	r7, sp, #0
 3269              	.LCFI306:
 3270              		.cfi_def_cfa_register 7
 3271 0006 7860     		str	r0, [r7, #4]
  32:Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp **** {
 3272              		.loc 18 32 7
 3273 0008 7868     		ldr	r0, [r7, #4]
 3274 000a FFF7FEFF 		bl	_ZN16FrontendHeapBaseD1Ev
 3275 000e 1421     		movs	r1, #20
 3276 0010 7868     		ldr	r0, [r7, #4]
 3277 0012 FFF7FEFF 		bl	_ZdlPvj
 3278 0016 7B68     		ldr	r3, [r7, #4]
 3279 0018 1846     		mov	r0, r3
 3280 001a 0837     		adds	r7, r7, #8
 3281              	.LCFI307:
 3282              		.cfi_def_cfa_offset 8
 3283 001c BD46     		mov	sp, r7
 3284              	.LCFI308:
 3285              		.cfi_def_cfa_register 13
 3286              		@ sp needed
 3287 001e 80BD     		pop	{r7, pc}
 3288              		.cfi_endproc
 3289              	.LFE795:
 3291              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1E
 3292              		.align	1
 3293              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC2Ev
 3294              		.syntax unified
 3295              		.thumb
 3296              		.thumb_func
 3297              		.fpu fpv4-sp-d16
 3299              	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC2Ev:
 3300              	.LFB797:
 3301              		.file 20 "Middlewares/ST/touchgfx/framework/include/common/Partition.hpp"
   1:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 83


   5:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * @file common/Partition.hpp
  15:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * Declares the touchgfx::Partition class.
  17:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** #ifndef TOUCHGFX_PARTITION_HPP
  19:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** #define TOUCHGFX_PARTITION_HPP
  20:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** #include <common/AbstractPartition.hpp>
  23:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** #include <common/Meta.hpp>
  24:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** /**
  28:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * This type provides a concrete Partition of memory-slots capable of holding any of the
  29:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * specified list of types.
  30:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  *
  31:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * The Partition is not aware of the types stored in the Partition memory, hence it
  32:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * provides no mechanism for deleting C++ objects when the Partition is clear()'ed.
  33:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  *
  34:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * This class implements AbstractPartition.
  35:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  *
  36:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * @tparam ListOfTypes        Type of the list of types.
  37:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * @tparam NUMBER_OF_ELEMENTS Type of the number of elements.
  38:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  *
  39:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  * @see AbstractPartition
  40:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****  */
  41:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** template <typename ListOfTypes, uint16_t NUMBER_OF_ELEMENTS>
  42:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** class Partition : public AbstractPartition
 3302              		.loc 20 42 7
 3303              		.cfi_startproc
 3304              		@ args = 0, pretend = 0, frame = 8
 3305              		@ frame_needed = 1, uses_anonymous_args = 0
 3306 0000 80B5     		push	{r7, lr}
 3307              	.LCFI309:
 3308              		.cfi_def_cfa_offset 8
 3309              		.cfi_offset 7, -8
 3310              		.cfi_offset 14, -4
 3311 0002 82B0     		sub	sp, sp, #8
 3312              	.LCFI310:
 3313              		.cfi_def_cfa_offset 16
 3314 0004 00AF     		add	r7, sp, #0
 3315              	.LCFI311:
 3316              		.cfi_def_cfa_register 7
 3317 0006 7860     		str	r0, [r7, #4]
 3318              	.LBB29:
 3319              		.loc 20 42 7
 3320 0008 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 84


 3321 000a 1846     		mov	r0, r3
 3322 000c FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartitionC2Ev
 3323 0010 034A     		ldr	r2, .L160
 3324 0012 7B68     		ldr	r3, [r7, #4]
 3325 0014 1A60     		str	r2, [r3]
 3326              	.LBE29:
 3327 0016 7B68     		ldr	r3, [r7, #4]
 3328 0018 1846     		mov	r0, r3
 3329 001a 0837     		adds	r7, r7, #8
 3330              	.LCFI312:
 3331              		.cfi_def_cfa_offset 8
 3332 001c BD46     		mov	sp, r7
 3333              	.LCFI313:
 3334              		.cfi_def_cfa_register 13
 3335              		@ sp needed
 3336 001e 80BD     		pop	{r7, pc}
 3337              	.L161:
 3338              		.align	2
 3339              	.L160:
 3340 0020 08000000 		.word	_ZTVN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEE+8
 3341              		.cfi_endproc
 3342              	.LFE797:
 3344              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC1Ev
 3345              		.thumb_set _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC1E
 3346              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC2Ev
 3347              		.align	1
 3348              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC2Ev
 3349              		.syntax unified
 3350              		.thumb
 3351              		.thumb_func
 3352              		.fpu fpv4-sp-d16
 3354              	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC2Ev:
 3355              	.LFB800:
 3356              		.loc 20 42 7
 3357              		.cfi_startproc
 3358              		@ args = 0, pretend = 0, frame = 8
 3359              		@ frame_needed = 1, uses_anonymous_args = 0
 3360 0000 80B5     		push	{r7, lr}
 3361              	.LCFI314:
 3362              		.cfi_def_cfa_offset 8
 3363              		.cfi_offset 7, -8
 3364              		.cfi_offset 14, -4
 3365 0002 82B0     		sub	sp, sp, #8
 3366              	.LCFI315:
 3367              		.cfi_def_cfa_offset 16
 3368 0004 00AF     		add	r7, sp, #0
 3369              	.LCFI316:
 3370              		.cfi_def_cfa_register 7
 3371 0006 7860     		str	r0, [r7, #4]
 3372              	.LBB30:
 3373              		.loc 20 42 7
 3374 0008 7B68     		ldr	r3, [r7, #4]
 3375 000a 1846     		mov	r0, r3
 3376 000c FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartitionC2Ev
 3377 0010 034A     		ldr	r2, .L164
 3378 0012 7B68     		ldr	r3, [r7, #4]
 3379 0014 1A60     		str	r2, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 85


 3380              	.LBE30:
 3381 0016 7B68     		ldr	r3, [r7, #4]
 3382 0018 1846     		mov	r0, r3
 3383 001a 0837     		adds	r7, r7, #8
 3384              	.LCFI317:
 3385              		.cfi_def_cfa_offset 8
 3386 001c BD46     		mov	sp, r7
 3387              	.LCFI318:
 3388              		.cfi_def_cfa_register 13
 3389              		@ sp needed
 3390 001e 80BD     		pop	{r7, pc}
 3391              	.L165:
 3392              		.align	2
 3393              	.L164:
 3394 0020 08000000 		.word	_ZTVN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEE+8
 3395              		.cfi_endproc
 3396              	.LFE800:
 3398              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC1Ev
 3399              		.thumb_set _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC1Ev,_ZN
 3400              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1
 3401              		.align	1
 3402              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC2Ev
 3403              		.syntax unified
 3404              		.thumb
 3405              		.thumb_func
 3406              		.fpu fpv4-sp-d16
 3408              	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC2Ev:
 3409              	.LFB803:
 3410              		.loc 20 42 7
 3411              		.cfi_startproc
 3412              		@ args = 0, pretend = 0, frame = 8
 3413              		@ frame_needed = 1, uses_anonymous_args = 0
 3414 0000 80B5     		push	{r7, lr}
 3415              	.LCFI319:
 3416              		.cfi_def_cfa_offset 8
 3417              		.cfi_offset 7, -8
 3418              		.cfi_offset 14, -4
 3419 0002 82B0     		sub	sp, sp, #8
 3420              	.LCFI320:
 3421              		.cfi_def_cfa_offset 16
 3422 0004 00AF     		add	r7, sp, #0
 3423              	.LCFI321:
 3424              		.cfi_def_cfa_register 7
 3425 0006 7860     		str	r0, [r7, #4]
 3426              	.LBB31:
 3427              		.loc 20 42 7
 3428 0008 7B68     		ldr	r3, [r7, #4]
 3429 000a 1846     		mov	r0, r3
 3430 000c FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartitionC2Ev
 3431 0010 034A     		ldr	r2, .L168
 3432 0012 7B68     		ldr	r3, [r7, #4]
 3433 0014 1A60     		str	r2, [r3]
 3434              	.LBE31:
 3435 0016 7B68     		ldr	r3, [r7, #4]
 3436 0018 1846     		mov	r0, r3
 3437 001a 0837     		adds	r7, r7, #8
 3438              	.LCFI322:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 86


 3439              		.cfi_def_cfa_offset 8
 3440 001c BD46     		mov	sp, r7
 3441              	.LCFI323:
 3442              		.cfi_def_cfa_register 13
 3443              		@ sp needed
 3444 001e 80BD     		pop	{r7, pc}
 3445              	.L169:
 3446              		.align	2
 3447              	.L168:
 3448 0020 08000000 		.word	_ZTVN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEE+8
 3449              		.cfi_endproc
 3450              	.LFE803:
 3452              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC1Ev
 3453              		.thumb_set _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC1
 3454              		.section	.text._ZN12FrontendHeapC2Ev,"axG",%progbits,_ZN12FrontendHeapC5Ev,comdat
 3455              		.align	1
 3456              		.weak	_ZN12FrontendHeapC2Ev
 3457              		.syntax unified
 3458              		.thumb
 3459              		.thumb_func
 3460              		.fpu fpv4-sp-d16
 3462              	_ZN12FrontendHeapC2Ev:
 3463              	.LFB805:
  59:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  60:Src/gui/include/gui/common/FrontendHeap.hpp ****     touchgfx::Partition< CombinedPresenterTypes, 1 > presenters;
  61:Src/gui/include/gui/common/FrontendHeap.hpp ****     touchgfx::Partition< CombinedViewTypes, 1 > views;
  62:Src/gui/include/gui/common/FrontendHeap.hpp ****     touchgfx::Partition< CombinedTransitionTypes, 1 > transitions;
  63:Src/gui/include/gui/common/FrontendHeap.hpp ****     Model model;
  64:Src/gui/include/gui/common/FrontendHeap.hpp ****     FrontendApplication app;
  65:Src/gui/include/gui/common/FrontendHeap.hpp **** 
  66:Src/gui/include/gui/common/FrontendHeap.hpp **** private:
  67:Src/gui/include/gui/common/FrontendHeap.hpp ****     FrontendHeap() : FrontendHeapBase(presenters, views, transitions, app),
 3464              		.loc 19 67 5
 3465              		.cfi_startproc
 3466              		@ args = 0, pretend = 0, frame = 8
 3467              		@ frame_needed = 1, uses_anonymous_args = 0
 3468 0000 90B5     		push	{r4, r7, lr}
 3469              	.LCFI324:
 3470              		.cfi_def_cfa_offset 12
 3471              		.cfi_offset 4, -12
 3472              		.cfi_offset 7, -8
 3473              		.cfi_offset 14, -4
 3474 0002 85B0     		sub	sp, sp, #20
 3475              	.LCFI325:
 3476              		.cfi_def_cfa_offset 32
 3477 0004 02AF     		add	r7, sp, #8
 3478              	.LCFI326:
 3479              		.cfi_def_cfa 7, 24
 3480 0006 7860     		str	r0, [r7, #4]
 3481              	.LBB32:
  68:Src/gui/include/gui/common/FrontendHeap.hpp ****                      app(model, *this)
 3482              		.loc 19 68 38
 3483 0008 7868     		ldr	r0, [r7, #4]
 3484 000a 7B68     		ldr	r3, [r7, #4]
 3485 000c 03F11401 		add	r1, r3, #20
 3486 0010 7B68     		ldr	r3, [r7, #4]
 3487 0012 03F12C02 		add	r2, r3, #44
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 87


 3488 0016 7B68     		ldr	r3, [r7, #4]
 3489 0018 03F5A454 		add	r4, r3, #5248
  67:Src/gui/include/gui/common/FrontendHeap.hpp ****                      app(model, *this)
 3490              		.loc 19 67 71
 3491 001c 7B68     		ldr	r3, [r7, #4]
 3492 001e 03F5A453 		add	r3, r3, #5248
 3493 0022 1833     		adds	r3, r3, #24
 3494              		.loc 19 68 38
 3495 0024 0093     		str	r3, [sp]
 3496 0026 2346     		mov	r3, r4
 3497 0028 FFF7FEFF 		bl	_ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication
 3498 002c 194A     		ldr	r2, .L172
 3499 002e 7B68     		ldr	r3, [r7, #4]
 3500 0030 1A60     		str	r2, [r3]
 3501 0032 7B68     		ldr	r3, [r7, #4]
 3502 0034 1433     		adds	r3, r3, #20
 3503 0036 1846     		mov	r0, r3
 3504 0038 FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC1Ev
 3505 003c 7B68     		ldr	r3, [r7, #4]
 3506 003e 2C33     		adds	r3, r3, #44
 3507 0040 1846     		mov	r0, r3
 3508 0042 FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC1Ev
 3509 0046 7B68     		ldr	r3, [r7, #4]
 3510 0048 03F5A453 		add	r3, r3, #5248
 3511 004c 1846     		mov	r0, r3
 3512 004e FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC1Ev
 3513 0052 7B68     		ldr	r3, [r7, #4]
 3514 0054 03F5A453 		add	r3, r3, #5248
 3515 0058 1433     		adds	r3, r3, #20
 3516 005a 1846     		mov	r0, r3
 3517 005c FFF7FEFF 		bl	_ZN5ModelC1Ev
 3518 0060 7B68     		ldr	r3, [r7, #4]
 3519 0062 03F5A453 		add	r3, r3, #5248
 3520 0066 1833     		adds	r3, r3, #24
 3521              		.loc 19 68 26
 3522 0068 7A68     		ldr	r2, [r7, #4]
 3523 006a 02F5A451 		add	r1, r2, #5248
 3524 006e 1431     		adds	r1, r1, #20
 3525              		.loc 19 68 38
 3526 0070 7A68     		ldr	r2, [r7, #4]
 3527 0072 1846     		mov	r0, r3
 3528 0074 FFF7FEFF 		bl	_ZN19FrontendApplicationC1ER5ModelR12FrontendHeap
  69:Src/gui/include/gui/common/FrontendHeap.hpp ****     {
  70:Src/gui/include/gui/common/FrontendHeap.hpp ****         gotoStartScreen(app);
 3529              		.loc 19 70 24
 3530 0078 7A68     		ldr	r2, [r7, #4]
 3531              		.loc 19 70 25
 3532 007a 7B68     		ldr	r3, [r7, #4]
 3533 007c 03F5A453 		add	r3, r3, #5248
 3534 0080 1833     		adds	r3, r3, #24
 3535              		.loc 19 70 24
 3536 0082 1946     		mov	r1, r3
 3537 0084 1046     		mov	r0, r2
 3538 0086 FFF7FEFF 		bl	_ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication
 3539              	.LBE32:
  71:Src/gui/include/gui/common/FrontendHeap.hpp ****     }
 3540              		.loc 19 71 5
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 88


 3541 008a 7B68     		ldr	r3, [r7, #4]
 3542 008c 1846     		mov	r0, r3
 3543 008e 0C37     		adds	r7, r7, #12
 3544              	.LCFI327:
 3545              		.cfi_def_cfa_offset 12
 3546 0090 BD46     		mov	sp, r7
 3547              	.LCFI328:
 3548              		.cfi_def_cfa_register 13
 3549              		@ sp needed
 3550 0092 90BD     		pop	{r4, r7, pc}
 3551              	.L173:
 3552              		.align	2
 3553              	.L172:
 3554 0094 08000000 		.word	_ZTV12FrontendHeap+8
 3555              		.cfi_endproc
 3556              	.LFE805:
 3558              		.weak	_ZN12FrontendHeapC1Ev
 3559              		.thumb_set _ZN12FrontendHeapC1Ev,_ZN12FrontendHeapC2Ev
 3560              		.section	.rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE,"a"
 3561              		.align	1
 3564              	_ZN8touchgfxL18TYPED_TEXT_INVALIDE:
 3565 0000 FFFF     		.short	-1
 3566              		.section	.text._ZN8touchgfx9TypedText13registerTextsEPKNS_5TextsE,"axG",%progbits,_ZN8touchgfx9Typ
 3567              		.align	1
 3568              		.weak	_ZN8touchgfx9TypedText13registerTextsEPKNS_5TextsE
 3569              		.syntax unified
 3570              		.thumb
 3571              		.thumb_func
 3572              		.fpu fpv4-sp-d16
 3574              	_ZN8touchgfx9TypedText13registerTextsEPKNS_5TextsE:
 3575              	.LFB1001:
 3576              		.file 21 "Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 89


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 90


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 91


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
 3577              		.loc 21 166 17
 3578              		.cfi_startproc
 3579              		@ args = 0, pretend = 0, frame = 8
 3580              		@ frame_needed = 1, uses_anonymous_args = 0
 3581              		@ link register save eliminated.
 3582 0000 80B4     		push	{r7}
 3583              	.LCFI329:
 3584              		.cfi_def_cfa_offset 4
 3585              		.cfi_offset 7, -4
 3586 0002 83B0     		sub	sp, sp, #12
 3587              	.LCFI330:
 3588              		.cfi_def_cfa_offset 16
 3589 0004 00AF     		add	r7, sp, #0
 3590              	.LCFI331:
 3591              		.cfi_def_cfa_register 7
 3592 0006 7860     		str	r0, [r7, #4]
 167:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     {
 168:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****         texts = t;
 3593              		.loc 21 168 15
 3594 0008 044A     		ldr	r2, .L175
 3595 000a 7B68     		ldr	r3, [r7, #4]
 3596 000c 1360     		str	r3, [r2]
 169:Middlewares/ST/touchgfx/framework/include/touchgfx/TypedText.hpp ****     }
 3597              		.loc 21 169 5
 3598 000e 00BF     		nop
 3599 0010 0C37     		adds	r7, r7, #12
 3600              	.LCFI332:
 3601              		.cfi_def_cfa_offset 4
 3602 0012 BD46     		mov	sp, r7
 3603              	.LCFI333:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 92


 3604              		.cfi_def_cfa_register 13
 3605              		@ sp needed
 3606 0014 5DF8047B 		ldr	r7, [sp], #4
 3607              	.LCFI334:
 3608              		.cfi_restore 7
 3609              		.cfi_def_cfa_offset 0
 3610 0018 7047     		bx	lr
 3611              	.L176:
 3612 001a 00BF     		.align	2
 3613              	.L175:
 3614 001c 00000000 		.word	_ZN8touchgfx9TypedText5textsE
 3615              		.cfi_endproc
 3616              	.LFE1001:
 3618              		.section	.text._ZN8touchgfx6BlitOpC2Ev,"axG",%progbits,_ZN8touchgfx6BlitOpC5Ev,comdat
 3619              		.align	1
 3620              		.weak	_ZN8touchgfx6BlitOpC2Ev
 3621              		.syntax unified
 3622              		.thumb
 3623              		.thumb_func
 3624              		.fpu fpv4-sp-d16
 3626              	_ZN8touchgfx6BlitOpC2Ev:
 3627              	.LFB1005:
 3628              		.file 22 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****  * @file touchgfx/hal/BlitOp.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****  * Declares constants for specifying blit operation capabilities.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** #ifndef TOUCHGFX_BLITOP_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** #define TOUCHGFX_BLITOP_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** 
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** namespace touchgfx
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** {
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** /** The Blit Operations. */
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** enum BlitOperations
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** {
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY = 1 << 0,                         ///< Copy the source to the destination
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_FILL = 1 << 1,                         ///< Fill the destination with color
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY_WITH_ALPHA = 1 << 2,              ///< Copy the source to the destination using th
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_FILL_WITH_ALPHA = 1 << 3,              ///< Fill the destination with color using the g
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY_WITH_TRANSPARENT_PIXELS = 1 << 4, ///< Deprecated, ignored. (Copy the source to th
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY_ARGB8888 = 1 << 5,                ///< Copy the source to the destination, perform
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY_ARGB8888_WITH_ALPHA = 1 << 6,     ///< Copy the source to the destination, perform
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 93


  35:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY_L8 = 1 << 7,                      ///< Copy the L8 source to the destination using
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY_A4 = 1 << 8,                      ///< Copy 4-bit source text to destination, perf
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY_A8 = 1 << 9,                      ///< Copy 8-bit source text to destination, perf
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_COPY_16BIT = 1 << 10,                  ///< Copy 16-bit regardless of frame buffer form
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****     BLIT_OP_FILL_16BIT = 1 << 11                   ///< Fill 16-bit regardless of frame buffer form
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** };
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** 
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** /**
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****  * BlitOp instances carry the required information for performing operations on the LCD
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****  * (framebuffer) using DMA.
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp ****  */
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp **** struct BlitOp
 3629              		.loc 22 46 8
 3630              		.cfi_startproc
 3631              		@ args = 0, pretend = 0, frame = 8
 3632              		@ frame_needed = 1, uses_anonymous_args = 0
 3633 0000 80B5     		push	{r7, lr}
 3634              	.LCFI335:
 3635              		.cfi_def_cfa_offset 8
 3636              		.cfi_offset 7, -8
 3637              		.cfi_offset 14, -4
 3638 0002 82B0     		sub	sp, sp, #8
 3639              	.LCFI336:
 3640              		.cfi_def_cfa_offset 16
 3641 0004 00AF     		add	r7, sp, #0
 3642              	.LCFI337:
 3643              		.cfi_def_cfa_register 7
 3644 0006 7860     		str	r0, [r7, #4]
 3645              	.LBB33:
 3646              		.loc 22 46 8
 3647 0008 7B68     		ldr	r3, [r7, #4]
 3648 000a 0C33     		adds	r3, r3, #12
 3649 000c 1846     		mov	r0, r3
 3650 000e FFF7FEFF 		bl	_ZN8touchgfx9colortypeC1Ev
 3651              	.LBE33:
 3652 0012 7B68     		ldr	r3, [r7, #4]
 3653 0014 1846     		mov	r0, r3
 3654 0016 0837     		adds	r7, r7, #8
 3655              	.LCFI338:
 3656              		.cfi_def_cfa_offset 8
 3657 0018 BD46     		mov	sp, r7
 3658              	.LCFI339:
 3659              		.cfi_def_cfa_register 13
 3660              		@ sp needed
 3661 001a 80BD     		pop	{r7, pc}
 3662              		.cfi_endproc
 3663              	.LFE1005:
 3665              		.weak	_ZN8touchgfx6BlitOpC1Ev
 3666              		.thumb_set _ZN8touchgfx6BlitOpC1Ev,_ZN8touchgfx6BlitOpC2Ev
 3667              		.section	.text._ZN8touchgfx5NoDMAC2Ev,"axG",%progbits,_ZN8touchgfx5NoDMAC5Ev,comdat
 3668              		.align	1
 3669              		.weak	_ZN8touchgfx5NoDMAC2Ev
 3670              		.syntax unified
 3671              		.thumb
 3672              		.thumb_func
 3673              		.fpu fpv4-sp-d16
 3675              	_ZN8touchgfx5NoDMAC2Ev:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 94


 3676              	.LFB1007:
 3677              		.file 23 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  * @file touchgfx/hal/NoDMA.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  * Declares the touchgfx::NoDMA class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** #ifndef TOUCHGFX_NODMA_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** #define TOUCHGFX_NODMA_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** #include <assert.h>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** #include <touchgfx/hal/BlitOp.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** #include <touchgfx/hal/DMA.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** /**
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  * This is an "empty" DMA subclass that does nothing except assert if accidentally used. An
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  * instance of this object can be used if DMA support is not desired.
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  *
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  * @see DMA_Interface
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****  */
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** class NoDMA : public DMA_Interface
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** {
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** public:
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     NoDMA()
 3678              		.loc 23 36 5
 3679              		.cfi_startproc
 3680              		@ args = 0, pretend = 0, frame = 8
 3681              		@ frame_needed = 1, uses_anonymous_args = 0
 3682 0000 80B5     		push	{r7, lr}
 3683              	.LCFI340:
 3684              		.cfi_def_cfa_offset 8
 3685              		.cfi_offset 7, -8
 3686              		.cfi_offset 14, -4
 3687 0002 82B0     		sub	sp, sp, #8
 3688              	.LCFI341:
 3689              		.cfi_def_cfa_offset 16
 3690 0004 00AF     		add	r7, sp, #0
 3691              	.LCFI342:
 3692              		.cfi_def_cfa_register 7
 3693 0006 7860     		str	r0, [r7, #4]
 3694              	.LBB34:
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****         : DMA_Interface(q), q(&b, 1)
 3695              		.loc 23 37 36
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 95


 3696 0008 7A68     		ldr	r2, [r7, #4]
 3697 000a 7B68     		ldr	r3, [r7, #4]
 3698 000c 0C33     		adds	r3, r3, #12
 3699 000e 1946     		mov	r1, r3
 3700 0010 1046     		mov	r0, r2
 3701 0012 FFF7FEFF 		bl	_ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE
 3702 0016 0B4A     		ldr	r2, .L181
 3703 0018 7B68     		ldr	r3, [r7, #4]
 3704 001a 1A60     		str	r2, [r3]
 3705 001c 7B68     		ldr	r3, [r7, #4]
 3706 001e 03F10C00 		add	r0, r3, #12
 3707 0022 7B68     		ldr	r3, [r7, #4]
 3708 0024 2033     		adds	r3, r3, #32
 3709 0026 0122     		movs	r2, #1
 3710 0028 1946     		mov	r1, r3
 3711 002a FFF7FEFF 		bl	_ZN8touchgfx17LockFreeDMA_QueueC1EPNS_6BlitOpEi
 3712 002e 7B68     		ldr	r3, [r7, #4]
 3713 0030 2033     		adds	r3, r3, #32
 3714 0032 1846     		mov	r0, r3
 3715 0034 FFF7FEFF 		bl	_ZN8touchgfx6BlitOpC1Ev
 3716              	.LBE34:
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     {
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     }
 3717              		.loc 23 39 5
 3718 0038 7B68     		ldr	r3, [r7, #4]
 3719 003a 1846     		mov	r0, r3
 3720 003c 0837     		adds	r7, r7, #8
 3721              	.LCFI343:
 3722              		.cfi_def_cfa_offset 8
 3723 003e BD46     		mov	sp, r7
 3724              	.LCFI344:
 3725              		.cfi_def_cfa_register 13
 3726              		@ sp needed
 3727 0040 80BD     		pop	{r7, pc}
 3728              	.L182:
 3729 0042 00BF     		.align	2
 3730              	.L181:
 3731 0044 08000000 		.word	_ZTVN8touchgfx5NoDMAE+8
 3732              		.cfi_endproc
 3733              	.LFE1007:
 3735              		.weak	_ZN8touchgfx5NoDMAC1Ev
 3736              		.thumb_set _ZN8touchgfx5NoDMAC1Ev,_ZN8touchgfx5NoDMAC2Ev
 3737              		.section	.text._ZN8touchgfx5NoDMA11getBlitCapsEv,"axG",%progbits,_ZN8touchgfx5NoDMA11getBlitCapsEv
 3738              		.align	1
 3739              		.weak	_ZN8touchgfx5NoDMA11getBlitCapsEv
 3740              		.syntax unified
 3741              		.thumb
 3742              		.thumb_func
 3743              		.fpu fpv4-sp-d16
 3745              	_ZN8touchgfx5NoDMA11getBlitCapsEv:
 3746              	.LFB1009:
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** 
  41:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     /**
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      * No blit operations supported by this DMA implementation.
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      *
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      * @return Zero (no blit ops supported).
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 96


  46:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     virtual BlitOperations getBlitCaps()
 3747              		.loc 23 46 28
 3748              		.cfi_startproc
 3749              		@ args = 0, pretend = 0, frame = 8
 3750              		@ frame_needed = 1, uses_anonymous_args = 0
 3751              		@ link register save eliminated.
 3752 0000 80B4     		push	{r7}
 3753              	.LCFI345:
 3754              		.cfi_def_cfa_offset 4
 3755              		.cfi_offset 7, -4
 3756 0002 83B0     		sub	sp, sp, #12
 3757              	.LCFI346:
 3758              		.cfi_def_cfa_offset 16
 3759 0004 00AF     		add	r7, sp, #0
 3760              	.LCFI347:
 3761              		.cfi_def_cfa_register 7
 3762 0006 7860     		str	r0, [r7, #4]
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     {
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****         return static_cast<BlitOperations>(0);
 3763              		.loc 23 48 45
 3764 0008 0023     		movs	r3, #0
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     }
 3765              		.loc 23 49 5
 3766 000a 1846     		mov	r0, r3
 3767 000c 0C37     		adds	r7, r7, #12
 3768              	.LCFI348:
 3769              		.cfi_def_cfa_offset 4
 3770 000e BD46     		mov	sp, r7
 3771              	.LCFI349:
 3772              		.cfi_def_cfa_register 13
 3773              		@ sp needed
 3774 0010 5DF8047B 		ldr	r7, [sp], #4
 3775              	.LCFI350:
 3776              		.cfi_restore 7
 3777              		.cfi_def_cfa_offset 0
 3778 0014 7047     		bx	lr
 3779              		.cfi_endproc
 3780              	.LFE1009:
 3782              		.section	.rodata
 3783              		.align	2
 3784              	.LC0:
 3785 0000 30202626 		.ascii	"0 && \"DMA operation not supported\"\000"
 3785      2022444D 
 3785      41206F70 
 3785      65726174 
 3785      696F6E20 
 3786 0023 00       		.align	2
 3787              	.LC1:
 3788 0024 76697274 		.ascii	"virtual void touchgfx::NoDMA::setupDataCopy(const t"
 3788      75616C20 
 3788      766F6964 
 3788      20746F75 
 3788      63686766 
 3789 0057 6F756368 		.ascii	"ouchgfx::BlitOp&)\000"
 3789      6766783A 
 3789      3A426C69 
 3789      744F7026 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 97


 3789      2900
 3790 0069 000000   		.align	2
 3791              	.LC2:
 3792 006c 4D696464 		.ascii	"Middlewares/ST/touchgfx/framework/include/touchgfx/"
 3792      6C657761 
 3792      7265732F 
 3792      53542F74 
 3792      6F756368 
 3793 009f 68616C2F 		.ascii	"hal/NoDMA.hpp\000"
 3793      4E6F444D 
 3793      412E6870 
 3793      7000
 3794              		.section	.text._ZN8touchgfx5NoDMA13setupDataCopyERKNS_6BlitOpE,"axG",%progbits,_ZN8touchgfx5NoDMA1
 3795              		.align	1
 3796              		.weak	_ZN8touchgfx5NoDMA13setupDataCopyERKNS_6BlitOpE
 3797              		.syntax unified
 3798              		.thumb
 3799              		.thumb_func
 3800              		.fpu fpv4-sp-d16
 3802              	_ZN8touchgfx5NoDMA13setupDataCopyERKNS_6BlitOpE:
 3803              	.LFB1010:
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** 
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     /**
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      * Asserts if used.
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      *
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      * @param  blitOp The blit operation to be performed by this DMA instance.
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      */
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     virtual void setupDataCopy(const BlitOp& blitOp)
 3804              		.loc 23 56 18
 3805              		.cfi_startproc
 3806              		@ args = 0, pretend = 0, frame = 8
 3807              		@ frame_needed = 1, uses_anonymous_args = 0
 3808 0000 80B5     		push	{r7, lr}
 3809              	.LCFI351:
 3810              		.cfi_def_cfa_offset 8
 3811              		.cfi_offset 7, -8
 3812              		.cfi_offset 14, -4
 3813 0002 82B0     		sub	sp, sp, #8
 3814              	.LCFI352:
 3815              		.cfi_def_cfa_offset 16
 3816 0004 00AF     		add	r7, sp, #0
 3817              	.LCFI353:
 3818              		.cfi_def_cfa_register 7
 3819 0006 7860     		str	r0, [r7, #4]
 3820 0008 3960     		str	r1, [r7]
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     {
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****         assert(0 && "DMA operation not supported");
 3821              		.loc 23 58 9
 3822 000a 034B     		ldr	r3, .L186
 3823 000c 034A     		ldr	r2, .L186+4
 3824 000e 3A21     		movs	r1, #58
 3825 0010 0348     		ldr	r0, .L186+8
 3826 0012 FFF7FEFF 		bl	__assert_func
 3827              	.L187:
 3828 0016 00BF     		.align	2
 3829              	.L186:
 3830 0018 00000000 		.word	.LC0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 98


 3831 001c 24000000 		.word	.LC1
 3832 0020 6C000000 		.word	.LC2
 3833              		.cfi_endproc
 3834              	.LFE1010:
 3836              		.section	.rodata
 3837 00ad 000000   		.align	2
 3838              	.LC3:
 3839 00b0 76697274 		.ascii	"virtual void touchgfx::NoDMA::setupDataFill(const t"
 3839      75616C20 
 3839      766F6964 
 3839      20746F75 
 3839      63686766 
 3840 00e3 6F756368 		.ascii	"ouchgfx::BlitOp&)\000"
 3840      6766783A 
 3840      3A426C69 
 3840      744F7026 
 3840      2900
 3841              		.section	.text._ZN8touchgfx5NoDMA13setupDataFillERKNS_6BlitOpE,"axG",%progbits,_ZN8touchgfx5NoDMA1
 3842              		.align	1
 3843              		.weak	_ZN8touchgfx5NoDMA13setupDataFillERKNS_6BlitOpE
 3844              		.syntax unified
 3845              		.thumb
 3846              		.thumb_func
 3847              		.fpu fpv4-sp-d16
 3849              	_ZN8touchgfx5NoDMA13setupDataFillERKNS_6BlitOpE:
 3850              	.LFB1011:
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     }
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** 
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     /**
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      * Asserts if used.
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      *
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      * @param  blitOp The blit operation to be performed by this DMA instance.
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      */
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     virtual void setupDataFill(const BlitOp& blitOp)
 3851              		.loc 23 66 18
 3852              		.cfi_startproc
 3853              		@ args = 0, pretend = 0, frame = 8
 3854              		@ frame_needed = 1, uses_anonymous_args = 0
 3855 0000 80B5     		push	{r7, lr}
 3856              	.LCFI354:
 3857              		.cfi_def_cfa_offset 8
 3858              		.cfi_offset 7, -8
 3859              		.cfi_offset 14, -4
 3860 0002 82B0     		sub	sp, sp, #8
 3861              	.LCFI355:
 3862              		.cfi_def_cfa_offset 16
 3863 0004 00AF     		add	r7, sp, #0
 3864              	.LCFI356:
 3865              		.cfi_def_cfa_register 7
 3866 0006 7860     		str	r0, [r7, #4]
 3867 0008 3960     		str	r1, [r7]
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     {
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****         assert(0 && "DMA operation not supported");
 3868              		.loc 23 68 9
 3869 000a 034B     		ldr	r3, .L189
 3870 000c 034A     		ldr	r2, .L189+4
 3871 000e 4421     		movs	r1, #68
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 99


 3872 0010 0348     		ldr	r0, .L189+8
 3873 0012 FFF7FEFF 		bl	__assert_func
 3874              	.L190:
 3875 0016 00BF     		.align	2
 3876              	.L189:
 3877 0018 00000000 		.word	.LC0
 3878 001c B0000000 		.word	.LC3
 3879 0020 6C000000 		.word	.LC2
 3880              		.cfi_endproc
 3881              	.LFE1011:
 3883              		.section	.text._ZN8touchgfx5NoDMA18signalDMAInterruptEv,"axG",%progbits,_ZN8touchgfx5NoDMA18signal
 3884              		.align	1
 3885              		.weak	_ZN8touchgfx5NoDMA18signalDMAInterruptEv
 3886              		.syntax unified
 3887              		.thumb
 3888              		.thumb_func
 3889              		.fpu fpv4-sp-d16
 3891              	_ZN8touchgfx5NoDMA18signalDMAInterruptEv:
 3892              	.LFB1012:
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     }
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** 
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     /** Does nothing. */
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     virtual void signalDMAInterrupt()
 3893              		.loc 23 72 18
 3894              		.cfi_startproc
 3895              		@ args = 0, pretend = 0, frame = 8
 3896              		@ frame_needed = 1, uses_anonymous_args = 0
 3897              		@ link register save eliminated.
 3898 0000 80B4     		push	{r7}
 3899              	.LCFI357:
 3900              		.cfi_def_cfa_offset 4
 3901              		.cfi_offset 7, -4
 3902 0002 83B0     		sub	sp, sp, #12
 3903              	.LCFI358:
 3904              		.cfi_def_cfa_offset 16
 3905 0004 00AF     		add	r7, sp, #0
 3906              	.LCFI359:
 3907              		.cfi_def_cfa_register 7
 3908 0006 7860     		str	r0, [r7, #4]
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     {
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     }
 3909              		.loc 23 74 5
 3910 0008 00BF     		nop
 3911 000a 0C37     		adds	r7, r7, #12
 3912              	.LCFI360:
 3913              		.cfi_def_cfa_offset 4
 3914 000c BD46     		mov	sp, r7
 3915              	.LCFI361:
 3916              		.cfi_def_cfa_register 13
 3917              		@ sp needed
 3918 000e 5DF8047B 		ldr	r7, [sp], #4
 3919              	.LCFI362:
 3920              		.cfi_restore 7
 3921              		.cfi_def_cfa_offset 0
 3922 0012 7047     		bx	lr
 3923              		.cfi_endproc
 3924              	.LFE1012:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 100


 3926              		.section	.text._ZN8touchgfx5NoDMA5flushEv,"axG",%progbits,_ZN8touchgfx5NoDMA5flushEv,comdat
 3927              		.align	1
 3928              		.weak	_ZN8touchgfx5NoDMA5flushEv
 3929              		.syntax unified
 3930              		.thumb
 3931              		.thumb_func
 3932              		.fpu fpv4-sp-d16
 3934              	_ZN8touchgfx5NoDMA5flushEv:
 3935              	.LFB1013:
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** 
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     /**
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      * Block until all DMA transfers are complete. Since this particular DMA does not do
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      * anything, return immediately.
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****      */
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     virtual void flush()
 3936              		.loc 23 80 18
 3937              		.cfi_startproc
 3938              		@ args = 0, pretend = 0, frame = 8
 3939              		@ frame_needed = 1, uses_anonymous_args = 0
 3940              		@ link register save eliminated.
 3941 0000 80B4     		push	{r7}
 3942              	.LCFI363:
 3943              		.cfi_def_cfa_offset 4
 3944              		.cfi_offset 7, -4
 3945 0002 83B0     		sub	sp, sp, #12
 3946              	.LCFI364:
 3947              		.cfi_def_cfa_offset 16
 3948 0004 00AF     		add	r7, sp, #0
 3949              	.LCFI365:
 3950              		.cfi_def_cfa_register 7
 3951 0006 7860     		str	r0, [r7, #4]
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     {
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp ****     }
 3952              		.loc 23 82 5
 3953 0008 00BF     		nop
 3954 000a 0C37     		adds	r7, r7, #12
 3955              	.LCFI366:
 3956              		.cfi_def_cfa_offset 4
 3957 000c BD46     		mov	sp, r7
 3958              	.LCFI367:
 3959              		.cfi_def_cfa_register 13
 3960              		@ sp needed
 3961 000e 5DF8047B 		ldr	r7, [sp], #4
 3962              	.LCFI368:
 3963              		.cfi_restore 7
 3964              		.cfi_def_cfa_offset 0
 3965 0012 7047     		bx	lr
 3966              		.cfi_endproc
 3967              	.LFE1013:
 3969              		.section	.bss._ZL2tc,"aw",%nobits
 3970              		.align	2
 3973              	_ZL2tc:
 3974 0000 00000000 		.space	4
 3975              		.section	.bss._ZL3dma,"aw",%nobits
 3976              		.align	2
 3979              	_ZL3dma:
 3980 0000 00000000 		.space	64
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 101


 3980      00000000 
 3980      00000000 
 3980      00000000 
 3980      00000000 
 3981              		.section	.bss._ZL7display,"aw",%nobits
 3982              		.align	2
 3985              	_ZL7display:
 3986 0000 00000000 		.space	120
 3986      00000000 
 3986      00000000 
 3986      00000000 
 3986      00000000 
 3987              		.section	.data._ZL12fontProvider,"aw"
 3988              		.align	2
 3991              	_ZL12fontProvider:
 3992 0000 08000000 		.word	_ZTV23ApplicationFontProvider+8
 3993              		.section	.bss._ZL5texts,"aw",%nobits
 3994              		.align	2
 3997              	_ZL5texts:
 3998 0000 00       		.space	1
 3999              		.section	.bss._ZL3hal,"aw",%nobits
 4000              		.align	2
 4003              	_ZL3hal:
 4004 0000 00000000 		.space	124
 4004      00000000 
 4004      00000000 
 4004      00000000 
 4004      00000000 
 4005              		.section	.text.touchgfx_init,"ax",%progbits
 4006              		.align	1
 4007              		.global	touchgfx_init
 4008              		.syntax unified
 4009              		.thumb
 4010              		.thumb_func
 4011              		.fpu fpv4-sp-d16
 4013              	touchgfx_init:
 4014              	.LFB1020:
 4015              		.file 24 "Src/TouchGFXConfiguration.cpp"
   1:Src/TouchGFXConfiguration.cpp **** /**
   2:Src/TouchGFXConfiguration.cpp **** ******************************************************************************
   3:Src/TouchGFXConfiguration.cpp **** * File Name : TouchGFXConfiguration.cpp
   4:Src/TouchGFXConfiguration.cpp **** ******************************************************************************
   5:Src/TouchGFXConfiguration.cpp **** * @attention
   6:Src/TouchGFXConfiguration.cpp **** *
   7:Src/TouchGFXConfiguration.cpp **** * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/TouchGFXConfiguration.cpp **** * All rights reserved.</center></h2>
   9:Src/TouchGFXConfiguration.cpp **** *
  10:Src/TouchGFXConfiguration.cpp **** * This software component is licensed by ST under Ultimate Liberty license
  11:Src/TouchGFXConfiguration.cpp **** * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/TouchGFXConfiguration.cpp **** * the License. You may obtain a copy of the License at:
  13:Src/TouchGFXConfiguration.cpp **** * www.st.com/SLA0044
  14:Src/TouchGFXConfiguration.cpp **** *
  15:Src/TouchGFXConfiguration.cpp **** ******************************************************************************
  16:Src/TouchGFXConfiguration.cpp **** */
  17:Src/TouchGFXConfiguration.cpp **** #include <BitmapDatabase.hpp>
  18:Src/TouchGFXConfiguration.cpp **** #include <STM32TouchController.hpp>
  19:Src/TouchGFXConfiguration.cpp **** #include <TouchGFXHAL.hpp>
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 102


  20:Src/TouchGFXConfiguration.cpp **** #include <fonts/ApplicationFontProvider.hpp>
  21:Src/TouchGFXConfiguration.cpp **** #include <gui/common/FrontendHeap.hpp>
  22:Src/TouchGFXConfiguration.cpp **** #include <platform/driver/lcd/LCD16bpp.hpp>
  23:Src/TouchGFXConfiguration.cpp **** #include <stm32f4xx_hal.h>
  24:Src/TouchGFXConfiguration.cpp **** #include <texts/TypedTextDatabase.hpp>
  25:Src/TouchGFXConfiguration.cpp **** #include <touchgfx/hal/NoDMA.hpp>
  26:Src/TouchGFXConfiguration.cpp **** 
  27:Src/TouchGFXConfiguration.cpp **** extern "C" void touchgfx_init();
  28:Src/TouchGFXConfiguration.cpp **** extern "C" void touchgfx_taskEntry();
  29:Src/TouchGFXConfiguration.cpp **** 
  30:Src/TouchGFXConfiguration.cpp **** static STM32TouchController tc;
  31:Src/TouchGFXConfiguration.cpp **** static NoDMA dma;
  32:Src/TouchGFXConfiguration.cpp **** static LCD16bpp display;
  33:Src/TouchGFXConfiguration.cpp **** static ApplicationFontProvider fontProvider;
  34:Src/TouchGFXConfiguration.cpp **** static Texts texts;
  35:Src/TouchGFXConfiguration.cpp **** static TouchGFXHAL hal(dma, display, tc, 64, 64);
  36:Src/TouchGFXConfiguration.cpp **** 
  37:Src/TouchGFXConfiguration.cpp **** void touchgfx_init() {
 4016              		.loc 24 37 22
 4017              		.cfi_startproc
 4018              		@ args = 0, pretend = 0, frame = 8
 4019              		@ frame_needed = 1, uses_anonymous_args = 0
 4020 0000 90B5     		push	{r4, r7, lr}
 4021              	.LCFI369:
 4022              		.cfi_def_cfa_offset 12
 4023              		.cfi_offset 4, -12
 4024              		.cfi_offset 7, -8
 4025              		.cfi_offset 14, -4
 4026 0002 85B0     		sub	sp, sp, #20
 4027              	.LCFI370:
 4028              		.cfi_def_cfa_offset 32
 4029 0004 02AF     		add	r7, sp, #8
 4030              	.LCFI371:
 4031              		.cfi_def_cfa 7, 24
  38:Src/TouchGFXConfiguration.cpp ****   Bitmap::registerBitmapDatabase(BitmapDatabase::getInstance(),
 4032              		.loc 24 38 33
 4033 0006 FFF7FEFF 		bl	_ZN14BitmapDatabase11getInstanceEv
 4034 000a 0446     		mov	r4, r0
 4035 000c FFF7FEFF 		bl	_ZN14BitmapDatabase15getInstanceSizeEv
 4036 0010 0346     		mov	r3, r0
 4037 0012 1946     		mov	r1, r3
 4038 0014 0023     		movs	r3, #0
 4039 0016 0093     		str	r3, [sp]
 4040 0018 0023     		movs	r3, #0
 4041 001a 0022     		movs	r2, #0
 4042 001c 2046     		mov	r0, r4
 4043 001e FFF7FEFF 		bl	_ZN8touchgfx6Bitmap22registerBitmapDatabaseEPKNS0_10BitmapDataEtPtmm
  39:Src/TouchGFXConfiguration.cpp ****                                  BitmapDatabase::getInstanceSize());
  40:Src/TouchGFXConfiguration.cpp ****   TypedText::registerTexts(&texts);
 4044              		.loc 24 40 27
 4045 0022 0948     		ldr	r0, .L194
 4046 0024 FFF7FEFF 		bl	_ZN8touchgfx9TypedText13registerTextsEPKNS_5TextsE
  41:Src/TouchGFXConfiguration.cpp ****   Texts::setLanguage(0);
 4047              		.loc 24 41 21
 4048 0028 0020     		movs	r0, #0
 4049 002a FFF7FEFF 		bl	_ZN8touchgfx5Texts11setLanguageEt
  42:Src/TouchGFXConfiguration.cpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 103


  43:Src/TouchGFXConfiguration.cpp ****   FontManager::setFontProvider(&fontProvider);
 4050              		.loc 24 43 31
 4051 002e 0748     		ldr	r0, .L194+4
 4052 0030 FFF7FEFF 		bl	_ZN8touchgfx11FontManager15setFontProviderEPNS_12FontProviderE
  44:Src/TouchGFXConfiguration.cpp **** 
  45:Src/TouchGFXConfiguration.cpp ****   FrontendHeap &heap = FrontendHeap::getInstance();
 4053              		.loc 24 45 50
 4054 0034 FFF7FEFF 		bl	_ZN12FrontendHeap11getInstanceEv
 4055 0038 7860     		str	r0, [r7, #4]
  46:Src/TouchGFXConfiguration.cpp ****   /*
  47:Src/TouchGFXConfiguration.cpp ****    * we need to obtain the reference above to initialize the frontend heap.
  48:Src/TouchGFXConfiguration.cpp ****    */
  49:Src/TouchGFXConfiguration.cpp ****   (void)heap;
  50:Src/TouchGFXConfiguration.cpp **** 
  51:Src/TouchGFXConfiguration.cpp ****   /*
  52:Src/TouchGFXConfiguration.cpp ****    * Initialize TouchGFX
  53:Src/TouchGFXConfiguration.cpp ****    */
  54:Src/TouchGFXConfiguration.cpp ****   hal.initialize();
 4056              		.loc 24 54 17
 4057 003a 0548     		ldr	r0, .L194+8
 4058 003c FFF7FEFF 		bl	_ZN11TouchGFXHAL10initializeEv
  55:Src/TouchGFXConfiguration.cpp **** }
 4059              		.loc 24 55 1
 4060 0040 00BF     		nop
 4061 0042 0C37     		adds	r7, r7, #12
 4062              	.LCFI372:
 4063              		.cfi_def_cfa_offset 12
 4064 0044 BD46     		mov	sp, r7
 4065              	.LCFI373:
 4066              		.cfi_def_cfa_register 13
 4067              		@ sp needed
 4068 0046 90BD     		pop	{r4, r7, pc}
 4069              	.L195:
 4070              		.align	2
 4071              	.L194:
 4072 0048 00000000 		.word	_ZL5texts
 4073 004c 00000000 		.word	_ZL12fontProvider
 4074 0050 00000000 		.word	_ZL3hal
 4075              		.cfi_endproc
 4076              	.LFE1020:
 4078              		.section	.text.touchgfx_taskEntry,"ax",%progbits
 4079              		.align	1
 4080              		.global	touchgfx_taskEntry
 4081              		.syntax unified
 4082              		.thumb
 4083              		.thumb_func
 4084              		.fpu fpv4-sp-d16
 4086              	touchgfx_taskEntry:
 4087              	.LFB1021:
  56:Src/TouchGFXConfiguration.cpp **** 
  57:Src/TouchGFXConfiguration.cpp **** void touchgfx_taskEntry() {
 4088              		.loc 24 57 27
 4089              		.cfi_startproc
 4090              		@ args = 0, pretend = 0, frame = 0
 4091              		@ frame_needed = 1, uses_anonymous_args = 0
 4092 0000 80B5     		push	{r7, lr}
 4093              	.LCFI374:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 104


 4094              		.cfi_def_cfa_offset 8
 4095              		.cfi_offset 7, -8
 4096              		.cfi_offset 14, -4
 4097 0002 00AF     		add	r7, sp, #0
 4098              	.LCFI375:
 4099              		.cfi_def_cfa_register 7
  58:Src/TouchGFXConfiguration.cpp ****   /*
  59:Src/TouchGFXConfiguration.cpp ****    * Main event loop. Will wait for VSYNC signal, and then process next frame.
  60:Src/TouchGFXConfiguration.cpp ****    * Call this function from your GUI task.
  61:Src/TouchGFXConfiguration.cpp ****    *
  62:Src/TouchGFXConfiguration.cpp ****    * Note This function never returns
  63:Src/TouchGFXConfiguration.cpp ****    */
  64:Src/TouchGFXConfiguration.cpp ****   hal.taskEntry();
 4100              		.loc 24 64 16
 4101 0004 0248     		ldr	r0, .L197
 4102 0006 FFF7FEFF 		bl	_ZN8touchgfx3HAL9taskEntryEv
  65:Src/TouchGFXConfiguration.cpp **** }
 4103              		.loc 24 65 1
 4104 000a 00BF     		nop
 4105 000c 80BD     		pop	{r7, pc}
 4106              	.L198:
 4107 000e 00BF     		.align	2
 4108              	.L197:
 4109 0010 00000000 		.word	_ZL3hal
 4110              		.cfi_endproc
 4111              	.LFE1021:
 4113              		.weak	_ZTVN8touchgfx5NoDMAE
 4114              		.section	.rodata._ZTVN8touchgfx5NoDMAE,"aG",%progbits,_ZTVN8touchgfx5NoDMAE,comdat
 4115              		.align	2
 4118              	_ZTVN8touchgfx5NoDMAE:
 4119 0000 00000000 		.word	0
 4120 0004 00000000 		.word	0
 4121 0008 00000000 		.word	_ZN8touchgfx5NoDMA11getBlitCapsEv
 4122 000c 00000000 		.word	_ZN8touchgfx13DMA_Interface10addToQueueERKNS_6BlitOpE
 4123 0010 00000000 		.word	_ZN8touchgfx5NoDMA5flushEv
 4124 0014 00000000 		.word	_ZN8touchgfx13DMA_Interface10initializeEv
 4125 0018 00000000 		.word	_ZN8touchgfx13DMA_Interface5startEv
 4126 001c 00000000 		.word	_ZN8touchgfx5NoDMA18signalDMAInterruptEv
 4127 0020 00000000 		.word	_ZN8touchgfx13DMA_Interface10getDMATypeEv
 4128 0024 00000000 		.word	_ZN8touchgfx5NoDMAD1Ev
 4129 0028 00000000 		.word	_ZN8touchgfx5NoDMAD0Ev
 4130 002c 00000000 		.word	_ZN8touchgfx13DMA_Interface7executeEv
 4131 0030 00000000 		.word	_ZN8touchgfx13DMA_Interface16executeCompletedEv
 4132 0034 00000000 		.word	_ZN8touchgfx13DMA_Interface13seedExecutionEv
 4133 0038 00000000 		.word	_ZN8touchgfx5NoDMA13setupDataCopyERKNS_6BlitOpE
 4134 003c 00000000 		.word	_ZN8touchgfx5NoDMA13setupDataFillERKNS_6BlitOpE
 4135 0040 00000000 		.word	_ZN8touchgfx13DMA_Interface11enableAlphaEh
 4136 0044 00000000 		.word	_ZN8touchgfx13DMA_Interface12disableAlphaEv
 4137 0048 00000000 		.word	_ZN8touchgfx13DMA_Interface31enableCopyWithTransparentPixelsEh
 4138 004c 00000000 		.word	_ZN8touchgfx13DMA_Interface27waitForFrameBufferSemaphoreEv
 4139              		.section	.text._ZN8touchgfx5NoDMAD2Ev,"axG",%progbits,_ZN8touchgfx5NoDMAD5Ev,comdat
 4140              		.align	1
 4141              		.weak	_ZN8touchgfx5NoDMAD2Ev
 4142              		.syntax unified
 4143              		.thumb
 4144              		.thumb_func
 4145              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 105


 4147              	_ZN8touchgfx5NoDMAD2Ev:
 4148              	.LFB1033:
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** {
 4149              		.loc 23 33 7
 4150              		.cfi_startproc
 4151              		@ args = 0, pretend = 0, frame = 8
 4152              		@ frame_needed = 1, uses_anonymous_args = 0
 4153 0000 80B5     		push	{r7, lr}
 4154              	.LCFI376:
 4155              		.cfi_def_cfa_offset 8
 4156              		.cfi_offset 7, -8
 4157              		.cfi_offset 14, -4
 4158 0002 82B0     		sub	sp, sp, #8
 4159              	.LCFI377:
 4160              		.cfi_def_cfa_offset 16
 4161 0004 00AF     		add	r7, sp, #0
 4162              	.LCFI378:
 4163              		.cfi_def_cfa_register 7
 4164 0006 7860     		str	r0, [r7, #4]
 4165              	.LBB35:
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** {
 4166              		.loc 23 33 7
 4167 0008 084A     		ldr	r2, .L201
 4168 000a 7B68     		ldr	r3, [r7, #4]
 4169 000c 1A60     		str	r2, [r3]
 4170 000e 7B68     		ldr	r3, [r7, #4]
 4171 0010 0C33     		adds	r3, r3, #12
 4172 0012 1846     		mov	r0, r3
 4173 0014 FFF7FEFF 		bl	_ZN8touchgfx17LockFreeDMA_QueueD1Ev
 4174 0018 7B68     		ldr	r3, [r7, #4]
 4175 001a 1846     		mov	r0, r3
 4176 001c FFF7FEFF 		bl	_ZN8touchgfx13DMA_InterfaceD2Ev
 4177              	.LBE35:
 4178 0020 7B68     		ldr	r3, [r7, #4]
 4179 0022 1846     		mov	r0, r3
 4180 0024 0837     		adds	r7, r7, #8
 4181              	.LCFI379:
 4182              		.cfi_def_cfa_offset 8
 4183 0026 BD46     		mov	sp, r7
 4184              	.LCFI380:
 4185              		.cfi_def_cfa_register 13
 4186              		@ sp needed
 4187 0028 80BD     		pop	{r7, pc}
 4188              	.L202:
 4189 002a 00BF     		.align	2
 4190              	.L201:
 4191 002c 08000000 		.word	_ZTVN8touchgfx5NoDMAE+8
 4192              		.cfi_endproc
 4193              	.LFE1033:
 4195              		.weak	_ZN8touchgfx5NoDMAD1Ev
 4196              		.thumb_set _ZN8touchgfx5NoDMAD1Ev,_ZN8touchgfx5NoDMAD2Ev
 4197              		.section	.text._ZN8touchgfx5NoDMAD0Ev,"axG",%progbits,_ZN8touchgfx5NoDMAD5Ev,comdat
 4198              		.align	1
 4199              		.weak	_ZN8touchgfx5NoDMAD0Ev
 4200              		.syntax unified
 4201              		.thumb
 4202              		.thumb_func
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 106


 4203              		.fpu fpv4-sp-d16
 4205              	_ZN8touchgfx5NoDMAD0Ev:
 4206              	.LFB1035:
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** {
 4207              		.loc 23 33 7
 4208              		.cfi_startproc
 4209              		@ args = 0, pretend = 0, frame = 8
 4210              		@ frame_needed = 1, uses_anonymous_args = 0
 4211 0000 80B5     		push	{r7, lr}
 4212              	.LCFI381:
 4213              		.cfi_def_cfa_offset 8
 4214              		.cfi_offset 7, -8
 4215              		.cfi_offset 14, -4
 4216 0002 82B0     		sub	sp, sp, #8
 4217              	.LCFI382:
 4218              		.cfi_def_cfa_offset 16
 4219 0004 00AF     		add	r7, sp, #0
 4220              	.LCFI383:
 4221              		.cfi_def_cfa_register 7
 4222 0006 7860     		str	r0, [r7, #4]
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/NoDMA.hpp **** {
 4223              		.loc 23 33 7
 4224 0008 7868     		ldr	r0, [r7, #4]
 4225 000a FFF7FEFF 		bl	_ZN8touchgfx5NoDMAD1Ev
 4226 000e 4021     		movs	r1, #64
 4227 0010 7868     		ldr	r0, [r7, #4]
 4228 0012 FFF7FEFF 		bl	_ZdlPvj
 4229 0016 7B68     		ldr	r3, [r7, #4]
 4230 0018 1846     		mov	r0, r3
 4231 001a 0837     		adds	r7, r7, #8
 4232              	.LCFI384:
 4233              		.cfi_def_cfa_offset 8
 4234 001c BD46     		mov	sp, r7
 4235              	.LCFI385:
 4236              		.cfi_def_cfa_register 13
 4237              		@ sp needed
 4238 001e 80BD     		pop	{r7, pc}
 4239              		.cfi_endproc
 4240              	.LFE1035:
 4242              		.weak	_ZTV12FrontendHeap
 4243              		.section	.rodata._ZTV12FrontendHeap,"aG",%progbits,_ZTV12FrontendHeap,comdat
 4244              		.align	2
 4247              	_ZTV12FrontendHeap:
 4248 0000 00000000 		.word	0
 4249 0004 00000000 		.word	0
 4250 0008 00000000 		.word	_ZN12FrontendHeapD1Ev
 4251 000c 00000000 		.word	_ZN12FrontendHeapD0Ev
 4252 0010 00000000 		.word	_ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication
 4253              		.section	.text._ZN12FrontendHeapD2Ev,"axG",%progbits,_ZN12FrontendHeapD5Ev,comdat
 4254              		.align	1
 4255              		.weak	_ZN12FrontendHeapD2Ev
 4256              		.syntax unified
 4257              		.thumb
 4258              		.thumb_func
 4259              		.fpu fpv4-sp-d16
 4261              	_ZN12FrontendHeapD2Ev:
 4262              	.LFB1037:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 107


   6:Src/gui/include/gui/common/FrontendHeap.hpp **** {
 4263              		.loc 19 6 7
 4264              		.cfi_startproc
 4265              		@ args = 0, pretend = 0, frame = 8
 4266              		@ frame_needed = 1, uses_anonymous_args = 0
 4267 0000 80B5     		push	{r7, lr}
 4268              	.LCFI386:
 4269              		.cfi_def_cfa_offset 8
 4270              		.cfi_offset 7, -8
 4271              		.cfi_offset 14, -4
 4272 0002 82B0     		sub	sp, sp, #8
 4273              	.LCFI387:
 4274              		.cfi_def_cfa_offset 16
 4275 0004 00AF     		add	r7, sp, #0
 4276              	.LCFI388:
 4277              		.cfi_def_cfa_register 7
 4278 0006 7860     		str	r0, [r7, #4]
 4279              	.LBB36:
   6:Src/gui/include/gui/common/FrontendHeap.hpp **** {
 4280              		.loc 19 6 7
 4281 0008 114A     		ldr	r2, .L207
 4282 000a 7B68     		ldr	r3, [r7, #4]
 4283 000c 1A60     		str	r2, [r3]
 4284 000e 7B68     		ldr	r3, [r7, #4]
 4285 0010 03F5A453 		add	r3, r3, #5248
 4286 0014 1833     		adds	r3, r3, #24
 4287 0016 1846     		mov	r0, r3
 4288 0018 FFF7FEFF 		bl	_ZN19FrontendApplicationD1Ev
 4289 001c 7B68     		ldr	r3, [r7, #4]
 4290 001e 03F5A453 		add	r3, r3, #5248
 4291 0022 1846     		mov	r0, r3
 4292 0024 FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED1Ev
 4293 0028 7B68     		ldr	r3, [r7, #4]
 4294 002a 2C33     		adds	r3, r3, #44
 4295 002c 1846     		mov	r0, r3
 4296 002e FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED1Ev
 4297 0032 7B68     		ldr	r3, [r7, #4]
 4298 0034 1433     		adds	r3, r3, #20
 4299 0036 1846     		mov	r0, r3
 4300 0038 FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED1Ev
 4301 003c 7B68     		ldr	r3, [r7, #4]
 4302 003e 1846     		mov	r0, r3
 4303 0040 FFF7FEFF 		bl	_ZN16FrontendHeapBaseD2Ev
 4304              	.LBE36:
 4305 0044 7B68     		ldr	r3, [r7, #4]
 4306 0046 1846     		mov	r0, r3
 4307 0048 0837     		adds	r7, r7, #8
 4308              	.LCFI389:
 4309              		.cfi_def_cfa_offset 8
 4310 004a BD46     		mov	sp, r7
 4311              	.LCFI390:
 4312              		.cfi_def_cfa_register 13
 4313              		@ sp needed
 4314 004c 80BD     		pop	{r7, pc}
 4315              	.L208:
 4316 004e 00BF     		.align	2
 4317              	.L207:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 108


 4318 0050 08000000 		.word	_ZTV12FrontendHeap+8
 4319              		.cfi_endproc
 4320              	.LFE1037:
 4322              		.weak	_ZN12FrontendHeapD1Ev
 4323              		.thumb_set _ZN12FrontendHeapD1Ev,_ZN12FrontendHeapD2Ev
 4324              		.section	.text._ZN12FrontendHeapD0Ev,"axG",%progbits,_ZN12FrontendHeapD5Ev,comdat
 4325              		.align	1
 4326              		.weak	_ZN12FrontendHeapD0Ev
 4327              		.syntax unified
 4328              		.thumb
 4329              		.thumb_func
 4330              		.fpu fpv4-sp-d16
 4332              	_ZN12FrontendHeapD0Ev:
 4333              	.LFB1039:
   6:Src/gui/include/gui/common/FrontendHeap.hpp **** {
 4334              		.loc 19 6 7
 4335              		.cfi_startproc
 4336              		@ args = 0, pretend = 0, frame = 8
 4337              		@ frame_needed = 1, uses_anonymous_args = 0
 4338 0000 80B5     		push	{r7, lr}
 4339              	.LCFI391:
 4340              		.cfi_def_cfa_offset 8
 4341              		.cfi_offset 7, -8
 4342              		.cfi_offset 14, -4
 4343 0002 82B0     		sub	sp, sp, #8
 4344              	.LCFI392:
 4345              		.cfi_def_cfa_offset 16
 4346 0004 00AF     		add	r7, sp, #0
 4347              	.LCFI393:
 4348              		.cfi_def_cfa_register 7
 4349 0006 7860     		str	r0, [r7, #4]
   6:Src/gui/include/gui/common/FrontendHeap.hpp **** {
 4350              		.loc 19 6 7
 4351 0008 7868     		ldr	r0, [r7, #4]
 4352 000a FFF7FEFF 		bl	_ZN12FrontendHeapD1Ev
 4353 000e 41F2F051 		movw	r1, #5616
 4354 0012 7868     		ldr	r0, [r7, #4]
 4355 0014 FFF7FEFF 		bl	_ZdlPvj
 4356 0018 7B68     		ldr	r3, [r7, #4]
 4357 001a 1846     		mov	r0, r3
 4358 001c 0837     		adds	r7, r7, #8
 4359              	.LCFI394:
 4360              		.cfi_def_cfa_offset 8
 4361 001e BD46     		mov	sp, r7
 4362              	.LCFI395:
 4363              		.cfi_def_cfa_register 13
 4364              		@ sp needed
 4365 0020 80BD     		pop	{r7, pc}
 4366              		.cfi_endproc
 4367              	.LFE1039:
 4369              		.weak	_ZTVN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEE
 4370              		.section	.rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEE
 4371              		.align	2
 4374              	_ZTVN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEE:
 4375 0000 00000000 		.word	0
 4376 0004 00000000 		.word	0
 4377 0008 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED1Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 109


 4378 000c 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED0Ev
 4379 0010 00000000 		.word	_ZN8touchgfx17AbstractPartition8allocateEt
 4380 0014 00000000 		.word	_ZN8touchgfx17AbstractPartition10allocateAtEtt
 4381 0018 00000000 		.word	_ZNK8touchgfx17AbstractPartition18getAllocationCountEv
 4382 001c 00000000 		.word	_ZN8touchgfx17AbstractPartition7indexOfEPKv
 4383 0020 00000000 		.word	_ZN8touchgfx17AbstractPartition5clearEv
 4384 0024 00000000 		.word	_ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE8capac
 4385 0028 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE12eleme
 4386 002c 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elemen
 4387 0030 00000000 		.word	_ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7eleme
 4388              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1
 4389              		.align	1
 4390              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED2Ev
 4391              		.syntax unified
 4392              		.thumb
 4393              		.thumb_func
 4394              		.fpu fpv4-sp-d16
 4396              	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED2Ev:
 4397              	.LFB1041:
 4398              		.loc 20 42 7
 4399              		.cfi_startproc
 4400              		@ args = 0, pretend = 0, frame = 8
 4401              		@ frame_needed = 1, uses_anonymous_args = 0
 4402 0000 80B5     		push	{r7, lr}
 4403              	.LCFI396:
 4404              		.cfi_def_cfa_offset 8
 4405              		.cfi_offset 7, -8
 4406              		.cfi_offset 14, -4
 4407 0002 82B0     		sub	sp, sp, #8
 4408              	.LCFI397:
 4409              		.cfi_def_cfa_offset 16
 4410 0004 00AF     		add	r7, sp, #0
 4411              	.LCFI398:
 4412              		.cfi_def_cfa_register 7
 4413 0006 7860     		str	r0, [r7, #4]
 4414              	.LBB37:
 4415              		.loc 20 42 7
 4416 0008 054A     		ldr	r2, .L213
 4417 000a 7B68     		ldr	r3, [r7, #4]
 4418 000c 1A60     		str	r2, [r3]
 4419 000e 7B68     		ldr	r3, [r7, #4]
 4420 0010 1846     		mov	r0, r3
 4421 0012 FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartitionD2Ev
 4422              	.LBE37:
 4423 0016 7B68     		ldr	r3, [r7, #4]
 4424 0018 1846     		mov	r0, r3
 4425 001a 0837     		adds	r7, r7, #8
 4426              	.LCFI399:
 4427              		.cfi_def_cfa_offset 8
 4428 001c BD46     		mov	sp, r7
 4429              	.LCFI400:
 4430              		.cfi_def_cfa_register 13
 4431              		@ sp needed
 4432 001e 80BD     		pop	{r7, pc}
 4433              	.L214:
 4434              		.align	2
 4435              	.L213:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 110


 4436 0020 08000000 		.word	_ZTVN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEE+8
 4437              		.cfi_endproc
 4438              	.LFE1041:
 4440              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED1Ev
 4441              		.thumb_set _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED1
 4442              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1
 4443              		.align	1
 4444              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED0Ev
 4445              		.syntax unified
 4446              		.thumb
 4447              		.thumb_func
 4448              		.fpu fpv4-sp-d16
 4450              	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED0Ev:
 4451              	.LFB1043:
 4452              		.loc 20 42 7
 4453              		.cfi_startproc
 4454              		@ args = 0, pretend = 0, frame = 8
 4455              		@ frame_needed = 1, uses_anonymous_args = 0
 4456 0000 80B5     		push	{r7, lr}
 4457              	.LCFI401:
 4458              		.cfi_def_cfa_offset 8
 4459              		.cfi_offset 7, -8
 4460              		.cfi_offset 14, -4
 4461 0002 82B0     		sub	sp, sp, #8
 4462              	.LCFI402:
 4463              		.cfi_def_cfa_offset 16
 4464 0004 00AF     		add	r7, sp, #0
 4465              	.LCFI403:
 4466              		.cfi_def_cfa_register 7
 4467 0006 7860     		str	r0, [r7, #4]
 4468              		.loc 20 42 7
 4469 0008 7868     		ldr	r0, [r7, #4]
 4470 000a FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED1Ev
 4471 000e 1421     		movs	r1, #20
 4472 0010 7868     		ldr	r0, [r7, #4]
 4473 0012 FFF7FEFF 		bl	_ZdlPvj
 4474 0016 7B68     		ldr	r3, [r7, #4]
 4475 0018 1846     		mov	r0, r3
 4476 001a 0837     		adds	r7, r7, #8
 4477              	.LCFI404:
 4478              		.cfi_def_cfa_offset 8
 4479 001c BD46     		mov	sp, r7
 4480              	.LCFI405:
 4481              		.cfi_def_cfa_register 13
 4482              		@ sp needed
 4483 001e 80BD     		pop	{r7, pc}
 4484              		.cfi_endproc
 4485              	.LFE1043:
 4487              		.weak	_ZTVN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEE
 4488              		.section	.rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE
 4489              		.align	2
 4492              	_ZTVN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEE:
 4493 0000 00000000 		.word	0
 4494 0004 00000000 		.word	0
 4495 0008 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED1Ev
 4496 000c 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED0Ev
 4497 0010 00000000 		.word	_ZN8touchgfx17AbstractPartition8allocateEt
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 111


 4498 0014 00000000 		.word	_ZN8touchgfx17AbstractPartition10allocateAtEtt
 4499 0018 00000000 		.word	_ZNK8touchgfx17AbstractPartition18getAllocationCountEv
 4500 001c 00000000 		.word	_ZN8touchgfx17AbstractPartition7indexOfEPKv
 4501 0020 00000000 		.word	_ZN8touchgfx17AbstractPartition5clearEv
 4502 0024 00000000 		.word	_ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE8capacityEv
 4503 0028 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE12element_siz
 4504 002c 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt
 4505 0030 00000000 		.word	_ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt
 4506              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED2Ev
 4507              		.align	1
 4508              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED2Ev
 4509              		.syntax unified
 4510              		.thumb
 4511              		.thumb_func
 4512              		.fpu fpv4-sp-d16
 4514              	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED2Ev:
 4515              	.LFB1045:
 4516              		.loc 20 42 7
 4517              		.cfi_startproc
 4518              		@ args = 0, pretend = 0, frame = 8
 4519              		@ frame_needed = 1, uses_anonymous_args = 0
 4520 0000 80B5     		push	{r7, lr}
 4521              	.LCFI406:
 4522              		.cfi_def_cfa_offset 8
 4523              		.cfi_offset 7, -8
 4524              		.cfi_offset 14, -4
 4525 0002 82B0     		sub	sp, sp, #8
 4526              	.LCFI407:
 4527              		.cfi_def_cfa_offset 16
 4528 0004 00AF     		add	r7, sp, #0
 4529              	.LCFI408:
 4530              		.cfi_def_cfa_register 7
 4531 0006 7860     		str	r0, [r7, #4]
 4532              	.LBB38:
 4533              		.loc 20 42 7
 4534 0008 054A     		ldr	r2, .L219
 4535 000a 7B68     		ldr	r3, [r7, #4]
 4536 000c 1A60     		str	r2, [r3]
 4537 000e 7B68     		ldr	r3, [r7, #4]
 4538 0010 1846     		mov	r0, r3
 4539 0012 FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartitionD2Ev
 4540              	.LBE38:
 4541 0016 7B68     		ldr	r3, [r7, #4]
 4542 0018 1846     		mov	r0, r3
 4543 001a 0837     		adds	r7, r7, #8
 4544              	.LCFI409:
 4545              		.cfi_def_cfa_offset 8
 4546 001c BD46     		mov	sp, r7
 4547              	.LCFI410:
 4548              		.cfi_def_cfa_register 13
 4549              		@ sp needed
 4550 001e 80BD     		pop	{r7, pc}
 4551              	.L220:
 4552              		.align	2
 4553              	.L219:
 4554 0020 08000000 		.word	_ZTVN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEE+8
 4555              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 112


 4556              	.LFE1045:
 4558              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED1Ev
 4559              		.thumb_set _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED1Ev,_ZN
 4560              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED0Ev
 4561              		.align	1
 4562              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED0Ev
 4563              		.syntax unified
 4564              		.thumb
 4565              		.thumb_func
 4566              		.fpu fpv4-sp-d16
 4568              	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED0Ev:
 4569              	.LFB1047:
 4570              		.loc 20 42 7
 4571              		.cfi_startproc
 4572              		@ args = 0, pretend = 0, frame = 8
 4573              		@ frame_needed = 1, uses_anonymous_args = 0
 4574 0000 80B5     		push	{r7, lr}
 4575              	.LCFI411:
 4576              		.cfi_def_cfa_offset 8
 4577              		.cfi_offset 7, -8
 4578              		.cfi_offset 14, -4
 4579 0002 82B0     		sub	sp, sp, #8
 4580              	.LCFI412:
 4581              		.cfi_def_cfa_offset 16
 4582 0004 00AF     		add	r7, sp, #0
 4583              	.LCFI413:
 4584              		.cfi_def_cfa_register 7
 4585 0006 7860     		str	r0, [r7, #4]
 4586              		.loc 20 42 7
 4587 0008 7868     		ldr	r0, [r7, #4]
 4588 000a FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED1Ev
 4589 000e 41F25441 		movw	r1, #5204
 4590 0012 7868     		ldr	r0, [r7, #4]
 4591 0014 FFF7FEFF 		bl	_ZdlPvj
 4592 0018 7B68     		ldr	r3, [r7, #4]
 4593 001a 1846     		mov	r0, r3
 4594 001c 0837     		adds	r7, r7, #8
 4595              	.LCFI414:
 4596              		.cfi_def_cfa_offset 8
 4597 001e BD46     		mov	sp, r7
 4598              	.LCFI415:
 4599              		.cfi_def_cfa_register 13
 4600              		@ sp needed
 4601 0020 80BD     		pop	{r7, pc}
 4602              		.cfi_endproc
 4603              	.LFE1047:
 4605              		.weak	_ZTVN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEE
 4606              		.section	.rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEE
 4607              		.align	2
 4610              	_ZTVN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEE:
 4611 0000 00000000 		.word	0
 4612 0004 00000000 		.word	0
 4613 0008 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED1Ev
 4614 000c 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED0Ev
 4615 0010 00000000 		.word	_ZN8touchgfx17AbstractPartition8allocateEt
 4616 0014 00000000 		.word	_ZN8touchgfx17AbstractPartition10allocateAtEtt
 4617 0018 00000000 		.word	_ZNK8touchgfx17AbstractPartition18getAllocationCountEv
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 113


 4618 001c 00000000 		.word	_ZN8touchgfx17AbstractPartition7indexOfEPKv
 4619 0020 00000000 		.word	_ZN8touchgfx17AbstractPartition5clearEv
 4620 0024 00000000 		.word	_ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE8capaci
 4621 0028 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE12elemen
 4622 002c 00000000 		.word	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7element
 4623 0030 00000000 		.word	_ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elemen
 4624              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1E
 4625              		.align	1
 4626              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED2Ev
 4627              		.syntax unified
 4628              		.thumb
 4629              		.thumb_func
 4630              		.fpu fpv4-sp-d16
 4632              	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED2Ev:
 4633              	.LFB1049:
 4634              		.loc 20 42 7
 4635              		.cfi_startproc
 4636              		@ args = 0, pretend = 0, frame = 8
 4637              		@ frame_needed = 1, uses_anonymous_args = 0
 4638 0000 80B5     		push	{r7, lr}
 4639              	.LCFI416:
 4640              		.cfi_def_cfa_offset 8
 4641              		.cfi_offset 7, -8
 4642              		.cfi_offset 14, -4
 4643 0002 82B0     		sub	sp, sp, #8
 4644              	.LCFI417:
 4645              		.cfi_def_cfa_offset 16
 4646 0004 00AF     		add	r7, sp, #0
 4647              	.LCFI418:
 4648              		.cfi_def_cfa_register 7
 4649 0006 7860     		str	r0, [r7, #4]
 4650              	.LBB39:
 4651              		.loc 20 42 7
 4652 0008 054A     		ldr	r2, .L225
 4653 000a 7B68     		ldr	r3, [r7, #4]
 4654 000c 1A60     		str	r2, [r3]
 4655 000e 7B68     		ldr	r3, [r7, #4]
 4656 0010 1846     		mov	r0, r3
 4657 0012 FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartitionD2Ev
 4658              	.LBE39:
 4659 0016 7B68     		ldr	r3, [r7, #4]
 4660 0018 1846     		mov	r0, r3
 4661 001a 0837     		adds	r7, r7, #8
 4662              	.LCFI419:
 4663              		.cfi_def_cfa_offset 8
 4664 001c BD46     		mov	sp, r7
 4665              	.LCFI420:
 4666              		.cfi_def_cfa_register 13
 4667              		@ sp needed
 4668 001e 80BD     		pop	{r7, pc}
 4669              	.L226:
 4670              		.align	2
 4671              	.L225:
 4672 0020 08000000 		.word	_ZTVN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEE+8
 4673              		.cfi_endproc
 4674              	.LFE1049:
 4676              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED1Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 114


 4677              		.thumb_set _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED1E
 4678              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1E
 4679              		.align	1
 4680              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED0Ev
 4681              		.syntax unified
 4682              		.thumb
 4683              		.thumb_func
 4684              		.fpu fpv4-sp-d16
 4686              	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED0Ev:
 4687              	.LFB1051:
 4688              		.loc 20 42 7
 4689              		.cfi_startproc
 4690              		@ args = 0, pretend = 0, frame = 8
 4691              		@ frame_needed = 1, uses_anonymous_args = 0
 4692 0000 80B5     		push	{r7, lr}
 4693              	.LCFI421:
 4694              		.cfi_def_cfa_offset 8
 4695              		.cfi_offset 7, -8
 4696              		.cfi_offset 14, -4
 4697 0002 82B0     		sub	sp, sp, #8
 4698              	.LCFI422:
 4699              		.cfi_def_cfa_offset 16
 4700 0004 00AF     		add	r7, sp, #0
 4701              	.LCFI423:
 4702              		.cfi_def_cfa_register 7
 4703 0006 7860     		str	r0, [r7, #4]
 4704              		.loc 20 42 7
 4705 0008 7868     		ldr	r0, [r7, #4]
 4706 000a FFF7FEFF 		bl	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED1Ev
 4707 000e 1821     		movs	r1, #24
 4708 0010 7868     		ldr	r0, [r7, #4]
 4709 0012 FFF7FEFF 		bl	_ZdlPvj
 4710 0016 7B68     		ldr	r3, [r7, #4]
 4711 0018 1846     		mov	r0, r3
 4712 001a 0837     		adds	r7, r7, #8
 4713              	.LCFI424:
 4714              		.cfi_def_cfa_offset 8
 4715 001c BD46     		mov	sp, r7
 4716              	.LCFI425:
 4717              		.cfi_def_cfa_register 13
 4718              		@ sp needed
 4719 001e 80BD     		pop	{r7, pc}
 4720              		.cfi_endproc
 4721              	.LFE1051:
 4723              		.weak	_ZTV16FrontendHeapBase
 4724              		.section	.rodata._ZTV16FrontendHeapBase,"aG",%progbits,_ZTV16FrontendHeapBase,comdat
 4725              		.align	2
 4728              	_ZTV16FrontendHeapBase:
 4729 0000 00000000 		.word	0
 4730 0004 00000000 		.word	0
 4731 0008 00000000 		.word	_ZN16FrontendHeapBaseD1Ev
 4732 000c 00000000 		.word	_ZN16FrontendHeapBaseD0Ev
 4733 0010 00000000 		.word	_ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication
 4734              		.weak	_ZTV19FrontendApplication
 4735              		.section	.rodata._ZTV19FrontendApplication,"aG",%progbits,_ZTV19FrontendApplication,comdat
 4736              		.align	2
 4739              	_ZTV19FrontendApplication:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 115


 4740 0000 00000000 		.word	0
 4741 0004 00000000 		.word	0
 4742 0008 00000000 		.word	_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
 4743 000c 00000000 		.word	_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
 4744 0010 00000000 		.word	_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
 4745 0014 00000000 		.word	_ZN8touchgfx11Application14handleKeyEventEh
 4746 0018 00000000 		.word	_ZN19FrontendApplication15handleTickEventEv
 4747 001c 00000000 		.word	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 4748 0020 00000000 		.word	_ZN19FrontendApplicationD1Ev
 4749 0024 00000000 		.word	_ZN19FrontendApplicationD0Ev
 4750 0028 00000000 		.word	_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
 4751 002c 00000000 		.word	_ZN8touchgfx11Application15appSwitchScreenEh
 4752 0030 00000000 		.word	_ZN8touchgfx11Application13requestRedrawEv
 4753 0034 00000000 		.word	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 4754 0038 00000000 		.word	_ZN8touchgfx11Application4drawEv
 4755 003c 00000000 		.word	_ZN8touchgfx11Application4drawERNS_4RectE
 4756 0040 00000000 		.word	_ZN8touchgfx11Application19cacheDrawOperationsEb
 4757              		.weak	_ZTV23FrontendApplicationBase
 4758              		.section	.rodata._ZTV23FrontendApplicationBase,"aG",%progbits,_ZTV23FrontendApplicationBase,comdat
 4759              		.align	2
 4762              	_ZTV23FrontendApplicationBase:
 4763 0000 00000000 		.word	0
 4764 0004 00000000 		.word	0
 4765 0008 00000000 		.word	_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
 4766 000c 00000000 		.word	_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
 4767 0010 00000000 		.word	_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
 4768 0014 00000000 		.word	_ZN8touchgfx11Application14handleKeyEventEh
 4769 0018 00000000 		.word	_ZN8touchgfx11Application15handleTickEventEv
 4770 001c 00000000 		.word	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 4771 0020 00000000 		.word	_ZN23FrontendApplicationBaseD1Ev
 4772 0024 00000000 		.word	_ZN23FrontendApplicationBaseD0Ev
 4773 0028 00000000 		.word	_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
 4774 002c 00000000 		.word	_ZN8touchgfx11Application15appSwitchScreenEh
 4775 0030 00000000 		.word	_ZN8touchgfx11Application13requestRedrawEv
 4776 0034 00000000 		.word	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 4777 0038 00000000 		.word	_ZN8touchgfx11Application4drawEv
 4778 003c 00000000 		.word	_ZN8touchgfx11Application4drawERNS_4RectE
 4779 0040 00000000 		.word	_ZN8touchgfx11Application19cacheDrawOperationsEb
 4780              		.weak	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE
 4781              		.section	.rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE,"aG",%progbits,_ZTVN8touch
 4782              		.align	2
 4785              	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:
 4786 0000 00000000 		.word	0
 4787 0004 00000000 		.word	0
 4788 0008 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 4789 000c 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
 4790 0010 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
 4791 0014 00000000 		.word	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
 4792              		.weak	_ZTVN8touchgfx14MVPApplicationE
 4793              		.section	.rodata._ZTVN8touchgfx14MVPApplicationE,"aG",%progbits,_ZTVN8touchgfx14MVPApplicationE,co
 4794              		.align	2
 4797              	_ZTVN8touchgfx14MVPApplicationE:
 4798 0000 00000000 		.word	0
 4799 0004 00000000 		.word	0
 4800 0008 00000000 		.word	_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
 4801 000c 00000000 		.word	_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
 4802 0010 00000000 		.word	_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 116


 4803 0014 00000000 		.word	_ZN8touchgfx11Application14handleKeyEventEh
 4804 0018 00000000 		.word	_ZN8touchgfx11Application15handleTickEventEv
 4805 001c 00000000 		.word	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 4806 0020 00000000 		.word	_ZN8touchgfx14MVPApplicationD1Ev
 4807 0024 00000000 		.word	_ZN8touchgfx14MVPApplicationD0Ev
 4808 0028 00000000 		.word	_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
 4809 002c 00000000 		.word	_ZN8touchgfx11Application15appSwitchScreenEh
 4810 0030 00000000 		.word	_ZN8touchgfx11Application13requestRedrawEv
 4811 0034 00000000 		.word	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 4812 0038 00000000 		.word	_ZN8touchgfx11Application4drawEv
 4813 003c 00000000 		.word	_ZN8touchgfx11Application4drawERNS_4RectE
 4814 0040 00000000 		.word	_ZN8touchgfx11Application19cacheDrawOperationsEb
 4815              		.weak	_ZTVN8touchgfx15GenericCallbackIvvvEE
 4816              		.section	.rodata._ZTVN8touchgfx15GenericCallbackIvvvEE,"aG",%progbits,_ZTVN8touchgfx15GenericCallb
 4817              		.align	2
 4820              	_ZTVN8touchgfx15GenericCallbackIvvvEE:
 4821 0000 00000000 		.word	0
 4822 0004 00000000 		.word	0
 4823 0008 00000000 		.word	0
 4824 000c 00000000 		.word	0
 4825 0010 00000000 		.word	__cxa_pure_virtual
 4826 0014 00000000 		.word	__cxa_pure_virtual
 4827              		.weak	_ZTVN8touchgfx7MVPHeapE
 4828              		.section	.rodata._ZTVN8touchgfx7MVPHeapE,"aG",%progbits,_ZTVN8touchgfx7MVPHeapE,comdat
 4829              		.align	2
 4832              	_ZTVN8touchgfx7MVPHeapE:
 4833 0000 00000000 		.word	0
 4834 0004 00000000 		.word	0
 4835 0008 00000000 		.word	_ZN8touchgfx7MVPHeapD1Ev
 4836 000c 00000000 		.word	_ZN8touchgfx7MVPHeapD0Ev
 4837              		.weak	_ZTVN8touchgfx12FontProviderE
 4838              		.section	.rodata._ZTVN8touchgfx12FontProviderE,"aG",%progbits,_ZTVN8touchgfx12FontProviderE,comdat
 4839              		.align	2
 4842              	_ZTVN8touchgfx12FontProviderE:
 4843 0000 00000000 		.word	0
 4844 0004 00000000 		.word	0
 4845 0008 00000000 		.word	__cxa_pure_virtual
 4846 000c 00000000 		.word	0
 4847 0010 00000000 		.word	0
 4848              		.weak	_ZTVN8touchgfx15UIEventListenerE
 4849              		.section	.rodata._ZTVN8touchgfx15UIEventListenerE,"aG",%progbits,_ZTVN8touchgfx15UIEventListenerE,
 4850              		.align	2
 4853              	_ZTVN8touchgfx15UIEventListenerE:
 4854 0000 00000000 		.word	0
 4855 0004 00000000 		.word	0
 4856 0008 00000000 		.word	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
 4857 000c 00000000 		.word	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
 4858 0010 00000000 		.word	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
 4859 0014 00000000 		.word	_ZN8touchgfx15UIEventListener14handleKeyEventEh
 4860 0018 00000000 		.word	_ZN8touchgfx15UIEventListener15handleTickEventEv
 4861 001c 00000000 		.word	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
 4862 0020 00000000 		.word	_ZN8touchgfx15UIEventListenerD1Ev
 4863 0024 00000000 		.word	_ZN8touchgfx15UIEventListenerD0Ev
 4864              		.weak	_ZTVN8touchgfx9DMA_QueueE
 4865              		.section	.rodata._ZTVN8touchgfx9DMA_QueueE,"aG",%progbits,_ZTVN8touchgfx9DMA_QueueE,comdat
 4866              		.align	2
 4869              	_ZTVN8touchgfx9DMA_QueueE:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 117


 4870 0000 00000000 		.word	0
 4871 0004 00000000 		.word	0
 4872 0008 00000000 		.word	__cxa_pure_virtual
 4873 000c 00000000 		.word	__cxa_pure_virtual
 4874 0010 00000000 		.word	__cxa_pure_virtual
 4875 0014 00000000 		.word	0
 4876 0018 00000000 		.word	0
 4877 001c 00000000 		.word	__cxa_pure_virtual
 4878 0020 00000000 		.word	__cxa_pure_virtual
 4879              		.weak	_ZTVN8touchgfx15TouchControllerE
 4880              		.section	.rodata._ZTVN8touchgfx15TouchControllerE,"aG",%progbits,_ZTVN8touchgfx15TouchControllerE,
 4881              		.align	2
 4884              	_ZTVN8touchgfx15TouchControllerE:
 4885 0000 00000000 		.word	0
 4886 0004 00000000 		.word	0
 4887 0008 00000000 		.word	0
 4888 000c 00000000 		.word	0
 4889 0010 00000000 		.word	__cxa_pure_virtual
 4890 0014 00000000 		.word	__cxa_pure_virtual
 4891              		.section	.text._ZN11TouchGFXHALD2Ev,"axG",%progbits,_ZN11TouchGFXHALD5Ev,comdat
 4892              		.align	1
 4893              		.weak	_ZN11TouchGFXHALD2Ev
 4894              		.syntax unified
 4895              		.thumb
 4896              		.thumb_func
 4897              		.fpu fpv4-sp-d16
 4899              	_ZN11TouchGFXHALD2Ev:
 4900              	.LFB1066:
  31:Src/TouchGFXHAL.hpp **** {
 4901              		.loc 10 31 7
 4902              		.cfi_startproc
 4903              		@ args = 0, pretend = 0, frame = 8
 4904              		@ frame_needed = 1, uses_anonymous_args = 0
 4905 0000 80B5     		push	{r7, lr}
 4906              	.LCFI426:
 4907              		.cfi_def_cfa_offset 8
 4908              		.cfi_offset 7, -8
 4909              		.cfi_offset 14, -4
 4910 0002 82B0     		sub	sp, sp, #8
 4911              	.LCFI427:
 4912              		.cfi_def_cfa_offset 16
 4913 0004 00AF     		add	r7, sp, #0
 4914              	.LCFI428:
 4915              		.cfi_def_cfa_register 7
 4916 0006 7860     		str	r0, [r7, #4]
 4917              	.LBB40:
  31:Src/TouchGFXHAL.hpp **** {
 4918              		.loc 10 31 7
 4919 0008 054A     		ldr	r2, .L231
 4920 000a 7B68     		ldr	r3, [r7, #4]
 4921 000c 1A60     		str	r2, [r3]
 4922 000e 7B68     		ldr	r3, [r7, #4]
 4923 0010 1846     		mov	r0, r3
 4924 0012 FFF7FEFF 		bl	_ZN20TouchGFXGeneratedHALD2Ev
 4925              	.LBE40:
 4926 0016 7B68     		ldr	r3, [r7, #4]
 4927 0018 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 118


 4928 001a 0837     		adds	r7, r7, #8
 4929              	.LCFI429:
 4930              		.cfi_def_cfa_offset 8
 4931 001c BD46     		mov	sp, r7
 4932              	.LCFI430:
 4933              		.cfi_def_cfa_register 13
 4934              		@ sp needed
 4935 001e 80BD     		pop	{r7, pc}
 4936              	.L232:
 4937              		.align	2
 4938              	.L231:
 4939 0020 08000000 		.word	_ZTV11TouchGFXHAL+8
 4940              		.cfi_endproc
 4941              	.LFE1066:
 4943              		.weak	_ZN11TouchGFXHALD1Ev
 4944              		.thumb_set _ZN11TouchGFXHALD1Ev,_ZN11TouchGFXHALD2Ev
 4945              		.section	.text._ZN11TouchGFXHALD0Ev,"axG",%progbits,_ZN11TouchGFXHALD5Ev,comdat
 4946              		.align	1
 4947              		.weak	_ZN11TouchGFXHALD0Ev
 4948              		.syntax unified
 4949              		.thumb
 4950              		.thumb_func
 4951              		.fpu fpv4-sp-d16
 4953              	_ZN11TouchGFXHALD0Ev:
 4954              	.LFB1068:
  31:Src/TouchGFXHAL.hpp **** {
 4955              		.loc 10 31 7
 4956              		.cfi_startproc
 4957              		@ args = 0, pretend = 0, frame = 8
 4958              		@ frame_needed = 1, uses_anonymous_args = 0
 4959 0000 80B5     		push	{r7, lr}
 4960              	.LCFI431:
 4961              		.cfi_def_cfa_offset 8
 4962              		.cfi_offset 7, -8
 4963              		.cfi_offset 14, -4
 4964 0002 82B0     		sub	sp, sp, #8
 4965              	.LCFI432:
 4966              		.cfi_def_cfa_offset 16
 4967 0004 00AF     		add	r7, sp, #0
 4968              	.LCFI433:
 4969              		.cfi_def_cfa_register 7
 4970 0006 7860     		str	r0, [r7, #4]
  31:Src/TouchGFXHAL.hpp **** {
 4971              		.loc 10 31 7
 4972 0008 7868     		ldr	r0, [r7, #4]
 4973 000a FFF7FEFF 		bl	_ZN11TouchGFXHALD1Ev
 4974 000e 7C21     		movs	r1, #124
 4975 0010 7868     		ldr	r0, [r7, #4]
 4976 0012 FFF7FEFF 		bl	_ZdlPvj
 4977 0016 7B68     		ldr	r3, [r7, #4]
 4978 0018 1846     		mov	r0, r3
 4979 001a 0837     		adds	r7, r7, #8
 4980              	.LCFI434:
 4981              		.cfi_def_cfa_offset 8
 4982 001c BD46     		mov	sp, r7
 4983              	.LCFI435:
 4984              		.cfi_def_cfa_register 13
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 119


 4985              		@ sp needed
 4986 001e 80BD     		pop	{r7, pc}
 4987              		.cfi_endproc
 4988              	.LFE1068:
 4990              		.section	.text._ZN23ApplicationFontProviderD2Ev,"axG",%progbits,_ZN23ApplicationFontProviderD5Ev,c
 4991              		.align	1
 4992              		.weak	_ZN23ApplicationFontProviderD2Ev
 4993              		.syntax unified
 4994              		.thumb
 4995              		.thumb_func
 4996              		.fpu fpv4-sp-d16
 4998              	_ZN23ApplicationFontProviderD2Ev:
 4999              	.LFB1070:
 5000              		.file 25 "Src/generated/fonts/include/fonts/ApplicationFontProvider.hpp"
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
 5001              		.loc 25 29 7
 5002              		.cfi_startproc
 5003              		@ args = 0, pretend = 0, frame = 8
 5004              		@ frame_needed = 1, uses_anonymous_args = 0
 5005 0000 80B5     		push	{r7, lr}
 5006              	.LCFI436:
 5007              		.cfi_def_cfa_offset 8
 5008              		.cfi_offset 7, -8
 5009              		.cfi_offset 14, -4
 5010 0002 82B0     		sub	sp, sp, #8
 5011              	.LCFI437:
 5012              		.cfi_def_cfa_offset 16
 5013 0004 00AF     		add	r7, sp, #0
 5014              	.LCFI438:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 120


 5015              		.cfi_def_cfa_register 7
 5016 0006 7860     		str	r0, [r7, #4]
 5017              	.LBB41:
 5018              		.loc 25 29 7
 5019 0008 054A     		ldr	r2, .L237
 5020 000a 7B68     		ldr	r3, [r7, #4]
 5021 000c 1A60     		str	r2, [r3]
 5022 000e 7B68     		ldr	r3, [r7, #4]
 5023 0010 1846     		mov	r0, r3
 5024 0012 FFF7FEFF 		bl	_ZN8touchgfx12FontProviderD2Ev
 5025              	.LBE41:
 5026 0016 7B68     		ldr	r3, [r7, #4]
 5027 0018 1846     		mov	r0, r3
 5028 001a 0837     		adds	r7, r7, #8
 5029              	.LCFI439:
 5030              		.cfi_def_cfa_offset 8
 5031 001c BD46     		mov	sp, r7
 5032              	.LCFI440:
 5033              		.cfi_def_cfa_register 13
 5034              		@ sp needed
 5035 001e 80BD     		pop	{r7, pc}
 5036              	.L238:
 5037              		.align	2
 5038              	.L237:
 5039 0020 08000000 		.word	_ZTV23ApplicationFontProvider+8
 5040              		.cfi_endproc
 5041              	.LFE1070:
 5043              		.weak	_ZN23ApplicationFontProviderD1Ev
 5044              		.thumb_set _ZN23ApplicationFontProviderD1Ev,_ZN23ApplicationFontProviderD2Ev
 5045              		.section	.text._ZN23ApplicationFontProviderD0Ev,"axG",%progbits,_ZN23ApplicationFontProviderD5Ev,c
 5046              		.align	1
 5047              		.weak	_ZN23ApplicationFontProviderD0Ev
 5048              		.syntax unified
 5049              		.thumb
 5050              		.thumb_func
 5051              		.fpu fpv4-sp-d16
 5053              	_ZN23ApplicationFontProviderD0Ev:
 5054              	.LFB1072:
 5055              		.loc 25 29 7
 5056              		.cfi_startproc
 5057              		@ args = 0, pretend = 0, frame = 8
 5058              		@ frame_needed = 1, uses_anonymous_args = 0
 5059 0000 80B5     		push	{r7, lr}
 5060              	.LCFI441:
 5061              		.cfi_def_cfa_offset 8
 5062              		.cfi_offset 7, -8
 5063              		.cfi_offset 14, -4
 5064 0002 82B0     		sub	sp, sp, #8
 5065              	.LCFI442:
 5066              		.cfi_def_cfa_offset 16
 5067 0004 00AF     		add	r7, sp, #0
 5068              	.LCFI443:
 5069              		.cfi_def_cfa_register 7
 5070 0006 7860     		str	r0, [r7, #4]
 5071              		.loc 25 29 7
 5072 0008 7868     		ldr	r0, [r7, #4]
 5073 000a FFF7FEFF 		bl	_ZN23ApplicationFontProviderD1Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 121


 5074 000e 0421     		movs	r1, #4
 5075 0010 7868     		ldr	r0, [r7, #4]
 5076 0012 FFF7FEFF 		bl	_ZdlPvj
 5077 0016 7B68     		ldr	r3, [r7, #4]
 5078 0018 1846     		mov	r0, r3
 5079 001a 0837     		adds	r7, r7, #8
 5080              	.LCFI444:
 5081              		.cfi_def_cfa_offset 8
 5082 001c BD46     		mov	sp, r7
 5083              	.LCFI445:
 5084              		.cfi_def_cfa_register 13
 5085              		@ sp needed
 5086 001e 80BD     		pop	{r7, pc}
 5087              		.cfi_endproc
 5088              	.LFE1072:
 5090              		.section	.text._ZN8touchgfx8LCD16bppD2Ev,"axG",%progbits,_ZN8touchgfx8LCD16bppD5Ev,comdat
 5091              		.align	1
 5092              		.weak	_ZN8touchgfx8LCD16bppD2Ev
 5093              		.syntax unified
 5094              		.thumb
 5095              		.thumb_func
 5096              		.fpu fpv4-sp-d16
 5098              	_ZN8touchgfx8LCD16bppD2Ev:
 5099              	.LFB1074:
 5100              		.file 26 "Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp"
   1:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  * @file platform/driver/lcd/LCD16bpp.hpp
  15:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  * Declares the touchgfx::LCD16bpp class.
  17:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** #ifndef TOUCHGFX_LCD16BPP_HPP
  19:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** #define TOUCHGFX_LCD16BPP_HPP
  20:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** #include <touchgfx/Bitmap.hpp>
  23:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** #include <touchgfx/Color.hpp>
  24:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** #include <touchgfx/hal/HAL.hpp>
  25:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** #include <touchgfx/lcd/LCD.hpp>
  26:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** #include <touchgfx/lcd/LCD16DebugPrinter.hpp>
  27:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** 
  28:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** namespace touchgfx
  29:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** {
  30:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** struct GlyphNode;
  31:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** 
  32:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 122


  33:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  * This class contains the various low-level drawing routines for drawing bitmaps, texts and
  34:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  * rectangles on 16 bits per pixel displays.
  35:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  *
  36:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  * @see LCD
  37:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  *
  38:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  * @note All coordinates are expected to be in absolute coordinates!
  39:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp ****  */
  40:Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp **** class LCD16bpp : public LCD
 5101              		.loc 26 40 7
 5102              		.cfi_startproc
 5103              		@ args = 0, pretend = 0, frame = 8
 5104              		@ frame_needed = 1, uses_anonymous_args = 0
 5105 0000 80B5     		push	{r7, lr}
 5106              	.LCFI446:
 5107              		.cfi_def_cfa_offset 8
 5108              		.cfi_offset 7, -8
 5109              		.cfi_offset 14, -4
 5110 0002 82B0     		sub	sp, sp, #8
 5111              	.LCFI447:
 5112              		.cfi_def_cfa_offset 16
 5113 0004 00AF     		add	r7, sp, #0
 5114              	.LCFI448:
 5115              		.cfi_def_cfa_register 7
 5116 0006 7860     		str	r0, [r7, #4]
 5117              	.LBB42:
 5118              		.loc 26 40 7
 5119 0008 054A     		ldr	r2, .L243
 5120 000a 7B68     		ldr	r3, [r7, #4]
 5121 000c 1A60     		str	r2, [r3]
 5122 000e 7B68     		ldr	r3, [r7, #4]
 5123 0010 1846     		mov	r0, r3
 5124 0012 FFF7FEFF 		bl	_ZN8touchgfx3LCDD2Ev
 5125              	.LBE42:
 5126 0016 7B68     		ldr	r3, [r7, #4]
 5127 0018 1846     		mov	r0, r3
 5128 001a 0837     		adds	r7, r7, #8
 5129              	.LCFI449:
 5130              		.cfi_def_cfa_offset 8
 5131 001c BD46     		mov	sp, r7
 5132              	.LCFI450:
 5133              		.cfi_def_cfa_register 13
 5134              		@ sp needed
 5135 001e 80BD     		pop	{r7, pc}
 5136              	.L244:
 5137              		.align	2
 5138              	.L243:
 5139 0020 08000000 		.word	_ZTVN8touchgfx8LCD16bppE+8
 5140              		.cfi_endproc
 5141              	.LFE1074:
 5143              		.weak	_ZN8touchgfx8LCD16bppD1Ev
 5144              		.thumb_set _ZN8touchgfx8LCD16bppD1Ev,_ZN8touchgfx8LCD16bppD2Ev
 5145              		.section	.text._ZN8touchgfx8LCD16bppD0Ev,"axG",%progbits,_ZN8touchgfx8LCD16bppD5Ev,comdat
 5146              		.align	1
 5147              		.weak	_ZN8touchgfx8LCD16bppD0Ev
 5148              		.syntax unified
 5149              		.thumb
 5150              		.thumb_func
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 123


 5151              		.fpu fpv4-sp-d16
 5153              	_ZN8touchgfx8LCD16bppD0Ev:
 5154              	.LFB1076:
 5155              		.loc 26 40 7
 5156              		.cfi_startproc
 5157              		@ args = 0, pretend = 0, frame = 8
 5158              		@ frame_needed = 1, uses_anonymous_args = 0
 5159 0000 80B5     		push	{r7, lr}
 5160              	.LCFI451:
 5161              		.cfi_def_cfa_offset 8
 5162              		.cfi_offset 7, -8
 5163              		.cfi_offset 14, -4
 5164 0002 82B0     		sub	sp, sp, #8
 5165              	.LCFI452:
 5166              		.cfi_def_cfa_offset 16
 5167 0004 00AF     		add	r7, sp, #0
 5168              	.LCFI453:
 5169              		.cfi_def_cfa_register 7
 5170 0006 7860     		str	r0, [r7, #4]
 5171              		.loc 26 40 7
 5172 0008 7868     		ldr	r0, [r7, #4]
 5173 000a FFF7FEFF 		bl	_ZN8touchgfx8LCD16bppD1Ev
 5174 000e 7821     		movs	r1, #120
 5175 0010 7868     		ldr	r0, [r7, #4]
 5176 0012 FFF7FEFF 		bl	_ZdlPvj
 5177 0016 7B68     		ldr	r3, [r7, #4]
 5178 0018 1846     		mov	r0, r3
 5179 001a 0837     		adds	r7, r7, #8
 5180              	.LCFI454:
 5181              		.cfi_def_cfa_offset 8
 5182 001c BD46     		mov	sp, r7
 5183              	.LCFI455:
 5184              		.cfi_def_cfa_register 13
 5185              		@ sp needed
 5186 001e 80BD     		pop	{r7, pc}
 5187              		.cfi_endproc
 5188              	.LFE1076:
 5190              		.section	.text._ZN20STM32TouchControllerD2Ev,"axG",%progbits,_ZN20STM32TouchControllerD5Ev,comdat
 5191              		.align	1
 5192              		.weak	_ZN20STM32TouchControllerD2Ev
 5193              		.syntax unified
 5194              		.thumb
 5195              		.thumb_func
 5196              		.fpu fpv4-sp-d16
 5198              	_ZN20STM32TouchControllerD2Ev:
 5199              	.LFB1078:
  33:Src/STM32TouchController.hpp **** {
 5200              		.loc 3 33 7
 5201              		.cfi_startproc
 5202              		@ args = 0, pretend = 0, frame = 8
 5203              		@ frame_needed = 1, uses_anonymous_args = 0
 5204 0000 80B5     		push	{r7, lr}
 5205              	.LCFI456:
 5206              		.cfi_def_cfa_offset 8
 5207              		.cfi_offset 7, -8
 5208              		.cfi_offset 14, -4
 5209 0002 82B0     		sub	sp, sp, #8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 124


 5210              	.LCFI457:
 5211              		.cfi_def_cfa_offset 16
 5212 0004 00AF     		add	r7, sp, #0
 5213              	.LCFI458:
 5214              		.cfi_def_cfa_register 7
 5215 0006 7860     		str	r0, [r7, #4]
 5216              	.LBB43:
  33:Src/STM32TouchController.hpp **** {
 5217              		.loc 3 33 7
 5218 0008 054A     		ldr	r2, .L249
 5219 000a 7B68     		ldr	r3, [r7, #4]
 5220 000c 1A60     		str	r2, [r3]
 5221 000e 7B68     		ldr	r3, [r7, #4]
 5222 0010 1846     		mov	r0, r3
 5223 0012 FFF7FEFF 		bl	_ZN8touchgfx15TouchControllerD2Ev
 5224              	.LBE43:
 5225 0016 7B68     		ldr	r3, [r7, #4]
 5226 0018 1846     		mov	r0, r3
 5227 001a 0837     		adds	r7, r7, #8
 5228              	.LCFI459:
 5229              		.cfi_def_cfa_offset 8
 5230 001c BD46     		mov	sp, r7
 5231              	.LCFI460:
 5232              		.cfi_def_cfa_register 13
 5233              		@ sp needed
 5234 001e 80BD     		pop	{r7, pc}
 5235              	.L250:
 5236              		.align	2
 5237              	.L249:
 5238 0020 08000000 		.word	_ZTV20STM32TouchController+8
 5239              		.cfi_endproc
 5240              	.LFE1078:
 5242              		.weak	_ZN20STM32TouchControllerD1Ev
 5243              		.thumb_set _ZN20STM32TouchControllerD1Ev,_ZN20STM32TouchControllerD2Ev
 5244              		.section	.text._ZN20STM32TouchControllerD0Ev,"axG",%progbits,_ZN20STM32TouchControllerD5Ev,comdat
 5245              		.align	1
 5246              		.weak	_ZN20STM32TouchControllerD0Ev
 5247              		.syntax unified
 5248              		.thumb
 5249              		.thumb_func
 5250              		.fpu fpv4-sp-d16
 5252              	_ZN20STM32TouchControllerD0Ev:
 5253              	.LFB1080:
  33:Src/STM32TouchController.hpp **** {
 5254              		.loc 3 33 7
 5255              		.cfi_startproc
 5256              		@ args = 0, pretend = 0, frame = 8
 5257              		@ frame_needed = 1, uses_anonymous_args = 0
 5258 0000 80B5     		push	{r7, lr}
 5259              	.LCFI461:
 5260              		.cfi_def_cfa_offset 8
 5261              		.cfi_offset 7, -8
 5262              		.cfi_offset 14, -4
 5263 0002 82B0     		sub	sp, sp, #8
 5264              	.LCFI462:
 5265              		.cfi_def_cfa_offset 16
 5266 0004 00AF     		add	r7, sp, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 125


 5267              	.LCFI463:
 5268              		.cfi_def_cfa_register 7
 5269 0006 7860     		str	r0, [r7, #4]
  33:Src/STM32TouchController.hpp **** {
 5270              		.loc 3 33 7
 5271 0008 7868     		ldr	r0, [r7, #4]
 5272 000a FFF7FEFF 		bl	_ZN20STM32TouchControllerD1Ev
 5273 000e 0421     		movs	r1, #4
 5274 0010 7868     		ldr	r0, [r7, #4]
 5275 0012 FFF7FEFF 		bl	_ZdlPvj
 5276 0016 7B68     		ldr	r3, [r7, #4]
 5277 0018 1846     		mov	r0, r3
 5278 001a 0837     		adds	r7, r7, #8
 5279              	.LCFI464:
 5280              		.cfi_def_cfa_offset 8
 5281 001c BD46     		mov	sp, r7
 5282              	.LCFI465:
 5283              		.cfi_def_cfa_register 13
 5284              		@ sp needed
 5285 001e 80BD     		pop	{r7, pc}
 5286              		.cfi_endproc
 5287              	.LFE1080:
 5289              		.section	.text._Z41__static_initialization_and_destruction_0ii,"ax",%progbits
 5290              		.align	1
 5291              		.syntax unified
 5292              		.thumb
 5293              		.thumb_func
 5294              		.fpu fpv4-sp-d16
 5296              	_Z41__static_initialization_and_destruction_0ii:
 5297              	.LFB1064:
 5298              		.loc 24 65 1
 5299              		.cfi_startproc
 5300              		@ args = 0, pretend = 0, frame = 8
 5301              		@ frame_needed = 1, uses_anonymous_args = 0
 5302 0000 80B5     		push	{r7, lr}
 5303              	.LCFI466:
 5304              		.cfi_def_cfa_offset 8
 5305              		.cfi_offset 7, -8
 5306              		.cfi_offset 14, -4
 5307 0002 84B0     		sub	sp, sp, #16
 5308              	.LCFI467:
 5309              		.cfi_def_cfa_offset 24
 5310 0004 02AF     		add	r7, sp, #8
 5311              	.LCFI468:
 5312              		.cfi_def_cfa 7, 16
 5313 0006 7860     		str	r0, [r7, #4]
 5314 0008 3960     		str	r1, [r7]
 5315              		.loc 24 65 1
 5316 000a 7B68     		ldr	r3, [r7, #4]
 5317 000c 012B     		cmp	r3, #1
 5318 000e 17D1     		bne	.L254
 5319              		.loc 24 65 1 is_stmt 0 discriminator 1
 5320 0010 3B68     		ldr	r3, [r7]
 5321 0012 4FF6FF72 		movw	r2, #65535
 5322 0016 9342     		cmp	r3, r2
 5323 0018 12D1     		bne	.L254
  30:Src/TouchGFXConfiguration.cpp **** static NoDMA dma;
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 126


 5324              		.loc 24 30 29 is_stmt 1
 5325 001a 1748     		ldr	r0, .L257
 5326 001c FFF7FEFF 		bl	_ZN20STM32TouchControllerC1Ev
  31:Src/TouchGFXConfiguration.cpp **** static LCD16bpp display;
 5327              		.loc 24 31 14
 5328 0020 1648     		ldr	r0, .L257+4
 5329 0022 FFF7FEFF 		bl	_ZN8touchgfx5NoDMAC1Ev
  32:Src/TouchGFXConfiguration.cpp **** static ApplicationFontProvider fontProvider;
 5330              		.loc 24 32 17
 5331 0026 1648     		ldr	r0, .L257+8
 5332 0028 FFF7FEFF 		bl	_ZN8touchgfx8LCD16bppC1Ev
  35:Src/TouchGFXConfiguration.cpp **** 
 5333              		.loc 24 35 48
 5334 002c 4023     		movs	r3, #64
 5335 002e 0193     		str	r3, [sp, #4]
 5336 0030 4023     		movs	r3, #64
 5337 0032 0093     		str	r3, [sp]
 5338 0034 104B     		ldr	r3, .L257
 5339 0036 124A     		ldr	r2, .L257+8
 5340 0038 1049     		ldr	r1, .L257+4
 5341 003a 1248     		ldr	r0, .L257+12
 5342 003c FFF7FEFF 		bl	_ZN11TouchGFXHALC1ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
 5343              	.L254:
  35:Src/TouchGFXConfiguration.cpp **** 
 5344              		.loc 24 35 20
 5345 0040 7B68     		ldr	r3, [r7, #4]
 5346 0042 002B     		cmp	r3, #0
 5347 0044 13D1     		bne	.L256
  35:Src/TouchGFXConfiguration.cpp **** 
 5348              		.loc 24 35 20 is_stmt 0 discriminator 1
 5349 0046 3B68     		ldr	r3, [r7]
 5350 0048 4FF6FF72 		movw	r2, #65535
 5351 004c 9342     		cmp	r3, r2
 5352 004e 0ED1     		bne	.L256
  35:Src/TouchGFXConfiguration.cpp **** 
 5353              		.loc 24 35 20 discriminator 2
 5354 0050 0C48     		ldr	r0, .L257+12
 5355 0052 FFF7FEFF 		bl	_ZN11TouchGFXHALD1Ev
  33:Src/TouchGFXConfiguration.cpp **** static Texts texts;
 5356              		.loc 24 33 32 is_stmt 1 discriminator 2
 5357 0056 0C48     		ldr	r0, .L257+16
 5358 0058 FFF7FEFF 		bl	_ZN23ApplicationFontProviderD1Ev
  32:Src/TouchGFXConfiguration.cpp **** static ApplicationFontProvider fontProvider;
 5359              		.loc 24 32 17 discriminator 2
 5360 005c 0848     		ldr	r0, .L257+8
 5361 005e FFF7FEFF 		bl	_ZN8touchgfx8LCD16bppD1Ev
  31:Src/TouchGFXConfiguration.cpp **** static LCD16bpp display;
 5362              		.loc 24 31 14 discriminator 2
 5363 0062 0648     		ldr	r0, .L257+4
 5364 0064 FFF7FEFF 		bl	_ZN8touchgfx5NoDMAD1Ev
  30:Src/TouchGFXConfiguration.cpp **** static NoDMA dma;
 5365              		.loc 24 30 29 discriminator 2
 5366 0068 0348     		ldr	r0, .L257
 5367 006a FFF7FEFF 		bl	_ZN20STM32TouchControllerD1Ev
 5368              	.L256:
 5369              		.loc 24 65 1
 5370 006e 00BF     		nop
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 127


 5371 0070 0837     		adds	r7, r7, #8
 5372              	.LCFI469:
 5373              		.cfi_def_cfa_offset 8
 5374 0072 BD46     		mov	sp, r7
 5375              	.LCFI470:
 5376              		.cfi_def_cfa_register 13
 5377              		@ sp needed
 5378 0074 80BD     		pop	{r7, pc}
 5379              	.L258:
 5380 0076 00BF     		.align	2
 5381              	.L257:
 5382 0078 00000000 		.word	_ZL2tc
 5383 007c 00000000 		.word	_ZL3dma
 5384 0080 00000000 		.word	_ZL7display
 5385 0084 00000000 		.word	_ZL3hal
 5386 0088 00000000 		.word	_ZL12fontProvider
 5387              		.cfi_endproc
 5388              	.LFE1064:
 5390              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev,"axG",%progbits,_ZN8touchgf
 5391              		.align	1
 5392              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev
 5393              		.syntax unified
 5394              		.thumb
 5395              		.thumb_func
 5396              		.fpu fpv4-sp-d16
 5398              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:
 5399              	.LFB1086:
 182:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 183:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 184:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
 185:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
 186:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 187:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute() = 0;
 188:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 189:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 190:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 191:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 192:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
 193:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 194:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const = 0;
 195:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** };
 196:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 197:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
 198:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * A Callback is basically a wrapper of a pointer-to-member-function.
 199:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 200:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * It is used for registering callbacks between widgets. For instance, a Button can be
 201:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * configured to call a member function when it is clicked.
 202:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 203:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The class is templated in order to provide the class type of the object in which the
 204:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * member function resides, and the argument types of the function to call.
 205:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 206:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The Callback class exists in four versions, for supporting member functions with 0,
 207:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * 1, 2 or 3 arguments. The compiler will infer which type to use automatically.
 208:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 209:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam dest_type The type of the class in which the member function resides.
 210:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T1        The type of the first argument in the member function, or void if none.
 211:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T2        The type of the second argument in the member function, or void if none.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 128


 212:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T3        The type of the third argument in the member function, or void if none.
 213:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 214:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @note The member function to call must return void. The function can have zero, one, two or
 215:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *       three arguments of any type.
 216:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <class dest_type, typename T1 = void, typename T2 = void, typename T3 = void>
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** struct Callback : public GenericCallback<T1, T2, T3>
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Initializes a new instance of the Callback class. */
 221:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback()
 222:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(0), pmemfun_3(0)
 223:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 224:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 225:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Initializes a Callback with an object and a pointer to the member function in that
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * object to call.
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Initializes a Callback with an object and a pointer to the member function in that
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * object to call.
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pobject   Pointer to the object on which the function should be called.
 234:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pmemfun_3 Address of member function. This is the version where function takes
 235:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *                       three arguments.
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback(dest_type* pobject, void (dest_type::*pmemfun_3)(T1, T2, T3))
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(pobject), pmemfun_3(pmemfun_3)
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 241:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 242:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 243:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
 244:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
 245:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 246:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  t1 This value will be passed as the first argument in the function call.
 247:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  t2 This value will be passed as the second argument in the function call.
 248:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  t3 This value will be passed as the third argument in the function call.
 249:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 250:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute(T1 t1, T2 t2, T3 t3)
 251:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 252:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         (pobject->*pmemfun_3)(t1, t2, t3);
 253:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 254:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 255:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 256:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 257:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 258:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
 259:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 260:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const
 261:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 262:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         return (pobject != 0) && (pmemfun_3 != 0);
 263:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** private:
 266:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     dest_type* pobject;
 267:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     void (dest_type::*pmemfun_3)(T1, T2, T3);
 268:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** };
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 129


 269:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 270:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
 271:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * A Callback is basically a wrapper of a pointer-to-member-function.
 272:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 273:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * It is used for registering callbacks between widgets. For instance, a Button can be
 274:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * configured to call a member function when it is clicked.
 275:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 276:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The class is templated in order to provide the class type of the object in which the
 277:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * member function resides, and the argument types of the function to call.
 278:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 279:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The Callback class exists in four versions, for supporting member functions with 0, 1,
 280:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * 2 or 3 arguments. The compiler will infer which type to use automatically.
 281:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 282:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam dest_type The type of the class in which the member function resides.
 283:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T1        The type of the first argument in the member function, or void if none.
 284:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T2        The type of the second argument in the member function, or void if none.
 285:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 286:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @note The member function to call must return void. The function can have zero, one, two or
 287:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *       three arguments of any type.
 288:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
 289:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <class dest_type, typename T1, typename T2>
 290:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** struct Callback<dest_type, T1, T2, void> : public GenericCallback<T1, T2>
 291:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 292:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Initializes a new instance of the Callback class. */
 293:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback()
 294:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(0), pmemfun_2(0)
 295:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 296:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 297:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 298:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 299:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Initializes a Callback with an object and a pointer to the member function in that
 300:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * object to call.
 301:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 302:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pobject   Pointer to the object on which the function should be called.
 303:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pmemfun_2 Address of member function. This is the version where function takes
 304:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *                       two arguments.
 305:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 306:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback(dest_type* pobject, void (dest_type::*pmemfun_2)(T1, T2))
 307:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(pobject), pmemfun_2(pmemfun_2)
 308:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 309:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 310:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 311:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 312:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
 313:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
 314:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 315:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  t1 This value will be passed as the first argument in the function call.
 316:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  t2 This value will be passed as the second argument in the function call.
 317:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 318:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute(T1 t1, T2 t2)
 319:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 320:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         (pobject->*pmemfun_2)(t1, t2);
 321:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 322:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 323:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 324:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 325:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 130


 326:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
 327:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 328:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const
 329:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 330:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         return (pobject != 0) && (pmemfun_2 != 0);
 331:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 332:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 333:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** private:
 334:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     dest_type* pobject;
 335:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     void (dest_type::*pmemfun_2)(T1, T2);
 336:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** };
 337:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 338:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
 339:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * A Callback is basically a wrapper of a pointer-to-member-function.
 340:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 341:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * It is used for registering callbacks between widgets. For instance, a Button can be
 342:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * configured to call a member function when it is clicked.
 343:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 344:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The class is templated in order to provide the class type of the object in which the
 345:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * member function resides, and the argument types of the function to call.
 346:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 347:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The Callback class exists in four versions, for supporting member functions with 0, 1,
 348:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * 2 or 3 arguments. The compiler will infer which type to use automatically.
 349:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 350:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam dest_type The type of the class in which the member function resides.
 351:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam T1        The type of the first argument in the member function, or void if none.
 352:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 353:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @note The member function to call must return void. The function can have zero, one, two or
 354:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *       three arguments of any type.
 355:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
 356:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <class dest_type, typename T1>
 357:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** struct Callback<dest_type, T1, void, void> : public GenericCallback<T1>
 358:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 359:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Initializes a new instance of the Callback class. */
 360:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback()
 361:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(0), pmemfun_1(0)
 362:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 363:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 364:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 365:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 366:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Initializes a Callback with an object and a pointer to the member function in that
 367:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * object to call.
 368:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 369:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pobject   Pointer to the object on which the function should be called.
 370:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pmemfun_1 Address of member function. This is the version where function takes
 371:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *                       one argument.
 372:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 373:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback(dest_type* pobject, void (dest_type::*pmemfun_1)(T1))
 374:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(pobject), pmemfun_1(pmemfun_1)
 375:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 376:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 377:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 378:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 379:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
 380:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
 381:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 382:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  t1 This value will be passed as the first argument in the function call.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 131


 383:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 384:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @see isValid
 385:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 386:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute(T1 t1)
 387:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 388:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         (pobject->*pmemfun_1)(t1);
 389:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 390:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 391:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 392:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Query if this object is valid.
 393:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 394:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true if valid, false if not.
 395:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 396:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const
 397:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 398:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         return (pobject != 0) && (pmemfun_1 != 0);
 399:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 400:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 401:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** private:
 402:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     dest_type* pobject;
 403:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     void (dest_type::*pmemfun_1)(T1);
 404:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** };
 405:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 406:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /**
 407:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * A Callback is basically a wrapper of a pointer-to-member-function.
 408:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 409:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * It is used for registering callbacks between widgets. For instance, a Button can be
 410:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * configured to call a member function when it is clicked.
 411:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 412:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The class is templated in order to provide the class type of the object in which the
 413:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * member function resides, and the argument types of the function to call.
 414:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 415:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The Callback class exists in four versions, for supporting member functions with 0, 1,
 416:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * 2 or 3 arguments. The compiler will infer which type to use automatically.
 417:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 418:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @tparam dest_type The type of the class in which the member function resides.
 419:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 420:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * @note The member function to call must return void. The function can have zero, one, two or
 421:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *       three arguments of any type.
 422:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  */
 423:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <class dest_type>
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** struct Callback<dest_type, void, void, void> : public GenericCallback<>
 5400              		.loc 14 424 8
 5401              		.cfi_startproc
 5402              		@ args = 0, pretend = 0, frame = 8
 5403              		@ frame_needed = 1, uses_anonymous_args = 0
 5404 0000 80B5     		push	{r7, lr}
 5405              	.LCFI471:
 5406              		.cfi_def_cfa_offset 8
 5407              		.cfi_offset 7, -8
 5408              		.cfi_offset 14, -4
 5409 0002 82B0     		sub	sp, sp, #8
 5410              	.LCFI472:
 5411              		.cfi_def_cfa_offset 16
 5412 0004 00AF     		add	r7, sp, #0
 5413              	.LCFI473:
 5414              		.cfi_def_cfa_register 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 132


 5415 0006 7860     		str	r0, [r7, #4]
 5416              	.LBB44:
 5417              		.loc 14 424 8
 5418 0008 054A     		ldr	r2, .L261
 5419 000a 7B68     		ldr	r3, [r7, #4]
 5420 000c 1A60     		str	r2, [r3]
 5421 000e 7B68     		ldr	r3, [r7, #4]
 5422 0010 1846     		mov	r0, r3
 5423 0012 FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvED2Ev
 5424              	.LBE44:
 5425 0016 7B68     		ldr	r3, [r7, #4]
 5426 0018 1846     		mov	r0, r3
 5427 001a 0837     		adds	r7, r7, #8
 5428              	.LCFI474:
 5429              		.cfi_def_cfa_offset 8
 5430 001c BD46     		mov	sp, r7
 5431              	.LCFI475:
 5432              		.cfi_def_cfa_register 13
 5433              		@ sp needed
 5434 001e 80BD     		pop	{r7, pc}
 5435              	.L262:
 5436              		.align	2
 5437              	.L261:
 5438 0020 08000000 		.word	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE+8
 5439              		.cfi_endproc
 5440              	.LFE1086:
 5442              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 5443              		.thumb_set _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev,_ZN8touchgfx8CallbackI23Fronten
 5444              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev,"axG",%progbits,_ZN8touchgf
 5445              		.align	1
 5446              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
 5447              		.syntax unified
 5448              		.thumb
 5449              		.thumb_func
 5450              		.fpu fpv4-sp-d16
 5452              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:
 5453              	.LFB1088:
 5454              		.loc 14 424 8
 5455              		.cfi_startproc
 5456              		@ args = 0, pretend = 0, frame = 8
 5457              		@ frame_needed = 1, uses_anonymous_args = 0
 5458 0000 80B5     		push	{r7, lr}
 5459              	.LCFI476:
 5460              		.cfi_def_cfa_offset 8
 5461              		.cfi_offset 7, -8
 5462              		.cfi_offset 14, -4
 5463 0002 82B0     		sub	sp, sp, #8
 5464              	.LCFI477:
 5465              		.cfi_def_cfa_offset 16
 5466 0004 00AF     		add	r7, sp, #0
 5467              	.LCFI478:
 5468              		.cfi_def_cfa_register 7
 5469 0006 7860     		str	r0, [r7, #4]
 5470              		.loc 14 424 8
 5471 0008 7868     		ldr	r0, [r7, #4]
 5472 000a FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 5473 000e 1021     		movs	r1, #16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 133


 5474 0010 7868     		ldr	r0, [r7, #4]
 5475 0012 FFF7FEFF 		bl	_ZdlPvj
 5476 0016 7B68     		ldr	r3, [r7, #4]
 5477 0018 1846     		mov	r0, r3
 5478 001a 0837     		adds	r7, r7, #8
 5479              	.LCFI479:
 5480              		.cfi_def_cfa_offset 8
 5481 001c BD46     		mov	sp, r7
 5482              	.LCFI480:
 5483              		.cfi_def_cfa_register 13
 5484              		@ sp needed
 5485 001e 80BD     		pop	{r7, pc}
 5486              		.cfi_endproc
 5487              	.LFE1088:
 5489              		.section	.text._ZN8touchgfx17LockFreeDMA_QueueD2Ev,"axG",%progbits,_ZN8touchgfx17LockFreeDMA_Queue
 5490              		.align	1
 5491              		.weak	_ZN8touchgfx17LockFreeDMA_QueueD2Ev
 5492              		.syntax unified
 5493              		.thumb
 5494              		.thumb_func
 5495              		.fpu fpv4-sp-d16
 5497              	_ZN8touchgfx17LockFreeDMA_QueueD2Ev:
 5498              	.LFB1110:
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** {
 5499              		.loc 4 87 7
 5500              		.cfi_startproc
 5501              		@ args = 0, pretend = 0, frame = 8
 5502              		@ frame_needed = 1, uses_anonymous_args = 0
 5503 0000 80B5     		push	{r7, lr}
 5504              	.LCFI481:
 5505              		.cfi_def_cfa_offset 8
 5506              		.cfi_offset 7, -8
 5507              		.cfi_offset 14, -4
 5508 0002 82B0     		sub	sp, sp, #8
 5509              	.LCFI482:
 5510              		.cfi_def_cfa_offset 16
 5511 0004 00AF     		add	r7, sp, #0
 5512              	.LCFI483:
 5513              		.cfi_def_cfa_register 7
 5514 0006 7860     		str	r0, [r7, #4]
 5515              	.LBB45:
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** {
 5516              		.loc 4 87 7
 5517 0008 054A     		ldr	r2, .L267
 5518 000a 7B68     		ldr	r3, [r7, #4]
 5519 000c 1A60     		str	r2, [r3]
 5520 000e 7B68     		ldr	r3, [r7, #4]
 5521 0010 1846     		mov	r0, r3
 5522 0012 FFF7FEFF 		bl	_ZN8touchgfx9DMA_QueueD2Ev
 5523              	.LBE45:
 5524 0016 7B68     		ldr	r3, [r7, #4]
 5525 0018 1846     		mov	r0, r3
 5526 001a 0837     		adds	r7, r7, #8
 5527              	.LCFI484:
 5528              		.cfi_def_cfa_offset 8
 5529 001c BD46     		mov	sp, r7
 5530              	.LCFI485:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 134


 5531              		.cfi_def_cfa_register 13
 5532              		@ sp needed
 5533 001e 80BD     		pop	{r7, pc}
 5534              	.L268:
 5535              		.align	2
 5536              	.L267:
 5537 0020 08000000 		.word	_ZTVN8touchgfx17LockFreeDMA_QueueE+8
 5538              		.cfi_endproc
 5539              	.LFE1110:
 5541              		.weak	_ZN8touchgfx17LockFreeDMA_QueueD1Ev
 5542              		.thumb_set _ZN8touchgfx17LockFreeDMA_QueueD1Ev,_ZN8touchgfx17LockFreeDMA_QueueD2Ev
 5543              		.section	.text._ZN8touchgfx17LockFreeDMA_QueueD0Ev,"axG",%progbits,_ZN8touchgfx17LockFreeDMA_Queue
 5544              		.align	1
 5545              		.weak	_ZN8touchgfx17LockFreeDMA_QueueD0Ev
 5546              		.syntax unified
 5547              		.thumb
 5548              		.thumb_func
 5549              		.fpu fpv4-sp-d16
 5551              	_ZN8touchgfx17LockFreeDMA_QueueD0Ev:
 5552              	.LFB1112:
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** {
 5553              		.loc 4 87 7
 5554              		.cfi_startproc
 5555              		@ args = 0, pretend = 0, frame = 8
 5556              		@ frame_needed = 1, uses_anonymous_args = 0
 5557 0000 80B5     		push	{r7, lr}
 5558              	.LCFI486:
 5559              		.cfi_def_cfa_offset 8
 5560              		.cfi_offset 7, -8
 5561              		.cfi_offset 14, -4
 5562 0002 82B0     		sub	sp, sp, #8
 5563              	.LCFI487:
 5564              		.cfi_def_cfa_offset 16
 5565 0004 00AF     		add	r7, sp, #0
 5566              	.LCFI488:
 5567              		.cfi_def_cfa_register 7
 5568 0006 7860     		str	r0, [r7, #4]
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp **** {
 5569              		.loc 4 87 7
 5570 0008 7868     		ldr	r0, [r7, #4]
 5571 000a FFF7FEFF 		bl	_ZN8touchgfx17LockFreeDMA_QueueD1Ev
 5572 000e 1421     		movs	r1, #20
 5573 0010 7868     		ldr	r0, [r7, #4]
 5574 0012 FFF7FEFF 		bl	_ZdlPvj
 5575 0016 7B68     		ldr	r3, [r7, #4]
 5576 0018 1846     		mov	r0, r3
 5577 001a 0837     		adds	r7, r7, #8
 5578              	.LCFI489:
 5579              		.cfi_def_cfa_offset 8
 5580 001c BD46     		mov	sp, r7
 5581              	.LCFI490:
 5582              		.cfi_def_cfa_register 13
 5583              		@ sp needed
 5584 001e 80BD     		pop	{r7, pc}
 5585              		.cfi_endproc
 5586              	.LFE1112:
 5588              		.section	.text._ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 135


 5589              		.align	1
 5590              		.weak	_ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE8capac
 5591              		.syntax unified
 5592              		.thumb
 5593              		.thumb_func
 5594              		.fpu fpv4-sp-d16
 5596              	_ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE8capacityEv:
 5597              	.LFB1113:
  43:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** {
  44:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** public:
  45:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     /** Provides a generic public type containing the list of supported types. */
  46:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     typedef ListOfTypes SupportedTypesList;
  47:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
  48:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     /**
  49:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****      * Compile-time generated constants specifying the "element" or "slot" size used by this
  50:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****      * partition.
  51:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****      */
  52:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     enum
  53:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
  54:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****         INTS_PR_ELEMENT = (sizeof(typename meta::select_type_maxsize<SupportedTypesList>::type) + s
  55:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****         SIZE_OF_ELEMENT = INTS_PR_ELEMENT * sizeof(int)
  56:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     };
  57:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
  58:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     virtual uint16_t capacity() const
 5598              		.loc 20 58 22
 5599              		.cfi_startproc
 5600              		@ args = 0, pretend = 0, frame = 8
 5601              		@ frame_needed = 1, uses_anonymous_args = 0
 5602              		@ link register save eliminated.
 5603 0000 80B4     		push	{r7}
 5604              	.LCFI491:
 5605              		.cfi_def_cfa_offset 4
 5606              		.cfi_offset 7, -4
 5607 0002 83B0     		sub	sp, sp, #12
 5608              	.LCFI492:
 5609              		.cfi_def_cfa_offset 16
 5610 0004 00AF     		add	r7, sp, #0
 5611              	.LCFI493:
 5612              		.cfi_def_cfa_register 7
 5613 0006 7860     		str	r0, [r7, #4]
  59:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
  60:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****         return NUMBER_OF_ELEMENTS;
 5614              		.loc 20 60 16
 5615 0008 0123     		movs	r3, #1
  61:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5616              		.loc 20 61 5
 5617 000a 1846     		mov	r0, r3
 5618 000c 0C37     		adds	r7, r7, #12
 5619              	.LCFI494:
 5620              		.cfi_def_cfa_offset 4
 5621 000e BD46     		mov	sp, r7
 5622              	.LCFI495:
 5623              		.cfi_def_cfa_register 13
 5624              		@ sp needed
 5625 0010 5DF8047B 		ldr	r7, [sp], #4
 5626              	.LCFI496:
 5627              		.cfi_restore 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 136


 5628              		.cfi_def_cfa_offset 0
 5629 0014 7047     		bx	lr
 5630              		.cfi_endproc
 5631              	.LFE1113:
 5633              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1
 5634              		.align	1
 5635              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE12eleme
 5636              		.syntax unified
 5637              		.thumb
 5638              		.thumb_func
 5639              		.fpu fpv4-sp-d16
 5641              	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE12element_size
 5642              	.LFB1114:
  62:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
  63:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     virtual uint32_t element_size()
 5643              		.loc 20 63 22
 5644              		.cfi_startproc
 5645              		@ args = 0, pretend = 0, frame = 8
 5646              		@ frame_needed = 1, uses_anonymous_args = 0
 5647              		@ link register save eliminated.
 5648 0000 80B4     		push	{r7}
 5649              	.LCFI497:
 5650              		.cfi_def_cfa_offset 4
 5651              		.cfi_offset 7, -4
 5652 0002 83B0     		sub	sp, sp, #12
 5653              	.LCFI498:
 5654              		.cfi_def_cfa_offset 16
 5655 0004 00AF     		add	r7, sp, #0
 5656              	.LCFI499:
 5657              		.cfi_def_cfa_register 7
 5658 0006 7860     		str	r0, [r7, #4]
  64:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
  65:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****         return sizeof(stBlocks[0]);
 5659              		.loc 20 65 34
 5660 0008 0C23     		movs	r3, #12
  66:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5661              		.loc 20 66 5
 5662 000a 1846     		mov	r0, r3
 5663 000c 0C37     		adds	r7, r7, #12
 5664              	.LCFI500:
 5665              		.cfi_def_cfa_offset 4
 5666 000e BD46     		mov	sp, r7
 5667              	.LCFI501:
 5668              		.cfi_def_cfa_register 13
 5669              		@ sp needed
 5670 0010 5DF8047B 		ldr	r7, [sp], #4
 5671              	.LCFI502:
 5672              		.cfi_restore 7
 5673              		.cfi_def_cfa_offset 0
 5674 0014 7047     		bx	lr
 5675              		.cfi_endproc
 5676              	.LFE1114:
 5678              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1
 5679              		.align	1
 5680              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elemen
 5681              		.syntax unified
 5682              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 137


 5683              		.thumb_func
 5684              		.fpu fpv4-sp-d16
 5686              	_ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elementEt:
 5687              	.LFB1115:
  67:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
  68:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** protected:
  69:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     virtual void* element(uint16_t index)
 5688              		.loc 20 69 19
 5689              		.cfi_startproc
 5690              		@ args = 0, pretend = 0, frame = 8
 5691              		@ frame_needed = 1, uses_anonymous_args = 0
 5692              		@ link register save eliminated.
 5693 0000 80B4     		push	{r7}
 5694              	.LCFI503:
 5695              		.cfi_def_cfa_offset 4
 5696              		.cfi_offset 7, -4
 5697 0002 83B0     		sub	sp, sp, #12
 5698              	.LCFI504:
 5699              		.cfi_def_cfa_offset 16
 5700 0004 00AF     		add	r7, sp, #0
 5701              	.LCFI505:
 5702              		.cfi_def_cfa_register 7
 5703 0006 7860     		str	r0, [r7, #4]
 5704 0008 0B46     		mov	r3, r1
 5705 000a 7B80     		strh	r3, [r7, #2]	@ movhi
  70:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
  71:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****         return &stBlocks[index];
 5706              		.loc 20 71 26
 5707 000c 7A88     		ldrh	r2, [r7, #2]
 5708              		.loc 20 71 31
 5709 000e 1346     		mov	r3, r2
 5710 0010 5B00     		lsls	r3, r3, #1
 5711 0012 1344     		add	r3, r3, r2
 5712 0014 9B00     		lsls	r3, r3, #2
 5713 0016 0833     		adds	r3, r3, #8
 5714 0018 7A68     		ldr	r2, [r7, #4]
 5715 001a 1344     		add	r3, r3, r2
  72:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5716              		.loc 20 72 5
 5717 001c 1846     		mov	r0, r3
 5718 001e 0C37     		adds	r7, r7, #12
 5719              	.LCFI506:
 5720              		.cfi_def_cfa_offset 4
 5721 0020 BD46     		mov	sp, r7
 5722              	.LCFI507:
 5723              		.cfi_def_cfa_register 13
 5724              		@ sp needed
 5725 0022 5DF8047B 		ldr	r7, [sp], #4
 5726              	.LCFI508:
 5727              		.cfi_restore 7
 5728              		.cfi_def_cfa_offset 0
 5729 0026 7047     		bx	lr
 5730              		.cfi_endproc
 5731              	.LFE1115:
 5733              		.section	.text._ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt
 5734              		.align	1
 5735              		.weak	_ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7eleme
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 138


 5736              		.syntax unified
 5737              		.thumb
 5738              		.thumb_func
 5739              		.fpu fpv4-sp-d16
 5741              	_ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elementEt:
 5742              	.LFB1116:
  73:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
  74:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     virtual const void* element(uint16_t index) const
 5743              		.loc 20 74 25
 5744              		.cfi_startproc
 5745              		@ args = 0, pretend = 0, frame = 8
 5746              		@ frame_needed = 1, uses_anonymous_args = 0
 5747              		@ link register save eliminated.
 5748 0000 80B4     		push	{r7}
 5749              	.LCFI509:
 5750              		.cfi_def_cfa_offset 4
 5751              		.cfi_offset 7, -4
 5752 0002 83B0     		sub	sp, sp, #12
 5753              	.LCFI510:
 5754              		.cfi_def_cfa_offset 16
 5755 0004 00AF     		add	r7, sp, #0
 5756              	.LCFI511:
 5757              		.cfi_def_cfa_register 7
 5758 0006 7860     		str	r0, [r7, #4]
 5759 0008 0B46     		mov	r3, r1
 5760 000a 7B80     		strh	r3, [r7, #2]	@ movhi
  75:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
  76:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****         return &stBlocks[index];
 5761              		.loc 20 76 26
 5762 000c 7A88     		ldrh	r2, [r7, #2]
 5763              		.loc 20 76 31
 5764 000e 1346     		mov	r3, r2
 5765 0010 5B00     		lsls	r3, r3, #1
 5766 0012 1344     		add	r3, r3, r2
 5767 0014 9B00     		lsls	r3, r3, #2
 5768 0016 0833     		adds	r3, r3, #8
 5769 0018 7A68     		ldr	r2, [r7, #4]
 5770 001a 1344     		add	r3, r3, r2
  77:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5771              		.loc 20 77 5
 5772 001c 1846     		mov	r0, r3
 5773 001e 0C37     		adds	r7, r7, #12
 5774              	.LCFI512:
 5775              		.cfi_def_cfa_offset 4
 5776 0020 BD46     		mov	sp, r7
 5777              	.LCFI513:
 5778              		.cfi_def_cfa_register 13
 5779              		@ sp needed
 5780 0022 5DF8047B 		ldr	r7, [sp], #4
 5781              	.LCFI514:
 5782              		.cfi_restore 7
 5783              		.cfi_def_cfa_offset 0
 5784 0026 7047     		bx	lr
 5785              		.cfi_endproc
 5786              	.LFE1116:
 5788              		.section	.text._ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE8ca
 5789              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 139


 5790              		.weak	_ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE8capacityEv
 5791              		.syntax unified
 5792              		.thumb
 5793              		.thumb_func
 5794              		.fpu fpv4-sp-d16
 5796              	_ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE8capacityEv:
 5797              	.LFB1117:
  58:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
 5798              		.loc 20 58 22
 5799              		.cfi_startproc
 5800              		@ args = 0, pretend = 0, frame = 8
 5801              		@ frame_needed = 1, uses_anonymous_args = 0
 5802              		@ link register save eliminated.
 5803 0000 80B4     		push	{r7}
 5804              	.LCFI515:
 5805              		.cfi_def_cfa_offset 4
 5806              		.cfi_offset 7, -4
 5807 0002 83B0     		sub	sp, sp, #12
 5808              	.LCFI516:
 5809              		.cfi_def_cfa_offset 16
 5810 0004 00AF     		add	r7, sp, #0
 5811              	.LCFI517:
 5812              		.cfi_def_cfa_register 7
 5813 0006 7860     		str	r0, [r7, #4]
  60:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5814              		.loc 20 60 16
 5815 0008 0123     		movs	r3, #1
  61:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
 5816              		.loc 20 61 5
 5817 000a 1846     		mov	r0, r3
 5818 000c 0C37     		adds	r7, r7, #12
 5819              	.LCFI518:
 5820              		.cfi_def_cfa_offset 4
 5821 000e BD46     		mov	sp, r7
 5822              	.LCFI519:
 5823              		.cfi_def_cfa_register 13
 5824              		@ sp needed
 5825 0010 5DF8047B 		ldr	r7, [sp], #4
 5826              	.LCFI520:
 5827              		.cfi_restore 7
 5828              		.cfi_def_cfa_offset 0
 5829 0014 7047     		bx	lr
 5830              		.cfi_endproc
 5831              	.LFE1117:
 5833              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE12el
 5834              		.align	1
 5835              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE12element_siz
 5836              		.syntax unified
 5837              		.thumb
 5838              		.thumb_func
 5839              		.fpu fpv4-sp-d16
 5841              	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE12element_sizeEv:
 5842              	.LFB1118:
  63:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
 5843              		.loc 20 63 22
 5844              		.cfi_startproc
 5845              		@ args = 0, pretend = 0, frame = 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 140


 5846              		@ frame_needed = 1, uses_anonymous_args = 0
 5847              		@ link register save eliminated.
 5848 0000 80B4     		push	{r7}
 5849              	.LCFI521:
 5850              		.cfi_def_cfa_offset 4
 5851              		.cfi_offset 7, -4
 5852 0002 83B0     		sub	sp, sp, #12
 5853              	.LCFI522:
 5854              		.cfi_def_cfa_offset 16
 5855 0004 00AF     		add	r7, sp, #0
 5856              	.LCFI523:
 5857              		.cfi_def_cfa_register 7
 5858 0006 7860     		str	r0, [r7, #4]
  65:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5859              		.loc 20 65 34
 5860 0008 41F24C43 		movw	r3, #5196
  66:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
 5861              		.loc 20 66 5
 5862 000c 1846     		mov	r0, r3
 5863 000e 0C37     		adds	r7, r7, #12
 5864              	.LCFI524:
 5865              		.cfi_def_cfa_offset 4
 5866 0010 BD46     		mov	sp, r7
 5867              	.LCFI525:
 5868              		.cfi_def_cfa_register 13
 5869              		@ sp needed
 5870 0012 5DF8047B 		ldr	r7, [sp], #4
 5871              	.LCFI526:
 5872              		.cfi_restore 7
 5873              		.cfi_def_cfa_offset 0
 5874 0016 7047     		bx	lr
 5875              		.cfi_endproc
 5876              	.LFE1118:
 5878              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7ele
 5879              		.align	1
 5880              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt
 5881              		.syntax unified
 5882              		.thumb
 5883              		.thumb_func
 5884              		.fpu fpv4-sp-d16
 5886              	_ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt:
 5887              	.LFB1119:
  69:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
 5888              		.loc 20 69 19
 5889              		.cfi_startproc
 5890              		@ args = 0, pretend = 0, frame = 8
 5891              		@ frame_needed = 1, uses_anonymous_args = 0
 5892              		@ link register save eliminated.
 5893 0000 80B4     		push	{r7}
 5894              	.LCFI527:
 5895              		.cfi_def_cfa_offset 4
 5896              		.cfi_offset 7, -4
 5897 0002 83B0     		sub	sp, sp, #12
 5898              	.LCFI528:
 5899              		.cfi_def_cfa_offset 16
 5900 0004 00AF     		add	r7, sp, #0
 5901              	.LCFI529:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 141


 5902              		.cfi_def_cfa_register 7
 5903 0006 7860     		str	r0, [r7, #4]
 5904 0008 0B46     		mov	r3, r1
 5905 000a 7B80     		strh	r3, [r7, #2]	@ movhi
  71:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5906              		.loc 20 71 26
 5907 000c 7B88     		ldrh	r3, [r7, #2]
  71:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5908              		.loc 20 71 31
 5909 000e 41F24C42 		movw	r2, #5196
 5910 0012 02FB03F3 		mul	r3, r2, r3
 5911 0016 0833     		adds	r3, r3, #8
 5912 0018 7A68     		ldr	r2, [r7, #4]
 5913 001a 1344     		add	r3, r3, r2
  72:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
 5914              		.loc 20 72 5
 5915 001c 1846     		mov	r0, r3
 5916 001e 0C37     		adds	r7, r7, #12
 5917              	.LCFI530:
 5918              		.cfi_def_cfa_offset 4
 5919 0020 BD46     		mov	sp, r7
 5920              	.LCFI531:
 5921              		.cfi_def_cfa_register 13
 5922              		@ sp needed
 5923 0022 5DF8047B 		ldr	r7, [sp], #4
 5924              	.LCFI532:
 5925              		.cfi_restore 7
 5926              		.cfi_def_cfa_offset 0
 5927 0026 7047     		bx	lr
 5928              		.cfi_endproc
 5929              	.LFE1119:
 5931              		.section	.text._ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7el
 5932              		.align	1
 5933              		.weak	_ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt
 5934              		.syntax unified
 5935              		.thumb
 5936              		.thumb_func
 5937              		.fpu fpv4-sp-d16
 5939              	_ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt:
 5940              	.LFB1120:
  74:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
 5941              		.loc 20 74 25
 5942              		.cfi_startproc
 5943              		@ args = 0, pretend = 0, frame = 8
 5944              		@ frame_needed = 1, uses_anonymous_args = 0
 5945              		@ link register save eliminated.
 5946 0000 80B4     		push	{r7}
 5947              	.LCFI533:
 5948              		.cfi_def_cfa_offset 4
 5949              		.cfi_offset 7, -4
 5950 0002 83B0     		sub	sp, sp, #12
 5951              	.LCFI534:
 5952              		.cfi_def_cfa_offset 16
 5953 0004 00AF     		add	r7, sp, #0
 5954              	.LCFI535:
 5955              		.cfi_def_cfa_register 7
 5956 0006 7860     		str	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 142


 5957 0008 0B46     		mov	r3, r1
 5958 000a 7B80     		strh	r3, [r7, #2]	@ movhi
  76:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5959              		.loc 20 76 26
 5960 000c 7B88     		ldrh	r3, [r7, #2]
  76:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 5961              		.loc 20 76 31
 5962 000e 41F24C42 		movw	r2, #5196
 5963 0012 02FB03F3 		mul	r3, r2, r3
 5964 0016 0833     		adds	r3, r3, #8
 5965 0018 7A68     		ldr	r2, [r7, #4]
 5966 001a 1344     		add	r3, r3, r2
 5967              		.loc 20 77 5
 5968 001c 1846     		mov	r0, r3
 5969 001e 0C37     		adds	r7, r7, #12
 5970              	.LCFI536:
 5971              		.cfi_def_cfa_offset 4
 5972 0020 BD46     		mov	sp, r7
 5973              	.LCFI537:
 5974              		.cfi_def_cfa_register 13
 5975              		@ sp needed
 5976 0022 5DF8047B 		ldr	r7, [sp], #4
 5977              	.LCFI538:
 5978              		.cfi_restore 7
 5979              		.cfi_def_cfa_offset 0
 5980 0026 7047     		bx	lr
 5981              		.cfi_endproc
 5982              	.LFE1120:
 5984              		.section	.text._ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1
 5985              		.align	1
 5986              		.weak	_ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE8capaci
 5987              		.syntax unified
 5988              		.thumb
 5989              		.thumb_func
 5990              		.fpu fpv4-sp-d16
 5992              	_ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE8capacityEv:
 5993              	.LFB1121:
  58:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
 5994              		.loc 20 58 22
 5995              		.cfi_startproc
 5996              		@ args = 0, pretend = 0, frame = 8
 5997              		@ frame_needed = 1, uses_anonymous_args = 0
 5998              		@ link register save eliminated.
 5999 0000 80B4     		push	{r7}
 6000              	.LCFI539:
 6001              		.cfi_def_cfa_offset 4
 6002              		.cfi_offset 7, -4
 6003 0002 83B0     		sub	sp, sp, #12
 6004              	.LCFI540:
 6005              		.cfi_def_cfa_offset 16
 6006 0004 00AF     		add	r7, sp, #0
 6007              	.LCFI541:
 6008              		.cfi_def_cfa_register 7
 6009 0006 7860     		str	r0, [r7, #4]
  60:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 6010              		.loc 20 60 16
 6011 0008 0123     		movs	r3, #1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 143


  61:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
 6012              		.loc 20 61 5
 6013 000a 1846     		mov	r0, r3
 6014 000c 0C37     		adds	r7, r7, #12
 6015              	.LCFI542:
 6016              		.cfi_def_cfa_offset 4
 6017 000e BD46     		mov	sp, r7
 6018              	.LCFI543:
 6019              		.cfi_def_cfa_register 13
 6020              		@ sp needed
 6021 0010 5DF8047B 		ldr	r7, [sp], #4
 6022              	.LCFI544:
 6023              		.cfi_restore 7
 6024              		.cfi_def_cfa_offset 0
 6025 0014 7047     		bx	lr
 6026              		.cfi_endproc
 6027              	.LFE1121:
 6029              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1E
 6030              		.align	1
 6031              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE12elemen
 6032              		.syntax unified
 6033              		.thumb
 6034              		.thumb_func
 6035              		.fpu fpv4-sp-d16
 6037              	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE12element_sizeE
 6038              	.LFB1122:
  63:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
 6039              		.loc 20 63 22
 6040              		.cfi_startproc
 6041              		@ args = 0, pretend = 0, frame = 8
 6042              		@ frame_needed = 1, uses_anonymous_args = 0
 6043              		@ link register save eliminated.
 6044 0000 80B4     		push	{r7}
 6045              	.LCFI545:
 6046              		.cfi_def_cfa_offset 4
 6047              		.cfi_offset 7, -4
 6048 0002 83B0     		sub	sp, sp, #12
 6049              	.LCFI546:
 6050              		.cfi_def_cfa_offset 16
 6051 0004 00AF     		add	r7, sp, #0
 6052              	.LCFI547:
 6053              		.cfi_def_cfa_register 7
 6054 0006 7860     		str	r0, [r7, #4]
  65:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 6055              		.loc 20 65 34
 6056 0008 1023     		movs	r3, #16
  66:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
 6057              		.loc 20 66 5
 6058 000a 1846     		mov	r0, r3
 6059 000c 0C37     		adds	r7, r7, #12
 6060              	.LCFI548:
 6061              		.cfi_def_cfa_offset 4
 6062 000e BD46     		mov	sp, r7
 6063              	.LCFI549:
 6064              		.cfi_def_cfa_register 13
 6065              		@ sp needed
 6066 0010 5DF8047B 		ldr	r7, [sp], #4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 144


 6067              	.LCFI550:
 6068              		.cfi_restore 7
 6069              		.cfi_def_cfa_offset 0
 6070 0014 7047     		bx	lr
 6071              		.cfi_endproc
 6072              	.LFE1122:
 6074              		.section	.text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1E
 6075              		.align	1
 6076              		.weak	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7element
 6077              		.syntax unified
 6078              		.thumb
 6079              		.thumb_func
 6080              		.fpu fpv4-sp-d16
 6082              	_ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elementEt:
 6083              	.LFB1123:
  69:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
 6084              		.loc 20 69 19
 6085              		.cfi_startproc
 6086              		@ args = 0, pretend = 0, frame = 8
 6087              		@ frame_needed = 1, uses_anonymous_args = 0
 6088              		@ link register save eliminated.
 6089 0000 80B4     		push	{r7}
 6090              	.LCFI551:
 6091              		.cfi_def_cfa_offset 4
 6092              		.cfi_offset 7, -4
 6093 0002 83B0     		sub	sp, sp, #12
 6094              	.LCFI552:
 6095              		.cfi_def_cfa_offset 16
 6096 0004 00AF     		add	r7, sp, #0
 6097              	.LCFI553:
 6098              		.cfi_def_cfa_register 7
 6099 0006 7860     		str	r0, [r7, #4]
 6100 0008 0B46     		mov	r3, r1
 6101 000a 7B80     		strh	r3, [r7, #2]	@ movhi
  71:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 6102              		.loc 20 71 26
 6103 000c 7B88     		ldrh	r3, [r7, #2]
  71:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 6104              		.loc 20 71 31
 6105 000e 1B01     		lsls	r3, r3, #4
 6106 0010 0833     		adds	r3, r3, #8
 6107 0012 7A68     		ldr	r2, [r7, #4]
 6108 0014 1344     		add	r3, r3, r2
  72:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp **** 
 6109              		.loc 20 72 5
 6110 0016 1846     		mov	r0, r3
 6111 0018 0C37     		adds	r7, r7, #12
 6112              	.LCFI554:
 6113              		.cfi_def_cfa_offset 4
 6114 001a BD46     		mov	sp, r7
 6115              	.LCFI555:
 6116              		.cfi_def_cfa_register 13
 6117              		@ sp needed
 6118 001c 5DF8047B 		ldr	r7, [sp], #4
 6119              	.LCFI556:
 6120              		.cfi_restore 7
 6121              		.cfi_def_cfa_offset 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 145


 6122 0020 7047     		bx	lr
 6123              		.cfi_endproc
 6124              	.LFE1123:
 6126              		.section	.text._ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1
 6127              		.align	1
 6128              		.weak	_ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elemen
 6129              		.syntax unified
 6130              		.thumb
 6131              		.thumb_func
 6132              		.fpu fpv4-sp-d16
 6134              	_ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elementEt:
 6135              	.LFB1124:
  74:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     {
 6136              		.loc 20 74 25
 6137              		.cfi_startproc
 6138              		@ args = 0, pretend = 0, frame = 8
 6139              		@ frame_needed = 1, uses_anonymous_args = 0
 6140              		@ link register save eliminated.
 6141 0000 80B4     		push	{r7}
 6142              	.LCFI557:
 6143              		.cfi_def_cfa_offset 4
 6144              		.cfi_offset 7, -4
 6145 0002 83B0     		sub	sp, sp, #12
 6146              	.LCFI558:
 6147              		.cfi_def_cfa_offset 16
 6148 0004 00AF     		add	r7, sp, #0
 6149              	.LCFI559:
 6150              		.cfi_def_cfa_register 7
 6151 0006 7860     		str	r0, [r7, #4]
 6152 0008 0B46     		mov	r3, r1
 6153 000a 7B80     		strh	r3, [r7, #2]	@ movhi
  76:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 6154              		.loc 20 76 26
 6155 000c 7B88     		ldrh	r3, [r7, #2]
  76:Middlewares/ST/touchgfx/framework/include/common/Partition.hpp ****     }
 6156              		.loc 20 76 31
 6157 000e 1B01     		lsls	r3, r3, #4
 6158 0010 0833     		adds	r3, r3, #8
 6159 0012 7A68     		ldr	r2, [r7, #4]
 6160 0014 1344     		add	r3, r3, r2
 6161              		.loc 20 77 5
 6162 0016 1846     		mov	r0, r3
 6163 0018 0C37     		adds	r7, r7, #12
 6164              	.LCFI560:
 6165              		.cfi_def_cfa_offset 4
 6166 001a BD46     		mov	sp, r7
 6167              	.LCFI561:
 6168              		.cfi_def_cfa_register 13
 6169              		@ sp needed
 6170 001c 5DF8047B 		ldr	r7, [sp], #4
 6171              	.LCFI562:
 6172              		.cfi_restore 7
 6173              		.cfi_def_cfa_offset 0
 6174 0020 7047     		bx	lr
 6175              		.cfi_endproc
 6176              	.LFE1124:
 6178              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv,"axG",%progbits,_ZN8t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 146


 6179              		.align	1
 6180              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
 6181              		.syntax unified
 6182              		.thumb
 6183              		.thumb_func
 6184              		.fpu fpv4-sp-d16
 6186              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:
 6187              	.LFB1125:
 425:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 426:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Initializes a new instance of the Callback class. */
 427:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback()
 428:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(0), pmemfun_0(0)
 429:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 430:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 431:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 432:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 433:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Initializes a Callback with an object and a pointer to the member function in that
 434:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * object to call.
 435:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 436:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pobject   Pointer to the object on which the function should be called.
 437:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pmemfun_0 Address of member function. This is the version where function takes
 438:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *                       zero arguments.
 439:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 440:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback(dest_type* pobject, void (dest_type::*pmemfun_0)())
 441:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(pobject), pmemfun_0(pmemfun_0)
 442:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 443:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 444:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 445:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 446:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
 447:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
 448:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 449:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute()
 6188              		.loc 14 449 18
 6189              		.cfi_startproc
 6190              		@ args = 0, pretend = 0, frame = 8
 6191              		@ frame_needed = 1, uses_anonymous_args = 0
 6192 0000 80B5     		push	{r7, lr}
 6193              	.LCFI563:
 6194              		.cfi_def_cfa_offset 8
 6195              		.cfi_offset 7, -8
 6196              		.cfi_offset 14, -4
 6197 0002 82B0     		sub	sp, sp, #8
 6198              	.LCFI564:
 6199              		.cfi_def_cfa_offset 16
 6200 0004 00AF     		add	r7, sp, #0
 6201              	.LCFI565:
 6202              		.cfi_def_cfa_register 7
 6203 0006 7860     		str	r0, [r7, #4]
 450:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 451:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         (pobject->*pmemfun_0)();
 6204              		.loc 14 451 10
 6205 0008 7B68     		ldr	r3, [r7, #4]
 6206 000a 5B68     		ldr	r3, [r3, #4]
 6207              		.loc 14 451 30
 6208 000c 7A68     		ldr	r2, [r7, #4]
 6209 000e D268     		ldr	r2, [r2, #12]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 147


 6210 0010 5210     		asrs	r2, r2, #1
 6211 0012 9918     		adds	r1, r3, r2
 6212 0014 7B68     		ldr	r3, [r7, #4]
 6213 0016 DB68     		ldr	r3, [r3, #12]
 6214 0018 03F00103 		and	r3, r3, #1
 6215 001c 002B     		cmp	r3, #0
 6216 001e 02D1     		bne	.L296
 6217              		.loc 14 451 30 is_stmt 0 discriminator 1
 6218 0020 7B68     		ldr	r3, [r7, #4]
 6219 0022 9B68     		ldr	r3, [r3, #8]
 6220 0024 0AE0     		b	.L297
 6221              	.L296:
 6222              		.loc 14 451 10 is_stmt 1 discriminator 2
 6223 0026 7B68     		ldr	r3, [r7, #4]
 6224 0028 5B68     		ldr	r3, [r3, #4]
 6225              		.loc 14 451 30 discriminator 2
 6226 002a 7A68     		ldr	r2, [r7, #4]
 6227 002c D268     		ldr	r2, [r2, #12]
 6228 002e 5210     		asrs	r2, r2, #1
 6229 0030 1344     		add	r3, r3, r2
 6230 0032 1B68     		ldr	r3, [r3]
 6231 0034 7A68     		ldr	r2, [r7, #4]
 6232 0036 9268     		ldr	r2, [r2, #8]
 6233 0038 1344     		add	r3, r3, r2
 6234 003a 1B68     		ldr	r3, [r3]
 6235              	.L297:
 6236              		.loc 14 451 30 is_stmt 0 discriminator 4
 6237 003c 0846     		mov	r0, r1
 6238 003e 9847     		blx	r3
 6239              	.LVL2:
 452:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 6240              		.loc 14 452 5 is_stmt 1 discriminator 4
 6241 0040 00BF     		nop
 6242 0042 0837     		adds	r7, r7, #8
 6243              	.LCFI566:
 6244              		.cfi_def_cfa_offset 8
 6245 0044 BD46     		mov	sp, r7
 6246              	.LCFI567:
 6247              		.cfi_def_cfa_register 13
 6248              		@ sp needed
 6249 0046 80BD     		pop	{r7, pc}
 6250              		.cfi_endproc
 6251              	.LFE1125:
 6253              		.section	.text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv,"axG",%progbits,_ZNK
 6254              		.align	1
 6255              		.weak	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
 6256              		.syntax unified
 6257              		.thumb
 6258              		.thumb_func
 6259              		.fpu fpv4-sp-d16
 6261              	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:
 6262              	.LFB1126:
 453:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 454:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 455:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 456:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 457:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 148


 458:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 459:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const
 6263              		.loc 14 459 18
 6264              		.cfi_startproc
 6265              		@ args = 0, pretend = 0, frame = 8
 6266              		@ frame_needed = 1, uses_anonymous_args = 0
 6267              		@ link register save eliminated.
 6268 0000 80B4     		push	{r7}
 6269              	.LCFI568:
 6270              		.cfi_def_cfa_offset 4
 6271              		.cfi_offset 7, -4
 6272 0002 83B0     		sub	sp, sp, #12
 6273              	.LCFI569:
 6274              		.cfi_def_cfa_offset 16
 6275 0004 00AF     		add	r7, sp, #0
 6276              	.LCFI570:
 6277              		.cfi_def_cfa_register 7
 6278 0006 7860     		str	r0, [r7, #4]
 460:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 461:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         return (pobject != 0) && (pmemfun_0 != 0);
 6279              		.loc 14 461 17
 6280 0008 7B68     		ldr	r3, [r7, #4]
 6281 000a 5B68     		ldr	r3, [r3, #4]
 6282              		.loc 14 461 31
 6283 000c 002B     		cmp	r3, #0
 6284 000e 10D0     		beq	.L299
 6285              		.loc 14 461 45 discriminator 1
 6286 0010 7B68     		ldr	r3, [r7, #4]
 6287 0012 9B68     		ldr	r3, [r3, #8]
 6288 0014 002B     		cmp	r3, #0
 6289 0016 07D1     		bne	.L300
 6290              		.loc 14 461 45 is_stmt 0 discriminator 3
 6291 0018 7B68     		ldr	r3, [r7, #4]
 6292 001a DB68     		ldr	r3, [r3, #12]
 6293 001c 03F00103 		and	r3, r3, #1
 6294 0020 002B     		cmp	r3, #0
 6295 0022 01D1     		bne	.L300
 6296              		.loc 14 461 45 discriminator 5
 6297 0024 0123     		movs	r3, #1
 6298 0026 00E0     		b	.L301
 6299              	.L300:
 6300              		.loc 14 461 45 discriminator 6
 6301 0028 0023     		movs	r3, #0
 6302              	.L301:
 6303              		.loc 14 461 31 is_stmt 1 discriminator 8
 6304 002a 012B     		cmp	r3, #1
 6305 002c 01D0     		beq	.L299
 6306              		.loc 14 461 31 is_stmt 0 discriminator 9
 6307 002e 0123     		movs	r3, #1
 6308 0030 00E0     		b	.L302
 6309              	.L299:
 6310              		.loc 14 461 31 discriminator 10
 6311 0032 0023     		movs	r3, #0
 6312              	.L302:
 462:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 6313              		.loc 14 462 5 is_stmt 1 discriminator 12
 6314 0034 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 149


 6315 0036 0C37     		adds	r7, r7, #12
 6316              	.LCFI571:
 6317              		.cfi_def_cfa_offset 4
 6318 0038 BD46     		mov	sp, r7
 6319              	.LCFI572:
 6320              		.cfi_def_cfa_register 13
 6321              		@ sp needed
 6322 003a 5DF8047B 		ldr	r7, [sp], #4
 6323              	.LCFI573:
 6324              		.cfi_restore 7
 6325              		.cfi_def_cfa_offset 0
 6326 003e 7047     		bx	lr
 6327              		.cfi_endproc
 6328              	.LFE1126:
 6330              		.section	.text._GLOBAL__sub_I_touchgfx_init,"ax",%progbits
 6331              		.align	1
 6332              		.syntax unified
 6333              		.thumb
 6334              		.thumb_func
 6335              		.fpu fpv4-sp-d16
 6337              	_GLOBAL__sub_I_touchgfx_init:
 6338              	.LFB1127:
 6339              		.loc 24 65 1
 6340              		.cfi_startproc
 6341              		@ args = 0, pretend = 0, frame = 0
 6342              		@ frame_needed = 1, uses_anonymous_args = 0
 6343 0000 80B5     		push	{r7, lr}
 6344              	.LCFI574:
 6345              		.cfi_def_cfa_offset 8
 6346              		.cfi_offset 7, -8
 6347              		.cfi_offset 14, -4
 6348 0002 00AF     		add	r7, sp, #0
 6349              	.LCFI575:
 6350              		.cfi_def_cfa_register 7
 6351              		.loc 24 65 1
 6352 0004 4FF6FF71 		movw	r1, #65535
 6353 0008 0120     		movs	r0, #1
 6354 000a FFF7FEFF 		bl	_Z41__static_initialization_and_destruction_0ii
 6355 000e 80BD     		pop	{r7, pc}
 6356              		.cfi_endproc
 6357              	.LFE1127:
 6359              		.section	.init_array,"aw",%init_array
 6360              		.align	2
 6361 0000 00000000 		.word	_GLOBAL__sub_I_touchgfx_init(target1)
 6362              		.section	.text._GLOBAL__sub_D_touchgfx_init,"ax",%progbits
 6363              		.align	1
 6364              		.syntax unified
 6365              		.thumb
 6366              		.thumb_func
 6367              		.fpu fpv4-sp-d16
 6369              	_GLOBAL__sub_D_touchgfx_init:
 6370              	.LFB1128:
 6371              		.loc 24 65 1
 6372              		.cfi_startproc
 6373              		@ args = 0, pretend = 0, frame = 0
 6374              		@ frame_needed = 1, uses_anonymous_args = 0
 6375 0000 80B5     		push	{r7, lr}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 150


 6376              	.LCFI576:
 6377              		.cfi_def_cfa_offset 8
 6378              		.cfi_offset 7, -8
 6379              		.cfi_offset 14, -4
 6380 0002 00AF     		add	r7, sp, #0
 6381              	.LCFI577:
 6382              		.cfi_def_cfa_register 7
 6383              		.loc 24 65 1
 6384 0004 4FF6FF71 		movw	r1, #65535
 6385 0008 0020     		movs	r0, #0
 6386 000a FFF7FEFF 		bl	_Z41__static_initialization_and_destruction_0ii
 6387 000e 80BD     		pop	{r7, pc}
 6388              		.cfi_endproc
 6389              	.LFE1128:
 6391              		.section	.fini_array,"aw",%fini_array
 6392              		.align	2
 6393 0000 00000000 		.word	_GLOBAL__sub_D_touchgfx_init(target1)
 6394              		.text
 6395              	.Letext0:
 6396              		.file 27 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine
 6397              		.file 28 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_st
 6398              		.file 29 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 6399              		.file 30 "Middlewares/ST/touchgfx/framework/include/touchgfx/Event.hpp"
 6400              		.file 31 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/ClickEvent.hpp"
 6401              		.file 32 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/DragEvent.hpp"
 6402              		.file 33 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/GestureEvent.hpp"
 6403              		.file 34 "Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp"
 6404              		.file 35 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/FrameBufferAllocator.hpp"
 6405              		.file 36 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 6406              		.file 37 "Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp"
 6407              		.file 38 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp"
 6408              		.file 39 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextureMapTypes.hpp"
 6409              		.file 40 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/DebugPrinter.hpp"
 6410              		.file 41 "Middlewares/ST/touchgfx/framework/include/platform/core/MCUInstrumentation.hpp"
 6411              		.file 42 "Middlewares/ST/touchgfx/framework/include/platform/driver/button/ButtonController.hpp"
 6412              		.file 43 "Middlewares/ST/touchgfx/framework/include/common/Meta.hpp"
 6413              		.file 44 "Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp"
 6414              		.file 45 "Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp"
 6415              		.file 46 "Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp"
 6416              		.file 47 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp"
 6417              		.file 48 "Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp"
 6418              		.file 49 "Middlewares/ST/touchgfx/framework/include/touchgfx/Texts.hpp"
 6419              		.file 50 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 6420              		.file 51 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 6421              		.file 52 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 6422              		.file 53 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 6423              		.file 54 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 6424              		.file 55 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/sig
 6425              		.file 56 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/signal.
 6426              		.file 57 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Atomic.hpp"
 6427              		.file 58 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/
 6428              		.file 59 "Src/gui/include/gui/model/Model.hpp"
 6429              		.file 60 "Src/gui/include/gui/model/ModelListener.hpp"
 6430              		.file 61 "Src/gui/include/gui/screen_screen/screenPresenter.hpp"
 6431              		.file 62 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 151


DEFINED SYMBOLS
                            *ABS*:0000000000000000 TouchGFXConfiguration.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:24     .text._ZN8touchgfx9colortypeC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:32     .text._ZN8touchgfx9colortypeC2Ev:0000000000000000 _ZN8touchgfx9colortypeC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:32     .text._ZN8touchgfx9colortypeC2Ev:0000000000000000 _ZN8touchgfx9colortypeC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:78     .text._ZN8touchgfx4RectC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:85     .text._ZN8touchgfx4RectC2Ev:0000000000000000 _ZN8touchgfx4RectC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:85     .text._ZN8touchgfx4RectC2Ev:0000000000000000 _ZN8touchgfx4RectC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:141    .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:142    .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:146    .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:151    .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:156    .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:157    .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:161    .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:164    .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:167    .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:170    .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:173    .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:176    .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:179    .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:182    .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:185    .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:188    .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:191    .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:194    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:197    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:200    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:203    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:206    .text._ZN8touchgfx15TouchControllerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:213    .text._ZN8touchgfx15TouchControllerD2Ev:0000000000000000 _ZN8touchgfx15TouchControllerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:256    .text._ZN8touchgfx15TouchControllerD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4884   .rodata._ZTVN8touchgfx15TouchControllerE:0000000000000000 _ZTVN8touchgfx15TouchControllerE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:213    .text._ZN8touchgfx15TouchControllerD2Ev:0000000000000000 _ZN8touchgfx15TouchControllerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:263    .text._ZN8touchgfx15TouchControllerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:270    .text._ZN8touchgfx15TouchControllerD0Ev:0000000000000000 _ZN8touchgfx15TouchControllerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:308    .text._ZN8touchgfx15TouchControllerC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:315    .text._ZN8touchgfx15TouchControllerC2Ev:0000000000000000 _ZN8touchgfx15TouchControllerC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:356    .text._ZN8touchgfx15TouchControllerC2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:315    .text._ZN8touchgfx15TouchControllerC2Ev:0000000000000000 _ZN8touchgfx15TouchControllerC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:363    .text._ZN20STM32TouchControllerC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:370    .text._ZN20STM32TouchControllerC2Ev:0000000000000000 _ZN20STM32TouchControllerC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:412    .text._ZN20STM32TouchControllerC2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:370    .text._ZN20STM32TouchControllerC2Ev:0000000000000000 _ZN20STM32TouchControllerC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:419    .text._ZN8touchgfx9DMA_QueueD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:426    .text._ZN8touchgfx9DMA_QueueD2Ev:0000000000000000 _ZN8touchgfx9DMA_QueueD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:469    .text._ZN8touchgfx9DMA_QueueD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4869   .rodata._ZTVN8touchgfx9DMA_QueueE:0000000000000000 _ZTVN8touchgfx9DMA_QueueE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:426    .text._ZN8touchgfx9DMA_QueueD2Ev:0000000000000000 _ZN8touchgfx9DMA_QueueD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:476    .text._ZN8touchgfx9DMA_QueueD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:483    .text._ZN8touchgfx9DMA_QueueD0Ev:0000000000000000 _ZN8touchgfx9DMA_QueueD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:521    .text._ZN8touchgfx13DMA_Interface10initializeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:528    .text._ZN8touchgfx13DMA_Interface10initializeEv:0000000000000000 _ZN8touchgfx13DMA_Interface10initializeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:564    .text._ZN8touchgfx13DMA_Interface10getDMATypeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:571    .text._ZN8touchgfx13DMA_Interface10getDMATypeEv:0000000000000000 _ZN8touchgfx13DMA_Interface10getDMATypeEv
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 152


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:609    .text._ZN8touchgfx13DMA_InterfaceD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:616    .text._ZN8touchgfx13DMA_InterfaceD2Ev:0000000000000000 _ZN8touchgfx13DMA_InterfaceD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:658    .text._ZN8touchgfx13DMA_InterfaceD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:616    .text._ZN8touchgfx13DMA_InterfaceD2Ev:0000000000000000 _ZN8touchgfx13DMA_InterfaceD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:665    .text._ZN8touchgfx13DMA_InterfaceD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:672    .text._ZN8touchgfx13DMA_InterfaceD0Ev:0000000000000000 _ZN8touchgfx13DMA_InterfaceD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:710    .text._ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:717    .text._ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE:0000000000000000 _ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:769    .text._ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE:0000000000000030 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:717    .text._ZN8touchgfx13DMA_InterfaceC2ERNS_9DMA_QueueE:0000000000000000 _ZN8touchgfx13DMA_InterfaceC1ERNS_9DMA_QueueE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:776    .text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:783    .text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:0000000000000000 _ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:821    .text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:828    .text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:0000000000000000 _ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:865    .text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:872    .text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:0000000000000000 _ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:909    .text._ZN8touchgfx15UIEventListener14handleKeyEventEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:916    .text._ZN8touchgfx15UIEventListener14handleKeyEventEh:0000000000000000 _ZN8touchgfx15UIEventListener14handleKeyEventEh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:954    .text._ZN8touchgfx15UIEventListener15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:961    .text._ZN8touchgfx15UIEventListener15handleTickEventEv:0000000000000000 _ZN8touchgfx15UIEventListener15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:997    .text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1004   .text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1040   .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1047   .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1089   .text._ZN8touchgfx15UIEventListenerD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4853   .rodata._ZTVN8touchgfx15UIEventListenerE:0000000000000000 _ZTVN8touchgfx15UIEventListenerE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1047   .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1096   .text._ZN8touchgfx15UIEventListenerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1103   .text._ZN8touchgfx15UIEventListenerD0Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1141   .text._ZN8touchgfx8Gestures9DragStateC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1148   .text._ZN8touchgfx8Gestures9DragStateC2Ev:0000000000000000 _ZN8touchgfx8Gestures9DragStateC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1148   .text._ZN8touchgfx8Gestures9DragStateC2Ev:0000000000000000 _ZN8touchgfx8Gestures9DragStateC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1215   .text._ZN8touchgfx8GesturesC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1222   .text._ZN8touchgfx8GesturesC2Ev:0000000000000000 _ZN8touchgfx8GesturesC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1222   .text._ZN8touchgfx8GesturesC2Ev:0000000000000000 _ZN8touchgfx8GesturesC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1269   .text._ZN8touchgfx3LCDD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1276   .text._ZN8touchgfx3LCDD2Ev:0000000000000000 _ZN8touchgfx3LCDD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1319   .text._ZN8touchgfx3LCDD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1276   .text._ZN8touchgfx3LCDD2Ev:0000000000000000 _ZN8touchgfx3LCDD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1326   .text._ZN8touchgfx3LCDD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1333   .text._ZN8touchgfx3LCDD0Ev:0000000000000000 _ZN8touchgfx3LCDD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1371   .text._ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1378   .text._ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt:0000000000000000 _ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1568   .text._ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt:0000000000000164 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1378   .text._ZN8touchgfx3HALC2ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt:0000000000000000 _ZN8touchgfx3HALC1ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1581   .text._ZN8touchgfx3HALD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1588   .text._ZN8touchgfx3HALD2Ev:0000000000000000 _ZN8touchgfx3HALD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1630   .text._ZN8touchgfx3HALD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1588   .text._ZN8touchgfx3HALD2Ev:0000000000000000 _ZN8touchgfx3HALD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1637   .text._ZN8touchgfx3HALD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1644   .text._ZN8touchgfx3HALD0Ev:0000000000000000 _ZN8touchgfx3HALD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1682   .text._ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1689   .text._ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:0000000000000000 _ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1740   .text._ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:0000000000000034 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1689   .text._ZN20TouchGFXGeneratedHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:0000000000000000 _ZN20TouchGFXGeneratedHALC1ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1747   .text._ZN20TouchGFXGeneratedHALD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1754   .text._ZN20TouchGFXGeneratedHALD2Ev:0000000000000000 _ZN20TouchGFXGeneratedHALD2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 153


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1794   .text._ZN20TouchGFXGeneratedHALD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1754   .text._ZN20TouchGFXGeneratedHALD2Ev:0000000000000000 _ZN20TouchGFXGeneratedHALD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1801   .text._ZN20TouchGFXGeneratedHALD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1808   .text._ZN20TouchGFXGeneratedHALD0Ev:0000000000000000 _ZN20TouchGFXGeneratedHALD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1846   .text._ZN11TouchGFXHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1853   .text._ZN11TouchGFXHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:0000000000000000 _ZN11TouchGFXHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1904   .text._ZN11TouchGFXHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:0000000000000034 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1853   .text._ZN11TouchGFXHALC2ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt:0000000000000000 _ZN11TouchGFXHALC1ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1911   .text._ZN8touchgfx12FontProviderD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1918   .text._ZN8touchgfx12FontProviderD2Ev:0000000000000000 _ZN8touchgfx12FontProviderD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1961   .text._ZN8touchgfx12FontProviderD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4842   .rodata._ZTVN8touchgfx12FontProviderE:0000000000000000 _ZTVN8touchgfx12FontProviderE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1918   .text._ZN8touchgfx12FontProviderD2Ev:0000000000000000 _ZN8touchgfx12FontProviderD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1968   .text._ZN8touchgfx12FontProviderD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:1975   .text._ZN8touchgfx12FontProviderD0Ev:0000000000000000 _ZN8touchgfx12FontProviderD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2013   .text._ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2020   .text._ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE:0000000000000000 _ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2078   .text._ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE:000000000000003c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4832   .rodata._ZTVN8touchgfx7MVPHeapE:0000000000000000 _ZTVN8touchgfx7MVPHeapE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2020   .text._ZN8touchgfx7MVPHeapC2ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE:0000000000000000 _ZN8touchgfx7MVPHeapC1ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2085   .text._ZN8touchgfx7MVPHeapD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2092   .text._ZN8touchgfx7MVPHeapD2Ev:0000000000000000 _ZN8touchgfx7MVPHeapD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2134   .text._ZN8touchgfx7MVPHeapD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2092   .text._ZN8touchgfx7MVPHeapD2Ev:0000000000000000 _ZN8touchgfx7MVPHeapD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2141   .text._ZN8touchgfx7MVPHeapD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2148   .text._ZN8touchgfx7MVPHeapD0Ev:0000000000000000 _ZN8touchgfx7MVPHeapD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2186   .text._ZN8touchgfx11Application15appSwitchScreenEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2193   .text._ZN8touchgfx11Application15appSwitchScreenEh:0000000000000000 _ZN8touchgfx11Application15appSwitchScreenEh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2232   .text._ZN8touchgfx11Application13requestRedrawERNS_4RectE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2239   .text._ZN8touchgfx11Application13requestRedrawERNS_4RectE:0000000000000000 _ZN8touchgfx11Application13requestRedrawERNS_4RectE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2283   .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2290   .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2333   .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4820   .rodata._ZTVN8touchgfx15GenericCallbackIvvvEE:0000000000000000 _ZTVN8touchgfx15GenericCallbackIvvvEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2290   .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2340   .text._ZN8touchgfx15GenericCallbackIvvvED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2347   .text._ZN8touchgfx15GenericCallbackIvvvED0Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2385   .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2392   .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 _ZN8touchgfx11ApplicationD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2432   .text._ZN8touchgfx11ApplicationD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2392   .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 _ZN8touchgfx11ApplicationD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2439   .text._ZN8touchgfx11ApplicationD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2446   .text._ZN8touchgfx11ApplicationD0Ev:0000000000000000 _ZN8touchgfx11ApplicationD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2484   .text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2491   .text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2534   .text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2527   .text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2617   .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2624   .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2664   .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4797   .rodata._ZTVN8touchgfx14MVPApplicationE:0000000000000000 _ZTVN8touchgfx14MVPApplicationE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2624   .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2671   .text._ZN8touchgfx14MVPApplicationD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2678   .text._ZN8touchgfx14MVPApplicationD0Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2716   .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2723   .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 _ZN23FrontendApplicationBaseD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5398   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 154


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2769   .text._ZN23FrontendApplicationBaseD2Ev:000000000000002c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4762   .rodata._ZTV23FrontendApplicationBase:0000000000000000 _ZTV23FrontendApplicationBase
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2723   .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 _ZN23FrontendApplicationBaseD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2776   .text._ZN23FrontendApplicationBaseD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2783   .text._ZN23FrontendApplicationBaseD0Ev:0000000000000000 _ZN23FrontendApplicationBaseD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2821   .text._ZN19FrontendApplicationD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2828   .text._ZN19FrontendApplicationD2Ev:0000000000000000 _ZN19FrontendApplicationD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2870   .text._ZN19FrontendApplicationD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4739   .rodata._ZTV19FrontendApplication:0000000000000000 _ZTV19FrontendApplication
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2828   .text._ZN19FrontendApplicationD2Ev:0000000000000000 _ZN19FrontendApplicationD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2877   .text._ZN19FrontendApplicationD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2884   .text._ZN19FrontendApplicationD0Ev:0000000000000000 _ZN19FrontendApplicationD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2922   .text._ZN19FrontendApplication15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2929   .text._ZN19FrontendApplication15handleTickEventEv:0000000000000000 _ZN19FrontendApplication15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2971   .text._ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:2978   .text._ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication:0000000000000000 _ZN16FrontendHeapBase15gotoStartScreenER19FrontendApplication
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3016   .text._ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3023   .text._ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication:0000000000000000 _ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3071   .text._ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication:0000000000000030 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4728   .rodata._ZTV16FrontendHeapBase:0000000000000000 _ZTV16FrontendHeapBase
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3023   .text._ZN16FrontendHeapBaseC2ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication:0000000000000000 _ZN16FrontendHeapBaseC1ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3082   .bss._ZZN12FrontendHeap11getInstanceEvE8instance:0000000000000000 _ZZN12FrontendHeap11getInstanceEvE8instance
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3079   .bss._ZZN12FrontendHeap11getInstanceEvE8instance:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3089   .bss._ZGVZN12FrontendHeap11getInstanceEvE8instance:0000000000000000 _ZGVZN12FrontendHeap11getInstanceEvE8instance
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3086   .bss._ZGVZN12FrontendHeap11getInstanceEvE8instance:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3092   .text.__tcf_0:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3098   .text.__tcf_0:0000000000000000 __tcf_0
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4261   .text._ZN12FrontendHeapD2Ev:0000000000000000 _ZN12FrontendHeapD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3120   .text.__tcf_0:000000000000000c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3125   .text._ZN12FrontendHeap11getInstanceEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3132   .text._ZN12FrontendHeap11getInstanceEv:0000000000000000 _ZN12FrontendHeap11getInstanceEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3462   .text._ZN12FrontendHeapC2Ev:0000000000000000 _ZN12FrontendHeapC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3186   .text._ZN12FrontendHeap11getInstanceEv:0000000000000050 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3193   .text._ZN16FrontendHeapBaseD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3200   .text._ZN16FrontendHeapBaseD2Ev:0000000000000000 _ZN16FrontendHeapBaseD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3240   .text._ZN16FrontendHeapBaseD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3200   .text._ZN16FrontendHeapBaseD2Ev:0000000000000000 _ZN16FrontendHeapBaseD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3247   .text._ZN16FrontendHeapBaseD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3254   .text._ZN16FrontendHeapBaseD0Ev:0000000000000000 _ZN16FrontendHeapBaseD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3292   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3299   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3340   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4610   .rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEE:0000000000000000 _ZTVN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3299   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3347   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3354   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3394   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4492   .rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEE:0000000000000000 _ZTVN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3354   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3401   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3408   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3448   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4374   .rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEE:0000000000000000 _ZTVN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3408   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3455   .text._ZN12FrontendHeapC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3462   .text._ZN12FrontendHeapC2Ev:0000000000000000 _ZN12FrontendHeapC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3554   .text._ZN12FrontendHeapC2Ev:0000000000000094 $d
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 155


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4247   .rodata._ZTV12FrontendHeap:0000000000000000 _ZTV12FrontendHeap
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3561   .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3564   .rodata._ZN8touchgfxL18TYPED_TEXT_INVALIDE:0000000000000000 _ZN8touchgfxL18TYPED_TEXT_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3567   .text._ZN8touchgfx9TypedText13registerTextsEPKNS_5TextsE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3574   .text._ZN8touchgfx9TypedText13registerTextsEPKNS_5TextsE:0000000000000000 _ZN8touchgfx9TypedText13registerTextsEPKNS_5TextsE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3614   .text._ZN8touchgfx9TypedText13registerTextsEPKNS_5TextsE:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3619   .text._ZN8touchgfx6BlitOpC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3626   .text._ZN8touchgfx6BlitOpC2Ev:0000000000000000 _ZN8touchgfx6BlitOpC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3626   .text._ZN8touchgfx6BlitOpC2Ev:0000000000000000 _ZN8touchgfx6BlitOpC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3668   .text._ZN8touchgfx5NoDMAC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3675   .text._ZN8touchgfx5NoDMAC2Ev:0000000000000000 _ZN8touchgfx5NoDMAC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3731   .text._ZN8touchgfx5NoDMAC2Ev:0000000000000044 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4118   .rodata._ZTVN8touchgfx5NoDMAE:0000000000000000 _ZTVN8touchgfx5NoDMAE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3675   .text._ZN8touchgfx5NoDMAC2Ev:0000000000000000 _ZN8touchgfx5NoDMAC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3738   .text._ZN8touchgfx5NoDMA11getBlitCapsEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3745   .text._ZN8touchgfx5NoDMA11getBlitCapsEv:0000000000000000 _ZN8touchgfx5NoDMA11getBlitCapsEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3783   .rodata:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3795   .text._ZN8touchgfx5NoDMA13setupDataCopyERKNS_6BlitOpE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3802   .text._ZN8touchgfx5NoDMA13setupDataCopyERKNS_6BlitOpE:0000000000000000 _ZN8touchgfx5NoDMA13setupDataCopyERKNS_6BlitOpE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3830   .text._ZN8touchgfx5NoDMA13setupDataCopyERKNS_6BlitOpE:0000000000000018 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3842   .text._ZN8touchgfx5NoDMA13setupDataFillERKNS_6BlitOpE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3849   .text._ZN8touchgfx5NoDMA13setupDataFillERKNS_6BlitOpE:0000000000000000 _ZN8touchgfx5NoDMA13setupDataFillERKNS_6BlitOpE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3877   .text._ZN8touchgfx5NoDMA13setupDataFillERKNS_6BlitOpE:0000000000000018 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3884   .text._ZN8touchgfx5NoDMA18signalDMAInterruptEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3891   .text._ZN8touchgfx5NoDMA18signalDMAInterruptEv:0000000000000000 _ZN8touchgfx5NoDMA18signalDMAInterruptEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3927   .text._ZN8touchgfx5NoDMA5flushEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3934   .text._ZN8touchgfx5NoDMA5flushEv:0000000000000000 _ZN8touchgfx5NoDMA5flushEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3970   .bss._ZL2tc:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3973   .bss._ZL2tc:0000000000000000 _ZL2tc
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3976   .bss._ZL3dma:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3979   .bss._ZL3dma:0000000000000000 _ZL3dma
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3982   .bss._ZL7display:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3985   .bss._ZL7display:0000000000000000 _ZL7display
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3988   .data._ZL12fontProvider:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3991   .data._ZL12fontProvider:0000000000000000 _ZL12fontProvider
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3994   .bss._ZL5texts:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:3997   .bss._ZL5texts:0000000000000000 _ZL5texts
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4000   .bss._ZL3hal:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4003   .bss._ZL3hal:0000000000000000 _ZL3hal
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4006   .text.touchgfx_init:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4013   .text.touchgfx_init:0000000000000000 touchgfx_init
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4072   .text.touchgfx_init:0000000000000048 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4079   .text.touchgfx_taskEntry:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4086   .text.touchgfx_taskEntry:0000000000000000 touchgfx_taskEntry
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4109   .text.touchgfx_taskEntry:0000000000000010 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4115   .rodata._ZTVN8touchgfx5NoDMAE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4147   .text._ZN8touchgfx5NoDMAD2Ev:0000000000000000 _ZN8touchgfx5NoDMAD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4205   .text._ZN8touchgfx5NoDMAD0Ev:0000000000000000 _ZN8touchgfx5NoDMAD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4140   .text._ZN8touchgfx5NoDMAD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4147   .text._ZN8touchgfx5NoDMAD2Ev:0000000000000000 _ZN8touchgfx5NoDMAD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5497   .text._ZN8touchgfx17LockFreeDMA_QueueD2Ev:0000000000000000 _ZN8touchgfx17LockFreeDMA_QueueD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4191   .text._ZN8touchgfx5NoDMAD2Ev:000000000000002c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4198   .text._ZN8touchgfx5NoDMAD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4244   .rodata._ZTV12FrontendHeap:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4332   .text._ZN12FrontendHeapD0Ev:0000000000000000 _ZN12FrontendHeapD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4254   .text._ZN12FrontendHeapD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4261   .text._ZN12FrontendHeapD2Ev:0000000000000000 _ZN12FrontendHeapD2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 156


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4396   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4514   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4632   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4318   .text._ZN12FrontendHeapD2Ev:0000000000000050 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4325   .text._ZN12FrontendHeapD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4371   .rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4450   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED0Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5596   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE8capacityEv:0000000000000000 _ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE8capacityEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5641   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE12element_sizeEv:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE12element_sizeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5686   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elementEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5741   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 _ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elementEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4389   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4396   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4436   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4443   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4489   .rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4568   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED0Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5796   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE8capacityEv:0000000000000000 _ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE8capacityEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5841   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE12element_sizeEv:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE12element_sizeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5886   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5939   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 _ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4507   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4514   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4554   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4561   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4607   .rodata._ZTVN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4686   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED0Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5992   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE8capacityEv:0000000000000000 _ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE8capacityEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6037   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE12element_sizeEv:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE12element_sizeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6082   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elementEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6134   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 _ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elementEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4625   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4632   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4672   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4679   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4725   .rodata._ZTV16FrontendHeapBase:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4736   .rodata._ZTV19FrontendApplication:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4759   .rodata._ZTV23FrontendApplicationBase:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4785   .rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:0000000000000000 _ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4782   .rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5452   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6186   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6261   .text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:0000000000000000 _ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4794   .rodata._ZTVN8touchgfx14MVPApplicationE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4817   .rodata._ZTVN8touchgfx15GenericCallbackIvvvEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4829   .rodata._ZTVN8touchgfx7MVPHeapE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4839   .rodata._ZTVN8touchgfx12FontProviderE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4850   .rodata._ZTVN8touchgfx15UIEventListenerE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4866   .rodata._ZTVN8touchgfx9DMA_QueueE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4881   .rodata._ZTVN8touchgfx15TouchControllerE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4892   .text._ZN11TouchGFXHALD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4899   .text._ZN11TouchGFXHALD2Ev:0000000000000000 _ZN11TouchGFXHALD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4939   .text._ZN11TouchGFXHALD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4899   .text._ZN11TouchGFXHALD2Ev:0000000000000000 _ZN11TouchGFXHALD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4946   .text._ZN11TouchGFXHALD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4953   .text._ZN11TouchGFXHALD0Ev:0000000000000000 _ZN11TouchGFXHALD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4991   .text._ZN23ApplicationFontProviderD2Ev:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 157


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4998   .text._ZN23ApplicationFontProviderD2Ev:0000000000000000 _ZN23ApplicationFontProviderD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5039   .text._ZN23ApplicationFontProviderD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:4998   .text._ZN23ApplicationFontProviderD2Ev:0000000000000000 _ZN23ApplicationFontProviderD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5046   .text._ZN23ApplicationFontProviderD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5053   .text._ZN23ApplicationFontProviderD0Ev:0000000000000000 _ZN23ApplicationFontProviderD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5091   .text._ZN8touchgfx8LCD16bppD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5098   .text._ZN8touchgfx8LCD16bppD2Ev:0000000000000000 _ZN8touchgfx8LCD16bppD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5139   .text._ZN8touchgfx8LCD16bppD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5098   .text._ZN8touchgfx8LCD16bppD2Ev:0000000000000000 _ZN8touchgfx8LCD16bppD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5146   .text._ZN8touchgfx8LCD16bppD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5153   .text._ZN8touchgfx8LCD16bppD0Ev:0000000000000000 _ZN8touchgfx8LCD16bppD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5191   .text._ZN20STM32TouchControllerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5198   .text._ZN20STM32TouchControllerD2Ev:0000000000000000 _ZN20STM32TouchControllerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5238   .text._ZN20STM32TouchControllerD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5198   .text._ZN20STM32TouchControllerD2Ev:0000000000000000 _ZN20STM32TouchControllerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5245   .text._ZN20STM32TouchControllerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5252   .text._ZN20STM32TouchControllerD0Ev:0000000000000000 _ZN20STM32TouchControllerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5290   .text._Z41__static_initialization_and_destruction_0ii:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5296   .text._Z41__static_initialization_and_destruction_0ii:0000000000000000 _Z41__static_initialization_and_destruction_0ii
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5382   .text._Z41__static_initialization_and_destruction_0ii:0000000000000078 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5391   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5398   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5438   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5445   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5490   .text._ZN8touchgfx17LockFreeDMA_QueueD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5497   .text._ZN8touchgfx17LockFreeDMA_QueueD2Ev:0000000000000000 _ZN8touchgfx17LockFreeDMA_QueueD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5537   .text._ZN8touchgfx17LockFreeDMA_QueueD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5544   .text._ZN8touchgfx17LockFreeDMA_QueueD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5551   .text._ZN8touchgfx17LockFreeDMA_QueueD0Ev:0000000000000000 _ZN8touchgfx17LockFreeDMA_QueueD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5589   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE8capacityEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5634   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE12element_sizeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5679   .text._ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5734   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5789   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE8capacityEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5834   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE12element_sizeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5879   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5932   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:5985   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE8capacityEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6030   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE12element_sizeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6075   .text._ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6127   .text._ZNK8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EE7elementEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6179   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6254   .text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6331   .text._GLOBAL__sub_I_touchgfx_init:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6337   .text._GLOBAL__sub_I_touchgfx_init:0000000000000000 _GLOBAL__sub_I_touchgfx_init
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6360   .init_array:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6363   .text._GLOBAL__sub_D_touchgfx_init:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6369   .text._GLOBAL__sub_D_touchgfx_init:0000000000000000 _GLOBAL__sub_D_touchgfx_init
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s:6392   .fini_array:0000000000000000 $d
                           .group:0000000000000000 _ZN8touchgfx9colortypeC5Ev
                           .group:0000000000000000 _ZN8touchgfx4RectC5Ev
                           .group:0000000000000000 _ZN8touchgfx15TouchControllerD5Ev
                           .group:0000000000000000 _ZN8touchgfx15TouchControllerC5Ev
                           .group:0000000000000000 _ZN20STM32TouchControllerC5Ev
                           .group:0000000000000000 _ZN8touchgfx9DMA_QueueD5Ev
                           .group:0000000000000000 _ZN8touchgfx13DMA_InterfaceD5Ev
                           .group:0000000000000000 _ZN8touchgfx13DMA_InterfaceC5ERNS_9DMA_QueueE
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 158


                           .group:0000000000000000 _ZN8touchgfx15UIEventListenerD5Ev
                           .group:0000000000000000 _ZN8touchgfx8Gestures9DragStateC5Ev
                           .group:0000000000000000 _ZN8touchgfx8GesturesC5Ev
                           .group:0000000000000000 _ZN8touchgfx3LCDD5Ev
                           .group:0000000000000000 _ZN8touchgfx3HALC5ERNS_13DMA_InterfaceERNS_3LCDERNS_15TouchControllerEtt
                           .group:0000000000000000 _ZN8touchgfx3HALD5Ev
                           .group:0000000000000000 _ZN20TouchGFXGeneratedHALC5ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
                           .group:0000000000000000 _ZN20TouchGFXGeneratedHALD5Ev
                           .group:0000000000000000 _ZN11TouchGFXHALC5ERN8touchgfx13DMA_InterfaceERNS0_3LCDERNS0_15TouchControllerEtt
                           .group:0000000000000000 _ZN8touchgfx12FontProviderD5Ev
                           .group:0000000000000000 _ZN8touchgfx7MVPHeapC5ERNS_17AbstractPartitionES2_S2_RNS_14MVPApplicationE
                           .group:0000000000000000 _ZN8touchgfx7MVPHeapD5Ev
                           .group:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED5Ev
                           .group:0000000000000000 _ZN8touchgfx11ApplicationD5Ev
                           .group:0000000000000000 _ZN8touchgfx14MVPApplicationD5Ev
                           .group:0000000000000000 _ZN23FrontendApplicationBaseD5Ev
                           .group:0000000000000000 _ZN19FrontendApplicationD5Ev
                           .group:0000000000000000 _ZN16FrontendHeapBaseC5ERN8touchgfx17AbstractPartitionES2_S2_R19FrontendApplication
                           .group:0000000000000000 _ZN16FrontendHeapBaseD5Ev
                           .group:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EEC5Ev
                           .group:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EEC5Ev
                           .group:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EEC5Ev
                           .group:0000000000000000 _ZN12FrontendHeapC5Ev
                           .group:0000000000000000 _ZN8touchgfx6BlitOpC5Ev
                           .group:0000000000000000 _ZN8touchgfx5NoDMAC5Ev
                           .group:0000000000000000 _ZN8touchgfx5NoDMAD5Ev
                           .group:0000000000000000 _ZN12FrontendHeapD5Ev
                           .group:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListINS_12NoTransitionENS2_INS1_3NilES4_EEEELt1EED5Ev
                           .group:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI10screenViewNS2_INS1_3NilES4_EEEELt1EED5Ev
                           .group:0000000000000000 _ZN8touchgfx9PartitionINS_4meta8TypeListI15screenPresenterNS2_INS1_3NilES4_EEEELt1EED5Ev
                           .group:0000000000000000 _ZN11TouchGFXHALD5Ev
                           .group:0000000000000000 _ZN23ApplicationFontProviderD5Ev
                           .group:0000000000000000 _ZN8touchgfx8LCD16bppD5Ev
                           .group:0000000000000000 _ZN20STM32TouchControllerD5Ev
                           .group:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED5Ev
                           .group:0000000000000000 _ZN8touchgfx17LockFreeDMA_QueueD5Ev
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
                           .group:0000000000000000 wm4.cconfig.h.31.9a7f23fec851cb698f0e4b12b5a812df
                           .group:0000000000000000 wm4.cpu_defines.h.31.bf53b50a3b7882b34c717ebded187478
                           .group:0000000000000000 wm4.cconfig.h.530.716755664a180b5214d4137991428173
                           .group:0000000000000000 wm4.stddef.h.39.cdc2cef840622b974aa19abcc0caae93
                           .group:0000000000000000 wm4.cdefs.h.49.6cb61cdf7b446f131d08825667c792f6
                           .group:0000000000000000 wm4.types.h.40.8b6acba56cefbb11746718204edc8f5e
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 159


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
                           .group:0000000000000000 wm4._pthreadtypes.h.36.fcee9961c35163dde6267ef772ad1972
                           .group:0000000000000000 wm4.signal.h.30.5277b477a5ebb7d1254c1af3095d1011
                           .group:0000000000000000 wm4.signal.h.18.14c8d0c03fc1e06775633fad7399cfc7
                           .group:0000000000000000 wm4.csignal.45.00534e27a59328df5aaaf458020a025c
                           .group:0000000000000000 wm4.stdarg.h.31.b55da1089056868966f25de5dbfc7d3c
                           .group:0000000000000000 wm4.exception_defines.h.31.b944334bb23842f2d39bb0d8b467613a
                           .group:0000000000000000 wm4.cxxabi_init_exception.h.42.029852b0f286014c9c193b74ad22df55
                           .group:0000000000000000 wm4.type_traits.30.a1ad4787ed06e819fc9410a5d6c895dc
                           .group:0000000000000000 wm4.move.h.161.4ce4b89a4714eb3a7aabe70c85c6bbc3
                           .group:0000000000000000 wm4.Utils.hpp.19.3cc10dfadb70e459e4fbf3def7a46f1d
                           .group:0000000000000000 wm4.stm32f4xx_hal_conf.h.24.57e6c5b880d8180a2e23d9505bd4487d
                           .group:0000000000000000 wm4.stm32f4xx.h.39.163e65267b4f964a08764289722b975f
                           .group:0000000000000000 wm4.stm32f429xx.h.35.15b6ffdfe1f51d9061151ad70b272803
                           .group:0000000000000000 wm4.cmsis_version.h.32.4d5822004c01a829a975260e854b5f8e
                           .group:0000000000000000 wm4.core_cm4.h.66.e4ff136c4a17abc46741866f64f8e729
                           .group:0000000000000000 wm4.cmsis_gcc.h.26.6774fe91202d65f4d5ffcff60e00da34
                           .group:0000000000000000 wm4.core_cm4.h.174.cad1cd5c3704104afe8ee4934b0393c3
                           .group:0000000000000000 wm4.mpu_armv7.h.32.27b4593cb2f8d3152ca5d97a9d72b321
                           .group:0000000000000000 wm4.stm32f429xx.h.1025.13d052abf2496a1c824d44a6b919663f
                           .group:0000000000000000 wm4.stm32f4xx.h.196.0b21137cf6c6923d8fd1f4d94a3bfdd4
                           .group:0000000000000000 wm4.stm32_hal_legacy.h.23.4000ceb880107933f70dc5d9929fba5c
                           .group:0000000000000000 wm4.stm32f4xx_hal_def.h.58.54897f0de68447ab41a176b2bea62238
                           .group:0000000000000000 wm4.stm32f4xx_hal_rcc_ex.h.22.b0e0751c68924c6700b697bd1818999b
                           .group:0000000000000000 wm4.stm32f4xx_hal_rcc.h.108.b82c8c670b41d96b2920e2f63661be15
                           .group:0000000000000000 wm4.stm32f4xx_hal_gpio.h.22.e47df9f0f5be4ddc2ed2d14042c5e680
                           .group:0000000000000000 wm4.stm32f4xx_hal_gpio_ex.h.22.db890853c142bf249c9519093533c228
                           .group:0000000000000000 wm4.stm32f4xx_hal_gpio.h.255.5b948d47ad1357d6d2213e5e5ca4755c
                           .group:0000000000000000 wm4.stm32f4xx_hal_exti.h.22.03eb49dbb2017516a8a02429cfcc62f2
                           .group:0000000000000000 wm4.stm32f4xx_hal_dma.h.22.fffce20ac9119c50557659c75e75ab1c
                           .group:0000000000000000 wm4.stm32f4xx_hal_dma.h.721.a1e57ffbc615f926e6509c5acc65e492
                           .group:0000000000000000 wm4.stm32f4xx_hal_cortex.h.22.e6aa3b847b5388be63c32d1f9e696ef7
                           .group:0000000000000000 wm4.stm32f4xx_hal_crc.h.22.ad28b13770c7a1a8f2dc596621d3428b
                           .group:0000000000000000 wm4.stm32f4xx_hal_flash.h.22.31b301be2655c3eb8583e51c8231544a
                           .group:0000000000000000 wm4.stm32f4xx_hal_flash_ex.h.22.bf3bc68244ec0cf830b03ac9dea18c20
                           .group:0000000000000000 wm4.stm32f4xx_hal_flash.h.363.51efdf0f6c88f683efb89d7cc95cc1be
                           .group:0000000000000000 wm4.stm32f4xx_ll_fmc.h.22.5b83813195dbe91ec2a5b350b6dff128
                           .group:0000000000000000 wm4.stm32f4xx_hal_i2c.h.22.3376daa98af23265ef60c83f4b1c9270
                           .group:0000000000000000 wm4.stm32f4xx_hal_i2c_ex.h.22.a90c9435159b7eaef7dc679da6295e14
                           .group:0000000000000000 wm4.stm32f4xx_hal_i2c.h.648.84d32988d75c6a72ab68edc08ef94a93
                           .group:0000000000000000 wm4.stm32f4xx_hal_ltdc.h.22.fa2cd28adf76f20135272c6bcb0a35cd
                           .group:0000000000000000 wm4.stm32f4xx_hal_ltdc.h.624.8a9baef49f518a664b381b28a70fd8c7
                           .group:0000000000000000 wm4.stm32f4xx_hal_pwr.h.22.2c27d93ae187efe3a73816f03a329970
                           .group:0000000000000000 wm4.stm32f4xx_hal_pwr_ex.h.22.1fc82ad3d641e70e30736084bddb8471
                           .group:0000000000000000 wm4.stm32f4xx_hal_pwr.h.337.60b43975c84527a23cb6994b23165a5e
                           .group:0000000000000000 wm4.stm32f4xx_hal_spi.h.22.d102b5b729e9d6fc8b291699f107fb9f
                           .group:0000000000000000 wm4.stm32f4xx_hal_tim.h.22.8c7804d33ac9cf100eb6beb95ec2d5af
                           .group:0000000000000000 wm4.stm32f4xx_hal_tim_ex.h.22.2fde471485fd197eebc7c86251149c11
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 160


                           .group:0000000000000000 wm4.stm32f4xx_hal_uart.h.22.591b491756a19342b0bf79eea5b33e1b
                           .group:0000000000000000 wm4.stm32f4xx_ll_usb.h.22.3497d8ac31b2bdafc7c2a34d860c4769
                           .group:0000000000000000 wm4.stm32f4xx_hal_hcd.h.111.a51c3bd0d61d2d8cadb372f7c7d9eccb
                           .group:0000000000000000 wm4.stm32f4xx_hal.h.72.eb74cef44a933f3811e1af2158aac184
                           .group:0000000000000000 wm4.assert.h.11.7043852a511d37ae606afa012e67e471

UNDEFINED SYMBOLS
_ZdlPvj
_ZTV20STM32TouchController
_ZTVN8touchgfx13DMA_InterfaceE
_ZTVN8touchgfx3LCDE
_ZTVN8touchgfx3HALE
_ZN8touchgfx3HAL8instanceE
_ZN8touchgfx3HAL13DISPLAY_WIDTHE
_ZN8touchgfx3HAL14DISPLAY_HEIGHTE
_ZN8touchgfx3HAL16DISPLAY_ROTATIONE
_ZN8touchgfx3HAL18FRAME_BUFFER_WIDTHE
_ZN8touchgfx3HAL19FRAME_BUFFER_HEIGHTE
_ZTV20TouchGFXGeneratedHAL
_ZTV11TouchGFXHAL
_ZTVN8touchgfx11ApplicationE
_ZN5Model4tickEv
_ZN8touchgfx11Application15handleTickEventEv
_ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv
__cxa_guard_acquire
__cxa_guard_release
atexit
_ZN8touchgfx17AbstractPartitionC2Ev
_ZN5ModelC1Ev
_ZN19FrontendApplicationC1ER5ModelR12FrontendHeap
_ZN8touchgfx9TypedText5textsE
_ZN8touchgfx17LockFreeDMA_QueueC1EPNS_6BlitOpEi
__assert_func
_ZTV23ApplicationFontProvider
_ZN14BitmapDatabase11getInstanceEv
_ZN14BitmapDatabase15getInstanceSizeEv
_ZN8touchgfx6Bitmap22registerBitmapDatabaseEPKNS0_10BitmapDataEtPtmm
_ZN8touchgfx5Texts11setLanguageEt
_ZN8touchgfx11FontManager15setFontProviderEPNS_12FontProviderE
_ZN11TouchGFXHAL10initializeEv
_ZN8touchgfx3HAL9taskEntryEv
_ZN8touchgfx13DMA_Interface10addToQueueERKNS_6BlitOpE
_ZN8touchgfx13DMA_Interface5startEv
_ZN8touchgfx13DMA_Interface7executeEv
_ZN8touchgfx13DMA_Interface16executeCompletedEv
_ZN8touchgfx13DMA_Interface13seedExecutionEv
_ZN8touchgfx13DMA_Interface11enableAlphaEh
_ZN8touchgfx13DMA_Interface12disableAlphaEv
_ZN8touchgfx13DMA_Interface31enableCopyWithTransparentPixelsEh
_ZN8touchgfx13DMA_Interface27waitForFrameBufferSemaphoreEv
_ZN8touchgfx17AbstractPartition8allocateEt
_ZN8touchgfx17AbstractPartition10allocateAtEtt
_ZNK8touchgfx17AbstractPartition18getAllocationCountEv
_ZN8touchgfx17AbstractPartition7indexOfEPKv
_ZN8touchgfx17AbstractPartition5clearEv
_ZN8touchgfx17AbstractPartitionD2Ev
_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccupI8sQ.s 			page 161


_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
_ZN8touchgfx11Application14handleKeyEventEh
_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
_ZN8touchgfx11Application13requestRedrawEv
_ZN8touchgfx11Application4drawEv
_ZN8touchgfx11Application4drawERNS_4RectE
_ZN8touchgfx11Application19cacheDrawOperationsEb
__cxa_pure_virtual
_ZTVN8touchgfx8LCD16bppE
_ZN8touchgfx8LCD16bppC1Ev
_ZTVN8touchgfx17LockFreeDMA_QueueE
