ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 1


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
  13              		.file	"TouchGFXGeneratedHAL.cpp"
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
  78              		.section	.rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE,"a"
  79              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 2


  82              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
  83 0000 FEFF     		.short	-2
  84              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
  85              		.align	1
  88              	_ZN8touchgfxL14BITMAP_INVALIDE:
  89 0000 FFFF     		.short	-1
  90              		.section	.text._ZN8touchgfx3HALD2Ev,"axG",%progbits,_ZN8touchgfx3HALD5Ev,comdat
  91              		.align	1
  92              		.weak	_ZN8touchgfx3HALD2Ev
  93              		.arch armv7e-m
  94              		.syntax unified
  95              		.thumb
  96              		.thumb_func
  97              		.fpu fpv4-sp-d16
  99              	_ZN8touchgfx3HALD2Ev:
 100              	.LFB315:
 101              		.file 1 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp"
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
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** /**
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  * Hardware Abstraction Layer.
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****  *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 3


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 4


  98:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         FRAME_BUFFER_HEIGHT = DISPLAY_HEIGHT;
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         nativeDisplayOrientation = ((width >= height) ? ORIENTATION_LANDSCAPE : ORIENTATION_PORTRAI
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Finalizes an instance of the HAL class. */
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual ~HAL()
 102              		.loc 1 103 13
 103              		.cfi_startproc
 104              		@ args = 0, pretend = 0, frame = 8
 105              		@ frame_needed = 1, uses_anonymous_args = 0
 106              		@ link register save eliminated.
 107 0000 80B4     		push	{r7}
 108              	.LCFI0:
 109              		.cfi_def_cfa_offset 4
 110              		.cfi_offset 7, -4
 111 0002 83B0     		sub	sp, sp, #12
 112              	.LCFI1:
 113              		.cfi_def_cfa_offset 16
 114 0004 00AF     		add	r7, sp, #0
 115              	.LCFI2:
 116              		.cfi_def_cfa_register 7
 117 0006 7860     		str	r0, [r7, #4]
 118              	.LBB2:
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 119              		.loc 1 104 5
 120 0008 044A     		ldr	r2, .L3
 121 000a 7B68     		ldr	r3, [r7, #4]
 122 000c 1A60     		str	r2, [r3]
 123              	.LBE2:
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 124              		.loc 1 105 5
 125 000e 7B68     		ldr	r3, [r7, #4]
 126 0010 1846     		mov	r0, r3
 127 0012 0C37     		adds	r7, r7, #12
 128              	.LCFI3:
 129              		.cfi_def_cfa_offset 4
 130 0014 BD46     		mov	sp, r7
 131              	.LCFI4:
 132              		.cfi_def_cfa_register 13
 133              		@ sp needed
 134 0016 5DF8047B 		ldr	r7, [sp], #4
 135              	.LCFI5:
 136              		.cfi_restore 7
 137              		.cfi_def_cfa_offset 0
 138 001a 7047     		bx	lr
 139              	.L4:
 140              		.align	2
 141              	.L3:
 142 001c 08000000 		.word	_ZTVN8touchgfx3HALE+8
 143              		.cfi_endproc
 144              	.LFE315:
 146              		.weak	_ZN8touchgfx3HALD1Ev
 147              		.thumb_set _ZN8touchgfx3HALD1Ev,_ZN8touchgfx3HALD2Ev
 148              		.section	.text._ZN8touchgfx3HALD0Ev,"axG",%progbits,_ZN8touchgfx3HALD5Ev,comdat
 149              		.align	1
 150              		.weak	_ZN8touchgfx3HALD0Ev
 151              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 5


 152              		.thumb
 153              		.thumb_func
 154              		.fpu fpv4-sp-d16
 156              	_ZN8touchgfx3HALD0Ev:
 157              	.LFB317:
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 158              		.loc 1 103 13
 159              		.cfi_startproc
 160              		@ args = 0, pretend = 0, frame = 8
 161              		@ frame_needed = 1, uses_anonymous_args = 0
 162 0000 80B5     		push	{r7, lr}
 163              	.LCFI6:
 164              		.cfi_def_cfa_offset 8
 165              		.cfi_offset 7, -8
 166              		.cfi_offset 14, -4
 167 0002 82B0     		sub	sp, sp, #8
 168              	.LCFI7:
 169              		.cfi_def_cfa_offset 16
 170 0004 00AF     		add	r7, sp, #0
 171              	.LCFI8:
 172              		.cfi_def_cfa_register 7
 173 0006 7860     		str	r0, [r7, #4]
 174              		.loc 1 105 5
 175 0008 7868     		ldr	r0, [r7, #4]
 176 000a FFF7FEFF 		bl	_ZN8touchgfx3HALD1Ev
 177 000e 7C21     		movs	r1, #124
 178 0010 7868     		ldr	r0, [r7, #4]
 179 0012 FFF7FEFF 		bl	_ZdlPvj
 180 0016 7B68     		ldr	r3, [r7, #4]
 181 0018 1846     		mov	r0, r3
 182 001a 0837     		adds	r7, r7, #8
 183              	.LCFI9:
 184              		.cfi_def_cfa_offset 8
 185 001c BD46     		mov	sp, r7
 186              	.LCFI10:
 187              		.cfi_def_cfa_register 13
 188              		@ sp needed
 189 001e 80BD     		pop	{r7, pc}
 190              		.cfi_endproc
 191              	.LFE317:
 193              		.section	.text._ZN8touchgfx3HAL21setDisplayOrientationENS_18DisplayOrientationE,"axG",%progbits,_Z
 194              		.align	1
 195              		.weak	_ZN8touchgfx3HAL21setDisplayOrientationENS_18DisplayOrientationE
 196              		.syntax unified
 197              		.thumb
 198              		.thumb_func
 199              		.fpu fpv4-sp-d16
 201              	_ZN8touchgfx3HAL21setDisplayOrientationENS_18DisplayOrientationE:
 202              	.LFB319:
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets the HAL instance.
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The HAL instance.
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static HAL* getInstance()
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 6


 114:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return instance;
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
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
 203              		.loc 1 126 18
 204              		.cfi_startproc
 205              		@ args = 0, pretend = 0, frame = 8
 206              		@ frame_needed = 1, uses_anonymous_args = 0
 207              		@ link register save eliminated.
 208 0000 80B4     		push	{r7}
 209              	.LCFI11:
 210              		.cfi_def_cfa_offset 4
 211              		.cfi_offset 7, -4
 212 0002 83B0     		sub	sp, sp, #12
 213              	.LCFI12:
 214              		.cfi_def_cfa_offset 16
 215 0004 00AF     		add	r7, sp, #0
 216              	.LCFI13:
 217              		.cfi_def_cfa_register 7
 218 0006 7860     		str	r0, [r7, #4]
 219 0008 0B46     		mov	r3, r1
 220 000a FB70     		strb	r3, [r7, #3]
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         requestedOrientation = orientation;
 221              		.loc 1 128 30
 222 000c 7B68     		ldr	r3, [r7, #4]
 223 000e FA78     		ldrb	r2, [r7, #3]
 224 0010 83F87420 		strb	r2, [r3, #116]
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         displayOrientationChangeRequested = true;
 225              		.loc 1 129 43
 226 0014 7B68     		ldr	r3, [r7, #4]
 227 0016 0122     		movs	r2, #1
 228 0018 83F87520 		strb	r2, [r3, #117]
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 229              		.loc 1 130 5
 230 001c 00BF     		nop
 231 001e 0C37     		adds	r7, r7, #12
 232              	.LCFI14:
 233              		.cfi_def_cfa_offset 4
 234 0020 BD46     		mov	sp, r7
 235              	.LCFI15:
 236              		.cfi_def_cfa_register 13
 237              		@ sp needed
 238 0022 5DF8047B 		ldr	r7, [sp], #4
 239              	.LCFI16:
 240              		.cfi_restore 7
 241              		.cfi_def_cfa_offset 0
 242 0026 7047     		bx	lr
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 7


 243              		.cfi_endproc
 244              	.LFE319:
 246              		.section	.text._ZN8touchgfx3HAL11getBlitCapsEv,"axG",%progbits,_ZN8touchgfx3HAL11getBlitCapsEv,com
 247              		.align	1
 248              		.weak	_ZN8touchgfx3HAL11getBlitCapsEv
 249              		.syntax unified
 250              		.thumb
 251              		.thumb_func
 252              		.fpu fpv4-sp-d16
 254              	_ZN8touchgfx3HAL11getBlitCapsEv:
 255              	.LFB325:
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 8


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 9


 234:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 235:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (instance->useAuxiliaryLCD && instance->auxiliaryLCD)
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return *instance->auxiliaryLCD;
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return instance->lcdRef;
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
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
 256              		.loc 1 285 28
 257              		.cfi_startproc
 258              		@ args = 0, pretend = 0, frame = 8
 259              		@ frame_needed = 1, uses_anonymous_args = 0
 260 0000 80B5     		push	{r7, lr}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 10


 261              	.LCFI17:
 262              		.cfi_def_cfa_offset 8
 263              		.cfi_offset 7, -8
 264              		.cfi_offset 14, -4
 265 0002 82B0     		sub	sp, sp, #8
 266              	.LCFI18:
 267              		.cfi_def_cfa_offset 16
 268 0004 00AF     		add	r7, sp, #0
 269              	.LCFI19:
 270              		.cfi_def_cfa_register 7
 271 0006 7860     		str	r0, [r7, #4]
 286:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 287:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (useDMAAcceleration)
 272              		.loc 1 287 13
 273 0008 7B68     		ldr	r3, [r7, #4]
 274 000a 93F87730 		ldrb	r3, [r3, #119]	@ zero_extendqisi2
 275              		.loc 1 287 9
 276 000e 002B     		cmp	r3, #0
 277 0010 09D0     		beq	.L9
 288:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 289:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return dma.getBlitCaps();
 278              		.loc 1 289 20
 279 0012 7B68     		ldr	r3, [r7, #4]
 280 0014 5A68     		ldr	r2, [r3, #4]
 281 0016 7B68     		ldr	r3, [r7, #4]
 282 0018 5B68     		ldr	r3, [r3, #4]
 283              		.loc 1 289 36
 284 001a 1B68     		ldr	r3, [r3]
 285 001c 1B68     		ldr	r3, [r3]
 286              		.loc 1 289 35
 287 001e 1046     		mov	r0, r2
 288 0020 9847     		blx	r3
 289              	.LVL0:
 290 0022 0346     		mov	r3, r0
 291              		.loc 1 289 36
 292 0024 00E0     		b	.L10
 293              	.L9:
 290:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 291:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         else
 292:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 293:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return static_cast<BlitOperations>(0);
 294              		.loc 1 293 49
 295 0026 0023     		movs	r3, #0
 296              	.L10:
 294:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 295:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 297              		.loc 1 295 5
 298 0028 1846     		mov	r0, r3
 299 002a 0837     		adds	r7, r7, #8
 300              	.LCFI20:
 301              		.cfi_def_cfa_offset 8
 302 002c BD46     		mov	sp, r7
 303              	.LCFI21:
 304              		.cfi_def_cfa_register 13
 305              		@ sp needed
 306 002e 80BD     		pop	{r7, pc}
 307              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 11


 308              	.LFE325:
 310              		.section	.text._ZN8touchgfx3HAL15backPorchExitedEv,"axG",%progbits,_ZN8touchgfx3HAL15backPorchExit
 311              		.align	1
 312              		.weak	_ZN8touchgfx3HAL15backPorchExitedEv
 313              		.syntax unified
 314              		.thumb
 315              		.thumb_func
 316              		.fpu fpv4-sp-d16
 318              	_ZN8touchgfx3HAL15backPorchExitedEv:
 319              	.LFB332:
 296:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 297:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 12


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 13


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 14


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 15


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 16


 571:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         vSyncCnt++;
 572:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 573:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 574:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 575:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Has to be called from within the LCD IRQ rutine when the Back Porch Exit is reached.
 576:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 577:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Has to be called from within the LCD IRQ rutine when the Back Porch Exit is reached.
 578:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 579:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void backPorchExited()
 320              		.loc 1 579 18
 321              		.cfi_startproc
 322              		@ args = 0, pretend = 0, frame = 8
 323              		@ frame_needed = 1, uses_anonymous_args = 0
 324 0000 80B5     		push	{r7, lr}
 325              	.LCFI22:
 326              		.cfi_def_cfa_offset 8
 327              		.cfi_offset 7, -8
 328              		.cfi_offset 14, -4
 329 0002 82B0     		sub	sp, sp, #8
 330              	.LCFI23:
 331              		.cfi_def_cfa_offset 16
 332 0004 00AF     		add	r7, sp, #0
 333              	.LCFI24:
 334              		.cfi_def_cfa_register 7
 335 0006 7860     		str	r0, [r7, #4]
 580:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 581:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         swapFrameBuffers();
 336              		.loc 1 581 25
 337 0008 7868     		ldr	r0, [r7, #4]
 338 000a FFF7FEFF 		bl	_ZN8touchgfx3HAL16swapFrameBuffersEv
 582:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         tick();
 339              		.loc 1 582 14
 340 000e 7B68     		ldr	r3, [r7, #4]
 341 0010 1B68     		ldr	r3, [r3]
 342 0012 A033     		adds	r3, r3, #160
 343 0014 1B68     		ldr	r3, [r3]
 344              		.loc 1 582 13
 345 0016 7868     		ldr	r0, [r7, #4]
 346 0018 9847     		blx	r3
 347              	.LVL1:
 583:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 348              		.loc 1 583 5
 349 001a 00BF     		nop
 350 001c 0837     		adds	r7, r7, #8
 351              	.LCFI25:
 352              		.cfi_def_cfa_offset 8
 353 001e BD46     		mov	sp, r7
 354              	.LCFI26:
 355              		.cfi_def_cfa_register 13
 356              		@ sp needed
 357 0020 80BD     		pop	{r7, pc}
 358              		.cfi_endproc
 359              	.LFE332:
 361              		.section	.text._ZN8touchgfx3HAL9sampleKeyERh,"axG",%progbits,_ZN8touchgfx3HAL9sampleKeyERh,comdat
 362              		.align	1
 363              		.weak	_ZN8touchgfx3HAL9sampleKeyERh
 364              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 17


 365              		.thumb
 366              		.thumb_func
 367              		.fpu fpv4-sp-d16
 369              	_ZN8touchgfx3HAL9sampleKeyERh:
 370              	.LFB333:
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
 371              		.loc 1 611 18
 372              		.cfi_startproc
 373              		@ args = 0, pretend = 0, frame = 8
 374              		@ frame_needed = 1, uses_anonymous_args = 0
 375              		@ link register save eliminated.
 376 0000 80B4     		push	{r7}
 377              	.LCFI27:
 378              		.cfi_def_cfa_offset 4
 379              		.cfi_offset 7, -4
 380 0002 83B0     		sub	sp, sp, #12
 381              	.LCFI28:
 382              		.cfi_def_cfa_offset 16
 383 0004 00AF     		add	r7, sp, #0
 384              	.LCFI29:
 385              		.cfi_def_cfa_register 7
 386 0006 7860     		str	r0, [r7, #4]
 387 0008 3960     		str	r1, [r7]
 612:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 613:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return false;
 388              		.loc 1 613 16
 389 000a 0023     		movs	r3, #0
 614:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 390              		.loc 1 614 5
 391 000c 1846     		mov	r0, r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 18


 392 000e 0C37     		adds	r7, r7, #12
 393              	.LCFI30:
 394              		.cfi_def_cfa_offset 4
 395 0010 BD46     		mov	sp, r7
 396              	.LCFI31:
 397              		.cfi_def_cfa_register 13
 398              		@ sp needed
 399 0012 5DF8047B 		ldr	r7, [sp], #4
 400              	.LCFI32:
 401              		.cfi_restore 7
 402              		.cfi_def_cfa_offset 0
 403 0016 7047     		bx	lr
 404              		.cfi_endproc
 405              	.LFE333:
 407              		.section	.rodata
 408              		.align	2
 409              	.LC0:
 410 0000 6672616D 		.ascii	"frameBuffer != 0 && \"A framebuffer address must be"
 410      65427566 
 410      66657220 
 410      213D2030 
 410      20262620 
 411 0032 20736574 		.ascii	" set\"\000"
 411      2200
 412              		.align	2
 413              	.LC1:
 414 0038 76697274 		.ascii	"virtual void touchgfx::HAL::setFrameBufferStartAddr"
 414      75616C20 
 414      766F6964 
 414      20746F75 
 414      63686766 
 415 006b 65737365 		.ascii	"esses(void*, void*, void*)\000"
 415      7328766F 
 415      69642A2C 
 415      20766F69 
 415      642A2C20 
 416 0086 0000     		.align	2
 417              	.LC2:
 418 0088 4D696464 		.ascii	"Middlewares/ST/touchgfx/framework/include/touchgfx/"
 418      6C657761 
 418      7265732F 
 418      53542F74 
 418      6F756368 
 419 00bb 68616C2F 		.ascii	"hal/HAL.hpp\000"
 419      48414C2E 
 419      68707000 
 420              		.section	.text._ZN8touchgfx3HAL28setFrameBufferStartAddressesEPvS1_S1_,"axG",%progbits,_ZN8touchgf
 421              		.align	1
 422              		.weak	_ZN8touchgfx3HAL28setFrameBufferStartAddressesEPvS1_S1_
 423              		.syntax unified
 424              		.thumb
 425              		.thumb_func
 426              		.fpu fpv4-sp-d16
 428              	_ZN8touchgfx3HAL28setFrameBufferStartAddressesEPvS1_S1_:
 429              	.LFB336:
 615:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 616:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 19


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
 430              		.loc 1 658 18
 431              		.cfi_startproc
 432              		@ args = 0, pretend = 0, frame = 16
 433              		@ frame_needed = 1, uses_anonymous_args = 0
 434 0000 80B5     		push	{r7, lr}
 435              	.LCFI33:
 436              		.cfi_def_cfa_offset 8
 437              		.cfi_offset 7, -8
 438              		.cfi_offset 14, -4
 439 0002 84B0     		sub	sp, sp, #16
 440              	.LCFI34:
 441              		.cfi_def_cfa_offset 24
 442 0004 00AF     		add	r7, sp, #0
 443              	.LCFI35:
 444              		.cfi_def_cfa_register 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 20


 445 0006 F860     		str	r0, [r7, #12]
 446 0008 B960     		str	r1, [r7, #8]
 447 000a 7A60     		str	r2, [r7, #4]
 448 000c 3B60     		str	r3, [r7]
 659:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 660:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         assert(frameBuffer != 0 && "A framebuffer address must be set");
 449              		.loc 1 660 9
 450 000e BB68     		ldr	r3, [r7, #8]
 451 0010 002B     		cmp	r3, #0
 452 0012 06D1     		bne	.L15
 453              		.loc 1 660 9 is_stmt 0 discriminator 1
 454 0014 114B     		ldr	r3, .L16
 455 0016 124A     		ldr	r2, .L16+4
 456 0018 4FF42571 		mov	r1, #660
 457 001c 1148     		ldr	r0, .L16+8
 458 001e FFF7FEFF 		bl	__assert_func
 459              	.L15:
 661:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         frameBuffer0 = reinterpret_cast<uint16_t*>(frameBuffer);
 460              		.loc 1 661 22 is_stmt 1
 461 0022 FB68     		ldr	r3, [r7, #12]
 462 0024 BA68     		ldr	r2, [r7, #8]
 463 0026 DA63     		str	r2, [r3, #60]
 662:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         frameBuffer1 = reinterpret_cast<uint16_t*>(doubleBuffer);
 464              		.loc 1 662 22
 465 0028 FB68     		ldr	r3, [r7, #12]
 466 002a 7A68     		ldr	r2, [r7, #4]
 467 002c 1A64     		str	r2, [r3, #64]
 663:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         frameBuffer2 = reinterpret_cast<uint16_t*>(animationStorage);
 468              		.loc 1 663 22
 469 002e FB68     		ldr	r3, [r7, #12]
 470 0030 3A68     		ldr	r2, [r7]
 471 0032 5A64     		str	r2, [r3, #68]
 664:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         USE_DOUBLE_BUFFERING = doubleBuffer != 0;
 472              		.loc 1 664 45
 473 0034 7B68     		ldr	r3, [r7, #4]
 474 0036 002B     		cmp	r3, #0
 475 0038 14BF     		ite	ne
 476 003a 0123     		movne	r3, #1
 477 003c 0023     		moveq	r3, #0
 478 003e DAB2     		uxtb	r2, r3
 479              		.loc 1 664 30
 480 0040 094B     		ldr	r3, .L16+12
 481 0042 1A70     		strb	r2, [r3]
 665:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         USE_ANIMATION_STORAGE = animationStorage != 0;
 482              		.loc 1 665 50
 483 0044 3B68     		ldr	r3, [r7]
 484 0046 002B     		cmp	r3, #0
 485 0048 14BF     		ite	ne
 486 004a 0123     		movne	r3, #1
 487 004c 0023     		moveq	r3, #0
 488 004e DAB2     		uxtb	r2, r3
 489              		.loc 1 665 31
 490 0050 064B     		ldr	r3, .L16+16
 491 0052 1A70     		strb	r2, [r3]
 666:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 492              		.loc 1 666 5
 493 0054 00BF     		nop
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 21


 494 0056 1037     		adds	r7, r7, #16
 495              	.LCFI36:
 496              		.cfi_def_cfa_offset 8
 497 0058 BD46     		mov	sp, r7
 498              	.LCFI37:
 499              		.cfi_def_cfa_register 13
 500              		@ sp needed
 501 005a 80BD     		pop	{r7, pc}
 502              	.L17:
 503              		.align	2
 504              	.L16:
 505 005c 00000000 		.word	.LC0
 506 0060 38000000 		.word	.LC1
 507 0064 88000000 		.word	.LC2
 508 0068 00000000 		.word	_ZN8touchgfx3HAL20USE_DOUBLE_BUFFERINGE
 509 006c 00000000 		.word	_ZN8touchgfx3HAL21USE_ANIMATION_STORAGEE
 510              		.cfi_endproc
 511              	.LFE336:
 513              		.section	.text._ZNK8touchgfx3HAL18getFlashDataReaderEv,"axG",%progbits,_ZNK8touchgfx3HAL18getFlash
 514              		.align	1
 515              		.weak	_ZNK8touchgfx3HAL18getFlashDataReaderEv
 516              		.syntax unified
 517              		.thumb
 518              		.thumb_func
 519              		.fpu fpv4-sp-d16
 521              	_ZNK8touchgfx3HAL18getFlashDataReaderEv:
 522              	.LFB346:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 22


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 23


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
 523              		.loc 1 801 30
 524              		.cfi_startproc
 525              		@ args = 0, pretend = 0, frame = 8
 526              		@ frame_needed = 1, uses_anonymous_args = 0
 527              		@ link register save eliminated.
 528 0000 80B4     		push	{r7}
 529              	.LCFI38:
 530              		.cfi_def_cfa_offset 4
 531              		.cfi_offset 7, -4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 24


 532 0002 83B0     		sub	sp, sp, #12
 533              	.LCFI39:
 534              		.cfi_def_cfa_offset 16
 535 0004 00AF     		add	r7, sp, #0
 536              	.LCFI40:
 537              		.cfi_def_cfa_register 7
 538 0006 7860     		str	r0, [r7, #4]
 802:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 803:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return 0;
 539              		.loc 1 803 16
 540 0008 0023     		movs	r3, #0
 804:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 541              		.loc 1 804 5
 542 000a 1846     		mov	r0, r3
 543 000c 0C37     		adds	r7, r7, #12
 544              	.LCFI41:
 545              		.cfi_def_cfa_offset 4
 546 000e BD46     		mov	sp, r7
 547              	.LCFI42:
 548              		.cfi_def_cfa_register 13
 549              		@ sp needed
 550 0010 5DF8047B 		ldr	r7, [sp], #4
 551              	.LCFI43:
 552              		.cfi_restore 7
 553              		.cfi_def_cfa_offset 0
 554 0014 7047     		bx	lr
 555              		.cfi_endproc
 556              	.LFE346:
 558              		.section	.text._ZN8touchgfx3HAL9taskDelayEt,"axG",%progbits,_ZN8touchgfx3HAL9taskDelayEt,comdat
 559              		.align	1
 560              		.weak	_ZN8touchgfx3HAL9taskDelayEt
 561              		.syntax unified
 562              		.thumb
 563              		.thumb_func
 564              		.fpu fpv4-sp-d16
 566              	_ZN8touchgfx3HAL9taskDelayEt:
 567              	.LFB353:
 805:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 806:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 807:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets the finger size in pixels. Setting the finger size to a size of more than 1
 808:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * pixel will emulate a finger of width and height of 2*(fingersize-1)+1. This can be
 809:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * especially useful when trying to interact with small elements on a high ppi display.
 810:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * The finger size will influence which element is chosen as the point of interaction,
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 25


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 26


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 27


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
 568              		.loc 1 950 18
 569              		.cfi_startproc
 570              		@ args = 0, pretend = 0, frame = 8
 571              		@ frame_needed = 1, uses_anonymous_args = 0
 572 0000 80B5     		push	{r7, lr}
 573              	.LCFI44:
 574              		.cfi_def_cfa_offset 8
 575              		.cfi_offset 7, -8
 576              		.cfi_offset 14, -4
 577 0002 82B0     		sub	sp, sp, #8
 578              	.LCFI45:
 579              		.cfi_def_cfa_offset 16
 580 0004 00AF     		add	r7, sp, #0
 581              	.LCFI46:
 582              		.cfi_def_cfa_register 7
 583 0006 7860     		str	r0, [r7, #4]
 584 0008 0B46     		mov	r3, r1
 585 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 951:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 952:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (taskDelayFunc)
 586              		.loc 1 952 13
 587 000c 7B68     		ldr	r3, [r7, #4]
 588 000e 9B6B     		ldr	r3, [r3, #56]
 589              		.loc 1 952 9
 590 0010 002B     		cmp	r3, #0
 591 0012 04D0     		beq	.L22
 953:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 954:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             taskDelayFunc(ms);
 592              		.loc 1 954 13
 593 0014 7B68     		ldr	r3, [r7, #4]
 594 0016 9B6B     		ldr	r3, [r3, #56]
 595              		.loc 1 954 26
 596 0018 7A88     		ldrh	r2, [r7, #2]
 597 001a 1046     		mov	r0, r2
 598 001c 9847     		blx	r3
 599              	.LVL2:
 600              	.L22:
 955:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 956:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 601              		.loc 1 956 5
 602 001e 00BF     		nop
 603 0020 0837     		adds	r7, r7, #8
 604              	.LCFI47:
 605              		.cfi_def_cfa_offset 8
 606 0022 BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 28


 607              	.LCFI48:
 608              		.cfi_def_cfa_register 13
 609              		@ sp needed
 610 0024 80BD     		pop	{r7, pc}
 611              		.cfi_endproc
 612              	.LFE353:
 614              		.section	.text._ZN8touchgfx3HAL17getTFTCurrentLineEv,"axG",%progbits,_ZN8touchgfx3HAL17getTFTCurre
 615              		.align	1
 616              		.weak	_ZN8touchgfx3HAL17getTFTCurrentLineEv
 617              		.syntax unified
 618              		.thumb
 619              		.thumb_func
 620              		.fpu fpv4-sp-d16
 622              	_ZN8touchgfx3HAL17getTFTCurrentLineEv:
 623              	.LFB354:
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
 624              		.loc 1 977 22
 625              		.cfi_startproc
 626              		@ args = 0, pretend = 0, frame = 8
 627              		@ frame_needed = 1, uses_anonymous_args = 0
 628              		@ link register save eliminated.
 629 0000 80B4     		push	{r7}
 630              	.LCFI49:
 631              		.cfi_def_cfa_offset 4
 632              		.cfi_offset 7, -4
 633 0002 83B0     		sub	sp, sp, #12
 634              	.LCFI50:
 635              		.cfi_def_cfa_offset 16
 636 0004 00AF     		add	r7, sp, #0
 637              	.LCFI51:
 638              		.cfi_def_cfa_register 7
 639 0006 7860     		str	r0, [r7, #4]
 978:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 979:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return 0xFFFFu;
 640              		.loc 1 979 16
 641 0008 4FF6FF73 		movw	r3, #65535
 980:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 29


 642              		.loc 1 980 5
 643 000c 1846     		mov	r0, r3
 644 000e 0C37     		adds	r7, r7, #12
 645              	.LCFI52:
 646              		.cfi_def_cfa_offset 4
 647 0010 BD46     		mov	sp, r7
 648              	.LCFI53:
 649              		.cfi_def_cfa_register 13
 650              		@ sp needed
 651 0012 5DF8047B 		ldr	r7, [sp], #4
 652              	.LCFI54:
 653              		.cfi_restore 7
 654              		.cfi_def_cfa_offset 0
 655 0016 7047     		bx	lr
 656              		.cfi_endproc
 657              	.LFE354:
 659              		.section	.text._ZN8touchgfx3HAL10getDMATypeEv,"axG",%progbits,_ZN8touchgfx3HAL10getDMATypeEv,comda
 660              		.align	1
 661              		.weak	_ZN8touchgfx3HAL10getDMATypeEv
 662              		.syntax unified
 663              		.thumb
 664              		.thumb_func
 665              		.fpu fpv4-sp-d16
 667              	_ZN8touchgfx3HAL10getDMATypeEv:
 668              	.LFB355:
 981:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 982:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 983:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Function for obtaining the DMA type of the concrete DMA implementation. As default,
 984:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * will return DMA_TYPE_GENERIC type value.
 985:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 986:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return a DMAType value of the concrete DMA implementation.
 987:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 988:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual DMAType getDMAType()
 669              		.loc 1 988 21
 670              		.cfi_startproc
 671              		@ args = 0, pretend = 0, frame = 8
 672              		@ frame_needed = 1, uses_anonymous_args = 0
 673 0000 80B5     		push	{r7, lr}
 674              	.LCFI55:
 675              		.cfi_def_cfa_offset 8
 676              		.cfi_offset 7, -8
 677              		.cfi_offset 14, -4
 678 0002 82B0     		sub	sp, sp, #8
 679              	.LCFI56:
 680              		.cfi_def_cfa_offset 16
 681 0004 00AF     		add	r7, sp, #0
 682              	.LCFI57:
 683              		.cfi_def_cfa_register 7
 684 0006 7860     		str	r0, [r7, #4]
 989:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 990:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return dma.getDMAType();
 685              		.loc 1 990 16
 686 0008 7B68     		ldr	r3, [r7, #4]
 687 000a 5A68     		ldr	r2, [r3, #4]
 688 000c 7B68     		ldr	r3, [r7, #4]
 689 000e 5B68     		ldr	r3, [r3, #4]
 690              		.loc 1 990 31
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 30


 691 0010 1B68     		ldr	r3, [r3]
 692 0012 1833     		adds	r3, r3, #24
 693 0014 1B68     		ldr	r3, [r3]
 694              		.loc 1 990 30
 695 0016 1046     		mov	r0, r2
 696 0018 9847     		blx	r3
 697              	.LVL3:
 698 001a 0346     		mov	r3, r0
 991:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 699              		.loc 1 991 5
 700 001c 1846     		mov	r0, r3
 701 001e 0837     		adds	r7, r7, #8
 702              	.LCFI58:
 703              		.cfi_def_cfa_offset 8
 704 0020 BD46     		mov	sp, r7
 705              	.LCFI59:
 706              		.cfi_def_cfa_register 13
 707              		@ sp needed
 708 0022 80BD     		pop	{r7, pc}
 709              		.cfi_endproc
 710              	.LFE355:
 712              		.section	.text._ZN8touchgfx3HAL31performDisplayOrientationChangeEv,"axG",%progbits,_ZN8touchgfx3HA
 713              		.align	1
 714              		.weak	_ZN8touchgfx3HAL31performDisplayOrientationChangeEv
 715              		.syntax unified
 716              		.thumb
 717              		.thumb_func
 718              		.fpu fpv4-sp-d16
 720              	_ZN8touchgfx3HAL31performDisplayOrientationChangeEv:
 721              	.LFB359:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 31


1019:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
1020:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1021:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1022:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Get the auxiliary LCD class attached to the HAL instance if any.
1023:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1024:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A pointer on the axiliary LCD class attached to the HAL instance.
1025:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1026:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     LCD* getAuxiliaryLCD()
1027:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
1028:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return auxiliaryLCD;
1029:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
1030:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1031:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1032:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * A list of rendering methods.
1033:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1034:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @see setRenderingMethod
1035:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1036:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     enum RenderingMethod
1037:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
1038:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         SOFTWARE,
1039:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         HARDWARE
1040:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     };
1041:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1042:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1043:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Set current rendering method for cache maintenance.
1044:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1045:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * This function is used to keep track of previous rendering method and will determine if cache
1046:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1047:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param method The rendering method used.
1048:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1049:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     void setRenderingMethod(RenderingMethod method);
1050:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1051:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** protected:
1052:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** This function is called at each timer tick, depending on platform implementation. */
1053:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void tick();
1054:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1055:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1056:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Called when beginning to rendering a frame.
1057:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1058:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return true if rendering can begin, false otherwise.
1059:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1060:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual bool beginFrame();
1061:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1062:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Called when a rendering pass is completed. */
1063:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void endFrame();
1064:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1065:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1066:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Sets the framebuffer address used by the TFT controller.
1067:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1068:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param [in] address New framebuffer address.
1069:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1070:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void setTFTFrameBuffer(uint16_t* address) = 0;
1071:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1072:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1073:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets client framebuffer.
1074:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1075:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return The address of the framebuffer currently used by the framework to draw in.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 32


1076:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1077:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     uint16_t* getClientFrameBuffer()
1078:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
1079:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (USE_DOUBLE_BUFFERING && getTFTFrameBuffer() == frameBuffer0)
1080:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
1081:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return frameBuffer1;
1082:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
1083:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return frameBuffer0;
1084:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
1085:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1086:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1087:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Called by the touch driver to indicate a touch.
1088:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1089:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  x The x coordinate of the touch.
1090:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @param  y The y coordinate of the touch.
1091:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1092:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void touch(int32_t x, int32_t y);
1093:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1094:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Called by the touch driver to indicate that no touch is currently detected. */
1095:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void noTouch();
1096:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1097:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /** Perform the actual display orientation change. */
1098:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void performDisplayOrientationChange()
 722              		.loc 1 1098 18
 723              		.cfi_startproc
 724              		@ args = 0, pretend = 0, frame = 8
 725              		@ frame_needed = 1, uses_anonymous_args = 0
 726              		@ link register save eliminated.
 727 0000 80B4     		push	{r7}
 728              	.LCFI60:
 729              		.cfi_def_cfa_offset 4
 730              		.cfi_offset 7, -4
 731 0002 83B0     		sub	sp, sp, #12
 732              	.LCFI61:
 733              		.cfi_def_cfa_offset 16
 734 0004 00AF     		add	r7, sp, #0
 735              	.LCFI62:
 736              		.cfi_def_cfa_register 7
 737 0006 7860     		str	r0, [r7, #4]
1099:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
1100:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (requestedOrientation != nativeDisplayOrientation)
 738              		.loc 1 1100 13
 739 0008 7B68     		ldr	r3, [r7, #4]
 740 000a 93F87420 		ldrb	r2, [r3, #116]	@ zero_extendqisi2
 741              		.loc 1 1100 37
 742 000e 7B68     		ldr	r3, [r7, #4]
 743 0010 93F83430 		ldrb	r3, [r3, #52]	@ zero_extendqisi2
 744              		.loc 1 1100 9
 745 0014 9A42     		cmp	r2, r3
 746 0016 17D0     		beq	.L28
1101:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
1102:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             if (DISPLAY_ROTATION == rotate0)
 747              		.loc 1 1102 34
 748 0018 1A4B     		ldr	r3, .L31
 749 001a 1B78     		ldrb	r3, [r3]	@ zero_extendqisi2
 750              		.loc 1 1102 13
 751 001c 002B     		cmp	r3, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 33


 752 001e 2AD1     		bne	.L30
1103:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             {
1104:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****                 FRAME_BUFFER_WIDTH = DISPLAY_WIDTH;
 753              		.loc 1 1104 36
 754 0020 194B     		ldr	r3, .L31+4
 755 0022 1A88     		ldrh	r2, [r3]
 756 0024 194B     		ldr	r3, .L31+8
 757 0026 1A80     		strh	r2, [r3]	@ movhi
1105:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****                 FRAME_BUFFER_HEIGHT = DISPLAY_HEIGHT;
 758              		.loc 1 1105 37
 759 0028 194B     		ldr	r3, .L31+12
 760 002a 1A88     		ldrh	r2, [r3]
 761 002c 194B     		ldr	r3, .L31+16
 762 002e 1A80     		strh	r2, [r3]	@ movhi
1106:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****                 DISPLAY_HEIGHT = FRAME_BUFFER_WIDTH;
 763              		.loc 1 1106 32
 764 0030 164B     		ldr	r3, .L31+8
 765 0032 1A88     		ldrh	r2, [r3]
 766 0034 164B     		ldr	r3, .L31+12
 767 0036 1A80     		strh	r2, [r3]	@ movhi
1107:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****                 DISPLAY_WIDTH = FRAME_BUFFER_HEIGHT;
 768              		.loc 1 1107 31
 769 0038 164B     		ldr	r3, .L31+16
 770 003a 1A88     		ldrh	r2, [r3]
 771 003c 124B     		ldr	r3, .L31+4
 772 003e 1A80     		strh	r2, [r3]	@ movhi
1108:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****                 DISPLAY_ROTATION = rotate90;
 773              		.loc 1 1108 34
 774 0040 104B     		ldr	r3, .L31
 775 0042 0122     		movs	r2, #1
 776 0044 1A70     		strb	r2, [r3]
1109:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             }
1110:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
1111:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         else if (DISPLAY_ROTATION != rotate0)
1112:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
1113:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             FRAME_BUFFER_WIDTH = DISPLAY_HEIGHT;
1114:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             FRAME_BUFFER_HEIGHT = DISPLAY_WIDTH;
1115:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             DISPLAY_HEIGHT = FRAME_BUFFER_HEIGHT;
1116:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             DISPLAY_WIDTH = FRAME_BUFFER_WIDTH;
1117:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             DISPLAY_ROTATION = rotate0;
1118:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
1119:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 777              		.loc 1 1119 5
 778 0046 16E0     		b	.L30
 779              	.L28:
1111:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 780              		.loc 1 1111 35
 781 0048 0E4B     		ldr	r3, .L31
 782 004a 1B78     		ldrb	r3, [r3]	@ zero_extendqisi2
1111:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 783              		.loc 1 1111 14
 784 004c 002B     		cmp	r3, #0
 785 004e 12D0     		beq	.L30
1113:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             FRAME_BUFFER_HEIGHT = DISPLAY_WIDTH;
 786              		.loc 1 1113 32
 787 0050 0F4B     		ldr	r3, .L31+12
 788 0052 1A88     		ldrh	r2, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 34


 789 0054 0D4B     		ldr	r3, .L31+8
 790 0056 1A80     		strh	r2, [r3]	@ movhi
1114:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             DISPLAY_HEIGHT = FRAME_BUFFER_HEIGHT;
 791              		.loc 1 1114 33
 792 0058 0B4B     		ldr	r3, .L31+4
 793 005a 1A88     		ldrh	r2, [r3]
 794 005c 0D4B     		ldr	r3, .L31+16
 795 005e 1A80     		strh	r2, [r3]	@ movhi
1115:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             DISPLAY_WIDTH = FRAME_BUFFER_WIDTH;
 796              		.loc 1 1115 28
 797 0060 0C4B     		ldr	r3, .L31+16
 798 0062 1A88     		ldrh	r2, [r3]
 799 0064 0A4B     		ldr	r3, .L31+12
 800 0066 1A80     		strh	r2, [r3]	@ movhi
1116:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             DISPLAY_ROTATION = rotate0;
 801              		.loc 1 1116 27
 802 0068 084B     		ldr	r3, .L31+8
 803 006a 1A88     		ldrh	r2, [r3]
 804 006c 064B     		ldr	r3, .L31+4
 805 006e 1A80     		strh	r2, [r3]	@ movhi
1117:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 806              		.loc 1 1117 30
 807 0070 044B     		ldr	r3, .L31
 808 0072 0022     		movs	r2, #0
 809 0074 1A70     		strb	r2, [r3]
 810              	.L30:
 811              		.loc 1 1119 5
 812 0076 00BF     		nop
 813 0078 0C37     		adds	r7, r7, #12
 814              	.LCFI63:
 815              		.cfi_def_cfa_offset 4
 816 007a BD46     		mov	sp, r7
 817              	.LCFI64:
 818              		.cfi_def_cfa_register 13
 819              		@ sp needed
 820 007c 5DF8047B 		ldr	r7, [sp], #4
 821              	.LCFI65:
 822              		.cfi_restore 7
 823              		.cfi_def_cfa_offset 0
 824 0080 7047     		bx	lr
 825              	.L32:
 826 0082 00BF     		.align	2
 827              	.L31:
 828 0084 00000000 		.word	_ZN8touchgfx3HAL16DISPLAY_ROTATIONE
 829 0088 00000000 		.word	_ZN8touchgfx3HAL13DISPLAY_WIDTHE
 830 008c 00000000 		.word	_ZN8touchgfx3HAL18FRAME_BUFFER_WIDTHE
 831 0090 00000000 		.word	_ZN8touchgfx3HAL14DISPLAY_HEIGHTE
 832 0094 00000000 		.word	_ZN8touchgfx3HAL19FRAME_BUFFER_HEIGHTE
 833              		.cfi_endproc
 834              	.LFE359:
 836              		.section	.text._ZN8touchgfx3HAL15InvalidateCacheEv,"axG",%progbits,_ZN8touchgfx3HAL15InvalidateCac
 837              		.align	1
 838              		.weak	_ZN8touchgfx3HAL15InvalidateCacheEv
 839              		.syntax unified
 840              		.thumb
 841              		.thumb_func
 842              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 35


 844              	_ZN8touchgfx3HAL15InvalidateCacheEv:
 845              	.LFB360:
1120:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1121:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1122:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Invalidate D-Cache.
1123:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
1124:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Called by setRenderingMethod when changing rendering method
1125:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * from Hardware to Software indicating the cache should be invalidated.
1126:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1127:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void InvalidateCache()
 846              		.loc 1 1127 18
 847              		.cfi_startproc
 848              		@ args = 0, pretend = 0, frame = 8
 849              		@ frame_needed = 1, uses_anonymous_args = 0
 850              		@ link register save eliminated.
 851 0000 80B4     		push	{r7}
 852              	.LCFI66:
 853              		.cfi_def_cfa_offset 4
 854              		.cfi_offset 7, -4
 855 0002 83B0     		sub	sp, sp, #12
 856              	.LCFI67:
 857              		.cfi_def_cfa_offset 16
 858 0004 00AF     		add	r7, sp, #0
 859              	.LCFI68:
 860              		.cfi_def_cfa_register 7
 861 0006 7860     		str	r0, [r7, #4]
1128:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
1129:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 862              		.loc 1 1129 5
 863 0008 00BF     		nop
 864 000a 0C37     		adds	r7, r7, #12
 865              	.LCFI69:
 866              		.cfi_def_cfa_offset 4
 867 000c BD46     		mov	sp, r7
 868              	.LCFI70:
 869              		.cfi_def_cfa_register 13
 870              		@ sp needed
 871 000e 5DF8047B 		ldr	r7, [sp], #4
 872              	.LCFI71:
 873              		.cfi_restore 7
 874              		.cfi_def_cfa_offset 0
 875 0012 7047     		bx	lr
 876              		.cfi_endproc
 877              	.LFE360:
 879              		.section	.text._ZN8touchgfx3HAL10FlushCacheEv,"axG",%progbits,_ZN8touchgfx3HAL10FlushCacheEv,comda
 880              		.align	1
 881              		.weak	_ZN8touchgfx3HAL10FlushCacheEv
 882              		.syntax unified
 883              		.thumb
 884              		.thumb_func
 885              		.fpu fpv4-sp-d16
 887              	_ZN8touchgfx3HAL10FlushCacheEv:
 888              	.LFB361:
1130:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
1131:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
1132:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Flush D-Cache.
1133:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 36


1134:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Called by setRenderingMethod when changing rendering method
1135:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * from Software to Hardware indicating the cache should be invalidated.
1136:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
1137:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual void FlushCache()
 889              		.loc 1 1137 18
 890              		.cfi_startproc
 891              		@ args = 0, pretend = 0, frame = 8
 892              		@ frame_needed = 1, uses_anonymous_args = 0
 893              		@ link register save eliminated.
 894 0000 80B4     		push	{r7}
 895              	.LCFI72:
 896              		.cfi_def_cfa_offset 4
 897              		.cfi_offset 7, -4
 898 0002 83B0     		sub	sp, sp, #12
 899              	.LCFI73:
 900              		.cfi_def_cfa_offset 16
 901 0004 00AF     		add	r7, sp, #0
 902              	.LCFI74:
 903              		.cfi_def_cfa_register 7
 904 0006 7860     		str	r0, [r7, #4]
1138:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
1139:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 905              		.loc 1 1139 5
 906 0008 00BF     		nop
 907 000a 0C37     		adds	r7, r7, #12
 908              	.LCFI75:
 909              		.cfi_def_cfa_offset 4
 910 000c BD46     		mov	sp, r7
 911              	.LCFI76:
 912              		.cfi_def_cfa_register 13
 913              		@ sp needed
 914 000e 5DF8047B 		ldr	r7, [sp], #4
 915              	.LCFI77:
 916              		.cfi_restore 7
 917              		.cfi_def_cfa_offset 0
 918 0012 7047     		bx	lr
 919              		.cfi_endproc
 920              	.LFE361:
 922              		.section	.text._ZN20TouchGFXGeneratedHAL16flushFrameBufferEv,"axG",%progbits,_ZN20TouchGFXGenerate
 923              		.align	1
 924              		.weak	_ZN20TouchGFXGeneratedHAL16flushFrameBufferEv
 925              		.syntax unified
 926              		.thumb
 927              		.thumb_func
 928              		.fpu fpv4-sp-d16
 930              	_ZN20TouchGFXGeneratedHAL16flushFrameBufferEv:
 931              	.LFB365:
 932              		.file 2 "Src/TouchGFXGeneratedHAL.hpp"
   1:Src/TouchGFXGeneratedHAL.hpp **** /**
   2:Src/TouchGFXGeneratedHAL.hpp ****   ******************************************************************************
   3:Src/TouchGFXGeneratedHAL.hpp ****   * File Name          : TouchGFXGeneratedHAL.hpp
   4:Src/TouchGFXGeneratedHAL.hpp ****   ******************************************************************************
   5:Src/TouchGFXGeneratedHAL.hpp ****   * @attention
   6:Src/TouchGFXGeneratedHAL.hpp ****   *
   7:Src/TouchGFXGeneratedHAL.hpp ****   * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/TouchGFXGeneratedHAL.hpp ****   * All rights reserved.</center></h2>
   9:Src/TouchGFXGeneratedHAL.hpp ****   *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 37


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
  45:Src/TouchGFXGeneratedHAL.hpp ****         touchgfx::HAL(dma, display, tc, width, height)
  46:Src/TouchGFXGeneratedHAL.hpp ****     {
  47:Src/TouchGFXGeneratedHAL.hpp ****     }
  48:Src/TouchGFXGeneratedHAL.hpp **** 
  49:Src/TouchGFXGeneratedHAL.hpp ****     /**
  50:Src/TouchGFXGeneratedHAL.hpp ****      * @fn void TouchGFXGeneratedHAL::initialize();
  51:Src/TouchGFXGeneratedHAL.hpp ****      *
  52:Src/TouchGFXGeneratedHAL.hpp ****      * @brief This function is responsible for initializing the entire framework.
  53:Src/TouchGFXGeneratedHAL.hpp ****      *
  54:Src/TouchGFXGeneratedHAL.hpp ****      *        This function is responsible for initializing the entire framework.
  55:Src/TouchGFXGeneratedHAL.hpp ****      */
  56:Src/TouchGFXGeneratedHAL.hpp ****     void initialize();
  57:Src/TouchGFXGeneratedHAL.hpp **** 
  58:Src/TouchGFXGeneratedHAL.hpp ****     /**
  59:Src/TouchGFXGeneratedHAL.hpp ****      * @fn virtual void TouchGFXGeneratedHAL::configureInterrupts();
  60:Src/TouchGFXGeneratedHAL.hpp ****      *
  61:Src/TouchGFXGeneratedHAL.hpp ****      * @brief Sets the DMA and LCD interrupt priorities.
  62:Src/TouchGFXGeneratedHAL.hpp ****      *
  63:Src/TouchGFXGeneratedHAL.hpp ****      *        Sets the DMA and LCD interrupt priorities.
  64:Src/TouchGFXGeneratedHAL.hpp ****      */
  65:Src/TouchGFXGeneratedHAL.hpp ****     virtual void configureInterrupts();
  66:Src/TouchGFXGeneratedHAL.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 38


  67:Src/TouchGFXGeneratedHAL.hpp ****     /**
  68:Src/TouchGFXGeneratedHAL.hpp ****      * @fn virtual void TouchGFXGeneratedHAL::enableInterrupts();
  69:Src/TouchGFXGeneratedHAL.hpp ****      *
  70:Src/TouchGFXGeneratedHAL.hpp ****      * @brief Enables the DMA and LCD interrupts.
  71:Src/TouchGFXGeneratedHAL.hpp ****      *
  72:Src/TouchGFXGeneratedHAL.hpp ****      *        Enables the DMA and LCD interrupts.
  73:Src/TouchGFXGeneratedHAL.hpp ****      */
  74:Src/TouchGFXGeneratedHAL.hpp ****     virtual void enableInterrupts();
  75:Src/TouchGFXGeneratedHAL.hpp **** 
  76:Src/TouchGFXGeneratedHAL.hpp ****     /**
  77:Src/TouchGFXGeneratedHAL.hpp ****      * @fn virtual void TouchGFXGeneratedHAL::disableInterrupts();
  78:Src/TouchGFXGeneratedHAL.hpp ****      *
  79:Src/TouchGFXGeneratedHAL.hpp ****      * @brief Disables the DMA and LCD interrupts.
  80:Src/TouchGFXGeneratedHAL.hpp ****      *
  81:Src/TouchGFXGeneratedHAL.hpp ****      *        Disables the DMA and LCD interrupts.
  82:Src/TouchGFXGeneratedHAL.hpp ****      */
  83:Src/TouchGFXGeneratedHAL.hpp ****     virtual void disableInterrupts();
  84:Src/TouchGFXGeneratedHAL.hpp **** 
  85:Src/TouchGFXGeneratedHAL.hpp ****     /**
  86:Src/TouchGFXGeneratedHAL.hpp ****      * @fn virtual void TouchGFXGeneratedHAL::enableLCDControllerInterrupt();
  87:Src/TouchGFXGeneratedHAL.hpp ****      *
  88:Src/TouchGFXGeneratedHAL.hpp ****      * @brief Configure the LCD controller to fire interrupts at VSYNC.
  89:Src/TouchGFXGeneratedHAL.hpp ****      *
  90:Src/TouchGFXGeneratedHAL.hpp ****      *        Configure the LCD controller to fire interrupts at VSYNC. Called automatically
  91:Src/TouchGFXGeneratedHAL.hpp ****      *        once TouchGFX initialization has completed.
  92:Src/TouchGFXGeneratedHAL.hpp ****      */
  93:Src/TouchGFXGeneratedHAL.hpp ****     virtual void enableLCDControllerInterrupt();
  94:Src/TouchGFXGeneratedHAL.hpp **** 
  95:Src/TouchGFXGeneratedHAL.hpp ****     /**
  96:Src/TouchGFXGeneratedHAL.hpp ****      * @fn virtual void TouchGFXGeneratedHAL::flushFrameBuffer();
  97:Src/TouchGFXGeneratedHAL.hpp ****      *
  98:Src/TouchGFXGeneratedHAL.hpp ****      * @brief This function is called whenever the framework has performed a complete draw.
  99:Src/TouchGFXGeneratedHAL.hpp ****      *
 100:Src/TouchGFXGeneratedHAL.hpp ****      * This specialization is only in place to keep compilers happy. Base impl. will call the
 101:Src/TouchGFXGeneratedHAL.hpp ****      * Rect version.
 102:Src/TouchGFXGeneratedHAL.hpp ****      * @see HAL::flushFrameBuffer
 103:Src/TouchGFXGeneratedHAL.hpp ****      */
 104:Src/TouchGFXGeneratedHAL.hpp ****     virtual void flushFrameBuffer()
 933              		.loc 2 104 18
 934              		.cfi_startproc
 935              		@ args = 0, pretend = 0, frame = 8
 936              		@ frame_needed = 1, uses_anonymous_args = 0
 937 0000 80B5     		push	{r7, lr}
 938              	.LCFI78:
 939              		.cfi_def_cfa_offset 8
 940              		.cfi_offset 7, -8
 941              		.cfi_offset 14, -4
 942 0002 82B0     		sub	sp, sp, #8
 943              	.LCFI79:
 944              		.cfi_def_cfa_offset 16
 945 0004 00AF     		add	r7, sp, #0
 946              	.LCFI80:
 947              		.cfi_def_cfa_register 7
 948 0006 7860     		str	r0, [r7, #4]
 105:Src/TouchGFXGeneratedHAL.hpp ****     {
 106:Src/TouchGFXGeneratedHAL.hpp ****         HAL::flushFrameBuffer();
 949              		.loc 2 106 30
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 39


 950 0008 7B68     		ldr	r3, [r7, #4]
 951 000a 1846     		mov	r0, r3
 952 000c FFF7FEFF 		bl	_ZN8touchgfx3HAL16flushFrameBufferEv
 107:Src/TouchGFXGeneratedHAL.hpp ****     }
 953              		.loc 2 107 5
 954 0010 00BF     		nop
 955 0012 0837     		adds	r7, r7, #8
 956              	.LCFI81:
 957              		.cfi_def_cfa_offset 8
 958 0014 BD46     		mov	sp, r7
 959              	.LCFI82:
 960              		.cfi_def_cfa_register 13
 961              		@ sp needed
 962 0016 80BD     		pop	{r7, pc}
 963              		.cfi_endproc
 964              	.LFE365:
 966              		.section	"TouchGFX_Framebuffer","aw"
 967              		.align	2
 970              	_ZN12_GLOBAL__N_18frameBufE:
 971 0000 00000000 		.space	16384
 971      00000000 
 971      00000000 
 971      00000000 
 971      00000000 
 972              		.section	.text._ZN20TouchGFXGeneratedHAL10initializeEv,"ax",%progbits
 973              		.align	1
 974              		.global	_ZN20TouchGFXGeneratedHAL10initializeEv
 975              		.syntax unified
 976              		.thumb
 977              		.thumb_func
 978              		.fpu fpv4-sp-d16
 980              	_ZN20TouchGFXGeneratedHAL10initializeEv:
 981              	.LFB917:
 982              		.file 3 "Src/TouchGFXGeneratedHAL.cpp"
   1:Src/TouchGFXGeneratedHAL.cpp **** /**
   2:Src/TouchGFXGeneratedHAL.cpp ****  ******************************************************************************
   3:Src/TouchGFXGeneratedHAL.cpp ****  * File Name          : TouchGFXGeneratedHAL.cpp
   4:Src/TouchGFXGeneratedHAL.cpp ****  ******************************************************************************
   5:Src/TouchGFXGeneratedHAL.cpp ****  * @attention
   6:Src/TouchGFXGeneratedHAL.cpp ****  *
   7:Src/TouchGFXGeneratedHAL.cpp ****  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/TouchGFXGeneratedHAL.cpp ****  * All rights reserved.</center></h2>
   9:Src/TouchGFXGeneratedHAL.cpp ****  *
  10:Src/TouchGFXGeneratedHAL.cpp ****  * This software component is licensed by ST under Ultimate Liberty license
  11:Src/TouchGFXGeneratedHAL.cpp ****  * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/TouchGFXGeneratedHAL.cpp ****  * the License. You may obtain a copy of the License at:
  13:Src/TouchGFXGeneratedHAL.cpp ****  *                             www.st.com/SLA0044
  14:Src/TouchGFXGeneratedHAL.cpp ****  *
  15:Src/TouchGFXGeneratedHAL.cpp ****  ******************************************************************************
  16:Src/TouchGFXGeneratedHAL.cpp ****  */
  17:Src/TouchGFXGeneratedHAL.cpp **** 
  18:Src/TouchGFXGeneratedHAL.cpp **** #include <TouchGFXGeneratedHAL.hpp>
  19:Src/TouchGFXGeneratedHAL.cpp **** #include <gui/common/FrontendHeap.hpp>
  20:Src/TouchGFXGeneratedHAL.cpp **** #include <touchgfx/hal/OSWrappers.hpp>
  21:Src/TouchGFXGeneratedHAL.cpp **** 
  22:Src/TouchGFXGeneratedHAL.cpp **** #include "stm32f4xx.h"
  23:Src/TouchGFXGeneratedHAL.cpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 40


  24:Src/TouchGFXGeneratedHAL.cpp **** using namespace touchgfx;
  25:Src/TouchGFXGeneratedHAL.cpp **** 
  26:Src/TouchGFXGeneratedHAL.cpp **** namespace {
  27:Src/TouchGFXGeneratedHAL.cpp **** // Use the section "TouchGFX_Framebuffer" in the linker to specify the placement
  28:Src/TouchGFXGeneratedHAL.cpp **** // of the buffer
  29:Src/TouchGFXGeneratedHAL.cpp **** LOCATION_PRAGMA("TouchGFX_Framebuffer")
  30:Src/TouchGFXGeneratedHAL.cpp **** uint32_t frameBuf[(64 * 64 * 2 + 3) / 4 * 2] LOCATION_ATTRIBUTE(
  31:Src/TouchGFXGeneratedHAL.cpp ****     "TouchGFX_Framebuffer");
  32:Src/TouchGFXGeneratedHAL.cpp **** } // namespace
  33:Src/TouchGFXGeneratedHAL.cpp **** 
  34:Src/TouchGFXGeneratedHAL.cpp **** void TouchGFXGeneratedHAL::initialize() {
 983              		.loc 3 34 41
 984              		.cfi_startproc
 985              		@ args = 0, pretend = 0, frame = 8
 986              		@ frame_needed = 1, uses_anonymous_args = 0
 987 0000 B0B5     		push	{r4, r5, r7, lr}
 988              	.LCFI83:
 989              		.cfi_def_cfa_offset 16
 990              		.cfi_offset 4, -16
 991              		.cfi_offset 5, -12
 992              		.cfi_offset 7, -8
 993              		.cfi_offset 14, -4
 994 0002 82B0     		sub	sp, sp, #8
 995              	.LCFI84:
 996              		.cfi_def_cfa_offset 24
 997 0004 00AF     		add	r7, sp, #0
 998              	.LCFI85:
 999              		.cfi_def_cfa_register 7
 1000 0006 7860     		str	r0, [r7, #4]
  35:Src/TouchGFXGeneratedHAL.cpp ****   HAL::initialize();
 1001              		.loc 3 35 18
 1002 0008 7B68     		ldr	r3, [r7, #4]
 1003 000a 1846     		mov	r0, r3
 1004 000c FFF7FEFF 		bl	_ZN8touchgfx3HAL10initializeEv
  36:Src/TouchGFXGeneratedHAL.cpp ****   registerEventListener(*(Application::getInstance()));
 1005              		.loc 3 36 24
 1006 0010 7D68     		ldr	r5, [r7, #4]
 1007              		.loc 3 36 54
 1008 0012 7B68     		ldr	r3, [r7, #4]
 1009 0014 1B68     		ldr	r3, [r3]
 1010 0016 5C33     		adds	r3, r3, #92
 1011 0018 1C68     		ldr	r4, [r3]
 1012              		.loc 3 36 51
 1013 001a FFF7FEFF 		bl	_ZN8touchgfx11Application11getInstanceEv
 1014 001e 0346     		mov	r3, r0
 1015              		.loc 3 36 24
 1016 0020 1946     		mov	r1, r3
 1017 0022 2846     		mov	r0, r5
 1018 0024 A047     		blx	r4
 1019              	.LVL4:
  37:Src/TouchGFXGeneratedHAL.cpp ****   setFrameBufferStartAddresses(
 1020              		.loc 3 37 31
 1021 0026 7868     		ldr	r0, [r7, #4]
  38:Src/TouchGFXGeneratedHAL.cpp ****       (void *)frameBuf,
  39:Src/TouchGFXGeneratedHAL.cpp ****       (void *)(frameBuf + sizeof(frameBuf) / (sizeof(uint32_t) * 2)),
  40:Src/TouchGFXGeneratedHAL.cpp ****       (void *)0);
 1022              		.loc 3 40 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 41


 1023 0028 7B68     		ldr	r3, [r7, #4]
 1024 002a 1B68     		ldr	r3, [r3]
 1025 002c 8033     		adds	r3, r3, #128
 1026 002e 1C68     		ldr	r4, [r3]
  37:Src/TouchGFXGeneratedHAL.cpp ****   setFrameBufferStartAddresses(
 1027              		.loc 3 37 31
 1028 0030 034A     		ldr	r2, .L37
 1029 0032 0023     		movs	r3, #0
 1030 0034 0349     		ldr	r1, .L37+4
 1031 0036 A047     		blx	r4
 1032              	.LVL5:
  41:Src/TouchGFXGeneratedHAL.cpp **** }
 1033              		.loc 3 41 1
 1034 0038 00BF     		nop
 1035 003a 0837     		adds	r7, r7, #8
 1036              	.LCFI86:
 1037              		.cfi_def_cfa_offset 16
 1038 003c BD46     		mov	sp, r7
 1039              	.LCFI87:
 1040              		.cfi_def_cfa_register 13
 1041              		@ sp needed
 1042 003e B0BD     		pop	{r4, r5, r7, pc}
 1043              	.L38:
 1044              		.align	2
 1045              	.L37:
 1046 0040 00200000 		.word	_ZN12_GLOBAL__N_18frameBufE+8192
 1047 0044 00000000 		.word	_ZN12_GLOBAL__N_18frameBufE
 1048              		.cfi_endproc
 1049              	.LFE917:
 1051              		.section	.text._ZN20TouchGFXGeneratedHAL19configureInterruptsEv,"ax",%progbits
 1052              		.align	1
 1053              		.global	_ZN20TouchGFXGeneratedHAL19configureInterruptsEv
 1054              		.syntax unified
 1055              		.thumb
 1056              		.thumb_func
 1057              		.fpu fpv4-sp-d16
 1059              	_ZN20TouchGFXGeneratedHAL19configureInterruptsEv:
 1060              	.LFB918:
  42:Src/TouchGFXGeneratedHAL.cpp **** 
  43:Src/TouchGFXGeneratedHAL.cpp **** void TouchGFXGeneratedHAL::configureInterrupts() {}
 1061              		.loc 3 43 50
 1062              		.cfi_startproc
 1063              		@ args = 0, pretend = 0, frame = 8
 1064              		@ frame_needed = 1, uses_anonymous_args = 0
 1065              		@ link register save eliminated.
 1066 0000 80B4     		push	{r7}
 1067              	.LCFI88:
 1068              		.cfi_def_cfa_offset 4
 1069              		.cfi_offset 7, -4
 1070 0002 83B0     		sub	sp, sp, #12
 1071              	.LCFI89:
 1072              		.cfi_def_cfa_offset 16
 1073 0004 00AF     		add	r7, sp, #0
 1074              	.LCFI90:
 1075              		.cfi_def_cfa_register 7
 1076 0006 7860     		str	r0, [r7, #4]
 1077              		.loc 3 43 51
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 42


 1078 0008 00BF     		nop
 1079 000a 0C37     		adds	r7, r7, #12
 1080              	.LCFI91:
 1081              		.cfi_def_cfa_offset 4
 1082 000c BD46     		mov	sp, r7
 1083              	.LCFI92:
 1084              		.cfi_def_cfa_register 13
 1085              		@ sp needed
 1086 000e 5DF8047B 		ldr	r7, [sp], #4
 1087              	.LCFI93:
 1088              		.cfi_restore 7
 1089              		.cfi_def_cfa_offset 0
 1090 0012 7047     		bx	lr
 1091              		.cfi_endproc
 1092              	.LFE918:
 1094              		.section	.text._ZN20TouchGFXGeneratedHAL16enableInterruptsEv,"ax",%progbits
 1095              		.align	1
 1096              		.global	_ZN20TouchGFXGeneratedHAL16enableInterruptsEv
 1097              		.syntax unified
 1098              		.thumb
 1099              		.thumb_func
 1100              		.fpu fpv4-sp-d16
 1102              	_ZN20TouchGFXGeneratedHAL16enableInterruptsEv:
 1103              	.LFB919:
  44:Src/TouchGFXGeneratedHAL.cpp **** 
  45:Src/TouchGFXGeneratedHAL.cpp **** void TouchGFXGeneratedHAL::enableInterrupts() {}
 1104              		.loc 3 45 47
 1105              		.cfi_startproc
 1106              		@ args = 0, pretend = 0, frame = 8
 1107              		@ frame_needed = 1, uses_anonymous_args = 0
 1108              		@ link register save eliminated.
 1109 0000 80B4     		push	{r7}
 1110              	.LCFI94:
 1111              		.cfi_def_cfa_offset 4
 1112              		.cfi_offset 7, -4
 1113 0002 83B0     		sub	sp, sp, #12
 1114              	.LCFI95:
 1115              		.cfi_def_cfa_offset 16
 1116 0004 00AF     		add	r7, sp, #0
 1117              	.LCFI96:
 1118              		.cfi_def_cfa_register 7
 1119 0006 7860     		str	r0, [r7, #4]
 1120              		.loc 3 45 48
 1121 0008 00BF     		nop
 1122 000a 0C37     		adds	r7, r7, #12
 1123              	.LCFI97:
 1124              		.cfi_def_cfa_offset 4
 1125 000c BD46     		mov	sp, r7
 1126              	.LCFI98:
 1127              		.cfi_def_cfa_register 13
 1128              		@ sp needed
 1129 000e 5DF8047B 		ldr	r7, [sp], #4
 1130              	.LCFI99:
 1131              		.cfi_restore 7
 1132              		.cfi_def_cfa_offset 0
 1133 0012 7047     		bx	lr
 1134              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 43


 1135              	.LFE919:
 1137              		.section	.text._ZN20TouchGFXGeneratedHAL17disableInterruptsEv,"ax",%progbits
 1138              		.align	1
 1139              		.global	_ZN20TouchGFXGeneratedHAL17disableInterruptsEv
 1140              		.syntax unified
 1141              		.thumb
 1142              		.thumb_func
 1143              		.fpu fpv4-sp-d16
 1145              	_ZN20TouchGFXGeneratedHAL17disableInterruptsEv:
 1146              	.LFB920:
  46:Src/TouchGFXGeneratedHAL.cpp **** 
  47:Src/TouchGFXGeneratedHAL.cpp **** void TouchGFXGeneratedHAL::disableInterrupts() {}
 1147              		.loc 3 47 48
 1148              		.cfi_startproc
 1149              		@ args = 0, pretend = 0, frame = 8
 1150              		@ frame_needed = 1, uses_anonymous_args = 0
 1151              		@ link register save eliminated.
 1152 0000 80B4     		push	{r7}
 1153              	.LCFI100:
 1154              		.cfi_def_cfa_offset 4
 1155              		.cfi_offset 7, -4
 1156 0002 83B0     		sub	sp, sp, #12
 1157              	.LCFI101:
 1158              		.cfi_def_cfa_offset 16
 1159 0004 00AF     		add	r7, sp, #0
 1160              	.LCFI102:
 1161              		.cfi_def_cfa_register 7
 1162 0006 7860     		str	r0, [r7, #4]
 1163              		.loc 3 47 49
 1164 0008 00BF     		nop
 1165 000a 0C37     		adds	r7, r7, #12
 1166              	.LCFI103:
 1167              		.cfi_def_cfa_offset 4
 1168 000c BD46     		mov	sp, r7
 1169              	.LCFI104:
 1170              		.cfi_def_cfa_register 13
 1171              		@ sp needed
 1172 000e 5DF8047B 		ldr	r7, [sp], #4
 1173              	.LCFI105:
 1174              		.cfi_restore 7
 1175              		.cfi_def_cfa_offset 0
 1176 0012 7047     		bx	lr
 1177              		.cfi_endproc
 1178              	.LFE920:
 1180              		.section	.text._ZN20TouchGFXGeneratedHAL28enableLCDControllerInterruptEv,"ax",%progbits
 1181              		.align	1
 1182              		.global	_ZN20TouchGFXGeneratedHAL28enableLCDControllerInterruptEv
 1183              		.syntax unified
 1184              		.thumb
 1185              		.thumb_func
 1186              		.fpu fpv4-sp-d16
 1188              	_ZN20TouchGFXGeneratedHAL28enableLCDControllerInterruptEv:
 1189              	.LFB921:
  48:Src/TouchGFXGeneratedHAL.cpp **** 
  49:Src/TouchGFXGeneratedHAL.cpp **** void TouchGFXGeneratedHAL::enableLCDControllerInterrupt() {}
 1190              		.loc 3 49 59
 1191              		.cfi_startproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 44


 1192              		@ args = 0, pretend = 0, frame = 8
 1193              		@ frame_needed = 1, uses_anonymous_args = 0
 1194              		@ link register save eliminated.
 1195 0000 80B4     		push	{r7}
 1196              	.LCFI106:
 1197              		.cfi_def_cfa_offset 4
 1198              		.cfi_offset 7, -4
 1199 0002 83B0     		sub	sp, sp, #12
 1200              	.LCFI107:
 1201              		.cfi_def_cfa_offset 16
 1202 0004 00AF     		add	r7, sp, #0
 1203              	.LCFI108:
 1204              		.cfi_def_cfa_register 7
 1205 0006 7860     		str	r0, [r7, #4]
 1206              		.loc 3 49 60
 1207 0008 00BF     		nop
 1208 000a 0C37     		adds	r7, r7, #12
 1209              	.LCFI109:
 1210              		.cfi_def_cfa_offset 4
 1211 000c BD46     		mov	sp, r7
 1212              	.LCFI110:
 1213              		.cfi_def_cfa_register 13
 1214              		@ sp needed
 1215 000e 5DF8047B 		ldr	r7, [sp], #4
 1216              	.LCFI111:
 1217              		.cfi_restore 7
 1218              		.cfi_def_cfa_offset 0
 1219 0012 7047     		bx	lr
 1220              		.cfi_endproc
 1221              	.LFE921:
 1223              		.section	.text._ZN20TouchGFXGeneratedHAL10beginFrameEv,"ax",%progbits
 1224              		.align	1
 1225              		.global	_ZN20TouchGFXGeneratedHAL10beginFrameEv
 1226              		.syntax unified
 1227              		.thumb
 1228              		.thumb_func
 1229              		.fpu fpv4-sp-d16
 1231              	_ZN20TouchGFXGeneratedHAL10beginFrameEv:
 1232              	.LFB922:
  50:Src/TouchGFXGeneratedHAL.cpp **** 
  51:Src/TouchGFXGeneratedHAL.cpp **** bool TouchGFXGeneratedHAL::beginFrame() { return HAL::beginFrame(); }
 1233              		.loc 3 51 41
 1234              		.cfi_startproc
 1235              		@ args = 0, pretend = 0, frame = 8
 1236              		@ frame_needed = 1, uses_anonymous_args = 0
 1237 0000 80B5     		push	{r7, lr}
 1238              	.LCFI112:
 1239              		.cfi_def_cfa_offset 8
 1240              		.cfi_offset 7, -8
 1241              		.cfi_offset 14, -4
 1242 0002 82B0     		sub	sp, sp, #8
 1243              	.LCFI113:
 1244              		.cfi_def_cfa_offset 16
 1245 0004 00AF     		add	r7, sp, #0
 1246              	.LCFI114:
 1247              		.cfi_def_cfa_register 7
 1248 0006 7860     		str	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 45


 1249              		.loc 3 51 65
 1250 0008 7B68     		ldr	r3, [r7, #4]
 1251 000a 1846     		mov	r0, r3
 1252 000c FFF7FEFF 		bl	_ZN8touchgfx3HAL10beginFrameEv
 1253 0010 0346     		mov	r3, r0
 1254              		.loc 3 51 69
 1255 0012 1846     		mov	r0, r3
 1256 0014 0837     		adds	r7, r7, #8
 1257              	.LCFI115:
 1258              		.cfi_def_cfa_offset 8
 1259 0016 BD46     		mov	sp, r7
 1260              	.LCFI116:
 1261              		.cfi_def_cfa_register 13
 1262              		@ sp needed
 1263 0018 80BD     		pop	{r7, pc}
 1264              		.cfi_endproc
 1265              	.LFE922:
 1267              		.section	.text._ZN20TouchGFXGeneratedHAL8endFrameEv,"ax",%progbits
 1268              		.align	1
 1269              		.global	_ZN20TouchGFXGeneratedHAL8endFrameEv
 1270              		.syntax unified
 1271              		.thumb
 1272              		.thumb_func
 1273              		.fpu fpv4-sp-d16
 1275              	_ZN20TouchGFXGeneratedHAL8endFrameEv:
 1276              	.LFB923:
  52:Src/TouchGFXGeneratedHAL.cpp **** 
  53:Src/TouchGFXGeneratedHAL.cpp **** void TouchGFXGeneratedHAL::endFrame() { HAL::endFrame(); }
 1277              		.loc 3 53 39
 1278              		.cfi_startproc
 1279              		@ args = 0, pretend = 0, frame = 8
 1280              		@ frame_needed = 1, uses_anonymous_args = 0
 1281 0000 80B5     		push	{r7, lr}
 1282              	.LCFI117:
 1283              		.cfi_def_cfa_offset 8
 1284              		.cfi_offset 7, -8
 1285              		.cfi_offset 14, -4
 1286 0002 82B0     		sub	sp, sp, #8
 1287              	.LCFI118:
 1288              		.cfi_def_cfa_offset 16
 1289 0004 00AF     		add	r7, sp, #0
 1290              	.LCFI119:
 1291              		.cfi_def_cfa_register 7
 1292 0006 7860     		str	r0, [r7, #4]
 1293              		.loc 3 53 54
 1294 0008 7B68     		ldr	r3, [r7, #4]
 1295 000a 1846     		mov	r0, r3
 1296 000c FFF7FEFF 		bl	_ZN8touchgfx3HAL8endFrameEv
 1297              		.loc 3 53 58
 1298 0010 00BF     		nop
 1299 0012 0837     		adds	r7, r7, #8
 1300              	.LCFI120:
 1301              		.cfi_def_cfa_offset 8
 1302 0014 BD46     		mov	sp, r7
 1303              	.LCFI121:
 1304              		.cfi_def_cfa_register 13
 1305              		@ sp needed
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 46


 1306 0016 80BD     		pop	{r7, pc}
 1307              		.cfi_endproc
 1308              	.LFE923:
 1310              		.section	.text._ZNK20TouchGFXGeneratedHAL17getTFTFrameBufferEv,"ax",%progbits
 1311              		.align	1
 1312              		.global	_ZNK20TouchGFXGeneratedHAL17getTFTFrameBufferEv
 1313              		.syntax unified
 1314              		.thumb
 1315              		.thumb_func
 1316              		.fpu fpv4-sp-d16
 1318              	_ZNK20TouchGFXGeneratedHAL17getTFTFrameBufferEv:
 1319              	.LFB925:
  54:Src/TouchGFXGeneratedHAL.cpp **** 
  55:Src/TouchGFXGeneratedHAL.cpp **** inline uint8_t *TouchGFXGeneratedHAL::advanceFrameBufferToRect(
  56:Src/TouchGFXGeneratedHAL.cpp ****     uint8_t *fbPtr, const touchgfx::Rect &rect) const {
  57:Src/TouchGFXGeneratedHAL.cpp ****   //       Advance vertically                   Advance horizontally
  58:Src/TouchGFXGeneratedHAL.cpp ****   fbPtr += rect.y * lcd().framebufferStride() + rect.x * 2;
  59:Src/TouchGFXGeneratedHAL.cpp ****   return fbPtr;
  60:Src/TouchGFXGeneratedHAL.cpp **** }
  61:Src/TouchGFXGeneratedHAL.cpp **** 
  62:Src/TouchGFXGeneratedHAL.cpp **** uint16_t *TouchGFXGeneratedHAL::getTFTFrameBuffer() const {
 1320              		.loc 3 62 59
 1321              		.cfi_startproc
 1322              		@ args = 0, pretend = 0, frame = 8
 1323              		@ frame_needed = 1, uses_anonymous_args = 0
 1324              		@ link register save eliminated.
 1325 0000 80B4     		push	{r7}
 1326              	.LCFI122:
 1327              		.cfi_def_cfa_offset 4
 1328              		.cfi_offset 7, -4
 1329 0002 83B0     		sub	sp, sp, #12
 1330              	.LCFI123:
 1331              		.cfi_def_cfa_offset 16
 1332 0004 00AF     		add	r7, sp, #0
 1333              	.LCFI124:
 1334              		.cfi_def_cfa_register 7
 1335 0006 7860     		str	r0, [r7, #4]
  63:Src/TouchGFXGeneratedHAL.cpp ****   return (uint16_t *)frameBuf;
 1336              		.loc 3 63 22
 1337 0008 034B     		ldr	r3, .L48
  64:Src/TouchGFXGeneratedHAL.cpp **** }
 1338              		.loc 3 64 1
 1339 000a 1846     		mov	r0, r3
 1340 000c 0C37     		adds	r7, r7, #12
 1341              	.LCFI125:
 1342              		.cfi_def_cfa_offset 4
 1343 000e BD46     		mov	sp, r7
 1344              	.LCFI126:
 1345              		.cfi_def_cfa_register 13
 1346              		@ sp needed
 1347 0010 5DF8047B 		ldr	r7, [sp], #4
 1348              	.LCFI127:
 1349              		.cfi_restore 7
 1350              		.cfi_def_cfa_offset 0
 1351 0014 7047     		bx	lr
 1352              	.L49:
 1353 0016 00BF     		.align	2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 47


 1354              	.L48:
 1355 0018 00000000 		.word	_ZN12_GLOBAL__N_18frameBufE
 1356              		.cfi_endproc
 1357              	.LFE925:
 1359              		.section	.text._ZN20TouchGFXGeneratedHAL17setTFTFrameBufferEPt,"ax",%progbits
 1360              		.align	1
 1361              		.global	_ZN20TouchGFXGeneratedHAL17setTFTFrameBufferEPt
 1362              		.syntax unified
 1363              		.thumb
 1364              		.thumb_func
 1365              		.fpu fpv4-sp-d16
 1367              	_ZN20TouchGFXGeneratedHAL17setTFTFrameBufferEPt:
 1368              	.LFB926:
  65:Src/TouchGFXGeneratedHAL.cpp **** 
  66:Src/TouchGFXGeneratedHAL.cpp **** void TouchGFXGeneratedHAL::setTFTFrameBuffer(uint16_t *adr) {
 1369              		.loc 3 66 61
 1370              		.cfi_startproc
 1371              		@ args = 0, pretend = 0, frame = 8
 1372              		@ frame_needed = 1, uses_anonymous_args = 0
 1373              		@ link register save eliminated.
 1374 0000 80B4     		push	{r7}
 1375              	.LCFI128:
 1376              		.cfi_def_cfa_offset 4
 1377              		.cfi_offset 7, -4
 1378 0002 83B0     		sub	sp, sp, #12
 1379              	.LCFI129:
 1380              		.cfi_def_cfa_offset 16
 1381 0004 00AF     		add	r7, sp, #0
 1382              	.LCFI130:
 1383              		.cfi_def_cfa_register 7
 1384 0006 7860     		str	r0, [r7, #4]
 1385 0008 3960     		str	r1, [r7]
  67:Src/TouchGFXGeneratedHAL.cpp ****   // setTFTFrameBuffer() not used for selected display interface
  68:Src/TouchGFXGeneratedHAL.cpp **** }
 1386              		.loc 3 68 1
 1387 000a 00BF     		nop
 1388 000c 0C37     		adds	r7, r7, #12
 1389              	.LCFI131:
 1390              		.cfi_def_cfa_offset 4
 1391 000e BD46     		mov	sp, r7
 1392              	.LCFI132:
 1393              		.cfi_def_cfa_register 13
 1394              		@ sp needed
 1395 0010 5DF8047B 		ldr	r7, [sp], #4
 1396              	.LCFI133:
 1397              		.cfi_restore 7
 1398              		.cfi_def_cfa_offset 0
 1399 0014 7047     		bx	lr
 1400              		.cfi_endproc
 1401              	.LFE926:
 1403              		.section	.text._ZN20TouchGFXGeneratedHAL16flushFrameBufferERKN8touchgfx4RectE,"ax",%progbits
 1404              		.align	1
 1405              		.global	_ZN20TouchGFXGeneratedHAL16flushFrameBufferERKN8touchgfx4RectE
 1406              		.syntax unified
 1407              		.thumb
 1408              		.thumb_func
 1409              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 48


 1411              	_ZN20TouchGFXGeneratedHAL16flushFrameBufferERKN8touchgfx4RectE:
 1412              	.LFB927:
  69:Src/TouchGFXGeneratedHAL.cpp **** 
  70:Src/TouchGFXGeneratedHAL.cpp **** void TouchGFXGeneratedHAL::flushFrameBuffer(const touchgfx::Rect &rect) {
 1413              		.loc 3 70 73
 1414              		.cfi_startproc
 1415              		@ args = 0, pretend = 0, frame = 8
 1416              		@ frame_needed = 1, uses_anonymous_args = 0
 1417 0000 80B5     		push	{r7, lr}
 1418              	.LCFI134:
 1419              		.cfi_def_cfa_offset 8
 1420              		.cfi_offset 7, -8
 1421              		.cfi_offset 14, -4
 1422 0002 82B0     		sub	sp, sp, #8
 1423              	.LCFI135:
 1424              		.cfi_def_cfa_offset 16
 1425 0004 00AF     		add	r7, sp, #0
 1426              	.LCFI136:
 1427              		.cfi_def_cfa_register 7
 1428 0006 7860     		str	r0, [r7, #4]
 1429 0008 3960     		str	r1, [r7]
  71:Src/TouchGFXGeneratedHAL.cpp ****   HAL::flushFrameBuffer(rect);
 1430              		.loc 3 71 24
 1431 000a 7B68     		ldr	r3, [r7, #4]
 1432 000c 3968     		ldr	r1, [r7]
 1433 000e 1846     		mov	r0, r3
 1434 0010 FFF7FEFF 		bl	_ZN8touchgfx3HAL16flushFrameBufferERKNS_4RectE
  72:Src/TouchGFXGeneratedHAL.cpp **** }
 1435              		.loc 3 72 1
 1436 0014 00BF     		nop
 1437 0016 0837     		adds	r7, r7, #8
 1438              	.LCFI137:
 1439              		.cfi_def_cfa_offset 8
 1440 0018 BD46     		mov	sp, r7
 1441              	.LCFI138:
 1442              		.cfi_def_cfa_register 13
 1443              		@ sp needed
 1444 001a 80BD     		pop	{r7, pc}
 1445              		.cfi_endproc
 1446              	.LFE927:
 1448              		.section	.text._ZN20TouchGFXGeneratedHAL9blockCopyEPvPKvm,"ax",%progbits
 1449              		.align	1
 1450              		.global	_ZN20TouchGFXGeneratedHAL9blockCopyEPvPKvm
 1451              		.syntax unified
 1452              		.thumb
 1453              		.thumb_func
 1454              		.fpu fpv4-sp-d16
 1456              	_ZN20TouchGFXGeneratedHAL9blockCopyEPvPKvm:
 1457              	.LFB928:
  73:Src/TouchGFXGeneratedHAL.cpp **** 
  74:Src/TouchGFXGeneratedHAL.cpp **** bool TouchGFXGeneratedHAL::blockCopy(void *RESTRICT dest,
  75:Src/TouchGFXGeneratedHAL.cpp ****                                      const void *RESTRICT src,
  76:Src/TouchGFXGeneratedHAL.cpp ****                                      uint32_t numBytes) {
 1458              		.loc 3 76 57
 1459              		.cfi_startproc
 1460              		@ args = 0, pretend = 0, frame = 16
 1461              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 49


 1462 0000 80B5     		push	{r7, lr}
 1463              	.LCFI139:
 1464              		.cfi_def_cfa_offset 8
 1465              		.cfi_offset 7, -8
 1466              		.cfi_offset 14, -4
 1467 0002 84B0     		sub	sp, sp, #16
 1468              	.LCFI140:
 1469              		.cfi_def_cfa_offset 24
 1470 0004 00AF     		add	r7, sp, #0
 1471              	.LCFI141:
 1472              		.cfi_def_cfa_register 7
 1473 0006 F860     		str	r0, [r7, #12]
 1474 0008 B960     		str	r1, [r7, #8]
 1475 000a 7A60     		str	r2, [r7, #4]
 1476 000c 3B60     		str	r3, [r7]
  77:Src/TouchGFXGeneratedHAL.cpp ****   return HAL::blockCopy(dest, src, numBytes);
 1477              		.loc 3 77 24
 1478 000e F868     		ldr	r0, [r7, #12]
 1479 0010 3B68     		ldr	r3, [r7]
 1480 0012 7A68     		ldr	r2, [r7, #4]
 1481 0014 B968     		ldr	r1, [r7, #8]
 1482 0016 FFF7FEFF 		bl	_ZN8touchgfx3HAL9blockCopyEPvPKvm
 1483 001a 0346     		mov	r3, r0
  78:Src/TouchGFXGeneratedHAL.cpp **** }
 1484              		.loc 3 78 1
 1485 001c 1846     		mov	r0, r3
 1486 001e 1037     		adds	r7, r7, #16
 1487              	.LCFI142:
 1488              		.cfi_def_cfa_offset 8
 1489 0020 BD46     		mov	sp, r7
 1490              	.LCFI143:
 1491              		.cfi_def_cfa_register 13
 1492              		@ sp needed
 1493 0022 80BD     		pop	{r7, pc}
 1494              		.cfi_endproc
 1495              	.LFE928:
 1497              		.global	_ZTV20TouchGFXGeneratedHAL
 1498              		.section	.rodata._ZTV20TouchGFXGeneratedHAL,"a"
 1499              		.align	2
 1502              	_ZTV20TouchGFXGeneratedHAL:
 1503 0000 00000000 		.word	0
 1504 0004 00000000 		.word	0
 1505 0008 00000000 		.word	_ZN20TouchGFXGeneratedHALD1Ev
 1506 000c 00000000 		.word	_ZN20TouchGFXGeneratedHALD0Ev
 1507 0010 00000000 		.word	_ZN8touchgfx3HAL21setDisplayOrientationENS_18DisplayOrientationE
 1508 0014 00000000 		.word	_ZN20TouchGFXGeneratedHAL10initializeEv
 1509 0018 00000000 		.word	_ZN8touchgfx3HAL9taskEntryEv
 1510 001c 00000000 		.word	_ZN20TouchGFXGeneratedHAL16flushFrameBufferEv
 1511 0020 00000000 		.word	_ZN20TouchGFXGeneratedHAL16flushFrameBufferERKN8touchgfx4RectE
 1512 0024 00000000 		.word	_ZN8touchgfx3HAL17allowDMATransfersEv
 1513 0028 00000000 		.word	_ZN8touchgfx3HAL8flushDMAEv
 1514 002c 00000000 		.word	_ZN8touchgfx3HAL15lockFrameBufferEv
 1515 0030 00000000 		.word	_ZN8touchgfx3HAL17unlockFrameBufferEv
 1516 0034 00000000 		.word	_ZNK20TouchGFXGeneratedHAL17getTFTFrameBufferEv
 1517 0038 00000000 		.word	_ZN20TouchGFXGeneratedHAL9blockCopyEPvPKvm
 1518 003c 00000000 		.word	_ZN8touchgfx3HAL11getBlitCapsEv
 1519 0040 00000000 		.word	_ZN8touchgfx3HAL8blitCopyEPKtPKhttttthbtNS_6Bitmap12BitmapFormatES6_
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 50


 1520 0044 00000000 		.word	_ZN8touchgfx3HAL8blitCopyEPKtttttthbtNS_6Bitmap12BitmapFormatES4_
 1521 0048 00000000 		.word	_ZN8touchgfx3HAL8blitCopyEPKtttttthb
 1522 004c 00000000 		.word	_ZN8touchgfx3HAL12blitCopyWordEPKttttttt
 1523 0050 00000000 		.word	_ZN8touchgfx3HAL12blitFillWordEtttttt
 1524 0054 00000000 		.word	_ZN8touchgfx3HAL16blitCopyARGB8888EPKtttttth
 1525 0058 00000000 		.word	_ZN8touchgfx3HAL13blitCopyGlyphEPKhtttttNS_9colortypeEhNS_14BlitOperationsE
 1526 005c 00000000 		.word	_ZN8touchgfx3HAL8blitFillENS_9colortypeEtttthtNS_6Bitmap12BitmapFormatE
 1527 0060 00000000 		.word	_ZN8touchgfx3HAL8blitFillENS_9colortypeEtttth
 1528 0064 00000000 		.word	_ZN8touchgfx3HAL21registerEventListenerERNS_15UIEventListenerE
 1529 0068 00000000 		.word	_ZN8touchgfx3HAL20copyFBRegionToMemoryENS_4RectE
 1530 006c 00000000 		.word	_ZN8touchgfx3HAL20copyFBRegionToMemoryENS_4RectEPtm
 1531 0070 00000000 		.word	_ZN8touchgfx3HAL15backPorchExitedEv
 1532 0074 00000000 		.word	_ZN20TouchGFXGeneratedHAL19configureInterruptsEv
 1533 0078 00000000 		.word	_ZN20TouchGFXGeneratedHAL16enableInterruptsEv
 1534 007c 00000000 		.word	_ZN20TouchGFXGeneratedHAL17disableInterruptsEv
 1535 0080 00000000 		.word	_ZN20TouchGFXGeneratedHAL28enableLCDControllerInterruptEv
 1536 0084 00000000 		.word	_ZN8touchgfx3HAL9sampleKeyERh
 1537 0088 00000000 		.word	_ZN8touchgfx3HAL28setFrameBufferStartAddressesEPvS1_S1_
 1538 008c 00000000 		.word	_ZN8touchgfx3HAL27configurePartialFrameBufferEtttt
 1539 0090 00000000 		.word	_ZNK8touchgfx3HAL18getFlashDataReaderEv
 1540 0094 00000000 		.word	_ZN8touchgfx3HAL9taskDelayEt
 1541 0098 00000000 		.word	_ZN8touchgfx3HAL17getTFTCurrentLineEv
 1542 009c 00000000 		.word	_ZN8touchgfx3HAL10getDMATypeEv
 1543 00a0 00000000 		.word	_ZN8touchgfx3HAL27drawDrawableInDynamicBitmapERNS_8DrawableEt
 1544 00a4 00000000 		.word	_ZN8touchgfx3HAL27drawDrawableInDynamicBitmapERNS_8DrawableEtRKNS_4RectE
 1545 00a8 00000000 		.word	_ZN8touchgfx3HAL4tickEv
 1546 00ac 00000000 		.word	_ZN20TouchGFXGeneratedHAL10beginFrameEv
 1547 00b0 00000000 		.word	_ZN20TouchGFXGeneratedHAL8endFrameEv
 1548 00b4 00000000 		.word	_ZN20TouchGFXGeneratedHAL17setTFTFrameBufferEPt
 1549 00b8 00000000 		.word	_ZN8touchgfx3HAL5touchEll
 1550 00bc 00000000 		.word	_ZN8touchgfx3HAL7noTouchEv
 1551 00c0 00000000 		.word	_ZN8touchgfx3HAL31performDisplayOrientationChangeEv
 1552 00c4 00000000 		.word	_ZN8touchgfx3HAL15InvalidateCacheEv
 1553 00c8 00000000 		.word	_ZN8touchgfx3HAL10FlushCacheEv
 1554              		.section	.text._ZN20TouchGFXGeneratedHALD2Ev,"axG",%progbits,_ZN20TouchGFXGeneratedHALD5Ev,comdat
 1555              		.align	1
 1556              		.weak	_ZN20TouchGFXGeneratedHALD2Ev
 1557              		.syntax unified
 1558              		.thumb
 1559              		.thumb_func
 1560              		.fpu fpv4-sp-d16
 1562              	_ZN20TouchGFXGeneratedHALD2Ev:
 1563              	.LFB956:
  28:Src/TouchGFXGeneratedHAL.hpp **** {
 1564              		.loc 2 28 7
 1565              		.cfi_startproc
 1566              		@ args = 0, pretend = 0, frame = 8
 1567              		@ frame_needed = 1, uses_anonymous_args = 0
 1568 0000 80B5     		push	{r7, lr}
 1569              	.LCFI144:
 1570              		.cfi_def_cfa_offset 8
 1571              		.cfi_offset 7, -8
 1572              		.cfi_offset 14, -4
 1573 0002 82B0     		sub	sp, sp, #8
 1574              	.LCFI145:
 1575              		.cfi_def_cfa_offset 16
 1576 0004 00AF     		add	r7, sp, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 51


 1577              	.LCFI146:
 1578              		.cfi_def_cfa_register 7
 1579 0006 7860     		str	r0, [r7, #4]
 1580              	.LBB3:
  28:Src/TouchGFXGeneratedHAL.hpp **** {
 1581              		.loc 2 28 7
 1582 0008 054A     		ldr	r2, .L56
 1583 000a 7B68     		ldr	r3, [r7, #4]
 1584 000c 1A60     		str	r2, [r3]
 1585 000e 7B68     		ldr	r3, [r7, #4]
 1586 0010 1846     		mov	r0, r3
 1587 0012 FFF7FEFF 		bl	_ZN8touchgfx3HALD2Ev
 1588              	.LBE3:
 1589 0016 7B68     		ldr	r3, [r7, #4]
 1590 0018 1846     		mov	r0, r3
 1591 001a 0837     		adds	r7, r7, #8
 1592              	.LCFI147:
 1593              		.cfi_def_cfa_offset 8
 1594 001c BD46     		mov	sp, r7
 1595              	.LCFI148:
 1596              		.cfi_def_cfa_register 13
 1597              		@ sp needed
 1598 001e 80BD     		pop	{r7, pc}
 1599              	.L57:
 1600              		.align	2
 1601              	.L56:
 1602 0020 08000000 		.word	_ZTV20TouchGFXGeneratedHAL+8
 1603              		.cfi_endproc
 1604              	.LFE956:
 1606              		.weak	_ZN20TouchGFXGeneratedHALD1Ev
 1607              		.thumb_set _ZN20TouchGFXGeneratedHALD1Ev,_ZN20TouchGFXGeneratedHALD2Ev
 1608              		.section	.text._ZN20TouchGFXGeneratedHALD0Ev,"axG",%progbits,_ZN20TouchGFXGeneratedHALD5Ev,comdat
 1609              		.align	1
 1610              		.weak	_ZN20TouchGFXGeneratedHALD0Ev
 1611              		.syntax unified
 1612              		.thumb
 1613              		.thumb_func
 1614              		.fpu fpv4-sp-d16
 1616              	_ZN20TouchGFXGeneratedHALD0Ev:
 1617              	.LFB958:
  28:Src/TouchGFXGeneratedHAL.hpp **** {
 1618              		.loc 2 28 7
 1619              		.cfi_startproc
 1620              		@ args = 0, pretend = 0, frame = 8
 1621              		@ frame_needed = 1, uses_anonymous_args = 0
 1622 0000 80B5     		push	{r7, lr}
 1623              	.LCFI149:
 1624              		.cfi_def_cfa_offset 8
 1625              		.cfi_offset 7, -8
 1626              		.cfi_offset 14, -4
 1627 0002 82B0     		sub	sp, sp, #8
 1628              	.LCFI150:
 1629              		.cfi_def_cfa_offset 16
 1630 0004 00AF     		add	r7, sp, #0
 1631              	.LCFI151:
 1632              		.cfi_def_cfa_register 7
 1633 0006 7860     		str	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 52


  28:Src/TouchGFXGeneratedHAL.hpp **** {
 1634              		.loc 2 28 7
 1635 0008 7868     		ldr	r0, [r7, #4]
 1636 000a FFF7FEFF 		bl	_ZN20TouchGFXGeneratedHALD1Ev
 1637 000e 7C21     		movs	r1, #124
 1638 0010 7868     		ldr	r0, [r7, #4]
 1639 0012 FFF7FEFF 		bl	_ZdlPvj
 1640 0016 7B68     		ldr	r3, [r7, #4]
 1641 0018 1846     		mov	r0, r3
 1642 001a 0837     		adds	r7, r7, #8
 1643              	.LCFI152:
 1644              		.cfi_def_cfa_offset 8
 1645 001c BD46     		mov	sp, r7
 1646              	.LCFI153:
 1647              		.cfi_def_cfa_register 13
 1648              		@ sp needed
 1649 001e 80BD     		pop	{r7, pc}
 1650              		.cfi_endproc
 1651              	.LFE958:
 1653              		.text
 1654              	.Letext0:
 1655              		.file 4 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 1656              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 1657              		.file 6 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 1658              		.file 7 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 1659              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/Event.hpp"
 1660              		.file 9 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/ClickEvent.hpp"
 1661              		.file 10 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/DragEvent.hpp"
 1662              		.file 11 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/GestureEvent.hpp"
 1663              		.file 12 "Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp"
 1664              		.file 13 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp"
 1665              		.file 14 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp"
 1666              		.file 15 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/FrameBufferAllocator.hpp"
 1667              		.file 16 "Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp"
 1668              		.file 17 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp"
 1669              		.file 18 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 1670              		.file 19 "Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp"
 1671              		.file 20 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp"
 1672              		.file 21 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextureMapTypes.hpp"
 1673              		.file 22 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/DebugPrinter.hpp"
 1674              		.file 23 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp"
 1675              		.file 24 "Middlewares/ST/touchgfx/framework/include/platform/core/MCUInstrumentation.hpp"
 1676              		.file 25 "Middlewares/ST/touchgfx/framework/include/platform/driver/button/ButtonController.hpp"
 1677              		.file 26 "Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp"
 1678              		.file 27 "Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp"
 1679              		.file 28 "Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp"
 1680              		.file 29 "Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp"
 1681              		.file 30 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp"
 1682              		.file 31 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1683              		.file 32 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1684              		.file 33 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1685              		.file 34 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1686              		.file 35 "Middlewares/ST/touchgfx/framework/include/common/Meta.hpp"
 1687              		.file 36 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1688              		.file 37 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/sig
 1689              		.file 38 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/signal.
 1690              		.file 39 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 53


 1691              		.file 40 "Src/gui/include/gui/common/FrontendApplication.hpp"
 1692              		.file 41 "Src/gui/include/gui/screen_screen/screenPresenter.hpp"
 1693              		.file 42 "Drivers/CMSIS/Device/ST/STM32F4xx/Include/stm32f4xx.h"
 1694              		.file 43 "Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h"
 1695              		.file 44 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 54


DEFINED SYMBOLS
                            *ABS*:0000000000000000 TouchGFXGeneratedHAL.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:79     .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:82     .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:85     .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:88     .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:91     .text._ZN8touchgfx3HALD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:99     .text._ZN8touchgfx3HALD2Ev:0000000000000000 _ZN8touchgfx3HALD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:142    .text._ZN8touchgfx3HALD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:99     .text._ZN8touchgfx3HALD2Ev:0000000000000000 _ZN8touchgfx3HALD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:149    .text._ZN8touchgfx3HALD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:156    .text._ZN8touchgfx3HALD0Ev:0000000000000000 _ZN8touchgfx3HALD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:194    .text._ZN8touchgfx3HAL21setDisplayOrientationENS_18DisplayOrientationE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:201    .text._ZN8touchgfx3HAL21setDisplayOrientationENS_18DisplayOrientationE:0000000000000000 _ZN8touchgfx3HAL21setDisplayOrientationENS_18DisplayOrientationE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:247    .text._ZN8touchgfx3HAL11getBlitCapsEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:254    .text._ZN8touchgfx3HAL11getBlitCapsEv:0000000000000000 _ZN8touchgfx3HAL11getBlitCapsEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:311    .text._ZN8touchgfx3HAL15backPorchExitedEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:318    .text._ZN8touchgfx3HAL15backPorchExitedEv:0000000000000000 _ZN8touchgfx3HAL15backPorchExitedEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:362    .text._ZN8touchgfx3HAL9sampleKeyERh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:369    .text._ZN8touchgfx3HAL9sampleKeyERh:0000000000000000 _ZN8touchgfx3HAL9sampleKeyERh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:408    .rodata:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:421    .text._ZN8touchgfx3HAL28setFrameBufferStartAddressesEPvS1_S1_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:428    .text._ZN8touchgfx3HAL28setFrameBufferStartAddressesEPvS1_S1_:0000000000000000 _ZN8touchgfx3HAL28setFrameBufferStartAddressesEPvS1_S1_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:505    .text._ZN8touchgfx3HAL28setFrameBufferStartAddressesEPvS1_S1_:000000000000005c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:514    .text._ZNK8touchgfx3HAL18getFlashDataReaderEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:521    .text._ZNK8touchgfx3HAL18getFlashDataReaderEv:0000000000000000 _ZNK8touchgfx3HAL18getFlashDataReaderEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:559    .text._ZN8touchgfx3HAL9taskDelayEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:566    .text._ZN8touchgfx3HAL9taskDelayEt:0000000000000000 _ZN8touchgfx3HAL9taskDelayEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:615    .text._ZN8touchgfx3HAL17getTFTCurrentLineEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:622    .text._ZN8touchgfx3HAL17getTFTCurrentLineEv:0000000000000000 _ZN8touchgfx3HAL17getTFTCurrentLineEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:660    .text._ZN8touchgfx3HAL10getDMATypeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:667    .text._ZN8touchgfx3HAL10getDMATypeEv:0000000000000000 _ZN8touchgfx3HAL10getDMATypeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:713    .text._ZN8touchgfx3HAL31performDisplayOrientationChangeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:720    .text._ZN8touchgfx3HAL31performDisplayOrientationChangeEv:0000000000000000 _ZN8touchgfx3HAL31performDisplayOrientationChangeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:828    .text._ZN8touchgfx3HAL31performDisplayOrientationChangeEv:0000000000000084 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:837    .text._ZN8touchgfx3HAL15InvalidateCacheEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:844    .text._ZN8touchgfx3HAL15InvalidateCacheEv:0000000000000000 _ZN8touchgfx3HAL15InvalidateCacheEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:880    .text._ZN8touchgfx3HAL10FlushCacheEv:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 55


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:887    .text._ZN8touchgfx3HAL10FlushCacheEv:0000000000000000 _ZN8touchgfx3HAL10FlushCacheEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:923    .text._ZN20TouchGFXGeneratedHAL16flushFrameBufferEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:930    .text._ZN20TouchGFXGeneratedHAL16flushFrameBufferEv:0000000000000000 _ZN20TouchGFXGeneratedHAL16flushFrameBufferEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:967    TouchGFX_Framebuffer:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:970    TouchGFX_Framebuffer:0000000000000000 _ZN12_GLOBAL__N_18frameBufE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:973    .text._ZN20TouchGFXGeneratedHAL10initializeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:980    .text._ZN20TouchGFXGeneratedHAL10initializeEv:0000000000000000 _ZN20TouchGFXGeneratedHAL10initializeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1046   .text._ZN20TouchGFXGeneratedHAL10initializeEv:0000000000000040 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1052   .text._ZN20TouchGFXGeneratedHAL19configureInterruptsEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1059   .text._ZN20TouchGFXGeneratedHAL19configureInterruptsEv:0000000000000000 _ZN20TouchGFXGeneratedHAL19configureInterruptsEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1095   .text._ZN20TouchGFXGeneratedHAL16enableInterruptsEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1102   .text._ZN20TouchGFXGeneratedHAL16enableInterruptsEv:0000000000000000 _ZN20TouchGFXGeneratedHAL16enableInterruptsEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1138   .text._ZN20TouchGFXGeneratedHAL17disableInterruptsEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1145   .text._ZN20TouchGFXGeneratedHAL17disableInterruptsEv:0000000000000000 _ZN20TouchGFXGeneratedHAL17disableInterruptsEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1181   .text._ZN20TouchGFXGeneratedHAL28enableLCDControllerInterruptEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1188   .text._ZN20TouchGFXGeneratedHAL28enableLCDControllerInterruptEv:0000000000000000 _ZN20TouchGFXGeneratedHAL28enableLCDControllerInterruptEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1224   .text._ZN20TouchGFXGeneratedHAL10beginFrameEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1231   .text._ZN20TouchGFXGeneratedHAL10beginFrameEv:0000000000000000 _ZN20TouchGFXGeneratedHAL10beginFrameEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1268   .text._ZN20TouchGFXGeneratedHAL8endFrameEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1275   .text._ZN20TouchGFXGeneratedHAL8endFrameEv:0000000000000000 _ZN20TouchGFXGeneratedHAL8endFrameEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1311   .text._ZNK20TouchGFXGeneratedHAL17getTFTFrameBufferEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1318   .text._ZNK20TouchGFXGeneratedHAL17getTFTFrameBufferEv:0000000000000000 _ZNK20TouchGFXGeneratedHAL17getTFTFrameBufferEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1355   .text._ZNK20TouchGFXGeneratedHAL17getTFTFrameBufferEv:0000000000000018 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1360   .text._ZN20TouchGFXGeneratedHAL17setTFTFrameBufferEPt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1367   .text._ZN20TouchGFXGeneratedHAL17setTFTFrameBufferEPt:0000000000000000 _ZN20TouchGFXGeneratedHAL17setTFTFrameBufferEPt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1404   .text._ZN20TouchGFXGeneratedHAL16flushFrameBufferERKN8touchgfx4RectE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1411   .text._ZN20TouchGFXGeneratedHAL16flushFrameBufferERKN8touchgfx4RectE:0000000000000000 _ZN20TouchGFXGeneratedHAL16flushFrameBufferERKN8touchgfx4RectE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1449   .text._ZN20TouchGFXGeneratedHAL9blockCopyEPvPKvm:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1456   .text._ZN20TouchGFXGeneratedHAL9blockCopyEPvPKvm:0000000000000000 _ZN20TouchGFXGeneratedHAL9blockCopyEPvPKvm
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1502   .rodata._ZTV20TouchGFXGeneratedHAL:0000000000000000 _ZTV20TouchGFXGeneratedHAL
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1499   .rodata._ZTV20TouchGFXGeneratedHAL:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1562   .text._ZN20TouchGFXGeneratedHALD2Ev:0000000000000000 _ZN20TouchGFXGeneratedHALD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1616   .text._ZN20TouchGFXGeneratedHALD0Ev:0000000000000000 _ZN20TouchGFXGeneratedHALD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1555   .text._ZN20TouchGFXGeneratedHALD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1562   .text._ZN20TouchGFXGeneratedHALD2Ev:0000000000000000 _ZN20TouchGFXGeneratedHALD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1602   .text._ZN20TouchGFXGeneratedHALD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s:1609   .text._ZN20TouchGFXGeneratedHALD0Ev:0000000000000000 $t
                           .group:0000000000000000 _ZN8touchgfx3HALD5Ev
                           .group:0000000000000000 _ZN20TouchGFXGeneratedHALD5Ev
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 56


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
                           .group:0000000000000000 wm4.stm32f4xx.h.39.163e65267b4f964a08764289722b975f
                           .group:0000000000000000 wm4.stm32f429xx.h.35.15b6ffdfe1f51d9061151ad70b272803
                           .group:0000000000000000 wm4.cmsis_version.h.32.4d5822004c01a829a975260e854b5f8e
                           .group:0000000000000000 wm4.core_cm4.h.66.e4ff136c4a17abc46741866f64f8e729
                           .group:0000000000000000 wm4.cmsis_gcc.h.26.6774fe91202d65f4d5ffcff60e00da34
                           .group:0000000000000000 wm4.core_cm4.h.174.cad1cd5c3704104afe8ee4934b0393c3
                           .group:0000000000000000 wm4.mpu_armv7.h.32.27b4593cb2f8d3152ca5d97a9d72b321
                           .group:0000000000000000 wm4.stm32f429xx.h.1025.13d052abf2496a1c824d44a6b919663f
                           .group:0000000000000000 wm4.stm32f4xx.h.196.0b21137cf6c6923d8fd1f4d94a3bfdd4
                           .group:0000000000000000 wm4.stm32f4xx_hal_conf.h.24.57e6c5b880d8180a2e23d9505bd4487d
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc04b66E.s 			page 57


                           .group:0000000000000000 wm4.stm32f4xx_hal_spi.h.22.d102b5b729e9d6fc8b291699f107fb9f
                           .group:0000000000000000 wm4.stm32f4xx_hal_tim.h.22.8c7804d33ac9cf100eb6beb95ec2d5af
                           .group:0000000000000000 wm4.stm32f4xx_hal_tim_ex.h.22.2fde471485fd197eebc7c86251149c11
                           .group:0000000000000000 wm4.stm32f4xx_hal_uart.h.22.591b491756a19342b0bf79eea5b33e1b
                           .group:0000000000000000 wm4.stm32f4xx_ll_usb.h.22.3497d8ac31b2bdafc7c2a34d860c4769
                           .group:0000000000000000 wm4.stm32f4xx_hal_hcd.h.111.a51c3bd0d61d2d8cadb372f7c7d9eccb
                           .group:0000000000000000 wm4.stm32f4xx_hal.h.72.eb74cef44a933f3811e1af2158aac184

UNDEFINED SYMBOLS
_ZTVN8touchgfx3HALE
_ZdlPvj
_ZN8touchgfx3HAL16swapFrameBuffersEv
__assert_func
_ZN8touchgfx3HAL20USE_DOUBLE_BUFFERINGE
_ZN8touchgfx3HAL21USE_ANIMATION_STORAGEE
_ZN8touchgfx3HAL16DISPLAY_ROTATIONE
_ZN8touchgfx3HAL13DISPLAY_WIDTHE
_ZN8touchgfx3HAL18FRAME_BUFFER_WIDTHE
_ZN8touchgfx3HAL14DISPLAY_HEIGHTE
_ZN8touchgfx3HAL19FRAME_BUFFER_HEIGHTE
_ZN8touchgfx3HAL16flushFrameBufferEv
_ZN8touchgfx3HAL10initializeEv
_ZN8touchgfx11Application11getInstanceEv
_ZN8touchgfx3HAL10beginFrameEv
_ZN8touchgfx3HAL8endFrameEv
_ZN8touchgfx3HAL16flushFrameBufferERKNS_4RectE
_ZN8touchgfx3HAL9blockCopyEPvPKvm
_ZN8touchgfx3HAL9taskEntryEv
_ZN8touchgfx3HAL17allowDMATransfersEv
_ZN8touchgfx3HAL8flushDMAEv
_ZN8touchgfx3HAL15lockFrameBufferEv
_ZN8touchgfx3HAL17unlockFrameBufferEv
_ZN8touchgfx3HAL8blitCopyEPKtPKhttttthbtNS_6Bitmap12BitmapFormatES6_
_ZN8touchgfx3HAL8blitCopyEPKtttttthbtNS_6Bitmap12BitmapFormatES4_
_ZN8touchgfx3HAL8blitCopyEPKtttttthb
_ZN8touchgfx3HAL12blitCopyWordEPKttttttt
_ZN8touchgfx3HAL12blitFillWordEtttttt
_ZN8touchgfx3HAL16blitCopyARGB8888EPKtttttth
_ZN8touchgfx3HAL13blitCopyGlyphEPKhtttttNS_9colortypeEhNS_14BlitOperationsE
_ZN8touchgfx3HAL8blitFillENS_9colortypeEtttthtNS_6Bitmap12BitmapFormatE
_ZN8touchgfx3HAL8blitFillENS_9colortypeEtttth
_ZN8touchgfx3HAL21registerEventListenerERNS_15UIEventListenerE
_ZN8touchgfx3HAL20copyFBRegionToMemoryENS_4RectE
_ZN8touchgfx3HAL20copyFBRegionToMemoryENS_4RectEPtm
_ZN8touchgfx3HAL27configurePartialFrameBufferEtttt
_ZN8touchgfx3HAL27drawDrawableInDynamicBitmapERNS_8DrawableEt
_ZN8touchgfx3HAL27drawDrawableInDynamicBitmapERNS_8DrawableEtRKNS_4RectE
_ZN8touchgfx3HAL4tickEv
_ZN8touchgfx3HAL5touchEll
_ZN8touchgfx3HAL7noTouchEv
