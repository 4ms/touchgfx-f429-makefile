ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 1


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
  13              		.file	"FrontendApplication.cpp"
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
  78              		.section	.text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE,"axG",%progbits,
  79              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 2


  80              		.weak	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
  81              		.arch armv7e-m
  82              		.syntax unified
  83              		.thumb
  84              		.thumb_func
  85              		.fpu fpv4-sp-d16
  87              	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:
  88              	.LFB155:
  89              		.file 1 "Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp"
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
  90              		.loc 1 44 18
  91              		.cfi_startproc
  92              		@ args = 0, pretend = 0, frame = 8
  93              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 3


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
 106 0008 3960     		str	r1, [r7]
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 107              		.loc 1 46 5
 108 000a 00BF     		nop
 109 000c 0C37     		adds	r7, r7, #12
 110              	.LCFI3:
 111              		.cfi_def_cfa_offset 4
 112 000e BD46     		mov	sp, r7
 113              	.LCFI4:
 114              		.cfi_def_cfa_register 13
 115              		@ sp needed
 116 0010 5DF8047B 		ldr	r7, [sp], #4
 117              	.LCFI5:
 118              		.cfi_restore 7
 119              		.cfi_def_cfa_offset 0
 120 0014 7047     		bx	lr
 121              		.cfi_endproc
 122              	.LFE155:
 124              		.section	.text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE,"axG",%progbits,_ZN
 125              		.align	1
 126              		.weak	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
 127              		.syntax unified
 128              		.thumb
 129              		.thumb_func
 130              		.fpu fpv4-sp-d16
 132              	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:
 133              	.LFB156:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a drag event has been detected by the system.
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  event The event data.
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleDragEvent(const DragEvent& event)
 134              		.loc 1 53 18
 135              		.cfi_startproc
 136              		@ args = 0, pretend = 0, frame = 8
 137              		@ frame_needed = 1, uses_anonymous_args = 0
 138              		@ link register save eliminated.
 139 0000 80B4     		push	{r7}
 140              	.LCFI6:
 141              		.cfi_def_cfa_offset 4
 142              		.cfi_offset 7, -4
 143 0002 83B0     		sub	sp, sp, #12
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 4


 144              	.LCFI7:
 145              		.cfi_def_cfa_offset 16
 146 0004 00AF     		add	r7, sp, #0
 147              	.LCFI8:
 148              		.cfi_def_cfa_register 7
 149 0006 7860     		str	r0, [r7, #4]
 150 0008 3960     		str	r1, [r7]
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 151              		.loc 1 55 5
 152 000a 00BF     		nop
 153 000c 0C37     		adds	r7, r7, #12
 154              	.LCFI9:
 155              		.cfi_def_cfa_offset 4
 156 000e BD46     		mov	sp, r7
 157              	.LCFI10:
 158              		.cfi_def_cfa_register 13
 159              		@ sp needed
 160 0010 5DF8047B 		ldr	r7, [sp], #4
 161              	.LCFI11:
 162              		.cfi_restore 7
 163              		.cfi_def_cfa_offset 0
 164 0014 7047     		bx	lr
 165              		.cfi_endproc
 166              	.LFE156:
 168              		.section	.text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE,"axG",%progb
 169              		.align	1
 170              		.weak	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
 171              		.syntax unified
 172              		.thumb
 173              		.thumb_func
 174              		.fpu fpv4-sp-d16
 176              	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:
 177              	.LFB157:
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a gesture event has been detected by the system.
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  event The event data.
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleGestureEvent(const GestureEvent& event)
 178              		.loc 1 62 18
 179              		.cfi_startproc
 180              		@ args = 0, pretend = 0, frame = 8
 181              		@ frame_needed = 1, uses_anonymous_args = 0
 182              		@ link register save eliminated.
 183 0000 80B4     		push	{r7}
 184              	.LCFI12:
 185              		.cfi_def_cfa_offset 4
 186              		.cfi_offset 7, -4
 187 0002 83B0     		sub	sp, sp, #12
 188              	.LCFI13:
 189              		.cfi_def_cfa_offset 16
 190 0004 00AF     		add	r7, sp, #0
 191              	.LCFI14:
 192              		.cfi_def_cfa_register 7
 193 0006 7860     		str	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 5


 194 0008 3960     		str	r1, [r7]
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 195              		.loc 1 64 5
 196 000a 00BF     		nop
 197 000c 0C37     		adds	r7, r7, #12
 198              	.LCFI15:
 199              		.cfi_def_cfa_offset 4
 200 000e BD46     		mov	sp, r7
 201              	.LCFI16:
 202              		.cfi_def_cfa_register 13
 203              		@ sp needed
 204 0010 5DF8047B 		ldr	r7, [sp], #4
 205              	.LCFI17:
 206              		.cfi_restore 7
 207              		.cfi_def_cfa_offset 0
 208 0014 7047     		bx	lr
 209              		.cfi_endproc
 210              	.LFE157:
 212              		.section	.text._ZN8touchgfx15UIEventListener14handleKeyEventEh,"axG",%progbits,_ZN8touchgfx15UIEve
 213              		.align	1
 214              		.weak	_ZN8touchgfx15UIEventListener14handleKeyEventEh
 215              		.syntax unified
 216              		.thumb
 217              		.thumb_func
 218              		.fpu fpv4-sp-d16
 220              	_ZN8touchgfx15UIEventListener14handleKeyEventEh:
 221              	.LFB158:
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a key (or button) event has been detected by the system.
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  c The key or button pressed.
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleKeyEvent(uint8_t c)
 222              		.loc 1 71 18
 223              		.cfi_startproc
 224              		@ args = 0, pretend = 0, frame = 8
 225              		@ frame_needed = 1, uses_anonymous_args = 0
 226              		@ link register save eliminated.
 227 0000 80B4     		push	{r7}
 228              	.LCFI18:
 229              		.cfi_def_cfa_offset 4
 230              		.cfi_offset 7, -4
 231 0002 83B0     		sub	sp, sp, #12
 232              	.LCFI19:
 233              		.cfi_def_cfa_offset 16
 234 0004 00AF     		add	r7, sp, #0
 235              	.LCFI20:
 236              		.cfi_def_cfa_register 7
 237 0006 7860     		str	r0, [r7, #4]
 238 0008 0B46     		mov	r3, r1
 239 000a FB70     		strb	r3, [r7, #3]
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 240              		.loc 1 73 5
 241 000c 00BF     		nop
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 6


 242 000e 0C37     		adds	r7, r7, #12
 243              	.LCFI21:
 244              		.cfi_def_cfa_offset 4
 245 0010 BD46     		mov	sp, r7
 246              	.LCFI22:
 247              		.cfi_def_cfa_register 13
 248              		@ sp needed
 249 0012 5DF8047B 		ldr	r7, [sp], #4
 250              	.LCFI23:
 251              		.cfi_restore 7
 252              		.cfi_def_cfa_offset 0
 253 0016 7047     		bx	lr
 254              		.cfi_endproc
 255              	.LFE158:
 257              		.section	.text._ZN8touchgfx15UIEventListener15handleTickEventEv,"axG",%progbits,_ZN8touchgfx15UIEv
 258              		.align	1
 259              		.weak	_ZN8touchgfx15UIEventListener15handleTickEventEv
 260              		.syntax unified
 261              		.thumb
 262              		.thumb_func
 263              		.fpu fpv4-sp-d16
 265              	_ZN8touchgfx15UIEventListener15handleTickEventEv:
 266              	.LFB159:
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a system tick event has been generated. The system tick
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * period is configured in the HAL.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleTickEvent()
 267              		.loc 1 79 18
 268              		.cfi_startproc
 269              		@ args = 0, pretend = 0, frame = 8
 270              		@ frame_needed = 1, uses_anonymous_args = 0
 271              		@ link register save eliminated.
 272 0000 80B4     		push	{r7}
 273              	.LCFI24:
 274              		.cfi_def_cfa_offset 4
 275              		.cfi_offset 7, -4
 276 0002 83B0     		sub	sp, sp, #12
 277              	.LCFI25:
 278              		.cfi_def_cfa_offset 16
 279 0004 00AF     		add	r7, sp, #0
 280              	.LCFI26:
 281              		.cfi_def_cfa_register 7
 282 0006 7860     		str	r0, [r7, #4]
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 283              		.loc 1 81 5
 284 0008 00BF     		nop
 285 000a 0C37     		adds	r7, r7, #12
 286              	.LCFI27:
 287              		.cfi_def_cfa_offset 4
 288 000c BD46     		mov	sp, r7
 289              	.LCFI28:
 290              		.cfi_def_cfa_register 13
 291              		@ sp needed
 292 000e 5DF8047B 		ldr	r7, [sp], #4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 7


 293              	.LCFI29:
 294              		.cfi_restore 7
 295              		.cfi_def_cfa_offset 0
 296 0012 7047     		bx	lr
 297              		.cfi_endproc
 298              	.LFE159:
 300              		.section	.text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv,"axG",%progbits,_ZN8
 301              		.align	1
 302              		.weak	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
 303              		.syntax unified
 304              		.thumb
 305              		.thumb_func
 306              		.fpu fpv4-sp-d16
 308              	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:
 309              	.LFB160:
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /** This handler is invoked when a change screen event is pending. */
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handlePendingScreenTransition()
 310              		.loc 1 84 18
 311              		.cfi_startproc
 312              		@ args = 0, pretend = 0, frame = 8
 313              		@ frame_needed = 1, uses_anonymous_args = 0
 314              		@ link register save eliminated.
 315 0000 80B4     		push	{r7}
 316              	.LCFI30:
 317              		.cfi_def_cfa_offset 4
 318              		.cfi_offset 7, -4
 319 0002 83B0     		sub	sp, sp, #12
 320              	.LCFI31:
 321              		.cfi_def_cfa_offset 16
 322 0004 00AF     		add	r7, sp, #0
 323              	.LCFI32:
 324              		.cfi_def_cfa_register 7
 325 0006 7860     		str	r0, [r7, #4]
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 326              		.loc 1 86 5
 327 0008 00BF     		nop
 328 000a 0C37     		adds	r7, r7, #12
 329              	.LCFI33:
 330              		.cfi_def_cfa_offset 4
 331 000c BD46     		mov	sp, r7
 332              	.LCFI34:
 333              		.cfi_def_cfa_register 13
 334              		@ sp needed
 335 000e 5DF8047B 		ldr	r7, [sp], #4
 336              	.LCFI35:
 337              		.cfi_restore 7
 338              		.cfi_def_cfa_offset 0
 339 0012 7047     		bx	lr
 340              		.cfi_endproc
 341              	.LFE160:
 343              		.section	.text._ZN8touchgfx15UIEventListenerD2Ev,"axG",%progbits,_ZN8touchgfx15UIEventListenerD5Ev
 344              		.align	1
 345              		.weak	_ZN8touchgfx15UIEventListenerD2Ev
 346              		.syntax unified
 347              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 8


 348              		.thumb_func
 349              		.fpu fpv4-sp-d16
 351              	_ZN8touchgfx15UIEventListenerD2Ev:
 352              	.LFB162:
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /** Finalizes an instance of the UIEventListener class. */
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual ~UIEventListener()
 353              		.loc 1 89 13
 354              		.cfi_startproc
 355              		@ args = 0, pretend = 0, frame = 8
 356              		@ frame_needed = 1, uses_anonymous_args = 0
 357              		@ link register save eliminated.
 358 0000 80B4     		push	{r7}
 359              	.LCFI36:
 360              		.cfi_def_cfa_offset 4
 361              		.cfi_offset 7, -4
 362 0002 83B0     		sub	sp, sp, #12
 363              	.LCFI37:
 364              		.cfi_def_cfa_offset 16
 365 0004 00AF     		add	r7, sp, #0
 366              	.LCFI38:
 367              		.cfi_def_cfa_register 7
 368 0006 7860     		str	r0, [r7, #4]
 369              	.LBB2:
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
 370              		.loc 1 90 5
 371 0008 044A     		ldr	r2, .L9
 372 000a 7B68     		ldr	r3, [r7, #4]
 373 000c 1A60     		str	r2, [r3]
 374              	.LBE2:
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 375              		.loc 1 91 5
 376 000e 7B68     		ldr	r3, [r7, #4]
 377 0010 1846     		mov	r0, r3
 378 0012 0C37     		adds	r7, r7, #12
 379              	.LCFI39:
 380              		.cfi_def_cfa_offset 4
 381 0014 BD46     		mov	sp, r7
 382              	.LCFI40:
 383              		.cfi_def_cfa_register 13
 384              		@ sp needed
 385 0016 5DF8047B 		ldr	r7, [sp], #4
 386              	.LCFI41:
 387              		.cfi_restore 7
 388              		.cfi_def_cfa_offset 0
 389 001a 7047     		bx	lr
 390              	.L10:
 391              		.align	2
 392              	.L9:
 393 001c 08000000 		.word	_ZTVN8touchgfx15UIEventListenerE+8
 394              		.cfi_endproc
 395              	.LFE162:
 397              		.weak	_ZN8touchgfx15UIEventListenerD1Ev
 398              		.thumb_set _ZN8touchgfx15UIEventListenerD1Ev,_ZN8touchgfx15UIEventListenerD2Ev
 399              		.section	.text._ZN8touchgfx15UIEventListenerD0Ev,"axG",%progbits,_ZN8touchgfx15UIEventListenerD5Ev
 400              		.align	1
 401              		.weak	_ZN8touchgfx15UIEventListenerD0Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 9


 402              		.syntax unified
 403              		.thumb
 404              		.thumb_func
 405              		.fpu fpv4-sp-d16
 407              	_ZN8touchgfx15UIEventListenerD0Ev:
 408              	.LFB164:
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
 409              		.loc 1 89 13
 410              		.cfi_startproc
 411              		@ args = 0, pretend = 0, frame = 8
 412              		@ frame_needed = 1, uses_anonymous_args = 0
 413 0000 80B5     		push	{r7, lr}
 414              	.LCFI42:
 415              		.cfi_def_cfa_offset 8
 416              		.cfi_offset 7, -8
 417              		.cfi_offset 14, -4
 418 0002 82B0     		sub	sp, sp, #8
 419              	.LCFI43:
 420              		.cfi_def_cfa_offset 16
 421 0004 00AF     		add	r7, sp, #0
 422              	.LCFI44:
 423              		.cfi_def_cfa_register 7
 424 0006 7860     		str	r0, [r7, #4]
 425              		.loc 1 91 5
 426 0008 7868     		ldr	r0, [r7, #4]
 427 000a FFF7FEFF 		bl	_ZN8touchgfx15UIEventListenerD1Ev
 428 000e 0421     		movs	r1, #4
 429 0010 7868     		ldr	r0, [r7, #4]
 430 0012 FFF7FEFF 		bl	_ZdlPvj
 431 0016 7B68     		ldr	r3, [r7, #4]
 432 0018 1846     		mov	r0, r3
 433 001a 0837     		adds	r7, r7, #8
 434              	.LCFI45:
 435              		.cfi_def_cfa_offset 8
 436 001c BD46     		mov	sp, r7
 437              	.LCFI46:
 438              		.cfi_def_cfa_register 13
 439              		@ sp needed
 440 001e 80BD     		pop	{r7, pc}
 441              		.cfi_endproc
 442              	.LFE164:
 444              		.section	.rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE,"a"
 445              		.align	1
 448              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
 449 0000 FEFF     		.short	-2
 450              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
 451              		.align	1
 454              	_ZN8touchgfxL14BITMAP_INVALIDE:
 455 0000 FFFF     		.short	-1
 456              		.section	.text._ZN8touchgfx11Application15appSwitchScreenEh,"axG",%progbits,_ZN8touchgfx11Applicat
 457              		.align	1
 458              		.weak	_ZN8touchgfx11Application15appSwitchScreenEh
 459              		.syntax unified
 460              		.thumb
 461              		.thumb_func
 462              		.fpu fpv4-sp-d16
 464              	_ZN8touchgfx11Application15appSwitchScreenEh:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 10


 465              	.LFB282:
 466              		.file 2 "Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 11


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
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @param screenId An id that maps to the desired screen.
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      */
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void appSwitchScreen(uint8_t screenId)
 467              		.loc 2 74 18
 468              		.cfi_startproc
 469              		@ args = 0, pretend = 0, frame = 8
 470              		@ frame_needed = 1, uses_anonymous_args = 0
 471              		@ link register save eliminated.
 472 0000 80B4     		push	{r7}
 473              	.LCFI47:
 474              		.cfi_def_cfa_offset 4
 475              		.cfi_offset 7, -4
 476 0002 83B0     		sub	sp, sp, #12
 477              	.LCFI48:
 478              		.cfi_def_cfa_offset 16
 479 0004 00AF     		add	r7, sp, #0
 480              	.LCFI49:
 481              		.cfi_def_cfa_register 7
 482 0006 7860     		str	r0, [r7, #4]
 483 0008 0B46     		mov	r3, r1
 484 000a FB70     		strb	r3, [r7, #3]
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     {
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     }
 485              		.loc 2 76 5
 486 000c 00BF     		nop
 487 000e 0C37     		adds	r7, r7, #12
 488              	.LCFI50:
 489              		.cfi_def_cfa_offset 4
 490 0010 BD46     		mov	sp, r7
 491              	.LCFI51:
 492              		.cfi_def_cfa_register 13
 493              		@ sp needed
 494 0012 5DF8047B 		ldr	r7, [sp], #4
 495              	.LCFI52:
 496              		.cfi_restore 7
 497              		.cfi_def_cfa_offset 0
 498 0016 7047     		bx	lr
 499              		.cfi_endproc
 500              	.LFE282:
 502              		.section	.text._ZN8touchgfx11Application13requestRedrawERNS_4RectE,"axG",%progbits,_ZN8touchgfx11A
 503              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 12


 504              		.weak	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 505              		.syntax unified
 506              		.thumb
 507              		.thumb_func
 508              		.fpu fpv4-sp-d16
 510              	_ZN8touchgfx11Application13requestRedrawERNS_4RectE:
 511              	.LFB283:
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /** An application specific function for requesting redraw of entire screen. */
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void requestRedraw();
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /**
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * An application specific function for requesting redraw of given Rect.
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @param [in,out] rect The Rect that must be redrawn.
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      */
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void requestRedraw(Rect& rect)
 512              		.loc 2 86 18
 513              		.cfi_startproc
 514              		@ args = 0, pretend = 0, frame = 8
 515              		@ frame_needed = 1, uses_anonymous_args = 0
 516              		@ link register save eliminated.
 517 0000 80B4     		push	{r7}
 518              	.LCFI53:
 519              		.cfi_def_cfa_offset 4
 520              		.cfi_offset 7, -4
 521 0002 83B0     		sub	sp, sp, #12
 522              	.LCFI54:
 523              		.cfi_def_cfa_offset 16
 524 0004 00AF     		add	r7, sp, #0
 525              	.LCFI55:
 526              		.cfi_def_cfa_register 7
 527 0006 7860     		str	r0, [r7, #4]
 528 0008 3960     		str	r1, [r7]
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     {
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****         redraw = rect;
 529              		.loc 2 88 16
 530 000a 7B68     		ldr	r3, [r7, #4]
 531 000c 3A68     		ldr	r2, [r7]
 532 000e 03F59673 		add	r3, r3, #300
 533 0012 1068     		ldr	r0, [r2]	@ unaligned
 534 0014 5168     		ldr	r1, [r2, #4]	@ unaligned
 535 0016 03C3     		stmia	r3!, {r0, r1}
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     }
 536              		.loc 2 89 5
 537 0018 00BF     		nop
 538 001a 0C37     		adds	r7, r7, #12
 539              	.LCFI56:
 540              		.cfi_def_cfa_offset 4
 541 001c BD46     		mov	sp, r7
 542              	.LCFI57:
 543              		.cfi_def_cfa_register 13
 544              		@ sp needed
 545 001e 5DF8047B 		ldr	r7, [sp], #4
 546              	.LCFI58:
 547              		.cfi_restore 7
 548              		.cfi_def_cfa_offset 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 13


 549 0022 7047     		bx	lr
 550              		.cfi_endproc
 551              	.LFE283:
 553              		.section	.text._ZN8touchgfx15GenericCallbackIvvvED2Ev,"axG",%progbits,_ZN8touchgfx15GenericCallbac
 554              		.align	1
 555              		.weak	_ZN8touchgfx15GenericCallbackIvvvED2Ev
 556              		.syntax unified
 557              		.thumb
 558              		.thumb_func
 559              		.fpu fpv4-sp-d16
 561              	_ZN8touchgfx15GenericCallbackIvvvED2Ev:
 562              	.LFB292:
 563              		.file 3 "Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 14


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 15


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 16


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
 174:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** template <>
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** class GenericCallback<void>
 176:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 177:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** public:
 178:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Finalizes an instance of the GenericCallback<void> class. */
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual ~GenericCallback()
 564              		.loc 3 179 13
 565              		.cfi_startproc
 566              		@ args = 0, pretend = 0, frame = 8
 567              		@ frame_needed = 1, uses_anonymous_args = 0
 568              		@ link register save eliminated.
 569 0000 80B4     		push	{r7}
 570              	.LCFI59:
 571              		.cfi_def_cfa_offset 4
 572              		.cfi_offset 7, -4
 573 0002 83B0     		sub	sp, sp, #12
 574              	.LCFI60:
 575              		.cfi_def_cfa_offset 16
 576 0004 00AF     		add	r7, sp, #0
 577              	.LCFI61:
 578              		.cfi_def_cfa_register 7
 579 0006 7860     		str	r0, [r7, #4]
 580              	.LBB3:
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 581              		.loc 3 180 5
 582 0008 044A     		ldr	r2, .L17
 583 000a 7B68     		ldr	r3, [r7, #4]
 584 000c 1A60     		str	r2, [r3]
 585              	.LBE3:
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 586              		.loc 3 181 5
 587 000e 7B68     		ldr	r3, [r7, #4]
 588 0010 1846     		mov	r0, r3
 589 0012 0C37     		adds	r7, r7, #12
 590              	.LCFI62:
 591              		.cfi_def_cfa_offset 4
 592 0014 BD46     		mov	sp, r7
 593              	.LCFI63:
 594              		.cfi_def_cfa_register 13
 595              		@ sp needed
 596 0016 5DF8047B 		ldr	r7, [sp], #4
 597              	.LCFI64:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 17


 598              		.cfi_restore 7
 599              		.cfi_def_cfa_offset 0
 600 001a 7047     		bx	lr
 601              	.L18:
 602              		.align	2
 603              	.L17:
 604 001c 08000000 		.word	_ZTVN8touchgfx15GenericCallbackIvvvEE+8
 605              		.cfi_endproc
 606              	.LFE292:
 608              		.weak	_ZN8touchgfx15GenericCallbackIvvvED1Ev
 609              		.thumb_set _ZN8touchgfx15GenericCallbackIvvvED1Ev,_ZN8touchgfx15GenericCallbackIvvvED2Ev
 610              		.section	.text._ZN8touchgfx15GenericCallbackIvvvED0Ev,"axG",%progbits,_ZN8touchgfx15GenericCallbac
 611              		.align	1
 612              		.weak	_ZN8touchgfx15GenericCallbackIvvvED0Ev
 613              		.syntax unified
 614              		.thumb
 615              		.thumb_func
 616              		.fpu fpv4-sp-d16
 618              	_ZN8touchgfx15GenericCallbackIvvvED0Ev:
 619              	.LFB294:
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 620              		.loc 3 179 13
 621              		.cfi_startproc
 622              		@ args = 0, pretend = 0, frame = 8
 623              		@ frame_needed = 1, uses_anonymous_args = 0
 624 0000 80B5     		push	{r7, lr}
 625              	.LCFI65:
 626              		.cfi_def_cfa_offset 8
 627              		.cfi_offset 7, -8
 628              		.cfi_offset 14, -4
 629 0002 82B0     		sub	sp, sp, #8
 630              	.LCFI66:
 631              		.cfi_def_cfa_offset 16
 632 0004 00AF     		add	r7, sp, #0
 633              	.LCFI67:
 634              		.cfi_def_cfa_register 7
 635 0006 7860     		str	r0, [r7, #4]
 636              		.loc 3 181 5
 637 0008 7868     		ldr	r0, [r7, #4]
 638 000a FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvED1Ev
 639 000e 0421     		movs	r1, #4
 640 0010 7868     		ldr	r0, [r7, #4]
 641 0012 FFF7FEFF 		bl	_ZdlPvj
 642 0016 7B68     		ldr	r3, [r7, #4]
 643 0018 1846     		mov	r0, r3
 644 001a 0837     		adds	r7, r7, #8
 645              	.LCFI68:
 646              		.cfi_def_cfa_offset 8
 647 001c BD46     		mov	sp, r7
 648              	.LCFI69:
 649              		.cfi_def_cfa_register 13
 650              		@ sp needed
 651 001e 80BD     		pop	{r7, pc}
 652              		.cfi_endproc
 653              	.LFE294:
 655              		.section	.text._ZN8touchgfx11ApplicationD2Ev,"axG",%progbits,_ZN8touchgfx11ApplicationD5Ev,comdat
 656              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 18


 657              		.weak	_ZN8touchgfx11ApplicationD2Ev
 658              		.syntax unified
 659              		.thumb
 660              		.thumb_func
 661              		.fpu fpv4-sp-d16
 663              	_ZN8touchgfx11ApplicationD2Ev:
 664              	.LFB412:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 665              		.loc 2 39 7
 666              		.cfi_startproc
 667              		@ args = 0, pretend = 0, frame = 8
 668              		@ frame_needed = 1, uses_anonymous_args = 0
 669 0000 80B5     		push	{r7, lr}
 670              	.LCFI70:
 671              		.cfi_def_cfa_offset 8
 672              		.cfi_offset 7, -8
 673              		.cfi_offset 14, -4
 674 0002 82B0     		sub	sp, sp, #8
 675              	.LCFI71:
 676              		.cfi_def_cfa_offset 16
 677 0004 00AF     		add	r7, sp, #0
 678              	.LCFI72:
 679              		.cfi_def_cfa_register 7
 680 0006 7860     		str	r0, [r7, #4]
 681              	.LBB4:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 682              		.loc 2 39 7
 683 0008 054A     		ldr	r2, .L23
 684 000a 7B68     		ldr	r3, [r7, #4]
 685 000c 1A60     		str	r2, [r3]
 686 000e 7B68     		ldr	r3, [r7, #4]
 687 0010 1846     		mov	r0, r3
 688 0012 FFF7FEFF 		bl	_ZN8touchgfx15UIEventListenerD2Ev
 689              	.LBE4:
 690 0016 7B68     		ldr	r3, [r7, #4]
 691 0018 1846     		mov	r0, r3
 692 001a 0837     		adds	r7, r7, #8
 693              	.LCFI73:
 694              		.cfi_def_cfa_offset 8
 695 001c BD46     		mov	sp, r7
 696              	.LCFI74:
 697              		.cfi_def_cfa_register 13
 698              		@ sp needed
 699 001e 80BD     		pop	{r7, pc}
 700              	.L24:
 701              		.align	2
 702              	.L23:
 703 0020 08000000 		.word	_ZTVN8touchgfx11ApplicationE+8
 704              		.cfi_endproc
 705              	.LFE412:
 707              		.weak	_ZN8touchgfx11ApplicationD1Ev
 708              		.thumb_set _ZN8touchgfx11ApplicationD1Ev,_ZN8touchgfx11ApplicationD2Ev
 709              		.section	.text._ZN8touchgfx11ApplicationD0Ev,"axG",%progbits,_ZN8touchgfx11ApplicationD5Ev,comdat
 710              		.align	1
 711              		.weak	_ZN8touchgfx11ApplicationD0Ev
 712              		.syntax unified
 713              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 19


 714              		.thumb_func
 715              		.fpu fpv4-sp-d16
 717              	_ZN8touchgfx11ApplicationD0Ev:
 718              	.LFB414:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 719              		.loc 2 39 7
 720              		.cfi_startproc
 721              		@ args = 0, pretend = 0, frame = 8
 722              		@ frame_needed = 1, uses_anonymous_args = 0
 723 0000 80B5     		push	{r7, lr}
 724              	.LCFI75:
 725              		.cfi_def_cfa_offset 8
 726              		.cfi_offset 7, -8
 727              		.cfi_offset 14, -4
 728 0002 82B0     		sub	sp, sp, #8
 729              	.LCFI76:
 730              		.cfi_def_cfa_offset 16
 731 0004 00AF     		add	r7, sp, #0
 732              	.LCFI77:
 733              		.cfi_def_cfa_register 7
 734 0006 7860     		str	r0, [r7, #4]
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 735              		.loc 2 39 7
 736 0008 7868     		ldr	r0, [r7, #4]
 737 000a FFF7FEFF 		bl	_ZN8touchgfx11ApplicationD1Ev
 738 000e 4FF49C71 		mov	r1, #312
 739 0012 7868     		ldr	r0, [r7, #4]
 740 0014 FFF7FEFF 		bl	_ZdlPvj
 741 0018 7B68     		ldr	r3, [r7, #4]
 742 001a 1846     		mov	r0, r3
 743 001c 0837     		adds	r7, r7, #8
 744              	.LCFI78:
 745              		.cfi_def_cfa_offset 8
 746 001e BD46     		mov	sp, r7
 747              	.LCFI79:
 748              		.cfi_def_cfa_register 13
 749              		@ sp needed
 750 0020 80BD     		pop	{r7, pc}
 751              		.cfi_endproc
 752              	.LFE414:
 754              		.section	.text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv,"axG",%progbits,_ZN8t
 755              		.align	1
 756              		.weak	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 757              		.syntax unified
 758              		.thumb
 759              		.thumb_func
 760              		.fpu fpv4-sp-d16
 762              	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:
 763              	.LFB417:
 764              		.file 4 "Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp"
   1:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 20


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
 765              		.loc 4 59 18
 766              		.cfi_startproc
 767              		@ args = 0, pretend = 0, frame = 8
 768              		@ frame_needed = 1, uses_anonymous_args = 0
 769 0000 80B5     		push	{r7, lr}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 21


 770              	.LCFI80:
 771              		.cfi_def_cfa_offset 8
 772              		.cfi_offset 7, -8
 773              		.cfi_offset 14, -4
 774 0002 82B0     		sub	sp, sp, #8
 775              	.LCFI81:
 776              		.cfi_def_cfa_offset 16
 777 0004 00AF     		add	r7, sp, #0
 778              	.LCFI82:
 779              		.cfi_def_cfa_register 7
 780 0006 7860     		str	r0, [r7, #4]
  60:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  61:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         evaluatePendingScreenTransition();
 781              		.loc 4 61 40
 782 0008 7868     		ldr	r0, [r7, #4]
 783 000a FFF7FEFF 		bl	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
  62:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 784              		.loc 4 62 5
 785 000e 00BF     		nop
 786 0010 0837     		adds	r7, r7, #8
 787              	.LCFI83:
 788              		.cfi_def_cfa_offset 8
 789 0012 BD46     		mov	sp, r7
 790              	.LCFI84:
 791              		.cfi_def_cfa_register 13
 792              		@ sp needed
 793 0014 80BD     		pop	{r7, pc}
 794              		.cfi_endproc
 795              	.LFE417:
 797              		.section	.text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv,"axG",%progbits,_ZN
 798              		.align	1
 799              		.weak	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
 800              		.syntax unified
 801              		.thumb
 802              		.thumb_func
 803              		.fpu fpv4-sp-d16
 805              	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:
 806              	.LFB418:
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
 807              		.loc 4 73 10
 808              		.cfi_startproc
 809              		@ args = 0, pretend = 0, frame = 8
 810              		@ frame_needed = 1, uses_anonymous_args = 0
 811 0000 80B5     		push	{r7, lr}
 812              	.LCFI85:
 813              		.cfi_def_cfa_offset 8
 814              		.cfi_offset 7, -8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 22


 815              		.cfi_offset 14, -4
 816 0002 82B0     		sub	sp, sp, #8
 817              	.LCFI86:
 818              		.cfi_def_cfa_offset 16
 819 0004 00AF     		add	r7, sp, #0
 820              	.LCFI87:
 821              		.cfi_def_cfa_register 7
 822 0006 7860     		str	r0, [r7, #4]
  74:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  75:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         if (pendingScreenTransitionCallback && pendingScreenTransitionCallback->isValid())
 823              		.loc 4 75 13
 824 0008 7B68     		ldr	r3, [r7, #4]
 825 000a D3F83C31 		ldr	r3, [r3, #316]
 826              		.loc 4 75 45
 827 000e 002B     		cmp	r3, #0
 828 0010 0FD0     		beq	.L29
 829              		.loc 4 75 48 discriminator 1
 830 0012 7B68     		ldr	r3, [r7, #4]
 831 0014 D3F83C21 		ldr	r2, [r3, #316]
 832 0018 7B68     		ldr	r3, [r7, #4]
 833 001a D3F83C31 		ldr	r3, [r3, #316]
 834              		.loc 4 75 89 discriminator 1
 835 001e 1B68     		ldr	r3, [r3]
 836 0020 0C33     		adds	r3, r3, #12
 837 0022 1B68     		ldr	r3, [r3]
 838              		.loc 4 75 88 discriminator 1
 839 0024 1046     		mov	r0, r2
 840 0026 9847     		blx	r3
 841              	.LVL0:
 842 0028 0346     		mov	r3, r0
 843              		.loc 4 75 45 discriminator 1
 844 002a 002B     		cmp	r3, #0
 845 002c 01D0     		beq	.L29
 846              		.loc 4 75 45 is_stmt 0 discriminator 3
 847 002e 0123     		movs	r3, #1
 848 0030 00E0     		b	.L30
 849              	.L29:
 850              		.loc 4 75 45 discriminator 4
 851 0032 0023     		movs	r3, #0
 852              	.L30:
 853              		.loc 4 75 9 is_stmt 1 discriminator 6
 854 0034 002B     		cmp	r3, #0
 855 0036 0ED0     		beq	.L32
  76:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         {
  77:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****             pendingScreenTransitionCallback->execute();
 856              		.loc 4 77 13
 857 0038 7B68     		ldr	r3, [r7, #4]
 858 003a D3F83C21 		ldr	r2, [r3, #316]
 859 003e 7B68     		ldr	r3, [r7, #4]
 860 0040 D3F83C31 		ldr	r3, [r3, #316]
 861              		.loc 4 77 54
 862 0044 1B68     		ldr	r3, [r3]
 863 0046 0833     		adds	r3, r3, #8
 864 0048 1B68     		ldr	r3, [r3]
 865              		.loc 4 77 53
 866 004a 1046     		mov	r0, r2
 867 004c 9847     		blx	r3
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 23


 868              	.LVL1:
  78:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****             pendingScreenTransitionCallback = 0;
 869              		.loc 4 78 45
 870 004e 7B68     		ldr	r3, [r7, #4]
 871 0050 0022     		movs	r2, #0
 872 0052 C3F83C21 		str	r2, [r3, #316]
 873              	.L32:
  79:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         }
  80:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 874              		.loc 4 80 5
 875 0056 00BF     		nop
 876 0058 0837     		adds	r7, r7, #8
 877              	.LCFI88:
 878              		.cfi_def_cfa_offset 8
 879 005a BD46     		mov	sp, r7
 880              	.LCFI89:
 881              		.cfi_def_cfa_register 13
 882              		@ sp needed
 883 005c 80BD     		pop	{r7, pc}
 884              		.cfi_endproc
 885              	.LFE418:
 887              		.section	.text._ZN8touchgfx14MVPApplicationD2Ev,"axG",%progbits,_ZN8touchgfx14MVPApplicationD5Ev,c
 888              		.align	1
 889              		.weak	_ZN8touchgfx14MVPApplicationD2Ev
 890              		.syntax unified
 891              		.thumb
 892              		.thumb_func
 893              		.fpu fpv4-sp-d16
 895              	_ZN8touchgfx14MVPApplicationD2Ev:
 896              	.LFB425:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 897              		.loc 4 43 7
 898              		.cfi_startproc
 899              		@ args = 0, pretend = 0, frame = 8
 900              		@ frame_needed = 1, uses_anonymous_args = 0
 901 0000 80B5     		push	{r7, lr}
 902              	.LCFI90:
 903              		.cfi_def_cfa_offset 8
 904              		.cfi_offset 7, -8
 905              		.cfi_offset 14, -4
 906 0002 82B0     		sub	sp, sp, #8
 907              	.LCFI91:
 908              		.cfi_def_cfa_offset 16
 909 0004 00AF     		add	r7, sp, #0
 910              	.LCFI92:
 911              		.cfi_def_cfa_register 7
 912 0006 7860     		str	r0, [r7, #4]
 913              	.LBB5:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 914              		.loc 4 43 7
 915 0008 054A     		ldr	r2, .L35
 916 000a 7B68     		ldr	r3, [r7, #4]
 917 000c 1A60     		str	r2, [r3]
 918 000e 7B68     		ldr	r3, [r7, #4]
 919 0010 1846     		mov	r0, r3
 920 0012 FFF7FEFF 		bl	_ZN8touchgfx11ApplicationD2Ev
 921              	.LBE5:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 24


 922 0016 7B68     		ldr	r3, [r7, #4]
 923 0018 1846     		mov	r0, r3
 924 001a 0837     		adds	r7, r7, #8
 925              	.LCFI93:
 926              		.cfi_def_cfa_offset 8
 927 001c BD46     		mov	sp, r7
 928              	.LCFI94:
 929              		.cfi_def_cfa_register 13
 930              		@ sp needed
 931 001e 80BD     		pop	{r7, pc}
 932              	.L36:
 933              		.align	2
 934              	.L35:
 935 0020 08000000 		.word	_ZTVN8touchgfx14MVPApplicationE+8
 936              		.cfi_endproc
 937              	.LFE425:
 939              		.weak	_ZN8touchgfx14MVPApplicationD1Ev
 940              		.thumb_set _ZN8touchgfx14MVPApplicationD1Ev,_ZN8touchgfx14MVPApplicationD2Ev
 941              		.section	.text._ZN8touchgfx14MVPApplicationD0Ev,"axG",%progbits,_ZN8touchgfx14MVPApplicationD5Ev,c
 942              		.align	1
 943              		.weak	_ZN8touchgfx14MVPApplicationD0Ev
 944              		.syntax unified
 945              		.thumb
 946              		.thumb_func
 947              		.fpu fpv4-sp-d16
 949              	_ZN8touchgfx14MVPApplicationD0Ev:
 950              	.LFB427:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 951              		.loc 4 43 7
 952              		.cfi_startproc
 953              		@ args = 0, pretend = 0, frame = 8
 954              		@ frame_needed = 1, uses_anonymous_args = 0
 955 0000 80B5     		push	{r7, lr}
 956              	.LCFI95:
 957              		.cfi_def_cfa_offset 8
 958              		.cfi_offset 7, -8
 959              		.cfi_offset 14, -4
 960 0002 82B0     		sub	sp, sp, #8
 961              	.LCFI96:
 962              		.cfi_def_cfa_offset 16
 963 0004 00AF     		add	r7, sp, #0
 964              	.LCFI97:
 965              		.cfi_def_cfa_register 7
 966 0006 7860     		str	r0, [r7, #4]
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 967              		.loc 4 43 7
 968 0008 7868     		ldr	r0, [r7, #4]
 969 000a FFF7FEFF 		bl	_ZN8touchgfx14MVPApplicationD1Ev
 970 000e 4FF4A071 		mov	r1, #320
 971 0012 7868     		ldr	r0, [r7, #4]
 972 0014 FFF7FEFF 		bl	_ZdlPvj
 973 0018 7B68     		ldr	r3, [r7, #4]
 974 001a 1846     		mov	r0, r3
 975 001c 0837     		adds	r7, r7, #8
 976              	.LCFI98:
 977              		.cfi_def_cfa_offset 8
 978 001e BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 25


 979              	.LCFI99:
 980              		.cfi_def_cfa_register 13
 981              		@ sp needed
 982 0020 80BD     		pop	{r7, pc}
 983              		.cfi_endproc
 984              	.LFE427:
 986              		.section	.text._ZN23FrontendApplicationBaseD2Ev,"axG",%progbits,_ZN23FrontendApplicationBaseD5Ev,c
 987              		.align	1
 988              		.weak	_ZN23FrontendApplicationBaseD2Ev
 989              		.syntax unified
 990              		.thumb
 991              		.thumb_func
 992              		.fpu fpv4-sp-d16
 994              	_ZN23FrontendApplicationBaseD2Ev:
 995              	.LFB428:
 996              		.file 5 "Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp"
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
 997              		.loc 5 16 13
 998              		.cfi_startproc
 999              		@ args = 0, pretend = 0, frame = 8
 1000              		@ frame_needed = 1, uses_anonymous_args = 0
 1001 0000 80B5     		push	{r7, lr}
 1002              	.LCFI100:
 1003              		.cfi_def_cfa_offset 8
 1004              		.cfi_offset 7, -8
 1005              		.cfi_offset 14, -4
 1006 0002 82B0     		sub	sp, sp, #8
 1007              	.LCFI101:
 1008              		.cfi_def_cfa_offset 16
 1009 0004 00AF     		add	r7, sp, #0
 1010              	.LCFI102:
 1011              		.cfi_def_cfa_register 7
 1012 0006 7860     		str	r0, [r7, #4]
 1013              	.LBB6:
 1014              		.loc 5 16 40
 1015 0008 084A     		ldr	r2, .L41
 1016 000a 7B68     		ldr	r3, [r7, #4]
 1017 000c 1A60     		str	r2, [r3]
 1018 000e 7B68     		ldr	r3, [r7, #4]
 1019 0010 03F5A073 		add	r3, r3, #320
 1020 0014 1846     		mov	r0, r3
 1021 0016 FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 26


 1022 001a 7B68     		ldr	r3, [r7, #4]
 1023 001c 1846     		mov	r0, r3
 1024 001e FFF7FEFF 		bl	_ZN8touchgfx14MVPApplicationD2Ev
 1025              	.LBE6:
 1026              		.loc 5 16 42
 1027 0022 7B68     		ldr	r3, [r7, #4]
 1028 0024 1846     		mov	r0, r3
 1029 0026 0837     		adds	r7, r7, #8
 1030              	.LCFI103:
 1031              		.cfi_def_cfa_offset 8
 1032 0028 BD46     		mov	sp, r7
 1033              	.LCFI104:
 1034              		.cfi_def_cfa_register 13
 1035              		@ sp needed
 1036 002a 80BD     		pop	{r7, pc}
 1037              	.L42:
 1038              		.align	2
 1039              	.L41:
 1040 002c 08000000 		.word	_ZTV23FrontendApplicationBase+8
 1041              		.cfi_endproc
 1042              	.LFE428:
 1044              		.weak	_ZN23FrontendApplicationBaseD1Ev
 1045              		.thumb_set _ZN23FrontendApplicationBaseD1Ev,_ZN23FrontendApplicationBaseD2Ev
 1046              		.section	.text._ZN23FrontendApplicationBaseD0Ev,"axG",%progbits,_ZN23FrontendApplicationBaseD5Ev,c
 1047              		.align	1
 1048              		.weak	_ZN23FrontendApplicationBaseD0Ev
 1049              		.syntax unified
 1050              		.thumb
 1051              		.thumb_func
 1052              		.fpu fpv4-sp-d16
 1054              	_ZN23FrontendApplicationBaseD0Ev:
 1055              	.LFB430:
 1056              		.loc 5 16 13
 1057              		.cfi_startproc
 1058              		@ args = 0, pretend = 0, frame = 8
 1059              		@ frame_needed = 1, uses_anonymous_args = 0
 1060 0000 80B5     		push	{r7, lr}
 1061              	.LCFI105:
 1062              		.cfi_def_cfa_offset 8
 1063              		.cfi_offset 7, -8
 1064              		.cfi_offset 14, -4
 1065 0002 82B0     		sub	sp, sp, #8
 1066              	.LCFI106:
 1067              		.cfi_def_cfa_offset 16
 1068 0004 00AF     		add	r7, sp, #0
 1069              	.LCFI107:
 1070              		.cfi_def_cfa_register 7
 1071 0006 7860     		str	r0, [r7, #4]
 1072              		.loc 5 16 42
 1073 0008 7868     		ldr	r0, [r7, #4]
 1074 000a FFF7FEFF 		bl	_ZN23FrontendApplicationBaseD1Ev
 1075 000e 4FF4AC71 		mov	r1, #344
 1076 0012 7868     		ldr	r0, [r7, #4]
 1077 0014 FFF7FEFF 		bl	_ZdlPvj
 1078 0018 7B68     		ldr	r3, [r7, #4]
 1079 001a 1846     		mov	r0, r3
 1080 001c 0837     		adds	r7, r7, #8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 27


 1081              	.LCFI108:
 1082              		.cfi_def_cfa_offset 8
 1083 001e BD46     		mov	sp, r7
 1084              	.LCFI109:
 1085              		.cfi_def_cfa_register 13
 1086              		@ sp needed
 1087 0020 80BD     		pop	{r7, pc}
 1088              		.cfi_endproc
 1089              	.LFE430:
 1091              		.section	.text._ZN19FrontendApplicationD2Ev,"axG",%progbits,_ZN19FrontendApplicationD5Ev,comdat
 1092              		.align	1
 1093              		.weak	_ZN19FrontendApplicationD2Ev
 1094              		.syntax unified
 1095              		.thumb
 1096              		.thumb_func
 1097              		.fpu fpv4-sp-d16
 1099              	_ZN19FrontendApplicationD2Ev:
 1100              	.LFB432:
 1101              		.file 6 "Src/gui/include/gui/common/FrontendApplication.hpp"
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
 1102              		.loc 6 14 13
 1103              		.cfi_startproc
 1104              		@ args = 0, pretend = 0, frame = 8
 1105              		@ frame_needed = 1, uses_anonymous_args = 0
 1106 0000 80B5     		push	{r7, lr}
 1107              	.LCFI110:
 1108              		.cfi_def_cfa_offset 8
 1109              		.cfi_offset 7, -8
 1110              		.cfi_offset 14, -4
 1111 0002 82B0     		sub	sp, sp, #8
 1112              	.LCFI111:
 1113              		.cfi_def_cfa_offset 16
 1114 0004 00AF     		add	r7, sp, #0
 1115              	.LCFI112:
 1116              		.cfi_def_cfa_register 7
 1117 0006 7860     		str	r0, [r7, #4]
 1118              	.LBB7:
 1119              		.loc 6 14 36
 1120 0008 054A     		ldr	r2, .L47
 1121 000a 7B68     		ldr	r3, [r7, #4]
 1122 000c 1A60     		str	r2, [r3]
 1123 000e 7B68     		ldr	r3, [r7, #4]
 1124 0010 1846     		mov	r0, r3
 1125 0012 FFF7FEFF 		bl	_ZN23FrontendApplicationBaseD2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 28


 1126              	.LBE7:
 1127              		.loc 6 14 38
 1128 0016 7B68     		ldr	r3, [r7, #4]
 1129 0018 1846     		mov	r0, r3
 1130 001a 0837     		adds	r7, r7, #8
 1131              	.LCFI113:
 1132              		.cfi_def_cfa_offset 8
 1133 001c BD46     		mov	sp, r7
 1134              	.LCFI114:
 1135              		.cfi_def_cfa_register 13
 1136              		@ sp needed
 1137 001e 80BD     		pop	{r7, pc}
 1138              	.L48:
 1139              		.align	2
 1140              	.L47:
 1141 0020 08000000 		.word	_ZTV19FrontendApplication+8
 1142              		.cfi_endproc
 1143              	.LFE432:
 1145              		.weak	_ZN19FrontendApplicationD1Ev
 1146              		.thumb_set _ZN19FrontendApplicationD1Ev,_ZN19FrontendApplicationD2Ev
 1147              		.section	.text._ZN19FrontendApplicationD0Ev,"axG",%progbits,_ZN19FrontendApplicationD5Ev,comdat
 1148              		.align	1
 1149              		.weak	_ZN19FrontendApplicationD0Ev
 1150              		.syntax unified
 1151              		.thumb
 1152              		.thumb_func
 1153              		.fpu fpv4-sp-d16
 1155              	_ZN19FrontendApplicationD0Ev:
 1156              	.LFB434:
 1157              		.loc 6 14 13
 1158              		.cfi_startproc
 1159              		@ args = 0, pretend = 0, frame = 8
 1160              		@ frame_needed = 1, uses_anonymous_args = 0
 1161 0000 80B5     		push	{r7, lr}
 1162              	.LCFI115:
 1163              		.cfi_def_cfa_offset 8
 1164              		.cfi_offset 7, -8
 1165              		.cfi_offset 14, -4
 1166 0002 82B0     		sub	sp, sp, #8
 1167              	.LCFI116:
 1168              		.cfi_def_cfa_offset 16
 1169 0004 00AF     		add	r7, sp, #0
 1170              	.LCFI117:
 1171              		.cfi_def_cfa_register 7
 1172 0006 7860     		str	r0, [r7, #4]
 1173              		.loc 6 14 38
 1174 0008 7868     		ldr	r0, [r7, #4]
 1175 000a FFF7FEFF 		bl	_ZN19FrontendApplicationD1Ev
 1176 000e 4FF4AC71 		mov	r1, #344
 1177 0012 7868     		ldr	r0, [r7, #4]
 1178 0014 FFF7FEFF 		bl	_ZdlPvj
 1179 0018 7B68     		ldr	r3, [r7, #4]
 1180 001a 1846     		mov	r0, r3
 1181 001c 0837     		adds	r7, r7, #8
 1182              	.LCFI118:
 1183              		.cfi_def_cfa_offset 8
 1184 001e BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 29


 1185              	.LCFI119:
 1186              		.cfi_def_cfa_register 13
 1187              		@ sp needed
 1188 0020 80BD     		pop	{r7, pc}
 1189              		.cfi_endproc
 1190              	.LFE434:
 1192              		.section	.text._ZN19FrontendApplication15handleTickEventEv,"axG",%progbits,_ZN19FrontendApplicatio
 1193              		.align	1
 1194              		.weak	_ZN19FrontendApplication15handleTickEventEv
 1195              		.syntax unified
 1196              		.thumb
 1197              		.thumb_func
 1198              		.fpu fpv4-sp-d16
 1200              	_ZN19FrontendApplication15handleTickEventEv:
 1201              	.LFB435:
  15:Src/gui/include/gui/common/FrontendApplication.hpp **** 
  16:Src/gui/include/gui/common/FrontendApplication.hpp ****     virtual void handleTickEvent()
 1202              		.loc 6 16 18
 1203              		.cfi_startproc
 1204              		@ args = 0, pretend = 0, frame = 8
 1205              		@ frame_needed = 1, uses_anonymous_args = 0
 1206 0000 80B5     		push	{r7, lr}
 1207              	.LCFI120:
 1208              		.cfi_def_cfa_offset 8
 1209              		.cfi_offset 7, -8
 1210              		.cfi_offset 14, -4
 1211 0002 82B0     		sub	sp, sp, #8
 1212              	.LCFI121:
 1213              		.cfi_def_cfa_offset 16
 1214 0004 00AF     		add	r7, sp, #0
 1215              	.LCFI122:
 1216              		.cfi_def_cfa_register 7
 1217 0006 7860     		str	r0, [r7, #4]
  17:Src/gui/include/gui/common/FrontendApplication.hpp ****     {
  18:Src/gui/include/gui/common/FrontendApplication.hpp ****         model.tick();
 1218              		.loc 6 18 9
 1219 0008 7B68     		ldr	r3, [r7, #4]
 1220 000a D3F85431 		ldr	r3, [r3, #340]
 1221              		.loc 6 18 19
 1222 000e 1846     		mov	r0, r3
 1223 0010 FFF7FEFF 		bl	_ZN5Model4tickEv
  19:Src/gui/include/gui/common/FrontendApplication.hpp ****         FrontendApplicationBase::handleTickEvent();
 1224              		.loc 6 19 49
 1225 0014 7B68     		ldr	r3, [r7, #4]
 1226 0016 1846     		mov	r0, r3
 1227 0018 FFF7FEFF 		bl	_ZN8touchgfx11Application15handleTickEventEv
  20:Src/gui/include/gui/common/FrontendApplication.hpp ****     }
 1228              		.loc 6 20 5
 1229 001c 00BF     		nop
 1230 001e 0837     		adds	r7, r7, #8
 1231              	.LCFI123:
 1232              		.cfi_def_cfa_offset 8
 1233 0020 BD46     		mov	sp, r7
 1234              	.LCFI124:
 1235              		.cfi_def_cfa_register 13
 1236              		@ sp needed
 1237 0022 80BD     		pop	{r7, pc}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 30


 1238              		.cfi_endproc
 1239              	.LFE435:
 1241              		.section	.text._ZN19FrontendApplicationC2ER5ModelR12FrontendHeap,"ax",%progbits
 1242              		.align	1
 1243              		.global	_ZN19FrontendApplicationC2ER5ModelR12FrontendHeap
 1244              		.syntax unified
 1245              		.thumb
 1246              		.thumb_func
 1247              		.fpu fpv4-sp-d16
 1249              	_ZN19FrontendApplicationC2ER5ModelR12FrontendHeap:
 1250              	.LFB437:
 1251              		.file 7 "Src/gui/src/common/FrontendApplication.cpp"
   1:Src/gui/src/common/FrontendApplication.cpp **** #include <gui/common/FrontendApplication.hpp>
   2:Src/gui/src/common/FrontendApplication.cpp **** 
   3:Src/gui/src/common/FrontendApplication.cpp **** FrontendApplication::FrontendApplication(Model& m, FrontendHeap& heap)
 1252              		.loc 7 3 1
 1253              		.cfi_startproc
 1254              		@ args = 0, pretend = 0, frame = 16
 1255              		@ frame_needed = 1, uses_anonymous_args = 0
 1256 0000 80B5     		push	{r7, lr}
 1257              	.LCFI125:
 1258              		.cfi_def_cfa_offset 8
 1259              		.cfi_offset 7, -8
 1260              		.cfi_offset 14, -4
 1261 0002 84B0     		sub	sp, sp, #16
 1262              	.LCFI126:
 1263              		.cfi_def_cfa_offset 24
 1264 0004 00AF     		add	r7, sp, #0
 1265              	.LCFI127:
 1266              		.cfi_def_cfa_register 7
 1267 0006 F860     		str	r0, [r7, #12]
 1268 0008 B960     		str	r1, [r7, #8]
 1269 000a 7A60     		str	r2, [r7, #4]
 1270              	.LBB8:
   4:Src/gui/src/common/FrontendApplication.cpp ****     : FrontendApplicationBase(m, heap)
 1271              		.loc 7 4 38
 1272 000c FB68     		ldr	r3, [r7, #12]
 1273 000e 7A68     		ldr	r2, [r7, #4]
 1274 0010 B968     		ldr	r1, [r7, #8]
 1275 0012 1846     		mov	r0, r3
 1276 0014 FFF7FEFF 		bl	_ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap
 1277 0018 034A     		ldr	r2, .L54
 1278 001a FB68     		ldr	r3, [r7, #12]
 1279 001c 1A60     		str	r2, [r3]
 1280              	.LBE8:
   5:Src/gui/src/common/FrontendApplication.cpp **** {
   6:Src/gui/src/common/FrontendApplication.cpp **** 
   7:Src/gui/src/common/FrontendApplication.cpp **** }
 1281              		.loc 7 7 1
 1282 001e FB68     		ldr	r3, [r7, #12]
 1283 0020 1846     		mov	r0, r3
 1284 0022 1037     		adds	r7, r7, #16
 1285              	.LCFI128:
 1286              		.cfi_def_cfa_offset 8
 1287 0024 BD46     		mov	sp, r7
 1288              	.LCFI129:
 1289              		.cfi_def_cfa_register 13
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 31


 1290              		@ sp needed
 1291 0026 80BD     		pop	{r7, pc}
 1292              	.L55:
 1293              		.align	2
 1294              	.L54:
 1295 0028 08000000 		.word	_ZTV19FrontendApplication+8
 1296              		.cfi_endproc
 1297              	.LFE437:
 1299              		.global	_ZN19FrontendApplicationC1ER5ModelR12FrontendHeap
 1300              		.thumb_set _ZN19FrontendApplicationC1ER5ModelR12FrontendHeap,_ZN19FrontendApplicationC2ER5ModelR12
 1301              		.weak	_ZTV19FrontendApplication
 1302              		.section	.rodata._ZTV19FrontendApplication,"aG",%progbits,_ZTV19FrontendApplication,comdat
 1303              		.align	2
 1306              	_ZTV19FrontendApplication:
 1307 0000 00000000 		.word	0
 1308 0004 00000000 		.word	0
 1309 0008 00000000 		.word	_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
 1310 000c 00000000 		.word	_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
 1311 0010 00000000 		.word	_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
 1312 0014 00000000 		.word	_ZN8touchgfx11Application14handleKeyEventEh
 1313 0018 00000000 		.word	_ZN19FrontendApplication15handleTickEventEv
 1314 001c 00000000 		.word	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 1315 0020 00000000 		.word	_ZN19FrontendApplicationD1Ev
 1316 0024 00000000 		.word	_ZN19FrontendApplicationD0Ev
 1317 0028 00000000 		.word	_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
 1318 002c 00000000 		.word	_ZN8touchgfx11Application15appSwitchScreenEh
 1319 0030 00000000 		.word	_ZN8touchgfx11Application13requestRedrawEv
 1320 0034 00000000 		.word	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 1321 0038 00000000 		.word	_ZN8touchgfx11Application4drawEv
 1322 003c 00000000 		.word	_ZN8touchgfx11Application4drawERNS_4RectE
 1323 0040 00000000 		.word	_ZN8touchgfx11Application19cacheDrawOperationsEb
 1324              		.weak	_ZTV23FrontendApplicationBase
 1325              		.section	.rodata._ZTV23FrontendApplicationBase,"aG",%progbits,_ZTV23FrontendApplicationBase,comdat
 1326              		.align	2
 1329              	_ZTV23FrontendApplicationBase:
 1330 0000 00000000 		.word	0
 1331 0004 00000000 		.word	0
 1332 0008 00000000 		.word	_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
 1333 000c 00000000 		.word	_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
 1334 0010 00000000 		.word	_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
 1335 0014 00000000 		.word	_ZN8touchgfx11Application14handleKeyEventEh
 1336 0018 00000000 		.word	_ZN8touchgfx11Application15handleTickEventEv
 1337 001c 00000000 		.word	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 1338 0020 00000000 		.word	_ZN23FrontendApplicationBaseD1Ev
 1339 0024 00000000 		.word	_ZN23FrontendApplicationBaseD0Ev
 1340 0028 00000000 		.word	_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
 1341 002c 00000000 		.word	_ZN8touchgfx11Application15appSwitchScreenEh
 1342 0030 00000000 		.word	_ZN8touchgfx11Application13requestRedrawEv
 1343 0034 00000000 		.word	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 1344 0038 00000000 		.word	_ZN8touchgfx11Application4drawEv
 1345 003c 00000000 		.word	_ZN8touchgfx11Application4drawERNS_4RectE
 1346 0040 00000000 		.word	_ZN8touchgfx11Application19cacheDrawOperationsEb
 1347              		.weak	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE
 1348              		.section	.rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE,"aG",%progbits,_ZTVN8touch
 1349              		.align	2
 1352              	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:
 1353 0000 00000000 		.word	0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 32


 1354 0004 00000000 		.word	0
 1355 0008 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 1356 000c 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
 1357 0010 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
 1358 0014 00000000 		.word	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
 1359              		.weak	_ZTVN8touchgfx14MVPApplicationE
 1360              		.section	.rodata._ZTVN8touchgfx14MVPApplicationE,"aG",%progbits,_ZTVN8touchgfx14MVPApplicationE,co
 1361              		.align	2
 1364              	_ZTVN8touchgfx14MVPApplicationE:
 1365 0000 00000000 		.word	0
 1366 0004 00000000 		.word	0
 1367 0008 00000000 		.word	_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
 1368 000c 00000000 		.word	_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
 1369 0010 00000000 		.word	_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
 1370 0014 00000000 		.word	_ZN8touchgfx11Application14handleKeyEventEh
 1371 0018 00000000 		.word	_ZN8touchgfx11Application15handleTickEventEv
 1372 001c 00000000 		.word	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 1373 0020 00000000 		.word	_ZN8touchgfx14MVPApplicationD1Ev
 1374 0024 00000000 		.word	_ZN8touchgfx14MVPApplicationD0Ev
 1375 0028 00000000 		.word	_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
 1376 002c 00000000 		.word	_ZN8touchgfx11Application15appSwitchScreenEh
 1377 0030 00000000 		.word	_ZN8touchgfx11Application13requestRedrawEv
 1378 0034 00000000 		.word	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 1379 0038 00000000 		.word	_ZN8touchgfx11Application4drawEv
 1380 003c 00000000 		.word	_ZN8touchgfx11Application4drawERNS_4RectE
 1381 0040 00000000 		.word	_ZN8touchgfx11Application19cacheDrawOperationsEb
 1382              		.weak	_ZTVN8touchgfx15GenericCallbackIvvvEE
 1383              		.section	.rodata._ZTVN8touchgfx15GenericCallbackIvvvEE,"aG",%progbits,_ZTVN8touchgfx15GenericCallb
 1384              		.align	2
 1387              	_ZTVN8touchgfx15GenericCallbackIvvvEE:
 1388 0000 00000000 		.word	0
 1389 0004 00000000 		.word	0
 1390 0008 00000000 		.word	0
 1391 000c 00000000 		.word	0
 1392 0010 00000000 		.word	__cxa_pure_virtual
 1393 0014 00000000 		.word	__cxa_pure_virtual
 1394              		.weak	_ZTVN8touchgfx15UIEventListenerE
 1395              		.section	.rodata._ZTVN8touchgfx15UIEventListenerE,"aG",%progbits,_ZTVN8touchgfx15UIEventListenerE,
 1396              		.align	2
 1399              	_ZTVN8touchgfx15UIEventListenerE:
 1400 0000 00000000 		.word	0
 1401 0004 00000000 		.word	0
 1402 0008 00000000 		.word	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
 1403 000c 00000000 		.word	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
 1404 0010 00000000 		.word	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
 1405 0014 00000000 		.word	_ZN8touchgfx15UIEventListener14handleKeyEventEh
 1406 0018 00000000 		.word	_ZN8touchgfx15UIEventListener15handleTickEventEv
 1407 001c 00000000 		.word	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
 1408 0020 00000000 		.word	_ZN8touchgfx15UIEventListenerD1Ev
 1409 0024 00000000 		.word	_ZN8touchgfx15UIEventListenerD0Ev
 1410              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev,"axG",%progbits,_ZN8touchgf
 1411              		.align	1
 1412              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev
 1413              		.syntax unified
 1414              		.thumb
 1415              		.thumb_func
 1416              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 33


 1418              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:
 1419              	.LFB456:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 34


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 35


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 36


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 37


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
 1420              		.loc 3 424 8
 1421              		.cfi_startproc
 1422              		@ args = 0, pretend = 0, frame = 8
 1423              		@ frame_needed = 1, uses_anonymous_args = 0
 1424 0000 80B5     		push	{r7, lr}
 1425              	.LCFI130:
 1426              		.cfi_def_cfa_offset 8
 1427              		.cfi_offset 7, -8
 1428              		.cfi_offset 14, -4
 1429 0002 82B0     		sub	sp, sp, #8
 1430              	.LCFI131:
 1431              		.cfi_def_cfa_offset 16
 1432 0004 00AF     		add	r7, sp, #0
 1433              	.LCFI132:
 1434              		.cfi_def_cfa_register 7
 1435 0006 7860     		str	r0, [r7, #4]
 1436              	.LBB9:
 1437              		.loc 3 424 8
 1438 0008 054A     		ldr	r2, .L58
 1439 000a 7B68     		ldr	r3, [r7, #4]
 1440 000c 1A60     		str	r2, [r3]
 1441 000e 7B68     		ldr	r3, [r7, #4]
 1442 0010 1846     		mov	r0, r3
 1443 0012 FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvED2Ev
 1444              	.LBE9:
 1445 0016 7B68     		ldr	r3, [r7, #4]
 1446 0018 1846     		mov	r0, r3
 1447 001a 0837     		adds	r7, r7, #8
 1448              	.LCFI133:
 1449              		.cfi_def_cfa_offset 8
 1450 001c BD46     		mov	sp, r7
 1451              	.LCFI134:
 1452              		.cfi_def_cfa_register 13
 1453              		@ sp needed
 1454 001e 80BD     		pop	{r7, pc}
 1455              	.L59:
 1456              		.align	2
 1457              	.L58:
 1458 0020 08000000 		.word	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE+8
 1459              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 38


 1460              	.LFE456:
 1462              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 1463              		.thumb_set _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev,_ZN8touchgfx8CallbackI23Fronten
 1464              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev,"axG",%progbits,_ZN8touchgf
 1465              		.align	1
 1466              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
 1467              		.syntax unified
 1468              		.thumb
 1469              		.thumb_func
 1470              		.fpu fpv4-sp-d16
 1472              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:
 1473              	.LFB458:
 1474              		.loc 3 424 8
 1475              		.cfi_startproc
 1476              		@ args = 0, pretend = 0, frame = 8
 1477              		@ frame_needed = 1, uses_anonymous_args = 0
 1478 0000 80B5     		push	{r7, lr}
 1479              	.LCFI135:
 1480              		.cfi_def_cfa_offset 8
 1481              		.cfi_offset 7, -8
 1482              		.cfi_offset 14, -4
 1483 0002 82B0     		sub	sp, sp, #8
 1484              	.LCFI136:
 1485              		.cfi_def_cfa_offset 16
 1486 0004 00AF     		add	r7, sp, #0
 1487              	.LCFI137:
 1488              		.cfi_def_cfa_register 7
 1489 0006 7860     		str	r0, [r7, #4]
 1490              		.loc 3 424 8
 1491 0008 7868     		ldr	r0, [r7, #4]
 1492 000a FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 1493 000e 1021     		movs	r1, #16
 1494 0010 7868     		ldr	r0, [r7, #4]
 1495 0012 FFF7FEFF 		bl	_ZdlPvj
 1496 0016 7B68     		ldr	r3, [r7, #4]
 1497 0018 1846     		mov	r0, r3
 1498 001a 0837     		adds	r7, r7, #8
 1499              	.LCFI138:
 1500              		.cfi_def_cfa_offset 8
 1501 001c BD46     		mov	sp, r7
 1502              	.LCFI139:
 1503              		.cfi_def_cfa_register 13
 1504              		@ sp needed
 1505 001e 80BD     		pop	{r7, pc}
 1506              		.cfi_endproc
 1507              	.LFE458:
 1509              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv,"axG",%progbits,_ZN8t
 1510              		.align	1
 1511              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
 1512              		.syntax unified
 1513              		.thumb
 1514              		.thumb_func
 1515              		.fpu fpv4-sp-d16
 1517              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:
 1518              	.LFB459:
 425:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 426:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Initializes a new instance of the Callback class. */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 39


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
 1519              		.loc 3 449 18
 1520              		.cfi_startproc
 1521              		@ args = 0, pretend = 0, frame = 8
 1522              		@ frame_needed = 1, uses_anonymous_args = 0
 1523 0000 80B5     		push	{r7, lr}
 1524              	.LCFI140:
 1525              		.cfi_def_cfa_offset 8
 1526              		.cfi_offset 7, -8
 1527              		.cfi_offset 14, -4
 1528 0002 82B0     		sub	sp, sp, #8
 1529              	.LCFI141:
 1530              		.cfi_def_cfa_offset 16
 1531 0004 00AF     		add	r7, sp, #0
 1532              	.LCFI142:
 1533              		.cfi_def_cfa_register 7
 1534 0006 7860     		str	r0, [r7, #4]
 450:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 451:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         (pobject->*pmemfun_0)();
 1535              		.loc 3 451 10
 1536 0008 7B68     		ldr	r3, [r7, #4]
 1537 000a 5B68     		ldr	r3, [r3, #4]
 1538              		.loc 3 451 30
 1539 000c 7A68     		ldr	r2, [r7, #4]
 1540 000e D268     		ldr	r2, [r2, #12]
 1541 0010 5210     		asrs	r2, r2, #1
 1542 0012 9918     		adds	r1, r3, r2
 1543 0014 7B68     		ldr	r3, [r7, #4]
 1544 0016 DB68     		ldr	r3, [r3, #12]
 1545 0018 03F00103 		and	r3, r3, #1
 1546 001c 002B     		cmp	r3, #0
 1547 001e 02D1     		bne	.L63
 1548              		.loc 3 451 30 is_stmt 0 discriminator 1
 1549 0020 7B68     		ldr	r3, [r7, #4]
 1550 0022 9B68     		ldr	r3, [r3, #8]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 40


 1551 0024 0AE0     		b	.L64
 1552              	.L63:
 1553              		.loc 3 451 10 is_stmt 1 discriminator 2
 1554 0026 7B68     		ldr	r3, [r7, #4]
 1555 0028 5B68     		ldr	r3, [r3, #4]
 1556              		.loc 3 451 30 discriminator 2
 1557 002a 7A68     		ldr	r2, [r7, #4]
 1558 002c D268     		ldr	r2, [r2, #12]
 1559 002e 5210     		asrs	r2, r2, #1
 1560 0030 1344     		add	r3, r3, r2
 1561 0032 1B68     		ldr	r3, [r3]
 1562 0034 7A68     		ldr	r2, [r7, #4]
 1563 0036 9268     		ldr	r2, [r2, #8]
 1564 0038 1344     		add	r3, r3, r2
 1565 003a 1B68     		ldr	r3, [r3]
 1566              	.L64:
 1567              		.loc 3 451 30 is_stmt 0 discriminator 4
 1568 003c 0846     		mov	r0, r1
 1569 003e 9847     		blx	r3
 1570              	.LVL2:
 452:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 1571              		.loc 3 452 5 is_stmt 1 discriminator 4
 1572 0040 00BF     		nop
 1573 0042 0837     		adds	r7, r7, #8
 1574              	.LCFI143:
 1575              		.cfi_def_cfa_offset 8
 1576 0044 BD46     		mov	sp, r7
 1577              	.LCFI144:
 1578              		.cfi_def_cfa_register 13
 1579              		@ sp needed
 1580 0046 80BD     		pop	{r7, pc}
 1581              		.cfi_endproc
 1582              	.LFE459:
 1584              		.section	.text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv,"axG",%progbits,_ZNK
 1585              		.align	1
 1586              		.weak	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
 1587              		.syntax unified
 1588              		.thumb
 1589              		.thumb_func
 1590              		.fpu fpv4-sp-d16
 1592              	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:
 1593              	.LFB460:
 453:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 454:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 455:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 456:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 457:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
 458:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 459:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const
 1594              		.loc 3 459 18
 1595              		.cfi_startproc
 1596              		@ args = 0, pretend = 0, frame = 8
 1597              		@ frame_needed = 1, uses_anonymous_args = 0
 1598              		@ link register save eliminated.
 1599 0000 80B4     		push	{r7}
 1600              	.LCFI145:
 1601              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 41


 1602              		.cfi_offset 7, -4
 1603 0002 83B0     		sub	sp, sp, #12
 1604              	.LCFI146:
 1605              		.cfi_def_cfa_offset 16
 1606 0004 00AF     		add	r7, sp, #0
 1607              	.LCFI147:
 1608              		.cfi_def_cfa_register 7
 1609 0006 7860     		str	r0, [r7, #4]
 460:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 461:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         return (pobject != 0) && (pmemfun_0 != 0);
 1610              		.loc 3 461 17
 1611 0008 7B68     		ldr	r3, [r7, #4]
 1612 000a 5B68     		ldr	r3, [r3, #4]
 1613              		.loc 3 461 31
 1614 000c 002B     		cmp	r3, #0
 1615 000e 10D0     		beq	.L66
 1616              		.loc 3 461 45 discriminator 1
 1617 0010 7B68     		ldr	r3, [r7, #4]
 1618 0012 9B68     		ldr	r3, [r3, #8]
 1619 0014 002B     		cmp	r3, #0
 1620 0016 07D1     		bne	.L67
 1621              		.loc 3 461 45 is_stmt 0 discriminator 3
 1622 0018 7B68     		ldr	r3, [r7, #4]
 1623 001a DB68     		ldr	r3, [r3, #12]
 1624 001c 03F00103 		and	r3, r3, #1
 1625 0020 002B     		cmp	r3, #0
 1626 0022 01D1     		bne	.L67
 1627              		.loc 3 461 45 discriminator 5
 1628 0024 0123     		movs	r3, #1
 1629 0026 00E0     		b	.L68
 1630              	.L67:
 1631              		.loc 3 461 45 discriminator 6
 1632 0028 0023     		movs	r3, #0
 1633              	.L68:
 1634              		.loc 3 461 31 is_stmt 1 discriminator 8
 1635 002a 012B     		cmp	r3, #1
 1636 002c 01D0     		beq	.L66
 1637              		.loc 3 461 31 is_stmt 0 discriminator 9
 1638 002e 0123     		movs	r3, #1
 1639 0030 00E0     		b	.L69
 1640              	.L66:
 1641              		.loc 3 461 31 discriminator 10
 1642 0032 0023     		movs	r3, #0
 1643              	.L69:
 462:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 1644              		.loc 3 462 5 is_stmt 1 discriminator 12
 1645 0034 1846     		mov	r0, r3
 1646 0036 0C37     		adds	r7, r7, #12
 1647              	.LCFI148:
 1648              		.cfi_def_cfa_offset 4
 1649 0038 BD46     		mov	sp, r7
 1650              	.LCFI149:
 1651              		.cfi_def_cfa_register 13
 1652              		@ sp needed
 1653 003a 5DF8047B 		ldr	r7, [sp], #4
 1654              	.LCFI150:
 1655              		.cfi_restore 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 42


 1656              		.cfi_def_cfa_offset 0
 1657 003e 7047     		bx	lr
 1658              		.cfi_endproc
 1659              	.LFE460:
 1661              		.text
 1662              	.Letext0:
 1663              		.file 8 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 1664              		.file 9 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 1665              		.file 10 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1666              		.file 11 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 1667              		.file 12 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine
 1668              		.file 13 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_st
 1669              		.file 14 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 1670              		.file 15 "Middlewares/ST/touchgfx/framework/include/touchgfx/Event.hpp"
 1671              		.file 16 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/ClickEvent.hpp"
 1672              		.file 17 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/DragEvent.hpp"
 1673              		.file 18 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/GestureEvent.hpp"
 1674              		.file 19 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 1675              		.file 20 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/DebugPrinter.hpp"
 1676              		.file 21 "Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp"
 1677              		.file 22 "Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp"
 1678              		.file 23 "Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp"
 1679              		.file 24 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp"
 1680              		.file 25 "Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp"
 1681              		.file 26 "Src/gui/include/gui/model/Model.hpp"
 1682              		.file 27 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 43


DEFINED SYMBOLS
                            *ABS*:0000000000000000 FrontendApplication.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:79     .text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:87     .text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:0000000000000000 _ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:125    .text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:132    .text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:0000000000000000 _ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:169    .text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:176    .text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:0000000000000000 _ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:213    .text._ZN8touchgfx15UIEventListener14handleKeyEventEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:220    .text._ZN8touchgfx15UIEventListener14handleKeyEventEh:0000000000000000 _ZN8touchgfx15UIEventListener14handleKeyEventEh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:258    .text._ZN8touchgfx15UIEventListener15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:265    .text._ZN8touchgfx15UIEventListener15handleTickEventEv:0000000000000000 _ZN8touchgfx15UIEventListener15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:301    .text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:308    .text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:344    .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:351    .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:393    .text._ZN8touchgfx15UIEventListenerD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1399   .rodata._ZTVN8touchgfx15UIEventListenerE:0000000000000000 _ZTVN8touchgfx15UIEventListenerE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:351    .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:400    .text._ZN8touchgfx15UIEventListenerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:407    .text._ZN8touchgfx15UIEventListenerD0Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:445    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:448    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:451    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:454    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:457    .text._ZN8touchgfx11Application15appSwitchScreenEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:464    .text._ZN8touchgfx11Application15appSwitchScreenEh:0000000000000000 _ZN8touchgfx11Application15appSwitchScreenEh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:503    .text._ZN8touchgfx11Application13requestRedrawERNS_4RectE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:510    .text._ZN8touchgfx11Application13requestRedrawERNS_4RectE:0000000000000000 _ZN8touchgfx11Application13requestRedrawERNS_4RectE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:554    .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:561    .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:604    .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1387   .rodata._ZTVN8touchgfx15GenericCallbackIvvvEE:0000000000000000 _ZTVN8touchgfx15GenericCallbackIvvvEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:561    .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:611    .text._ZN8touchgfx15GenericCallbackIvvvED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:618    .text._ZN8touchgfx15GenericCallbackIvvvED0Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:656    .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:663    .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 _ZN8touchgfx11ApplicationD2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 44


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:703    .text._ZN8touchgfx11ApplicationD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:663    .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 _ZN8touchgfx11ApplicationD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:710    .text._ZN8touchgfx11ApplicationD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:717    .text._ZN8touchgfx11ApplicationD0Ev:0000000000000000 _ZN8touchgfx11ApplicationD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:755    .text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:762    .text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:805    .text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:798    .text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:888    .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:895    .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:935    .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1364   .rodata._ZTVN8touchgfx14MVPApplicationE:0000000000000000 _ZTVN8touchgfx14MVPApplicationE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:895    .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:942    .text._ZN8touchgfx14MVPApplicationD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:949    .text._ZN8touchgfx14MVPApplicationD0Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:987    .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:994    .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 _ZN23FrontendApplicationBaseD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1418   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1040   .text._ZN23FrontendApplicationBaseD2Ev:000000000000002c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1329   .rodata._ZTV23FrontendApplicationBase:0000000000000000 _ZTV23FrontendApplicationBase
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:994    .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 _ZN23FrontendApplicationBaseD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1047   .text._ZN23FrontendApplicationBaseD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1054   .text._ZN23FrontendApplicationBaseD0Ev:0000000000000000 _ZN23FrontendApplicationBaseD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1092   .text._ZN19FrontendApplicationD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1099   .text._ZN19FrontendApplicationD2Ev:0000000000000000 _ZN19FrontendApplicationD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1141   .text._ZN19FrontendApplicationD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1306   .rodata._ZTV19FrontendApplication:0000000000000000 _ZTV19FrontendApplication
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1099   .text._ZN19FrontendApplicationD2Ev:0000000000000000 _ZN19FrontendApplicationD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1148   .text._ZN19FrontendApplicationD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1155   .text._ZN19FrontendApplicationD0Ev:0000000000000000 _ZN19FrontendApplicationD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1193   .text._ZN19FrontendApplication15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1200   .text._ZN19FrontendApplication15handleTickEventEv:0000000000000000 _ZN19FrontendApplication15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1242   .text._ZN19FrontendApplicationC2ER5ModelR12FrontendHeap:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1249   .text._ZN19FrontendApplicationC2ER5ModelR12FrontendHeap:0000000000000000 _ZN19FrontendApplicationC2ER5ModelR12FrontendHeap
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1295   .text._ZN19FrontendApplicationC2ER5ModelR12FrontendHeap:0000000000000028 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1249   .text._ZN19FrontendApplicationC2ER5ModelR12FrontendHeap:0000000000000000 _ZN19FrontendApplicationC1ER5ModelR12FrontendHeap
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1303   .rodata._ZTV19FrontendApplication:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1326   .rodata._ZTV23FrontendApplicationBase:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1352   .rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:0000000000000000 _ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1349   .rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1472   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1517   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1592   .text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:0000000000000000 _ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1361   .rodata._ZTVN8touchgfx14MVPApplicationE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1384   .rodata._ZTVN8touchgfx15GenericCallbackIvvvEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1396   .rodata._ZTVN8touchgfx15UIEventListenerE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1411   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1418   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1458   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1465   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1510   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s:1585   .text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:0000000000000000 $t
                           .group:0000000000000000 _ZN8touchgfx15UIEventListenerD5Ev
                           .group:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED5Ev
                           .group:0000000000000000 _ZN8touchgfx11ApplicationD5Ev
                           .group:0000000000000000 _ZN8touchgfx14MVPApplicationD5Ev
                           .group:0000000000000000 _ZN23FrontendApplicationBaseD5Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cciwLB6C.s 			page 45


                           .group:0000000000000000 _ZN19FrontendApplicationD5Ev
                           .group:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED5Ev
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

UNDEFINED SYMBOLS
_ZdlPvj
_ZTVN8touchgfx11ApplicationE
_ZN5Model4tickEv
_ZN8touchgfx11Application15handleTickEventEv
_ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap
_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
_ZN8touchgfx11Application14handleKeyEventEh
_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
_ZN8touchgfx11Application13requestRedrawEv
_ZN8touchgfx11Application4drawEv
_ZN8touchgfx11Application4drawERNS_4RectE
_ZN8touchgfx11Application19cacheDrawOperationsEb
__cxa_pure_virtual
