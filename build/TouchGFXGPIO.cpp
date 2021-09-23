ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s 			page 1


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
  13              		.file	"TouchGFXGPIO.cpp"
  14              		.text
  15              	.Ltext0:
  16              		.cfi_sections	.debug_frame
  17              		.section	.text._ZN8touchgfx4GPIO4initEv,"ax",%progbits
  18              		.align	1
  19              		.global	_ZN8touchgfx4GPIO4initEv
  20              		.arch armv7e-m
  21              		.syntax unified
  22              		.thumb
  23              		.thumb_func
  24              		.fpu fpv4-sp-d16
  26              	_ZN8touchgfx4GPIO4initEv:
  27              	.LFB0:
  28              		.file 1 "Src/TouchGFXGPIO.cpp"
   1:Src/TouchGFXGPIO.cpp **** /**
   2:Src/TouchGFXGPIO.cpp ****   ******************************************************************************
   3:Src/TouchGFXGPIO.cpp ****   * File Name          : TouchGFXGPIO.cpp
   4:Src/TouchGFXGPIO.cpp ****   ******************************************************************************
   5:Src/TouchGFXGPIO.cpp ****   * @attention
   6:Src/TouchGFXGPIO.cpp ****   *
   7:Src/TouchGFXGPIO.cpp ****   * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/TouchGFXGPIO.cpp ****   * All rights reserved.</center></h2>
   9:Src/TouchGFXGPIO.cpp ****   *
  10:Src/TouchGFXGPIO.cpp ****   * This software component is licensed by ST under Ultimate Liberty license
  11:Src/TouchGFXGPIO.cpp ****   * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/TouchGFXGPIO.cpp ****   * the License. You may obtain a copy of the License at:
  13:Src/TouchGFXGPIO.cpp ****   *                             www.st.com/SLA0044
  14:Src/TouchGFXGPIO.cpp ****   *
  15:Src/TouchGFXGPIO.cpp ****   ******************************************************************************
  16:Src/TouchGFXGPIO.cpp ****   */
  17:Src/TouchGFXGPIO.cpp **** 
  18:Src/TouchGFXGPIO.cpp **** #include <touchgfx/hal/GPIO.hpp>
  19:Src/TouchGFXGPIO.cpp **** 
  20:Src/TouchGFXGPIO.cpp **** /**
  21:Src/TouchGFXGPIO.cpp ****  * GPIO_ID Enum, these are used bt TouchGFX framework to signal events.
  22:Src/TouchGFXGPIO.cpp ****  *
  23:Src/TouchGFXGPIO.cpp ****  * VSYNC_FREQ,  /// Pin is toggled at each VSYNC
  24:Src/TouchGFXGPIO.cpp ****  * RENDER_TIME, /// Pin is high when frame rendering begins, low when finished
  25:Src/TouchGFXGPIO.cpp ****  * FRAME_RATE,  /// Pin is toggled when the frame buffers are swapped.
  26:Src/TouchGFXGPIO.cpp ****  * MCU_ACTIVE   /// Pin is high when framework is utilizing the MCU.
  27:Src/TouchGFXGPIO.cpp ****  *
  28:Src/TouchGFXGPIO.cpp ****  */
  29:Src/TouchGFXGPIO.cpp **** 
  30:Src/TouchGFXGPIO.cpp **** /* USER CODE BEGIN TouchGFXGPIO.cpp */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s 			page 2


  31:Src/TouchGFXGPIO.cpp **** 
  32:Src/TouchGFXGPIO.cpp **** using namespace touchgfx;
  33:Src/TouchGFXGPIO.cpp **** 
  34:Src/TouchGFXGPIO.cpp **** /*
  35:Src/TouchGFXGPIO.cpp ****  * Perform configuration of IO pins.
  36:Src/TouchGFXGPIO.cpp ****  */
  37:Src/TouchGFXGPIO.cpp **** void GPIO::init()
  38:Src/TouchGFXGPIO.cpp **** {
  29              		.loc 1 38 1
  30              		.cfi_startproc
  31              		@ args = 0, pretend = 0, frame = 0
  32              		@ frame_needed = 1, uses_anonymous_args = 0
  33              		@ link register save eliminated.
  34 0000 80B4     		push	{r7}
  35              	.LCFI0:
  36              		.cfi_def_cfa_offset 4
  37              		.cfi_offset 7, -4
  38 0002 00AF     		add	r7, sp, #0
  39              	.LCFI1:
  40              		.cfi_def_cfa_register 7
  39:Src/TouchGFXGPIO.cpp **** 
  40:Src/TouchGFXGPIO.cpp **** }
  41              		.loc 1 40 1
  42 0004 00BF     		nop
  43 0006 BD46     		mov	sp, r7
  44              	.LCFI2:
  45              		.cfi_def_cfa_register 13
  46              		@ sp needed
  47 0008 5DF8047B 		ldr	r7, [sp], #4
  48              	.LCFI3:
  49              		.cfi_restore 7
  50              		.cfi_def_cfa_offset 0
  51 000c 7047     		bx	lr
  52              		.cfi_endproc
  53              	.LFE0:
  55              		.section	.text._ZN8touchgfx4GPIO3setENS0_7GPIO_IDE,"ax",%progbits
  56              		.align	1
  57              		.global	_ZN8touchgfx4GPIO3setENS0_7GPIO_IDE
  58              		.syntax unified
  59              		.thumb
  60              		.thumb_func
  61              		.fpu fpv4-sp-d16
  63              	_ZN8touchgfx4GPIO3setENS0_7GPIO_IDE:
  64              	.LFB1:
  41:Src/TouchGFXGPIO.cpp **** 
  42:Src/TouchGFXGPIO.cpp **** /*
  43:Src/TouchGFXGPIO.cpp ****  * Sets a pin high.
  44:Src/TouchGFXGPIO.cpp ****  */
  45:Src/TouchGFXGPIO.cpp **** void GPIO::set(GPIO_ID id)
  46:Src/TouchGFXGPIO.cpp **** {
  65              		.loc 1 46 1
  66              		.cfi_startproc
  67              		@ args = 0, pretend = 0, frame = 8
  68              		@ frame_needed = 1, uses_anonymous_args = 0
  69              		@ link register save eliminated.
  70 0000 80B4     		push	{r7}
  71              	.LCFI4:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s 			page 3


  72              		.cfi_def_cfa_offset 4
  73              		.cfi_offset 7, -4
  74 0002 83B0     		sub	sp, sp, #12
  75              	.LCFI5:
  76              		.cfi_def_cfa_offset 16
  77 0004 00AF     		add	r7, sp, #0
  78              	.LCFI6:
  79              		.cfi_def_cfa_register 7
  80 0006 0346     		mov	r3, r0
  81 0008 FB71     		strb	r3, [r7, #7]
  47:Src/TouchGFXGPIO.cpp **** 
  48:Src/TouchGFXGPIO.cpp **** }
  82              		.loc 1 48 1
  83 000a 00BF     		nop
  84 000c 0C37     		adds	r7, r7, #12
  85              	.LCFI7:
  86              		.cfi_def_cfa_offset 4
  87 000e BD46     		mov	sp, r7
  88              	.LCFI8:
  89              		.cfi_def_cfa_register 13
  90              		@ sp needed
  91 0010 5DF8047B 		ldr	r7, [sp], #4
  92              	.LCFI9:
  93              		.cfi_restore 7
  94              		.cfi_def_cfa_offset 0
  95 0014 7047     		bx	lr
  96              		.cfi_endproc
  97              	.LFE1:
  99              		.section	.text._ZN8touchgfx4GPIO5clearENS0_7GPIO_IDE,"ax",%progbits
 100              		.align	1
 101              		.global	_ZN8touchgfx4GPIO5clearENS0_7GPIO_IDE
 102              		.syntax unified
 103              		.thumb
 104              		.thumb_func
 105              		.fpu fpv4-sp-d16
 107              	_ZN8touchgfx4GPIO5clearENS0_7GPIO_IDE:
 108              	.LFB2:
  49:Src/TouchGFXGPIO.cpp **** 
  50:Src/TouchGFXGPIO.cpp **** /*
  51:Src/TouchGFXGPIO.cpp ****  * Sets a pin low.
  52:Src/TouchGFXGPIO.cpp ****  */
  53:Src/TouchGFXGPIO.cpp **** void GPIO::clear(GPIO_ID id)
  54:Src/TouchGFXGPIO.cpp **** {
 109              		.loc 1 54 1
 110              		.cfi_startproc
 111              		@ args = 0, pretend = 0, frame = 8
 112              		@ frame_needed = 1, uses_anonymous_args = 0
 113              		@ link register save eliminated.
 114 0000 80B4     		push	{r7}
 115              	.LCFI10:
 116              		.cfi_def_cfa_offset 4
 117              		.cfi_offset 7, -4
 118 0002 83B0     		sub	sp, sp, #12
 119              	.LCFI11:
 120              		.cfi_def_cfa_offset 16
 121 0004 00AF     		add	r7, sp, #0
 122              	.LCFI12:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s 			page 4


 123              		.cfi_def_cfa_register 7
 124 0006 0346     		mov	r3, r0
 125 0008 FB71     		strb	r3, [r7, #7]
  55:Src/TouchGFXGPIO.cpp **** 
  56:Src/TouchGFXGPIO.cpp **** }
 126              		.loc 1 56 1
 127 000a 00BF     		nop
 128 000c 0C37     		adds	r7, r7, #12
 129              	.LCFI13:
 130              		.cfi_def_cfa_offset 4
 131 000e BD46     		mov	sp, r7
 132              	.LCFI14:
 133              		.cfi_def_cfa_register 13
 134              		@ sp needed
 135 0010 5DF8047B 		ldr	r7, [sp], #4
 136              	.LCFI15:
 137              		.cfi_restore 7
 138              		.cfi_def_cfa_offset 0
 139 0014 7047     		bx	lr
 140              		.cfi_endproc
 141              	.LFE2:
 143              		.section	.text._ZN8touchgfx4GPIO6toggleENS0_7GPIO_IDE,"ax",%progbits
 144              		.align	1
 145              		.global	_ZN8touchgfx4GPIO6toggleENS0_7GPIO_IDE
 146              		.syntax unified
 147              		.thumb
 148              		.thumb_func
 149              		.fpu fpv4-sp-d16
 151              	_ZN8touchgfx4GPIO6toggleENS0_7GPIO_IDE:
 152              	.LFB3:
  57:Src/TouchGFXGPIO.cpp **** 
  58:Src/TouchGFXGPIO.cpp **** /*
  59:Src/TouchGFXGPIO.cpp ****  * Toggles a pin.
  60:Src/TouchGFXGPIO.cpp ****  */
  61:Src/TouchGFXGPIO.cpp **** void GPIO::toggle(GPIO_ID id)
  62:Src/TouchGFXGPIO.cpp **** {
 153              		.loc 1 62 1
 154              		.cfi_startproc
 155              		@ args = 0, pretend = 0, frame = 8
 156              		@ frame_needed = 1, uses_anonymous_args = 0
 157              		@ link register save eliminated.
 158 0000 80B4     		push	{r7}
 159              	.LCFI16:
 160              		.cfi_def_cfa_offset 4
 161              		.cfi_offset 7, -4
 162 0002 83B0     		sub	sp, sp, #12
 163              	.LCFI17:
 164              		.cfi_def_cfa_offset 16
 165 0004 00AF     		add	r7, sp, #0
 166              	.LCFI18:
 167              		.cfi_def_cfa_register 7
 168 0006 0346     		mov	r3, r0
 169 0008 FB71     		strb	r3, [r7, #7]
  63:Src/TouchGFXGPIO.cpp **** 
  64:Src/TouchGFXGPIO.cpp **** }
 170              		.loc 1 64 1
 171 000a 00BF     		nop
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s 			page 5


 172 000c 0C37     		adds	r7, r7, #12
 173              	.LCFI19:
 174              		.cfi_def_cfa_offset 4
 175 000e BD46     		mov	sp, r7
 176              	.LCFI20:
 177              		.cfi_def_cfa_register 13
 178              		@ sp needed
 179 0010 5DF8047B 		ldr	r7, [sp], #4
 180              	.LCFI21:
 181              		.cfi_restore 7
 182              		.cfi_def_cfa_offset 0
 183 0014 7047     		bx	lr
 184              		.cfi_endproc
 185              	.LFE3:
 187              		.section	.text._ZN8touchgfx4GPIO3getENS0_7GPIO_IDE,"ax",%progbits
 188              		.align	1
 189              		.global	_ZN8touchgfx4GPIO3getENS0_7GPIO_IDE
 190              		.syntax unified
 191              		.thumb
 192              		.thumb_func
 193              		.fpu fpv4-sp-d16
 195              	_ZN8touchgfx4GPIO3getENS0_7GPIO_IDE:
 196              	.LFB4:
  65:Src/TouchGFXGPIO.cpp **** 
  66:Src/TouchGFXGPIO.cpp **** /*
  67:Src/TouchGFXGPIO.cpp ****  * Gets the state of a pin.
  68:Src/TouchGFXGPIO.cpp ****  */
  69:Src/TouchGFXGPIO.cpp **** bool GPIO::get(GPIO_ID id)
  70:Src/TouchGFXGPIO.cpp **** {
 197              		.loc 1 70 1
 198              		.cfi_startproc
 199              		@ args = 0, pretend = 0, frame = 8
 200              		@ frame_needed = 1, uses_anonymous_args = 0
 201              		@ link register save eliminated.
 202 0000 80B4     		push	{r7}
 203              	.LCFI22:
 204              		.cfi_def_cfa_offset 4
 205              		.cfi_offset 7, -4
 206 0002 83B0     		sub	sp, sp, #12
 207              	.LCFI23:
 208              		.cfi_def_cfa_offset 16
 209 0004 00AF     		add	r7, sp, #0
 210              	.LCFI24:
 211              		.cfi_def_cfa_register 7
 212 0006 0346     		mov	r3, r0
 213 0008 FB71     		strb	r3, [r7, #7]
  71:Src/TouchGFXGPIO.cpp ****     return false;
 214              		.loc 1 71 12
 215 000a 0023     		movs	r3, #0
  72:Src/TouchGFXGPIO.cpp **** }
 216              		.loc 1 72 1
 217 000c 1846     		mov	r0, r3
 218 000e 0C37     		adds	r7, r7, #12
 219              	.LCFI25:
 220              		.cfi_def_cfa_offset 4
 221 0010 BD46     		mov	sp, r7
 222              	.LCFI26:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s 			page 6


 223              		.cfi_def_cfa_register 13
 224              		@ sp needed
 225 0012 5DF8047B 		ldr	r7, [sp], #4
 226              	.LCFI27:
 227              		.cfi_restore 7
 228              		.cfi_def_cfa_offset 0
 229 0016 7047     		bx	lr
 230              		.cfi_endproc
 231              	.LFE4:
 233              		.text
 234              	.Letext0:
 235              		.file 2 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/GPIO.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s 			page 7


DEFINED SYMBOLS
                            *ABS*:0000000000000000 TouchGFXGPIO.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:18     .text._ZN8touchgfx4GPIO4initEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:26     .text._ZN8touchgfx4GPIO4initEv:0000000000000000 _ZN8touchgfx4GPIO4initEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:56     .text._ZN8touchgfx4GPIO3setENS0_7GPIO_IDE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:63     .text._ZN8touchgfx4GPIO3setENS0_7GPIO_IDE:0000000000000000 _ZN8touchgfx4GPIO3setENS0_7GPIO_IDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:100    .text._ZN8touchgfx4GPIO5clearENS0_7GPIO_IDE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:107    .text._ZN8touchgfx4GPIO5clearENS0_7GPIO_IDE:0000000000000000 _ZN8touchgfx4GPIO5clearENS0_7GPIO_IDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:144    .text._ZN8touchgfx4GPIO6toggleENS0_7GPIO_IDE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:151    .text._ZN8touchgfx4GPIO6toggleENS0_7GPIO_IDE:0000000000000000 _ZN8touchgfx4GPIO6toggleENS0_7GPIO_IDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:188    .text._ZN8touchgfx4GPIO3getENS0_7GPIO_IDE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccE7A6rk.s:195    .text._ZN8touchgfx4GPIO3getENS0_7GPIO_IDE:0000000000000000 _ZN8touchgfx4GPIO3getENS0_7GPIO_IDE
                           .group:0000000000000000 wm4.0.8f82b9771446a4c5d395a560643408f9

NO UNDEFINED SYMBOLS
