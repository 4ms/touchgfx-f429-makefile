ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s 			page 1


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
  13              		.file	"Model.cpp"
  14              		.text
  15              	.Ltext0:
  16              		.cfi_sections	.debug_frame
  17              		.section	.text._ZN5ModelC2Ev,"ax",%progbits
  18              		.align	1
  19              		.global	_ZN5ModelC2Ev
  20              		.arch armv7e-m
  21              		.syntax unified
  22              		.thumb
  23              		.thumb_func
  24              		.fpu fpv4-sp-d16
  26              	_ZN5ModelC2Ev:
  27              	.LFB10:
  28              		.file 1 "Src/gui/src/model/Model.cpp"
   1:Src/gui/src/model/Model.cpp **** #include <gui/model/Model.hpp>
   2:Src/gui/src/model/Model.cpp **** #include <gui/model/ModelListener.hpp>
   3:Src/gui/src/model/Model.cpp **** 
   4:Src/gui/src/model/Model.cpp **** Model::Model() : modelListener(0)
  29              		.loc 1 4 1
  30              		.cfi_startproc
  31              		@ args = 0, pretend = 0, frame = 8
  32              		@ frame_needed = 1, uses_anonymous_args = 0
  33              		@ link register save eliminated.
  34 0000 80B4     		push	{r7}
  35              	.LCFI0:
  36              		.cfi_def_cfa_offset 4
  37              		.cfi_offset 7, -4
  38 0002 83B0     		sub	sp, sp, #12
  39              	.LCFI1:
  40              		.cfi_def_cfa_offset 16
  41 0004 00AF     		add	r7, sp, #0
  42              	.LCFI2:
  43              		.cfi_def_cfa_register 7
  44 0006 7860     		str	r0, [r7, #4]
  45              	.LBB2:
  46              		.loc 1 4 33
  47 0008 7B68     		ldr	r3, [r7, #4]
  48 000a 0022     		movs	r2, #0
  49 000c 1A60     		str	r2, [r3]
  50              	.LBE2:
   5:Src/gui/src/model/Model.cpp **** {
   6:Src/gui/src/model/Model.cpp **** 
   7:Src/gui/src/model/Model.cpp **** }
  51              		.loc 1 7 1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s 			page 2


  52 000e 7B68     		ldr	r3, [r7, #4]
  53 0010 1846     		mov	r0, r3
  54 0012 0C37     		adds	r7, r7, #12
  55              	.LCFI3:
  56              		.cfi_def_cfa_offset 4
  57 0014 BD46     		mov	sp, r7
  58              	.LCFI4:
  59              		.cfi_def_cfa_register 13
  60              		@ sp needed
  61 0016 5DF8047B 		ldr	r7, [sp], #4
  62              	.LCFI5:
  63              		.cfi_restore 7
  64              		.cfi_def_cfa_offset 0
  65 001a 7047     		bx	lr
  66              		.cfi_endproc
  67              	.LFE10:
  69              		.global	_ZN5ModelC1Ev
  70              		.thumb_set _ZN5ModelC1Ev,_ZN5ModelC2Ev
  71              		.section	.text._ZN5Model4tickEv,"ax",%progbits
  72              		.align	1
  73              		.global	_ZN5Model4tickEv
  74              		.syntax unified
  75              		.thumb
  76              		.thumb_func
  77              		.fpu fpv4-sp-d16
  79              	_ZN5Model4tickEv:
  80              	.LFB12:
   8:Src/gui/src/model/Model.cpp **** 
   9:Src/gui/src/model/Model.cpp **** void Model::tick()
  10:Src/gui/src/model/Model.cpp **** {
  81              		.loc 1 10 1
  82              		.cfi_startproc
  83              		@ args = 0, pretend = 0, frame = 8
  84              		@ frame_needed = 1, uses_anonymous_args = 0
  85              		@ link register save eliminated.
  86 0000 80B4     		push	{r7}
  87              	.LCFI6:
  88              		.cfi_def_cfa_offset 4
  89              		.cfi_offset 7, -4
  90 0002 83B0     		sub	sp, sp, #12
  91              	.LCFI7:
  92              		.cfi_def_cfa_offset 16
  93 0004 00AF     		add	r7, sp, #0
  94              	.LCFI8:
  95              		.cfi_def_cfa_register 7
  96 0006 7860     		str	r0, [r7, #4]
  11:Src/gui/src/model/Model.cpp **** 
  12:Src/gui/src/model/Model.cpp **** }
  97              		.loc 1 12 1
  98 0008 00BF     		nop
  99 000a 0C37     		adds	r7, r7, #12
 100              	.LCFI9:
 101              		.cfi_def_cfa_offset 4
 102 000c BD46     		mov	sp, r7
 103              	.LCFI10:
 104              		.cfi_def_cfa_register 13
 105              		@ sp needed
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s 			page 3


 106 000e 5DF8047B 		ldr	r7, [sp], #4
 107              	.LCFI11:
 108              		.cfi_restore 7
 109              		.cfi_def_cfa_offset 0
 110 0012 7047     		bx	lr
 111              		.cfi_endproc
 112              	.LFE12:
 114              		.text
 115              	.Letext0:
 116              		.file 2 "Src/gui/include/gui/model/Model.hpp"
 117              		.file 3 "Src/gui/include/gui/model/ModelListener.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s 			page 4


DEFINED SYMBOLS
                            *ABS*:0000000000000000 Model.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s:18     .text._ZN5ModelC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s:26     .text._ZN5ModelC2Ev:0000000000000000 _ZN5ModelC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s:26     .text._ZN5ModelC2Ev:0000000000000000 _ZN5ModelC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s:72     .text._ZN5Model4tickEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccymYHpl.s:79     .text._ZN5Model4tickEv:0000000000000000 _ZN5Model4tickEv
                           .group:0000000000000000 wm4.0.8f82b9771446a4c5d395a560643408f9

NO UNDEFINED SYMBOLS
