ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 1


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
  13              		.file	"screenView.cpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 2


  82              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
  83 0000 FEFF     		.short	-2
  84              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
  85              		.align	1
  88              	_ZN8touchgfxL14BITMAP_INVALIDE:
  89 0000 FFFF     		.short	-1
  90              		.section	.text._ZN8touchgfx8DrawableD2Ev,"axG",%progbits,_ZN8touchgfx8DrawableD5Ev,comdat
  91              		.align	1
  92              		.weak	_ZN8touchgfx8DrawableD2Ev
  93              		.arch armv7e-m
  94              		.syntax unified
  95              		.thumb
  96              		.thumb_func
  97              		.fpu fpv4-sp-d16
  99              	_ZN8touchgfx8DrawableD2Ev:
 100              	.LFB315:
 101              		.file 1 "Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 3


  41:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  *
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  * @see Widget, Container
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****  */
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** class Drawable
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** {
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** public:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /** Initializes a new instance of the Drawable class. */
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     Drawable()
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         : rect(),
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           cachedVisibleRect(),
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           parent(0),
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           nextSibling(0),
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           nextDrawChainElement(0),
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           cachedAbsX(0),
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           cachedAbsY(0),
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           touchable(false),
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****           visible(true)
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /** Finalizes an instance of the Drawable class. */
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual ~Drawable()
 102              		.loc 1 62 13
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
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 119              		.loc 1 63 5
 120 0008 044A     		ldr	r2, .L3
 121 000a 7B68     		ldr	r3, [r7, #4]
 122 000c 1A60     		str	r2, [r3]
 123              	.LBE2:
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 124              		.loc 1 64 5
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 4


 135              	.LCFI5:
 136              		.cfi_restore 7
 137              		.cfi_def_cfa_offset 0
 138 001a 7047     		bx	lr
 139              	.L4:
 140              		.align	2
 141              	.L3:
 142 001c 08000000 		.word	_ZTVN8touchgfx8DrawableE+8
 143              		.cfi_endproc
 144              	.LFE315:
 146              		.weak	_ZN8touchgfx8DrawableD1Ev
 147              		.thumb_set _ZN8touchgfx8DrawableD1Ev,_ZN8touchgfx8DrawableD2Ev
 148              		.section	.text._ZN8touchgfx8DrawableD0Ev,"axG",%progbits,_ZN8touchgfx8DrawableD5Ev,comdat
 149              		.align	1
 150              		.weak	_ZN8touchgfx8DrawableD0Ev
 151              		.syntax unified
 152              		.thumb
 153              		.thumb_func
 154              		.fpu fpv4-sp-d16
 156              	_ZN8touchgfx8DrawableD0Ev:
 157              	.LFB317:
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 158              		.loc 1 62 13
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
 174              		.loc 1 64 5
 175 0008 7868     		ldr	r0, [r7, #4]
 176 000a FFF7FEFF 		bl	_ZN8touchgfx8DrawableD1Ev
 177 000e 2821     		movs	r1, #40
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
 193              		.section	.text._ZN8touchgfx8Drawable13getFirstChildEv,"axG",%progbits,_ZN8touchgfx8Drawable13getFi
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 5


 194              		.align	1
 195              		.weak	_ZN8touchgfx8Drawable13getFirstChildEv
 196              		.syntax unified
 197              		.thumb
 198              		.thumb_func
 199              		.fpu fpv4-sp-d16
 201              	_ZN8touchgfx8Drawable13getFirstChildEv:
 202              	.LFB319:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 6


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
 203              		.loc 1 132 23
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
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 134:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return 0;
 219              		.loc 1 134 16
 220 0008 0023     		movs	r3, #0
 135:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 221              		.loc 1 135 5
 222 000a 1846     		mov	r0, r3
 223 000c 0C37     		adds	r7, r7, #12
 224              	.LCFI14:
 225              		.cfi_def_cfa_offset 4
 226 000e BD46     		mov	sp, r7
 227              	.LCFI15:
 228              		.cfi_def_cfa_register 13
 229              		@ sp needed
 230 0010 5DF8047B 		ldr	r7, [sp], #4
 231              	.LCFI16:
 232              		.cfi_restore 7
 233              		.cfi_def_cfa_offset 0
 234 0014 7047     		bx	lr
 235              		.cfi_endproc
 236              	.LFE319:
 238              		.section	.text._ZN8touchgfx8Drawable4setXEs,"axG",%progbits,_ZN8touchgfx8Drawable4setXEs,comdat
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 7


 239              		.align	1
 240              		.weak	_ZN8touchgfx8Drawable4setXEs
 241              		.syntax unified
 242              		.thumb
 243              		.thumb_func
 244              		.fpu fpv4-sp-d16
 246              	_ZN8touchgfx8Drawable4setXEs:
 247              	.LFB326:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 8


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
 217:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 218:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setXY(x, y);
 219:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setWidthHeight(width, height);
 220:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 9


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
 263:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the x coordinate of this Drawable, relative to its parent.
 264:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 265:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  x The new x value, relative to the parent. A negative value is allowed.
 266:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 267:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 268:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 269:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setX(int16_t x)
 248              		.loc 1 269 18
 249              		.cfi_startproc
 250              		@ args = 0, pretend = 0, frame = 8
 251              		@ frame_needed = 1, uses_anonymous_args = 0
 252              		@ link register save eliminated.
 253 0000 80B4     		push	{r7}
 254              	.LCFI17:
 255              		.cfi_def_cfa_offset 4
 256              		.cfi_offset 7, -4
 257 0002 83B0     		sub	sp, sp, #12
 258              	.LCFI18:
 259              		.cfi_def_cfa_offset 16
 260 0004 00AF     		add	r7, sp, #0
 261              	.LCFI19:
 262              		.cfi_def_cfa_register 7
 263 0006 7860     		str	r0, [r7, #4]
 264 0008 0B46     		mov	r3, r1
 265 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 270:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 271:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         rect.x = x;
 266              		.loc 1 271 16
 267 000c 7B68     		ldr	r3, [r7, #4]
 268 000e 7A88     		ldrh	r2, [r7, #2]	@ movhi
 269 0010 9A80     		strh	r2, [r3, #4]	@ movhi
 272:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 270              		.loc 1 272 5
 271 0012 00BF     		nop
 272 0014 0C37     		adds	r7, r7, #12
 273              	.LCFI20:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 10


 274              		.cfi_def_cfa_offset 4
 275 0016 BD46     		mov	sp, r7
 276              	.LCFI21:
 277              		.cfi_def_cfa_register 13
 278              		@ sp needed
 279 0018 5DF8047B 		ldr	r7, [sp], #4
 280              	.LCFI22:
 281              		.cfi_restore 7
 282              		.cfi_def_cfa_offset 0
 283 001c 7047     		bx	lr
 284              		.cfi_endproc
 285              	.LFE326:
 287              		.section	.text._ZN8touchgfx8Drawable4setYEs,"axG",%progbits,_ZN8touchgfx8Drawable4setYEs,comdat
 288              		.align	1
 289              		.weak	_ZN8touchgfx8Drawable4setYEs
 290              		.syntax unified
 291              		.thumb
 292              		.thumb_func
 293              		.fpu fpv4-sp-d16
 295              	_ZN8touchgfx8Drawable4setYEs:
 296              	.LFB327:
 273:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 274:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 275:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the y coordinate of this Drawable, relative to its parent.
 276:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 277:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  y The new y value, relative to the parent. A negative value is allowed.
 278:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 279:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 280:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 281:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setY(int16_t y)
 297              		.loc 1 281 18
 298              		.cfi_startproc
 299              		@ args = 0, pretend = 0, frame = 8
 300              		@ frame_needed = 1, uses_anonymous_args = 0
 301              		@ link register save eliminated.
 302 0000 80B4     		push	{r7}
 303              	.LCFI23:
 304              		.cfi_def_cfa_offset 4
 305              		.cfi_offset 7, -4
 306 0002 83B0     		sub	sp, sp, #12
 307              	.LCFI24:
 308              		.cfi_def_cfa_offset 16
 309 0004 00AF     		add	r7, sp, #0
 310              	.LCFI25:
 311              		.cfi_def_cfa_register 7
 312 0006 7860     		str	r0, [r7, #4]
 313 0008 0B46     		mov	r3, r1
 314 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 282:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 283:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         rect.y = y;
 315              		.loc 1 283 16
 316 000c 7B68     		ldr	r3, [r7, #4]
 317 000e 7A88     		ldrh	r2, [r7, #2]	@ movhi
 318 0010 DA80     		strh	r2, [r3, #6]	@ movhi
 284:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 319              		.loc 1 284 5
 320 0012 00BF     		nop
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 11


 321 0014 0C37     		adds	r7, r7, #12
 322              	.LCFI26:
 323              		.cfi_def_cfa_offset 4
 324 0016 BD46     		mov	sp, r7
 325              	.LCFI27:
 326              		.cfi_def_cfa_register 13
 327              		@ sp needed
 328 0018 5DF8047B 		ldr	r7, [sp], #4
 329              	.LCFI28:
 330              		.cfi_restore 7
 331              		.cfi_def_cfa_offset 0
 332 001c 7047     		bx	lr
 333              		.cfi_endproc
 334              	.LFE327:
 336              		.section	.text._ZN8touchgfx8Drawable8setWidthEs,"axG",%progbits,_ZN8touchgfx8Drawable8setWidthEs,c
 337              		.align	1
 338              		.weak	_ZN8touchgfx8Drawable8setWidthEs
 339              		.syntax unified
 340              		.thumb
 341              		.thumb_func
 342              		.fpu fpv4-sp-d16
 344              	_ZN8touchgfx8Drawable8setWidthEs:
 345              	.LFB329:
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
 298:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 299:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setX(x);
 300:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setY(y);
 301:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 302:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 303:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 304:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the width of this drawable.
 305:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 306:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  width The new width.
 307:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 308:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 309:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 310:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setWidth(int16_t width)
 346              		.loc 1 310 18
 347              		.cfi_startproc
 348              		@ args = 0, pretend = 0, frame = 8
 349              		@ frame_needed = 1, uses_anonymous_args = 0
 350              		@ link register save eliminated.
 351 0000 80B4     		push	{r7}
 352              	.LCFI29:
 353              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 12


 354              		.cfi_offset 7, -4
 355 0002 83B0     		sub	sp, sp, #12
 356              	.LCFI30:
 357              		.cfi_def_cfa_offset 16
 358 0004 00AF     		add	r7, sp, #0
 359              	.LCFI31:
 360              		.cfi_def_cfa_register 7
 361 0006 7860     		str	r0, [r7, #4]
 362 0008 0B46     		mov	r3, r1
 363 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 311:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 312:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         rect.width = width;
 364              		.loc 1 312 20
 365 000c 7B68     		ldr	r3, [r7, #4]
 366 000e 7A88     		ldrh	r2, [r7, #2]	@ movhi
 367 0010 1A81     		strh	r2, [r3, #8]	@ movhi
 313:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 368              		.loc 1 313 5
 369 0012 00BF     		nop
 370 0014 0C37     		adds	r7, r7, #12
 371              	.LCFI32:
 372              		.cfi_def_cfa_offset 4
 373 0016 BD46     		mov	sp, r7
 374              	.LCFI33:
 375              		.cfi_def_cfa_register 13
 376              		@ sp needed
 377 0018 5DF8047B 		ldr	r7, [sp], #4
 378              	.LCFI34:
 379              		.cfi_restore 7
 380              		.cfi_def_cfa_offset 0
 381 001c 7047     		bx	lr
 382              		.cfi_endproc
 383              	.LFE329:
 385              		.section	.text._ZN8touchgfx8Drawable9setHeightEs,"axG",%progbits,_ZN8touchgfx8Drawable9setHeightEs
 386              		.align	1
 387              		.weak	_ZN8touchgfx8Drawable9setHeightEs
 388              		.syntax unified
 389              		.thumb
 390              		.thumb_func
 391              		.fpu fpv4-sp-d16
 393              	_ZN8touchgfx8Drawable9setHeightEs:
 394              	.LFB330:
 314:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 315:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 316:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the height of this drawable.
 317:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 318:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  height The new height.
 319:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 320:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @note For most Drawable widgets, changing this does normally not automatically yield a redra
 321:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 322:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void setHeight(int16_t height)
 395              		.loc 1 322 18
 396              		.cfi_startproc
 397              		@ args = 0, pretend = 0, frame = 8
 398              		@ frame_needed = 1, uses_anonymous_args = 0
 399              		@ link register save eliminated.
 400 0000 80B4     		push	{r7}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 13


 401              	.LCFI35:
 402              		.cfi_def_cfa_offset 4
 403              		.cfi_offset 7, -4
 404 0002 83B0     		sub	sp, sp, #12
 405              	.LCFI36:
 406              		.cfi_def_cfa_offset 16
 407 0004 00AF     		add	r7, sp, #0
 408              	.LCFI37:
 409              		.cfi_def_cfa_register 7
 410 0006 7860     		str	r0, [r7, #4]
 411 0008 0B46     		mov	r3, r1
 412 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 323:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 324:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         rect.height = height;
 413              		.loc 1 324 21
 414 000c 7B68     		ldr	r3, [r7, #4]
 415 000e 7A88     		ldrh	r2, [r7, #2]	@ movhi
 416 0010 5A81     		strh	r2, [r3, #10]	@ movhi
 325:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 417              		.loc 1 325 5
 418 0012 00BF     		nop
 419 0014 0C37     		adds	r7, r7, #12
 420              	.LCFI38:
 421              		.cfi_def_cfa_offset 4
 422 0016 BD46     		mov	sp, r7
 423              	.LCFI39:
 424              		.cfi_def_cfa_register 13
 425              		@ sp needed
 426 0018 5DF8047B 		ldr	r7, [sp], #4
 427              	.LCFI40:
 428              		.cfi_restore 7
 429              		.cfi_def_cfa_offset 0
 430 001c 7047     		bx	lr
 431              		.cfi_endproc
 432              	.LFE330:
 434              		.section	.text._ZN8touchgfx8Drawable20childGeometryChangedEv,"axG",%progbits,_ZN8touchgfx8Drawable
 435              		.align	1
 436              		.weak	_ZN8touchgfx8Drawable20childGeometryChangedEv
 437              		.syntax unified
 438              		.thumb
 439              		.thumb_func
 440              		.fpu fpv4-sp-d16
 442              	_ZN8touchgfx8Drawable20childGeometryChangedEv:
 443              	.LFB331:
 326:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 327:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 328:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * This function can be called on parent nodes to signal that the size or position of
 329:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * one or more of its children has changed. Currently only used in ScrollableContainer
 330:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * to redraw scrollbars when the size of the scrolling contents changes.
 331:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 332:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void childGeometryChanged()
 444              		.loc 1 332 18
 445              		.cfi_startproc
 446              		@ args = 0, pretend = 0, frame = 8
 447              		@ frame_needed = 1, uses_anonymous_args = 0
 448              		@ link register save eliminated.
 449 0000 80B4     		push	{r7}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 14


 450              	.LCFI41:
 451              		.cfi_def_cfa_offset 4
 452              		.cfi_offset 7, -4
 453 0002 83B0     		sub	sp, sp, #12
 454              	.LCFI42:
 455              		.cfi_def_cfa_offset 16
 456 0004 00AF     		add	r7, sp, #0
 457              	.LCFI43:
 458              		.cfi_def_cfa_register 7
 459 0006 7860     		str	r0, [r7, #4]
 333:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 334:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 460              		.loc 1 334 5
 461 0008 00BF     		nop
 462 000a 0C37     		adds	r7, r7, #12
 463              	.LCFI44:
 464              		.cfi_def_cfa_offset 4
 465 000c BD46     		mov	sp, r7
 466              	.LCFI45:
 467              		.cfi_def_cfa_register 13
 468              		@ sp needed
 469 000e 5DF8047B 		ldr	r7, [sp], #4
 470              	.LCFI46:
 471              		.cfi_restore 7
 472              		.cfi_def_cfa_offset 0
 473 0012 7047     		bx	lr
 474              		.cfi_endproc
 475              	.LFE331:
 477              		.section	.text._ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE,"axG",%progbits,_ZN8touc
 478              		.align	1
 479              		.weak	_ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE
 480              		.syntax unified
 481              		.thumb
 482              		.thumb_func
 483              		.fpu fpv4-sp-d16
 485              	_ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE:
 486              	.LFB332:
 335:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 336:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 337:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Defines the event handler interface for ClickEvents. The default implementation
 338:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * ignores the event. The event is only received if the Drawable is touchable and
 339:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * visible.
 340:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 341:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  event The ClickEvent received from the HAL.
 342:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 343:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void handleClickEvent(const ClickEvent& event)
 487              		.loc 1 343 18
 488              		.cfi_startproc
 489              		@ args = 0, pretend = 0, frame = 8
 490              		@ frame_needed = 1, uses_anonymous_args = 0
 491              		@ link register save eliminated.
 492 0000 80B4     		push	{r7}
 493              	.LCFI47:
 494              		.cfi_def_cfa_offset 4
 495              		.cfi_offset 7, -4
 496 0002 83B0     		sub	sp, sp, #12
 497              	.LCFI48:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 15


 498              		.cfi_def_cfa_offset 16
 499 0004 00AF     		add	r7, sp, #0
 500              	.LCFI49:
 501              		.cfi_def_cfa_register 7
 502 0006 7860     		str	r0, [r7, #4]
 503 0008 3960     		str	r1, [r7]
 344:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 345:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 504              		.loc 1 345 5
 505 000a 00BF     		nop
 506 000c 0C37     		adds	r7, r7, #12
 507              	.LCFI50:
 508              		.cfi_def_cfa_offset 4
 509 000e BD46     		mov	sp, r7
 510              	.LCFI51:
 511              		.cfi_def_cfa_register 13
 512              		@ sp needed
 513 0010 5DF8047B 		ldr	r7, [sp], #4
 514              	.LCFI52:
 515              		.cfi_restore 7
 516              		.cfi_def_cfa_offset 0
 517 0014 7047     		bx	lr
 518              		.cfi_endproc
 519              	.LFE332:
 521              		.section	.text._ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE,"axG",%progbits,_ZN8
 522              		.align	1
 523              		.weak	_ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE
 524              		.syntax unified
 525              		.thumb
 526              		.thumb_func
 527              		.fpu fpv4-sp-d16
 529              	_ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE:
 530              	.LFB333:
 346:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 347:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 348:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Defines the event handler interface for GestureEvents. The default implementation
 349:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * ignores the event. The event is only received if the Drawable is touchable and
 350:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * visible.
 351:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 352:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  event The GestureEvent received from the HAL.
 353:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 354:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void handleGestureEvent(const GestureEvent& event)
 531              		.loc 1 354 18
 532              		.cfi_startproc
 533              		@ args = 0, pretend = 0, frame = 8
 534              		@ frame_needed = 1, uses_anonymous_args = 0
 535              		@ link register save eliminated.
 536 0000 80B4     		push	{r7}
 537              	.LCFI53:
 538              		.cfi_def_cfa_offset 4
 539              		.cfi_offset 7, -4
 540 0002 83B0     		sub	sp, sp, #12
 541              	.LCFI54:
 542              		.cfi_def_cfa_offset 16
 543 0004 00AF     		add	r7, sp, #0
 544              	.LCFI55:
 545              		.cfi_def_cfa_register 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 16


 546 0006 7860     		str	r0, [r7, #4]
 547 0008 3960     		str	r1, [r7]
 355:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 356:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 548              		.loc 1 356 5
 549 000a 00BF     		nop
 550 000c 0C37     		adds	r7, r7, #12
 551              	.LCFI56:
 552              		.cfi_def_cfa_offset 4
 553 000e BD46     		mov	sp, r7
 554              	.LCFI57:
 555              		.cfi_def_cfa_register 13
 556              		@ sp needed
 557 0010 5DF8047B 		ldr	r7, [sp], #4
 558              	.LCFI58:
 559              		.cfi_restore 7
 560              		.cfi_def_cfa_offset 0
 561 0014 7047     		bx	lr
 562              		.cfi_endproc
 563              	.LFE333:
 565              		.section	.text._ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE,"axG",%progbits,_ZN8touchgf
 566              		.align	1
 567              		.weak	_ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE
 568              		.syntax unified
 569              		.thumb
 570              		.thumb_func
 571              		.fpu fpv4-sp-d16
 573              	_ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE:
 574              	.LFB340:
 357:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 358:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 359:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the dimensions (width and height) of the Drawable without changing the x and y
 360:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * coordinates).
 361:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 362:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  width  The width.
 363:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  height The height.
 364:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 365:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setWidthHeight(int16_t width, int16_t height)
 366:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 367:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setWidth(width);
 368:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setHeight(height);
 369:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 17


 385:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Sets the x and y coordinates of this Drawable.
 386:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 387:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  drawable The Drawable to copy the x and y coordinates from.
 388:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 389:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setXY(int16_t,int16_t)
 390:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 391:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setXY(const Drawable& drawable)
 392:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 393:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         setXY(drawable.getX(), drawable.getY());
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 18


 442:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void handleDragEvent(const DragEvent& event)
 575              		.loc 1 442 18
 576              		.cfi_startproc
 577              		@ args = 0, pretend = 0, frame = 8
 578              		@ frame_needed = 1, uses_anonymous_args = 0
 579              		@ link register save eliminated.
 580 0000 80B4     		push	{r7}
 581              	.LCFI59:
 582              		.cfi_def_cfa_offset 4
 583              		.cfi_offset 7, -4
 584 0002 83B0     		sub	sp, sp, #12
 585              	.LCFI60:
 586              		.cfi_def_cfa_offset 16
 587 0004 00AF     		add	r7, sp, #0
 588              	.LCFI61:
 589              		.cfi_def_cfa_register 7
 590 0006 7860     		str	r0, [r7, #4]
 591 0008 3960     		str	r1, [r7]
 443:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 444:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 592              		.loc 1 444 5
 593 000a 00BF     		nop
 594 000c 0C37     		adds	r7, r7, #12
 595              	.LCFI62:
 596              		.cfi_def_cfa_offset 4
 597 000e BD46     		mov	sp, r7
 598              	.LCFI63:
 599              		.cfi_def_cfa_register 13
 600              		@ sp needed
 601 0010 5DF8047B 		ldr	r7, [sp], #4
 602              	.LCFI64:
 603              		.cfi_restore 7
 604              		.cfi_def_cfa_offset 0
 605 0014 7047     		bx	lr
 606              		.cfi_endproc
 607              	.LFE340:
 609              		.section	.text._ZN8touchgfx8Drawable15handleTickEventEv,"axG",%progbits,_ZN8touchgfx8Drawable15han
 610              		.align	1
 611              		.weak	_ZN8touchgfx8Drawable15handleTickEventEv
 612              		.syntax unified
 613              		.thumb
 614              		.thumb_func
 615              		.fpu fpv4-sp-d16
 617              	_ZN8touchgfx8Drawable15handleTickEventEv:
 618              	.LFB341:
 445:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 446:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 447:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Called periodically by the framework if the Drawable instance has subscribed to timer
 448:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * ticks.
 449:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 450:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see Application::registerTimerWidget
 451:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 452:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     virtual void handleTickEvent()
 619              		.loc 1 452 18
 620              		.cfi_startproc
 621              		@ args = 0, pretend = 0, frame = 8
 622              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 19


 623              		@ link register save eliminated.
 624 0000 80B4     		push	{r7}
 625              	.LCFI65:
 626              		.cfi_def_cfa_offset 4
 627              		.cfi_offset 7, -4
 628 0002 83B0     		sub	sp, sp, #12
 629              	.LCFI66:
 630              		.cfi_def_cfa_offset 16
 631 0004 00AF     		add	r7, sp, #0
 632              	.LCFI67:
 633              		.cfi_def_cfa_register 7
 634 0006 7860     		str	r0, [r7, #4]
 453:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 454:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 635              		.loc 1 454 5
 636 0008 00BF     		nop
 637 000a 0C37     		adds	r7, r7, #12
 638              	.LCFI68:
 639              		.cfi_def_cfa_offset 4
 640 000c BD46     		mov	sp, r7
 641              	.LCFI69:
 642              		.cfi_def_cfa_register 13
 643              		@ sp needed
 644 000e 5DF8047B 		ldr	r7, [sp], #4
 645              	.LCFI70:
 646              		.cfi_restore 7
 647              		.cfi_def_cfa_offset 0
 648 0012 7047     		bx	lr
 649              		.cfi_endproc
 650              	.LFE341:
 652              		.section	.text._ZNK8touchgfx8Drawable9isVisibleEv,"axG",%progbits,_ZNK8touchgfx8Drawable9isVisible
 653              		.align	1
 654              		.weak	_ZNK8touchgfx8Drawable9isVisibleEv
 655              		.syntax unified
 656              		.thumb
 657              		.thumb_func
 658              		.fpu fpv4-sp-d16
 660              	_ZNK8touchgfx8Drawable9isVisibleEv:
 661              	.LFB344:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 20


 473:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 474:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  touch If true it will receive touch events, if false it will not.
 475:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 476:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void setTouchable(bool touch)
 477:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 478:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         touchable = touch;
 479:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 480:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 481:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 482:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets whether this Drawable is visible.
 483:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 484:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return true if the Drawable is visible.
 485:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 486:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setVisible
 487:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 488:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     bool isVisible() const
 662              		.loc 1 488 10
 663              		.cfi_startproc
 664              		@ args = 0, pretend = 0, frame = 8
 665              		@ frame_needed = 1, uses_anonymous_args = 0
 666              		@ link register save eliminated.
 667 0000 80B4     		push	{r7}
 668              	.LCFI71:
 669              		.cfi_def_cfa_offset 4
 670              		.cfi_offset 7, -4
 671 0002 83B0     		sub	sp, sp, #12
 672              	.LCFI72:
 673              		.cfi_def_cfa_offset 16
 674 0004 00AF     		add	r7, sp, #0
 675              	.LCFI73:
 676              		.cfi_def_cfa_register 7
 677 0006 7860     		str	r0, [r7, #4]
 489:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 490:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return visible;
 678              		.loc 1 490 16
 679 0008 7B68     		ldr	r3, [r7, #4]
 680 000a 93F82530 		ldrb	r3, [r3, #37]	@ zero_extendqisi2
 491:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 681              		.loc 1 491 5
 682 000e 1846     		mov	r0, r3
 683 0010 0C37     		adds	r7, r7, #12
 684              	.LCFI74:
 685              		.cfi_def_cfa_offset 4
 686 0012 BD46     		mov	sp, r7
 687              	.LCFI75:
 688              		.cfi_def_cfa_register 13
 689              		@ sp needed
 690 0014 5DF8047B 		ldr	r7, [sp], #4
 691              	.LCFI76:
 692              		.cfi_restore 7
 693              		.cfi_def_cfa_offset 0
 694 0018 7047     		bx	lr
 695              		.cfi_endproc
 696              	.LFE344:
 698              		.section	.text._ZNK8touchgfx8Drawable11isTouchableEv,"axG",%progbits,_ZNK8touchgfx8Drawable11isTou
 699              		.align	1
 700              		.weak	_ZNK8touchgfx8Drawable11isTouchableEv
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 21


 701              		.syntax unified
 702              		.thumb
 703              		.thumb_func
 704              		.fpu fpv4-sp-d16
 706              	_ZNK8touchgfx8Drawable11isTouchableEv:
 707              	.LFB345:
 492:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 493:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 494:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Gets whether this Drawable receives touch events or not.
 495:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 496:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return True if touch events are received.
 497:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 498:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @see setTouchable
 499:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 500:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     bool isTouchable() const
 708              		.loc 1 500 10
 709              		.cfi_startproc
 710              		@ args = 0, pretend = 0, frame = 8
 711              		@ frame_needed = 1, uses_anonymous_args = 0
 712              		@ link register save eliminated.
 713 0000 80B4     		push	{r7}
 714              	.LCFI77:
 715              		.cfi_def_cfa_offset 4
 716              		.cfi_offset 7, -4
 717 0002 83B0     		sub	sp, sp, #12
 718              	.LCFI78:
 719              		.cfi_def_cfa_offset 16
 720 0004 00AF     		add	r7, sp, #0
 721              	.LCFI79:
 722              		.cfi_def_cfa_register 7
 723 0006 7860     		str	r0, [r7, #4]
 501:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 502:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         return touchable;
 724              		.loc 1 502 16
 725 0008 7B68     		ldr	r3, [r7, #4]
 726 000a 93F82430 		ldrb	r3, [r3, #36]	@ zero_extendqisi2
 503:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 727              		.loc 1 503 5
 728 000e 1846     		mov	r0, r3
 729 0010 0C37     		adds	r7, r7, #12
 730              	.LCFI80:
 731              		.cfi_def_cfa_offset 4
 732 0012 BD46     		mov	sp, r7
 733              	.LCFI81:
 734              		.cfi_def_cfa_register 13
 735              		@ sp needed
 736 0014 5DF8047B 		ldr	r7, [sp], #4
 737              	.LCFI82:
 738              		.cfi_restore 7
 739              		.cfi_def_cfa_offset 0
 740 0018 7047     		bx	lr
 741              		.cfi_endproc
 742              	.LFE345:
 744              		.section	.text._ZN8touchgfx8Drawable6moveToEss,"axG",%progbits,_ZN8touchgfx8Drawable6moveToEss,com
 745              		.align	1
 746              		.weak	_ZN8touchgfx8Drawable6moveToEss
 747              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 22


 748              		.thumb
 749              		.thumb_func
 750              		.fpu fpv4-sp-d16
 752              	_ZN8touchgfx8Drawable6moveToEss:
 753              	.LFB347:
 504:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 505:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 506:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Returns the parent node. For the root container, the return value is 0.
 507:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
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
 754              		.loc 1 539 18
 755              		.cfi_startproc
 756              		@ args = 0, pretend = 0, frame = 8
 757              		@ frame_needed = 1, uses_anonymous_args = 0
 758 0000 80B5     		push	{r7, lr}
 759              	.LCFI83:
 760              		.cfi_def_cfa_offset 8
 761              		.cfi_offset 7, -8
 762              		.cfi_offset 14, -4
 763 0002 82B0     		sub	sp, sp, #8
 764              	.LCFI84:
 765              		.cfi_def_cfa_offset 16
 766 0004 00AF     		add	r7, sp, #0
 767              	.LCFI85:
 768              		.cfi_def_cfa_register 7
 769 0006 7860     		str	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 23


 770 0008 0B46     		mov	r3, r1
 771 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 772 000c 1346     		mov	r3, r2	@ movhi
 773 000e 3B80     		strh	r3, [r7]	@ movhi
 540:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 541:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         moveRelative(x - rect.x, y - rect.y);
 774              		.loc 1 541 44
 775 0010 7B68     		ldr	r3, [r7, #4]
 776 0012 1B68     		ldr	r3, [r3]
 777 0014 5033     		adds	r3, r3, #80
 778 0016 1B68     		ldr	r3, [r3]
 779              		.loc 1 541 24
 780 0018 7988     		ldrh	r1, [r7, #2]
 781              		.loc 1 541 31
 782 001a 7A68     		ldr	r2, [r7, #4]
 783 001c B2F90420 		ldrsh	r2, [r2, #4]
 784 0020 92B2     		uxth	r2, r2
 785              		.loc 1 541 24
 786 0022 8A1A     		subs	r2, r1, r2
 787 0024 92B2     		uxth	r2, r2
 788              		.loc 1 541 21
 789 0026 10B2     		sxth	r0, r2
 790              		.loc 1 541 36
 791 0028 3988     		ldrh	r1, [r7]
 792              		.loc 1 541 43
 793 002a 7A68     		ldr	r2, [r7, #4]
 794 002c B2F90620 		ldrsh	r2, [r2, #6]
 795 0030 92B2     		uxth	r2, r2
 796              		.loc 1 541 36
 797 0032 8A1A     		subs	r2, r1, r2
 798 0034 92B2     		uxth	r2, r2
 799              		.loc 1 541 21
 800 0036 12B2     		sxth	r2, r2
 801 0038 0146     		mov	r1, r0
 802 003a 7868     		ldr	r0, [r7, #4]
 803 003c 9847     		blx	r3
 804              	.LVL0:
 542:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 805              		.loc 1 542 5
 806 003e 00BF     		nop
 807 0040 0837     		adds	r7, r7, #8
 808              	.LCFI86:
 809              		.cfi_def_cfa_offset 8
 810 0042 BD46     		mov	sp, r7
 811              	.LCFI87:
 812              		.cfi_def_cfa_register 13
 813              		@ sp needed
 814 0044 80BD     		pop	{r7, pc}
 815              		.cfi_endproc
 816              	.LFE347:
 818              		.section	.text._ZN8touchgfx8Drawable19resetDrawChainCacheEv,"axG",%progbits,_ZN8touchgfx8Drawable1
 819              		.align	1
 820              		.weak	_ZN8touchgfx8Drawable19resetDrawChainCacheEv
 821              		.syntax unified
 822              		.thumb
 823              		.thumb_func
 824              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 24


 826              	_ZN8touchgfx8Drawable19resetDrawChainCacheEv:
 827              	.LFB348:
 543:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 544:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 545:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Render the Drawable object into a dynamic bitmap.
 546:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 547:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @param  id The target dynamic bitmap to use for rendering.
 548:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      */
 549:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     void drawToDynamicBitmap(BitmapId id);
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
 828              		.loc 1 576 10
 829              		.cfi_startproc
 830              		@ args = 0, pretend = 0, frame = 8
 831              		@ frame_needed = 1, uses_anonymous_args = 0
 832              		@ link register save eliminated.
 833 0000 80B4     		push	{r7}
 834              	.LCFI88:
 835              		.cfi_def_cfa_offset 4
 836              		.cfi_offset 7, -4
 837 0002 83B0     		sub	sp, sp, #12
 838              	.LCFI89:
 839              		.cfi_def_cfa_offset 16
 840 0004 00AF     		add	r7, sp, #0
 841              	.LCFI90:
 842              		.cfi_def_cfa_register 7
 843 0006 7860     		str	r0, [r7, #4]
 577:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 578:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         // Resetting the cached indicators
 579:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         cachedVisibleRect.x = UNCACHED_INDICATOR;
 844              		.loc 1 579 29
 845 0008 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 25


 846 000a 4FF6FF72 		movw	r2, #65535
 847 000e 9A81     		strh	r2, [r3, #12]	@ movhi
 580:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         cachedAbsX = UNCACHED_INDICATOR;
 848              		.loc 1 580 20
 849 0010 7B68     		ldr	r3, [r7, #4]
 850 0012 4FF6FF72 		movw	r2, #65535
 851 0016 1A84     		strh	r2, [r3, #32]	@ movhi
 581:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         cachedAbsY = UNCACHED_INDICATOR;
 852              		.loc 1 581 20
 853 0018 7B68     		ldr	r3, [r7, #4]
 854 001a 4FF6FF72 		movw	r2, #65535
 855 001e 5A84     		strh	r2, [r3, #34]	@ movhi
 582:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 856              		.loc 1 582 5
 857 0020 00BF     		nop
 858 0022 0C37     		adds	r7, r7, #12
 859              	.LCFI91:
 860              		.cfi_def_cfa_offset 4
 861 0024 BD46     		mov	sp, r7
 862              	.LCFI92:
 863              		.cfi_def_cfa_register 13
 864              		@ sp needed
 865 0026 5DF8047B 		ldr	r7, [sp], #4
 866              	.LCFI93:
 867              		.cfi_restore 7
 868              		.cfi_def_cfa_offset 0
 869 002a 7047     		bx	lr
 870              		.cfi_endproc
 871              	.LFE348:
 873              		.section	.text._ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_,"axG",%progbits,_ZN8touchgfx
 874              		.align	1
 875              		.weak	_ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_
 876              		.syntax unified
 877              		.thumb
 878              		.thumb_func
 879              		.fpu fpv4-sp-d16
 881              	_ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_:
 882              	.LFB352:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 26


 602:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 603:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp **** 
 604:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     /**
 605:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * For TouchGFX internal use only.
 606:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 607:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * Obtain cached version of absolute X-coord.
 608:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
 609:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      * @return The absolute x coordinate for this drawable. Only calculated once.
 610:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****      *
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
 883              		.loc 1 654 18
 884              		.cfi_startproc
 885              		@ args = 0, pretend = 0, frame = 16
 886              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 27


 887 0000 80B5     		push	{r7, lr}
 888              	.LCFI94:
 889              		.cfi_def_cfa_offset 8
 890              		.cfi_offset 7, -8
 891              		.cfi_offset 14, -4
 892 0002 84B0     		sub	sp, sp, #16
 893              	.LCFI95:
 894              		.cfi_def_cfa_offset 24
 895 0004 00AF     		add	r7, sp, #0
 896              	.LCFI96:
 897              		.cfi_def_cfa_register 7
 898 0006 F860     		str	r0, [r7, #12]
 899 0008 B960     		str	r1, [r7, #8]
 900 000a 7A60     		str	r2, [r7, #4]
 655:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     {
 656:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         resetDrawChainCache();
 901              		.loc 1 656 28
 902 000c F868     		ldr	r0, [r7, #12]
 903 000e FFF7FEFF 		bl	_ZN8touchgfx8Drawable19resetDrawChainCacheEv
 657:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         nextDrawChainElement = *nextPreviousElement;
 904              		.loc 1 657 32
 905 0012 7B68     		ldr	r3, [r7, #4]
 906 0014 1A68     		ldr	r2, [r3]
 907              		.loc 1 657 30
 908 0016 FB68     		ldr	r3, [r7, #12]
 909 0018 DA61     		str	r2, [r3, #28]
 658:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****         *nextPreviousElement = this;
 910              		.loc 1 658 30
 911 001a 7B68     		ldr	r3, [r7, #4]
 912 001c FA68     		ldr	r2, [r7, #12]
 913 001e 1A60     		str	r2, [r3]
 659:Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp ****     }
 914              		.loc 1 659 5
 915 0020 00BF     		nop
 916 0022 1037     		adds	r7, r7, #16
 917              	.LCFI97:
 918              		.cfi_def_cfa_offset 8
 919 0024 BD46     		mov	sp, r7
 920              	.LCFI98:
 921              		.cfi_def_cfa_register 13
 922              		@ sp needed
 923 0026 80BD     		pop	{r7, pc}
 924              		.cfi_endproc
 925              	.LFE352:
 927              		.section	.text._ZN8touchgfx6ScreenD2Ev,"axG",%progbits,_ZN8touchgfx6ScreenD5Ev,comdat
 928              		.align	1
 929              		.weak	_ZN8touchgfx6ScreenD2Ev
 930              		.syntax unified
 931              		.thumb
 932              		.thumb_func
 933              		.fpu fpv4-sp-d16
 935              	_ZN8touchgfx6ScreenD2Ev:
 936              	.LFB358:
 937              		.file 2 "Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * All rights reserved.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 28


   4:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
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
 938              		.loc 2 45 13
 939              		.cfi_startproc
 940              		@ args = 0, pretend = 0, frame = 8
 941              		@ frame_needed = 1, uses_anonymous_args = 0
 942 0000 80B5     		push	{r7, lr}
 943              	.LCFI99:
 944              		.cfi_def_cfa_offset 8
 945              		.cfi_offset 7, -8
 946              		.cfi_offset 14, -4
 947 0002 82B0     		sub	sp, sp, #8
 948              	.LCFI100:
 949              		.cfi_def_cfa_offset 16
 950 0004 00AF     		add	r7, sp, #0
 951              	.LCFI101:
 952              		.cfi_def_cfa_register 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 29


 953 0006 7860     		str	r0, [r7, #4]
 954              	.LBB3:
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 955              		.loc 2 46 5
 956 0008 064A     		ldr	r2, .L27
 957 000a 7B68     		ldr	r3, [r7, #4]
 958 000c 1A60     		str	r2, [r3]
 959 000e 7B68     		ldr	r3, [r7, #4]
 960 0010 0433     		adds	r3, r3, #4
 961 0012 1846     		mov	r0, r3
 962 0014 FFF7FEFF 		bl	_ZN8touchgfx9ContainerD1Ev
 963              	.LBE3:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 964              		.loc 2 47 5
 965 0018 7B68     		ldr	r3, [r7, #4]
 966 001a 1846     		mov	r0, r3
 967 001c 0837     		adds	r7, r7, #8
 968              	.LCFI102:
 969              		.cfi_def_cfa_offset 8
 970 001e BD46     		mov	sp, r7
 971              	.LCFI103:
 972              		.cfi_def_cfa_register 13
 973              		@ sp needed
 974 0020 80BD     		pop	{r7, pc}
 975              	.L28:
 976 0022 00BF     		.align	2
 977              	.L27:
 978 0024 08000000 		.word	_ZTVN8touchgfx6ScreenE+8
 979              		.cfi_endproc
 980              	.LFE358:
 982              		.weak	_ZN8touchgfx6ScreenD1Ev
 983              		.thumb_set _ZN8touchgfx6ScreenD1Ev,_ZN8touchgfx6ScreenD2Ev
 984              		.section	.text._ZN8touchgfx6ScreenD0Ev,"axG",%progbits,_ZN8touchgfx6ScreenD5Ev,comdat
 985              		.align	1
 986              		.weak	_ZN8touchgfx6ScreenD0Ev
 987              		.syntax unified
 988              		.thumb
 989              		.thumb_func
 990              		.fpu fpv4-sp-d16
 992              	_ZN8touchgfx6ScreenD0Ev:
 993              	.LFB360:
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 994              		.loc 2 45 13
 995              		.cfi_startproc
 996              		@ args = 0, pretend = 0, frame = 8
 997              		@ frame_needed = 1, uses_anonymous_args = 0
 998 0000 80B5     		push	{r7, lr}
 999              	.LCFI104:
 1000              		.cfi_def_cfa_offset 8
 1001              		.cfi_offset 7, -8
 1002              		.cfi_offset 14, -4
 1003 0002 82B0     		sub	sp, sp, #8
 1004              	.LCFI105:
 1005              		.cfi_def_cfa_offset 16
 1006 0004 00AF     		add	r7, sp, #0
 1007              	.LCFI106:
 1008              		.cfi_def_cfa_register 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 30


 1009 0006 7860     		str	r0, [r7, #4]
 1010              		.loc 2 47 5
 1011 0008 7868     		ldr	r0, [r7, #4]
 1012 000a FFF7FEFF 		bl	_ZN8touchgfx6ScreenD1Ev
 1013 000e 3C21     		movs	r1, #60
 1014 0010 7868     		ldr	r0, [r7, #4]
 1015 0012 FFF7FEFF 		bl	_ZdlPvj
 1016 0016 7B68     		ldr	r3, [r7, #4]
 1017 0018 1846     		mov	r0, r3
 1018 001a 0837     		adds	r7, r7, #8
 1019              	.LCFI107:
 1020              		.cfi_def_cfa_offset 8
 1021 001c BD46     		mov	sp, r7
 1022              	.LCFI108:
 1023              		.cfi_def_cfa_register 13
 1024              		@ sp needed
 1025 001e 80BD     		pop	{r7, pc}
 1026              		.cfi_endproc
 1027              	.LFE360:
 1029              		.section	.text._ZN8touchgfx6Screen11setupScreenEv,"axG",%progbits,_ZN8touchgfx6Screen11setupScreen
 1030              		.align	1
 1031              		.weak	_ZN8touchgfx6Screen11setupScreenEv
 1032              		.syntax unified
 1033              		.thumb
 1034              		.thumb_func
 1035              		.fpu fpv4-sp-d16
 1037              	_ZN8touchgfx6Screen11setupScreenEv:
 1038              	.LFB361:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 31


  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * z-order and delegate draw to them.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param [in] rect The area in absolute coordinates.
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @note The given rect must be in absolute coordinates.
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void draw(Rect& rect);
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by Application::switchScreen() when this screen is going to be displayed. Base
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * version does nothing, but place any screen specific initialization code in an
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * overridden version.
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @see Application::switchScreen
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void setupScreen()
 1039              		.loc 2 92 18
 1040              		.cfi_startproc
 1041              		@ args = 0, pretend = 0, frame = 8
 1042              		@ frame_needed = 1, uses_anonymous_args = 0
 1043              		@ link register save eliminated.
 1044 0000 80B4     		push	{r7}
 1045              	.LCFI109:
 1046              		.cfi_def_cfa_offset 4
 1047              		.cfi_offset 7, -4
 1048 0002 83B0     		sub	sp, sp, #12
 1049              	.LCFI110:
 1050              		.cfi_def_cfa_offset 16
 1051 0004 00AF     		add	r7, sp, #0
 1052              	.LCFI111:
 1053              		.cfi_def_cfa_register 7
 1054 0006 7860     		str	r0, [r7, #4]
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1055              		.loc 2 94 5
 1056 0008 00BF     		nop
 1057 000a 0C37     		adds	r7, r7, #12
 1058              	.LCFI112:
 1059              		.cfi_def_cfa_offset 4
 1060 000c BD46     		mov	sp, r7
 1061              	.LCFI113:
 1062              		.cfi_def_cfa_register 13
 1063              		@ sp needed
 1064 000e 5DF8047B 		ldr	r7, [sp], #4
 1065              	.LCFI114:
 1066              		.cfi_restore 7
 1067              		.cfi_def_cfa_offset 0
 1068 0012 7047     		bx	lr
 1069              		.cfi_endproc
 1070              	.LFE361:
 1072              		.section	.text._ZN8touchgfx6Screen15afterTransitionEv,"axG",%progbits,_ZN8touchgfx6Screen15afterTr
 1073              		.align	1
 1074              		.weak	_ZN8touchgfx6Screen15afterTransitionEv
 1075              		.syntax unified
 1076              		.thumb
 1077              		.thumb_func
 1078              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 32


 1080              	_ZN8touchgfx6Screen15afterTransitionEv:
 1081              	.LFB362:
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by Application::handleTickEvent() when the transition to the screen is done. Base
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * version does nothing, but override to do screen specific initialization code that has
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * to be done after the transition to the screen.
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @see Application::handleTickEvent
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void afterTransition()
 1082              		.loc 2 103 18
 1083              		.cfi_startproc
 1084              		@ args = 0, pretend = 0, frame = 8
 1085              		@ frame_needed = 1, uses_anonymous_args = 0
 1086              		@ link register save eliminated.
 1087 0000 80B4     		push	{r7}
 1088              	.LCFI115:
 1089              		.cfi_def_cfa_offset 4
 1090              		.cfi_offset 7, -4
 1091 0002 83B0     		sub	sp, sp, #12
 1092              	.LCFI116:
 1093              		.cfi_def_cfa_offset 16
 1094 0004 00AF     		add	r7, sp, #0
 1095              	.LCFI117:
 1096              		.cfi_def_cfa_register 7
 1097 0006 7860     		str	r0, [r7, #4]
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1098              		.loc 2 105 5
 1099 0008 00BF     		nop
 1100 000a 0C37     		adds	r7, r7, #12
 1101              	.LCFI118:
 1102              		.cfi_def_cfa_offset 4
 1103 000c BD46     		mov	sp, r7
 1104              	.LCFI119:
 1105              		.cfi_def_cfa_register 13
 1106              		@ sp needed
 1107 000e 5DF8047B 		ldr	r7, [sp], #4
 1108              	.LCFI120:
 1109              		.cfi_restore 7
 1110              		.cfi_def_cfa_offset 0
 1111 0012 7047     		bx	lr
 1112              		.cfi_endproc
 1113              	.LFE362:
 1115              		.section	.text._ZN8touchgfx6Screen14tearDownScreenEv,"axG",%progbits,_ZN8touchgfx6Screen14tearDown
 1116              		.align	1
 1117              		.weak	_ZN8touchgfx6Screen14tearDownScreenEv
 1118              		.syntax unified
 1119              		.thumb
 1120              		.thumb_func
 1121              		.fpu fpv4-sp-d16
 1123              	_ZN8touchgfx6Screen14tearDownScreenEv:
 1124              	.LFB363:
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by Application::switchScreen() when this screen will no longer be displayed.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 33


 109:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Base version does nothing, but place any screen specific cleanup code in an
 110:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * overridden version.
 111:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 112:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @see Application::switchScreen
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void tearDownScreen()
 1125              		.loc 2 114 18
 1126              		.cfi_startproc
 1127              		@ args = 0, pretend = 0, frame = 8
 1128              		@ frame_needed = 1, uses_anonymous_args = 0
 1129              		@ link register save eliminated.
 1130 0000 80B4     		push	{r7}
 1131              	.LCFI121:
 1132              		.cfi_def_cfa_offset 4
 1133              		.cfi_offset 7, -4
 1134 0002 83B0     		sub	sp, sp, #12
 1135              	.LCFI122:
 1136              		.cfi_def_cfa_offset 16
 1137 0004 00AF     		add	r7, sp, #0
 1138              	.LCFI123:
 1139              		.cfi_def_cfa_register 7
 1140 0006 7860     		str	r0, [r7, #4]
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 116:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1141              		.loc 2 116 5
 1142 0008 00BF     		nop
 1143 000a 0C37     		adds	r7, r7, #12
 1144              	.LCFI124:
 1145              		.cfi_def_cfa_offset 4
 1146 000c BD46     		mov	sp, r7
 1147              	.LCFI125:
 1148              		.cfi_def_cfa_register 13
 1149              		@ sp needed
 1150 000e 5DF8047B 		ldr	r7, [sp], #4
 1151              	.LCFI126:
 1152              		.cfi_restore 7
 1153              		.cfi_def_cfa_offset 0
 1154 0012 7047     		bx	lr
 1155              		.cfi_endproc
 1156              	.LFE363:
 1158              		.section	.text._ZN8touchgfx6Screen15handleTickEventEv,"axG",%progbits,_ZN8touchgfx6Screen15handleT
 1159              		.align	1
 1160              		.weak	_ZN8touchgfx6Screen15handleTickEventEv
 1161              		.syntax unified
 1162              		.thumb
 1163              		.thumb_func
 1164              		.fpu fpv4-sp-d16
 1166              	_ZN8touchgfx6Screen15handleTickEventEv:
 1167              	.LFB364:
 117:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 118:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 119:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Traverse the drawables in reverse z-order and notify them of a click event.
 120:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 121:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param  event The event to handle.
 122:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 123:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void handleClickEvent(const ClickEvent& event);
 124:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 34


 125:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 126:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Traverse the drawables in reverse z-order and notify them of a drag event.
 127:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 128:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param  event The event to handle.
 129:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 130:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void handleDragEvent(const DragEvent& event);
 131:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 132:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 133:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Handle gestures. Traverses drawables in reverse-z and notifies them of the gesture.
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
 1168              		.loc 2 143 18
 1169              		.cfi_startproc
 1170              		@ args = 0, pretend = 0, frame = 8
 1171              		@ frame_needed = 1, uses_anonymous_args = 0
 1172              		@ link register save eliminated.
 1173 0000 80B4     		push	{r7}
 1174              	.LCFI127:
 1175              		.cfi_def_cfa_offset 4
 1176              		.cfi_offset 7, -4
 1177 0002 83B0     		sub	sp, sp, #12
 1178              	.LCFI128:
 1179              		.cfi_def_cfa_offset 16
 1180 0004 00AF     		add	r7, sp, #0
 1181              	.LCFI129:
 1182              		.cfi_def_cfa_register 7
 1183 0006 7860     		str	r0, [r7, #4]
 144:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 145:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1184              		.loc 2 145 5
 1185 0008 00BF     		nop
 1186 000a 0C37     		adds	r7, r7, #12
 1187              	.LCFI130:
 1188              		.cfi_def_cfa_offset 4
 1189 000c BD46     		mov	sp, r7
 1190              	.LCFI131:
 1191              		.cfi_def_cfa_register 13
 1192              		@ sp needed
 1193 000e 5DF8047B 		ldr	r7, [sp], #4
 1194              	.LCFI132:
 1195              		.cfi_restore 7
 1196              		.cfi_def_cfa_offset 0
 1197 0012 7047     		bx	lr
 1198              		.cfi_endproc
 1199              	.LFE364:
 1201              		.section	.text._ZN8touchgfx6Screen14handleKeyEventEh,"axG",%progbits,_ZN8touchgfx6Screen14handleKe
 1202              		.align	1
 1203              		.weak	_ZN8touchgfx6Screen14handleKeyEventEh
 1204              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 35


 1205              		.thumb
 1206              		.thumb_func
 1207              		.fpu fpv4-sp-d16
 1209              	_ZN8touchgfx6Screen14handleKeyEventEh:
 1210              	.LFB365:
 146:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp **** 
 147:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     /**
 148:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * Called by the Application on the reception of a "key", the meaning of which is
 149:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * platform/application specific. Default implementation does nothing.
 150:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      *
 151:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      * @param  key The key to handle.
 152:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****      */
 153:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     virtual void handleKeyEvent(uint8_t key)
 1211              		.loc 2 153 18
 1212              		.cfi_startproc
 1213              		@ args = 0, pretend = 0, frame = 8
 1214              		@ frame_needed = 1, uses_anonymous_args = 0
 1215              		@ link register save eliminated.
 1216 0000 80B4     		push	{r7}
 1217              	.LCFI133:
 1218              		.cfi_def_cfa_offset 4
 1219              		.cfi_offset 7, -4
 1220 0002 83B0     		sub	sp, sp, #12
 1221              	.LCFI134:
 1222              		.cfi_def_cfa_offset 16
 1223 0004 00AF     		add	r7, sp, #0
 1224              	.LCFI135:
 1225              		.cfi_def_cfa_register 7
 1226 0006 7860     		str	r0, [r7, #4]
 1227 0008 0B46     		mov	r3, r1
 1228 000a FB70     		strb	r3, [r7, #3]
 154:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     {
 155:Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp ****     }
 1229              		.loc 2 155 5
 1230 000c 00BF     		nop
 1231 000e 0C37     		adds	r7, r7, #12
 1232              	.LCFI136:
 1233              		.cfi_def_cfa_offset 4
 1234 0010 BD46     		mov	sp, r7
 1235              	.LCFI137:
 1236              		.cfi_def_cfa_register 13
 1237              		@ sp needed
 1238 0012 5DF8047B 		ldr	r7, [sp], #4
 1239              	.LCFI138:
 1240              		.cfi_restore 7
 1241              		.cfi_def_cfa_offset 0
 1242 0016 7047     		bx	lr
 1243              		.cfi_endproc
 1244              	.LFE365:
 1246              		.section	.text._ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE,"axG",%progbits,_ZN8touchgfx6Wi
 1247              		.align	1
 1248              		.weak	_ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE
 1249              		.syntax unified
 1250              		.thumb
 1251              		.thumb_func
 1252              		.fpu fpv4-sp-d16
 1254              	_ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 36


 1255              	.LFB450:
 1256              		.file 3 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** * the root directory of this software component.
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
 1257              		.loc 3 47 18
 1258              		.cfi_startproc
 1259              		@ args = 0, pretend = 0, frame = 16
 1260              		@ frame_needed = 1, uses_anonymous_args = 0
 1261 0000 80B5     		push	{r7, lr}
 1262              	.LCFI139:
 1263              		.cfi_def_cfa_offset 8
 1264              		.cfi_offset 7, -8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 37


 1265              		.cfi_offset 14, -4
 1266 0002 84B0     		sub	sp, sp, #16
 1267              	.LCFI140:
 1268              		.cfi_def_cfa_offset 24
 1269 0004 00AF     		add	r7, sp, #0
 1270              	.LCFI141:
 1271              		.cfi_def_cfa_register 7
 1272 0006 F860     		str	r0, [r7, #12]
 1273 0008 7B60     		str	r3, [r7, #4]
 1274 000a 0B46     		mov	r3, r1	@ movhi
 1275 000c 7B81     		strh	r3, [r7, #10]	@ movhi
 1276 000e 1346     		mov	r3, r2	@ movhi
 1277 0010 3B81     		strh	r3, [r7, #8]	@ movhi
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****     {
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         (void)x;
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         (void)y;
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         if (isVisible() && isTouchable())
 1278              		.loc 3 51 22
 1279 0012 FB68     		ldr	r3, [r7, #12]
 1280 0014 1846     		mov	r0, r3
 1281 0016 FFF7FEFF 		bl	_ZNK8touchgfx8Drawable9isVisibleEv
 1282 001a 0346     		mov	r3, r0
 1283              		.loc 3 51 25
 1284 001c 002B     		cmp	r3, #0
 1285 001e 08D0     		beq	.L37
 1286              		.loc 3 51 39 discriminator 1
 1287 0020 FB68     		ldr	r3, [r7, #12]
 1288 0022 1846     		mov	r0, r3
 1289 0024 FFF7FEFF 		bl	_ZNK8touchgfx8Drawable11isTouchableEv
 1290 0028 0346     		mov	r3, r0
 1291              		.loc 3 51 25 discriminator 1
 1292 002a 002B     		cmp	r3, #0
 1293 002c 01D0     		beq	.L37
 1294              		.loc 3 51 25 is_stmt 0 discriminator 3
 1295 002e 0123     		movs	r3, #1
 1296 0030 00E0     		b	.L38
 1297              	.L37:
 1298              		.loc 3 51 25 discriminator 4
 1299 0032 0023     		movs	r3, #0
 1300              	.L38:
 1301              		.loc 3 51 9 is_stmt 1 discriminator 6
 1302 0034 002B     		cmp	r3, #0
 1303 0036 02D0     		beq	.L40
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         {
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****             *last = this;
 1304              		.loc 3 53 19
 1305 0038 FA68     		ldr	r2, [r7, #12]
 1306 003a 7B68     		ldr	r3, [r7, #4]
 1307 003c 1A60     		str	r2, [r3]
 1308              	.L40:
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****         }
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp ****     }
 1309              		.loc 3 55 5
 1310 003e 00BF     		nop
 1311 0040 1037     		adds	r7, r7, #16
 1312              	.LCFI142:
 1313              		.cfi_def_cfa_offset 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 38


 1314 0042 BD46     		mov	sp, r7
 1315              	.LCFI143:
 1316              		.cfi_def_cfa_register 13
 1317              		@ sp needed
 1318 0044 80BD     		pop	{r7, pc}
 1319              		.cfi_endproc
 1320              	.LFE450:
 1322              		.section	.text._ZN8touchgfx6WidgetD2Ev,"axG",%progbits,_ZN8touchgfx6WidgetD5Ev,comdat
 1323              		.align	1
 1324              		.weak	_ZN8touchgfx6WidgetD2Ev
 1325              		.syntax unified
 1326              		.thumb
 1327              		.thumb_func
 1328              		.fpu fpv4-sp-d16
 1330              	_ZN8touchgfx6WidgetD2Ev:
 1331              	.LFB456:
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1332              		.loc 3 36 7
 1333              		.cfi_startproc
 1334              		@ args = 0, pretend = 0, frame = 8
 1335              		@ frame_needed = 1, uses_anonymous_args = 0
 1336 0000 80B5     		push	{r7, lr}
 1337              	.LCFI144:
 1338              		.cfi_def_cfa_offset 8
 1339              		.cfi_offset 7, -8
 1340              		.cfi_offset 14, -4
 1341 0002 82B0     		sub	sp, sp, #8
 1342              	.LCFI145:
 1343              		.cfi_def_cfa_offset 16
 1344 0004 00AF     		add	r7, sp, #0
 1345              	.LCFI146:
 1346              		.cfi_def_cfa_register 7
 1347 0006 7860     		str	r0, [r7, #4]
 1348              	.LBB4:
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1349              		.loc 3 36 7
 1350 0008 054A     		ldr	r2, .L43
 1351 000a 7B68     		ldr	r3, [r7, #4]
 1352 000c 1A60     		str	r2, [r3]
 1353 000e 7B68     		ldr	r3, [r7, #4]
 1354 0010 1846     		mov	r0, r3
 1355 0012 FFF7FEFF 		bl	_ZN8touchgfx8DrawableD2Ev
 1356              	.LBE4:
 1357 0016 7B68     		ldr	r3, [r7, #4]
 1358 0018 1846     		mov	r0, r3
 1359 001a 0837     		adds	r7, r7, #8
 1360              	.LCFI147:
 1361              		.cfi_def_cfa_offset 8
 1362 001c BD46     		mov	sp, r7
 1363              	.LCFI148:
 1364              		.cfi_def_cfa_register 13
 1365              		@ sp needed
 1366 001e 80BD     		pop	{r7, pc}
 1367              	.L44:
 1368              		.align	2
 1369              	.L43:
 1370 0020 08000000 		.word	_ZTVN8touchgfx6WidgetE+8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 39


 1371              		.cfi_endproc
 1372              	.LFE456:
 1374              		.weak	_ZN8touchgfx6WidgetD1Ev
 1375              		.thumb_set _ZN8touchgfx6WidgetD1Ev,_ZN8touchgfx6WidgetD2Ev
 1376              		.section	.text._ZN8touchgfx6WidgetD0Ev,"axG",%progbits,_ZN8touchgfx6WidgetD5Ev,comdat
 1377              		.align	1
 1378              		.weak	_ZN8touchgfx6WidgetD0Ev
 1379              		.syntax unified
 1380              		.thumb
 1381              		.thumb_func
 1382              		.fpu fpv4-sp-d16
 1384              	_ZN8touchgfx6WidgetD0Ev:
 1385              	.LFB458:
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1386              		.loc 3 36 7
 1387              		.cfi_startproc
 1388              		@ args = 0, pretend = 0, frame = 8
 1389              		@ frame_needed = 1, uses_anonymous_args = 0
 1390 0000 80B5     		push	{r7, lr}
 1391              	.LCFI149:
 1392              		.cfi_def_cfa_offset 8
 1393              		.cfi_offset 7, -8
 1394              		.cfi_offset 14, -4
 1395 0002 82B0     		sub	sp, sp, #8
 1396              	.LCFI150:
 1397              		.cfi_def_cfa_offset 16
 1398 0004 00AF     		add	r7, sp, #0
 1399              	.LCFI151:
 1400              		.cfi_def_cfa_register 7
 1401 0006 7860     		str	r0, [r7, #4]
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp **** {
 1402              		.loc 3 36 7
 1403 0008 7868     		ldr	r0, [r7, #4]
 1404 000a FFF7FEFF 		bl	_ZN8touchgfx6WidgetD1Ev
 1405 000e 2821     		movs	r1, #40
 1406 0010 7868     		ldr	r0, [r7, #4]
 1407 0012 FFF7FEFF 		bl	_ZdlPvj
 1408 0016 7B68     		ldr	r3, [r7, #4]
 1409 0018 1846     		mov	r0, r3
 1410 001a 0837     		adds	r7, r7, #8
 1411              	.LCFI152:
 1412              		.cfi_def_cfa_offset 8
 1413 001c BD46     		mov	sp, r7
 1414              	.LCFI153:
 1415              		.cfi_def_cfa_register 13
 1416              		@ sp needed
 1417 001e 80BD     		pop	{r7, pc}
 1418              		.cfi_endproc
 1419              	.LFE458:
 1421              		.section	.text._ZN8touchgfx15AbstractPainterD2Ev,"axG",%progbits,_ZN8touchgfx15AbstractPainterD5Ev
 1422              		.align	1
 1423              		.weak	_ZN8touchgfx15AbstractPainterD2Ev
 1424              		.syntax unified
 1425              		.thumb
 1426              		.thumb_func
 1427              		.fpu fpv4-sp-d16
 1429              	_ZN8touchgfx15AbstractPainterD2Ev:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 40


 1430              	.LFB620:
 1431              		.file 4 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp"
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
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****         : areaOffsetX(0),
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****           areaOffsetY(0),
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****           widgetAlpha(255)
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     }
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp **** 
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     /** Finalizes an instance of the AbstractPainter class. */
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     virtual ~AbstractPainter()
 1432              		.loc 4 51 13
 1433              		.cfi_startproc
 1434              		@ args = 0, pretend = 0, frame = 8
 1435              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 41


 1436              		@ link register save eliminated.
 1437 0000 80B4     		push	{r7}
 1438              	.LCFI154:
 1439              		.cfi_def_cfa_offset 4
 1440              		.cfi_offset 7, -4
 1441 0002 83B0     		sub	sp, sp, #12
 1442              	.LCFI155:
 1443              		.cfi_def_cfa_offset 16
 1444 0004 00AF     		add	r7, sp, #0
 1445              	.LCFI156:
 1446              		.cfi_def_cfa_register 7
 1447 0006 7860     		str	r0, [r7, #4]
 1448              	.LBB5:
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
 1449              		.loc 4 52 5
 1450 0008 044A     		ldr	r2, .L49
 1451 000a 7B68     		ldr	r3, [r7, #4]
 1452 000c 1A60     		str	r2, [r3]
 1453              	.LBE5:
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     }
 1454              		.loc 4 53 5
 1455 000e 7B68     		ldr	r3, [r7, #4]
 1456 0010 1846     		mov	r0, r3
 1457 0012 0C37     		adds	r7, r7, #12
 1458              	.LCFI157:
 1459              		.cfi_def_cfa_offset 4
 1460 0014 BD46     		mov	sp, r7
 1461              	.LCFI158:
 1462              		.cfi_def_cfa_register 13
 1463              		@ sp needed
 1464 0016 5DF8047B 		ldr	r7, [sp], #4
 1465              	.LCFI159:
 1466              		.cfi_restore 7
 1467              		.cfi_def_cfa_offset 0
 1468 001a 7047     		bx	lr
 1469              	.L50:
 1470              		.align	2
 1471              	.L49:
 1472 001c 08000000 		.word	_ZTVN8touchgfx15AbstractPainterE+8
 1473              		.cfi_endproc
 1474              	.LFE620:
 1476              		.weak	_ZN8touchgfx15AbstractPainterD1Ev
 1477              		.thumb_set _ZN8touchgfx15AbstractPainterD1Ev,_ZN8touchgfx15AbstractPainterD2Ev
 1478              		.section	.text._ZN8touchgfx15AbstractPainterD0Ev,"axG",%progbits,_ZN8touchgfx15AbstractPainterD5Ev
 1479              		.align	1
 1480              		.weak	_ZN8touchgfx15AbstractPainterD0Ev
 1481              		.syntax unified
 1482              		.thumb
 1483              		.thumb_func
 1484              		.fpu fpv4-sp-d16
 1486              	_ZN8touchgfx15AbstractPainterD0Ev:
 1487              	.LFB622:
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp ****     {
 1488              		.loc 4 51 13
 1489              		.cfi_startproc
 1490              		@ args = 0, pretend = 0, frame = 8
 1491              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 42


 1492 0000 80B5     		push	{r7, lr}
 1493              	.LCFI160:
 1494              		.cfi_def_cfa_offset 8
 1495              		.cfi_offset 7, -8
 1496              		.cfi_offset 14, -4
 1497 0002 82B0     		sub	sp, sp, #8
 1498              	.LCFI161:
 1499              		.cfi_def_cfa_offset 16
 1500 0004 00AF     		add	r7, sp, #0
 1501              	.LCFI162:
 1502              		.cfi_def_cfa_register 7
 1503 0006 7860     		str	r0, [r7, #4]
 1504              		.loc 4 53 5
 1505 0008 7868     		ldr	r0, [r7, #4]
 1506 000a FFF7FEFF 		bl	_ZN8touchgfx15AbstractPainterD1Ev
 1507 000e 0C21     		movs	r1, #12
 1508 0010 7868     		ldr	r0, [r7, #4]
 1509 0012 FFF7FEFF 		bl	_ZdlPvj
 1510 0016 7B68     		ldr	r3, [r7, #4]
 1511 0018 1846     		mov	r0, r3
 1512 001a 0837     		adds	r7, r7, #8
 1513              	.LCFI163:
 1514              		.cfi_def_cfa_offset 8
 1515 001c BD46     		mov	sp, r7
 1516              	.LCFI164:
 1517              		.cfi_def_cfa_register 13
 1518              		@ sp needed
 1519 001e 80BD     		pop	{r7, pc}
 1520              		.cfi_endproc
 1521              	.LFE622:
 1523              		.section	.text._ZN8touchgfx21AbstractPainterRGB565D2Ev,"axG",%progbits,_ZN8touchgfx21AbstractPaint
 1524              		.align	1
 1525              		.weak	_ZN8touchgfx21AbstractPainterRGB565D2Ev
 1526              		.syntax unified
 1527              		.thumb
 1528              		.thumb_func
 1529              		.fpu fpv4-sp-d16
 1531              	_ZN8touchgfx21AbstractPainterRGB565D2Ev:
 1532              	.LFB736:
 1533              		.file 5 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.h
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 43


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
 1534              		.loc 5 34 7
 1535              		.cfi_startproc
 1536              		@ args = 0, pretend = 0, frame = 8
 1537              		@ frame_needed = 1, uses_anonymous_args = 0
 1538 0000 80B5     		push	{r7, lr}
 1539              	.LCFI165:
 1540              		.cfi_def_cfa_offset 8
 1541              		.cfi_offset 7, -8
 1542              		.cfi_offset 14, -4
 1543 0002 82B0     		sub	sp, sp, #8
 1544              	.LCFI166:
 1545              		.cfi_def_cfa_offset 16
 1546 0004 00AF     		add	r7, sp, #0
 1547              	.LCFI167:
 1548              		.cfi_def_cfa_register 7
 1549 0006 7860     		str	r0, [r7, #4]
 1550              	.LBB6:
 1551              		.loc 5 34 7
 1552 0008 054A     		ldr	r2, .L55
 1553 000a 7B68     		ldr	r3, [r7, #4]
 1554 000c 1A60     		str	r2, [r3]
 1555 000e 7B68     		ldr	r3, [r7, #4]
 1556 0010 1846     		mov	r0, r3
 1557 0012 FFF7FEFF 		bl	_ZN8touchgfx15AbstractPainterD2Ev
 1558              	.LBE6:
 1559 0016 7B68     		ldr	r3, [r7, #4]
 1560 0018 1846     		mov	r0, r3
 1561 001a 0837     		adds	r7, r7, #8
 1562              	.LCFI168:
 1563              		.cfi_def_cfa_offset 8
 1564 001c BD46     		mov	sp, r7
 1565              	.LCFI169:
 1566              		.cfi_def_cfa_register 13
 1567              		@ sp needed
 1568 001e 80BD     		pop	{r7, pc}
 1569              	.L56:
 1570              		.align	2
 1571              	.L55:
 1572 0020 08000000 		.word	_ZTVN8touchgfx21AbstractPainterRGB565E+8
 1573              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 44


 1574              	.LFE736:
 1576              		.weak	_ZN8touchgfx21AbstractPainterRGB565D1Ev
 1577              		.thumb_set _ZN8touchgfx21AbstractPainterRGB565D1Ev,_ZN8touchgfx21AbstractPainterRGB565D2Ev
 1578              		.section	.text._ZN8touchgfx21AbstractPainterRGB565D0Ev,"axG",%progbits,_ZN8touchgfx21AbstractPaint
 1579              		.align	1
 1580              		.weak	_ZN8touchgfx21AbstractPainterRGB565D0Ev
 1581              		.syntax unified
 1582              		.thumb
 1583              		.thumb_func
 1584              		.fpu fpv4-sp-d16
 1586              	_ZN8touchgfx21AbstractPainterRGB565D0Ev:
 1587              	.LFB738:
 1588              		.loc 5 34 7
 1589              		.cfi_startproc
 1590              		@ args = 0, pretend = 0, frame = 8
 1591              		@ frame_needed = 1, uses_anonymous_args = 0
 1592 0000 80B5     		push	{r7, lr}
 1593              	.LCFI170:
 1594              		.cfi_def_cfa_offset 8
 1595              		.cfi_offset 7, -8
 1596              		.cfi_offset 14, -4
 1597 0002 82B0     		sub	sp, sp, #8
 1598              	.LCFI171:
 1599              		.cfi_def_cfa_offset 16
 1600 0004 00AF     		add	r7, sp, #0
 1601              	.LCFI172:
 1602              		.cfi_def_cfa_register 7
 1603 0006 7860     		str	r0, [r7, #4]
 1604              		.loc 5 34 7
 1605 0008 7868     		ldr	r0, [r7, #4]
 1606 000a FFF7FEFF 		bl	_ZN8touchgfx21AbstractPainterRGB565D1Ev
 1607 000e 1421     		movs	r1, #20
 1608 0010 7868     		ldr	r0, [r7, #4]
 1609 0012 FFF7FEFF 		bl	_ZdlPvj
 1610 0016 7B68     		ldr	r3, [r7, #4]
 1611 0018 1846     		mov	r0, r3
 1612 001a 0837     		adds	r7, r7, #8
 1613              	.LCFI173:
 1614              		.cfi_def_cfa_offset 8
 1615 001c BD46     		mov	sp, r7
 1616              	.LCFI174:
 1617              		.cfi_def_cfa_register 13
 1618              		@ sp needed
 1619 001e 80BD     		pop	{r7, pc}
 1620              		.cfi_endproc
 1621              	.LFE738:
 1623              		.section	.text._ZN8touchgfx4ViewI15screenPresenterED2Ev,"axG",%progbits,_ZN8touchgfx4ViewI15screen
 1624              		.align	1
 1625              		.weak	_ZN8touchgfx4ViewI15screenPresenterED2Ev
 1626              		.syntax unified
 1627              		.thumb
 1628              		.thumb_func
 1629              		.fpu fpv4-sp-d16
 1631              	_ZN8touchgfx4ViewI15screenPresenterED2Ev:
 1632              	.LFB745:
 1633              		.file 6 "Middlewares/ST/touchgfx/framework/include/mvp/View.hpp"
   1:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** /******************************************************************************
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 45


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
  29:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @tparam T The type of Presenter associated with this view.
  30:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  *
  31:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @see Screen
  32:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  *
  33:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @note All views in the application must be a subclass of this type.
  34:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  */
  35:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** template <class T>
  36:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** class View : public Screen
 1634              		.loc 6 36 7
 1635              		.cfi_startproc
 1636              		@ args = 0, pretend = 0, frame = 8
 1637              		@ frame_needed = 1, uses_anonymous_args = 0
 1638 0000 80B5     		push	{r7, lr}
 1639              	.LCFI175:
 1640              		.cfi_def_cfa_offset 8
 1641              		.cfi_offset 7, -8
 1642              		.cfi_offset 14, -4
 1643 0002 82B0     		sub	sp, sp, #8
 1644              	.LCFI176:
 1645              		.cfi_def_cfa_offset 16
 1646 0004 00AF     		add	r7, sp, #0
 1647              	.LCFI177:
 1648              		.cfi_def_cfa_register 7
 1649 0006 7860     		str	r0, [r7, #4]
 1650              	.LBB7:
 1651              		.loc 6 36 7
 1652 0008 054A     		ldr	r2, .L61
 1653 000a 7B68     		ldr	r3, [r7, #4]
 1654 000c 1A60     		str	r2, [r3]
 1655 000e 7B68     		ldr	r3, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 46


 1656 0010 1846     		mov	r0, r3
 1657 0012 FFF7FEFF 		bl	_ZN8touchgfx6ScreenD2Ev
 1658              	.LBE7:
 1659 0016 7B68     		ldr	r3, [r7, #4]
 1660 0018 1846     		mov	r0, r3
 1661 001a 0837     		adds	r7, r7, #8
 1662              	.LCFI178:
 1663              		.cfi_def_cfa_offset 8
 1664 001c BD46     		mov	sp, r7
 1665              	.LCFI179:
 1666              		.cfi_def_cfa_register 13
 1667              		@ sp needed
 1668 001e 80BD     		pop	{r7, pc}
 1669              	.L62:
 1670              		.align	2
 1671              	.L61:
 1672 0020 08000000 		.word	_ZTVN8touchgfx4ViewI15screenPresenterEE+8
 1673              		.cfi_endproc
 1674              	.LFE745:
 1676              		.weak	_ZN8touchgfx4ViewI15screenPresenterED1Ev
 1677              		.thumb_set _ZN8touchgfx4ViewI15screenPresenterED1Ev,_ZN8touchgfx4ViewI15screenPresenterED2Ev
 1678              		.section	.text._ZN8touchgfx4ViewI15screenPresenterED0Ev,"axG",%progbits,_ZN8touchgfx4ViewI15screen
 1679              		.align	1
 1680              		.weak	_ZN8touchgfx4ViewI15screenPresenterED0Ev
 1681              		.syntax unified
 1682              		.thumb
 1683              		.thumb_func
 1684              		.fpu fpv4-sp-d16
 1686              	_ZN8touchgfx4ViewI15screenPresenterED0Ev:
 1687              	.LFB747:
 1688              		.loc 6 36 7
 1689              		.cfi_startproc
 1690              		@ args = 0, pretend = 0, frame = 8
 1691              		@ frame_needed = 1, uses_anonymous_args = 0
 1692 0000 80B5     		push	{r7, lr}
 1693              	.LCFI180:
 1694              		.cfi_def_cfa_offset 8
 1695              		.cfi_offset 7, -8
 1696              		.cfi_offset 14, -4
 1697 0002 82B0     		sub	sp, sp, #8
 1698              	.LCFI181:
 1699              		.cfi_def_cfa_offset 16
 1700 0004 00AF     		add	r7, sp, #0
 1701              	.LCFI182:
 1702              		.cfi_def_cfa_register 7
 1703 0006 7860     		str	r0, [r7, #4]
 1704              		.loc 6 36 7
 1705 0008 7868     		ldr	r0, [r7, #4]
 1706 000a FFF7FEFF 		bl	_ZN8touchgfx4ViewI15screenPresenterED1Ev
 1707 000e 4021     		movs	r1, #64
 1708 0010 7868     		ldr	r0, [r7, #4]
 1709 0012 FFF7FEFF 		bl	_ZdlPvj
 1710 0016 7B68     		ldr	r3, [r7, #4]
 1711 0018 1846     		mov	r0, r3
 1712 001a 0837     		adds	r7, r7, #8
 1713              	.LCFI183:
 1714              		.cfi_def_cfa_offset 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 47


 1715 001c BD46     		mov	sp, r7
 1716              	.LCFI184:
 1717              		.cfi_def_cfa_register 13
 1718              		@ sp needed
 1719 001e 80BD     		pop	{r7, pc}
 1720              		.cfi_endproc
 1721              	.LFE747:
 1723              		.section	.text._ZN14screenViewBaseD2Ev,"axG",%progbits,_ZN14screenViewBaseD5Ev,comdat
 1724              		.align	1
 1725              		.weak	_ZN14screenViewBaseD2Ev
 1726              		.syntax unified
 1727              		.thumb
 1728              		.thumb_func
 1729              		.fpu fpv4-sp-d16
 1731              	_ZN14screenViewBaseD2Ev:
 1732              	.LFB748:
 1733              		.file 7 "Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp"
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
  11:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <touchgfx/containers/ScrollableContainer.hpp>
  12:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <touchgfx/widgets/canvas/Circle.hpp>
  13:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** #include <touchgfx/widgets/canvas/PainterRGB565.hpp>
  14:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** 
  15:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** class screenViewBase : public touchgfx::View<screenPresenter>
  16:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** {
  17:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp **** public:
  18:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp ****     screenViewBase();
  19:Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp ****     virtual ~screenViewBase() {}
 1734              		.loc 7 19 13
 1735              		.cfi_startproc
 1736              		@ args = 0, pretend = 0, frame = 8
 1737              		@ frame_needed = 1, uses_anonymous_args = 0
 1738 0000 80B5     		push	{r7, lr}
 1739              	.LCFI185:
 1740              		.cfi_def_cfa_offset 8
 1741              		.cfi_offset 7, -8
 1742              		.cfi_offset 14, -4
 1743 0002 82B0     		sub	sp, sp, #8
 1744              	.LCFI186:
 1745              		.cfi_def_cfa_offset 16
 1746 0004 00AF     		add	r7, sp, #0
 1747              	.LCFI187:
 1748              		.cfi_def_cfa_register 7
 1749 0006 7860     		str	r0, [r7, #4]
 1750              	.LBB8:
 1751              		.loc 7 19 31
 1752 0008 104A     		ldr	r2, .L67
 1753 000a 7B68     		ldr	r3, [r7, #4]
 1754 000c 1A60     		str	r2, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 48


 1755 000e 7B68     		ldr	r3, [r7, #4]
 1756 0010 03F5BA73 		add	r3, r3, #372
 1757 0014 1846     		mov	r0, r3
 1758 0016 FFF7FEFF 		bl	_ZN8touchgfx13PainterRGB565D1Ev
 1759 001a 7B68     		ldr	r3, [r7, #4]
 1760 001c 03F59473 		add	r3, r3, #296
 1761 0020 1846     		mov	r0, r3
 1762 0022 FFF7FEFF 		bl	_ZN8touchgfx6CircleD1Ev
 1763 0026 7B68     		ldr	r3, [r7, #4]
 1764 0028 6C33     		adds	r3, r3, #108
 1765 002a 1846     		mov	r0, r3
 1766 002c FFF7FEFF 		bl	_ZN8touchgfx19ScrollableContainerD1Ev
 1767 0030 7B68     		ldr	r3, [r7, #4]
 1768 0032 4033     		adds	r3, r3, #64
 1769 0034 1846     		mov	r0, r3
 1770 0036 FFF7FEFF 		bl	_ZN8touchgfx3BoxD1Ev
 1771 003a 7B68     		ldr	r3, [r7, #4]
 1772 003c 1846     		mov	r0, r3
 1773 003e FFF7FEFF 		bl	_ZN8touchgfx4ViewI15screenPresenterED2Ev
 1774              	.LBE8:
 1775              		.loc 7 19 32
 1776 0042 7B68     		ldr	r3, [r7, #4]
 1777 0044 1846     		mov	r0, r3
 1778 0046 0837     		adds	r7, r7, #8
 1779              	.LCFI188:
 1780              		.cfi_def_cfa_offset 8
 1781 0048 BD46     		mov	sp, r7
 1782              	.LCFI189:
 1783              		.cfi_def_cfa_register 13
 1784              		@ sp needed
 1785 004a 80BD     		pop	{r7, pc}
 1786              	.L68:
 1787              		.align	2
 1788              	.L67:
 1789 004c 08000000 		.word	_ZTV14screenViewBase+8
 1790              		.cfi_endproc
 1791              	.LFE748:
 1793              		.weak	_ZN14screenViewBaseD1Ev
 1794              		.thumb_set _ZN14screenViewBaseD1Ev,_ZN14screenViewBaseD2Ev
 1795              		.section	.text._ZN14screenViewBaseD0Ev,"axG",%progbits,_ZN14screenViewBaseD5Ev,comdat
 1796              		.align	1
 1797              		.weak	_ZN14screenViewBaseD0Ev
 1798              		.syntax unified
 1799              		.thumb
 1800              		.thumb_func
 1801              		.fpu fpv4-sp-d16
 1803              	_ZN14screenViewBaseD0Ev:
 1804              	.LFB750:
 1805              		.loc 7 19 13
 1806              		.cfi_startproc
 1807              		@ args = 0, pretend = 0, frame = 8
 1808              		@ frame_needed = 1, uses_anonymous_args = 0
 1809 0000 80B5     		push	{r7, lr}
 1810              	.LCFI190:
 1811              		.cfi_def_cfa_offset 8
 1812              		.cfi_offset 7, -8
 1813              		.cfi_offset 14, -4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 49


 1814 0002 82B0     		sub	sp, sp, #8
 1815              	.LCFI191:
 1816              		.cfi_def_cfa_offset 16
 1817 0004 00AF     		add	r7, sp, #0
 1818              	.LCFI192:
 1819              		.cfi_def_cfa_register 7
 1820 0006 7860     		str	r0, [r7, #4]
 1821              		.loc 7 19 32
 1822 0008 7868     		ldr	r0, [r7, #4]
 1823 000a FFF7FEFF 		bl	_ZN14screenViewBaseD1Ev
 1824 000e 41F24C41 		movw	r1, #5196
 1825 0012 7868     		ldr	r0, [r7, #4]
 1826 0014 FFF7FEFF 		bl	_ZdlPvj
 1827 0018 7B68     		ldr	r3, [r7, #4]
 1828 001a 1846     		mov	r0, r3
 1829 001c 0837     		adds	r7, r7, #8
 1830              	.LCFI193:
 1831              		.cfi_def_cfa_offset 8
 1832 001e BD46     		mov	sp, r7
 1833              	.LCFI194:
 1834              		.cfi_def_cfa_register 13
 1835              		@ sp needed
 1836 0020 80BD     		pop	{r7, pc}
 1837              		.cfi_endproc
 1838              	.LFE750:
 1840              		.section	.text._ZN10screenViewD2Ev,"axG",%progbits,_ZN10screenViewD5Ev,comdat
 1841              		.align	1
 1842              		.weak	_ZN10screenViewD2Ev
 1843              		.syntax unified
 1844              		.thumb
 1845              		.thumb_func
 1846              		.fpu fpv4-sp-d16
 1848              	_ZN10screenViewD2Ev:
 1849              	.LFB753:
 1850              		.file 8 "Src/gui/include/gui/screen_screen/screenView.hpp"
   1:Src/gui/include/gui/screen_screen/screenView.hpp **** #ifndef SCREENVIEW_HPP
   2:Src/gui/include/gui/screen_screen/screenView.hpp **** #define SCREENVIEW_HPP
   3:Src/gui/include/gui/screen_screen/screenView.hpp **** 
   4:Src/gui/include/gui/screen_screen/screenView.hpp **** #include <gui_generated/screen_screen/screenViewBase.hpp>
   5:Src/gui/include/gui/screen_screen/screenView.hpp **** #include <gui/screen_screen/screenPresenter.hpp>
   6:Src/gui/include/gui/screen_screen/screenView.hpp **** 
   7:Src/gui/include/gui/screen_screen/screenView.hpp **** class screenView : public screenViewBase
   8:Src/gui/include/gui/screen_screen/screenView.hpp **** {
   9:Src/gui/include/gui/screen_screen/screenView.hpp **** public:
  10:Src/gui/include/gui/screen_screen/screenView.hpp ****     screenView();
  11:Src/gui/include/gui/screen_screen/screenView.hpp ****     virtual ~screenView() {}
 1851              		.loc 8 11 13
 1852              		.cfi_startproc
 1853              		@ args = 0, pretend = 0, frame = 8
 1854              		@ frame_needed = 1, uses_anonymous_args = 0
 1855 0000 80B5     		push	{r7, lr}
 1856              	.LCFI195:
 1857              		.cfi_def_cfa_offset 8
 1858              		.cfi_offset 7, -8
 1859              		.cfi_offset 14, -4
 1860 0002 82B0     		sub	sp, sp, #8
 1861              	.LCFI196:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 50


 1862              		.cfi_def_cfa_offset 16
 1863 0004 00AF     		add	r7, sp, #0
 1864              	.LCFI197:
 1865              		.cfi_def_cfa_register 7
 1866 0006 7860     		str	r0, [r7, #4]
 1867              	.LBB9:
 1868              		.loc 8 11 27
 1869 0008 054A     		ldr	r2, .L73
 1870 000a 7B68     		ldr	r3, [r7, #4]
 1871 000c 1A60     		str	r2, [r3]
 1872 000e 7B68     		ldr	r3, [r7, #4]
 1873 0010 1846     		mov	r0, r3
 1874 0012 FFF7FEFF 		bl	_ZN14screenViewBaseD2Ev
 1875              	.LBE9:
 1876              		.loc 8 11 28
 1877 0016 7B68     		ldr	r3, [r7, #4]
 1878 0018 1846     		mov	r0, r3
 1879 001a 0837     		adds	r7, r7, #8
 1880              	.LCFI198:
 1881              		.cfi_def_cfa_offset 8
 1882 001c BD46     		mov	sp, r7
 1883              	.LCFI199:
 1884              		.cfi_def_cfa_register 13
 1885              		@ sp needed
 1886 001e 80BD     		pop	{r7, pc}
 1887              	.L74:
 1888              		.align	2
 1889              	.L73:
 1890 0020 08000000 		.word	_ZTV10screenView+8
 1891              		.cfi_endproc
 1892              	.LFE753:
 1894              		.weak	_ZN10screenViewD1Ev
 1895              		.thumb_set _ZN10screenViewD1Ev,_ZN10screenViewD2Ev
 1896              		.section	.text._ZN10screenViewD0Ev,"axG",%progbits,_ZN10screenViewD5Ev,comdat
 1897              		.align	1
 1898              		.weak	_ZN10screenViewD0Ev
 1899              		.syntax unified
 1900              		.thumb
 1901              		.thumb_func
 1902              		.fpu fpv4-sp-d16
 1904              	_ZN10screenViewD0Ev:
 1905              	.LFB755:
 1906              		.loc 8 11 13
 1907              		.cfi_startproc
 1908              		@ args = 0, pretend = 0, frame = 8
 1909              		@ frame_needed = 1, uses_anonymous_args = 0
 1910 0000 80B5     		push	{r7, lr}
 1911              	.LCFI200:
 1912              		.cfi_def_cfa_offset 8
 1913              		.cfi_offset 7, -8
 1914              		.cfi_offset 14, -4
 1915 0002 82B0     		sub	sp, sp, #8
 1916              	.LCFI201:
 1917              		.cfi_def_cfa_offset 16
 1918 0004 00AF     		add	r7, sp, #0
 1919              	.LCFI202:
 1920              		.cfi_def_cfa_register 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 51


 1921 0006 7860     		str	r0, [r7, #4]
 1922              		.loc 8 11 28
 1923 0008 7868     		ldr	r0, [r7, #4]
 1924 000a FFF7FEFF 		bl	_ZN10screenViewD1Ev
 1925 000e 41F24C41 		movw	r1, #5196
 1926 0012 7868     		ldr	r0, [r7, #4]
 1927 0014 FFF7FEFF 		bl	_ZdlPvj
 1928 0018 7B68     		ldr	r3, [r7, #4]
 1929 001a 1846     		mov	r0, r3
 1930 001c 0837     		adds	r7, r7, #8
 1931              	.LCFI203:
 1932              		.cfi_def_cfa_offset 8
 1933 001e BD46     		mov	sp, r7
 1934              	.LCFI204:
 1935              		.cfi_def_cfa_register 13
 1936              		@ sp needed
 1937 0020 80BD     		pop	{r7, pc}
 1938              		.cfi_endproc
 1939              	.LFE755:
 1941              		.section	.text._ZN10screenViewC2Ev,"ax",%progbits
 1942              		.align	1
 1943              		.global	_ZN10screenViewC2Ev
 1944              		.syntax unified
 1945              		.thumb
 1946              		.thumb_func
 1947              		.fpu fpv4-sp-d16
 1949              	_ZN10screenViewC2Ev:
 1950              	.LFB757:
 1951              		.file 9 "Src/gui/src/screen_screen/screenView.cpp"
   1:Src/gui/src/screen_screen/screenView.cpp **** #include <gui/screen_screen/screenView.hpp>
   2:Src/gui/src/screen_screen/screenView.cpp **** 
   3:Src/gui/src/screen_screen/screenView.cpp **** screenView::screenView()
 1952              		.loc 9 3 1
 1953              		.cfi_startproc
 1954              		@ args = 0, pretend = 0, frame = 8
 1955              		@ frame_needed = 1, uses_anonymous_args = 0
 1956 0000 80B5     		push	{r7, lr}
 1957              	.LCFI205:
 1958              		.cfi_def_cfa_offset 8
 1959              		.cfi_offset 7, -8
 1960              		.cfi_offset 14, -4
 1961 0002 82B0     		sub	sp, sp, #8
 1962              	.LCFI206:
 1963              		.cfi_def_cfa_offset 16
 1964 0004 00AF     		add	r7, sp, #0
 1965              	.LCFI207:
 1966              		.cfi_def_cfa_register 7
 1967 0006 7860     		str	r0, [r7, #4]
 1968              	.LBB10:
 1969              		.loc 9 3 24
 1970 0008 7B68     		ldr	r3, [r7, #4]
 1971 000a 1846     		mov	r0, r3
 1972 000c FFF7FEFF 		bl	_ZN14screenViewBaseC2Ev
 1973 0010 034A     		ldr	r2, .L79
 1974 0012 7B68     		ldr	r3, [r7, #4]
 1975 0014 1A60     		str	r2, [r3]
 1976              	.LBE10:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 52


   4:Src/gui/src/screen_screen/screenView.cpp **** {
   5:Src/gui/src/screen_screen/screenView.cpp **** 
   6:Src/gui/src/screen_screen/screenView.cpp **** }
 1977              		.loc 9 6 1
 1978 0016 7B68     		ldr	r3, [r7, #4]
 1979 0018 1846     		mov	r0, r3
 1980 001a 0837     		adds	r7, r7, #8
 1981              	.LCFI208:
 1982              		.cfi_def_cfa_offset 8
 1983 001c BD46     		mov	sp, r7
 1984              	.LCFI209:
 1985              		.cfi_def_cfa_register 13
 1986              		@ sp needed
 1987 001e 80BD     		pop	{r7, pc}
 1988              	.L80:
 1989              		.align	2
 1990              	.L79:
 1991 0020 08000000 		.word	_ZTV10screenView+8
 1992              		.cfi_endproc
 1993              	.LFE757:
 1995              		.global	_ZN10screenViewC1Ev
 1996              		.thumb_set _ZN10screenViewC1Ev,_ZN10screenViewC2Ev
 1997              		.section	.text._ZN10screenView11setupScreenEv,"ax",%progbits
 1998              		.align	1
 1999              		.global	_ZN10screenView11setupScreenEv
 2000              		.syntax unified
 2001              		.thumb
 2002              		.thumb_func
 2003              		.fpu fpv4-sp-d16
 2005              	_ZN10screenView11setupScreenEv:
 2006              	.LFB759:
   7:Src/gui/src/screen_screen/screenView.cpp **** 
   8:Src/gui/src/screen_screen/screenView.cpp **** void screenView::setupScreen()
   9:Src/gui/src/screen_screen/screenView.cpp **** {
 2007              		.loc 9 9 1
 2008              		.cfi_startproc
 2009              		@ args = 0, pretend = 0, frame = 8
 2010              		@ frame_needed = 1, uses_anonymous_args = 0
 2011 0000 80B5     		push	{r7, lr}
 2012              	.LCFI210:
 2013              		.cfi_def_cfa_offset 8
 2014              		.cfi_offset 7, -8
 2015              		.cfi_offset 14, -4
 2016 0002 82B0     		sub	sp, sp, #8
 2017              	.LCFI211:
 2018              		.cfi_def_cfa_offset 16
 2019 0004 00AF     		add	r7, sp, #0
 2020              	.LCFI212:
 2021              		.cfi_def_cfa_register 7
 2022 0006 7860     		str	r0, [r7, #4]
  10:Src/gui/src/screen_screen/screenView.cpp ****     screenViewBase::setupScreen();
 2023              		.loc 9 10 32
 2024 0008 7B68     		ldr	r3, [r7, #4]
 2025 000a 1846     		mov	r0, r3
 2026 000c FFF7FEFF 		bl	_ZN14screenViewBase11setupScreenEv
  11:Src/gui/src/screen_screen/screenView.cpp **** }
 2027              		.loc 9 11 1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 53


 2028 0010 00BF     		nop
 2029 0012 0837     		adds	r7, r7, #8
 2030              	.LCFI213:
 2031              		.cfi_def_cfa_offset 8
 2032 0014 BD46     		mov	sp, r7
 2033              	.LCFI214:
 2034              		.cfi_def_cfa_register 13
 2035              		@ sp needed
 2036 0016 80BD     		pop	{r7, pc}
 2037              		.cfi_endproc
 2038              	.LFE759:
 2040              		.section	.text._ZN10screenView14tearDownScreenEv,"ax",%progbits
 2041              		.align	1
 2042              		.global	_ZN10screenView14tearDownScreenEv
 2043              		.syntax unified
 2044              		.thumb
 2045              		.thumb_func
 2046              		.fpu fpv4-sp-d16
 2048              	_ZN10screenView14tearDownScreenEv:
 2049              	.LFB760:
  12:Src/gui/src/screen_screen/screenView.cpp **** 
  13:Src/gui/src/screen_screen/screenView.cpp **** void screenView::tearDownScreen()
  14:Src/gui/src/screen_screen/screenView.cpp **** {
 2050              		.loc 9 14 1
 2051              		.cfi_startproc
 2052              		@ args = 0, pretend = 0, frame = 8
 2053              		@ frame_needed = 1, uses_anonymous_args = 0
 2054 0000 80B5     		push	{r7, lr}
 2055              	.LCFI215:
 2056              		.cfi_def_cfa_offset 8
 2057              		.cfi_offset 7, -8
 2058              		.cfi_offset 14, -4
 2059 0002 82B0     		sub	sp, sp, #8
 2060              	.LCFI216:
 2061              		.cfi_def_cfa_offset 16
 2062 0004 00AF     		add	r7, sp, #0
 2063              	.LCFI217:
 2064              		.cfi_def_cfa_register 7
 2065 0006 7860     		str	r0, [r7, #4]
  15:Src/gui/src/screen_screen/screenView.cpp ****     screenViewBase::tearDownScreen();
 2066              		.loc 9 15 35
 2067 0008 7B68     		ldr	r3, [r7, #4]
 2068 000a 1846     		mov	r0, r3
 2069 000c FFF7FEFF 		bl	_ZN8touchgfx6Screen14tearDownScreenEv
  16:Src/gui/src/screen_screen/screenView.cpp **** }
 2070              		.loc 9 16 1
 2071 0010 00BF     		nop
 2072 0012 0837     		adds	r7, r7, #8
 2073              	.LCFI218:
 2074              		.cfi_def_cfa_offset 8
 2075 0014 BD46     		mov	sp, r7
 2076              	.LCFI219:
 2077              		.cfi_def_cfa_register 13
 2078              		@ sp needed
 2079 0016 80BD     		pop	{r7, pc}
 2080              		.cfi_endproc
 2081              	.LFE760:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 54


 2083              		.global	_ZTV10screenView
 2084              		.section	.rodata._ZTV10screenView,"a"
 2085              		.align	2
 2088              	_ZTV10screenView:
 2089 0000 00000000 		.word	0
 2090 0004 00000000 		.word	0
 2091 0008 00000000 		.word	_ZN10screenViewD1Ev
 2092 000c 00000000 		.word	_ZN10screenViewD0Ev
 2093 0010 00000000 		.word	_ZN8touchgfx6Screen4drawERNS_4RectE
 2094 0014 00000000 		.word	_ZN10screenView11setupScreenEv
 2095 0018 00000000 		.word	_ZN8touchgfx6Screen15afterTransitionEv
 2096 001c 00000000 		.word	_ZN10screenView14tearDownScreenEv
 2097 0020 00000000 		.word	_ZN8touchgfx6Screen16handleClickEventERKNS_10ClickEventE
 2098 0024 00000000 		.word	_ZN8touchgfx6Screen15handleDragEventERKNS_9DragEventE
 2099 0028 00000000 		.word	_ZN8touchgfx6Screen18handleGestureEventERKNS_12GestureEventE
 2100 002c 00000000 		.word	_ZN8touchgfx6Screen15handleTickEventEv
 2101 0030 00000000 		.word	_ZN8touchgfx6Screen14handleKeyEventEh
 2102              		.weak	_ZTVN8touchgfx4ViewI15screenPresenterEE
 2103              		.section	.rodata._ZTVN8touchgfx4ViewI15screenPresenterEE,"aG",%progbits,_ZTVN8touchgfx4ViewI15scre
 2104              		.align	2
 2107              	_ZTVN8touchgfx4ViewI15screenPresenterEE:
 2108 0000 00000000 		.word	0
 2109 0004 00000000 		.word	0
 2110 0008 00000000 		.word	_ZN8touchgfx4ViewI15screenPresenterED1Ev
 2111 000c 00000000 		.word	_ZN8touchgfx4ViewI15screenPresenterED0Ev
 2112 0010 00000000 		.word	_ZN8touchgfx6Screen4drawERNS_4RectE
 2113 0014 00000000 		.word	_ZN8touchgfx6Screen11setupScreenEv
 2114 0018 00000000 		.word	_ZN8touchgfx6Screen15afterTransitionEv
 2115 001c 00000000 		.word	_ZN8touchgfx6Screen14tearDownScreenEv
 2116 0020 00000000 		.word	_ZN8touchgfx6Screen16handleClickEventERKNS_10ClickEventE
 2117 0024 00000000 		.word	_ZN8touchgfx6Screen15handleDragEventERKNS_9DragEventE
 2118 0028 00000000 		.word	_ZN8touchgfx6Screen18handleGestureEventERKNS_12GestureEventE
 2119 002c 00000000 		.word	_ZN8touchgfx6Screen15handleTickEventEv
 2120 0030 00000000 		.word	_ZN8touchgfx6Screen14handleKeyEventEh
 2121              		.weak	_ZTVN8touchgfx15AbstractPainterE
 2122              		.section	.rodata._ZTVN8touchgfx15AbstractPainterE,"aG",%progbits,_ZTVN8touchgfx15AbstractPainterE,
 2123              		.align	2
 2126              	_ZTVN8touchgfx15AbstractPainterE:
 2127 0000 00000000 		.word	0
 2128 0004 00000000 		.word	0
 2129 0008 00000000 		.word	0
 2130 000c 00000000 		.word	0
 2131 0010 00000000 		.word	__cxa_pure_virtual
 2132              		.weak	_ZTVN8touchgfx6WidgetE
 2133              		.section	.rodata._ZTVN8touchgfx6WidgetE,"aG",%progbits,_ZTVN8touchgfx6WidgetE,comdat
 2134              		.align	2
 2137              	_ZTVN8touchgfx6WidgetE:
 2138 0000 00000000 		.word	0
 2139 0004 00000000 		.word	0
 2140 0008 00000000 		.word	0
 2141 000c 00000000 		.word	0
 2142 0010 00000000 		.word	__cxa_pure_virtual
 2143 0014 00000000 		.word	__cxa_pure_virtual
 2144 0018 00000000 		.word	_ZNK8touchgfx8Drawable14invalidateRectERNS_4RectE
 2145 001c 00000000 		.word	_ZNK8touchgfx8Drawable10invalidateEv
 2146 0020 00000000 		.word	_ZN8touchgfx8Drawable13getFirstChildEv
 2147 0024 00000000 		.word	_ZN8touchgfx8Drawable20getSolidRectAbsoluteEv
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 55


 2148 0028 00000000 		.word	_ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE
 2149 002c 00000000 		.word	_ZNK8touchgfx8Drawable14getVisibleRectERNS_4RectE
 2150 0030 00000000 		.word	_ZNK8touchgfx8Drawable23translateRectToAbsoluteERNS_4RectE
 2151 0034 00000000 		.word	_ZN8touchgfx8Drawable4setXEs
 2152 0038 00000000 		.word	_ZN8touchgfx8Drawable4setYEs
 2153 003c 00000000 		.word	_ZN8touchgfx8Drawable8setWidthEs
 2154 0040 00000000 		.word	_ZN8touchgfx8Drawable9setHeightEs
 2155 0044 00000000 		.word	_ZN8touchgfx8Drawable20childGeometryChangedEv
 2156 0048 00000000 		.word	_ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE
 2157 004c 00000000 		.word	_ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE
 2158 0050 00000000 		.word	_ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE
 2159 0054 00000000 		.word	_ZN8touchgfx8Drawable15handleTickEventEv
 2160 0058 00000000 		.word	_ZN8touchgfx8Drawable12moveRelativeEss
 2161 005c 00000000 		.word	_ZN8touchgfx8Drawable6moveToEss
 2162 0060 00000000 		.word	_ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_
 2163              		.section	.text._ZN8touchgfx9ContainerD2Ev,"axG",%progbits,_ZN8touchgfx9ContainerD5Ev,comdat
 2164              		.align	1
 2165              		.weak	_ZN8touchgfx9ContainerD2Ev
 2166              		.syntax unified
 2167              		.thumb
 2168              		.thumb_func
 2169              		.fpu fpv4-sp-d16
 2171              	_ZN8touchgfx9ContainerD2Ev:
 2172              	.LFB784:
 2173              		.file 10 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 56


  33:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  *
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * Note that containers act as view ports - that is, only the parts of children that
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * intersect with the geometry of the container will be visible (e.g. setting a
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * container's width to 0 will render all children invisible).
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  *
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  * @see Drawable
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp ****  */
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp **** class Container : public Drawable
 2174              		.loc 10 40 7
 2175              		.cfi_startproc
 2176              		@ args = 0, pretend = 0, frame = 8
 2177              		@ frame_needed = 1, uses_anonymous_args = 0
 2178 0000 80B5     		push	{r7, lr}
 2179              	.LCFI220:
 2180              		.cfi_def_cfa_offset 8
 2181              		.cfi_offset 7, -8
 2182              		.cfi_offset 14, -4
 2183 0002 82B0     		sub	sp, sp, #8
 2184              	.LCFI221:
 2185              		.cfi_def_cfa_offset 16
 2186 0004 00AF     		add	r7, sp, #0
 2187              	.LCFI222:
 2188              		.cfi_def_cfa_register 7
 2189 0006 7860     		str	r0, [r7, #4]
 2190              	.LBB11:
 2191              		.loc 10 40 7
 2192 0008 054A     		ldr	r2, .L85
 2193 000a 7B68     		ldr	r3, [r7, #4]
 2194 000c 1A60     		str	r2, [r3]
 2195 000e 7B68     		ldr	r3, [r7, #4]
 2196 0010 1846     		mov	r0, r3
 2197 0012 FFF7FEFF 		bl	_ZN8touchgfx8DrawableD2Ev
 2198              	.LBE11:
 2199 0016 7B68     		ldr	r3, [r7, #4]
 2200 0018 1846     		mov	r0, r3
 2201 001a 0837     		adds	r7, r7, #8
 2202              	.LCFI223:
 2203              		.cfi_def_cfa_offset 8
 2204 001c BD46     		mov	sp, r7
 2205              	.LCFI224:
 2206              		.cfi_def_cfa_register 13
 2207              		@ sp needed
 2208 001e 80BD     		pop	{r7, pc}
 2209              	.L86:
 2210              		.align	2
 2211              	.L85:
 2212 0020 08000000 		.word	_ZTVN8touchgfx9ContainerE+8
 2213              		.cfi_endproc
 2214              	.LFE784:
 2216              		.weak	_ZN8touchgfx9ContainerD1Ev
 2217              		.thumb_set _ZN8touchgfx9ContainerD1Ev,_ZN8touchgfx9ContainerD2Ev
 2218              		.section	.text._ZN8touchgfx9ContainerD0Ev,"axG",%progbits,_ZN8touchgfx9ContainerD5Ev,comdat
 2219              		.align	1
 2220              		.weak	_ZN8touchgfx9ContainerD0Ev
 2221              		.syntax unified
 2222              		.thumb
 2223              		.thumb_func
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 57


 2224              		.fpu fpv4-sp-d16
 2226              	_ZN8touchgfx9ContainerD0Ev:
 2227              	.LFB786:
 2228              		.loc 10 40 7
 2229              		.cfi_startproc
 2230              		@ args = 0, pretend = 0, frame = 8
 2231              		@ frame_needed = 1, uses_anonymous_args = 0
 2232 0000 80B5     		push	{r7, lr}
 2233              	.LCFI225:
 2234              		.cfi_def_cfa_offset 8
 2235              		.cfi_offset 7, -8
 2236              		.cfi_offset 14, -4
 2237 0002 82B0     		sub	sp, sp, #8
 2238              	.LCFI226:
 2239              		.cfi_def_cfa_offset 16
 2240 0004 00AF     		add	r7, sp, #0
 2241              	.LCFI227:
 2242              		.cfi_def_cfa_register 7
 2243 0006 7860     		str	r0, [r7, #4]
 2244              		.loc 10 40 7
 2245 0008 7868     		ldr	r0, [r7, #4]
 2246 000a FFF7FEFF 		bl	_ZN8touchgfx9ContainerD1Ev
 2247 000e 2C21     		movs	r1, #44
 2248 0010 7868     		ldr	r0, [r7, #4]
 2249 0012 FFF7FEFF 		bl	_ZdlPvj
 2250 0016 7B68     		ldr	r3, [r7, #4]
 2251 0018 1846     		mov	r0, r3
 2252 001a 0837     		adds	r7, r7, #8
 2253              	.LCFI228:
 2254              		.cfi_def_cfa_offset 8
 2255 001c BD46     		mov	sp, r7
 2256              	.LCFI229:
 2257              		.cfi_def_cfa_register 13
 2258              		@ sp needed
 2259 001e 80BD     		pop	{r7, pc}
 2260              		.cfi_endproc
 2261              	.LFE786:
 2263              		.section	.text._ZN8touchgfx3BoxD2Ev,"axG",%progbits,_ZN8touchgfx3BoxD5Ev,comdat
 2264              		.align	1
 2265              		.weak	_ZN8touchgfx3BoxD2Ev
 2266              		.syntax unified
 2267              		.thumb
 2268              		.thumb_func
 2269              		.fpu fpv4-sp-d16
 2271              	_ZN8touchgfx3BoxD2Ev:
 2272              	.LFB792:
 2273              		.file 11 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 58


  11:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp **** *******************************************************************************/
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
 2274              		.loc 11 29 7
 2275              		.cfi_startproc
 2276              		@ args = 0, pretend = 0, frame = 8
 2277              		@ frame_needed = 1, uses_anonymous_args = 0
 2278 0000 80B5     		push	{r7, lr}
 2279              	.LCFI230:
 2280              		.cfi_def_cfa_offset 8
 2281              		.cfi_offset 7, -8
 2282              		.cfi_offset 14, -4
 2283 0002 82B0     		sub	sp, sp, #8
 2284              	.LCFI231:
 2285              		.cfi_def_cfa_offset 16
 2286 0004 00AF     		add	r7, sp, #0
 2287              	.LCFI232:
 2288              		.cfi_def_cfa_register 7
 2289 0006 7860     		str	r0, [r7, #4]
 2290              	.LBB12:
 2291              		.loc 11 29 7
 2292 0008 054A     		ldr	r2, .L91
 2293 000a 7B68     		ldr	r3, [r7, #4]
 2294 000c 1A60     		str	r2, [r3]
 2295 000e 7B68     		ldr	r3, [r7, #4]
 2296 0010 1846     		mov	r0, r3
 2297 0012 FFF7FEFF 		bl	_ZN8touchgfx6WidgetD2Ev
 2298              	.LBE12:
 2299 0016 7B68     		ldr	r3, [r7, #4]
 2300 0018 1846     		mov	r0, r3
 2301 001a 0837     		adds	r7, r7, #8
 2302              	.LCFI233:
 2303              		.cfi_def_cfa_offset 8
 2304 001c BD46     		mov	sp, r7
 2305              	.LCFI234:
 2306              		.cfi_def_cfa_register 13
 2307              		@ sp needed
 2308 001e 80BD     		pop	{r7, pc}
 2309              	.L92:
 2310              		.align	2
 2311              	.L91:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 59


 2312 0020 08000000 		.word	_ZTVN8touchgfx3BoxE+8
 2313              		.cfi_endproc
 2314              	.LFE792:
 2316              		.weak	_ZN8touchgfx3BoxD1Ev
 2317              		.thumb_set _ZN8touchgfx3BoxD1Ev,_ZN8touchgfx3BoxD2Ev
 2318              		.section	.text._ZN8touchgfx3BoxD0Ev,"axG",%progbits,_ZN8touchgfx3BoxD5Ev,comdat
 2319              		.align	1
 2320              		.weak	_ZN8touchgfx3BoxD0Ev
 2321              		.syntax unified
 2322              		.thumb
 2323              		.thumb_func
 2324              		.fpu fpv4-sp-d16
 2326              	_ZN8touchgfx3BoxD0Ev:
 2327              	.LFB794:
 2328              		.loc 11 29 7
 2329              		.cfi_startproc
 2330              		@ args = 0, pretend = 0, frame = 8
 2331              		@ frame_needed = 1, uses_anonymous_args = 0
 2332 0000 80B5     		push	{r7, lr}
 2333              	.LCFI235:
 2334              		.cfi_def_cfa_offset 8
 2335              		.cfi_offset 7, -8
 2336              		.cfi_offset 14, -4
 2337 0002 82B0     		sub	sp, sp, #8
 2338              	.LCFI236:
 2339              		.cfi_def_cfa_offset 16
 2340 0004 00AF     		add	r7, sp, #0
 2341              	.LCFI237:
 2342              		.cfi_def_cfa_register 7
 2343 0006 7860     		str	r0, [r7, #4]
 2344              		.loc 11 29 7
 2345 0008 7868     		ldr	r0, [r7, #4]
 2346 000a FFF7FEFF 		bl	_ZN8touchgfx3BoxD1Ev
 2347 000e 2C21     		movs	r1, #44
 2348 0010 7868     		ldr	r0, [r7, #4]
 2349 0012 FFF7FEFF 		bl	_ZdlPvj
 2350 0016 7B68     		ldr	r3, [r7, #4]
 2351 0018 1846     		mov	r0, r3
 2352 001a 0837     		adds	r7, r7, #8
 2353              	.LCFI238:
 2354              		.cfi_def_cfa_offset 8
 2355 001c BD46     		mov	sp, r7
 2356              	.LCFI239:
 2357              		.cfi_def_cfa_register 13
 2358              		@ sp needed
 2359 001e 80BD     		pop	{r7, pc}
 2360              		.cfi_endproc
 2361              	.LFE794:
 2363              		.section	.text._ZN8touchgfx19ScrollableContainerD2Ev,"axG",%progbits,_ZN8touchgfx19ScrollableConta
 2364              		.align	1
 2365              		.weak	_ZN8touchgfx19ScrollableContainerD2Ev
 2366              		.syntax unified
 2367              		.thumb
 2368              		.thumb_func
 2369              		.fpu fpv4-sp-d16
 2371              	_ZN8touchgfx19ScrollableContainerD2Ev:
 2372              	.LFB796:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 60


 2373              		.file 12 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp"
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
 2374              		.loc 12 46 7
 2375              		.cfi_startproc
 2376              		@ args = 0, pretend = 0, frame = 8
 2377              		@ frame_needed = 1, uses_anonymous_args = 0
 2378 0000 80B5     		push	{r7, lr}
 2379              	.LCFI240:
 2380              		.cfi_def_cfa_offset 8
 2381              		.cfi_offset 7, -8
 2382              		.cfi_offset 14, -4
 2383 0002 82B0     		sub	sp, sp, #8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 61


 2384              	.LCFI241:
 2385              		.cfi_def_cfa_offset 16
 2386 0004 00AF     		add	r7, sp, #0
 2387              	.LCFI242:
 2388              		.cfi_def_cfa_register 7
 2389 0006 7860     		str	r0, [r7, #4]
 2390              	.LBB13:
 2391              		.loc 12 46 7
 2392 0008 0A4A     		ldr	r2, .L97
 2393 000a 7B68     		ldr	r3, [r7, #4]
 2394 000c 1A60     		str	r2, [r3]
 2395 000e 7B68     		ldr	r3, [r7, #4]
 2396 0010 6433     		adds	r3, r3, #100
 2397 0012 1846     		mov	r0, r3
 2398 0014 FFF7FEFF 		bl	_ZN8touchgfx3BoxD1Ev
 2399 0018 7B68     		ldr	r3, [r7, #4]
 2400 001a 3833     		adds	r3, r3, #56
 2401 001c 1846     		mov	r0, r3
 2402 001e FFF7FEFF 		bl	_ZN8touchgfx3BoxD1Ev
 2403 0022 7B68     		ldr	r3, [r7, #4]
 2404 0024 1846     		mov	r0, r3
 2405 0026 FFF7FEFF 		bl	_ZN8touchgfx9ContainerD2Ev
 2406              	.LBE13:
 2407 002a 7B68     		ldr	r3, [r7, #4]
 2408 002c 1846     		mov	r0, r3
 2409 002e 0837     		adds	r7, r7, #8
 2410              	.LCFI243:
 2411              		.cfi_def_cfa_offset 8
 2412 0030 BD46     		mov	sp, r7
 2413              	.LCFI244:
 2414              		.cfi_def_cfa_register 13
 2415              		@ sp needed
 2416 0032 80BD     		pop	{r7, pc}
 2417              	.L98:
 2418              		.align	2
 2419              	.L97:
 2420 0034 08000000 		.word	_ZTVN8touchgfx19ScrollableContainerE+8
 2421              		.cfi_endproc
 2422              	.LFE796:
 2424              		.weak	_ZN8touchgfx19ScrollableContainerD1Ev
 2425              		.thumb_set _ZN8touchgfx19ScrollableContainerD1Ev,_ZN8touchgfx19ScrollableContainerD2Ev
 2426              		.section	.text._ZN8touchgfx19ScrollableContainerD0Ev,"axG",%progbits,_ZN8touchgfx19ScrollableConta
 2427              		.align	1
 2428              		.weak	_ZN8touchgfx19ScrollableContainerD0Ev
 2429              		.syntax unified
 2430              		.thumb
 2431              		.thumb_func
 2432              		.fpu fpv4-sp-d16
 2434              	_ZN8touchgfx19ScrollableContainerD0Ev:
 2435              	.LFB798:
 2436              		.loc 12 46 7
 2437              		.cfi_startproc
 2438              		@ args = 0, pretend = 0, frame = 8
 2439              		@ frame_needed = 1, uses_anonymous_args = 0
 2440 0000 80B5     		push	{r7, lr}
 2441              	.LCFI245:
 2442              		.cfi_def_cfa_offset 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 62


 2443              		.cfi_offset 7, -8
 2444              		.cfi_offset 14, -4
 2445 0002 82B0     		sub	sp, sp, #8
 2446              	.LCFI246:
 2447              		.cfi_def_cfa_offset 16
 2448 0004 00AF     		add	r7, sp, #0
 2449              	.LCFI247:
 2450              		.cfi_def_cfa_register 7
 2451 0006 7860     		str	r0, [r7, #4]
 2452              		.loc 12 46 7
 2453 0008 7868     		ldr	r0, [r7, #4]
 2454 000a FFF7FEFF 		bl	_ZN8touchgfx19ScrollableContainerD1Ev
 2455 000e BC21     		movs	r1, #188
 2456 0010 7868     		ldr	r0, [r7, #4]
 2457 0012 FFF7FEFF 		bl	_ZdlPvj
 2458 0016 7B68     		ldr	r3, [r7, #4]
 2459 0018 1846     		mov	r0, r3
 2460 001a 0837     		adds	r7, r7, #8
 2461              	.LCFI248:
 2462              		.cfi_def_cfa_offset 8
 2463 001c BD46     		mov	sp, r7
 2464              	.LCFI249:
 2465              		.cfi_def_cfa_register 13
 2466              		@ sp needed
 2467 001e 80BD     		pop	{r7, pc}
 2468              		.cfi_endproc
 2469              	.LFE798:
 2471              		.section	.text._ZN8touchgfx12CanvasWidgetD2Ev,"axG",%progbits,_ZN8touchgfx12CanvasWidgetD5Ev,comda
 2472              		.align	1
 2473              		.weak	_ZN8touchgfx12CanvasWidgetD2Ev
 2474              		.syntax unified
 2475              		.thumb
 2476              		.thumb_func
 2477              		.fpu fpv4-sp-d16
 2479              	_ZN8touchgfx12CanvasWidgetD2Ev:
 2480              	.LFB801:
 2481              		.file 13 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 63


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
 2482              		.loc 13 33 7
 2483              		.cfi_startproc
 2484              		@ args = 0, pretend = 0, frame = 8
 2485              		@ frame_needed = 1, uses_anonymous_args = 0
 2486 0000 80B5     		push	{r7, lr}
 2487              	.LCFI250:
 2488              		.cfi_def_cfa_offset 8
 2489              		.cfi_offset 7, -8
 2490              		.cfi_offset 14, -4
 2491 0002 82B0     		sub	sp, sp, #8
 2492              	.LCFI251:
 2493              		.cfi_def_cfa_offset 16
 2494 0004 00AF     		add	r7, sp, #0
 2495              	.LCFI252:
 2496              		.cfi_def_cfa_register 7
 2497 0006 7860     		str	r0, [r7, #4]
 2498              	.LBB14:
 2499              		.loc 13 33 7
 2500 0008 054A     		ldr	r2, .L103
 2501 000a 7B68     		ldr	r3, [r7, #4]
 2502 000c 1A60     		str	r2, [r3]
 2503 000e 7B68     		ldr	r3, [r7, #4]
 2504 0010 1846     		mov	r0, r3
 2505 0012 FFF7FEFF 		bl	_ZN8touchgfx6WidgetD2Ev
 2506              	.LBE14:
 2507 0016 7B68     		ldr	r3, [r7, #4]
 2508 0018 1846     		mov	r0, r3
 2509 001a 0837     		adds	r7, r7, #8
 2510              	.LCFI253:
 2511              		.cfi_def_cfa_offset 8
 2512 001c BD46     		mov	sp, r7
 2513              	.LCFI254:
 2514              		.cfi_def_cfa_register 13
 2515              		@ sp needed
 2516 001e 80BD     		pop	{r7, pc}
 2517              	.L104:
 2518              		.align	2
 2519              	.L103:
 2520 0020 08000000 		.word	_ZTVN8touchgfx12CanvasWidgetE+8
 2521              		.cfi_endproc
 2522              	.LFE801:
 2524              		.weak	_ZN8touchgfx12CanvasWidgetD1Ev
 2525              		.thumb_set _ZN8touchgfx12CanvasWidgetD1Ev,_ZN8touchgfx12CanvasWidgetD2Ev
 2526              		.section	.text._ZN8touchgfx12CanvasWidgetD0Ev,"axG",%progbits,_ZN8touchgfx12CanvasWidgetD5Ev,comda
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 64


 2527              		.align	1
 2528              		.weak	_ZN8touchgfx12CanvasWidgetD0Ev
 2529              		.syntax unified
 2530              		.thumb
 2531              		.thumb_func
 2532              		.fpu fpv4-sp-d16
 2534              	_ZN8touchgfx12CanvasWidgetD0Ev:
 2535              	.LFB803:
 2536              		.loc 13 33 7
 2537              		.cfi_startproc
 2538              		@ args = 0, pretend = 0, frame = 8
 2539              		@ frame_needed = 1, uses_anonymous_args = 0
 2540 0000 80B5     		push	{r7, lr}
 2541              	.LCFI255:
 2542              		.cfi_def_cfa_offset 8
 2543              		.cfi_offset 7, -8
 2544              		.cfi_offset 14, -4
 2545 0002 82B0     		sub	sp, sp, #8
 2546              	.LCFI256:
 2547              		.cfi_def_cfa_offset 16
 2548 0004 00AF     		add	r7, sp, #0
 2549              	.LCFI257:
 2550              		.cfi_def_cfa_register 7
 2551 0006 7860     		str	r0, [r7, #4]
 2552              		.loc 13 33 7
 2553 0008 7868     		ldr	r0, [r7, #4]
 2554 000a FFF7FEFF 		bl	_ZN8touchgfx12CanvasWidgetD1Ev
 2555 000e 3021     		movs	r1, #48
 2556 0010 7868     		ldr	r0, [r7, #4]
 2557 0012 FFF7FEFF 		bl	_ZdlPvj
 2558 0016 7B68     		ldr	r3, [r7, #4]
 2559 0018 1846     		mov	r0, r3
 2560 001a 0837     		adds	r7, r7, #8
 2561              	.LCFI258:
 2562              		.cfi_def_cfa_offset 8
 2563 001c BD46     		mov	sp, r7
 2564              	.LCFI259:
 2565              		.cfi_def_cfa_register 13
 2566              		@ sp needed
 2567 001e 80BD     		pop	{r7, pc}
 2568              		.cfi_endproc
 2569              	.LFE803:
 2571              		.section	.text._ZN8touchgfx6CircleD2Ev,"axG",%progbits,_ZN8touchgfx6CircleD5Ev,comdat
 2572              		.align	1
 2573              		.weak	_ZN8touchgfx6CircleD2Ev
 2574              		.syntax unified
 2575              		.thumb
 2576              		.thumb_func
 2577              		.fpu fpv4-sp-d16
 2579              	_ZN8touchgfx6CircleD2Ev:
 2580              	.LFB804:
 2581              		.file 14 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 65


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
 2582              		.loc 14 48 7
 2583              		.cfi_startproc
 2584              		@ args = 0, pretend = 0, frame = 8
 2585              		@ frame_needed = 1, uses_anonymous_args = 0
 2586 0000 80B5     		push	{r7, lr}
 2587              	.LCFI260:
 2588              		.cfi_def_cfa_offset 8
 2589              		.cfi_offset 7, -8
 2590              		.cfi_offset 14, -4
 2591 0002 82B0     		sub	sp, sp, #8
 2592              	.LCFI261:
 2593              		.cfi_def_cfa_offset 16
 2594 0004 00AF     		add	r7, sp, #0
 2595              	.LCFI262:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 66


 2596              		.cfi_def_cfa_register 7
 2597 0006 7860     		str	r0, [r7, #4]
 2598              	.LBB15:
 2599              		.loc 14 48 7
 2600 0008 054A     		ldr	r2, .L109
 2601 000a 7B68     		ldr	r3, [r7, #4]
 2602 000c 1A60     		str	r2, [r3]
 2603 000e 7B68     		ldr	r3, [r7, #4]
 2604 0010 1846     		mov	r0, r3
 2605 0012 FFF7FEFF 		bl	_ZN8touchgfx12CanvasWidgetD2Ev
 2606              	.LBE15:
 2607 0016 7B68     		ldr	r3, [r7, #4]
 2608 0018 1846     		mov	r0, r3
 2609 001a 0837     		adds	r7, r7, #8
 2610              	.LCFI263:
 2611              		.cfi_def_cfa_offset 8
 2612 001c BD46     		mov	sp, r7
 2613              	.LCFI264:
 2614              		.cfi_def_cfa_register 13
 2615              		@ sp needed
 2616 001e 80BD     		pop	{r7, pc}
 2617              	.L110:
 2618              		.align	2
 2619              	.L109:
 2620 0020 08000000 		.word	_ZTVN8touchgfx6CircleE+8
 2621              		.cfi_endproc
 2622              	.LFE804:
 2624              		.weak	_ZN8touchgfx6CircleD1Ev
 2625              		.thumb_set _ZN8touchgfx6CircleD1Ev,_ZN8touchgfx6CircleD2Ev
 2626              		.section	.text._ZN8touchgfx6CircleD0Ev,"axG",%progbits,_ZN8touchgfx6CircleD5Ev,comdat
 2627              		.align	1
 2628              		.weak	_ZN8touchgfx6CircleD0Ev
 2629              		.syntax unified
 2630              		.thumb
 2631              		.thumb_func
 2632              		.fpu fpv4-sp-d16
 2634              	_ZN8touchgfx6CircleD0Ev:
 2635              	.LFB806:
 2636              		.loc 14 48 7
 2637              		.cfi_startproc
 2638              		@ args = 0, pretend = 0, frame = 8
 2639              		@ frame_needed = 1, uses_anonymous_args = 0
 2640 0000 80B5     		push	{r7, lr}
 2641              	.LCFI265:
 2642              		.cfi_def_cfa_offset 8
 2643              		.cfi_offset 7, -8
 2644              		.cfi_offset 14, -4
 2645 0002 82B0     		sub	sp, sp, #8
 2646              	.LCFI266:
 2647              		.cfi_def_cfa_offset 16
 2648 0004 00AF     		add	r7, sp, #0
 2649              	.LCFI267:
 2650              		.cfi_def_cfa_register 7
 2651 0006 7860     		str	r0, [r7, #4]
 2652              		.loc 14 48 7
 2653 0008 7868     		ldr	r0, [r7, #4]
 2654 000a FFF7FEFF 		bl	_ZN8touchgfx6CircleD1Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 67


 2655 000e 4C21     		movs	r1, #76
 2656 0010 7868     		ldr	r0, [r7, #4]
 2657 0012 FFF7FEFF 		bl	_ZdlPvj
 2658 0016 7B68     		ldr	r3, [r7, #4]
 2659 0018 1846     		mov	r0, r3
 2660 001a 0837     		adds	r7, r7, #8
 2661              	.LCFI268:
 2662              		.cfi_def_cfa_offset 8
 2663 001c BD46     		mov	sp, r7
 2664              	.LCFI269:
 2665              		.cfi_def_cfa_register 13
 2666              		@ sp needed
 2667 001e 80BD     		pop	{r7, pc}
 2668              		.cfi_endproc
 2669              	.LFE806:
 2671              		.section	.text._ZN8touchgfx13PainterRGB565D2Ev,"axG",%progbits,_ZN8touchgfx13PainterRGB565D5Ev,com
 2672              		.align	1
 2673              		.weak	_ZN8touchgfx13PainterRGB565D2Ev
 2674              		.syntax unified
 2675              		.thumb
 2676              		.thumb_func
 2677              		.fpu fpv4-sp-d16
 2679              	_ZN8touchgfx13PainterRGB565D2Ev:
 2680              	.LFB808:
 2681              		.file 15 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 68


 2682              		.loc 15 32 7
 2683              		.cfi_startproc
 2684              		@ args = 0, pretend = 0, frame = 8
 2685              		@ frame_needed = 1, uses_anonymous_args = 0
 2686 0000 80B5     		push	{r7, lr}
 2687              	.LCFI270:
 2688              		.cfi_def_cfa_offset 8
 2689              		.cfi_offset 7, -8
 2690              		.cfi_offset 14, -4
 2691 0002 82B0     		sub	sp, sp, #8
 2692              	.LCFI271:
 2693              		.cfi_def_cfa_offset 16
 2694 0004 00AF     		add	r7, sp, #0
 2695              	.LCFI272:
 2696              		.cfi_def_cfa_register 7
 2697 0006 7860     		str	r0, [r7, #4]
 2698              	.LBB16:
 2699              		.loc 15 32 7
 2700 0008 054A     		ldr	r2, .L115
 2701 000a 7B68     		ldr	r3, [r7, #4]
 2702 000c 1A60     		str	r2, [r3]
 2703 000e 7B68     		ldr	r3, [r7, #4]
 2704 0010 1846     		mov	r0, r3
 2705 0012 FFF7FEFF 		bl	_ZN8touchgfx21AbstractPainterRGB565D2Ev
 2706              	.LBE16:
 2707 0016 7B68     		ldr	r3, [r7, #4]
 2708 0018 1846     		mov	r0, r3
 2709 001a 0837     		adds	r7, r7, #8
 2710              	.LCFI273:
 2711              		.cfi_def_cfa_offset 8
 2712 001c BD46     		mov	sp, r7
 2713              	.LCFI274:
 2714              		.cfi_def_cfa_register 13
 2715              		@ sp needed
 2716 001e 80BD     		pop	{r7, pc}
 2717              	.L116:
 2718              		.align	2
 2719              	.L115:
 2720 0020 08000000 		.word	_ZTVN8touchgfx13PainterRGB565E+8
 2721              		.cfi_endproc
 2722              	.LFE808:
 2724              		.weak	_ZN8touchgfx13PainterRGB565D1Ev
 2725              		.thumb_set _ZN8touchgfx13PainterRGB565D1Ev,_ZN8touchgfx13PainterRGB565D2Ev
 2726              		.section	.text._ZN8touchgfx13PainterRGB565D0Ev,"axG",%progbits,_ZN8touchgfx13PainterRGB565D5Ev,com
 2727              		.align	1
 2728              		.weak	_ZN8touchgfx13PainterRGB565D0Ev
 2729              		.syntax unified
 2730              		.thumb
 2731              		.thumb_func
 2732              		.fpu fpv4-sp-d16
 2734              	_ZN8touchgfx13PainterRGB565D0Ev:
 2735              	.LFB810:
 2736              		.loc 15 32 7
 2737              		.cfi_startproc
 2738              		@ args = 0, pretend = 0, frame = 8
 2739              		@ frame_needed = 1, uses_anonymous_args = 0
 2740 0000 80B5     		push	{r7, lr}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 69


 2741              	.LCFI275:
 2742              		.cfi_def_cfa_offset 8
 2743              		.cfi_offset 7, -8
 2744              		.cfi_offset 14, -4
 2745 0002 82B0     		sub	sp, sp, #8
 2746              	.LCFI276:
 2747              		.cfi_def_cfa_offset 16
 2748 0004 00AF     		add	r7, sp, #0
 2749              	.LCFI277:
 2750              		.cfi_def_cfa_register 7
 2751 0006 7860     		str	r0, [r7, #4]
 2752              		.loc 15 32 7
 2753 0008 7868     		ldr	r0, [r7, #4]
 2754 000a FFF7FEFF 		bl	_ZN8touchgfx13PainterRGB565D1Ev
 2755 000e 1821     		movs	r1, #24
 2756 0010 7868     		ldr	r0, [r7, #4]
 2757 0012 FFF7FEFF 		bl	_ZdlPvj
 2758 0016 7B68     		ldr	r3, [r7, #4]
 2759 0018 1846     		mov	r0, r3
 2760 001a 0837     		adds	r7, r7, #8
 2761              	.LCFI278:
 2762              		.cfi_def_cfa_offset 8
 2763 001c BD46     		mov	sp, r7
 2764              	.LCFI279:
 2765              		.cfi_def_cfa_register 13
 2766              		@ sp needed
 2767 001e 80BD     		pop	{r7, pc}
 2768              		.cfi_endproc
 2769              	.LFE810:
 2771              		.text
 2772              	.Letext0:
 2773              		.file 16 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 2774              		.file 17 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 2775              		.file 18 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 2776              		.file 19 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 2777              		.file 20 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 2778              		.file 21 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine
 2779              		.file 22 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_st
 2780              		.file 23 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 2781              		.file 24 "Middlewares/ST/touchgfx/framework/include/touchgfx/Event.hpp"
 2782              		.file 25 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/ClickEvent.hpp"
 2783              		.file 26 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/DragEvent.hpp"
 2784              		.file 27 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/GestureEvent.hpp"
 2785              		.file 28 "Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp"
 2786              		.file 29 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 2787              		.file 30 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/DebugPrinter.hpp"
 2788              		.file 31 "Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp"
 2789              		.file 32 "Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp"
 2790              		.file 33 "Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp"
 2791              		.file 34 "Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp"
 2792              		.file 35 "Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp"
 2793              		.file 36 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Cell.hpp"
 2794              		.file 37 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Outline.hpp"
 2795              		.file 38 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/RenderingBuffe
 2796              		.file 39 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Scanline.hpp"
 2797              		.file 40 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Rasterizer.hpp
 2798              		.file 41 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 70


 2799              		.file 42 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Canvas.hpp"
 2800              		.file 43 "Src/gui/include/gui/model/Model.hpp"
 2801              		.file 44 "Src/gui/include/gui/model/ModelListener.hpp"
 2802              		.file 45 "Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp"
 2803              		.file 46 "Src/gui/include/gui/common/FrontendApplication.hpp"
 2804              		.file 47 "Src/gui/include/gui/screen_screen/screenPresenter.hpp"
 2805              		.file 48 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/sig
 2806              		.file 49 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/signal.
 2807              		.file 50 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 71


DEFINED SYMBOLS
                            *ABS*:0000000000000000 screenView.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:18     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:21     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:26     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:27     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:31     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:36     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:41     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:42     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:46     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:49     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:52     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:55     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:58     .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:61     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:64     .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:67     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:70     .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:73     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:76     .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:79     .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:82     .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:85     .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:88     .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:91     .text._ZN8touchgfx8DrawableD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:99     .text._ZN8touchgfx8DrawableD2Ev:0000000000000000 _ZN8touchgfx8DrawableD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:142    .text._ZN8touchgfx8DrawableD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:99     .text._ZN8touchgfx8DrawableD2Ev:0000000000000000 _ZN8touchgfx8DrawableD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:149    .text._ZN8touchgfx8DrawableD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:156    .text._ZN8touchgfx8DrawableD0Ev:0000000000000000 _ZN8touchgfx8DrawableD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:194    .text._ZN8touchgfx8Drawable13getFirstChildEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:201    .text._ZN8touchgfx8Drawable13getFirstChildEv:0000000000000000 _ZN8touchgfx8Drawable13getFirstChildEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:239    .text._ZN8touchgfx8Drawable4setXEs:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:246    .text._ZN8touchgfx8Drawable4setXEs:0000000000000000 _ZN8touchgfx8Drawable4setXEs
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:288    .text._ZN8touchgfx8Drawable4setYEs:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:295    .text._ZN8touchgfx8Drawable4setYEs:0000000000000000 _ZN8touchgfx8Drawable4setYEs
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:337    .text._ZN8touchgfx8Drawable8setWidthEs:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:344    .text._ZN8touchgfx8Drawable8setWidthEs:0000000000000000 _ZN8touchgfx8Drawable8setWidthEs
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:386    .text._ZN8touchgfx8Drawable9setHeightEs:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:393    .text._ZN8touchgfx8Drawable9setHeightEs:0000000000000000 _ZN8touchgfx8Drawable9setHeightEs
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:435    .text._ZN8touchgfx8Drawable20childGeometryChangedEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:442    .text._ZN8touchgfx8Drawable20childGeometryChangedEv:0000000000000000 _ZN8touchgfx8Drawable20childGeometryChangedEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:478    .text._ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:485    .text._ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE:0000000000000000 _ZN8touchgfx8Drawable16handleClickEventERKNS_10ClickEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:522    .text._ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:529    .text._ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE:0000000000000000 _ZN8touchgfx8Drawable18handleGestureEventERKNS_12GestureEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:566    .text._ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:573    .text._ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE:0000000000000000 _ZN8touchgfx8Drawable15handleDragEventERKNS_9DragEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:610    .text._ZN8touchgfx8Drawable15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:617    .text._ZN8touchgfx8Drawable15handleTickEventEv:0000000000000000 _ZN8touchgfx8Drawable15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:653    .text._ZNK8touchgfx8Drawable9isVisibleEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:660    .text._ZNK8touchgfx8Drawable9isVisibleEv:0000000000000000 _ZNK8touchgfx8Drawable9isVisibleEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:699    .text._ZNK8touchgfx8Drawable11isTouchableEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:706    .text._ZNK8touchgfx8Drawable11isTouchableEv:0000000000000000 _ZNK8touchgfx8Drawable11isTouchableEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:745    .text._ZN8touchgfx8Drawable6moveToEss:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:752    .text._ZN8touchgfx8Drawable6moveToEss:0000000000000000 _ZN8touchgfx8Drawable6moveToEss
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 72


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:819    .text._ZN8touchgfx8Drawable19resetDrawChainCacheEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:826    .text._ZN8touchgfx8Drawable19resetDrawChainCacheEv:0000000000000000 _ZN8touchgfx8Drawable19resetDrawChainCacheEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:874    .text._ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:881    .text._ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_:0000000000000000 _ZN8touchgfx8Drawable14setupDrawChainERKNS_4RectEPPS0_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:928    .text._ZN8touchgfx6ScreenD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:935    .text._ZN8touchgfx6ScreenD2Ev:0000000000000000 _ZN8touchgfx6ScreenD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2171   .text._ZN8touchgfx9ContainerD2Ev:0000000000000000 _ZN8touchgfx9ContainerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:978    .text._ZN8touchgfx6ScreenD2Ev:0000000000000024 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:935    .text._ZN8touchgfx6ScreenD2Ev:0000000000000000 _ZN8touchgfx6ScreenD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:985    .text._ZN8touchgfx6ScreenD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:992    .text._ZN8touchgfx6ScreenD0Ev:0000000000000000 _ZN8touchgfx6ScreenD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1030   .text._ZN8touchgfx6Screen11setupScreenEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1037   .text._ZN8touchgfx6Screen11setupScreenEv:0000000000000000 _ZN8touchgfx6Screen11setupScreenEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1073   .text._ZN8touchgfx6Screen15afterTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1080   .text._ZN8touchgfx6Screen15afterTransitionEv:0000000000000000 _ZN8touchgfx6Screen15afterTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1116   .text._ZN8touchgfx6Screen14tearDownScreenEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1123   .text._ZN8touchgfx6Screen14tearDownScreenEv:0000000000000000 _ZN8touchgfx6Screen14tearDownScreenEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1159   .text._ZN8touchgfx6Screen15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1166   .text._ZN8touchgfx6Screen15handleTickEventEv:0000000000000000 _ZN8touchgfx6Screen15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1202   .text._ZN8touchgfx6Screen14handleKeyEventEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1209   .text._ZN8touchgfx6Screen14handleKeyEventEh:0000000000000000 _ZN8touchgfx6Screen14handleKeyEventEh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1247   .text._ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1254   .text._ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE:0000000000000000 _ZN8touchgfx6Widget12getLastChildEssPPNS_8DrawableE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1323   .text._ZN8touchgfx6WidgetD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1330   .text._ZN8touchgfx6WidgetD2Ev:0000000000000000 _ZN8touchgfx6WidgetD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1370   .text._ZN8touchgfx6WidgetD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2137   .rodata._ZTVN8touchgfx6WidgetE:0000000000000000 _ZTVN8touchgfx6WidgetE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1330   .text._ZN8touchgfx6WidgetD2Ev:0000000000000000 _ZN8touchgfx6WidgetD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1377   .text._ZN8touchgfx6WidgetD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1384   .text._ZN8touchgfx6WidgetD0Ev:0000000000000000 _ZN8touchgfx6WidgetD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1422   .text._ZN8touchgfx15AbstractPainterD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1429   .text._ZN8touchgfx15AbstractPainterD2Ev:0000000000000000 _ZN8touchgfx15AbstractPainterD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1472   .text._ZN8touchgfx15AbstractPainterD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2126   .rodata._ZTVN8touchgfx15AbstractPainterE:0000000000000000 _ZTVN8touchgfx15AbstractPainterE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1429   .text._ZN8touchgfx15AbstractPainterD2Ev:0000000000000000 _ZN8touchgfx15AbstractPainterD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1479   .text._ZN8touchgfx15AbstractPainterD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1486   .text._ZN8touchgfx15AbstractPainterD0Ev:0000000000000000 _ZN8touchgfx15AbstractPainterD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1524   .text._ZN8touchgfx21AbstractPainterRGB565D2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1531   .text._ZN8touchgfx21AbstractPainterRGB565D2Ev:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565D2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1572   .text._ZN8touchgfx21AbstractPainterRGB565D2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1531   .text._ZN8touchgfx21AbstractPainterRGB565D2Ev:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565D1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1579   .text._ZN8touchgfx21AbstractPainterRGB565D0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1586   .text._ZN8touchgfx21AbstractPainterRGB565D0Ev:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565D0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1624   .text._ZN8touchgfx4ViewI15screenPresenterED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1631   .text._ZN8touchgfx4ViewI15screenPresenterED2Ev:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1672   .text._ZN8touchgfx4ViewI15screenPresenterED2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2107   .rodata._ZTVN8touchgfx4ViewI15screenPresenterEE:0000000000000000 _ZTVN8touchgfx4ViewI15screenPresenterEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1631   .text._ZN8touchgfx4ViewI15screenPresenterED2Ev:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1679   .text._ZN8touchgfx4ViewI15screenPresenterED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1686   .text._ZN8touchgfx4ViewI15screenPresenterED0Ev:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1724   .text._ZN14screenViewBaseD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1731   .text._ZN14screenViewBaseD2Ev:0000000000000000 _ZN14screenViewBaseD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2679   .text._ZN8touchgfx13PainterRGB565D2Ev:0000000000000000 _ZN8touchgfx13PainterRGB565D1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2579   .text._ZN8touchgfx6CircleD2Ev:0000000000000000 _ZN8touchgfx6CircleD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2371   .text._ZN8touchgfx19ScrollableContainerD2Ev:0000000000000000 _ZN8touchgfx19ScrollableContainerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2271   .text._ZN8touchgfx3BoxD2Ev:0000000000000000 _ZN8touchgfx3BoxD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1789   .text._ZN14screenViewBaseD2Ev:000000000000004c $d
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 73


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1731   .text._ZN14screenViewBaseD2Ev:0000000000000000 _ZN14screenViewBaseD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1796   .text._ZN14screenViewBaseD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1803   .text._ZN14screenViewBaseD0Ev:0000000000000000 _ZN14screenViewBaseD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1841   .text._ZN10screenViewD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1848   .text._ZN10screenViewD2Ev:0000000000000000 _ZN10screenViewD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1890   .text._ZN10screenViewD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2088   .rodata._ZTV10screenView:0000000000000000 _ZTV10screenView
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1848   .text._ZN10screenViewD2Ev:0000000000000000 _ZN10screenViewD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1897   .text._ZN10screenViewD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1904   .text._ZN10screenViewD0Ev:0000000000000000 _ZN10screenViewD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1942   .text._ZN10screenViewC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1949   .text._ZN10screenViewC2Ev:0000000000000000 _ZN10screenViewC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1991   .text._ZN10screenViewC2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1949   .text._ZN10screenViewC2Ev:0000000000000000 _ZN10screenViewC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:1998   .text._ZN10screenView11setupScreenEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2005   .text._ZN10screenView11setupScreenEv:0000000000000000 _ZN10screenView11setupScreenEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2041   .text._ZN10screenView14tearDownScreenEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2048   .text._ZN10screenView14tearDownScreenEv:0000000000000000 _ZN10screenView14tearDownScreenEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2085   .rodata._ZTV10screenView:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2104   .rodata._ZTVN8touchgfx4ViewI15screenPresenterEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2123   .rodata._ZTVN8touchgfx15AbstractPainterE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2134   .rodata._ZTVN8touchgfx6WidgetE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2164   .text._ZN8touchgfx9ContainerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2171   .text._ZN8touchgfx9ContainerD2Ev:0000000000000000 _ZN8touchgfx9ContainerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2212   .text._ZN8touchgfx9ContainerD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2219   .text._ZN8touchgfx9ContainerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2226   .text._ZN8touchgfx9ContainerD0Ev:0000000000000000 _ZN8touchgfx9ContainerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2264   .text._ZN8touchgfx3BoxD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2271   .text._ZN8touchgfx3BoxD2Ev:0000000000000000 _ZN8touchgfx3BoxD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2312   .text._ZN8touchgfx3BoxD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2319   .text._ZN8touchgfx3BoxD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2326   .text._ZN8touchgfx3BoxD0Ev:0000000000000000 _ZN8touchgfx3BoxD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2364   .text._ZN8touchgfx19ScrollableContainerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2371   .text._ZN8touchgfx19ScrollableContainerD2Ev:0000000000000000 _ZN8touchgfx19ScrollableContainerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2420   .text._ZN8touchgfx19ScrollableContainerD2Ev:0000000000000034 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2427   .text._ZN8touchgfx19ScrollableContainerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2434   .text._ZN8touchgfx19ScrollableContainerD0Ev:0000000000000000 _ZN8touchgfx19ScrollableContainerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2472   .text._ZN8touchgfx12CanvasWidgetD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2479   .text._ZN8touchgfx12CanvasWidgetD2Ev:0000000000000000 _ZN8touchgfx12CanvasWidgetD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2520   .text._ZN8touchgfx12CanvasWidgetD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2479   .text._ZN8touchgfx12CanvasWidgetD2Ev:0000000000000000 _ZN8touchgfx12CanvasWidgetD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2527   .text._ZN8touchgfx12CanvasWidgetD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2534   .text._ZN8touchgfx12CanvasWidgetD0Ev:0000000000000000 _ZN8touchgfx12CanvasWidgetD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2572   .text._ZN8touchgfx6CircleD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2579   .text._ZN8touchgfx6CircleD2Ev:0000000000000000 _ZN8touchgfx6CircleD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2620   .text._ZN8touchgfx6CircleD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2627   .text._ZN8touchgfx6CircleD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2634   .text._ZN8touchgfx6CircleD0Ev:0000000000000000 _ZN8touchgfx6CircleD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2672   .text._ZN8touchgfx13PainterRGB565D2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2679   .text._ZN8touchgfx13PainterRGB565D2Ev:0000000000000000 _ZN8touchgfx13PainterRGB565D2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2720   .text._ZN8touchgfx13PainterRGB565D2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2727   .text._ZN8touchgfx13PainterRGB565D0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s:2734   .text._ZN8touchgfx13PainterRGB565D0Ev:0000000000000000 _ZN8touchgfx13PainterRGB565D0Ev
                           .group:0000000000000000 _ZN8touchgfx8DrawableD5Ev
                           .group:0000000000000000 _ZN8touchgfx6ScreenD5Ev
                           .group:0000000000000000 _ZN8touchgfx6WidgetD5Ev
                           .group:0000000000000000 _ZN8touchgfx15AbstractPainterD5Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 74


                           .group:0000000000000000 _ZN8touchgfx21AbstractPainterRGB565D5Ev
                           .group:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterED5Ev
                           .group:0000000000000000 _ZN14screenViewBaseD5Ev
                           .group:0000000000000000 _ZN10screenViewD5Ev
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
                           .group:0000000000000000 wm4._pthreadtypes.h.36.fcee9961c35163dde6267ef772ad1972
                           .group:0000000000000000 wm4.signal.h.30.5277b477a5ebb7d1254c1af3095d1011
                           .group:0000000000000000 wm4.signal.h.18.14c8d0c03fc1e06775633fad7399cfc7
                           .group:0000000000000000 wm4.csignal.45.00534e27a59328df5aaaf458020a025c

UNDEFINED SYMBOLS
_ZTVN8touchgfx8DrawableE
_ZdlPvj
_ZTVN8touchgfx6ScreenE
_ZTVN8touchgfx21AbstractPainterRGB565E
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccxoEwsk.s 			page 75


_ZTV14screenViewBase
_ZN14screenViewBaseC2Ev
_ZN14screenViewBase11setupScreenEv
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
_ZTVN8touchgfx3BoxE
_ZTVN8touchgfx19ScrollableContainerE
_ZTVN8touchgfx12CanvasWidgetE
_ZTVN8touchgfx6CircleE
_ZTVN8touchgfx13PainterRGB565E
