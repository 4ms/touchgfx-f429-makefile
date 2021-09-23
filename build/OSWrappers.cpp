ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 1


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
  13              		.file	"OSWrappers.cpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 2


  82              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
  83 0000 FEFF     		.short	-2
  84              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
  85              		.align	1
  88              	_ZN8touchgfxL14BITMAP_INVALIDE:
  89 0000 FFFF     		.short	-1
  90              		.section	.text._ZN8touchgfx10OSWrappers10initializeEv,"ax",%progbits
  91              		.align	1
  92              		.global	_ZN8touchgfx10OSWrappers10initializeEv
  93              		.arch armv7e-m
  94              		.syntax unified
  95              		.thumb
  96              		.thumb_func
  97              		.fpu fpv4-sp-d16
  99              	_ZN8touchgfx10OSWrappers10initializeEv:
 100              	.LFB362:
 101              		.file 1 "Src/OSWrappers.cpp"
   1:Src/OSWrappers.cpp **** /**
   2:Src/OSWrappers.cpp ****   ******************************************************************************
   3:Src/OSWrappers.cpp ****   * File Name          : OSWrappers.cpp
   4:Src/OSWrappers.cpp ****   ******************************************************************************
   5:Src/OSWrappers.cpp ****   * @attention
   6:Src/OSWrappers.cpp ****   *
   7:Src/OSWrappers.cpp ****   * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
   8:Src/OSWrappers.cpp ****   * All rights reserved.</center></h2>
   9:Src/OSWrappers.cpp ****   *
  10:Src/OSWrappers.cpp ****   * This software component is licensed by ST under Ultimate Liberty license
  11:Src/OSWrappers.cpp ****   * SLA0044, the "License"; You may not use this file except in compliance with
  12:Src/OSWrappers.cpp ****   * the License. You may obtain a copy of the License at:
  13:Src/OSWrappers.cpp ****   *                             www.st.com/SLA0044
  14:Src/OSWrappers.cpp ****   *
  15:Src/OSWrappers.cpp ****   ******************************************************************************
  16:Src/OSWrappers.cpp ****   */
  17:Src/OSWrappers.cpp **** 
  18:Src/OSWrappers.cpp **** #include <cassert>
  19:Src/OSWrappers.cpp **** #include <touchgfx/hal/HAL.hpp>
  20:Src/OSWrappers.cpp **** #include <touchgfx/hal/OSWrappers.hpp>
  21:Src/OSWrappers.cpp **** 
  22:Src/OSWrappers.cpp **** /* USER CODE BEGIN oswrappers_custom.tmp */
  23:Src/OSWrappers.cpp **** 
  24:Src/OSWrappers.cpp **** using namespace touchgfx;
  25:Src/OSWrappers.cpp **** 
  26:Src/OSWrappers.cpp **** /*
  27:Src/OSWrappers.cpp ****  * Initialize frame buffer semaphore and queue/mutex for VSYNC signal.
  28:Src/OSWrappers.cpp ****  */
  29:Src/OSWrappers.cpp **** void OSWrappers::initialize()
  30:Src/OSWrappers.cpp **** {
 102              		.loc 1 30 1
 103              		.cfi_startproc
 104              		@ args = 0, pretend = 0, frame = 0
 105              		@ frame_needed = 1, uses_anonymous_args = 0
 106              		@ link register save eliminated.
 107 0000 80B4     		push	{r7}
 108              	.LCFI0:
 109              		.cfi_def_cfa_offset 4
 110              		.cfi_offset 7, -4
 111 0002 00AF     		add	r7, sp, #0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 3


 112              	.LCFI1:
 113              		.cfi_def_cfa_register 7
  31:Src/OSWrappers.cpp **** 
  32:Src/OSWrappers.cpp **** }
 114              		.loc 1 32 1
 115 0004 00BF     		nop
 116 0006 BD46     		mov	sp, r7
 117              	.LCFI2:
 118              		.cfi_def_cfa_register 13
 119              		@ sp needed
 120 0008 5DF8047B 		ldr	r7, [sp], #4
 121              	.LCFI3:
 122              		.cfi_restore 7
 123              		.cfi_def_cfa_offset 0
 124 000c 7047     		bx	lr
 125              		.cfi_endproc
 126              	.LFE362:
 128              		.section	.text._ZN8touchgfx10OSWrappers24takeFrameBufferSemaphoreEv,"ax",%progbits
 129              		.align	1
 130              		.global	_ZN8touchgfx10OSWrappers24takeFrameBufferSemaphoreEv
 131              		.syntax unified
 132              		.thumb
 133              		.thumb_func
 134              		.fpu fpv4-sp-d16
 136              	_ZN8touchgfx10OSWrappers24takeFrameBufferSemaphoreEv:
 137              	.LFB363:
  33:Src/OSWrappers.cpp **** 
  34:Src/OSWrappers.cpp **** /*
  35:Src/OSWrappers.cpp ****  * Take the frame buffer semaphore. Blocks until semaphore is available.
  36:Src/OSWrappers.cpp ****  */
  37:Src/OSWrappers.cpp **** void OSWrappers::takeFrameBufferSemaphore()
  38:Src/OSWrappers.cpp **** {
 138              		.loc 1 38 1
 139              		.cfi_startproc
 140              		@ args = 0, pretend = 0, frame = 0
 141              		@ frame_needed = 1, uses_anonymous_args = 0
 142              		@ link register save eliminated.
 143 0000 80B4     		push	{r7}
 144              	.LCFI4:
 145              		.cfi_def_cfa_offset 4
 146              		.cfi_offset 7, -4
 147 0002 00AF     		add	r7, sp, #0
 148              	.LCFI5:
 149              		.cfi_def_cfa_register 7
  39:Src/OSWrappers.cpp **** 
  40:Src/OSWrappers.cpp **** }
 150              		.loc 1 40 1
 151 0004 00BF     		nop
 152 0006 BD46     		mov	sp, r7
 153              	.LCFI6:
 154              		.cfi_def_cfa_register 13
 155              		@ sp needed
 156 0008 5DF8047B 		ldr	r7, [sp], #4
 157              	.LCFI7:
 158              		.cfi_restore 7
 159              		.cfi_def_cfa_offset 0
 160 000c 7047     		bx	lr
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 4


 161              		.cfi_endproc
 162              	.LFE363:
 164              		.section	.text._ZN8touchgfx10OSWrappers24giveFrameBufferSemaphoreEv,"ax",%progbits
 165              		.align	1
 166              		.global	_ZN8touchgfx10OSWrappers24giveFrameBufferSemaphoreEv
 167              		.syntax unified
 168              		.thumb
 169              		.thumb_func
 170              		.fpu fpv4-sp-d16
 172              	_ZN8touchgfx10OSWrappers24giveFrameBufferSemaphoreEv:
 173              	.LFB364:
  41:Src/OSWrappers.cpp **** 
  42:Src/OSWrappers.cpp **** /*
  43:Src/OSWrappers.cpp ****  * Release the frame buffer semaphore.
  44:Src/OSWrappers.cpp ****  */
  45:Src/OSWrappers.cpp **** void OSWrappers::giveFrameBufferSemaphore()
  46:Src/OSWrappers.cpp **** {
 174              		.loc 1 46 1
 175              		.cfi_startproc
 176              		@ args = 0, pretend = 0, frame = 0
 177              		@ frame_needed = 1, uses_anonymous_args = 0
 178              		@ link register save eliminated.
 179 0000 80B4     		push	{r7}
 180              	.LCFI8:
 181              		.cfi_def_cfa_offset 4
 182              		.cfi_offset 7, -4
 183 0002 00AF     		add	r7, sp, #0
 184              	.LCFI9:
 185              		.cfi_def_cfa_register 7
  47:Src/OSWrappers.cpp **** 
  48:Src/OSWrappers.cpp **** }
 186              		.loc 1 48 1
 187 0004 00BF     		nop
 188 0006 BD46     		mov	sp, r7
 189              	.LCFI10:
 190              		.cfi_def_cfa_register 13
 191              		@ sp needed
 192 0008 5DF8047B 		ldr	r7, [sp], #4
 193              	.LCFI11:
 194              		.cfi_restore 7
 195              		.cfi_def_cfa_offset 0
 196 000c 7047     		bx	lr
 197              		.cfi_endproc
 198              	.LFE364:
 200              		.section	.text._ZN8touchgfx10OSWrappers27tryTakeFrameBufferSemaphoreEv,"ax",%progbits
 201              		.align	1
 202              		.global	_ZN8touchgfx10OSWrappers27tryTakeFrameBufferSemaphoreEv
 203              		.syntax unified
 204              		.thumb
 205              		.thumb_func
 206              		.fpu fpv4-sp-d16
 208              	_ZN8touchgfx10OSWrappers27tryTakeFrameBufferSemaphoreEv:
 209              	.LFB365:
  49:Src/OSWrappers.cpp **** 
  50:Src/OSWrappers.cpp **** /*
  51:Src/OSWrappers.cpp ****  * Attempt to obtain the frame buffer semaphore. If semaphore is not available, do
  52:Src/OSWrappers.cpp ****  * nothing.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 5


  53:Src/OSWrappers.cpp ****  *
  54:Src/OSWrappers.cpp ****  * Note must return immediately! This function does not care who has the taken the semaphore,
  55:Src/OSWrappers.cpp ****  * it only serves to make sure that the semaphore is taken by someone.
  56:Src/OSWrappers.cpp ****  */
  57:Src/OSWrappers.cpp **** void OSWrappers::tryTakeFrameBufferSemaphore()
  58:Src/OSWrappers.cpp **** {
 210              		.loc 1 58 1
 211              		.cfi_startproc
 212              		@ args = 0, pretend = 0, frame = 0
 213              		@ frame_needed = 1, uses_anonymous_args = 0
 214              		@ link register save eliminated.
 215 0000 80B4     		push	{r7}
 216              	.LCFI12:
 217              		.cfi_def_cfa_offset 4
 218              		.cfi_offset 7, -4
 219 0002 00AF     		add	r7, sp, #0
 220              	.LCFI13:
 221              		.cfi_def_cfa_register 7
  59:Src/OSWrappers.cpp **** 
  60:Src/OSWrappers.cpp **** }
 222              		.loc 1 60 1
 223 0004 00BF     		nop
 224 0006 BD46     		mov	sp, r7
 225              	.LCFI14:
 226              		.cfi_def_cfa_register 13
 227              		@ sp needed
 228 0008 5DF8047B 		ldr	r7, [sp], #4
 229              	.LCFI15:
 230              		.cfi_restore 7
 231              		.cfi_def_cfa_offset 0
 232 000c 7047     		bx	lr
 233              		.cfi_endproc
 234              	.LFE365:
 236              		.section	.text._ZN8touchgfx10OSWrappers31giveFrameBufferSemaphoreFromISREv,"ax",%progbits
 237              		.align	1
 238              		.global	_ZN8touchgfx10OSWrappers31giveFrameBufferSemaphoreFromISREv
 239              		.syntax unified
 240              		.thumb
 241              		.thumb_func
 242              		.fpu fpv4-sp-d16
 244              	_ZN8touchgfx10OSWrappers31giveFrameBufferSemaphoreFromISREv:
 245              	.LFB366:
  61:Src/OSWrappers.cpp **** 
  62:Src/OSWrappers.cpp **** /*
  63:Src/OSWrappers.cpp ****  * Release the frame buffer semaphore in a way that is safe in interrupt context. Called
  64:Src/OSWrappers.cpp ****  * from ISR.
  65:Src/OSWrappers.cpp ****  *
  66:Src/OSWrappers.cpp ****  * Release the frame buffer semaphore in a way that is safe in interrupt context.
  67:Src/OSWrappers.cpp ****  * Called from ISR.
  68:Src/OSWrappers.cpp ****  */
  69:Src/OSWrappers.cpp **** void OSWrappers::giveFrameBufferSemaphoreFromISR()
  70:Src/OSWrappers.cpp **** {
 246              		.loc 1 70 1
 247              		.cfi_startproc
 248              		@ args = 0, pretend = 0, frame = 0
 249              		@ frame_needed = 1, uses_anonymous_args = 0
 250              		@ link register save eliminated.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 6


 251 0000 80B4     		push	{r7}
 252              	.LCFI16:
 253              		.cfi_def_cfa_offset 4
 254              		.cfi_offset 7, -4
 255 0002 00AF     		add	r7, sp, #0
 256              	.LCFI17:
 257              		.cfi_def_cfa_register 7
  71:Src/OSWrappers.cpp **** 
  72:Src/OSWrappers.cpp **** }
 258              		.loc 1 72 1
 259 0004 00BF     		nop
 260 0006 BD46     		mov	sp, r7
 261              	.LCFI18:
 262              		.cfi_def_cfa_register 13
 263              		@ sp needed
 264 0008 5DF8047B 		ldr	r7, [sp], #4
 265              	.LCFI19:
 266              		.cfi_restore 7
 267              		.cfi_def_cfa_offset 0
 268 000c 7047     		bx	lr
 269              		.cfi_endproc
 270              	.LFE366:
 272              		.section	.text._ZN8touchgfx10OSWrappers11signalVSyncEv,"ax",%progbits
 273              		.align	1
 274              		.global	_ZN8touchgfx10OSWrappers11signalVSyncEv
 275              		.syntax unified
 276              		.thumb
 277              		.thumb_func
 278              		.fpu fpv4-sp-d16
 280              	_ZN8touchgfx10OSWrappers11signalVSyncEv:
 281              	.LFB367:
  73:Src/OSWrappers.cpp **** 
  74:Src/OSWrappers.cpp **** /*
  75:Src/OSWrappers.cpp ****  * Signal that a VSYNC has occurred. Should make the vsync queue/mutex available.
  76:Src/OSWrappers.cpp ****  *
  77:Src/OSWrappers.cpp ****  * Note This function is called from an ISR, and should (depending on OS) trigger a
  78:Src/OSWrappers.cpp ****  * scheduling.
  79:Src/OSWrappers.cpp ****  */
  80:Src/OSWrappers.cpp **** void OSWrappers::signalVSync()
  81:Src/OSWrappers.cpp **** {
 282              		.loc 1 81 1
 283              		.cfi_startproc
 284              		@ args = 0, pretend = 0, frame = 0
 285              		@ frame_needed = 1, uses_anonymous_args = 0
 286              		@ link register save eliminated.
 287 0000 80B4     		push	{r7}
 288              	.LCFI20:
 289              		.cfi_def_cfa_offset 4
 290              		.cfi_offset 7, -4
 291 0002 00AF     		add	r7, sp, #0
 292              	.LCFI21:
 293              		.cfi_def_cfa_register 7
  82:Src/OSWrappers.cpp **** 
  83:Src/OSWrappers.cpp **** }
 294              		.loc 1 83 1
 295 0004 00BF     		nop
 296 0006 BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 7


 297              	.LCFI22:
 298              		.cfi_def_cfa_register 13
 299              		@ sp needed
 300 0008 5DF8047B 		ldr	r7, [sp], #4
 301              	.LCFI23:
 302              		.cfi_restore 7
 303              		.cfi_def_cfa_offset 0
 304 000c 7047     		bx	lr
 305              		.cfi_endproc
 306              	.LFE367:
 308              		.section	.text._ZN8touchgfx10OSWrappers19signalRenderingDoneEv,"ax",%progbits
 309              		.align	1
 310              		.global	_ZN8touchgfx10OSWrappers19signalRenderingDoneEv
 311              		.syntax unified
 312              		.thumb
 313              		.thumb_func
 314              		.fpu fpv4-sp-d16
 316              	_ZN8touchgfx10OSWrappers19signalRenderingDoneEv:
 317              	.LFB368:
  84:Src/OSWrappers.cpp **** 
  85:Src/OSWrappers.cpp **** /*
  86:Src/OSWrappers.cpp ****   * Signal that the rendering of the frame has completed. Used by
  87:Src/OSWrappers.cpp ****   * some systems to avoid using any previous vsync.
  88:Src/OSWrappers.cpp ****   */
  89:Src/OSWrappers.cpp **** void OSWrappers::signalRenderingDone()
  90:Src/OSWrappers.cpp **** {
 318              		.loc 1 90 1
 319              		.cfi_startproc
 320              		@ args = 0, pretend = 0, frame = 0
 321              		@ frame_needed = 1, uses_anonymous_args = 0
 322              		@ link register save eliminated.
 323 0000 80B4     		push	{r7}
 324              	.LCFI24:
 325              		.cfi_def_cfa_offset 4
 326              		.cfi_offset 7, -4
 327 0002 00AF     		add	r7, sp, #0
 328              	.LCFI25:
 329              		.cfi_def_cfa_register 7
  91:Src/OSWrappers.cpp **** 
  92:Src/OSWrappers.cpp **** }
 330              		.loc 1 92 1
 331 0004 00BF     		nop
 332 0006 BD46     		mov	sp, r7
 333              	.LCFI26:
 334              		.cfi_def_cfa_register 13
 335              		@ sp needed
 336 0008 5DF8047B 		ldr	r7, [sp], #4
 337              	.LCFI27:
 338              		.cfi_restore 7
 339              		.cfi_def_cfa_offset 0
 340 000c 7047     		bx	lr
 341              		.cfi_endproc
 342              	.LFE368:
 344              		.section	.text._ZN8touchgfx10OSWrappers12waitForVSyncEv,"ax",%progbits
 345              		.align	1
 346              		.global	_ZN8touchgfx10OSWrappers12waitForVSyncEv
 347              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 8


 348              		.thumb
 349              		.thumb_func
 350              		.fpu fpv4-sp-d16
 352              	_ZN8touchgfx10OSWrappers12waitForVSyncEv:
 353              	.LFB369:
  93:Src/OSWrappers.cpp **** 
  94:Src/OSWrappers.cpp **** /*
  95:Src/OSWrappers.cpp ****  * This function blocks until a VSYNC occurs.
  96:Src/OSWrappers.cpp ****  *
  97:Src/OSWrappers.cpp ****  * Note This function must first clear the mutex/queue and then wait for the next one to
  98:Src/OSWrappers.cpp ****  * occur.
  99:Src/OSWrappers.cpp ****  */
 100:Src/OSWrappers.cpp **** void OSWrappers::waitForVSync()
 101:Src/OSWrappers.cpp **** {
 354              		.loc 1 101 1
 355              		.cfi_startproc
 356              		@ args = 0, pretend = 0, frame = 0
 357              		@ frame_needed = 1, uses_anonymous_args = 0
 358              		@ link register save eliminated.
 359 0000 80B4     		push	{r7}
 360              	.LCFI28:
 361              		.cfi_def_cfa_offset 4
 362              		.cfi_offset 7, -4
 363 0002 00AF     		add	r7, sp, #0
 364              	.LCFI29:
 365              		.cfi_def_cfa_register 7
 102:Src/OSWrappers.cpp **** 
 103:Src/OSWrappers.cpp **** }
 366              		.loc 1 103 1
 367 0004 00BF     		nop
 368 0006 BD46     		mov	sp, r7
 369              	.LCFI30:
 370              		.cfi_def_cfa_register 13
 371              		@ sp needed
 372 0008 5DF8047B 		ldr	r7, [sp], #4
 373              	.LCFI31:
 374              		.cfi_restore 7
 375              		.cfi_def_cfa_offset 0
 376 000c 7047     		bx	lr
 377              		.cfi_endproc
 378              	.LFE369:
 380              		.section	.text._ZN8touchgfx10OSWrappers9taskDelayEt,"ax",%progbits
 381              		.align	1
 382              		.global	_ZN8touchgfx10OSWrappers9taskDelayEt
 383              		.syntax unified
 384              		.thumb
 385              		.thumb_func
 386              		.fpu fpv4-sp-d16
 388              	_ZN8touchgfx10OSWrappers9taskDelayEt:
 389              	.LFB370:
 104:Src/OSWrappers.cpp **** 
 105:Src/OSWrappers.cpp **** /*
 106:Src/OSWrappers.cpp ****  * A function that causes executing task to sleep for a number of milliseconds.
 107:Src/OSWrappers.cpp ****  *
 108:Src/OSWrappers.cpp ****  * A function that causes executing task to sleep for a number of milliseconds.
 109:Src/OSWrappers.cpp ****  * This function is OPTIONAL. It is only used by the TouchGFX in the case of
 110:Src/OSWrappers.cpp ****  * a specific frame refresh strategy (REFRESH_STRATEGY_OPTIM_SINGLE_BUFFER_TFT_CTRL).
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 9


 111:Src/OSWrappers.cpp ****  * Due to backwards compatibility, in order for this function to be useable by the HAL
 112:Src/OSWrappers.cpp ****  * the function must be explicitly registered:
 113:Src/OSWrappers.cpp ****  * hal.registerTaskDelayFunction(&OSWrappers::taskDelay)
 114:Src/OSWrappers.cpp ****  *
 115:Src/OSWrappers.cpp ****  * see HAL::setFrameRefreshStrategy(FrameRefreshStrategy s)
 116:Src/OSWrappers.cpp ****  * see HAL::registerTaskDelayFunction(void (*delayF)(uint16_t))
 117:Src/OSWrappers.cpp ****  */
 118:Src/OSWrappers.cpp **** void OSWrappers::taskDelay(uint16_t ms)
 119:Src/OSWrappers.cpp **** {
 390              		.loc 1 119 1
 391              		.cfi_startproc
 392              		@ args = 0, pretend = 0, frame = 8
 393              		@ frame_needed = 1, uses_anonymous_args = 0
 394              		@ link register save eliminated.
 395 0000 80B4     		push	{r7}
 396              	.LCFI32:
 397              		.cfi_def_cfa_offset 4
 398              		.cfi_offset 7, -4
 399 0002 83B0     		sub	sp, sp, #12
 400              	.LCFI33:
 401              		.cfi_def_cfa_offset 16
 402 0004 00AF     		add	r7, sp, #0
 403              	.LCFI34:
 404              		.cfi_def_cfa_register 7
 405 0006 0346     		mov	r3, r0
 406 0008 FB80     		strh	r3, [r7, #6]	@ movhi
 120:Src/OSWrappers.cpp **** 
 121:Src/OSWrappers.cpp **** }
 407              		.loc 1 121 1
 408 000a 00BF     		nop
 409 000c 0C37     		adds	r7, r7, #12
 410              	.LCFI35:
 411              		.cfi_def_cfa_offset 4
 412 000e BD46     		mov	sp, r7
 413              	.LCFI36:
 414              		.cfi_def_cfa_register 13
 415              		@ sp needed
 416 0010 5DF8047B 		ldr	r7, [sp], #4
 417              	.LCFI37:
 418              		.cfi_restore 7
 419              		.cfi_def_cfa_offset 0
 420 0014 7047     		bx	lr
 421              		.cfi_endproc
 422              	.LFE370:
 424              		.section	.text._ZN8touchgfx10OSWrappers9taskYieldEv,"ax",%progbits
 425              		.align	1
 426              		.global	_ZN8touchgfx10OSWrappers9taskYieldEv
 427              		.syntax unified
 428              		.thumb
 429              		.thumb_func
 430              		.fpu fpv4-sp-d16
 432              	_ZN8touchgfx10OSWrappers9taskYieldEv:
 433              	.LFB371:
 122:Src/OSWrappers.cpp **** 
 123:Src/OSWrappers.cpp **** /**
 124:Src/OSWrappers.cpp ****  * A function that causes the executing task to yield control to
 125:Src/OSWrappers.cpp ****  * another thread. This function is used by the framework when it
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 10


 126:Src/OSWrappers.cpp ****  * is necessary to wait a little before continuing (e.g. drawing).
 127:Src/OSWrappers.cpp ****  *
 128:Src/OSWrappers.cpp ****  * The implementation should typically request the operating
 129:Src/OSWrappers.cpp ****  * system to change to another task of similar priority. When
 130:Src/OSWrappers.cpp ****  * running without an operating system, the implementation can run
 131:Src/OSWrappers.cpp ****  * a very short task and return.
 132:Src/OSWrappers.cpp ****  */
 133:Src/OSWrappers.cpp **** void OSWrappers::taskYield()
 134:Src/OSWrappers.cpp **** {
 434              		.loc 1 134 1
 435              		.cfi_startproc
 436              		@ args = 0, pretend = 0, frame = 0
 437              		@ frame_needed = 1, uses_anonymous_args = 0
 438              		@ link register save eliminated.
 439 0000 80B4     		push	{r7}
 440              	.LCFI38:
 441              		.cfi_def_cfa_offset 4
 442              		.cfi_offset 7, -4
 443 0002 00AF     		add	r7, sp, #0
 444              	.LCFI39:
 445              		.cfi_def_cfa_register 7
 135:Src/OSWrappers.cpp **** 
 136:Src/OSWrappers.cpp **** }
 446              		.loc 1 136 1
 447 0004 00BF     		nop
 448 0006 BD46     		mov	sp, r7
 449              	.LCFI40:
 450              		.cfi_def_cfa_register 13
 451              		@ sp needed
 452 0008 5DF8047B 		ldr	r7, [sp], #4
 453              	.LCFI41:
 454              		.cfi_restore 7
 455              		.cfi_def_cfa_offset 0
 456 000c 7047     		bx	lr
 457              		.cfi_endproc
 458              	.LFE371:
 460              		.text
 461              	.Letext0:
 462              		.file 2 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 463              		.file 3 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 464              		.file 4 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine/
 465              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_std
 466              		.file 6 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 467              		.file 7 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 468              		.file 8 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/OSWrappers.hpp"
 469              		.file 9 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/sign
 470              		.file 10 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/signal.
 471              		.file 11 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 11


DEFINED SYMBOLS
                            *ABS*:0000000000000000 OSWrappers.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:79     .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:82     .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:85     .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:88     .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:91     .text._ZN8touchgfx10OSWrappers10initializeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:99     .text._ZN8touchgfx10OSWrappers10initializeEv:0000000000000000 _ZN8touchgfx10OSWrappers10initializeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:129    .text._ZN8touchgfx10OSWrappers24takeFrameBufferSemaphoreEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:136    .text._ZN8touchgfx10OSWrappers24takeFrameBufferSemaphoreEv:0000000000000000 _ZN8touchgfx10OSWrappers24takeFrameBufferSemaphoreEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:165    .text._ZN8touchgfx10OSWrappers24giveFrameBufferSemaphoreEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:172    .text._ZN8touchgfx10OSWrappers24giveFrameBufferSemaphoreEv:0000000000000000 _ZN8touchgfx10OSWrappers24giveFrameBufferSemaphoreEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:201    .text._ZN8touchgfx10OSWrappers27tryTakeFrameBufferSemaphoreEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:208    .text._ZN8touchgfx10OSWrappers27tryTakeFrameBufferSemaphoreEv:0000000000000000 _ZN8touchgfx10OSWrappers27tryTakeFrameBufferSemaphoreEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:237    .text._ZN8touchgfx10OSWrappers31giveFrameBufferSemaphoreFromISREv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:244    .text._ZN8touchgfx10OSWrappers31giveFrameBufferSemaphoreFromISREv:0000000000000000 _ZN8touchgfx10OSWrappers31giveFrameBufferSemaphoreFromISREv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:273    .text._ZN8touchgfx10OSWrappers11signalVSyncEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:280    .text._ZN8touchgfx10OSWrappers11signalVSyncEv:0000000000000000 _ZN8touchgfx10OSWrappers11signalVSyncEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:309    .text._ZN8touchgfx10OSWrappers19signalRenderingDoneEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:316    .text._ZN8touchgfx10OSWrappers19signalRenderingDoneEv:0000000000000000 _ZN8touchgfx10OSWrappers19signalRenderingDoneEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:345    .text._ZN8touchgfx10OSWrappers12waitForVSyncEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:352    .text._ZN8touchgfx10OSWrappers12waitForVSyncEv:0000000000000000 _ZN8touchgfx10OSWrappers12waitForVSyncEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:381    .text._ZN8touchgfx10OSWrappers9taskDelayEt:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:388    .text._ZN8touchgfx10OSWrappers9taskDelayEt:0000000000000000 _ZN8touchgfx10OSWrappers9taskDelayEt
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:425    .text._ZN8touchgfx10OSWrappers9taskYieldEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s:432    .text._ZN8touchgfx10OSWrappers9taskYieldEv:0000000000000000 _ZN8touchgfx10OSWrappers9taskYieldEv
                           .group:0000000000000000 wm4.0.8f82b9771446a4c5d395a560643408f9
                           .group:0000000000000000 wm4.cconfig.h.31.9a7f23fec851cb698f0e4b12b5a812df
                           .group:0000000000000000 wm4.cpu_defines.h.31.bf53b50a3b7882b34c717ebded187478
                           .group:0000000000000000 wm4.cconfig.h.530.716755664a180b5214d4137991428173
                           .group:0000000000000000 wm4._newlib_version.h.4.1ef4e12f167f8b69d7c30054be56050d
                           .group:0000000000000000 wm4.newlib.h.34.314a350541e36f4baea3ec77033a1a03
                           .group:0000000000000000 wm4.ieeefp.h.77.f33a4dce62116f6f5175ff8bae57a54c
                           .group:0000000000000000 wm4.features.h.22.fad1cec3bc7ff06488171438dbdcfd02
                           .group:0000000000000000 wm4.config.h.224.79362c3cdb280fe0b8d95bd0bc4d5c54
                           .group:0000000000000000 wm4._ansi.h.21.5136fa2a01d1fcd44a2e65c6c2417611
                           .group:0000000000000000 wm4.assert.h.11.a5d97ca77559a42890313c4941c01fd9
                           .group:0000000000000000 wm4.assert.h.11.7043852a511d37ae606afa012e67e471
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//cc2zHRj1.s 			page 12


                           .group:0000000000000000 wm4.stdint.h.4.659be5aa44c4ab4eb7c7cc2b24d8ceee
                           .group:0000000000000000 wm4._default_types.h.6.959254cf5f09734ea7516c89e8bb21bd
                           .group:0000000000000000 wm4._intsup.h.10.48bafbb683905c4daa4565a85aeeb264
                           .group:0000000000000000 wm4._stdint.h.10.c24fa3af3bc1706662bb5593a907e841
                           .group:0000000000000000 wm4.stdint.h.23.d53047a68f4a85177f80b422d52785ed
                           .group:0000000000000000 wm4.Config.hpp.19.c00fda435df74bc6ea14040a5f8c7f3f
                           .group:0000000000000000 wm4.Types.hpp.33.d478feb449e34922fe6c04dfd673bcbc
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

NO UNDEFINED SYMBOLS
