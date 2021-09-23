ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 1


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
  13              		.file	"STM32TouchController.cpp"
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
  78              		.section	.text._ZN8touchgfx15TouchControllerD2Ev,"axG",%progbits,_ZN8touchgfx15TouchControllerD5Ev
  79              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 2


  80              		.weak	_ZN8touchgfx15TouchControllerD2Ev
  81              		.arch armv7e-m
  82              		.syntax unified
  83              		.thumb
  84              		.thumb_func
  85              		.fpu fpv4-sp-d16
  87              	_ZN8touchgfx15TouchControllerD2Ev:
  88              	.LFB45:
  89              		.file 1 "Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp"
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
  29:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     /** Finalizes an instance of the TouchController class. */
  30:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     virtual ~TouchController()
  90              		.loc 1 30 13
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
  31:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 3


 107              		.loc 1 31 5
 108 0008 044A     		ldr	r2, .L3
 109 000a 7B68     		ldr	r3, [r7, #4]
 110 000c 1A60     		str	r2, [r3]
 111              	.LBE2:
  32:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     }
 112              		.loc 1 32 5
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
 130 001c 08000000 		.word	_ZTVN8touchgfx15TouchControllerE+8
 131              		.cfi_endproc
 132              	.LFE45:
 134              		.weak	_ZN8touchgfx15TouchControllerD1Ev
 135              		.thumb_set _ZN8touchgfx15TouchControllerD1Ev,_ZN8touchgfx15TouchControllerD2Ev
 136              		.section	.text._ZN8touchgfx15TouchControllerD0Ev,"axG",%progbits,_ZN8touchgfx15TouchControllerD5Ev
 137              		.align	1
 138              		.weak	_ZN8touchgfx15TouchControllerD0Ev
 139              		.syntax unified
 140              		.thumb
 141              		.thumb_func
 142              		.fpu fpv4-sp-d16
 144              	_ZN8touchgfx15TouchControllerD0Ev:
 145              	.LFB47:
  30:Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp ****     {
 146              		.loc 1 30 13
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
 162              		.loc 1 32 5
 163 0008 7868     		ldr	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 4


 164 000a FFF7FEFF 		bl	_ZN8touchgfx15TouchControllerD1Ev
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
 179              	.LFE47:
 181              		.section	.text._ZN20STM32TouchController4initEv,"ax",%progbits
 182              		.align	1
 183              		.global	_ZN20STM32TouchController4initEv
 184              		.syntax unified
 185              		.thumb
 186              		.thumb_func
 187              		.fpu fpv4-sp-d16
 189              	_ZN20STM32TouchController4initEv:
 190              	.LFB54:
 191              		.file 2 "Src/STM32TouchController.cpp"
   1:Src/STM32TouchController.cpp **** /**
   2:Src/STM32TouchController.cpp ****   ******************************************************************************
   3:Src/STM32TouchController.cpp ****   * File Name          : STM32TouchController.cpp
   4:Src/STM32TouchController.cpp ****   ******************************************************************************
   5:Src/STM32TouchController.cpp ****   * @attention
   6:Src/STM32TouchController.cpp ****   *
   7:Src/STM32TouchController.cpp ****   * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/STM32TouchController.cpp ****   * All rights reserved.</center></h2>
   9:Src/STM32TouchController.cpp ****   *
  10:Src/STM32TouchController.cpp ****   * This software component is licensed by ST under Ultimate Liberty license
  11:Src/STM32TouchController.cpp ****   * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/STM32TouchController.cpp ****   * the License. You may obtain a copy of the License at:
  13:Src/STM32TouchController.cpp ****   *                             www.st.com/SLA0044
  14:Src/STM32TouchController.cpp ****   *
  15:Src/STM32TouchController.cpp ****   ******************************************************************************
  16:Src/STM32TouchController.cpp ****   */
  17:Src/STM32TouchController.cpp **** 
  18:Src/STM32TouchController.cpp **** /* USER CODE BEGIN STM32TouchController */
  19:Src/STM32TouchController.cpp **** 
  20:Src/STM32TouchController.cpp **** #include <STM32TouchController.hpp>
  21:Src/STM32TouchController.cpp **** 
  22:Src/STM32TouchController.cpp **** void STM32TouchController::init()
  23:Src/STM32TouchController.cpp **** {
 192              		.loc 2 23 1
 193              		.cfi_startproc
 194              		@ args = 0, pretend = 0, frame = 8
 195              		@ frame_needed = 1, uses_anonymous_args = 0
 196              		@ link register save eliminated.
 197 0000 80B4     		push	{r7}
 198              	.LCFI11:
 199              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 5


 200              		.cfi_offset 7, -4
 201 0002 83B0     		sub	sp, sp, #12
 202              	.LCFI12:
 203              		.cfi_def_cfa_offset 16
 204 0004 00AF     		add	r7, sp, #0
 205              	.LCFI13:
 206              		.cfi_def_cfa_register 7
 207 0006 7860     		str	r0, [r7, #4]
  24:Src/STM32TouchController.cpp ****     /**
  25:Src/STM32TouchController.cpp ****      * Initialize touch controller and driver
  26:Src/STM32TouchController.cpp ****      *
  27:Src/STM32TouchController.cpp ****      */
  28:Src/STM32TouchController.cpp **** }
 208              		.loc 2 28 1
 209 0008 00BF     		nop
 210 000a 0C37     		adds	r7, r7, #12
 211              	.LCFI14:
 212              		.cfi_def_cfa_offset 4
 213 000c BD46     		mov	sp, r7
 214              	.LCFI15:
 215              		.cfi_def_cfa_register 13
 216              		@ sp needed
 217 000e 5DF8047B 		ldr	r7, [sp], #4
 218              	.LCFI16:
 219              		.cfi_restore 7
 220              		.cfi_def_cfa_offset 0
 221 0012 7047     		bx	lr
 222              		.cfi_endproc
 223              	.LFE54:
 225              		.section	.text._ZN20STM32TouchController11sampleTouchERlS0_,"ax",%progbits
 226              		.align	1
 227              		.global	_ZN20STM32TouchController11sampleTouchERlS0_
 228              		.syntax unified
 229              		.thumb
 230              		.thumb_func
 231              		.fpu fpv4-sp-d16
 233              	_ZN20STM32TouchController11sampleTouchERlS0_:
 234              	.LFB55:
  29:Src/STM32TouchController.cpp **** 
  30:Src/STM32TouchController.cpp **** bool STM32TouchController::sampleTouch(int32_t& x, int32_t& y)
  31:Src/STM32TouchController.cpp **** {
 235              		.loc 2 31 1
 236              		.cfi_startproc
 237              		@ args = 0, pretend = 0, frame = 16
 238              		@ frame_needed = 1, uses_anonymous_args = 0
 239              		@ link register save eliminated.
 240 0000 80B4     		push	{r7}
 241              	.LCFI17:
 242              		.cfi_def_cfa_offset 4
 243              		.cfi_offset 7, -4
 244 0002 85B0     		sub	sp, sp, #20
 245              	.LCFI18:
 246              		.cfi_def_cfa_offset 24
 247 0004 00AF     		add	r7, sp, #0
 248              	.LCFI19:
 249              		.cfi_def_cfa_register 7
 250 0006 F860     		str	r0, [r7, #12]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 6


 251 0008 B960     		str	r1, [r7, #8]
 252 000a 7A60     		str	r2, [r7, #4]
  32:Src/STM32TouchController.cpp ****     /**
  33:Src/STM32TouchController.cpp ****      * By default sampleTouch returns false,
  34:Src/STM32TouchController.cpp ****      * return true if a touch has been detected, otherwise false.
  35:Src/STM32TouchController.cpp ****      *
  36:Src/STM32TouchController.cpp ****      * Coordinates are passed to the caller by reference by x and y.
  37:Src/STM32TouchController.cpp ****      *
  38:Src/STM32TouchController.cpp ****      * This function is called by the TouchGFX framework.
  39:Src/STM32TouchController.cpp ****      * By default sampleTouch is called every tick, this can be adjusted by HAL::setTouchSampleRate
  40:Src/STM32TouchController.cpp ****      *
  41:Src/STM32TouchController.cpp ****      */
  42:Src/STM32TouchController.cpp ****     return false;
 253              		.loc 2 42 12
 254 000c 0023     		movs	r3, #0
  43:Src/STM32TouchController.cpp **** }
 255              		.loc 2 43 1
 256 000e 1846     		mov	r0, r3
 257 0010 1437     		adds	r7, r7, #20
 258              	.LCFI20:
 259              		.cfi_def_cfa_offset 4
 260 0012 BD46     		mov	sp, r7
 261              	.LCFI21:
 262              		.cfi_def_cfa_register 13
 263              		@ sp needed
 264 0014 5DF8047B 		ldr	r7, [sp], #4
 265              	.LCFI22:
 266              		.cfi_restore 7
 267              		.cfi_def_cfa_offset 0
 268 0018 7047     		bx	lr
 269              		.cfi_endproc
 270              	.LFE55:
 272              		.global	_ZTV20STM32TouchController
 273              		.section	.rodata._ZTV20STM32TouchController,"a"
 274              		.align	2
 277              	_ZTV20STM32TouchController:
 278 0000 00000000 		.word	0
 279 0004 00000000 		.word	0
 280 0008 00000000 		.word	_ZN20STM32TouchControllerD1Ev
 281 000c 00000000 		.word	_ZN20STM32TouchControllerD0Ev
 282 0010 00000000 		.word	_ZN20STM32TouchController4initEv
 283 0014 00000000 		.word	_ZN20STM32TouchController11sampleTouchERlS0_
 284              		.section	.text._ZN20STM32TouchControllerD2Ev,"axG",%progbits,_ZN20STM32TouchControllerD5Ev,comdat
 285              		.align	1
 286              		.weak	_ZN20STM32TouchControllerD2Ev
 287              		.syntax unified
 288              		.thumb
 289              		.thumb_func
 290              		.fpu fpv4-sp-d16
 292              	_ZN20STM32TouchControllerD2Ev:
 293              	.LFB57:
 294              		.file 3 "Src/STM32TouchController.hpp"
   1:Src/STM32TouchController.hpp **** /**
   2:Src/STM32TouchController.hpp ****   ******************************************************************************
   3:Src/STM32TouchController.hpp ****   * File Name          : STM32TouchController.hpp
   4:Src/STM32TouchController.hpp ****   ******************************************************************************
   5:Src/STM32TouchController.hpp ****   * @attention
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 7


   6:Src/STM32TouchController.hpp ****   *
   7:Src/STM32TouchController.hpp ****   * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/STM32TouchController.hpp ****   * All rights reserved.</center></h2>
   9:Src/STM32TouchController.hpp ****   *
  10:Src/STM32TouchController.hpp ****   * This software component is licensed by ST under Ultimate Liberty license
  11:Src/STM32TouchController.hpp ****   * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/STM32TouchController.hpp ****   * the License. You may obtain a copy of the License at:
  13:Src/STM32TouchController.hpp ****   *                             www.st.com/SLA0044
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
 295              		.loc 3 33 7
 296              		.cfi_startproc
 297              		@ args = 0, pretend = 0, frame = 8
 298              		@ frame_needed = 1, uses_anonymous_args = 0
 299 0000 80B5     		push	{r7, lr}
 300              	.LCFI23:
 301              		.cfi_def_cfa_offset 8
 302              		.cfi_offset 7, -8
 303              		.cfi_offset 14, -4
 304 0002 82B0     		sub	sp, sp, #8
 305              	.LCFI24:
 306              		.cfi_def_cfa_offset 16
 307 0004 00AF     		add	r7, sp, #0
 308              	.LCFI25:
 309              		.cfi_def_cfa_register 7
 310 0006 7860     		str	r0, [r7, #4]
 311              	.LBB3:
 312              		.loc 3 33 7
 313 0008 054A     		ldr	r2, .L12
 314 000a 7B68     		ldr	r3, [r7, #4]
 315 000c 1A60     		str	r2, [r3]
 316 000e 7B68     		ldr	r3, [r7, #4]
 317 0010 1846     		mov	r0, r3
 318 0012 FFF7FEFF 		bl	_ZN8touchgfx15TouchControllerD2Ev
 319              	.LBE3:
 320 0016 7B68     		ldr	r3, [r7, #4]
 321 0018 1846     		mov	r0, r3
 322 001a 0837     		adds	r7, r7, #8
 323              	.LCFI26:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 8


 324              		.cfi_def_cfa_offset 8
 325 001c BD46     		mov	sp, r7
 326              	.LCFI27:
 327              		.cfi_def_cfa_register 13
 328              		@ sp needed
 329 001e 80BD     		pop	{r7, pc}
 330              	.L13:
 331              		.align	2
 332              	.L12:
 333 0020 08000000 		.word	_ZTV20STM32TouchController+8
 334              		.cfi_endproc
 335              	.LFE57:
 337              		.weak	_ZN20STM32TouchControllerD1Ev
 338              		.thumb_set _ZN20STM32TouchControllerD1Ev,_ZN20STM32TouchControllerD2Ev
 339              		.section	.text._ZN20STM32TouchControllerD0Ev,"axG",%progbits,_ZN20STM32TouchControllerD5Ev,comdat
 340              		.align	1
 341              		.weak	_ZN20STM32TouchControllerD0Ev
 342              		.syntax unified
 343              		.thumb
 344              		.thumb_func
 345              		.fpu fpv4-sp-d16
 347              	_ZN20STM32TouchControllerD0Ev:
 348              	.LFB59:
 349              		.loc 3 33 7
 350              		.cfi_startproc
 351              		@ args = 0, pretend = 0, frame = 8
 352              		@ frame_needed = 1, uses_anonymous_args = 0
 353 0000 80B5     		push	{r7, lr}
 354              	.LCFI28:
 355              		.cfi_def_cfa_offset 8
 356              		.cfi_offset 7, -8
 357              		.cfi_offset 14, -4
 358 0002 82B0     		sub	sp, sp, #8
 359              	.LCFI29:
 360              		.cfi_def_cfa_offset 16
 361 0004 00AF     		add	r7, sp, #0
 362              	.LCFI30:
 363              		.cfi_def_cfa_register 7
 364 0006 7860     		str	r0, [r7, #4]
 365              		.loc 3 33 7
 366 0008 7868     		ldr	r0, [r7, #4]
 367 000a FFF7FEFF 		bl	_ZN20STM32TouchControllerD1Ev
 368 000e 0421     		movs	r1, #4
 369 0010 7868     		ldr	r0, [r7, #4]
 370 0012 FFF7FEFF 		bl	_ZdlPvj
 371 0016 7B68     		ldr	r3, [r7, #4]
 372 0018 1846     		mov	r0, r3
 373 001a 0837     		adds	r7, r7, #8
 374              	.LCFI31:
 375              		.cfi_def_cfa_offset 8
 376 001c BD46     		mov	sp, r7
 377              	.LCFI32:
 378              		.cfi_def_cfa_register 13
 379              		@ sp needed
 380 001e 80BD     		pop	{r7, pc}
 381              		.cfi_endproc
 382              	.LFE59:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 9


 384              		.weak	_ZTVN8touchgfx15TouchControllerE
 385              		.section	.rodata._ZTVN8touchgfx15TouchControllerE,"aG",%progbits,_ZTVN8touchgfx15TouchControllerE,
 386              		.align	2
 389              	_ZTVN8touchgfx15TouchControllerE:
 390 0000 00000000 		.word	0
 391 0004 00000000 		.word	0
 392 0008 00000000 		.word	0
 393 000c 00000000 		.word	0
 394 0010 00000000 		.word	__cxa_pure_virtual
 395 0014 00000000 		.word	__cxa_pure_virtual
 396              		.text
 397              	.Letext0:
 398              		.file 4 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 399              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 400              		.file 6 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 10


DEFINED SYMBOLS
                            *ABS*:0000000000000000 STM32TouchController.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:79     .text._ZN8touchgfx15TouchControllerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:87     .text._ZN8touchgfx15TouchControllerD2Ev:0000000000000000 _ZN8touchgfx15TouchControllerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:130    .text._ZN8touchgfx15TouchControllerD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:389    .rodata._ZTVN8touchgfx15TouchControllerE:0000000000000000 _ZTVN8touchgfx15TouchControllerE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:87     .text._ZN8touchgfx15TouchControllerD2Ev:0000000000000000 _ZN8touchgfx15TouchControllerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:137    .text._ZN8touchgfx15TouchControllerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:144    .text._ZN8touchgfx15TouchControllerD0Ev:0000000000000000 _ZN8touchgfx15TouchControllerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:182    .text._ZN20STM32TouchController4initEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:189    .text._ZN20STM32TouchController4initEv:0000000000000000 _ZN20STM32TouchController4initEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:226    .text._ZN20STM32TouchController11sampleTouchERlS0_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:233    .text._ZN20STM32TouchController11sampleTouchERlS0_:0000000000000000 _ZN20STM32TouchController11sampleTouchERlS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:277    .rodata._ZTV20STM32TouchController:0000000000000000 _ZTV20STM32TouchController
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:274    .rodata._ZTV20STM32TouchController:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:292    .text._ZN20STM32TouchControllerD2Ev:0000000000000000 _ZN20STM32TouchControllerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:347    .text._ZN20STM32TouchControllerD0Ev:0000000000000000 _ZN20STM32TouchControllerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:285    .text._ZN20STM32TouchControllerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:292    .text._ZN20STM32TouchControllerD2Ev:0000000000000000 _ZN20STM32TouchControllerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:333    .text._ZN20STM32TouchControllerD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:340    .text._ZN20STM32TouchControllerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s:386    .rodata._ZTVN8touchgfx15TouchControllerE:0000000000000000 $d
                           .group:0000000000000000 _ZN8touchgfx15TouchControllerD5Ev
                           .group:0000000000000000 _ZN20STM32TouchControllerD5Ev
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccpwxx7H.s 			page 11


                           .group:0000000000000000 wm4.Types.hpp.33.d478feb449e34922fe6c04dfd673bcbc

UNDEFINED SYMBOLS
_ZdlPvj
__cxa_pure_virtual
