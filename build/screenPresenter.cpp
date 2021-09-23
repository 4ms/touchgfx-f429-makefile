ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 1


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
  13              		.file	"screenPresenter.cpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 2


  82              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
  83 0000 FEFF     		.short	-2
  84              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
  85              		.align	1
  88              	_ZN8touchgfxL14BITMAP_INVALIDE:
  89 0000 FFFF     		.short	-1
  90              		.section	.text._ZN8touchgfx9Presenter8activateEv,"axG",%progbits,_ZN8touchgfx9Presenter8activateEv
  91              		.align	1
  92              		.weak	_ZN8touchgfx9Presenter8activateEv
  93              		.arch armv7e-m
  94              		.syntax unified
  95              		.thumb
  96              		.thumb_func
  97              		.fpu fpv4-sp-d16
  99              	_ZN8touchgfx9Presenter8activateEv:
 100              	.LFB401:
 101              		.file 1 "Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp"
   1:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****  * @file mvp/Presenter.hpp
  15:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****  * Declares the touchgfx::Presenter class.
  17:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** #ifndef TOUCHGFX_PRESENTER_HPP
  19:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** #define TOUCHGFX_PRESENTER_HPP
  20:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** namespace touchgfx
  22:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** {
  23:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** /**
  24:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****  * The Presenter base class that all application-specific presenters should derive from. Only
  25:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****  * contains activate and deactivate virtual functions which are called automatically
  26:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****  * during screen transition.
  27:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****  */
  28:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** class Presenter
  29:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** {
  30:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** public:
  31:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     /**
  32:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      * Place initialization code for the Presenter here.
  33:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      *
  34:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      * The activate function is called automatically when a screen transition causes this
  35:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      * Presenter to become active. Place initialization code for the Presenter here.
  36:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      */
  37:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     virtual void activate()
 102              		.loc 1 37 18
 103              		.cfi_startproc
 104              		@ args = 0, pretend = 0, frame = 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 3


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
  38:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     {
  39:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     }
 118              		.loc 1 39 5
 119 0008 00BF     		nop
 120 000a 0C37     		adds	r7, r7, #12
 121              	.LCFI3:
 122              		.cfi_def_cfa_offset 4
 123 000c BD46     		mov	sp, r7
 124              	.LCFI4:
 125              		.cfi_def_cfa_register 13
 126              		@ sp needed
 127 000e 5DF8047B 		ldr	r7, [sp], #4
 128              	.LCFI5:
 129              		.cfi_restore 7
 130              		.cfi_def_cfa_offset 0
 131 0012 7047     		bx	lr
 132              		.cfi_endproc
 133              	.LFE401:
 135              		.section	.text._ZN8touchgfx9Presenter10deactivateEv,"axG",%progbits,_ZN8touchgfx9Presenter10deacti
 136              		.align	1
 137              		.weak	_ZN8touchgfx9Presenter10deactivateEv
 138              		.syntax unified
 139              		.thumb
 140              		.thumb_func
 141              		.fpu fpv4-sp-d16
 143              	_ZN8touchgfx9Presenter10deactivateEv:
 144              	.LFB402:
  40:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** 
  41:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     /**
  42:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      * Place cleanup code for the Presenter here.
  43:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      *
  44:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      * The deactivate function is called automatically when a screen transition causes this
  45:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      * Presenter to become inactive. Place cleanup code for the Presenter here.
  46:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****      */
  47:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     virtual void deactivate()
 145              		.loc 1 47 18
 146              		.cfi_startproc
 147              		@ args = 0, pretend = 0, frame = 8
 148              		@ frame_needed = 1, uses_anonymous_args = 0
 149              		@ link register save eliminated.
 150 0000 80B4     		push	{r7}
 151              	.LCFI6:
 152              		.cfi_def_cfa_offset 4
 153              		.cfi_offset 7, -4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 4


 154 0002 83B0     		sub	sp, sp, #12
 155              	.LCFI7:
 156              		.cfi_def_cfa_offset 16
 157 0004 00AF     		add	r7, sp, #0
 158              	.LCFI8:
 159              		.cfi_def_cfa_register 7
 160 0006 7860     		str	r0, [r7, #4]
  48:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     {
  49:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     }
 161              		.loc 1 49 5
 162 0008 00BF     		nop
 163 000a 0C37     		adds	r7, r7, #12
 164              	.LCFI9:
 165              		.cfi_def_cfa_offset 4
 166 000c BD46     		mov	sp, r7
 167              	.LCFI10:
 168              		.cfi_def_cfa_register 13
 169              		@ sp needed
 170 000e 5DF8047B 		ldr	r7, [sp], #4
 171              	.LCFI11:
 172              		.cfi_restore 7
 173              		.cfi_def_cfa_offset 0
 174 0012 7047     		bx	lr
 175              		.cfi_endproc
 176              	.LFE402:
 178              		.section	.text._ZN8touchgfx9PresenterD2Ev,"axG",%progbits,_ZN8touchgfx9PresenterD5Ev,comdat
 179              		.align	1
 180              		.weak	_ZN8touchgfx9PresenterD2Ev
 181              		.syntax unified
 182              		.thumb
 183              		.thumb_func
 184              		.fpu fpv4-sp-d16
 186              	_ZN8touchgfx9PresenterD2Ev:
 187              	.LFB404:
  50:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** 
  51:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     /** Finalizes an instance of the Presenter class. */
  52:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     virtual ~Presenter()
 188              		.loc 1 52 13
 189              		.cfi_startproc
 190              		@ args = 0, pretend = 0, frame = 8
 191              		@ frame_needed = 1, uses_anonymous_args = 0
 192              		@ link register save eliminated.
 193 0000 80B4     		push	{r7}
 194              	.LCFI12:
 195              		.cfi_def_cfa_offset 4
 196              		.cfi_offset 7, -4
 197 0002 83B0     		sub	sp, sp, #12
 198              	.LCFI13:
 199              		.cfi_def_cfa_offset 16
 200 0004 00AF     		add	r7, sp, #0
 201              	.LCFI14:
 202              		.cfi_def_cfa_register 7
 203 0006 7860     		str	r0, [r7, #4]
 204              	.LBB2:
  53:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     {
 205              		.loc 1 53 5
 206 0008 044A     		ldr	r2, .L5
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 5


 207 000a 7B68     		ldr	r3, [r7, #4]
 208 000c 1A60     		str	r2, [r3]
 209              	.LBE2:
  54:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     }
 210              		.loc 1 54 5
 211 000e 7B68     		ldr	r3, [r7, #4]
 212 0010 1846     		mov	r0, r3
 213 0012 0C37     		adds	r7, r7, #12
 214              	.LCFI15:
 215              		.cfi_def_cfa_offset 4
 216 0014 BD46     		mov	sp, r7
 217              	.LCFI16:
 218              		.cfi_def_cfa_register 13
 219              		@ sp needed
 220 0016 5DF8047B 		ldr	r7, [sp], #4
 221              	.LCFI17:
 222              		.cfi_restore 7
 223              		.cfi_def_cfa_offset 0
 224 001a 7047     		bx	lr
 225              	.L6:
 226              		.align	2
 227              	.L5:
 228 001c 08000000 		.word	_ZTVN8touchgfx9PresenterE+8
 229              		.cfi_endproc
 230              	.LFE404:
 232              		.weak	_ZN8touchgfx9PresenterD1Ev
 233              		.thumb_set _ZN8touchgfx9PresenterD1Ev,_ZN8touchgfx9PresenterD2Ev
 234              		.section	.text._ZN8touchgfx9PresenterD0Ev,"axG",%progbits,_ZN8touchgfx9PresenterD5Ev,comdat
 235              		.align	1
 236              		.weak	_ZN8touchgfx9PresenterD0Ev
 237              		.syntax unified
 238              		.thumb
 239              		.thumb_func
 240              		.fpu fpv4-sp-d16
 242              	_ZN8touchgfx9PresenterD0Ev:
 243              	.LFB406:
  52:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     {
 244              		.loc 1 52 13
 245              		.cfi_startproc
 246              		@ args = 0, pretend = 0, frame = 8
 247              		@ frame_needed = 1, uses_anonymous_args = 0
 248 0000 80B5     		push	{r7, lr}
 249              	.LCFI18:
 250              		.cfi_def_cfa_offset 8
 251              		.cfi_offset 7, -8
 252              		.cfi_offset 14, -4
 253 0002 82B0     		sub	sp, sp, #8
 254              	.LCFI19:
 255              		.cfi_def_cfa_offset 16
 256 0004 00AF     		add	r7, sp, #0
 257              	.LCFI20:
 258              		.cfi_def_cfa_register 7
 259 0006 7860     		str	r0, [r7, #4]
 260              		.loc 1 54 5
 261 0008 7868     		ldr	r0, [r7, #4]
 262 000a FFF7FEFF 		bl	_ZN8touchgfx9PresenterD1Ev
 263 000e 0421     		movs	r1, #4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 6


 264 0010 7868     		ldr	r0, [r7, #4]
 265 0012 FFF7FEFF 		bl	_ZdlPvj
 266 0016 7B68     		ldr	r3, [r7, #4]
 267 0018 1846     		mov	r0, r3
 268 001a 0837     		adds	r7, r7, #8
 269              	.LCFI21:
 270              		.cfi_def_cfa_offset 8
 271 001c BD46     		mov	sp, r7
 272              	.LCFI22:
 273              		.cfi_def_cfa_register 13
 274              		@ sp needed
 275 001e 80BD     		pop	{r7, pc}
 276              		.cfi_endproc
 277              	.LFE406:
 279              		.section	.text._ZN8touchgfx9PresenterC2Ev,"axG",%progbits,_ZN8touchgfx9PresenterC5Ev,comdat
 280              		.align	1
 281              		.weak	_ZN8touchgfx9PresenterC2Ev
 282              		.syntax unified
 283              		.thumb
 284              		.thumb_func
 285              		.fpu fpv4-sp-d16
 287              	_ZN8touchgfx9PresenterC2Ev:
 288              	.LFB408:
  55:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** 
  56:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp **** protected:
  57:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     /** Initializes a new instance of the Presenter class. */
  58:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     Presenter()
 289              		.loc 1 58 5
 290              		.cfi_startproc
 291              		@ args = 0, pretend = 0, frame = 8
 292              		@ frame_needed = 1, uses_anonymous_args = 0
 293              		@ link register save eliminated.
 294 0000 80B4     		push	{r7}
 295              	.LCFI23:
 296              		.cfi_def_cfa_offset 4
 297              		.cfi_offset 7, -4
 298 0002 83B0     		sub	sp, sp, #12
 299              	.LCFI24:
 300              		.cfi_def_cfa_offset 16
 301 0004 00AF     		add	r7, sp, #0
 302              	.LCFI25:
 303              		.cfi_def_cfa_register 7
 304 0006 7860     		str	r0, [r7, #4]
 305              	.LBB3:
  59:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     {
 306              		.loc 1 59 5
 307 0008 044A     		ldr	r2, .L11
 308 000a 7B68     		ldr	r3, [r7, #4]
 309 000c 1A60     		str	r2, [r3]
 310              	.LBE3:
  60:Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp ****     }
 311              		.loc 1 60 5
 312 000e 7B68     		ldr	r3, [r7, #4]
 313 0010 1846     		mov	r0, r3
 314 0012 0C37     		adds	r7, r7, #12
 315              	.LCFI26:
 316              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 7


 317 0014 BD46     		mov	sp, r7
 318              	.LCFI27:
 319              		.cfi_def_cfa_register 13
 320              		@ sp needed
 321 0016 5DF8047B 		ldr	r7, [sp], #4
 322              	.LCFI28:
 323              		.cfi_restore 7
 324              		.cfi_def_cfa_offset 0
 325 001a 7047     		bx	lr
 326              	.L12:
 327              		.align	2
 328              	.L11:
 329 001c 08000000 		.word	_ZTVN8touchgfx9PresenterE+8
 330              		.cfi_endproc
 331              	.LFE408:
 333              		.weak	_ZN8touchgfx9PresenterC1Ev
 334              		.thumb_set _ZN8touchgfx9PresenterC1Ev,_ZN8touchgfx9PresenterC2Ev
 335              		.section	.text._ZN13ModelListenerC2Ev,"axG",%progbits,_ZN13ModelListenerC5Ev,comdat
 336              		.align	1
 337              		.weak	_ZN13ModelListenerC2Ev
 338              		.syntax unified
 339              		.thumb
 340              		.thumb_func
 341              		.fpu fpv4-sp-d16
 343              	_ZN13ModelListenerC2Ev:
 344              	.LFB439:
 345              		.file 2 "Src/gui/include/gui/model/ModelListener.hpp"
   1:Src/gui/include/gui/model/ModelListener.hpp **** #ifndef MODELLISTENER_HPP
   2:Src/gui/include/gui/model/ModelListener.hpp **** #define MODELLISTENER_HPP
   3:Src/gui/include/gui/model/ModelListener.hpp **** 
   4:Src/gui/include/gui/model/ModelListener.hpp **** #include <gui/model/Model.hpp>
   5:Src/gui/include/gui/model/ModelListener.hpp **** 
   6:Src/gui/include/gui/model/ModelListener.hpp **** class ModelListener
   7:Src/gui/include/gui/model/ModelListener.hpp **** {
   8:Src/gui/include/gui/model/ModelListener.hpp **** public:
   9:Src/gui/include/gui/model/ModelListener.hpp ****     ModelListener() : model(0) {}
 346              		.loc 2 9 5
 347              		.cfi_startproc
 348              		@ args = 0, pretend = 0, frame = 8
 349              		@ frame_needed = 1, uses_anonymous_args = 0
 350              		@ link register save eliminated.
 351 0000 80B4     		push	{r7}
 352              	.LCFI29:
 353              		.cfi_def_cfa_offset 4
 354              		.cfi_offset 7, -4
 355 0002 83B0     		sub	sp, sp, #12
 356              	.LCFI30:
 357              		.cfi_def_cfa_offset 16
 358 0004 00AF     		add	r7, sp, #0
 359              	.LCFI31:
 360              		.cfi_def_cfa_register 7
 361 0006 7860     		str	r0, [r7, #4]
 362              	.LBB4:
 363              		.loc 2 9 30
 364 0008 064A     		ldr	r2, .L15
 365 000a 7B68     		ldr	r3, [r7, #4]
 366 000c 1A60     		str	r2, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 8


 367 000e 7B68     		ldr	r3, [r7, #4]
 368 0010 0022     		movs	r2, #0
 369 0012 5A60     		str	r2, [r3, #4]
 370              	.LBE4:
 371              		.loc 2 9 33
 372 0014 7B68     		ldr	r3, [r7, #4]
 373 0016 1846     		mov	r0, r3
 374 0018 0C37     		adds	r7, r7, #12
 375              	.LCFI32:
 376              		.cfi_def_cfa_offset 4
 377 001a BD46     		mov	sp, r7
 378              	.LCFI33:
 379              		.cfi_def_cfa_register 13
 380              		@ sp needed
 381 001c 5DF8047B 		ldr	r7, [sp], #4
 382              	.LCFI34:
 383              		.cfi_restore 7
 384              		.cfi_def_cfa_offset 0
 385 0020 7047     		bx	lr
 386              	.L16:
 387 0022 00BF     		.align	2
 388              	.L15:
 389 0024 08000000 		.word	_ZTV13ModelListener+8
 390              		.cfi_endproc
 391              	.LFE439:
 393              		.weak	_ZN13ModelListenerC1Ev
 394              		.thumb_set _ZN13ModelListenerC1Ev,_ZN13ModelListenerC2Ev
 395              		.section	.text._ZN13ModelListenerD2Ev,"axG",%progbits,_ZN13ModelListenerD5Ev,comdat
 396              		.align	1
 397              		.weak	_ZN13ModelListenerD2Ev
 398              		.syntax unified
 399              		.thumb
 400              		.thumb_func
 401              		.fpu fpv4-sp-d16
 403              	_ZN13ModelListenerD2Ev:
 404              	.LFB442:
  10:Src/gui/include/gui/model/ModelListener.hpp ****     
  11:Src/gui/include/gui/model/ModelListener.hpp ****     virtual ~ModelListener() {}
 405              		.loc 2 11 13
 406              		.cfi_startproc
 407              		@ args = 0, pretend = 0, frame = 8
 408              		@ frame_needed = 1, uses_anonymous_args = 0
 409              		@ link register save eliminated.
 410 0000 80B4     		push	{r7}
 411              	.LCFI35:
 412              		.cfi_def_cfa_offset 4
 413              		.cfi_offset 7, -4
 414 0002 83B0     		sub	sp, sp, #12
 415              	.LCFI36:
 416              		.cfi_def_cfa_offset 16
 417 0004 00AF     		add	r7, sp, #0
 418              	.LCFI37:
 419              		.cfi_def_cfa_register 7
 420 0006 7860     		str	r0, [r7, #4]
 421              	.LBB5:
 422              		.loc 2 11 30
 423 0008 044A     		ldr	r2, .L19
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 9


 424 000a 7B68     		ldr	r3, [r7, #4]
 425 000c 1A60     		str	r2, [r3]
 426              	.LBE5:
 427              		.loc 2 11 31
 428 000e 7B68     		ldr	r3, [r7, #4]
 429 0010 1846     		mov	r0, r3
 430 0012 0C37     		adds	r7, r7, #12
 431              	.LCFI38:
 432              		.cfi_def_cfa_offset 4
 433 0014 BD46     		mov	sp, r7
 434              	.LCFI39:
 435              		.cfi_def_cfa_register 13
 436              		@ sp needed
 437 0016 5DF8047B 		ldr	r7, [sp], #4
 438              	.LCFI40:
 439              		.cfi_restore 7
 440              		.cfi_def_cfa_offset 0
 441 001a 7047     		bx	lr
 442              	.L20:
 443              		.align	2
 444              	.L19:
 445 001c 08000000 		.word	_ZTV13ModelListener+8
 446              		.cfi_endproc
 447              	.LFE442:
 449              		.weak	_ZN13ModelListenerD1Ev
 450              		.thumb_set _ZN13ModelListenerD1Ev,_ZN13ModelListenerD2Ev
 451              		.section	.text._ZN13ModelListenerD0Ev,"axG",%progbits,_ZN13ModelListenerD5Ev,comdat
 452              		.align	1
 453              		.weak	_ZN13ModelListenerD0Ev
 454              		.syntax unified
 455              		.thumb
 456              		.thumb_func
 457              		.fpu fpv4-sp-d16
 459              	_ZN13ModelListenerD0Ev:
 460              	.LFB444:
 461              		.loc 2 11 13
 462              		.cfi_startproc
 463              		@ args = 0, pretend = 0, frame = 8
 464              		@ frame_needed = 1, uses_anonymous_args = 0
 465 0000 80B5     		push	{r7, lr}
 466              	.LCFI41:
 467              		.cfi_def_cfa_offset 8
 468              		.cfi_offset 7, -8
 469              		.cfi_offset 14, -4
 470 0002 82B0     		sub	sp, sp, #8
 471              	.LCFI42:
 472              		.cfi_def_cfa_offset 16
 473 0004 00AF     		add	r7, sp, #0
 474              	.LCFI43:
 475              		.cfi_def_cfa_register 7
 476 0006 7860     		str	r0, [r7, #4]
 477              		.loc 2 11 31
 478 0008 7868     		ldr	r0, [r7, #4]
 479 000a FFF7FEFF 		bl	_ZN13ModelListenerD1Ev
 480 000e 0821     		movs	r1, #8
 481 0010 7868     		ldr	r0, [r7, #4]
 482 0012 FFF7FEFF 		bl	_ZdlPvj
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 10


 483 0016 7B68     		ldr	r3, [r7, #4]
 484 0018 1846     		mov	r0, r3
 485 001a 0837     		adds	r7, r7, #8
 486              	.LCFI44:
 487              		.cfi_def_cfa_offset 8
 488 001c BD46     		mov	sp, r7
 489              	.LCFI45:
 490              		.cfi_def_cfa_register 13
 491              		@ sp needed
 492 001e 80BD     		pop	{r7, pc}
 493              		.cfi_endproc
 494              	.LFE444:
 496              		.section	.text._ZN15screenPresenterD2Ev,"axG",%progbits,_ZN15screenPresenterD5Ev,comdat
 497              		.align	1
 498              		.weak	_ZN15screenPresenterD2Ev
 499              		.syntax unified
 500              		.thumb
 501              		.thumb_func
 502              		.fpu fpv4-sp-d16
 504              	_ZN15screenPresenterD2Ev:
 505              	.LFB447:
 506              		.file 3 "Src/gui/include/gui/screen_screen/screenPresenter.hpp"
   1:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** #ifndef SCREENPRESENTER_HPP
   2:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** #define SCREENPRESENTER_HPP
   3:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** 
   4:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** #include <gui/model/ModelListener.hpp>
   5:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** #include <mvp/Presenter.hpp>
   6:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** 
   7:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** using namespace touchgfx;
   8:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** 
   9:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** class screenView;
  10:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** 
  11:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** class screenPresenter : public touchgfx::Presenter, public ModelListener
  12:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** {
  13:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** public:
  14:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****     screenPresenter(screenView& v);
  15:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** 
  16:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****     /**
  17:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****      * The activate function is called automatically when this screen is "switched in"
  18:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****      * (ie. made active). Initialization logic can be placed here.
  19:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****      */
  20:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****     virtual void activate();
  21:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** 
  22:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****     /**
  23:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****      * The deactivate function is called automatically when this screen is "switched out"
  24:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****      * (ie. made inactive). Teardown functionality can be placed here.
  25:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****      */
  26:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****     virtual void deactivate();
  27:Src/gui/include/gui/screen_screen/screenPresenter.hpp **** 
  28:Src/gui/include/gui/screen_screen/screenPresenter.hpp ****     virtual ~screenPresenter() {};
 507              		.loc 3 28 13
 508              		.cfi_startproc
 509              		@ args = 0, pretend = 0, frame = 8
 510              		@ frame_needed = 1, uses_anonymous_args = 0
 511 0000 80B5     		push	{r7, lr}
 512              	.LCFI46:
 513              		.cfi_def_cfa_offset 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 11


 514              		.cfi_offset 7, -8
 515              		.cfi_offset 14, -4
 516 0002 82B0     		sub	sp, sp, #8
 517              	.LCFI47:
 518              		.cfi_def_cfa_offset 16
 519 0004 00AF     		add	r7, sp, #0
 520              	.LCFI48:
 521              		.cfi_def_cfa_register 7
 522 0006 7860     		str	r0, [r7, #4]
 523              	.LBB6:
 524              		.loc 3 28 32
 525 0008 094A     		ldr	r2, .L25
 526 000a 7B68     		ldr	r3, [r7, #4]
 527 000c 1A60     		str	r2, [r3]
 528 000e 094A     		ldr	r2, .L25+4
 529 0010 7B68     		ldr	r3, [r7, #4]
 530 0012 5A60     		str	r2, [r3, #4]
 531 0014 7B68     		ldr	r3, [r7, #4]
 532 0016 0433     		adds	r3, r3, #4
 533 0018 1846     		mov	r0, r3
 534 001a FFF7FEFF 		bl	_ZN13ModelListenerD2Ev
 535 001e 7B68     		ldr	r3, [r7, #4]
 536 0020 1846     		mov	r0, r3
 537 0022 FFF7FEFF 		bl	_ZN8touchgfx9PresenterD2Ev
 538              	.LBE6:
 539              		.loc 3 28 33
 540 0026 7B68     		ldr	r3, [r7, #4]
 541 0028 1846     		mov	r0, r3
 542 002a 0837     		adds	r7, r7, #8
 543              	.LCFI49:
 544              		.cfi_def_cfa_offset 8
 545 002c BD46     		mov	sp, r7
 546              	.LCFI50:
 547              		.cfi_def_cfa_register 13
 548              		@ sp needed
 549 002e 80BD     		pop	{r7, pc}
 550              	.L26:
 551              		.align	2
 552              	.L25:
 553 0030 08000000 		.word	_ZTV15screenPresenter+8
 554 0034 20000000 		.word	_ZTV15screenPresenter+32
 555              		.cfi_endproc
 556              	.LFE447:
 558              		.thumb_set .LTHUNK0,_ZN15screenPresenterD2Ev
 559              		.align	1
 560              		.weak	_ZThn4_N15screenPresenterD1Ev
 561              		.syntax unified
 562              		.thumb
 563              		.thumb_func
 564              		.fpu fpv4-sp-d16
 566              	_ZThn4_N15screenPresenterD1Ev:
 567              	.LFB813:
 568              		.loc 3 28 13
 569              		.cfi_startproc
 570              		@ args = 0, pretend = 0, frame = 0
 571              		@ frame_needed = 0, uses_anonymous_args = 0
 572 0038 A0F10400 		sub	r0, r0, #4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 12


 573 003c E0E7     		b	.LTHUNK0
 574              		.cfi_endproc
 575              	.LFE813:
 577              		.weak	_ZN15screenPresenterD1Ev
 578              		.thumb_set _ZN15screenPresenterD1Ev,_ZN15screenPresenterD2Ev
 579 003e 00BF     		.section	.text._ZN15screenPresenterD0Ev,"axG",%progbits,_ZN15screenPresenterD5Ev,comdat
 580              		.align	1
 581              		.weak	_ZN15screenPresenterD0Ev
 582              		.syntax unified
 583              		.thumb
 584              		.thumb_func
 585              		.fpu fpv4-sp-d16
 587              	_ZN15screenPresenterD0Ev:
 588              	.LFB449:
 589              		.loc 3 28 13
 590              		.cfi_startproc
 591              		@ args = 0, pretend = 0, frame = 8
 592              		@ frame_needed = 1, uses_anonymous_args = 0
 593 0000 80B5     		push	{r7, lr}
 594              	.LCFI51:
 595              		.cfi_def_cfa_offset 8
 596              		.cfi_offset 7, -8
 597              		.cfi_offset 14, -4
 598 0002 82B0     		sub	sp, sp, #8
 599              	.LCFI52:
 600              		.cfi_def_cfa_offset 16
 601 0004 00AF     		add	r7, sp, #0
 602              	.LCFI53:
 603              		.cfi_def_cfa_register 7
 604 0006 7860     		str	r0, [r7, #4]
 605              		.loc 3 28 33
 606 0008 7868     		ldr	r0, [r7, #4]
 607 000a FFF7FEFF 		bl	_ZN15screenPresenterD1Ev
 608 000e 1021     		movs	r1, #16
 609 0010 7868     		ldr	r0, [r7, #4]
 610 0012 FFF7FEFF 		bl	_ZdlPvj
 611 0016 7B68     		ldr	r3, [r7, #4]
 612 0018 1846     		mov	r0, r3
 613 001a 0837     		adds	r7, r7, #8
 614              	.LCFI54:
 615              		.cfi_def_cfa_offset 8
 616 001c BD46     		mov	sp, r7
 617              	.LCFI55:
 618              		.cfi_def_cfa_register 13
 619              		@ sp needed
 620 001e 80BD     		pop	{r7, pc}
 621              		.cfi_endproc
 622              	.LFE449:
 624              		.thumb_set .LTHUNK1,_ZN15screenPresenterD0Ev
 625              		.align	1
 626              		.weak	_ZThn4_N15screenPresenterD0Ev
 627              		.syntax unified
 628              		.thumb
 629              		.thumb_func
 630              		.fpu fpv4-sp-d16
 632              	_ZThn4_N15screenPresenterD0Ev:
 633              	.LFB814:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 13


 634              		.loc 3 28 13
 635              		.cfi_startproc
 636              		@ args = 0, pretend = 0, frame = 0
 637              		@ frame_needed = 0, uses_anonymous_args = 0
 638 0020 A0F10400 		sub	r0, r0, #4
 639 0024 ECE7     		b	.LTHUNK1
 640              		.cfi_endproc
 641              	.LFE814:
 643              		.section	.text._ZN15screenPresenterC2ER10screenView,"ax",%progbits
 644              		.align	1
 645              		.global	_ZN15screenPresenterC2ER10screenView
 646              		.syntax unified
 647              		.thumb
 648              		.thumb_func
 649              		.fpu fpv4-sp-d16
 651              	_ZN15screenPresenterC2ER10screenView:
 652              	.LFB757:
 653              		.file 4 "Src/gui/src/screen_screen/screenPresenter.cpp"
   1:Src/gui/src/screen_screen/screenPresenter.cpp **** #include <gui/screen_screen/screenView.hpp>
   2:Src/gui/src/screen_screen/screenPresenter.cpp **** #include <gui/screen_screen/screenPresenter.hpp>
   3:Src/gui/src/screen_screen/screenPresenter.cpp **** 
   4:Src/gui/src/screen_screen/screenPresenter.cpp **** screenPresenter::screenPresenter(screenView& v)
 654              		.loc 4 4 1
 655              		.cfi_startproc
 656              		@ args = 0, pretend = 0, frame = 8
 657              		@ frame_needed = 1, uses_anonymous_args = 0
 658 0000 80B5     		push	{r7, lr}
 659              	.LCFI56:
 660              		.cfi_def_cfa_offset 8
 661              		.cfi_offset 7, -8
 662              		.cfi_offset 14, -4
 663 0002 82B0     		sub	sp, sp, #8
 664              	.LCFI57:
 665              		.cfi_def_cfa_offset 16
 666 0004 00AF     		add	r7, sp, #0
 667              	.LCFI58:
 668              		.cfi_def_cfa_register 7
 669 0006 7860     		str	r0, [r7, #4]
 670 0008 3960     		str	r1, [r7]
 671              	.LBB7:
   5:Src/gui/src/screen_screen/screenPresenter.cpp ****     : view(v)
 672              		.loc 4 5 13
 673 000a 7B68     		ldr	r3, [r7, #4]
 674 000c 1846     		mov	r0, r3
 675 000e FFF7FEFF 		bl	_ZN8touchgfx9PresenterC2Ev
 676 0012 7B68     		ldr	r3, [r7, #4]
 677 0014 0433     		adds	r3, r3, #4
 678 0016 1846     		mov	r0, r3
 679 0018 FFF7FEFF 		bl	_ZN13ModelListenerC2Ev
 680 001c 064A     		ldr	r2, .L31
 681 001e 7B68     		ldr	r3, [r7, #4]
 682 0020 1A60     		str	r2, [r3]
 683 0022 064A     		ldr	r2, .L31+4
 684 0024 7B68     		ldr	r3, [r7, #4]
 685 0026 5A60     		str	r2, [r3, #4]
 686 0028 7B68     		ldr	r3, [r7, #4]
 687 002a 3A68     		ldr	r2, [r7]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 14


 688 002c DA60     		str	r2, [r3, #12]
 689              	.LBE7:
   6:Src/gui/src/screen_screen/screenPresenter.cpp **** {
   7:Src/gui/src/screen_screen/screenPresenter.cpp **** 
   8:Src/gui/src/screen_screen/screenPresenter.cpp **** }
 690              		.loc 4 8 1
 691 002e 7B68     		ldr	r3, [r7, #4]
 692 0030 1846     		mov	r0, r3
 693 0032 0837     		adds	r7, r7, #8
 694              	.LCFI59:
 695              		.cfi_def_cfa_offset 8
 696 0034 BD46     		mov	sp, r7
 697              	.LCFI60:
 698              		.cfi_def_cfa_register 13
 699              		@ sp needed
 700 0036 80BD     		pop	{r7, pc}
 701              	.L32:
 702              		.align	2
 703              	.L31:
 704 0038 08000000 		.word	_ZTV15screenPresenter+8
 705 003c 20000000 		.word	_ZTV15screenPresenter+32
 706              		.cfi_endproc
 707              	.LFE757:
 709              		.global	_ZN15screenPresenterC1ER10screenView
 710              		.thumb_set _ZN15screenPresenterC1ER10screenView,_ZN15screenPresenterC2ER10screenView
 711              		.section	.text._ZN15screenPresenter8activateEv,"ax",%progbits
 712              		.align	1
 713              		.global	_ZN15screenPresenter8activateEv
 714              		.syntax unified
 715              		.thumb
 716              		.thumb_func
 717              		.fpu fpv4-sp-d16
 719              	_ZN15screenPresenter8activateEv:
 720              	.LFB759:
   9:Src/gui/src/screen_screen/screenPresenter.cpp **** 
  10:Src/gui/src/screen_screen/screenPresenter.cpp **** void screenPresenter::activate()
  11:Src/gui/src/screen_screen/screenPresenter.cpp **** {
 721              		.loc 4 11 1
 722              		.cfi_startproc
 723              		@ args = 0, pretend = 0, frame = 8
 724              		@ frame_needed = 1, uses_anonymous_args = 0
 725              		@ link register save eliminated.
 726 0000 80B4     		push	{r7}
 727              	.LCFI61:
 728              		.cfi_def_cfa_offset 4
 729              		.cfi_offset 7, -4
 730 0002 83B0     		sub	sp, sp, #12
 731              	.LCFI62:
 732              		.cfi_def_cfa_offset 16
 733 0004 00AF     		add	r7, sp, #0
 734              	.LCFI63:
 735              		.cfi_def_cfa_register 7
 736 0006 7860     		str	r0, [r7, #4]
  12:Src/gui/src/screen_screen/screenPresenter.cpp **** 
  13:Src/gui/src/screen_screen/screenPresenter.cpp **** }
 737              		.loc 4 13 1
 738 0008 00BF     		nop
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 15


 739 000a 0C37     		adds	r7, r7, #12
 740              	.LCFI64:
 741              		.cfi_def_cfa_offset 4
 742 000c BD46     		mov	sp, r7
 743              	.LCFI65:
 744              		.cfi_def_cfa_register 13
 745              		@ sp needed
 746 000e 5DF8047B 		ldr	r7, [sp], #4
 747              	.LCFI66:
 748              		.cfi_restore 7
 749              		.cfi_def_cfa_offset 0
 750 0012 7047     		bx	lr
 751              		.cfi_endproc
 752              	.LFE759:
 754              		.section	.text._ZN15screenPresenter10deactivateEv,"ax",%progbits
 755              		.align	1
 756              		.global	_ZN15screenPresenter10deactivateEv
 757              		.syntax unified
 758              		.thumb
 759              		.thumb_func
 760              		.fpu fpv4-sp-d16
 762              	_ZN15screenPresenter10deactivateEv:
 763              	.LFB760:
  14:Src/gui/src/screen_screen/screenPresenter.cpp **** 
  15:Src/gui/src/screen_screen/screenPresenter.cpp **** void screenPresenter::deactivate()
  16:Src/gui/src/screen_screen/screenPresenter.cpp **** {
 764              		.loc 4 16 1
 765              		.cfi_startproc
 766              		@ args = 0, pretend = 0, frame = 8
 767              		@ frame_needed = 1, uses_anonymous_args = 0
 768              		@ link register save eliminated.
 769 0000 80B4     		push	{r7}
 770              	.LCFI67:
 771              		.cfi_def_cfa_offset 4
 772              		.cfi_offset 7, -4
 773 0002 83B0     		sub	sp, sp, #12
 774              	.LCFI68:
 775              		.cfi_def_cfa_offset 16
 776 0004 00AF     		add	r7, sp, #0
 777              	.LCFI69:
 778              		.cfi_def_cfa_register 7
 779 0006 7860     		str	r0, [r7, #4]
  17:Src/gui/src/screen_screen/screenPresenter.cpp **** 
  18:Src/gui/src/screen_screen/screenPresenter.cpp **** }
 780              		.loc 4 18 1
 781 0008 00BF     		nop
 782 000a 0C37     		adds	r7, r7, #12
 783              	.LCFI70:
 784              		.cfi_def_cfa_offset 4
 785 000c BD46     		mov	sp, r7
 786              	.LCFI71:
 787              		.cfi_def_cfa_register 13
 788              		@ sp needed
 789 000e 5DF8047B 		ldr	r7, [sp], #4
 790              	.LCFI72:
 791              		.cfi_restore 7
 792              		.cfi_def_cfa_offset 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 16


 793 0012 7047     		bx	lr
 794              		.cfi_endproc
 795              	.LFE760:
 797              		.global	_ZTV15screenPresenter
 798              		.section	.rodata._ZTV15screenPresenter,"a"
 799              		.align	2
 802              	_ZTV15screenPresenter:
 803 0000 00000000 		.word	0
 804 0004 00000000 		.word	0
 805 0008 00000000 		.word	_ZN15screenPresenter8activateEv
 806 000c 00000000 		.word	_ZN15screenPresenter10deactivateEv
 807 0010 00000000 		.word	_ZN15screenPresenterD1Ev
 808 0014 00000000 		.word	_ZN15screenPresenterD0Ev
 809 0018 FCFFFFFF 		.word	-4
 810 001c 00000000 		.word	0
 811 0020 00000000 		.word	_ZThn4_N15screenPresenterD1Ev
 812 0024 00000000 		.word	_ZThn4_N15screenPresenterD0Ev
 813              		.weak	_ZTV13ModelListener
 814              		.section	.rodata._ZTV13ModelListener,"aG",%progbits,_ZTV13ModelListener,comdat
 815              		.align	2
 818              	_ZTV13ModelListener:
 819 0000 00000000 		.word	0
 820 0004 00000000 		.word	0
 821 0008 00000000 		.word	_ZN13ModelListenerD1Ev
 822 000c 00000000 		.word	_ZN13ModelListenerD0Ev
 823              		.weak	_ZTVN8touchgfx9PresenterE
 824              		.section	.rodata._ZTVN8touchgfx9PresenterE,"aG",%progbits,_ZTVN8touchgfx9PresenterE,comdat
 825              		.align	2
 828              	_ZTVN8touchgfx9PresenterE:
 829 0000 00000000 		.word	0
 830 0004 00000000 		.word	0
 831 0008 00000000 		.word	_ZN8touchgfx9Presenter8activateEv
 832 000c 00000000 		.word	_ZN8touchgfx9Presenter10deactivateEv
 833 0010 00000000 		.word	_ZN8touchgfx9PresenterD1Ev
 834 0014 00000000 		.word	_ZN8touchgfx9PresenterD0Ev
 835              		.text
 836              	.Letext0:
 837              		.file 5 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 838              		.file 6 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 839              		.file 7 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 840              		.file 8 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 841              		.file 9 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
 842              		.file 10 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine
 843              		.file 11 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_st
 844              		.file 12 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 845              		.file 13 "Middlewares/ST/touchgfx/framework/include/touchgfx/Event.hpp"
 846              		.file 14 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/ClickEvent.hpp"
 847              		.file 15 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/DragEvent.hpp"
 848              		.file 16 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/GestureEvent.hpp"
 849              		.file 17 "Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp"
 850              		.file 18 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 851              		.file 19 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/DebugPrinter.hpp"
 852              		.file 20 "Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp"
 853              		.file 21 "Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp"
 854              		.file 22 "Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp"
 855              		.file 23 "Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp"
 856              		.file 24 "Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 17


 857              		.file 25 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp"
 858              		.file 26 "Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp"
 859              		.file 27 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp"
 860              		.file 28 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp"
 861              		.file 29 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp"
 862              		.file 30 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Cell.hpp"
 863              		.file 31 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Outline.hpp"
 864              		.file 32 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/RenderingBuffe
 865              		.file 33 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Scanline.hpp"
 866              		.file 34 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp"
 867              		.file 35 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Rasterizer.hpp
 868              		.file 36 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp"
 869              		.file 37 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp"
 870              		.file 38 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Canvas.hpp"
 871              		.file 39 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp"
 872              		.file 40 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.
 873              		.file 41 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp"
 874              		.file 42 "Middlewares/ST/touchgfx/framework/include/mvp/View.hpp"
 875              		.file 43 "Src/gui/include/gui/model/Model.hpp"
 876              		.file 44 "Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp"
 877              		.file 45 "Src/gui/include/gui/common/FrontendApplication.hpp"
 878              		.file 46 "Src/gui/include/gui/screen_screen/screenView.hpp"
 879              		.file 47 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/sig
 880              		.file 48 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/signal.
 881              		.file 49 "Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp"
 882              		.file 50 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 18


DEFINED SYMBOLS
                            *ABS*:0000000000000000 screenPresenter.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:79     .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:82     .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:85     .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:88     .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:91     .text._ZN8touchgfx9Presenter8activateEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:99     .text._ZN8touchgfx9Presenter8activateEv:0000000000000000 _ZN8touchgfx9Presenter8activateEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:136    .text._ZN8touchgfx9Presenter10deactivateEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:143    .text._ZN8touchgfx9Presenter10deactivateEv:0000000000000000 _ZN8touchgfx9Presenter10deactivateEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:179    .text._ZN8touchgfx9PresenterD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:186    .text._ZN8touchgfx9PresenterD2Ev:0000000000000000 _ZN8touchgfx9PresenterD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:228    .text._ZN8touchgfx9PresenterD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:828    .rodata._ZTVN8touchgfx9PresenterE:0000000000000000 _ZTVN8touchgfx9PresenterE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:186    .text._ZN8touchgfx9PresenterD2Ev:0000000000000000 _ZN8touchgfx9PresenterD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:235    .text._ZN8touchgfx9PresenterD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:242    .text._ZN8touchgfx9PresenterD0Ev:0000000000000000 _ZN8touchgfx9PresenterD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:280    .text._ZN8touchgfx9PresenterC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:287    .text._ZN8touchgfx9PresenterC2Ev:0000000000000000 _ZN8touchgfx9PresenterC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:329    .text._ZN8touchgfx9PresenterC2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:287    .text._ZN8touchgfx9PresenterC2Ev:0000000000000000 _ZN8touchgfx9PresenterC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:336    .text._ZN13ModelListenerC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:343    .text._ZN13ModelListenerC2Ev:0000000000000000 _ZN13ModelListenerC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:389    .text._ZN13ModelListenerC2Ev:0000000000000024 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:818    .rodata._ZTV13ModelListener:0000000000000000 _ZTV13ModelListener
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:343    .text._ZN13ModelListenerC2Ev:0000000000000000 _ZN13ModelListenerC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:396    .text._ZN13ModelListenerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:403    .text._ZN13ModelListenerD2Ev:0000000000000000 _ZN13ModelListenerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:445    .text._ZN13ModelListenerD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:403    .text._ZN13ModelListenerD2Ev:0000000000000000 _ZN13ModelListenerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:452    .text._ZN13ModelListenerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:459    .text._ZN13ModelListenerD0Ev:0000000000000000 _ZN13ModelListenerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:497    .text._ZN15screenPresenterD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:504    .text._ZN15screenPresenterD2Ev:0000000000000000 _ZN15screenPresenterD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:553    .text._ZN15screenPresenterD2Ev:0000000000000030 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:802    .rodata._ZTV15screenPresenter:0000000000000000 _ZTV15screenPresenter
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:559    .text._ZN15screenPresenterD2Ev:0000000000000038 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:566    .text._ZN15screenPresenterD2Ev:0000000000000038 _ZThn4_N15screenPresenterD1Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 19


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:504    .text._ZN15screenPresenterD2Ev:0000000000000000 _ZN15screenPresenterD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:580    .text._ZN15screenPresenterD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:587    .text._ZN15screenPresenterD0Ev:0000000000000000 _ZN15screenPresenterD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:632    .text._ZN15screenPresenterD0Ev:0000000000000020 _ZThn4_N15screenPresenterD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:644    .text._ZN15screenPresenterC2ER10screenView:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:651    .text._ZN15screenPresenterC2ER10screenView:0000000000000000 _ZN15screenPresenterC2ER10screenView
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:704    .text._ZN15screenPresenterC2ER10screenView:0000000000000038 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:651    .text._ZN15screenPresenterC2ER10screenView:0000000000000000 _ZN15screenPresenterC1ER10screenView
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:712    .text._ZN15screenPresenter8activateEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:719    .text._ZN15screenPresenter8activateEv:0000000000000000 _ZN15screenPresenter8activateEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:755    .text._ZN15screenPresenter10deactivateEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:762    .text._ZN15screenPresenter10deactivateEv:0000000000000000 _ZN15screenPresenter10deactivateEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:799    .rodata._ZTV15screenPresenter:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:815    .rodata._ZTV13ModelListener:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s:825    .rodata._ZTVN8touchgfx9PresenterE:0000000000000000 $d
                           .group:0000000000000000 _ZN8touchgfx9PresenterD5Ev
                           .group:0000000000000000 _ZN8touchgfx9PresenterC5Ev
                           .group:0000000000000000 _ZN13ModelListenerC5Ev
                           .group:0000000000000000 _ZN13ModelListenerD5Ev
                           .group:0000000000000000 _ZN15screenPresenterD5Ev
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccJbAfQU.s 			page 20


                           .group:0000000000000000 wm4._pthreadtypes.h.36.fcee9961c35163dde6267ef772ad1972
                           .group:0000000000000000 wm4.signal.h.30.5277b477a5ebb7d1254c1af3095d1011
                           .group:0000000000000000 wm4.signal.h.18.14c8d0c03fc1e06775633fad7399cfc7
                           .group:0000000000000000 wm4.csignal.45.00534e27a59328df5aaaf458020a025c

UNDEFINED SYMBOLS
_ZdlPvj
