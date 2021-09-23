ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 1


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
  13              		.file	"FrontendApplicationBase.cpp"
  14              		.text
  15              	.Ltext0:
  16              		.cfi_sections	.debug_frame
  17              		.section	.text._ZnwjPv,"axG",%progbits,_ZnwjPv,comdat
  18              		.align	1
  19              		.weak	_ZnwjPv
  20              		.arch armv7e-m
  21              		.syntax unified
  22              		.thumb
  23              		.thumb_func
  24              		.fpu fpv4-sp-d16
  26              	_ZnwjPv:
  27              	.LFB67:
  28              		.file 1 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2
   1:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // The -*- C++ -*- dynamic memory management header.
   2:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
   3:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // Copyright (C) 1994-2020 Free Software Foundation, Inc.
   4:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
   5:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // This file is part of GCC.
   6:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** //
   7:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // GCC is free software; you can redistribute it and/or modify
   8:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // it under the terms of the GNU General Public License as published by
   9:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // the Free Software Foundation; either version 3, or (at your option)
  10:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // any later version.
  11:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // 
  12:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // GCC is distributed in the hope that it will be useful,
  13:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // but WITHOUT ANY WARRANTY; without even the implied warranty of
  14:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  15:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // GNU General Public License for more details.
  16:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // 
  17:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // Under Section 7 of GPL version 3, you are granted additional
  18:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // permissions described in the GCC Runtime Library Exception, version
  19:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // 3.1, as published by the Free Software Foundation.
  20:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  21:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // You should have received a copy of the GNU General Public License and
  22:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // a copy of the GCC Runtime Library Exception along with this program;
  23:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
  24:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // <http://www.gnu.org/licenses/>.
  25:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  26:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** /** @file new
  27:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  This is a Standard C++ Library header.
  28:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *
  29:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  The header @c new defines several functions to manage dynamic memory and
  30:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  handling memory allocation errors; see
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 2


  31:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  https://gcc.gnu.org/onlinedocs/libstdc++/manual/dynamic_memory.html
  32:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  for more.
  33:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  */
  34:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  35:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #ifndef _NEW
  36:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #define _NEW
  37:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  38:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #pragma GCC system_header
  39:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  40:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #include <bits/c++config.h>
  41:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #include <exception>
  42:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  43:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #pragma GCC visibility push(default)
  44:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  45:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** extern "C++" {
  46:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  47:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** namespace std 
  48:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** {
  49:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   /**
  50:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****    *  @brief  Exception possibly thrown by @c new.
  51:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****    *  @ingroup exceptions
  52:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****    *
  53:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****    *  @c bad_alloc (or classes derived from it) is used to report allocation
  54:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****    *  errors from the throwing forms of @c new.  */
  55:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   class bad_alloc : public exception 
  56:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   {
  57:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   public:
  58:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     bad_alloc() throw() { }
  59:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  60:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #if __cplusplus >= 201103L
  61:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     bad_alloc(const bad_alloc&) = default;
  62:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     bad_alloc& operator=(const bad_alloc&) = default;
  63:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #endif
  64:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  65:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     // This declaration is not useless:
  66:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     // http://gcc.gnu.org/onlinedocs/gcc-3.0.2/gcc_6.html#SEC118
  67:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     virtual ~bad_alloc() throw();
  68:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  69:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     // See comment in eh_exception.cc.
  70:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     virtual const char* what() const throw();
  71:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   };
  72:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  73:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #if __cplusplus >= 201103L
  74:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   class bad_array_new_length : public bad_alloc
  75:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   {
  76:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   public:
  77:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     bad_array_new_length() throw() { }
  78:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  79:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     // This declaration is not useless:
  80:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     // http://gcc.gnu.org/onlinedocs/gcc-3.0.2/gcc_6.html#SEC118
  81:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     virtual ~bad_array_new_length() throw();
  82:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  83:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     // See comment in eh_exception.cc.
  84:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     virtual const char* what() const throw();
  85:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   };
  86:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #endif
  87:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 3


  88:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #if __cpp_aligned_new
  89:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   enum class align_val_t: size_t {};
  90:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #endif
  91:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  92:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   struct nothrow_t
  93:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   {
  94:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #if __cplusplus >= 201103L
  95:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****     explicit nothrow_t() = default;
  96:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #endif
  97:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   };
  98:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
  99:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   extern const nothrow_t nothrow;
 100:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
 101:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   /** If you write your own error handler to be called by @c new, it must
 102:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****    *  be of this type.  */
 103:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   typedef void (*new_handler)();
 104:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
 105:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   /// Takes a replacement handler as the argument, returns the
 106:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   /// previous handler.
 107:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   new_handler set_new_handler(new_handler) throw();
 108:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
 109:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #if __cplusplus >= 201103L
 110:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   /// Return the current new handler.
 111:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   new_handler get_new_handler() noexcept;
 112:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #endif
 113:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** } // namespace std
 114:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
 115:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** //@{
 116:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** /** These are replaceable signatures:
 117:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  - normal single new and delete (no arguments, throw @c bad_alloc on error)
 118:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  - normal array new and delete (same)
 119:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  - @c nothrow single new and delete (take a @c nothrow argument, return
 120:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *    @c NULL on error)
 121:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  - @c nothrow array new and delete (same)
 122:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *
 123:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  Placement new and delete signatures (take a memory address argument,
 124:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****  *  does nothing) may not be replaced by a user's program.
 125:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** */
 126:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD void* operator new(std::size_t) _GLIBCXX_THROW (std::bad_alloc)
 127:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 128:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD void* operator new[](std::size_t) _GLIBCXX_THROW (std::bad_alloc)
 129:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 130:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete(void*) _GLIBCXX_USE_NOEXCEPT
 131:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 132:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete[](void*) _GLIBCXX_USE_NOEXCEPT
 133:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 134:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #if __cpp_sized_deallocation
 135:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete(void*, std::size_t) _GLIBCXX_USE_NOEXCEPT
 136:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 137:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete[](void*, std::size_t) _GLIBCXX_USE_NOEXCEPT
 138:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 139:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #endif
 140:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD void* operator new(std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
 141:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__, __malloc__));
 142:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD void* operator new[](std::size_t, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
 143:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__, __malloc__));
 144:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete(void*, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 4


 145:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 146:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete[](void*, const std::nothrow_t&) _GLIBCXX_USE_NOEXCEPT
 147:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 148:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #if __cpp_aligned_new
 149:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD void* operator new(std::size_t, std::align_val_t)
 150:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 151:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD void* operator new(std::size_t, std::align_val_t, const std::nothrow_t&)
 152:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   _GLIBCXX_USE_NOEXCEPT __attribute__((__externally_visible__, __malloc__));
 153:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete(void*, std::align_val_t)
 154:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   _GLIBCXX_USE_NOEXCEPT __attribute__((__externally_visible__));
 155:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete(void*, std::align_val_t, const std::nothrow_t&)
 156:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   _GLIBCXX_USE_NOEXCEPT __attribute__((__externally_visible__));
 157:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD void* operator new[](std::size_t, std::align_val_t)
 158:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   __attribute__((__externally_visible__));
 159:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD void* operator new[](std::size_t, std::align_val_t, const std::nothrow_t&)
 160:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   _GLIBCXX_USE_NOEXCEPT __attribute__((__externally_visible__, __malloc__));
 161:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete[](void*, std::align_val_t)
 162:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   _GLIBCXX_USE_NOEXCEPT __attribute__((__externally_visible__));
 163:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete[](void*, std::align_val_t, const std::nothrow_t&)
 164:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   _GLIBCXX_USE_NOEXCEPT __attribute__((__externally_visible__));
 165:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #if __cpp_sized_deallocation
 166:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete(void*, std::size_t, std::align_val_t)
 167:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   _GLIBCXX_USE_NOEXCEPT __attribute__((__externally_visible__));
 168:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** void operator delete[](void*, std::size_t, std::align_val_t)
 169:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new ****   _GLIBCXX_USE_NOEXCEPT __attribute__((__externally_visible__));
 170:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #endif // __cpp_sized_deallocation
 171:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** #endif // __cpp_aligned_new
 172:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** 
 173:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** // Default placement versions of operator new.
 174:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** _GLIBCXX_NODISCARD inline void* operator new(std::size_t, void* __p) _GLIBCXX_USE_NOEXCEPT
 175:/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.2.1/new **** { return __p; }
  29              		.loc 1 175 1
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
  45 0008 3960     		str	r1, [r7]
  46              		.loc 1 175 10
  47 000a 3B68     		ldr	r3, [r7]
  48              		.loc 1 175 15
  49 000c 1846     		mov	r0, r3
  50 000e 0C37     		adds	r7, r7, #12
  51              	.LCFI3:
  52              		.cfi_def_cfa_offset 4
  53 0010 BD46     		mov	sp, r7
  54              	.LCFI4:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 5


  55              		.cfi_def_cfa_register 13
  56              		@ sp needed
  57 0012 5DF8047B 		ldr	r7, [sp], #4
  58              	.LCFI5:
  59              		.cfi_restore 7
  60              		.cfi_def_cfa_offset 0
  61 0016 7047     		bx	lr
  62              		.cfi_endproc
  63              	.LFE67:
  65              		.section	.rodata._ZN8touchgfxL2PIE,"a"
  66              		.align	2
  69              	_ZN8touchgfxL2PIE:
  70 0000 DB0F4940 		.word	1078530011
  71              		.section	.rodata._ZN8touchgfxL4LEFTE,"a"
  74              	_ZN8touchgfxL4LEFTE:
  75 0000 00       		.space	1
  76              		.section	.rodata._ZN8touchgfxL6CENTERE,"a"
  79              	_ZN8touchgfxL6CENTERE:
  80 0000 01       		.byte	1
  81              		.section	.rodata._ZN8touchgfxL5RIGHTE,"a"
  84              	_ZN8touchgfxL5RIGHTE:
  85 0000 02       		.byte	2
  86              		.section	.rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE,"a"
  89              	_ZN8touchgfxL18TEXT_DIRECTION_LTRE:
  90 0000 00       		.space	1
  91              		.section	.rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE,"a"
  94              	_ZN8touchgfxL18TEXT_DIRECTION_RTLE:
  95 0000 01       		.byte	1
  96              		.section	.rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE,"a"
  97              		.align	1
 100              	_ZN8touchgfxL32RenderingVariant_NearestNeighborE:
 101 0000 0000     		.space	2
 102              		.section	.rodata._ZN8touchgfxL25RenderingVariant_BilinearE,"a"
 103              		.align	1
 106              	_ZN8touchgfxL25RenderingVariant_BilinearE:
 107 0000 0100     		.short	1
 108              		.section	.rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE,"a"
 109              		.align	1
 112              	_ZN8touchgfxL24RenderingVariant_NoAlphaE:
 113 0000 0000     		.space	2
 114              		.section	.rodata._ZN8touchgfxL22RenderingVariant_AlphaE,"a"
 115              		.align	1
 118              	_ZN8touchgfxL22RenderingVariant_AlphaE:
 119 0000 0200     		.short	2
 120              		.section	.rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE,"a"
 121              		.align	1
 124              	_ZN8touchgfxL28RenderingVariant_FormatShiftE:
 125 0000 0200     		.short	2
 126              		.section	.text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE,"axG",%progbits,
 127              		.align	1
 128              		.weak	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
 129              		.syntax unified
 130              		.thumb
 131              		.thumb_func
 132              		.fpu fpv4-sp-d16
 134              	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:
 135              	.LFB155:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 6


 136              		.file 2 "Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp"
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
 137              		.loc 2 44 18
 138              		.cfi_startproc
 139              		@ args = 0, pretend = 0, frame = 8
 140              		@ frame_needed = 1, uses_anonymous_args = 0
 141              		@ link register save eliminated.
 142 0000 80B4     		push	{r7}
 143              	.LCFI6:
 144              		.cfi_def_cfa_offset 4
 145              		.cfi_offset 7, -4
 146 0002 83B0     		sub	sp, sp, #12
 147              	.LCFI7:
 148              		.cfi_def_cfa_offset 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 7


 149 0004 00AF     		add	r7, sp, #0
 150              	.LCFI8:
 151              		.cfi_def_cfa_register 7
 152 0006 7860     		str	r0, [r7, #4]
 153 0008 3960     		str	r1, [r7]
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 154              		.loc 2 46 5
 155 000a 00BF     		nop
 156 000c 0C37     		adds	r7, r7, #12
 157              	.LCFI9:
 158              		.cfi_def_cfa_offset 4
 159 000e BD46     		mov	sp, r7
 160              	.LCFI10:
 161              		.cfi_def_cfa_register 13
 162              		@ sp needed
 163 0010 5DF8047B 		ldr	r7, [sp], #4
 164              	.LCFI11:
 165              		.cfi_restore 7
 166              		.cfi_def_cfa_offset 0
 167 0014 7047     		bx	lr
 168              		.cfi_endproc
 169              	.LFE155:
 171              		.section	.text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE,"axG",%progbits,_ZN
 172              		.align	1
 173              		.weak	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
 174              		.syntax unified
 175              		.thumb
 176              		.thumb_func
 177              		.fpu fpv4-sp-d16
 179              	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:
 180              	.LFB156:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a drag event has been detected by the system.
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  event The event data.
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleDragEvent(const DragEvent& event)
 181              		.loc 2 53 18
 182              		.cfi_startproc
 183              		@ args = 0, pretend = 0, frame = 8
 184              		@ frame_needed = 1, uses_anonymous_args = 0
 185              		@ link register save eliminated.
 186 0000 80B4     		push	{r7}
 187              	.LCFI12:
 188              		.cfi_def_cfa_offset 4
 189              		.cfi_offset 7, -4
 190 0002 83B0     		sub	sp, sp, #12
 191              	.LCFI13:
 192              		.cfi_def_cfa_offset 16
 193 0004 00AF     		add	r7, sp, #0
 194              	.LCFI14:
 195              		.cfi_def_cfa_register 7
 196 0006 7860     		str	r0, [r7, #4]
 197 0008 3960     		str	r1, [r7]
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 8


  55:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 198              		.loc 2 55 5
 199 000a 00BF     		nop
 200 000c 0C37     		adds	r7, r7, #12
 201              	.LCFI15:
 202              		.cfi_def_cfa_offset 4
 203 000e BD46     		mov	sp, r7
 204              	.LCFI16:
 205              		.cfi_def_cfa_register 13
 206              		@ sp needed
 207 0010 5DF8047B 		ldr	r7, [sp], #4
 208              	.LCFI17:
 209              		.cfi_restore 7
 210              		.cfi_def_cfa_offset 0
 211 0014 7047     		bx	lr
 212              		.cfi_endproc
 213              	.LFE156:
 215              		.section	.text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE,"axG",%progb
 216              		.align	1
 217              		.weak	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
 218              		.syntax unified
 219              		.thumb
 220              		.thumb_func
 221              		.fpu fpv4-sp-d16
 223              	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:
 224              	.LFB157:
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a gesture event has been detected by the system.
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  event The event data.
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleGestureEvent(const GestureEvent& event)
 225              		.loc 2 62 18
 226              		.cfi_startproc
 227              		@ args = 0, pretend = 0, frame = 8
 228              		@ frame_needed = 1, uses_anonymous_args = 0
 229              		@ link register save eliminated.
 230 0000 80B4     		push	{r7}
 231              	.LCFI18:
 232              		.cfi_def_cfa_offset 4
 233              		.cfi_offset 7, -4
 234 0002 83B0     		sub	sp, sp, #12
 235              	.LCFI19:
 236              		.cfi_def_cfa_offset 16
 237 0004 00AF     		add	r7, sp, #0
 238              	.LCFI20:
 239              		.cfi_def_cfa_register 7
 240 0006 7860     		str	r0, [r7, #4]
 241 0008 3960     		str	r1, [r7]
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 242              		.loc 2 64 5
 243 000a 00BF     		nop
 244 000c 0C37     		adds	r7, r7, #12
 245              	.LCFI21:
 246              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 9


 247 000e BD46     		mov	sp, r7
 248              	.LCFI22:
 249              		.cfi_def_cfa_register 13
 250              		@ sp needed
 251 0010 5DF8047B 		ldr	r7, [sp], #4
 252              	.LCFI23:
 253              		.cfi_restore 7
 254              		.cfi_def_cfa_offset 0
 255 0014 7047     		bx	lr
 256              		.cfi_endproc
 257              	.LFE157:
 259              		.section	.text._ZN8touchgfx15UIEventListener14handleKeyEventEh,"axG",%progbits,_ZN8touchgfx15UIEve
 260              		.align	1
 261              		.weak	_ZN8touchgfx15UIEventListener14handleKeyEventEh
 262              		.syntax unified
 263              		.thumb
 264              		.thumb_func
 265              		.fpu fpv4-sp-d16
 267              	_ZN8touchgfx15UIEventListener14handleKeyEventEh:
 268              	.LFB158:
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a key (or button) event has been detected by the system.
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      *
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * @param  c The key or button pressed.
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleKeyEvent(uint8_t c)
 269              		.loc 2 71 18
 270              		.cfi_startproc
 271              		@ args = 0, pretend = 0, frame = 8
 272              		@ frame_needed = 1, uses_anonymous_args = 0
 273              		@ link register save eliminated.
 274 0000 80B4     		push	{r7}
 275              	.LCFI24:
 276              		.cfi_def_cfa_offset 4
 277              		.cfi_offset 7, -4
 278 0002 83B0     		sub	sp, sp, #12
 279              	.LCFI25:
 280              		.cfi_def_cfa_offset 16
 281 0004 00AF     		add	r7, sp, #0
 282              	.LCFI26:
 283              		.cfi_def_cfa_register 7
 284 0006 7860     		str	r0, [r7, #4]
 285 0008 0B46     		mov	r3, r1
 286 000a FB70     		strb	r3, [r7, #3]
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 287              		.loc 2 73 5
 288 000c 00BF     		nop
 289 000e 0C37     		adds	r7, r7, #12
 290              	.LCFI27:
 291              		.cfi_def_cfa_offset 4
 292 0010 BD46     		mov	sp, r7
 293              	.LCFI28:
 294              		.cfi_def_cfa_register 13
 295              		@ sp needed
 296 0012 5DF8047B 		ldr	r7, [sp], #4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 10


 297              	.LCFI29:
 298              		.cfi_restore 7
 299              		.cfi_def_cfa_offset 0
 300 0016 7047     		bx	lr
 301              		.cfi_endproc
 302              	.LFE158:
 304              		.section	.text._ZN8touchgfx15UIEventListener15handleTickEventEv,"axG",%progbits,_ZN8touchgfx15UIEv
 305              		.align	1
 306              		.weak	_ZN8touchgfx15UIEventListener15handleTickEventEv
 307              		.syntax unified
 308              		.thumb
 309              		.thumb_func
 310              		.fpu fpv4-sp-d16
 312              	_ZN8touchgfx15UIEventListener15handleTickEventEv:
 313              	.LFB159:
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /**
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * This handler is invoked when a system tick event has been generated. The system tick
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      * period is configured in the HAL.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****      */
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handleTickEvent()
 314              		.loc 2 79 18
 315              		.cfi_startproc
 316              		@ args = 0, pretend = 0, frame = 8
 317              		@ frame_needed = 1, uses_anonymous_args = 0
 318              		@ link register save eliminated.
 319 0000 80B4     		push	{r7}
 320              	.LCFI30:
 321              		.cfi_def_cfa_offset 4
 322              		.cfi_offset 7, -4
 323 0002 83B0     		sub	sp, sp, #12
 324              	.LCFI31:
 325              		.cfi_def_cfa_offset 16
 326 0004 00AF     		add	r7, sp, #0
 327              	.LCFI32:
 328              		.cfi_def_cfa_register 7
 329 0006 7860     		str	r0, [r7, #4]
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 330              		.loc 2 81 5
 331 0008 00BF     		nop
 332 000a 0C37     		adds	r7, r7, #12
 333              	.LCFI33:
 334              		.cfi_def_cfa_offset 4
 335 000c BD46     		mov	sp, r7
 336              	.LCFI34:
 337              		.cfi_def_cfa_register 13
 338              		@ sp needed
 339 000e 5DF8047B 		ldr	r7, [sp], #4
 340              	.LCFI35:
 341              		.cfi_restore 7
 342              		.cfi_def_cfa_offset 0
 343 0012 7047     		bx	lr
 344              		.cfi_endproc
 345              	.LFE159:
 347              		.section	.text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv,"axG",%progbits,_ZN8
 348              		.align	1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 11


 349              		.weak	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
 350              		.syntax unified
 351              		.thumb
 352              		.thumb_func
 353              		.fpu fpv4-sp-d16
 355              	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:
 356              	.LFB160:
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /** This handler is invoked when a change screen event is pending. */
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual void handlePendingScreenTransition()
 357              		.loc 2 84 18
 358              		.cfi_startproc
 359              		@ args = 0, pretend = 0, frame = 8
 360              		@ frame_needed = 1, uses_anonymous_args = 0
 361              		@ link register save eliminated.
 362 0000 80B4     		push	{r7}
 363              	.LCFI36:
 364              		.cfi_def_cfa_offset 4
 365              		.cfi_offset 7, -4
 366 0002 83B0     		sub	sp, sp, #12
 367              	.LCFI37:
 368              		.cfi_def_cfa_offset 16
 369 0004 00AF     		add	r7, sp, #0
 370              	.LCFI38:
 371              		.cfi_def_cfa_register 7
 372 0006 7860     		str	r0, [r7, #4]
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 373              		.loc 2 86 5
 374 0008 00BF     		nop
 375 000a 0C37     		adds	r7, r7, #12
 376              	.LCFI39:
 377              		.cfi_def_cfa_offset 4
 378 000c BD46     		mov	sp, r7
 379              	.LCFI40:
 380              		.cfi_def_cfa_register 13
 381              		@ sp needed
 382 000e 5DF8047B 		ldr	r7, [sp], #4
 383              	.LCFI41:
 384              		.cfi_restore 7
 385              		.cfi_def_cfa_offset 0
 386 0012 7047     		bx	lr
 387              		.cfi_endproc
 388              	.LFE160:
 390              		.section	.text._ZN8touchgfx15UIEventListenerD2Ev,"axG",%progbits,_ZN8touchgfx15UIEventListenerD5Ev
 391              		.align	1
 392              		.weak	_ZN8touchgfx15UIEventListenerD2Ev
 393              		.syntax unified
 394              		.thumb
 395              		.thumb_func
 396              		.fpu fpv4-sp-d16
 398              	_ZN8touchgfx15UIEventListenerD2Ev:
 399              	.LFB162:
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp **** 
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     /** Finalizes an instance of the UIEventListener class. */
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     virtual ~UIEventListener()
 400              		.loc 2 89 13
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 12


 401              		.cfi_startproc
 402              		@ args = 0, pretend = 0, frame = 8
 403              		@ frame_needed = 1, uses_anonymous_args = 0
 404              		@ link register save eliminated.
 405 0000 80B4     		push	{r7}
 406              	.LCFI42:
 407              		.cfi_def_cfa_offset 4
 408              		.cfi_offset 7, -4
 409 0002 83B0     		sub	sp, sp, #12
 410              	.LCFI43:
 411              		.cfi_def_cfa_offset 16
 412 0004 00AF     		add	r7, sp, #0
 413              	.LCFI44:
 414              		.cfi_def_cfa_register 7
 415 0006 7860     		str	r0, [r7, #4]
 416              	.LBB6:
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
 417              		.loc 2 90 5
 418 0008 044A     		ldr	r2, .L11
 419 000a 7B68     		ldr	r3, [r7, #4]
 420 000c 1A60     		str	r2, [r3]
 421              	.LBE6:
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     }
 422              		.loc 2 91 5
 423 000e 7B68     		ldr	r3, [r7, #4]
 424 0010 1846     		mov	r0, r3
 425 0012 0C37     		adds	r7, r7, #12
 426              	.LCFI45:
 427              		.cfi_def_cfa_offset 4
 428 0014 BD46     		mov	sp, r7
 429              	.LCFI46:
 430              		.cfi_def_cfa_register 13
 431              		@ sp needed
 432 0016 5DF8047B 		ldr	r7, [sp], #4
 433              	.LCFI47:
 434              		.cfi_restore 7
 435              		.cfi_def_cfa_offset 0
 436 001a 7047     		bx	lr
 437              	.L12:
 438              		.align	2
 439              	.L11:
 440 001c 08000000 		.word	_ZTVN8touchgfx15UIEventListenerE+8
 441              		.cfi_endproc
 442              	.LFE162:
 444              		.weak	_ZN8touchgfx15UIEventListenerD1Ev
 445              		.thumb_set _ZN8touchgfx15UIEventListenerD1Ev,_ZN8touchgfx15UIEventListenerD2Ev
 446              		.section	.text._ZN8touchgfx15UIEventListenerD0Ev,"axG",%progbits,_ZN8touchgfx15UIEventListenerD5Ev
 447              		.align	1
 448              		.weak	_ZN8touchgfx15UIEventListenerD0Ev
 449              		.syntax unified
 450              		.thumb
 451              		.thumb_func
 452              		.fpu fpv4-sp-d16
 454              	_ZN8touchgfx15UIEventListenerD0Ev:
 455              	.LFB164:
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/UIEventListener.hpp ****     {
 456              		.loc 2 89 13
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 13


 457              		.cfi_startproc
 458              		@ args = 0, pretend = 0, frame = 8
 459              		@ frame_needed = 1, uses_anonymous_args = 0
 460 0000 80B5     		push	{r7, lr}
 461              	.LCFI48:
 462              		.cfi_def_cfa_offset 8
 463              		.cfi_offset 7, -8
 464              		.cfi_offset 14, -4
 465 0002 82B0     		sub	sp, sp, #8
 466              	.LCFI49:
 467              		.cfi_def_cfa_offset 16
 468 0004 00AF     		add	r7, sp, #0
 469              	.LCFI50:
 470              		.cfi_def_cfa_register 7
 471 0006 7860     		str	r0, [r7, #4]
 472              		.loc 2 91 5
 473 0008 7868     		ldr	r0, [r7, #4]
 474 000a FFF7FEFF 		bl	_ZN8touchgfx15UIEventListenerD1Ev
 475 000e 0421     		movs	r1, #4
 476 0010 7868     		ldr	r0, [r7, #4]
 477 0012 FFF7FEFF 		bl	_ZdlPvj
 478 0016 7B68     		ldr	r3, [r7, #4]
 479 0018 1846     		mov	r0, r3
 480 001a 0837     		adds	r7, r7, #8
 481              	.LCFI51:
 482              		.cfi_def_cfa_offset 8
 483 001c BD46     		mov	sp, r7
 484              	.LCFI52:
 485              		.cfi_def_cfa_register 13
 486              		@ sp needed
 487 001e 80BD     		pop	{r7, pc}
 488              		.cfi_endproc
 489              	.LFE164:
 491              		.section	.rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE,"a"
 492              		.align	1
 495              	_ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:
 496 0000 FEFF     		.short	-2
 497              		.section	.rodata._ZN8touchgfxL14BITMAP_INVALIDE,"a"
 498              		.align	1
 501              	_ZN8touchgfxL14BITMAP_INVALIDE:
 502 0000 FFFF     		.short	-1
 503              		.section	.text._ZN8touchgfx11Application15appSwitchScreenEh,"axG",%progbits,_ZN8touchgfx11Applicat
 504              		.align	1
 505              		.weak	_ZN8touchgfx11Application15appSwitchScreenEh
 506              		.syntax unified
 507              		.thumb
 508              		.thumb_func
 509              		.fpu fpv4-sp-d16
 511              	_ZN8touchgfx11Application15appSwitchScreenEh:
 512              	.LFB282:
 513              		.file 3 "Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 14


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
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****         return currentScreen;
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     }
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /**
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * Switch to another Screen. Will call tearDownScreen on current Screen before switching,
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * and subsequently call setupScreen and draw automatically for the new Screen.
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @param [in] newScreen A pointer to the new screen.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 15


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
 514              		.loc 3 74 18
 515              		.cfi_startproc
 516              		@ args = 0, pretend = 0, frame = 8
 517              		@ frame_needed = 1, uses_anonymous_args = 0
 518              		@ link register save eliminated.
 519 0000 80B4     		push	{r7}
 520              	.LCFI53:
 521              		.cfi_def_cfa_offset 4
 522              		.cfi_offset 7, -4
 523 0002 83B0     		sub	sp, sp, #12
 524              	.LCFI54:
 525              		.cfi_def_cfa_offset 16
 526 0004 00AF     		add	r7, sp, #0
 527              	.LCFI55:
 528              		.cfi_def_cfa_register 7
 529 0006 7860     		str	r0, [r7, #4]
 530 0008 0B46     		mov	r3, r1
 531 000a FB70     		strb	r3, [r7, #3]
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     {
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     }
 532              		.loc 3 76 5
 533 000c 00BF     		nop
 534 000e 0C37     		adds	r7, r7, #12
 535              	.LCFI56:
 536              		.cfi_def_cfa_offset 4
 537 0010 BD46     		mov	sp, r7
 538              	.LCFI57:
 539              		.cfi_def_cfa_register 13
 540              		@ sp needed
 541 0012 5DF8047B 		ldr	r7, [sp], #4
 542              	.LCFI58:
 543              		.cfi_restore 7
 544              		.cfi_def_cfa_offset 0
 545 0016 7047     		bx	lr
 546              		.cfi_endproc
 547              	.LFE282:
 549              		.section	.text._ZN8touchgfx11Application13requestRedrawERNS_4RectE,"axG",%progbits,_ZN8touchgfx11A
 550              		.align	1
 551              		.weak	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 552              		.syntax unified
 553              		.thumb
 554              		.thumb_func
 555              		.fpu fpv4-sp-d16
 557              	_ZN8touchgfx11Application13requestRedrawERNS_4RectE:
 558              	.LFB283:
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 16


  78:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /** An application specific function for requesting redraw of entire screen. */
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void requestRedraw();
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** 
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     /**
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * An application specific function for requesting redraw of given Rect.
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      *
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      * @param [in,out] rect The Rect that must be redrawn.
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****      */
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     virtual void requestRedraw(Rect& rect)
 559              		.loc 3 86 18
 560              		.cfi_startproc
 561              		@ args = 0, pretend = 0, frame = 8
 562              		@ frame_needed = 1, uses_anonymous_args = 0
 563              		@ link register save eliminated.
 564 0000 80B4     		push	{r7}
 565              	.LCFI59:
 566              		.cfi_def_cfa_offset 4
 567              		.cfi_offset 7, -4
 568 0002 83B0     		sub	sp, sp, #12
 569              	.LCFI60:
 570              		.cfi_def_cfa_offset 16
 571 0004 00AF     		add	r7, sp, #0
 572              	.LCFI61:
 573              		.cfi_def_cfa_register 7
 574 0006 7860     		str	r0, [r7, #4]
 575 0008 3960     		str	r1, [r7]
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     {
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****         redraw = rect;
 576              		.loc 3 88 16
 577 000a 7B68     		ldr	r3, [r7, #4]
 578 000c 3A68     		ldr	r2, [r7]
 579 000e 03F59673 		add	r3, r3, #300
 580 0012 1068     		ldr	r0, [r2]	@ unaligned
 581 0014 5168     		ldr	r1, [r2, #4]	@ unaligned
 582 0016 03C3     		stmia	r3!, {r0, r1}
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp ****     }
 583              		.loc 3 89 5
 584 0018 00BF     		nop
 585 001a 0C37     		adds	r7, r7, #12
 586              	.LCFI62:
 587              		.cfi_def_cfa_offset 4
 588 001c BD46     		mov	sp, r7
 589              	.LCFI63:
 590              		.cfi_def_cfa_register 13
 591              		@ sp needed
 592 001e 5DF8047B 		ldr	r7, [sp], #4
 593              	.LCFI64:
 594              		.cfi_restore 7
 595              		.cfi_def_cfa_offset 0
 596 0022 7047     		bx	lr
 597              		.cfi_endproc
 598              	.LFE283:
 600              		.section	.text._ZN8touchgfx15GenericCallbackIvvvED2Ev,"axG",%progbits,_ZN8touchgfx15GenericCallbac
 601              		.align	1
 602              		.weak	_ZN8touchgfx15GenericCallbackIvvvED2Ev
 603              		.syntax unified
 604              		.thumb
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 17


 605              		.thumb_func
 606              		.fpu fpv4-sp-d16
 608              	_ZN8touchgfx15GenericCallbackIvvvED2Ev:
 609              	.LFB292:
 610              		.file 4 "Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp"
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
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** public:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Finalizes an instance of the GenericCallback class. */
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual ~GenericCallback()
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 18


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
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  val1 This value will be passed as the first argument in the function call.
 103:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param  val2 This value will be passed as the second argument in the function call.
 104:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 105:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute(T1 val1, T2 val2) = 0;
 106:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 107:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 108:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 109:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 19


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
 159:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * GenericCallback is the base class for callbacks.
 160:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  *
 161:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * The reason this base class exists, is that a normal Callback requires the class type
 162:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * where the callback function resides to be known. This is problematic for ie.
 163:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * framework widgets like AbstractButton, on which it should be possible to register a
 164:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * callback on object types that are user-specific and thus unknown to AbstractButton.
 165:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * This is solved by having AbstractButton contain a pointer to a GenericCallback
 166:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****  * instead. This pointer must then be initialized to point on an instance of Callback,
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 20


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
 611              		.loc 4 179 13
 612              		.cfi_startproc
 613              		@ args = 0, pretend = 0, frame = 8
 614              		@ frame_needed = 1, uses_anonymous_args = 0
 615              		@ link register save eliminated.
 616 0000 80B4     		push	{r7}
 617              	.LCFI65:
 618              		.cfi_def_cfa_offset 4
 619              		.cfi_offset 7, -4
 620 0002 83B0     		sub	sp, sp, #12
 621              	.LCFI66:
 622              		.cfi_def_cfa_offset 16
 623 0004 00AF     		add	r7, sp, #0
 624              	.LCFI67:
 625              		.cfi_def_cfa_register 7
 626 0006 7860     		str	r0, [r7, #4]
 627              	.LBB7:
 180:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 628              		.loc 4 180 5
 629 0008 044A     		ldr	r2, .L19
 630 000a 7B68     		ldr	r3, [r7, #4]
 631 000c 1A60     		str	r2, [r3]
 632              	.LBE7:
 181:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 633              		.loc 4 181 5
 634 000e 7B68     		ldr	r3, [r7, #4]
 635 0010 1846     		mov	r0, r3
 636 0012 0C37     		adds	r7, r7, #12
 637              	.LCFI68:
 638              		.cfi_def_cfa_offset 4
 639 0014 BD46     		mov	sp, r7
 640              	.LCFI69:
 641              		.cfi_def_cfa_register 13
 642              		@ sp needed
 643 0016 5DF8047B 		ldr	r7, [sp], #4
 644              	.LCFI70:
 645              		.cfi_restore 7
 646              		.cfi_def_cfa_offset 0
 647 001a 7047     		bx	lr
 648              	.L20:
 649              		.align	2
 650              	.L19:
 651 001c 08000000 		.word	_ZTVN8touchgfx15GenericCallbackIvvvEE+8
 652              		.cfi_endproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 21


 653              	.LFE292:
 655              		.weak	_ZN8touchgfx15GenericCallbackIvvvED1Ev
 656              		.thumb_set _ZN8touchgfx15GenericCallbackIvvvED1Ev,_ZN8touchgfx15GenericCallbackIvvvED2Ev
 657              		.section	.text._ZN8touchgfx15GenericCallbackIvvvED0Ev,"axG",%progbits,_ZN8touchgfx15GenericCallbac
 658              		.align	1
 659              		.weak	_ZN8touchgfx15GenericCallbackIvvvED0Ev
 660              		.syntax unified
 661              		.thumb
 662              		.thumb_func
 663              		.fpu fpv4-sp-d16
 665              	_ZN8touchgfx15GenericCallbackIvvvED0Ev:
 666              	.LFB294:
 179:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 667              		.loc 4 179 13
 668              		.cfi_startproc
 669              		@ args = 0, pretend = 0, frame = 8
 670              		@ frame_needed = 1, uses_anonymous_args = 0
 671 0000 80B5     		push	{r7, lr}
 672              	.LCFI71:
 673              		.cfi_def_cfa_offset 8
 674              		.cfi_offset 7, -8
 675              		.cfi_offset 14, -4
 676 0002 82B0     		sub	sp, sp, #8
 677              	.LCFI72:
 678              		.cfi_def_cfa_offset 16
 679 0004 00AF     		add	r7, sp, #0
 680              	.LCFI73:
 681              		.cfi_def_cfa_register 7
 682 0006 7860     		str	r0, [r7, #4]
 683              		.loc 4 181 5
 684 0008 7868     		ldr	r0, [r7, #4]
 685 000a FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvED1Ev
 686 000e 0421     		movs	r1, #4
 687 0010 7868     		ldr	r0, [r7, #4]
 688 0012 FFF7FEFF 		bl	_ZdlPvj
 689 0016 7B68     		ldr	r3, [r7, #4]
 690 0018 1846     		mov	r0, r3
 691 001a 0837     		adds	r7, r7, #8
 692              	.LCFI74:
 693              		.cfi_def_cfa_offset 8
 694 001c BD46     		mov	sp, r7
 695              	.LCFI75:
 696              		.cfi_def_cfa_register 13
 697              		@ sp needed
 698 001e 80BD     		pop	{r7, pc}
 699              		.cfi_endproc
 700              	.LFE294:
 702              		.section	.text._ZN8touchgfx10TransitionC2Ev,"axG",%progbits,_ZN8touchgfx10TransitionC5Ev,comdat
 703              		.align	1
 704              		.weak	_ZN8touchgfx10TransitionC2Ev
 705              		.syntax unified
 706              		.thumb
 707              		.thumb_func
 708              		.fpu fpv4-sp-d16
 710              	_ZN8touchgfx10TransitionC2Ev:
 711              	.LFB376:
 712              		.file 5 "Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 22


   1:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  * @file touchgfx/transitions/Transition.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  * Declares the touchgfx::Transition class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** #ifndef TOUCHGFX_TRANSITION_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** #define TOUCHGFX_TRANSITION_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** #include <touchgfx/Application.hpp>
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** #include <touchgfx/containers/Container.hpp>
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** namespace touchgfx
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** {
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** /**
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  * The Transition class is the base class for Transitions. Implementations of Transition defines
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  * what happens when transitioning between Screens, which typically involves visual
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  * effects. An example of a transition implementation can be seen in example
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  * custom_transition_example. The most basic transition is the NoTransition class that
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  * does a transition without any visual effects.
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  *
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  * @see NoTransition, SlideTransition
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****  */
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** class Transition
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** {
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** public:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     /** Initializes a new instance of the Transition class. */
  40:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     Transition()
 713              		.loc 5 40 5
 714              		.cfi_startproc
 715              		@ args = 0, pretend = 0, frame = 8
 716              		@ frame_needed = 1, uses_anonymous_args = 0
 717              		@ link register save eliminated.
 718 0000 80B4     		push	{r7}
 719              	.LCFI76:
 720              		.cfi_def_cfa_offset 4
 721              		.cfi_offset 7, -4
 722 0002 83B0     		sub	sp, sp, #12
 723              	.LCFI77:
 724              		.cfi_def_cfa_offset 16
 725 0004 00AF     		add	r7, sp, #0
 726              	.LCFI78:
 727              		.cfi_def_cfa_register 7
 728 0006 7860     		str	r0, [r7, #4]
 729              	.LBB8:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 23


  41:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****         : screenContainer(0), done(false)
 730              		.loc 5 41 41
 731 0008 074A     		ldr	r2, .L25
 732 000a 7B68     		ldr	r3, [r7, #4]
 733 000c 1A60     		str	r2, [r3]
 734 000e 7B68     		ldr	r3, [r7, #4]
 735 0010 0022     		movs	r2, #0
 736 0012 5A60     		str	r2, [r3, #4]
 737 0014 7B68     		ldr	r3, [r7, #4]
 738 0016 0022     		movs	r2, #0
 739 0018 1A72     		strb	r2, [r3, #8]
 740              	.LBE8:
  42:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
  43:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     }
 741              		.loc 5 43 5
 742 001a 7B68     		ldr	r3, [r7, #4]
 743 001c 1846     		mov	r0, r3
 744 001e 0C37     		adds	r7, r7, #12
 745              	.LCFI79:
 746              		.cfi_def_cfa_offset 4
 747 0020 BD46     		mov	sp, r7
 748              	.LCFI80:
 749              		.cfi_def_cfa_register 13
 750              		@ sp needed
 751 0022 5DF8047B 		ldr	r7, [sp], #4
 752              	.LCFI81:
 753              		.cfi_restore 7
 754              		.cfi_def_cfa_offset 0
 755 0026 7047     		bx	lr
 756              	.L26:
 757              		.align	2
 758              	.L25:
 759 0028 08000000 		.word	_ZTVN8touchgfx10TransitionE+8
 760              		.cfi_endproc
 761              	.LFE376:
 763              		.weak	_ZN8touchgfx10TransitionC1Ev
 764              		.thumb_set _ZN8touchgfx10TransitionC1Ev,_ZN8touchgfx10TransitionC2Ev
 765              		.section	.text._ZN8touchgfx10TransitionD2Ev,"axG",%progbits,_ZN8touchgfx10TransitionD5Ev,comdat
 766              		.align	1
 767              		.weak	_ZN8touchgfx10TransitionD2Ev
 768              		.syntax unified
 769              		.thumb
 770              		.thumb_func
 771              		.fpu fpv4-sp-d16
 773              	_ZN8touchgfx10TransitionD2Ev:
 774              	.LFB379:
  44:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  45:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     /** Finalizes an instance of the Transition class. */
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     virtual ~Transition()
 775              		.loc 5 46 13
 776              		.cfi_startproc
 777              		@ args = 0, pretend = 0, frame = 8
 778              		@ frame_needed = 1, uses_anonymous_args = 0
 779              		@ link register save eliminated.
 780 0000 80B4     		push	{r7}
 781              	.LCFI82:
 782              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 24


 783              		.cfi_offset 7, -4
 784 0002 83B0     		sub	sp, sp, #12
 785              	.LCFI83:
 786              		.cfi_def_cfa_offset 16
 787 0004 00AF     		add	r7, sp, #0
 788              	.LCFI84:
 789              		.cfi_def_cfa_register 7
 790 0006 7860     		str	r0, [r7, #4]
 791              	.LBB9:
  47:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
 792              		.loc 5 47 5
 793 0008 044A     		ldr	r2, .L29
 794 000a 7B68     		ldr	r3, [r7, #4]
 795 000c 1A60     		str	r2, [r3]
 796              	.LBE9:
  48:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     }
 797              		.loc 5 48 5
 798 000e 7B68     		ldr	r3, [r7, #4]
 799 0010 1846     		mov	r0, r3
 800 0012 0C37     		adds	r7, r7, #12
 801              	.LCFI85:
 802              		.cfi_def_cfa_offset 4
 803 0014 BD46     		mov	sp, r7
 804              	.LCFI86:
 805              		.cfi_def_cfa_register 13
 806              		@ sp needed
 807 0016 5DF8047B 		ldr	r7, [sp], #4
 808              	.LCFI87:
 809              		.cfi_restore 7
 810              		.cfi_def_cfa_offset 0
 811 001a 7047     		bx	lr
 812              	.L30:
 813              		.align	2
 814              	.L29:
 815 001c 08000000 		.word	_ZTVN8touchgfx10TransitionE+8
 816              		.cfi_endproc
 817              	.LFE379:
 819              		.weak	_ZN8touchgfx10TransitionD1Ev
 820              		.thumb_set _ZN8touchgfx10TransitionD1Ev,_ZN8touchgfx10TransitionD2Ev
 821              		.section	.text._ZN8touchgfx10TransitionD0Ev,"axG",%progbits,_ZN8touchgfx10TransitionD5Ev,comdat
 822              		.align	1
 823              		.weak	_ZN8touchgfx10TransitionD0Ev
 824              		.syntax unified
 825              		.thumb
 826              		.thumb_func
 827              		.fpu fpv4-sp-d16
 829              	_ZN8touchgfx10TransitionD0Ev:
 830              	.LFB381:
  46:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
 831              		.loc 5 46 13
 832              		.cfi_startproc
 833              		@ args = 0, pretend = 0, frame = 8
 834              		@ frame_needed = 1, uses_anonymous_args = 0
 835 0000 80B5     		push	{r7, lr}
 836              	.LCFI88:
 837              		.cfi_def_cfa_offset 8
 838              		.cfi_offset 7, -8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 25


 839              		.cfi_offset 14, -4
 840 0002 82B0     		sub	sp, sp, #8
 841              	.LCFI89:
 842              		.cfi_def_cfa_offset 16
 843 0004 00AF     		add	r7, sp, #0
 844              	.LCFI90:
 845              		.cfi_def_cfa_register 7
 846 0006 7860     		str	r0, [r7, #4]
 847              		.loc 5 48 5
 848 0008 7868     		ldr	r0, [r7, #4]
 849 000a FFF7FEFF 		bl	_ZN8touchgfx10TransitionD1Ev
 850 000e 0C21     		movs	r1, #12
 851 0010 7868     		ldr	r0, [r7, #4]
 852 0012 FFF7FEFF 		bl	_ZdlPvj
 853 0016 7B68     		ldr	r3, [r7, #4]
 854 0018 1846     		mov	r0, r3
 855 001a 0837     		adds	r7, r7, #8
 856              	.LCFI91:
 857              		.cfi_def_cfa_offset 8
 858 001c BD46     		mov	sp, r7
 859              	.LCFI92:
 860              		.cfi_def_cfa_register 13
 861              		@ sp needed
 862 001e 80BD     		pop	{r7, pc}
 863              		.cfi_endproc
 864              	.LFE381:
 866              		.section	.text._ZN8touchgfx10Transition15handleTickEventEv,"axG",%progbits,_ZN8touchgfx10Transitio
 867              		.align	1
 868              		.weak	_ZN8touchgfx10Transition15handleTickEventEv
 869              		.syntax unified
 870              		.thumb
 871              		.thumb_func
 872              		.fpu fpv4-sp-d16
 874              	_ZN8touchgfx10Transition15handleTickEventEv:
 875              	.LFB382:
  49:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  50:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     /** Called for every tick when transitioning. */
  51:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     virtual void handleTickEvent()
 876              		.loc 5 51 18
 877              		.cfi_startproc
 878              		@ args = 0, pretend = 0, frame = 8
 879              		@ frame_needed = 1, uses_anonymous_args = 0
 880              		@ link register save eliminated.
 881 0000 80B4     		push	{r7}
 882              	.LCFI93:
 883              		.cfi_def_cfa_offset 4
 884              		.cfi_offset 7, -4
 885 0002 83B0     		sub	sp, sp, #12
 886              	.LCFI94:
 887              		.cfi_def_cfa_offset 16
 888 0004 00AF     		add	r7, sp, #0
 889              	.LCFI95:
 890              		.cfi_def_cfa_register 7
 891 0006 7860     		str	r0, [r7, #4]
  52:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
  53:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     }
 892              		.loc 5 53 5
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 26


 893 0008 00BF     		nop
 894 000a 0C37     		adds	r7, r7, #12
 895              	.LCFI96:
 896              		.cfi_def_cfa_offset 4
 897 000c BD46     		mov	sp, r7
 898              	.LCFI97:
 899              		.cfi_def_cfa_register 13
 900              		@ sp needed
 901 000e 5DF8047B 		ldr	r7, [sp], #4
 902              	.LCFI98:
 903              		.cfi_restore 7
 904              		.cfi_def_cfa_offset 0
 905 0012 7047     		bx	lr
 906              		.cfi_endproc
 907              	.LFE382:
 909              		.section	.text._ZN8touchgfx10Transition8tearDownEv,"axG",%progbits,_ZN8touchgfx10Transition8tearDo
 910              		.align	1
 911              		.weak	_ZN8touchgfx10Transition8tearDownEv
 912              		.syntax unified
 913              		.thumb
 914              		.thumb_func
 915              		.fpu fpv4-sp-d16
 917              	_ZN8touchgfx10Transition8tearDownEv:
 918              	.LFB384:
  54:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  55:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     /**
  56:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * Query if the transition is done transitioning. It is the responsibility of the
  57:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * inheriting class to set the underlying done flag once the transition has been
  58:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * completed.
  59:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      *
  60:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * @return True if the transition is done, false otherwise.
  61:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      */
  62:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     bool isDone() const
  63:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
  64:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****         return done;
  65:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     }
  66:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  67:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     /**
  68:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * Tears down the Animation. Called before the destructor is called, when the
  69:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * application changes the transition.
  70:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      */
  71:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     virtual void tearDown()
 919              		.loc 5 71 18
 920              		.cfi_startproc
 921              		@ args = 0, pretend = 0, frame = 8
 922              		@ frame_needed = 1, uses_anonymous_args = 0
 923              		@ link register save eliminated.
 924 0000 80B4     		push	{r7}
 925              	.LCFI99:
 926              		.cfi_def_cfa_offset 4
 927              		.cfi_offset 7, -4
 928 0002 83B0     		sub	sp, sp, #12
 929              	.LCFI100:
 930              		.cfi_def_cfa_offset 16
 931 0004 00AF     		add	r7, sp, #0
 932              	.LCFI101:
 933              		.cfi_def_cfa_register 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 27


 934 0006 7860     		str	r0, [r7, #4]
  72:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
  73:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     }
 935              		.loc 5 73 5
 936 0008 00BF     		nop
 937 000a 0C37     		adds	r7, r7, #12
 938              	.LCFI102:
 939              		.cfi_def_cfa_offset 4
 940 000c BD46     		mov	sp, r7
 941              	.LCFI103:
 942              		.cfi_def_cfa_register 13
 943              		@ sp needed
 944 000e 5DF8047B 		ldr	r7, [sp], #4
 945              	.LCFI104:
 946              		.cfi_restore 7
 947              		.cfi_def_cfa_offset 0
 948 0012 7047     		bx	lr
 949              		.cfi_endproc
 950              	.LFE384:
 952              		.section	.text._ZN8touchgfx10Transition4initEv,"axG",%progbits,_ZN8touchgfx10Transition4initEv,com
 953              		.align	1
 954              		.weak	_ZN8touchgfx10Transition4initEv
 955              		.syntax unified
 956              		.thumb
 957              		.thumb_func
 958              		.fpu fpv4-sp-d16
 960              	_ZN8touchgfx10Transition4initEv:
 961              	.LFB385:
  74:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  75:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     /**
  76:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * Initializes the transition. Called after the constructor is called, when the
  77:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * application changes the transition.
  78:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      */
  79:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     virtual void init()
 962              		.loc 5 79 18
 963              		.cfi_startproc
 964              		@ args = 0, pretend = 0, frame = 8
 965              		@ frame_needed = 1, uses_anonymous_args = 0
 966              		@ link register save eliminated.
 967 0000 80B4     		push	{r7}
 968              	.LCFI105:
 969              		.cfi_def_cfa_offset 4
 970              		.cfi_offset 7, -4
 971 0002 83B0     		sub	sp, sp, #12
 972              	.LCFI106:
 973              		.cfi_def_cfa_offset 16
 974 0004 00AF     		add	r7, sp, #0
 975              	.LCFI107:
 976              		.cfi_def_cfa_register 7
 977 0006 7860     		str	r0, [r7, #4]
  80:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
  81:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     }
 978              		.loc 5 81 5
 979 0008 00BF     		nop
 980 000a 0C37     		adds	r7, r7, #12
 981              	.LCFI108:
 982              		.cfi_def_cfa_offset 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 28


 983 000c BD46     		mov	sp, r7
 984              	.LCFI109:
 985              		.cfi_def_cfa_register 13
 986              		@ sp needed
 987 000e 5DF8047B 		ldr	r7, [sp], #4
 988              	.LCFI110:
 989              		.cfi_restore 7
 990              		.cfi_def_cfa_offset 0
 991 0012 7047     		bx	lr
 992              		.cfi_endproc
 993              	.LFE385:
 995              		.section	.text._ZN8touchgfx10Transition10invalidateEv,"axG",%progbits,_ZN8touchgfx10Transition10in
 996              		.align	1
 997              		.weak	_ZN8touchgfx10Transition10invalidateEv
 998              		.syntax unified
 999              		.thumb
 1000              		.thumb_func
 1001              		.fpu fpv4-sp-d16
 1003              	_ZN8touchgfx10Transition10invalidateEv:
 1004              	.LFB386:
  82:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  83:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     /**
  84:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * Invalidates the screen when starting the Transition. Default is
  85:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * to invalidate the whole screen. Subclasses can do partial
  86:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * invalidation.
  87:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      */
  88:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     virtual void invalidate()
 1005              		.loc 5 88 18
 1006              		.cfi_startproc
 1007              		@ args = 0, pretend = 0, frame = 8
 1008              		@ frame_needed = 1, uses_anonymous_args = 0
 1009 0000 80B5     		push	{r7, lr}
 1010              	.LCFI111:
 1011              		.cfi_def_cfa_offset 8
 1012              		.cfi_offset 7, -8
 1013              		.cfi_offset 14, -4
 1014 0002 82B0     		sub	sp, sp, #8
 1015              	.LCFI112:
 1016              		.cfi_def_cfa_offset 16
 1017 0004 00AF     		add	r7, sp, #0
 1018              	.LCFI113:
 1019              		.cfi_def_cfa_register 7
 1020 0006 7860     		str	r0, [r7, #4]
  89:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
  90:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****         Application::getInstance()->draw();
 1021              		.loc 5 90 33
 1022 0008 FFF7FEFF 		bl	_ZN8touchgfx11Application11getInstanceEv
 1023 000c 0346     		mov	r3, r0
 1024              		.loc 5 90 42
 1025 000e 1A68     		ldr	r2, [r3]
 1026 0010 3032     		adds	r2, r2, #48
 1027 0012 1268     		ldr	r2, [r2]
 1028              		.loc 5 90 41
 1029 0014 1846     		mov	r0, r3
 1030 0016 9047     		blx	r2
 1031              	.LVL0:
  91:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     }
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 29


 1032              		.loc 5 91 5
 1033 0018 00BF     		nop
 1034 001a 0837     		adds	r7, r7, #8
 1035              	.LCFI114:
 1036              		.cfi_def_cfa_offset 8
 1037 001c BD46     		mov	sp, r7
 1038              	.LCFI115:
 1039              		.cfi_def_cfa_register 13
 1040              		@ sp needed
 1041 001e 80BD     		pop	{r7, pc}
 1042              		.cfi_endproc
 1043              	.LFE386:
 1045              		.section	.text._ZN8touchgfx10Transition18setScreenContainerERNS_9ContainerE,"axG",%progbits,_ZN8to
 1046              		.align	1
 1047              		.weak	_ZN8touchgfx10Transition18setScreenContainerERNS_9ContainerE
 1048              		.syntax unified
 1049              		.thumb
 1050              		.thumb_func
 1051              		.fpu fpv4-sp-d16
 1053              	_ZN8touchgfx10Transition18setScreenContainerERNS_9ContainerE:
 1054              	.LFB387:
  92:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp **** 
  93:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     /**
  94:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * Sets the Screen Container. Is used by Screen to enable the transition to access the
  95:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * Container.
  96:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      *
  97:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      * @param [in] cont The Container the transition should have access to.
  98:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****      */
  99:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     virtual void setScreenContainer(Container& cont)
 1055              		.loc 5 99 18
 1056              		.cfi_startproc
 1057              		@ args = 0, pretend = 0, frame = 8
 1058              		@ frame_needed = 1, uses_anonymous_args = 0
 1059              		@ link register save eliminated.
 1060 0000 80B4     		push	{r7}
 1061              	.LCFI116:
 1062              		.cfi_def_cfa_offset 4
 1063              		.cfi_offset 7, -4
 1064 0002 83B0     		sub	sp, sp, #12
 1065              	.LCFI117:
 1066              		.cfi_def_cfa_offset 16
 1067 0004 00AF     		add	r7, sp, #0
 1068              	.LCFI118:
 1069              		.cfi_def_cfa_register 7
 1070 0006 7860     		str	r0, [r7, #4]
 1071 0008 3960     		str	r1, [r7]
 100:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     {
 101:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****         screenContainer = &cont;
 1072              		.loc 5 101 25
 1073 000a 7B68     		ldr	r3, [r7, #4]
 1074 000c 3A68     		ldr	r2, [r7]
 1075 000e 5A60     		str	r2, [r3, #4]
 102:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/Transition.hpp ****     }
 1076              		.loc 5 102 5
 1077 0010 00BF     		nop
 1078 0012 0C37     		adds	r7, r7, #12
 1079              	.LCFI119:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 30


 1080              		.cfi_def_cfa_offset 4
 1081 0014 BD46     		mov	sp, r7
 1082              	.LCFI120:
 1083              		.cfi_def_cfa_register 13
 1084              		@ sp needed
 1085 0016 5DF8047B 		ldr	r7, [sp], #4
 1086              	.LCFI121:
 1087              		.cfi_restore 7
 1088              		.cfi_def_cfa_offset 0
 1089 001a 7047     		bx	lr
 1090              		.cfi_endproc
 1091              	.LFE387:
 1093              		.section	.text._ZN8touchgfx11ApplicationD2Ev,"axG",%progbits,_ZN8touchgfx11ApplicationD5Ev,comdat
 1094              		.align	1
 1095              		.weak	_ZN8touchgfx11ApplicationD2Ev
 1096              		.syntax unified
 1097              		.thumb
 1098              		.thumb_func
 1099              		.fpu fpv4-sp-d16
 1101              	_ZN8touchgfx11ApplicationD2Ev:
 1102              	.LFB412:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 1103              		.loc 3 39 7
 1104              		.cfi_startproc
 1105              		@ args = 0, pretend = 0, frame = 8
 1106              		@ frame_needed = 1, uses_anonymous_args = 0
 1107 0000 80B5     		push	{r7, lr}
 1108              	.LCFI122:
 1109              		.cfi_def_cfa_offset 8
 1110              		.cfi_offset 7, -8
 1111              		.cfi_offset 14, -4
 1112 0002 82B0     		sub	sp, sp, #8
 1113              	.LCFI123:
 1114              		.cfi_def_cfa_offset 16
 1115 0004 00AF     		add	r7, sp, #0
 1116              	.LCFI124:
 1117              		.cfi_def_cfa_register 7
 1118 0006 7860     		str	r0, [r7, #4]
 1119              	.LBB10:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 1120              		.loc 3 39 7
 1121 0008 054A     		ldr	r2, .L40
 1122 000a 7B68     		ldr	r3, [r7, #4]
 1123 000c 1A60     		str	r2, [r3]
 1124 000e 7B68     		ldr	r3, [r7, #4]
 1125 0010 1846     		mov	r0, r3
 1126 0012 FFF7FEFF 		bl	_ZN8touchgfx15UIEventListenerD2Ev
 1127              	.LBE10:
 1128 0016 7B68     		ldr	r3, [r7, #4]
 1129 0018 1846     		mov	r0, r3
 1130 001a 0837     		adds	r7, r7, #8
 1131              	.LCFI125:
 1132              		.cfi_def_cfa_offset 8
 1133 001c BD46     		mov	sp, r7
 1134              	.LCFI126:
 1135              		.cfi_def_cfa_register 13
 1136              		@ sp needed
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 31


 1137 001e 80BD     		pop	{r7, pc}
 1138              	.L41:
 1139              		.align	2
 1140              	.L40:
 1141 0020 08000000 		.word	_ZTVN8touchgfx11ApplicationE+8
 1142              		.cfi_endproc
 1143              	.LFE412:
 1145              		.weak	_ZN8touchgfx11ApplicationD1Ev
 1146              		.thumb_set _ZN8touchgfx11ApplicationD1Ev,_ZN8touchgfx11ApplicationD2Ev
 1147              		.section	.text._ZN8touchgfx11ApplicationD0Ev,"axG",%progbits,_ZN8touchgfx11ApplicationD5Ev,comdat
 1148              		.align	1
 1149              		.weak	_ZN8touchgfx11ApplicationD0Ev
 1150              		.syntax unified
 1151              		.thumb
 1152              		.thumb_func
 1153              		.fpu fpv4-sp-d16
 1155              	_ZN8touchgfx11ApplicationD0Ev:
 1156              	.LFB414:
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 1157              		.loc 3 39 7
 1158              		.cfi_startproc
 1159              		@ args = 0, pretend = 0, frame = 8
 1160              		@ frame_needed = 1, uses_anonymous_args = 0
 1161 0000 80B5     		push	{r7, lr}
 1162              	.LCFI127:
 1163              		.cfi_def_cfa_offset 8
 1164              		.cfi_offset 7, -8
 1165              		.cfi_offset 14, -4
 1166 0002 82B0     		sub	sp, sp, #8
 1167              	.LCFI128:
 1168              		.cfi_def_cfa_offset 16
 1169 0004 00AF     		add	r7, sp, #0
 1170              	.LCFI129:
 1171              		.cfi_def_cfa_register 7
 1172 0006 7860     		str	r0, [r7, #4]
  39:Middlewares/ST/touchgfx/framework/include/touchgfx/Application.hpp **** {
 1173              		.loc 3 39 7
 1174 0008 7868     		ldr	r0, [r7, #4]
 1175 000a FFF7FEFF 		bl	_ZN8touchgfx11ApplicationD1Ev
 1176 000e 4FF49C71 		mov	r1, #312
 1177 0012 7868     		ldr	r0, [r7, #4]
 1178 0014 FFF7FEFF 		bl	_ZdlPvj
 1179 0018 7B68     		ldr	r3, [r7, #4]
 1180 001a 1846     		mov	r0, r3
 1181 001c 0837     		adds	r7, r7, #8
 1182              	.LCFI130:
 1183              		.cfi_def_cfa_offset 8
 1184 001e BD46     		mov	sp, r7
 1185              	.LCFI131:
 1186              		.cfi_def_cfa_register 13
 1187              		@ sp needed
 1188 0020 80BD     		pop	{r7, pc}
 1189              		.cfi_endproc
 1190              	.LFE414:
 1192              		.section	.text._ZN8touchgfx14MVPApplicationC2Ev,"axG",%progbits,_ZN8touchgfx14MVPApplicationC5Ev,c
 1193              		.align	1
 1194              		.weak	_ZN8touchgfx14MVPApplicationC2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 32


 1195              		.syntax unified
 1196              		.thumb
 1197              		.thumb_func
 1198              		.fpu fpv4-sp-d16
 1200              	_ZN8touchgfx14MVPApplicationC2Ev:
 1201              	.LFB415:
 1202              		.file 6 "Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp"
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
 1203              		.loc 6 47 5
 1204              		.cfi_startproc
 1205              		@ args = 0, pretend = 0, frame = 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 33


 1206              		@ frame_needed = 1, uses_anonymous_args = 0
 1207 0000 80B5     		push	{r7, lr}
 1208              	.LCFI132:
 1209              		.cfi_def_cfa_offset 8
 1210              		.cfi_offset 7, -8
 1211              		.cfi_offset 14, -4
 1212 0002 82B0     		sub	sp, sp, #8
 1213              	.LCFI133:
 1214              		.cfi_def_cfa_offset 16
 1215 0004 00AF     		add	r7, sp, #0
 1216              	.LCFI134:
 1217              		.cfi_def_cfa_register 7
 1218 0006 7860     		str	r0, [r7, #4]
 1219              	.LBB11:
  48:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         : currentPresenter(0),
  49:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****           pendingScreenTransitionCallback(0)
 1220              		.loc 6 49 44
 1221 0008 7B68     		ldr	r3, [r7, #4]
 1222 000a 1846     		mov	r0, r3
 1223 000c FFF7FEFF 		bl	_ZN8touchgfx11ApplicationC2Ev
 1224 0010 094A     		ldr	r2, .L46
 1225 0012 7B68     		ldr	r3, [r7, #4]
 1226 0014 1A60     		str	r2, [r3]
 1227 0016 7B68     		ldr	r3, [r7, #4]
 1228 0018 0022     		movs	r2, #0
 1229 001a C3F83821 		str	r2, [r3, #312]
 1230 001e 7B68     		ldr	r3, [r7, #4]
 1231 0020 0022     		movs	r2, #0
 1232 0022 C3F83C21 		str	r2, [r3, #316]
  50:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  51:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         instance = this;
 1233              		.loc 6 51 18
 1234 0026 7B68     		ldr	r3, [r7, #4]
 1235 0028 044A     		ldr	r2, .L46+4
 1236 002a 1360     		str	r3, [r2]
 1237              	.LBE11:
  52:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 1238              		.loc 6 52 5
 1239 002c 7B68     		ldr	r3, [r7, #4]
 1240 002e 1846     		mov	r0, r3
 1241 0030 0837     		adds	r7, r7, #8
 1242              	.LCFI135:
 1243              		.cfi_def_cfa_offset 8
 1244 0032 BD46     		mov	sp, r7
 1245              	.LCFI136:
 1246              		.cfi_def_cfa_register 13
 1247              		@ sp needed
 1248 0034 80BD     		pop	{r7, pc}
 1249              	.L47:
 1250 0036 00BF     		.align	2
 1251              	.L46:
 1252 0038 08000000 		.word	_ZTVN8touchgfx14MVPApplicationE+8
 1253 003c 00000000 		.word	_ZN8touchgfx11Application8instanceE
 1254              		.cfi_endproc
 1255              	.LFE415:
 1257              		.weak	_ZN8touchgfx14MVPApplicationC1Ev
 1258              		.thumb_set _ZN8touchgfx14MVPApplicationC1Ev,_ZN8touchgfx14MVPApplicationC2Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 34


 1259              		.section	.text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv,"axG",%progbits,_ZN8t
 1260              		.align	1
 1261              		.weak	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 1262              		.syntax unified
 1263              		.thumb
 1264              		.thumb_func
 1265              		.fpu fpv4-sp-d16
 1267              	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:
 1268              	.LFB417:
  53:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  54:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     /**
  55:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      * Handles the pending screen transition.
  56:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      *
  57:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      * Delegates the work to evaluatePendingScreenTransition()
  58:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****      */
  59:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     virtual void handlePendingScreenTransition()
 1269              		.loc 6 59 18
 1270              		.cfi_startproc
 1271              		@ args = 0, pretend = 0, frame = 8
 1272              		@ frame_needed = 1, uses_anonymous_args = 0
 1273 0000 80B5     		push	{r7, lr}
 1274              	.LCFI137:
 1275              		.cfi_def_cfa_offset 8
 1276              		.cfi_offset 7, -8
 1277              		.cfi_offset 14, -4
 1278 0002 82B0     		sub	sp, sp, #8
 1279              	.LCFI138:
 1280              		.cfi_def_cfa_offset 16
 1281 0004 00AF     		add	r7, sp, #0
 1282              	.LCFI139:
 1283              		.cfi_def_cfa_register 7
 1284 0006 7860     		str	r0, [r7, #4]
  60:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  61:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         evaluatePendingScreenTransition();
 1285              		.loc 6 61 40
 1286 0008 7868     		ldr	r0, [r7, #4]
 1287 000a FFF7FEFF 		bl	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
  62:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 1288              		.loc 6 62 5
 1289 000e 00BF     		nop
 1290 0010 0837     		adds	r7, r7, #8
 1291              	.LCFI140:
 1292              		.cfi_def_cfa_offset 8
 1293 0012 BD46     		mov	sp, r7
 1294              	.LCFI141:
 1295              		.cfi_def_cfa_register 13
 1296              		@ sp needed
 1297 0014 80BD     		pop	{r7, pc}
 1298              		.cfi_endproc
 1299              	.LFE417:
 1301              		.section	.text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv,"axG",%progbits,_ZN
 1302              		.align	1
 1303              		.weak	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
 1304              		.syntax unified
 1305              		.thumb
 1306              		.thumb_func
 1307              		.fpu fpv4-sp-d16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 35


 1309              	_ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:
 1310              	.LFB418:
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
 1311              		.loc 6 73 10
 1312              		.cfi_startproc
 1313              		@ args = 0, pretend = 0, frame = 8
 1314              		@ frame_needed = 1, uses_anonymous_args = 0
 1315 0000 80B5     		push	{r7, lr}
 1316              	.LCFI142:
 1317              		.cfi_def_cfa_offset 8
 1318              		.cfi_offset 7, -8
 1319              		.cfi_offset 14, -4
 1320 0002 82B0     		sub	sp, sp, #8
 1321              	.LCFI143:
 1322              		.cfi_def_cfa_offset 16
 1323 0004 00AF     		add	r7, sp, #0
 1324              	.LCFI144:
 1325              		.cfi_def_cfa_register 7
 1326 0006 7860     		str	r0, [r7, #4]
  74:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  75:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         if (pendingScreenTransitionCallback && pendingScreenTransitionCallback->isValid())
 1327              		.loc 6 75 13
 1328 0008 7B68     		ldr	r3, [r7, #4]
 1329 000a D3F83C31 		ldr	r3, [r3, #316]
 1330              		.loc 6 75 45
 1331 000e 002B     		cmp	r3, #0
 1332 0010 0FD0     		beq	.L50
 1333              		.loc 6 75 48 discriminator 1
 1334 0012 7B68     		ldr	r3, [r7, #4]
 1335 0014 D3F83C21 		ldr	r2, [r3, #316]
 1336 0018 7B68     		ldr	r3, [r7, #4]
 1337 001a D3F83C31 		ldr	r3, [r3, #316]
 1338              		.loc 6 75 89 discriminator 1
 1339 001e 1B68     		ldr	r3, [r3]
 1340 0020 0C33     		adds	r3, r3, #12
 1341 0022 1B68     		ldr	r3, [r3]
 1342              		.loc 6 75 88 discriminator 1
 1343 0024 1046     		mov	r0, r2
 1344 0026 9847     		blx	r3
 1345              	.LVL1:
 1346 0028 0346     		mov	r3, r0
 1347              		.loc 6 75 45 discriminator 1
 1348 002a 002B     		cmp	r3, #0
 1349 002c 01D0     		beq	.L50
 1350              		.loc 6 75 45 is_stmt 0 discriminator 3
 1351 002e 0123     		movs	r3, #1
 1352 0030 00E0     		b	.L51
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 36


 1353              	.L50:
 1354              		.loc 6 75 45 discriminator 4
 1355 0032 0023     		movs	r3, #0
 1356              	.L51:
 1357              		.loc 6 75 9 is_stmt 1 discriminator 6
 1358 0034 002B     		cmp	r3, #0
 1359 0036 0ED0     		beq	.L53
  76:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         {
  77:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****             pendingScreenTransitionCallback->execute();
 1360              		.loc 6 77 13
 1361 0038 7B68     		ldr	r3, [r7, #4]
 1362 003a D3F83C21 		ldr	r2, [r3, #316]
 1363 003e 7B68     		ldr	r3, [r7, #4]
 1364 0040 D3F83C31 		ldr	r3, [r3, #316]
 1365              		.loc 6 77 54
 1366 0044 1B68     		ldr	r3, [r3]
 1367 0046 0833     		adds	r3, r3, #8
 1368 0048 1B68     		ldr	r3, [r3]
 1369              		.loc 6 77 53
 1370 004a 1046     		mov	r0, r2
 1371 004c 9847     		blx	r3
 1372              	.LVL2:
  78:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****             pendingScreenTransitionCallback = 0;
 1373              		.loc 6 78 45
 1374 004e 7B68     		ldr	r3, [r7, #4]
 1375 0050 0022     		movs	r2, #0
 1376 0052 C3F83C21 		str	r2, [r3, #316]
 1377              	.L53:
  79:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         }
  80:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 1378              		.loc 6 80 5
 1379 0056 00BF     		nop
 1380 0058 0837     		adds	r7, r7, #8
 1381              	.LCFI145:
 1382              		.cfi_def_cfa_offset 8
 1383 005a BD46     		mov	sp, r7
 1384              	.LCFI146:
 1385              		.cfi_def_cfa_register 13
 1386              		@ sp needed
 1387 005c 80BD     		pop	{r7, pc}
 1388              		.cfi_endproc
 1389              	.LFE418:
 1391              		.section	.text._ZN5Model4bindEP13ModelListener,"axG",%progbits,_ZN5Model4bindEP13ModelListener,com
 1392              		.align	1
 1393              		.weak	_ZN5Model4bindEP13ModelListener
 1394              		.syntax unified
 1395              		.thumb
 1396              		.thumb_func
 1397              		.fpu fpv4-sp-d16
 1399              	_ZN5Model4bindEP13ModelListener:
 1400              	.LFB422:
 1401              		.file 7 "Src/gui/include/gui/model/Model.hpp"
   1:Src/gui/include/gui/model/Model.hpp **** #ifndef MODEL_HPP
   2:Src/gui/include/gui/model/Model.hpp **** #define MODEL_HPP
   3:Src/gui/include/gui/model/Model.hpp **** 
   4:Src/gui/include/gui/model/Model.hpp **** class ModelListener;
   5:Src/gui/include/gui/model/Model.hpp **** 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 37


   6:Src/gui/include/gui/model/Model.hpp **** class Model
   7:Src/gui/include/gui/model/Model.hpp **** {
   8:Src/gui/include/gui/model/Model.hpp **** public:
   9:Src/gui/include/gui/model/Model.hpp ****     Model();
  10:Src/gui/include/gui/model/Model.hpp **** 
  11:Src/gui/include/gui/model/Model.hpp ****     void bind(ModelListener* listener)
 1402              		.loc 7 11 10
 1403              		.cfi_startproc
 1404              		@ args = 0, pretend = 0, frame = 8
 1405              		@ frame_needed = 1, uses_anonymous_args = 0
 1406              		@ link register save eliminated.
 1407 0000 80B4     		push	{r7}
 1408              	.LCFI147:
 1409              		.cfi_def_cfa_offset 4
 1410              		.cfi_offset 7, -4
 1411 0002 83B0     		sub	sp, sp, #12
 1412              	.LCFI148:
 1413              		.cfi_def_cfa_offset 16
 1414 0004 00AF     		add	r7, sp, #0
 1415              	.LCFI149:
 1416              		.cfi_def_cfa_register 7
 1417 0006 7860     		str	r0, [r7, #4]
 1418 0008 3960     		str	r1, [r7]
  12:Src/gui/include/gui/model/Model.hpp ****     {
  13:Src/gui/include/gui/model/Model.hpp ****         modelListener = listener;
 1419              		.loc 7 13 23
 1420 000a 7B68     		ldr	r3, [r7, #4]
 1421 000c 3A68     		ldr	r2, [r7]
 1422 000e 1A60     		str	r2, [r3]
  14:Src/gui/include/gui/model/Model.hpp ****     }
 1423              		.loc 7 14 5
 1424 0010 00BF     		nop
 1425 0012 0C37     		adds	r7, r7, #12
 1426              	.LCFI150:
 1427              		.cfi_def_cfa_offset 4
 1428 0014 BD46     		mov	sp, r7
 1429              	.LCFI151:
 1430              		.cfi_def_cfa_register 13
 1431              		@ sp needed
 1432 0016 5DF8047B 		ldr	r7, [sp], #4
 1433              	.LCFI152:
 1434              		.cfi_restore 7
 1435              		.cfi_def_cfa_offset 0
 1436 001a 7047     		bx	lr
 1437              		.cfi_endproc
 1438              	.LFE422:
 1440              		.section	.text._ZN8touchgfx14MVPApplicationD2Ev,"axG",%progbits,_ZN8touchgfx14MVPApplicationD5Ev,c
 1441              		.align	1
 1442              		.weak	_ZN8touchgfx14MVPApplicationD2Ev
 1443              		.syntax unified
 1444              		.thumb
 1445              		.thumb_func
 1446              		.fpu fpv4-sp-d16
 1448              	_ZN8touchgfx14MVPApplicationD2Ev:
 1449              	.LFB425:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 1450              		.loc 6 43 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 38


 1451              		.cfi_startproc
 1452              		@ args = 0, pretend = 0, frame = 8
 1453              		@ frame_needed = 1, uses_anonymous_args = 0
 1454 0000 80B5     		push	{r7, lr}
 1455              	.LCFI153:
 1456              		.cfi_def_cfa_offset 8
 1457              		.cfi_offset 7, -8
 1458              		.cfi_offset 14, -4
 1459 0002 82B0     		sub	sp, sp, #8
 1460              	.LCFI154:
 1461              		.cfi_def_cfa_offset 16
 1462 0004 00AF     		add	r7, sp, #0
 1463              	.LCFI155:
 1464              		.cfi_def_cfa_register 7
 1465 0006 7860     		str	r0, [r7, #4]
 1466              	.LBB12:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 1467              		.loc 6 43 7
 1468 0008 054A     		ldr	r2, .L57
 1469 000a 7B68     		ldr	r3, [r7, #4]
 1470 000c 1A60     		str	r2, [r3]
 1471 000e 7B68     		ldr	r3, [r7, #4]
 1472 0010 1846     		mov	r0, r3
 1473 0012 FFF7FEFF 		bl	_ZN8touchgfx11ApplicationD2Ev
 1474              	.LBE12:
 1475 0016 7B68     		ldr	r3, [r7, #4]
 1476 0018 1846     		mov	r0, r3
 1477 001a 0837     		adds	r7, r7, #8
 1478              	.LCFI156:
 1479              		.cfi_def_cfa_offset 8
 1480 001c BD46     		mov	sp, r7
 1481              	.LCFI157:
 1482              		.cfi_def_cfa_register 13
 1483              		@ sp needed
 1484 001e 80BD     		pop	{r7, pc}
 1485              	.L58:
 1486              		.align	2
 1487              	.L57:
 1488 0020 08000000 		.word	_ZTVN8touchgfx14MVPApplicationE+8
 1489              		.cfi_endproc
 1490              	.LFE425:
 1492              		.weak	_ZN8touchgfx14MVPApplicationD1Ev
 1493              		.thumb_set _ZN8touchgfx14MVPApplicationD1Ev,_ZN8touchgfx14MVPApplicationD2Ev
 1494              		.section	.text._ZN8touchgfx14MVPApplicationD0Ev,"axG",%progbits,_ZN8touchgfx14MVPApplicationD5Ev,c
 1495              		.align	1
 1496              		.weak	_ZN8touchgfx14MVPApplicationD0Ev
 1497              		.syntax unified
 1498              		.thumb
 1499              		.thumb_func
 1500              		.fpu fpv4-sp-d16
 1502              	_ZN8touchgfx14MVPApplicationD0Ev:
 1503              	.LFB427:
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 1504              		.loc 6 43 7
 1505              		.cfi_startproc
 1506              		@ args = 0, pretend = 0, frame = 8
 1507              		@ frame_needed = 1, uses_anonymous_args = 0
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 39


 1508 0000 80B5     		push	{r7, lr}
 1509              	.LCFI158:
 1510              		.cfi_def_cfa_offset 8
 1511              		.cfi_offset 7, -8
 1512              		.cfi_offset 14, -4
 1513 0002 82B0     		sub	sp, sp, #8
 1514              	.LCFI159:
 1515              		.cfi_def_cfa_offset 16
 1516 0004 00AF     		add	r7, sp, #0
 1517              	.LCFI160:
 1518              		.cfi_def_cfa_register 7
 1519 0006 7860     		str	r0, [r7, #4]
  43:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 1520              		.loc 6 43 7
 1521 0008 7868     		ldr	r0, [r7, #4]
 1522 000a FFF7FEFF 		bl	_ZN8touchgfx14MVPApplicationD1Ev
 1523 000e 4FF4A071 		mov	r1, #320
 1524 0012 7868     		ldr	r0, [r7, #4]
 1525 0014 FFF7FEFF 		bl	_ZdlPvj
 1526 0018 7B68     		ldr	r3, [r7, #4]
 1527 001a 1846     		mov	r0, r3
 1528 001c 0837     		adds	r7, r7, #8
 1529              	.LCFI161:
 1530              		.cfi_def_cfa_offset 8
 1531 001e BD46     		mov	sp, r7
 1532              	.LCFI162:
 1533              		.cfi_def_cfa_register 13
 1534              		@ sp needed
 1535 0020 80BD     		pop	{r7, pc}
 1536              		.cfi_endproc
 1537              	.LFE427:
 1539              		.section	.text._ZN23FrontendApplicationBaseD2Ev,"axG",%progbits,_ZN23FrontendApplicationBaseD5Ev,c
 1540              		.align	1
 1541              		.weak	_ZN23FrontendApplicationBaseD2Ev
 1542              		.syntax unified
 1543              		.thumb
 1544              		.thumb_func
 1545              		.fpu fpv4-sp-d16
 1547              	_ZN23FrontendApplicationBaseD2Ev:
 1548              	.LFB428:
 1549              		.file 8 "Src/generated/gui_generated/include/gui_generated/common/FrontendApplicationBase.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 40


 1550              		.loc 8 16 13
 1551              		.cfi_startproc
 1552              		@ args = 0, pretend = 0, frame = 8
 1553              		@ frame_needed = 1, uses_anonymous_args = 0
 1554 0000 80B5     		push	{r7, lr}
 1555              	.LCFI163:
 1556              		.cfi_def_cfa_offset 8
 1557              		.cfi_offset 7, -8
 1558              		.cfi_offset 14, -4
 1559 0002 82B0     		sub	sp, sp, #8
 1560              	.LCFI164:
 1561              		.cfi_def_cfa_offset 16
 1562 0004 00AF     		add	r7, sp, #0
 1563              	.LCFI165:
 1564              		.cfi_def_cfa_register 7
 1565 0006 7860     		str	r0, [r7, #4]
 1566              	.LBB13:
 1567              		.loc 8 16 40
 1568 0008 084A     		ldr	r2, .L63
 1569 000a 7B68     		ldr	r3, [r7, #4]
 1570 000c 1A60     		str	r2, [r3]
 1571 000e 7B68     		ldr	r3, [r7, #4]
 1572 0010 03F5A073 		add	r3, r3, #320
 1573 0014 1846     		mov	r0, r3
 1574 0016 FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 1575 001a 7B68     		ldr	r3, [r7, #4]
 1576 001c 1846     		mov	r0, r3
 1577 001e FFF7FEFF 		bl	_ZN8touchgfx14MVPApplicationD2Ev
 1578              	.LBE13:
 1579              		.loc 8 16 42
 1580 0022 7B68     		ldr	r3, [r7, #4]
 1581 0024 1846     		mov	r0, r3
 1582 0026 0837     		adds	r7, r7, #8
 1583              	.LCFI166:
 1584              		.cfi_def_cfa_offset 8
 1585 0028 BD46     		mov	sp, r7
 1586              	.LCFI167:
 1587              		.cfi_def_cfa_register 13
 1588              		@ sp needed
 1589 002a 80BD     		pop	{r7, pc}
 1590              	.L64:
 1591              		.align	2
 1592              	.L63:
 1593 002c 08000000 		.word	_ZTV23FrontendApplicationBase+8
 1594              		.cfi_endproc
 1595              	.LFE428:
 1597              		.weak	_ZN23FrontendApplicationBaseD1Ev
 1598              		.thumb_set _ZN23FrontendApplicationBaseD1Ev,_ZN23FrontendApplicationBaseD2Ev
 1599              		.section	.text._ZN23FrontendApplicationBaseD0Ev,"axG",%progbits,_ZN23FrontendApplicationBaseD5Ev,c
 1600              		.align	1
 1601              		.weak	_ZN23FrontendApplicationBaseD0Ev
 1602              		.syntax unified
 1603              		.thumb
 1604              		.thumb_func
 1605              		.fpu fpv4-sp-d16
 1607              	_ZN23FrontendApplicationBaseD0Ev:
 1608              	.LFB430:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 41


 1609              		.loc 8 16 13
 1610              		.cfi_startproc
 1611              		@ args = 0, pretend = 0, frame = 8
 1612              		@ frame_needed = 1, uses_anonymous_args = 0
 1613 0000 80B5     		push	{r7, lr}
 1614              	.LCFI168:
 1615              		.cfi_def_cfa_offset 8
 1616              		.cfi_offset 7, -8
 1617              		.cfi_offset 14, -4
 1618 0002 82B0     		sub	sp, sp, #8
 1619              	.LCFI169:
 1620              		.cfi_def_cfa_offset 16
 1621 0004 00AF     		add	r7, sp, #0
 1622              	.LCFI170:
 1623              		.cfi_def_cfa_register 7
 1624 0006 7860     		str	r0, [r7, #4]
 1625              		.loc 8 16 42
 1626 0008 7868     		ldr	r0, [r7, #4]
 1627 000a FFF7FEFF 		bl	_ZN23FrontendApplicationBaseD1Ev
 1628 000e 4FF4AC71 		mov	r1, #344
 1629 0012 7868     		ldr	r0, [r7, #4]
 1630 0014 FFF7FEFF 		bl	_ZdlPvj
 1631 0018 7B68     		ldr	r3, [r7, #4]
 1632 001a 1846     		mov	r0, r3
 1633 001c 0837     		adds	r7, r7, #8
 1634              	.LCFI171:
 1635              		.cfi_def_cfa_offset 8
 1636 001e BD46     		mov	sp, r7
 1637              	.LCFI172:
 1638              		.cfi_def_cfa_register 13
 1639              		@ sp needed
 1640 0020 80BD     		pop	{r7, pc}
 1641              		.cfi_endproc
 1642              	.LFE430:
 1644              		.section	.text._ZN8touchgfx12NoTransition15handleTickEventEv,"axG",%progbits,_ZN8touchgfx12NoTrans
 1645              		.align	1
 1646              		.weak	_ZN8touchgfx12NoTransition15handleTickEventEv
 1647              		.syntax unified
 1648              		.thumb
 1649              		.thumb_func
 1650              		.fpu fpv4-sp-d16
 1652              	_ZN8touchgfx12NoTransition15handleTickEventEv:
 1653              	.LFB435:
 1654              		.file 9 "Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp"
   1:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 42


  14:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  * @file touchgfx/transitions/NoTransition.hpp
  15:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  * Declares the touchgfx::NoTransition class.
  17:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** #ifndef TOUCHGFX_NOTRANSITION_HPP
  19:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** #define TOUCHGFX_NOTRANSITION_HPP
  20:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** #include <touchgfx/transitions/Transition.hpp>
  22:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** 
  23:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** namespace touchgfx
  24:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** {
  25:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** /**
  26:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  * The most simple Transition without any visual effects. THe screen transition is done by
  27:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  * immediately replace the current Screen with a new Screen.
  28:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  *
  29:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  * @see Transition
  30:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****  */
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** class NoTransition : public Transition
  32:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** {
  33:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** public:
  34:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****     /** Indicates that the transition is done after the first tick. */
  35:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****     virtual void handleTickEvent()
 1655              		.loc 9 35 18
 1656              		.cfi_startproc
 1657              		@ args = 0, pretend = 0, frame = 8
 1658              		@ frame_needed = 1, uses_anonymous_args = 0
 1659              		@ link register save eliminated.
 1660 0000 80B4     		push	{r7}
 1661              	.LCFI173:
 1662              		.cfi_def_cfa_offset 4
 1663              		.cfi_offset 7, -4
 1664 0002 83B0     		sub	sp, sp, #12
 1665              	.LCFI174:
 1666              		.cfi_def_cfa_offset 16
 1667 0004 00AF     		add	r7, sp, #0
 1668              	.LCFI175:
 1669              		.cfi_def_cfa_register 7
 1670 0006 7860     		str	r0, [r7, #4]
  36:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****     {
  37:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****         done = true;
 1671              		.loc 9 37 14
 1672 0008 7B68     		ldr	r3, [r7, #4]
 1673 000a 0122     		movs	r2, #1
 1674 000c 1A72     		strb	r2, [r3, #8]
  38:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp ****     }
 1675              		.loc 9 38 5
 1676 000e 00BF     		nop
 1677 0010 0C37     		adds	r7, r7, #12
 1678              	.LCFI176:
 1679              		.cfi_def_cfa_offset 4
 1680 0012 BD46     		mov	sp, r7
 1681              	.LCFI177:
 1682              		.cfi_def_cfa_register 13
 1683              		@ sp needed
 1684 0014 5DF8047B 		ldr	r7, [sp], #4
 1685              	.LCFI178:
 1686              		.cfi_restore 7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 43


 1687              		.cfi_def_cfa_offset 0
 1688 0018 7047     		bx	lr
 1689              		.cfi_endproc
 1690              	.LFE435:
 1692              		.section	.text._ZN13ModelListener4bindEP5Model,"axG",%progbits,_ZN13ModelListener4bindEP5Model,com
 1693              		.align	1
 1694              		.weak	_ZN13ModelListener4bindEP5Model
 1695              		.syntax unified
 1696              		.thumb
 1697              		.thumb_func
 1698              		.fpu fpv4-sp-d16
 1700              	_ZN13ModelListener4bindEP5Model:
 1701              	.LFB450:
 1702              		.file 10 "Src/gui/include/gui/model/ModelListener.hpp"
   1:Src/gui/include/gui/model/ModelListener.hpp **** #ifndef MODELLISTENER_HPP
   2:Src/gui/include/gui/model/ModelListener.hpp **** #define MODELLISTENER_HPP
   3:Src/gui/include/gui/model/ModelListener.hpp **** 
   4:Src/gui/include/gui/model/ModelListener.hpp **** #include <gui/model/Model.hpp>
   5:Src/gui/include/gui/model/ModelListener.hpp **** 
   6:Src/gui/include/gui/model/ModelListener.hpp **** class ModelListener
   7:Src/gui/include/gui/model/ModelListener.hpp **** {
   8:Src/gui/include/gui/model/ModelListener.hpp **** public:
   9:Src/gui/include/gui/model/ModelListener.hpp ****     ModelListener() : model(0) {}
  10:Src/gui/include/gui/model/ModelListener.hpp ****     
  11:Src/gui/include/gui/model/ModelListener.hpp ****     virtual ~ModelListener() {}
  12:Src/gui/include/gui/model/ModelListener.hpp **** 
  13:Src/gui/include/gui/model/ModelListener.hpp ****     void bind(Model* m)
 1703              		.loc 10 13 10
 1704              		.cfi_startproc
 1705              		@ args = 0, pretend = 0, frame = 8
 1706              		@ frame_needed = 1, uses_anonymous_args = 0
 1707              		@ link register save eliminated.
 1708 0000 80B4     		push	{r7}
 1709              	.LCFI179:
 1710              		.cfi_def_cfa_offset 4
 1711              		.cfi_offset 7, -4
 1712 0002 83B0     		sub	sp, sp, #12
 1713              	.LCFI180:
 1714              		.cfi_def_cfa_offset 16
 1715 0004 00AF     		add	r7, sp, #0
 1716              	.LCFI181:
 1717              		.cfi_def_cfa_register 7
 1718 0006 7860     		str	r0, [r7, #4]
 1719 0008 3960     		str	r1, [r7]
  14:Src/gui/include/gui/model/ModelListener.hpp ****     {
  15:Src/gui/include/gui/model/ModelListener.hpp ****         model = m;
 1720              		.loc 10 15 15
 1721 000a 7B68     		ldr	r3, [r7, #4]
 1722 000c 3A68     		ldr	r2, [r7]
 1723 000e 5A60     		str	r2, [r3, #4]
  16:Src/gui/include/gui/model/ModelListener.hpp ****     }
 1724              		.loc 10 16 5
 1725 0010 00BF     		nop
 1726 0012 0C37     		adds	r7, r7, #12
 1727              	.LCFI182:
 1728              		.cfi_def_cfa_offset 4
 1729 0014 BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 44


 1730              	.LCFI183:
 1731              		.cfi_def_cfa_register 13
 1732              		@ sp needed
 1733 0016 5DF8047B 		ldr	r7, [sp], #4
 1734              	.LCFI184:
 1735              		.cfi_restore 7
 1736              		.cfi_def_cfa_offset 0
 1737 001a 7047     		bx	lr
 1738              		.cfi_endproc
 1739              	.LFE450:
 1741              		.section	.text._ZN8touchgfx3HAL11getInstanceEv,"axG",%progbits,_ZN8touchgfx3HAL11getInstanceEv,com
 1742              		.align	1
 1743              		.weak	_ZN8touchgfx3HAL11getInstanceEv
 1744              		.syntax unified
 1745              		.thumb
 1746              		.thumb_func
 1747              		.fpu fpv4-sp-d16
 1749              	_ZN8touchgfx3HAL11getInstanceEv:
 1750              	.LFB577:
 1751              		.file 11 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp"
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 45


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 46


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
 1752              		.loc 11 112 17
 1753              		.cfi_startproc
 1754              		@ args = 0, pretend = 0, frame = 0
 1755              		@ frame_needed = 1, uses_anonymous_args = 0
 1756              		@ link register save eliminated.
 1757 0000 80B4     		push	{r7}
 1758              	.LCFI185:
 1759              		.cfi_def_cfa_offset 4
 1760              		.cfi_offset 7, -4
 1761 0002 00AF     		add	r7, sp, #0
 1762              	.LCFI186:
 1763              		.cfi_def_cfa_register 7
 113:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 114:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return instance;
 1764              		.loc 11 114 16
 1765 0004 034B     		ldr	r3, .L71
 1766 0006 1B68     		ldr	r3, [r3]
 115:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 1767              		.loc 11 115 5
 1768 0008 1846     		mov	r0, r3
 1769 000a BD46     		mov	sp, r7
 1770              	.LCFI187:
 1771              		.cfi_def_cfa_register 13
 1772              		@ sp needed
 1773 000c 5DF8047B 		ldr	r7, [sp], #4
 1774              	.LCFI188:
 1775              		.cfi_restore 7
 1776              		.cfi_def_cfa_offset 0
 1777 0010 7047     		bx	lr
 1778              	.L72:
 1779 0012 00BF     		.align	2
 1780              	.L71:
 1781 0014 00000000 		.word	_ZN8touchgfx3HAL8instanceE
 1782              		.cfi_endproc
 1783              	.LFE577:
 1785              		.section	.text._ZN8touchgfx3HAL3lcdEv,"axG",%progbits,_ZN8touchgfx3HAL3lcdEv,comdat
 1786              		.align	1
 1787              		.weak	_ZN8touchgfx3HAL3lcdEv
 1788              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 47


 1789              		.thumb
 1790              		.thumb_func
 1791              		.fpu fpv4-sp-d16
 1793              	_ZN8touchgfx3HAL3lcdEv:
 1794              	.LFB582:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 48


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 49


 225:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 226:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     virtual uint16_t* getTFTFrameBuffer() const = 0;
 227:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp **** 
 228:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     /**
 229:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * Gets a reference to the LCD.
 230:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      *
 231:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      * @return A reference to the LCD.
 232:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****      */
 233:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     static LCD& lcd()
 1795              		.loc 11 233 17
 1796              		.cfi_startproc
 1797              		@ args = 0, pretend = 0, frame = 0
 1798              		@ frame_needed = 1, uses_anonymous_args = 0
 1799              		@ link register save eliminated.
 1800 0000 80B4     		push	{r7}
 1801              	.LCFI189:
 1802              		.cfi_def_cfa_offset 4
 1803              		.cfi_offset 7, -4
 1804 0002 00AF     		add	r7, sp, #0
 1805              	.LCFI190:
 1806              		.cfi_def_cfa_register 7
 234:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     {
 235:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         if (instance->useAuxiliaryLCD && instance->auxiliaryLCD)
 1807              		.loc 11 235 23
 1808 0004 0B4B     		ldr	r3, .L76
 1809 0006 1B68     		ldr	r3, [r3]
 1810 0008 93F87630 		ldrb	r3, [r3, #118]	@ zero_extendqisi2
 1811              		.loc 11 235 9
 1812 000c 002B     		cmp	r3, #0
 1813 000e 08D0     		beq	.L74
 1814              		.loc 11 235 52 discriminator 1
 1815 0010 084B     		ldr	r3, .L76
 1816 0012 1B68     		ldr	r3, [r3]
 1817 0014 DB6C     		ldr	r3, [r3, #76]
 1818              		.loc 11 235 39 discriminator 1
 1819 0016 002B     		cmp	r3, #0
 1820 0018 03D0     		beq	.L74
 236:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         {
 237:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****             return *instance->auxiliaryLCD;
 1821              		.loc 11 237 31
 1822 001a 064B     		ldr	r3, .L76
 1823 001c 1B68     		ldr	r3, [r3]
 1824 001e DB6C     		ldr	r3, [r3, #76]
 1825 0020 02E0     		b	.L75
 1826              	.L74:
 238:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         }
 239:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****         return instance->lcdRef;
 1827              		.loc 11 239 26
 1828 0022 044B     		ldr	r3, .L76
 1829 0024 1B68     		ldr	r3, [r3]
 1830 0026 9B68     		ldr	r3, [r3, #8]
 1831              	.L75:
 240:Middlewares/ST/touchgfx/framework/include/touchgfx/hal/HAL.hpp ****     }
 1832              		.loc 11 240 5
 1833 0028 1846     		mov	r0, r3
 1834 002a BD46     		mov	sp, r7
 1835              	.LCFI191:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 50


 1836              		.cfi_def_cfa_register 13
 1837              		@ sp needed
 1838 002c 5DF8047B 		ldr	r7, [sp], #4
 1839              	.LCFI192:
 1840              		.cfi_restore 7
 1841              		.cfi_def_cfa_offset 0
 1842 0030 7047     		bx	lr
 1843              	.L77:
 1844 0032 00BF     		.align	2
 1845              	.L76:
 1846 0034 00000000 		.word	_ZN8touchgfx3HAL8instanceE
 1847              		.cfi_endproc
 1848              	.LFE582:
 1850              		.section	.text._ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap,"ax",%progbits
 1851              		.align	1
 1852              		.global	_ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap
 1853              		.syntax unified
 1854              		.thumb
 1855              		.thumb_func
 1856              		.fpu fpv4-sp-d16
 1858              	_ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap:
 1859              	.LFB833:
 1860              		.file 12 "Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp"
   1:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** /*********************************************************************************/
   2:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** /********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
   3:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** /*********************************************************************************/
   4:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <new>
   5:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <gui_generated/common/FrontendApplicationBase.hpp>
   6:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <gui/common/FrontendHeap.hpp>
   7:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <touchgfx/transitions/NoTransition.hpp>
   8:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <texts/TextKeysAndLanguages.hpp>
   9:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <touchgfx/Texts.hpp>
  10:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <touchgfx/hal/HAL.hpp>
  11:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <platform/driver/lcd/LCD16bpp.hpp>
  12:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <gui/screen_screen/screenView.hpp>
  13:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** #include <gui/screen_screen/screenPresenter.hpp>
  14:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** 
  15:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** using namespace touchgfx;
  16:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** 
  17:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
 1861              		.loc 12 17 1
 1862              		.cfi_startproc
 1863              		@ args = 0, pretend = 0, frame = 16
 1864              		@ frame_needed = 1, uses_anonymous_args = 0
 1865 0000 80B5     		push	{r7, lr}
 1866              	.LCFI193:
 1867              		.cfi_def_cfa_offset 8
 1868              		.cfi_offset 7, -8
 1869              		.cfi_offset 14, -4
 1870 0002 84B0     		sub	sp, sp, #16
 1871              	.LCFI194:
 1872              		.cfi_def_cfa_offset 24
 1873 0004 00AF     		add	r7, sp, #0
 1874              	.LCFI195:
 1875              		.cfi_def_cfa_register 7
 1876 0006 F860     		str	r0, [r7, #12]
 1877 0008 B960     		str	r1, [r7, #8]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 51


 1878 000a 7A60     		str	r2, [r7, #4]
 1879              	.LBB14:
  18:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****     : touchgfx::MVPApplication(),
  19:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****       transitionCallback(),
  20:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****       frontendHeap(heap),
  21:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****       model(m)
 1880              		.loc 12 21 14
 1881 000c FB68     		ldr	r3, [r7, #12]
 1882 000e 1846     		mov	r0, r3
 1883 0010 FFF7FEFF 		bl	_ZN8touchgfx14MVPApplicationC2Ev
 1884 0014 124A     		ldr	r2, .L80
 1885 0016 FB68     		ldr	r3, [r7, #12]
 1886 0018 1A60     		str	r2, [r3]
 1887 001a FB68     		ldr	r3, [r7, #12]
 1888 001c 03F5A073 		add	r3, r3, #320
 1889 0020 1846     		mov	r0, r3
 1890 0022 FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC1Ev
 1891 0026 FB68     		ldr	r3, [r7, #12]
 1892 0028 7A68     		ldr	r2, [r7, #4]
 1893 002a C3F85021 		str	r2, [r3, #336]
 1894 002e FB68     		ldr	r3, [r7, #12]
 1895 0030 BA68     		ldr	r2, [r7, #8]
 1896 0032 C3F85421 		str	r2, [r3, #340]
  22:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** {
  23:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****     touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
 1897              		.loc 12 23 31
 1898 0036 FFF7FEFF 		bl	_ZN8touchgfx3HAL11getInstanceEv
 1899 003a 0346     		mov	r3, r0
 1900              		.loc 12 23 88
 1901 003c 1A68     		ldr	r2, [r3]
 1902 003e 0832     		adds	r2, r2, #8
 1903 0040 1268     		ldr	r2, [r2]
 1904              		.loc 12 23 56
 1905 0042 0021     		movs	r1, #0
 1906 0044 1846     		mov	r0, r3
 1907 0046 9047     		blx	r2
 1908              	.LVL3:
  24:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****     reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
 1909              		.loc 12 24 62
 1910 0048 FFF7FEFF 		bl	_ZN8touchgfx3HAL3lcdEv
 1911 004c 0346     		mov	r3, r0
 1912              		.loc 12 24 87
 1913 004e 1846     		mov	r0, r3
 1914 0050 FFF7FEFF 		bl	_ZN8touchgfx8LCD16bpp22enableTextureMapperAllEv
 1915              	.LBE14:
  25:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** }
 1916              		.loc 12 25 1
 1917 0054 FB68     		ldr	r3, [r7, #12]
 1918 0056 1846     		mov	r0, r3
 1919 0058 1037     		adds	r7, r7, #16
 1920              	.LCFI196:
 1921              		.cfi_def_cfa_offset 8
 1922 005a BD46     		mov	sp, r7
 1923              	.LCFI197:
 1924              		.cfi_def_cfa_register 13
 1925              		@ sp needed
 1926 005c 80BD     		pop	{r7, pc}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 52


 1927              	.L81:
 1928 005e 00BF     		.align	2
 1929              	.L80:
 1930 0060 08000000 		.word	_ZTV23FrontendApplicationBase+8
 1931              		.cfi_endproc
 1932              	.LFE833:
 1934              		.global	_ZN23FrontendApplicationBaseC1ER5ModelR12FrontendHeap
 1935              		.thumb_set _ZN23FrontendApplicationBaseC1ER5ModelR12FrontendHeap,_ZN23FrontendApplicationBaseC2ER5
 1936              		.section	.text._ZN8touchgfx15GenericCallbackIvvvEaSERKS1_,"axG",%progbits,_ZN8touchgfx15GenericCal
 1937              		.align	1
 1938              		.weak	_ZN8touchgfx15GenericCallbackIvvvEaSERKS1_
 1939              		.syntax unified
 1940              		.thumb
 1941              		.thumb_func
 1942              		.fpu fpv4-sp-d16
 1944              	_ZN8touchgfx15GenericCallbackIvvvEaSERKS1_:
 1945              	.LFB837:
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 1946              		.loc 4 175 7
 1947              		.cfi_startproc
 1948              		@ args = 0, pretend = 0, frame = 8
 1949              		@ frame_needed = 1, uses_anonymous_args = 0
 1950              		@ link register save eliminated.
 1951 0000 80B4     		push	{r7}
 1952              	.LCFI198:
 1953              		.cfi_def_cfa_offset 4
 1954              		.cfi_offset 7, -4
 1955 0002 83B0     		sub	sp, sp, #12
 1956              	.LCFI199:
 1957              		.cfi_def_cfa_offset 16
 1958 0004 00AF     		add	r7, sp, #0
 1959              	.LCFI200:
 1960              		.cfi_def_cfa_register 7
 1961 0006 7860     		str	r0, [r7, #4]
 1962 0008 3960     		str	r1, [r7]
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 1963              		.loc 4 175 7
 1964 000a 7B68     		ldr	r3, [r7, #4]
 1965 000c 1846     		mov	r0, r3
 1966 000e 0C37     		adds	r7, r7, #12
 1967              	.LCFI201:
 1968              		.cfi_def_cfa_offset 4
 1969 0010 BD46     		mov	sp, r7
 1970              	.LCFI202:
 1971              		.cfi_def_cfa_register 13
 1972              		@ sp needed
 1973 0012 5DF8047B 		ldr	r7, [sp], #4
 1974              	.LCFI203:
 1975              		.cfi_restore 7
 1976              		.cfi_def_cfa_offset 0
 1977 0016 7047     		bx	lr
 1978              		.cfi_endproc
 1979              	.LFE837:
 1981              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEaSEOS2_,"axG",%progbits,_ZN8touc
 1982              		.align	1
 1983              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEaSEOS2_
 1984              		.syntax unified
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 53


 1985              		.thumb
 1986              		.thumb_func
 1987              		.fpu fpv4-sp-d16
 1989              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEaSEOS2_:
 1990              	.LFB836:
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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 54


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 55


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 56


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
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 57


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
 1991              		.loc 4 424 8
 1992              		.cfi_startproc
 1993              		@ args = 0, pretend = 0, frame = 8
 1994              		@ frame_needed = 1, uses_anonymous_args = 0
 1995 0000 80B5     		push	{r7, lr}
 1996              	.LCFI204:
 1997              		.cfi_def_cfa_offset 8
 1998              		.cfi_offset 7, -8
 1999              		.cfi_offset 14, -4
 2000 0002 82B0     		sub	sp, sp, #8
 2001              	.LCFI205:
 2002              		.cfi_def_cfa_offset 16
 2003 0004 00AF     		add	r7, sp, #0
 2004              	.LCFI206:
 2005              		.cfi_def_cfa_register 7
 2006 0006 7860     		str	r0, [r7, #4]
 2007 0008 3960     		str	r1, [r7]
 2008              		.loc 4 424 8
 2009 000a 7B68     		ldr	r3, [r7, #4]
 2010 000c 3A68     		ldr	r2, [r7]
 2011 000e 1146     		mov	r1, r2
 2012 0010 1846     		mov	r0, r3
 2013 0012 FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvEaSERKS1_
 2014 0016 3B68     		ldr	r3, [r7]
 2015 0018 5A68     		ldr	r2, [r3, #4]
 2016 001a 7B68     		ldr	r3, [r7, #4]
 2017 001c 5A60     		str	r2, [r3, #4]
 2018 001e 7B68     		ldr	r3, [r7, #4]
 2019 0020 3A68     		ldr	r2, [r7]
 2020 0022 0833     		adds	r3, r3, #8
 2021 0024 0832     		adds	r2, r2, #8
 2022 0026 92E80300 		ldm	r2, {r0, r1}
 2023 002a 83E80300 		stm	r3, {r0, r1}
 2024 002e 7B68     		ldr	r3, [r7, #4]
 2025 0030 1846     		mov	r0, r3
 2026 0032 0837     		adds	r7, r7, #8
 2027              	.LCFI207:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 58


 2028              		.cfi_def_cfa_offset 8
 2029 0034 BD46     		mov	sp, r7
 2030              	.LCFI208:
 2031              		.cfi_def_cfa_register 13
 2032              		@ sp needed
 2033 0036 80BD     		pop	{r7, pc}
 2034              		.cfi_endproc
 2035              	.LFE836:
 2037              		.section	.text._ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv,"ax",%progbits
 2038              		.align	1
 2039              		.global	_ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv
 2040              		.syntax unified
 2041              		.thumb
 2042              		.thumb_func
 2043              		.fpu fpv4-sp-d16
 2045              	_ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv:
 2046              	.LFB835:
  26:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** 
  27:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** /*
  28:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****  * Screen Transition Declarations
  29:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****  */
  30:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** 
  31:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** // screen
  32:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** 
  33:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** void FrontendApplicationBase::gotoscreenScreenNoTransition()
  34:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** {
 2047              		.loc 12 34 1
 2048              		.cfi_startproc
 2049              		@ args = 0, pretend = 0, frame = 32
 2050              		@ frame_needed = 1, uses_anonymous_args = 0
 2051 0000 90B5     		push	{r4, r7, lr}
 2052              	.LCFI209:
 2053              		.cfi_def_cfa_offset 12
 2054              		.cfi_offset 4, -12
 2055              		.cfi_offset 7, -8
 2056              		.cfi_offset 14, -4
 2057 0002 89B0     		sub	sp, sp, #36
 2058              	.LCFI210:
 2059              		.cfi_def_cfa_offset 48
 2060 0004 00AF     		add	r7, sp, #0
 2061              	.LCFI211:
 2062              		.cfi_def_cfa_register 7
 2063 0006 7860     		str	r0, [r7, #4]
  35:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****     transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::go
 2064              		.loc 12 35 130
 2065 0008 7B68     		ldr	r3, [r7, #4]
 2066 000a 03F5A074 		add	r4, r3, #320
 2067 000e 104B     		ldr	r3, .L87
 2068 0010 BB61     		str	r3, [r7, #24]
 2069 0012 0023     		movs	r3, #0
 2070 0014 FB61     		str	r3, [r7, #28]
 2071 0016 07F10800 		add	r0, r7, #8
 2072 001a 07F11803 		add	r3, r7, #24
 2073 001e 0CCB     		ldm	r3, {r2, r3}
 2074 0020 7968     		ldr	r1, [r7, #4]
 2075 0022 FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC1EPS1_MS1_FvvE
 2076 0026 07F10803 		add	r3, r7, #8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 59


 2077 002a 1946     		mov	r1, r3
 2078 002c 2046     		mov	r0, r4
 2079 002e FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEaSEOS2_
 2080              		.loc 12 35 36
 2081 0032 07F10803 		add	r3, r7, #8
 2082 0036 1846     		mov	r0, r3
 2083 0038 FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
  36:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****     pendingScreenTransitionCallback = &transitionCallback;
 2084              		.loc 12 36 37
 2085 003c 7B68     		ldr	r3, [r7, #4]
 2086 003e 03F5A072 		add	r2, r3, #320
 2087 0042 7B68     		ldr	r3, [r7, #4]
 2088 0044 C3F83C21 		str	r2, [r3, #316]
  37:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** }
 2089              		.loc 12 37 1
 2090 0048 00BF     		nop
 2091 004a 2437     		adds	r7, r7, #36
 2092              	.LCFI212:
 2093              		.cfi_def_cfa_offset 12
 2094 004c BD46     		mov	sp, r7
 2095              	.LCFI213:
 2096              		.cfi_def_cfa_register 13
 2097              		@ sp needed
 2098 004e 90BD     		pop	{r4, r7, pc}
 2099              	.L88:
 2100              		.align	2
 2101              	.L87:
 2102 0050 00000000 		.word	_ZN23FrontendApplicationBase32gotoscreenScreenNoTransitionImplEv
 2103              		.cfi_endproc
 2104              	.LFE835:
 2106              		.section	.text._ZN23FrontendApplicationBase32gotoscreenScreenNoTransitionImplEv,"ax",%progbits
 2107              		.align	1
 2108              		.global	_ZN23FrontendApplicationBase32gotoscreenScreenNoTransitionImplEv
 2109              		.syntax unified
 2110              		.thumb
 2111              		.thumb_func
 2112              		.fpu fpv4-sp-d16
 2114              	_ZN23FrontendApplicationBase32gotoscreenScreenNoTransitionImplEv:
 2115              	.LFB838:
  38:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** 
  39:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** void FrontendApplicationBase::gotoscreenScreenNoTransitionImpl()
  40:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** {
 2116              		.loc 12 40 1
 2117              		.cfi_startproc
 2118              		@ args = 0, pretend = 0, frame = 8
 2119              		@ frame_needed = 1, uses_anonymous_args = 0
 2120 0000 80B5     		push	{r7, lr}
 2121              	.LCFI214:
 2122              		.cfi_def_cfa_offset 8
 2123              		.cfi_offset 7, -8
 2124              		.cfi_offset 14, -4
 2125 0002 84B0     		sub	sp, sp, #16
 2126              	.LCFI215:
 2127              		.cfi_def_cfa_offset 24
 2128 0004 02AF     		add	r7, sp, #8
 2129              	.LCFI216:
 2130              		.cfi_def_cfa 7, 16
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 60


 2131 0006 7860     		str	r0, [r7, #4]
  41:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp ****     touchgfx::makeTransition<screenView, screenPresenter, touchgfx::NoTransition, Model >(&currentS
 2132              		.loc 12 41 90
 2133 0008 7B68     		ldr	r3, [r7, #4]
 2134 000a 03F59C71 		add	r1, r3, #312
 2135              		.loc 12 41 126
 2136 000e 7B68     		ldr	r3, [r7, #4]
 2137 0010 D3F85031 		ldr	r3, [r3, #336]
 2138              		.loc 12 41 90
 2139 0014 1A46     		mov	r2, r3
 2140              		.loc 12 41 161
 2141 0016 7B68     		ldr	r3, [r7, #4]
 2142 0018 D3F85431 		ldr	r3, [r3, #340]
 2143              		.loc 12 41 90
 2144 001c 0093     		str	r3, [sp]
 2145 001e 044B     		ldr	r3, .L90
 2146 0020 0448     		ldr	r0, .L90+4
 2147 0022 FFF7FEFF 		bl	_ZN8touchgfx14makeTransitionI10screenView15screenPresenterNS_12NoTransitionE5ModelEEPT0_PPNS_6S
  42:Src/generated/gui_generated/src/common/FrontendApplicationBase.cpp **** }
 2148              		.loc 12 42 1
 2149 0026 00BF     		nop
 2150 0028 0837     		adds	r7, r7, #8
 2151              	.LCFI217:
 2152              		.cfi_def_cfa_offset 8
 2153 002a BD46     		mov	sp, r7
 2154              	.LCFI218:
 2155              		.cfi_def_cfa_register 13
 2156              		@ sp needed
 2157 002c 80BD     		pop	{r7, pc}
 2158              	.L91:
 2159 002e 00BF     		.align	2
 2160              	.L90:
 2161 0030 00000000 		.word	_ZN8touchgfx11Application17currentTransitionE
 2162 0034 00000000 		.word	_ZN8touchgfx11Application13currentScreenE
 2163              		.cfi_endproc
 2164              	.LFE838:
 2166              		.section	.text._ZN8touchgfx15GenericCallbackIvvvEC2Ev,"axG",%progbits,_ZN8touchgfx15GenericCallbac
 2167              		.align	1
 2168              		.weak	_ZN8touchgfx15GenericCallbackIvvvEC2Ev
 2169              		.syntax unified
 2170              		.thumb
 2171              		.thumb_func
 2172              		.fpu fpv4-sp-d16
 2174              	_ZN8touchgfx15GenericCallbackIvvvEC2Ev:
 2175              	.LFB850:
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 2176              		.loc 4 175 7
 2177              		.cfi_startproc
 2178              		@ args = 0, pretend = 0, frame = 8
 2179              		@ frame_needed = 1, uses_anonymous_args = 0
 2180              		@ link register save eliminated.
 2181 0000 80B4     		push	{r7}
 2182              	.LCFI219:
 2183              		.cfi_def_cfa_offset 4
 2184              		.cfi_offset 7, -4
 2185 0002 83B0     		sub	sp, sp, #12
 2186              	.LCFI220:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 61


 2187              		.cfi_def_cfa_offset 16
 2188 0004 00AF     		add	r7, sp, #0
 2189              	.LCFI221:
 2190              		.cfi_def_cfa_register 7
 2191 0006 7860     		str	r0, [r7, #4]
 2192              	.LBB15:
 175:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 2193              		.loc 4 175 7
 2194 0008 044A     		ldr	r2, .L94
 2195 000a 7B68     		ldr	r3, [r7, #4]
 2196 000c 1A60     		str	r2, [r3]
 2197              	.LBE15:
 2198 000e 7B68     		ldr	r3, [r7, #4]
 2199 0010 1846     		mov	r0, r3
 2200 0012 0C37     		adds	r7, r7, #12
 2201              	.LCFI222:
 2202              		.cfi_def_cfa_offset 4
 2203 0014 BD46     		mov	sp, r7
 2204              	.LCFI223:
 2205              		.cfi_def_cfa_register 13
 2206              		@ sp needed
 2207 0016 5DF8047B 		ldr	r7, [sp], #4
 2208              	.LCFI224:
 2209              		.cfi_restore 7
 2210              		.cfi_def_cfa_offset 0
 2211 001a 7047     		bx	lr
 2212              	.L95:
 2213              		.align	2
 2214              	.L94:
 2215 001c 08000000 		.word	_ZTVN8touchgfx15GenericCallbackIvvvEE+8
 2216              		.cfi_endproc
 2217              	.LFE850:
 2219              		.weak	_ZN8touchgfx15GenericCallbackIvvvEC1Ev
 2220              		.thumb_set _ZN8touchgfx15GenericCallbackIvvvEC1Ev,_ZN8touchgfx15GenericCallbackIvvvEC2Ev
 2221              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2Ev,"axG",%progbits,_ZN8touchgf
 2222              		.align	1
 2223              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2Ev
 2224              		.syntax unified
 2225              		.thumb
 2226              		.thumb_func
 2227              		.fpu fpv4-sp-d16
 2229              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2Ev:
 2230              	.LFB852:
 425:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 426:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /** Initializes a new instance of the Callback class. */
 427:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback()
 2231              		.loc 4 427 5
 2232              		.cfi_startproc
 2233              		@ args = 0, pretend = 0, frame = 8
 2234              		@ frame_needed = 1, uses_anonymous_args = 0
 2235 0000 80B5     		push	{r7, lr}
 2236              	.LCFI225:
 2237              		.cfi_def_cfa_offset 8
 2238              		.cfi_offset 7, -8
 2239              		.cfi_offset 14, -4
 2240 0002 82B0     		sub	sp, sp, #8
 2241              	.LCFI226:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 62


 2242              		.cfi_def_cfa_offset 16
 2243 0004 00AF     		add	r7, sp, #0
 2244              	.LCFI227:
 2245              		.cfi_def_cfa_register 7
 2246 0006 7860     		str	r0, [r7, #4]
 2247              	.LBB16:
 428:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(0), pmemfun_0(0)
 2248              		.loc 4 428 34
 2249 0008 7B68     		ldr	r3, [r7, #4]
 2250 000a 1846     		mov	r0, r3
 2251 000c FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvEC2Ev
 2252 0010 084A     		ldr	r2, .L98
 2253 0012 7B68     		ldr	r3, [r7, #4]
 2254 0014 1A60     		str	r2, [r3]
 2255 0016 7B68     		ldr	r3, [r7, #4]
 2256 0018 0022     		movs	r2, #0
 2257 001a 5A60     		str	r2, [r3, #4]
 2258 001c 7B68     		ldr	r3, [r7, #4]
 2259 001e 0022     		movs	r2, #0
 2260 0020 9A60     		str	r2, [r3, #8]
 2261 0022 7B68     		ldr	r3, [r7, #4]
 2262 0024 0022     		movs	r2, #0
 2263 0026 DA60     		str	r2, [r3, #12]
 2264              	.LBE16:
 429:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 430:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 2265              		.loc 4 430 5
 2266 0028 7B68     		ldr	r3, [r7, #4]
 2267 002a 1846     		mov	r0, r3
 2268 002c 0837     		adds	r7, r7, #8
 2269              	.LCFI228:
 2270              		.cfi_def_cfa_offset 8
 2271 002e BD46     		mov	sp, r7
 2272              	.LCFI229:
 2273              		.cfi_def_cfa_register 13
 2274              		@ sp needed
 2275 0030 80BD     		pop	{r7, pc}
 2276              	.L99:
 2277 0032 00BF     		.align	2
 2278              	.L98:
 2279 0034 08000000 		.word	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE+8
 2280              		.cfi_endproc
 2281              	.LFE852:
 2283              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC1Ev
 2284              		.thumb_set _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC1Ev,_ZN8touchgfx8CallbackI23Fronten
 2285              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2EPS1_MS1_FvvE,"axG",%progbits,
 2286              		.align	1
 2287              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2EPS1_MS1_FvvE
 2288              		.syntax unified
 2289              		.thumb
 2290              		.thumb_func
 2291              		.fpu fpv4-sp-d16
 2293              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2EPS1_MS1_FvvE:
 2294              	.LFB855:
 431:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 432:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 433:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Initializes a Callback with an object and a pointer to the member function in that
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 63


 434:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * object to call.
 435:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 436:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pobject   Pointer to the object on which the function should be called.
 437:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @param [in] pmemfun_0 Address of member function. This is the version where function takes
 438:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *                       zero arguments.
 439:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 440:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     Callback(dest_type* pobject, void (dest_type::*pmemfun_0)())
 2295              		.loc 4 440 5
 2296              		.cfi_startproc
 2297              		@ args = 0, pretend = 0, frame = 16
 2298              		@ frame_needed = 1, uses_anonymous_args = 0
 2299 0000 80B5     		push	{r7, lr}
 2300              	.LCFI230:
 2301              		.cfi_def_cfa_offset 8
 2302              		.cfi_offset 7, -8
 2303              		.cfi_offset 14, -4
 2304 0002 84B0     		sub	sp, sp, #16
 2305              	.LCFI231:
 2306              		.cfi_def_cfa_offset 24
 2307 0004 00AF     		add	r7, sp, #0
 2308              	.LCFI232:
 2309              		.cfi_def_cfa_register 7
 2310 0006 F860     		str	r0, [r7, #12]
 2311 0008 B960     		str	r1, [r7, #8]
 2312 000a 3946     		mov	r1, r7
 2313 000c 81E80C00 		stm	r1, {r2, r3}
 2314              	.LBB17:
 441:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         : pobject(pobject), pmemfun_0(pmemfun_0)
 2315              		.loc 4 441 48
 2316 0010 FB68     		ldr	r3, [r7, #12]
 2317 0012 1846     		mov	r0, r3
 2318 0014 FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvEC2Ev
 2319 0018 084A     		ldr	r2, .L102
 2320 001a FB68     		ldr	r3, [r7, #12]
 2321 001c 1A60     		str	r2, [r3]
 2322 001e FB68     		ldr	r3, [r7, #12]
 2323 0020 BA68     		ldr	r2, [r7, #8]
 2324 0022 5A60     		str	r2, [r3, #4]
 2325 0024 FB68     		ldr	r3, [r7, #12]
 2326 0026 0833     		adds	r3, r3, #8
 2327 0028 3A46     		mov	r2, r7
 2328 002a 92E80300 		ldm	r2, {r0, r1}
 2329 002e 83E80300 		stm	r3, {r0, r1}
 2330              	.LBE17:
 442:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 443:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 2331              		.loc 4 443 5
 2332 0032 FB68     		ldr	r3, [r7, #12]
 2333 0034 1846     		mov	r0, r3
 2334 0036 1037     		adds	r7, r7, #16
 2335              	.LCFI233:
 2336              		.cfi_def_cfa_offset 8
 2337 0038 BD46     		mov	sp, r7
 2338              	.LCFI234:
 2339              		.cfi_def_cfa_register 13
 2340              		@ sp needed
 2341 003a 80BD     		pop	{r7, pc}
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 64


 2342              	.L103:
 2343              		.align	2
 2344              	.L102:
 2345 003c 08000000 		.word	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE+8
 2346              		.cfi_endproc
 2347              	.LFE855:
 2349              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC1EPS1_MS1_FvvE
 2350              		.thumb_set _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC1EPS1_MS1_FvvE,_ZN8touchgfx8Callbac
 2351              		.section	.text._ZN8touchgfx12NoTransitionC2Ev,"axG",%progbits,_ZN8touchgfx12NoTransitionC5Ev,comda
 2352              		.align	1
 2353              		.weak	_ZN8touchgfx12NoTransitionC2Ev
 2354              		.syntax unified
 2355              		.thumb
 2356              		.thumb_func
 2357              		.fpu fpv4-sp-d16
 2359              	_ZN8touchgfx12NoTransitionC2Ev:
 2360              	.LFB859:
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** {
 2361              		.loc 9 31 7
 2362              		.cfi_startproc
 2363              		@ args = 0, pretend = 0, frame = 8
 2364              		@ frame_needed = 1, uses_anonymous_args = 0
 2365 0000 80B5     		push	{r7, lr}
 2366              	.LCFI235:
 2367              		.cfi_def_cfa_offset 8
 2368              		.cfi_offset 7, -8
 2369              		.cfi_offset 14, -4
 2370 0002 82B0     		sub	sp, sp, #8
 2371              	.LCFI236:
 2372              		.cfi_def_cfa_offset 16
 2373 0004 00AF     		add	r7, sp, #0
 2374              	.LCFI237:
 2375              		.cfi_def_cfa_register 7
 2376 0006 7860     		str	r0, [r7, #4]
 2377              	.LBB18:
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** {
 2378              		.loc 9 31 7
 2379 0008 7B68     		ldr	r3, [r7, #4]
 2380 000a 1846     		mov	r0, r3
 2381 000c FFF7FEFF 		bl	_ZN8touchgfx10TransitionC2Ev
 2382 0010 034A     		ldr	r2, .L106
 2383 0012 7B68     		ldr	r3, [r7, #4]
 2384 0014 1A60     		str	r2, [r3]
 2385              	.LBE18:
 2386 0016 7B68     		ldr	r3, [r7, #4]
 2387 0018 1846     		mov	r0, r3
 2388 001a 0837     		adds	r7, r7, #8
 2389              	.LCFI238:
 2390              		.cfi_def_cfa_offset 8
 2391 001c BD46     		mov	sp, r7
 2392              	.LCFI239:
 2393              		.cfi_def_cfa_register 13
 2394              		@ sp needed
 2395 001e 80BD     		pop	{r7, pc}
 2396              	.L107:
 2397              		.align	2
 2398              	.L106:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 65


 2399 0020 08000000 		.word	_ZTVN8touchgfx12NoTransitionE+8
 2400              		.cfi_endproc
 2401              	.LFE859:
 2403              		.weak	_ZN8touchgfx12NoTransitionC1Ev
 2404              		.thumb_set _ZN8touchgfx12NoTransitionC1Ev,_ZN8touchgfx12NoTransitionC2Ev
 2405              		.section	.rodata
 2406              		.align	2
 2407              	.LC0:
 2408 0000 73697A65 		.ascii	"sizeof(ScreenType) <= heap.screenStorage.element_si"
 2408      6F662853 
 2408      63726565 
 2408      6E547970 
 2408      6529203C 
 2409 0033 7A652829 		.ascii	"ze() && \"View allocation error: Check that all vie"
 2409      20262620 
 2409      22566965 
 2409      7720616C 
 2409      6C6F6361 
 2410 0065 77732061 		.ascii	"ws are added to FrontendHeap::ViewTypes\"\000"
 2410      72652061 
 2410      64646564 
 2410      20746F20 
 2410      46726F6E 
 2411 008e 0000     		.align	2
 2412              	.LC1:
 2413 0090 50726573 		.ascii	"PresenterType* touchgfx::makeTransition(touchgfx::S"
 2413      656E7465 
 2413      72547970 
 2413      652A2074 
 2413      6F756368 
 2414 00c3 63726565 		.ascii	"creen**, touchgfx::Presenter**, touchgfx::MVPHeap&,"
 2414      6E2A2A2C 
 2414      20746F75 
 2414      63686766 
 2414      783A3A50 
 2415 00f6 20746F75 		.ascii	" touchgfx::Transition**, ModelType*) [with ScreenTy"
 2415      63686766 
 2415      783A3A54 
 2415      72616E73 
 2415      6974696F 
 2416 0129 7065203D 		.ascii	"pe = screenView; PresenterType = screenPresenter; T"
 2416      20736372 
 2416      65656E56 
 2416      6965773B 
 2416      20507265 
 2417 015c 72616E73 		.ascii	"ransType = touchgfx::NoTransition; ModelType = Mode"
 2417      54797065 
 2417      203D2074 
 2417      6F756368 
 2417      6766783A 
 2418 018f 6C5D00   		.ascii	"l]\000"
 2419 0192 0000     		.align	2
 2420              	.LC2:
 2421 0194 4D696464 		.ascii	"Middlewares/ST/touchgfx/framework/include/mvp/MVPAp"
 2421      6C657761 
 2421      7265732F 
 2421      53542F74 
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 66


 2421      6F756368 
 2422 01c7 706C6963 		.ascii	"plication.hpp\000"
 2422      6174696F 
 2422      6E2E6870 
 2422      7000
 2423 01d5 000000   		.align	2
 2424              	.LC3:
 2425 01d8 73697A65 		.ascii	"sizeof(PresenterType) <= heap.presenterStorage.elem"
 2425      6F662850 
 2425      72657365 
 2425      6E746572 
 2425      54797065 
 2426 020b 656E745F 		.ascii	"ent_size() && \"Presenter allocation error: Check t"
 2426      73697A65 
 2426      28292026 
 2426      26202250 
 2426      72657365 
 2427 023d 68617420 		.ascii	"hat all presenters are added to FrontendHeap::Prese"
 2427      616C6C20 
 2427      70726573 
 2427      656E7465 
 2427      72732061 
 2428 0270 6E746572 		.ascii	"nterTypes\"\000"
 2428      54797065 
 2428      732200
 2429 027b 00       		.align	2
 2430              	.LC4:
 2431 027c 73697A65 		.ascii	"sizeof(TransType) <= heap.transitionStorage.element"
 2431      6F662854 
 2431      72616E73 
 2431      54797065 
 2431      29203C3D 
 2432 02af 5F73697A 		.ascii	"_size() && \"Transition allocation error: Check tha"
 2432      65282920 
 2432      26262022 
 2432      5472616E 
 2432      73697469 
 2433 02e1 7420616C 		.ascii	"t all transitions are added to FrontendHeap::Transi"
 2433      6C207472 
 2433      616E7369 
 2433      74696F6E 
 2433      73206172 
 2434 0314 74696F6E 		.ascii	"tionTypes\"\000"
 2434      54797065 
 2434      732200
 2435              		.section	.text._ZN8touchgfx14makeTransitionI10screenView15screenPresenterNS_12NoTransitionE5ModelE
 2436              		.align	1
 2437              		.weak	_ZN8touchgfx14makeTransitionI10screenView15screenPresenterNS_12NoTransitionE5ModelEEPT0_PPNS
 2438              		.syntax unified
 2439              		.thumb
 2440              		.thumb_func
 2441              		.fpu fpv4-sp-d16
 2443              	_ZN8touchgfx14makeTransitionI10screenView15screenPresenterNS_12NoTransitionE5ModelEEPT0_PPNS_6Scree
 2444              	.LFB857:
  81:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** };
  82:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  83:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** /**
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 67


  84:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * Prepare screen transition. Private helper function for makeTransition. Do not use.
  85:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *
  86:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] currentScreen    If non-null, the current screen.
  87:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] currentPresenter If non-null, the current presenter.
  88:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] currentTrans     If non-null, the current transaction.
  89:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  */
  90:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** FORCE_INLINE_FUNCTION static void prepareTransition(Screen** currentScreen, Presenter** currentPres
  91:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
  92:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     Application::getInstance()->clearAllTimerWidgets();
  93:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
  94:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     if (*currentTrans)
  95:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
  96:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         (*currentTrans)->tearDown();
  97:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
  98:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     if (*currentTrans)
  99:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 100:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         (*currentTrans)->~Transition();
 101:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 102:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     if (*currentScreen)
 103:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 104:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         (*currentScreen)->tearDownScreen();
 105:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 106:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     if (*currentPresenter)
 107:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 108:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         (*currentPresenter)->deactivate();
 109:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 110:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     if (*currentScreen)
 111:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 112:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         (*currentScreen)->~Screen();
 113:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 114:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     if (*currentPresenter)
 115:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 116:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****         (*currentPresenter)->~Presenter();
 117:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 118:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** }
 119:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 120:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** /**
 121:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * Finalize screen transition. Private helper function for makeTransition. Do not use.
 122:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *
 123:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] newScreen     If non-null, the new screen.
 124:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] newPresenter  If non-null, the new presenter.
 125:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] newTransition If non-null, the new transition.
 126:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  */
 127:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** FORCE_INLINE_FUNCTION static void finalizeTransition(Screen* newScreen, Presenter* newPresenter, Tr
 128:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 129:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newScreen->setupScreen();
 130:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newPresenter->activate();
 131:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newScreen->bindTransition(*newTransition);
 132:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newTransition->init();
 133:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newTransition->invalidate();
 134:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** }
 135:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 136:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** /**
 137:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * Function for effectuating a screen transition (i.e. makes the requested new presenter/view
 138:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * pair active). Once this function has returned, the new screen has been transitioned
 139:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * to. Due to the memory allocation strategy of using the same memory area for all
 140:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * screens, the old view/presenter will no longer exist when this function returns.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 68


 141:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *
 142:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * Will properly clean up old screen (tearDownScreen, Presenter::deactivate) and call
 143:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * setupScreen/activate on new view/presenter pair. Will also make sure the view,
 144:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * presenter and model are correctly bound to each other.
 145:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *
 146:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @tparam ScreenType    Class type for the View.
 147:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @tparam PresenterType Class type for the Presenter.
 148:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @tparam TransType     Class type for the Transition.
 149:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @tparam ModelType     Class type for the Model.
 150:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] currentScreen    Pointer to pointer to the current view.
 151:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] currentPresenter Pointer to pointer to the current presenter.
 152:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] heap             Reference to the heap containing the memory storage in which
 153:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *                              to allocate.
 154:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] currentTrans     Pointer to pointer to the current transition.
 155:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @param [in] model            Pointer to model.
 156:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *
 157:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  * @return Pointer to the new Presenter of the requested type. Incidentally it will be the same
 158:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  *         value as the old presenter due to memory reuse.
 159:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****  */
 160:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** template <class ScreenType, class PresenterType, class TransType, class ModelType>
 161:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** PresenterType* makeTransition(Screen** currentScreen, Presenter** currentPresenter, MVPHeap& heap, 
 2445              		.loc 6 161 16
 2446              		.cfi_startproc
 2447              		@ args = 4, pretend = 0, frame = 56
 2448              		@ frame_needed = 1, uses_anonymous_args = 0
 2449 0000 90B5     		push	{r4, r7, lr}
 2450              	.LCFI240:
 2451              		.cfi_def_cfa_offset 12
 2452              		.cfi_offset 4, -12
 2453              		.cfi_offset 7, -8
 2454              		.cfi_offset 14, -4
 2455 0002 8FB0     		sub	sp, sp, #60
 2456              	.LCFI241:
 2457              		.cfi_def_cfa_offset 72
 2458 0004 00AF     		add	r7, sp, #0
 2459              	.LCFI242:
 2460              		.cfi_def_cfa_register 7
 2461 0006 F860     		str	r0, [r7, #12]
 2462 0008 B960     		str	r1, [r7, #8]
 2463 000a 7A60     		str	r2, [r7, #4]
 2464 000c 3B60     		str	r3, [r7]
 162:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** {
 163:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     assert(sizeof(ScreenType) <= heap.screenStorage.element_size() && "View allocation error: Check
 2465              		.loc 6 163 5
 2466 000e 7B68     		ldr	r3, [r7, #4]
 2467 0010 9A68     		ldr	r2, [r3, #8]
 2468 0012 7B68     		ldr	r3, [r7, #4]
 2469 0014 9B68     		ldr	r3, [r3, #8]
 2470 0016 1B68     		ldr	r3, [r3]
 2471 0018 2033     		adds	r3, r3, #32
 2472 001a 1B68     		ldr	r3, [r3]
 2473 001c 1046     		mov	r0, r2
 2474 001e 9847     		blx	r3
 2475              	.LVL4:
 2476 0020 0346     		mov	r3, r0
 2477 0022 41F24B42 		movw	r2, #5195
 2478 0026 9342     		cmp	r3, r2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 69


 2479 0028 05D8     		bhi	.L128
 2480              		.loc 6 163 5 is_stmt 0 discriminator 3
 2481 002a 7F4B     		ldr	r3, .L132
 2482 002c 7F4A     		ldr	r2, .L132+4
 2483 002e A321     		movs	r1, #163
 2484 0030 7F48     		ldr	r0, .L132+8
 2485 0032 FFF7FEFF 		bl	__assert_func
 2486              	.L128:
 2487              		.loc 6 163 5
 2488 0036 00BF     		nop
 164:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     assert(sizeof(PresenterType) <= heap.presenterStorage.element_size() && "Presenter allocation e
 2489              		.loc 6 164 5 is_stmt 1
 2490 0038 7B68     		ldr	r3, [r7, #4]
 2491 003a 5A68     		ldr	r2, [r3, #4]
 2492 003c 7B68     		ldr	r3, [r7, #4]
 2493 003e 5B68     		ldr	r3, [r3, #4]
 2494 0040 1B68     		ldr	r3, [r3]
 2495 0042 2033     		adds	r3, r3, #32
 2496 0044 1B68     		ldr	r3, [r3]
 2497 0046 1046     		mov	r0, r2
 2498 0048 9847     		blx	r3
 2499              	.LVL5:
 2500 004a 0346     		mov	r3, r0
 2501 004c 0F2B     		cmp	r3, #15
 2502 004e 05D8     		bhi	.L129
 2503              		.loc 6 164 5 is_stmt 0 discriminator 3
 2504 0050 784B     		ldr	r3, .L132+12
 2505 0052 764A     		ldr	r2, .L132+4
 2506 0054 A421     		movs	r1, #164
 2507 0056 7648     		ldr	r0, .L132+8
 2508 0058 FFF7FEFF 		bl	__assert_func
 2509              	.L129:
 2510              		.loc 6 164 5
 2511 005c 00BF     		nop
 165:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     assert(sizeof(TransType) <= heap.transitionStorage.element_size() && "Transition allocation err
 2512              		.loc 6 165 5 is_stmt 1
 2513 005e 7B68     		ldr	r3, [r7, #4]
 2514 0060 DA68     		ldr	r2, [r3, #12]
 2515 0062 7B68     		ldr	r3, [r7, #4]
 2516 0064 DB68     		ldr	r3, [r3, #12]
 2517 0066 1B68     		ldr	r3, [r3]
 2518 0068 2033     		adds	r3, r3, #32
 2519 006a 1B68     		ldr	r3, [r3]
 2520 006c 1046     		mov	r0, r2
 2521 006e 9847     		blx	r3
 2522              	.LVL6:
 2523 0070 0346     		mov	r3, r0
 2524 0072 0B2B     		cmp	r3, #11
 2525 0074 05D8     		bhi	.L130
 2526              		.loc 6 165 5 is_stmt 0 discriminator 3
 2527 0076 704B     		ldr	r3, .L132+16
 2528 0078 6C4A     		ldr	r2, .L132+4
 2529 007a A521     		movs	r1, #165
 2530 007c 6C48     		ldr	r0, .L132+8
 2531 007e FFF7FEFF 		bl	__assert_func
 2532              	.L130:
 2533              		.loc 6 165 5
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 70


 2534 0082 00BF     		nop
 2535 0084 FB68     		ldr	r3, [r7, #12]
 2536 0086 BB62     		str	r3, [r7, #40]
 2537 0088 BB68     		ldr	r3, [r7, #8]
 2538 008a 7B62     		str	r3, [r7, #36]
 2539 008c 3B68     		ldr	r3, [r7]
 2540 008e 3B62     		str	r3, [r7, #32]
 2541              	.LBB19:
 2542              	.LBB20:
  92:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 2543              		.loc 6 92 53 is_stmt 1
 2544 0090 FFF7FEFF 		bl	_ZN8touchgfx11Application11getInstanceEv
 2545 0094 0346     		mov	r3, r0
 2546 0096 1846     		mov	r0, r3
 2547 0098 FFF7FEFF 		bl	_ZN8touchgfx11Application20clearAllTimerWidgetsEv
  94:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2548              		.loc 6 94 9
 2549 009c 3B6A     		ldr	r3, [r7, #32]
 2550 009e 1B68     		ldr	r3, [r3]
  94:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2551              		.loc 6 94 5
 2552 00a0 002B     		cmp	r3, #0
 2553 00a2 08D0     		beq	.L115
  96:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2554              		.loc 6 96 34
 2555 00a4 3B6A     		ldr	r3, [r7, #32]
 2556 00a6 1A68     		ldr	r2, [r3]
  96:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2557              		.loc 6 96 35
 2558 00a8 3B6A     		ldr	r3, [r7, #32]
 2559 00aa 1B68     		ldr	r3, [r3]
 2560 00ac 1B68     		ldr	r3, [r3]
 2561 00ae 0C33     		adds	r3, r3, #12
 2562 00b0 1B68     		ldr	r3, [r3]
  96:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2563              		.loc 6 96 34
 2564 00b2 1046     		mov	r0, r2
 2565 00b4 9847     		blx	r3
 2566              	.LVL7:
 2567              	.L115:
  98:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2568              		.loc 6 98 9
 2569 00b6 3B6A     		ldr	r3, [r7, #32]
 2570 00b8 1B68     		ldr	r3, [r3]
  98:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2571              		.loc 6 98 5
 2572 00ba 002B     		cmp	r3, #0
 2573 00bc 07D0     		beq	.L116
 100:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2574              		.loc 6 100 38
 2575 00be 3B6A     		ldr	r3, [r7, #32]
 2576 00c0 1A68     		ldr	r2, [r3]
 2577 00c2 3B6A     		ldr	r3, [r7, #32]
 2578 00c4 1B68     		ldr	r3, [r3]
 2579 00c6 1B68     		ldr	r3, [r3]
 2580 00c8 1B68     		ldr	r3, [r3]
 2581 00ca 1046     		mov	r0, r2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 71


 2582 00cc 9847     		blx	r3
 2583              	.LVL8:
 2584              	.L116:
 102:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2585              		.loc 6 102 9
 2586 00ce BB6A     		ldr	r3, [r7, #40]
 2587 00d0 1B68     		ldr	r3, [r3]
 102:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2588              		.loc 6 102 5
 2589 00d2 002B     		cmp	r3, #0
 2590 00d4 08D0     		beq	.L117
 104:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2591              		.loc 6 104 41
 2592 00d6 BB6A     		ldr	r3, [r7, #40]
 2593 00d8 1A68     		ldr	r2, [r3]
 104:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2594              		.loc 6 104 42
 2595 00da BB6A     		ldr	r3, [r7, #40]
 2596 00dc 1B68     		ldr	r3, [r3]
 2597 00de 1B68     		ldr	r3, [r3]
 2598 00e0 1433     		adds	r3, r3, #20
 2599 00e2 1B68     		ldr	r3, [r3]
 104:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2600              		.loc 6 104 41
 2601 00e4 1046     		mov	r0, r2
 2602 00e6 9847     		blx	r3
 2603              	.LVL9:
 2604              	.L117:
 106:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2605              		.loc 6 106 9
 2606 00e8 7B6A     		ldr	r3, [r7, #36]
 2607 00ea 1B68     		ldr	r3, [r3]
 106:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2608              		.loc 6 106 5
 2609 00ec 002B     		cmp	r3, #0
 2610 00ee 08D0     		beq	.L118
 108:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2611              		.loc 6 108 40
 2612 00f0 7B6A     		ldr	r3, [r7, #36]
 2613 00f2 1A68     		ldr	r2, [r3]
 108:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2614              		.loc 6 108 41
 2615 00f4 7B6A     		ldr	r3, [r7, #36]
 2616 00f6 1B68     		ldr	r3, [r3]
 2617 00f8 1B68     		ldr	r3, [r3]
 2618 00fa 0433     		adds	r3, r3, #4
 2619 00fc 1B68     		ldr	r3, [r3]
 108:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2620              		.loc 6 108 40
 2621 00fe 1046     		mov	r0, r2
 2622 0100 9847     		blx	r3
 2623              	.LVL10:
 2624              	.L118:
 110:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2625              		.loc 6 110 9
 2626 0102 BB6A     		ldr	r3, [r7, #40]
 2627 0104 1B68     		ldr	r3, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 72


 110:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2628              		.loc 6 110 5
 2629 0106 002B     		cmp	r3, #0
 2630 0108 07D0     		beq	.L119
 112:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2631              		.loc 6 112 35
 2632 010a BB6A     		ldr	r3, [r7, #40]
 2633 010c 1A68     		ldr	r2, [r3]
 2634 010e BB6A     		ldr	r3, [r7, #40]
 2635 0110 1B68     		ldr	r3, [r3]
 2636 0112 1B68     		ldr	r3, [r3]
 2637 0114 1B68     		ldr	r3, [r3]
 2638 0116 1046     		mov	r0, r2
 2639 0118 9847     		blx	r3
 2640              	.LVL11:
 2641              	.L119:
 114:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2642              		.loc 6 114 9
 2643 011a 7B6A     		ldr	r3, [r7, #36]
 2644 011c 1B68     		ldr	r3, [r3]
 114:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     {
 2645              		.loc 6 114 5
 2646 011e 002B     		cmp	r3, #0
 2647 0120 08D0     		beq	.L131
 116:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     }
 2648              		.loc 6 116 41
 2649 0122 7B6A     		ldr	r3, [r7, #36]
 2650 0124 1A68     		ldr	r2, [r3]
 2651 0126 7B6A     		ldr	r3, [r7, #36]
 2652 0128 1B68     		ldr	r3, [r3]
 2653 012a 1B68     		ldr	r3, [r3]
 2654 012c 0833     		adds	r3, r3, #8
 2655 012e 1B68     		ldr	r3, [r3]
 2656 0130 1046     		mov	r0, r2
 2657 0132 9847     		blx	r3
 2658              	.LVL12:
 2659              	.L131:
 118:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 2660              		.loc 6 118 1
 2661 0134 00BF     		nop
 2662              	.LBE20:
 2663              	.LBE19:
 166:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 167:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     prepareTransition(currentScreen, currentPresenter, currentTrans);
 168:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 169:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     TransType* newTransition = new (&heap.transitionStorage.at<TransType>(0)) TransType;
 2664              		.loc 6 169 43
 2665 0136 7B68     		ldr	r3, [r7, #4]
 2666 0138 DB68     		ldr	r3, [r3, #12]
 2667              		.loc 6 169 74
 2668 013a 0021     		movs	r1, #0
 2669 013c 1846     		mov	r0, r3
 2670 013e FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartition2atINS_12NoTransitionEEERT_t
 2671 0142 0346     		mov	r3, r0
 2672              		.loc 6 169 32
 2673 0144 1946     		mov	r1, r3
 2674 0146 0C20     		movs	r0, #12
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 73


 2675 0148 FFF7FEFF 		bl	_ZnwjPv
 2676 014c 0446     		mov	r4, r0
 2677 014e 2046     		mov	r0, r4
 2678 0150 FFF7FEFF 		bl	_ZN8touchgfx12NoTransitionC1Ev
 2679              		.loc 6 169 16
 2680 0154 7C63     		str	r4, [r7, #52]
 170:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     ScreenType* newScreen = new (&heap.screenStorage.at<ScreenType>(0)) ScreenType;
 2681              		.loc 6 170 40
 2682 0156 7B68     		ldr	r3, [r7, #4]
 2683 0158 9B68     		ldr	r3, [r3, #8]
 2684              		.loc 6 170 68
 2685 015a 0021     		movs	r1, #0
 2686 015c 1846     		mov	r0, r3
 2687 015e FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartition2atI10screenViewEERT_t
 2688 0162 0346     		mov	r3, r0
 2689              		.loc 6 170 29
 2690 0164 1946     		mov	r1, r3
 2691 0166 41F24C40 		movw	r0, #5196
 2692 016a FFF7FEFF 		bl	_ZnwjPv
 2693 016e 0446     		mov	r4, r0
 2694 0170 2046     		mov	r0, r4
 2695 0172 FFF7FEFF 		bl	_ZN10screenViewC1Ev
 2696              		.loc 6 170 17
 2697 0176 3C63     		str	r4, [r7, #48]
 171:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     PresenterType* newPresenter = new (&heap.presenterStorage.at<PresenterType>(0)) PresenterType(*
 2698              		.loc 6 171 46
 2699 0178 7B68     		ldr	r3, [r7, #4]
 2700 017a 5B68     		ldr	r3, [r3, #4]
 2701              		.loc 6 171 80
 2702 017c 0021     		movs	r1, #0
 2703 017e 1846     		mov	r0, r3
 2704 0180 FFF7FEFF 		bl	_ZN8touchgfx17AbstractPartition2atI15screenPresenterEERT_t
 2705 0184 0346     		mov	r3, r0
 2706              		.loc 6 171 35
 2707 0186 1946     		mov	r1, r3
 2708 0188 1020     		movs	r0, #16
 2709 018a FFF7FEFF 		bl	_ZnwjPv
 2710 018e 0446     		mov	r4, r0
 2711 0190 396B     		ldr	r1, [r7, #48]
 2712 0192 2046     		mov	r0, r4
 2713 0194 FFF7FEFF 		bl	_ZN15screenPresenterC1ER10screenView
 2714              		.loc 6 171 20
 2715 0198 FC62     		str	r4, [r7, #44]
 172:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     *currentTrans = newTransition;
 2716              		.loc 6 172 19
 2717 019a 3B68     		ldr	r3, [r7]
 2718 019c 7A6B     		ldr	r2, [r7, #52]
 2719 019e 1A60     		str	r2, [r3]
 173:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     *currentPresenter = newPresenter;
 2720              		.loc 6 173 23
 2721 01a0 BB68     		ldr	r3, [r7, #8]
 2722 01a2 FA6A     		ldr	r2, [r7, #44]
 2723 01a4 1A60     		str	r2, [r3]
 174:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     *currentScreen = newScreen;
 2724              		.loc 6 174 20
 2725 01a6 FB68     		ldr	r3, [r7, #12]
 2726 01a8 3A6B     		ldr	r2, [r7, #48]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 74


 2727 01aa 1A60     		str	r2, [r3]
 175:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     model->bind(newPresenter);
 2728              		.loc 6 175 16
 2729 01ac FB6A     		ldr	r3, [r7, #44]
 2730 01ae 002B     		cmp	r3, #0
 2731 01b0 02D0     		beq	.L121
 2732              		.loc 6 175 16 is_stmt 0 discriminator 1
 2733 01b2 FB6A     		ldr	r3, [r7, #44]
 2734 01b4 0433     		adds	r3, r3, #4
 2735 01b6 00E0     		b	.L122
 2736              	.L121:
 2737              		.loc 6 175 16 discriminator 2
 2738 01b8 0023     		movs	r3, #0
 2739              	.L122:
 2740              		.loc 6 175 16 discriminator 4
 2741 01ba 1946     		mov	r1, r3
 2742 01bc B86C     		ldr	r0, [r7, #72]
 2743 01be FFF7FEFF 		bl	_ZN5Model4bindEP13ModelListener
 176:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newPresenter->bind(model);
 2744              		.loc 6 176 23 is_stmt 1 discriminator 4
 2745 01c2 FB6A     		ldr	r3, [r7, #44]
 2746 01c4 0433     		adds	r3, r3, #4
 2747 01c6 B96C     		ldr	r1, [r7, #72]
 2748 01c8 1846     		mov	r0, r3
 2749 01ca FFF7FEFF 		bl	_ZN13ModelListener4bindEP5Model
 177:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newScreen->bind(*newPresenter);
 2750              		.loc 6 177 20 discriminator 4
 2751 01ce 3B6B     		ldr	r3, [r7, #48]
 2752 01d0 F96A     		ldr	r1, [r7, #44]
 2753 01d2 1846     		mov	r0, r3
 2754 01d4 FFF7FEFF 		bl	_ZN8touchgfx4ViewI15screenPresenterE4bindERS1_
 2755 01d8 3B6B     		ldr	r3, [r7, #48]
 2756 01da FB61     		str	r3, [r7, #28]
 2757 01dc FB6A     		ldr	r3, [r7, #44]
 2758 01de BB61     		str	r3, [r7, #24]
 2759 01e0 7B6B     		ldr	r3, [r7, #52]
 2760 01e2 7B61     		str	r3, [r7, #20]
 2761              	.LBB21:
 2762              	.LBB22:
 129:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newPresenter->activate();
 2763              		.loc 6 129 28 discriminator 4
 2764 01e4 FB69     		ldr	r3, [r7, #28]
 2765 01e6 1B68     		ldr	r3, [r3]
 2766 01e8 0C33     		adds	r3, r3, #12
 2767 01ea 1B68     		ldr	r3, [r3]
 129:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newPresenter->activate();
 2768              		.loc 6 129 27 discriminator 4
 2769 01ec F869     		ldr	r0, [r7, #28]
 2770 01ee 9847     		blx	r3
 2771              	.LVL13:
 130:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newScreen->bindTransition(*newTransition);
 2772              		.loc 6 130 28 discriminator 4
 2773 01f0 BB69     		ldr	r3, [r7, #24]
 2774 01f2 1B68     		ldr	r3, [r3]
 2775 01f4 1B68     		ldr	r3, [r3]
 130:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newScreen->bindTransition(*newTransition);
 2776              		.loc 6 130 27 discriminator 4
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 75


 2777 01f6 B869     		ldr	r0, [r7, #24]
 2778 01f8 9847     		blx	r3
 2779              	.LVL14:
 131:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newTransition->init();
 2780              		.loc 6 131 30 discriminator 4
 2781 01fa 7969     		ldr	r1, [r7, #20]
 2782 01fc F869     		ldr	r0, [r7, #28]
 2783 01fe FFF7FEFF 		bl	_ZN8touchgfx6Screen14bindTransitionERNS_10TransitionE
 132:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newTransition->invalidate();
 2784              		.loc 6 132 25 discriminator 4
 2785 0202 7B69     		ldr	r3, [r7, #20]
 2786 0204 1B68     		ldr	r3, [r3]
 2787 0206 1033     		adds	r3, r3, #16
 2788 0208 1B68     		ldr	r3, [r3]
 132:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     newTransition->invalidate();
 2789              		.loc 6 132 24 discriminator 4
 2790 020a 7869     		ldr	r0, [r7, #20]
 2791 020c 9847     		blx	r3
 2792              	.LVL15:
 133:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** }
 2793              		.loc 6 133 31 discriminator 4
 2794 020e 7B69     		ldr	r3, [r7, #20]
 2795 0210 1B68     		ldr	r3, [r3]
 2796 0212 1433     		adds	r3, r3, #20
 2797 0214 1B68     		ldr	r3, [r3]
 133:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** }
 2798              		.loc 6 133 30 discriminator 4
 2799 0216 7869     		ldr	r0, [r7, #20]
 2800 0218 9847     		blx	r3
 2801              	.LVL16:
 134:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 2802              		.loc 6 134 1 discriminator 4
 2803 021a 00BF     		nop
 2804              	.LBE22:
 2805              	.LBE21:
 178:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 179:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     finalizeTransition((Screen*)newScreen, (Presenter*)newPresenter, (Transition*)newTransition);
 180:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** 
 181:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp ****     return newPresenter;
 2806              		.loc 6 181 12 discriminator 4
 2807 021c FB6A     		ldr	r3, [r7, #44]
 182:Middlewares/ST/touchgfx/framework/include/mvp/MVPApplication.hpp **** }
 2808              		.loc 6 182 1 discriminator 4
 2809 021e 1846     		mov	r0, r3
 2810 0220 3C37     		adds	r7, r7, #60
 2811              	.LCFI243:
 2812              		.cfi_def_cfa_offset 12
 2813 0222 BD46     		mov	sp, r7
 2814              	.LCFI244:
 2815              		.cfi_def_cfa_register 13
 2816              		@ sp needed
 2817 0224 90BD     		pop	{r4, r7, pc}
 2818              	.L133:
 2819 0226 00BF     		.align	2
 2820              	.L132:
 2821 0228 00000000 		.word	.LC0
 2822 022c 90000000 		.word	.LC1
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 76


 2823 0230 94010000 		.word	.LC2
 2824 0234 D8010000 		.word	.LC3
 2825 0238 7C020000 		.word	.LC4
 2826              		.cfi_endproc
 2827              	.LFE857:
 2829              		.section	.text._ZN8touchgfx17AbstractPartition2atINS_12NoTransitionEEERT_t,"axG",%progbits,_ZN8tou
 2830              		.align	1
 2831              		.weak	_ZN8touchgfx17AbstractPartition2atINS_12NoTransitionEEERT_t
 2832              		.syntax unified
 2833              		.thumb
 2834              		.thumb_func
 2835              		.fpu fpv4-sp-d16
 2837              	_ZN8touchgfx17AbstractPartition2atINS_12NoTransitionEEERT_t:
 2838              	.LFB862:
 2839              		.file 13 "Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp"
   1:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** /******************************************************************************
   2:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** * Copyright (c) 2018(-2021) STMicroelectronics.
   3:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** * All rights reserved.
   4:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** *
   5:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** * This file is part of the TouchGFX 4.17.0 distribution.
   6:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** *
   7:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** * This software is licensed under terms that can be found in the LICENSE file in
   8:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** * the root directory of this software component.
   9:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** * If no LICENSE file comes with this software, it is provided AS-IS.
  10:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** *
  11:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** *******************************************************************************/
  12:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  13:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** /**
  14:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****  * @file common/AbstractPartition.hpp
  15:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****  *
  16:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****  * Declares the touchgfx::AbstractPartition class.
  17:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****  */
  18:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** #ifndef TOUCHGFX_ABSTRACTPARTITION_HPP
  19:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** #define TOUCHGFX_ABSTRACTPARTITION_HPP
  20:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  21:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** #include <touchgfx/hal/Types.hpp>
  22:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  23:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** namespace touchgfx
  24:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** {
  25:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** /**
  26:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****  * This type defines an abstract interface to a storage partition for allocating memory slots of
  27:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****  * equal size. The "partition" is not aware of the actual types stored in the partition
  28:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****  * memory, hence it provides no mechanism for deleting C++ objects when clear()'ed.
  29:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****  */
  30:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** class AbstractPartition
  31:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** {
  32:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** public:
  33:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /** Finalizes an instance of the AbstractPartition class. */
  34:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     virtual ~AbstractPartition();
  35:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  36:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
  37:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Gets the address of the next available storage slot. The slot size is compared with
  38:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * the specified size.
  39:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  40:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @param  size The size.
  41:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  42:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @return The address of an empty storage slot which contains minimum 'size' bytes.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 77


  43:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  44:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @note Asserts if 'size' is too large, or the storage is depleted.
  45:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
  46:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     virtual void* allocate(uint16_t size);
  47:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  48:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
  49:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Gets the address of the specified index.
  50:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  51:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @param  index Zero-based index of the.
  52:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @param  size  The size.
  53:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  54:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @return The address of the appropriate storage slot which contains minimum 'size'
  55:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *         bytes.
  56:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  57:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @note Asserts if 'size' is too large.
  58:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
  59:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     virtual void* allocateAt(uint16_t index, uint16_t size);
  60:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  61:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
  62:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Gets allocation count.
  63:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  64:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @return The currently allocated storage slots.
  65:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
  66:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     virtual uint16_t getAllocationCount() const;
  67:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  68:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
  69:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Determines index of previously allocated location. Since the Partition concept is
  70:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * loosely typed this method shall be used with care. The method does not guarantee that
  71:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * the found object at the returned index is a valid object. It only tests whether or
  72:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * not the object is within the bounds of the current partition allocations.
  73:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  74:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @param  address The location address to lookup.
  75:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  76:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @return An uint16_t.
  77:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
  78:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     virtual uint16_t indexOf(const void* address);
  79:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  80:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
  81:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Prepares the Partition for new allocations. Any objects present in the Partition
  82:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * shall not be used after invoking this method.
  83:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
  84:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     virtual void clear();
  85:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  86:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
  87:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Gets the capacity, i.e. the maximum allocation count.
  88:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  89:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @return The maximum allocation count.
  90:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
  91:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     virtual uint16_t capacity() const = 0;
  92:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
  93:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
  94:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Gets the address of the next available storage slot. The slot size is determined from
  95:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * the size of type T.
  96:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  97:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @tparam T Generic type parameter.
  98:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
  99:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @return The address of an empty storage slot.
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 78


 100:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
 101:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @note Asserts if T is too large, or the storage is depleted.
 102:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
 103:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     template <typename T>
 104:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     void* allocate()
 105:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     {
 106:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****         return allocate(static_cast<uint16_t>(sizeof(T)));
 107:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     }
 108:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
 109:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
 110:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Gets the address of the specified storage slot. The slot size is determined from the
 111:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * size of type T.
 112:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
 113:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @tparam T Generic type parameter.
 114:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @param  index Zero-based index of the.
 115:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
 116:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @return The address of the appropriate storage slot.
 117:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
 118:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @note Asserts if T is too large.
 119:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
 120:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     template <typename T>
 121:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     void* allocateAt(uint16_t index)
 122:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     {
 123:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****         return allocateAt(index, static_cast<uint16_t>(sizeof(T)));
 124:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     }
 125:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp **** 
 126:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     /**
 127:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * Gets the object at the specified index.
 128:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
 129:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @tparam T Generic type parameter.
 130:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @param  index The index into the Partition storage where the returned object is located.
 131:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      *
 132:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      * @return A typed reference to the object at the specified index.
 133:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****      */
 134:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     template <typename T>
 135:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     T& at(const uint16_t index)
 2840              		.loc 13 135 8
 2841              		.cfi_startproc
 2842              		@ args = 0, pretend = 0, frame = 8
 2843              		@ frame_needed = 1, uses_anonymous_args = 0
 2844 0000 80B5     		push	{r7, lr}
 2845              	.LCFI245:
 2846              		.cfi_def_cfa_offset 8
 2847              		.cfi_offset 7, -8
 2848              		.cfi_offset 14, -4
 2849 0002 82B0     		sub	sp, sp, #8
 2850              	.LCFI246:
 2851              		.cfi_def_cfa_offset 16
 2852 0004 00AF     		add	r7, sp, #0
 2853              	.LCFI247:
 2854              		.cfi_def_cfa_register 7
 2855 0006 7860     		str	r0, [r7, #4]
 2856 0008 0B46     		mov	r3, r1
 2857 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 136:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     {
 137:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****         return *static_cast<T*>(element(index));
 2858              		.loc 13 137 40
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 79


 2859 000c 7B68     		ldr	r3, [r7, #4]
 2860 000e 1B68     		ldr	r3, [r3]
 2861 0010 2433     		adds	r3, r3, #36
 2862 0012 1B68     		ldr	r3, [r3]
 2863 0014 7A88     		ldrh	r2, [r7, #2]
 2864 0016 1146     		mov	r1, r2
 2865 0018 7868     		ldr	r0, [r7, #4]
 2866 001a 9847     		blx	r3
 2867              	.LVL17:
 2868 001c 0346     		mov	r3, r0
 138:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     }
 2869              		.loc 13 138 5
 2870 001e 1846     		mov	r0, r3
 2871 0020 0837     		adds	r7, r7, #8
 2872              	.LCFI248:
 2873              		.cfi_def_cfa_offset 8
 2874 0022 BD46     		mov	sp, r7
 2875              	.LCFI249:
 2876              		.cfi_def_cfa_register 13
 2877              		@ sp needed
 2878 0024 80BD     		pop	{r7, pc}
 2879              		.cfi_endproc
 2880              	.LFE862:
 2882              		.section	.text._ZN8touchgfx17AbstractPartition2atI10screenViewEERT_t,"axG",%progbits,_ZN8touchgfx1
 2883              		.align	1
 2884              		.weak	_ZN8touchgfx17AbstractPartition2atI10screenViewEERT_t
 2885              		.syntax unified
 2886              		.thumb
 2887              		.thumb_func
 2888              		.fpu fpv4-sp-d16
 2890              	_ZN8touchgfx17AbstractPartition2atI10screenViewEERT_t:
 2891              	.LFB863:
 135:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     {
 2892              		.loc 13 135 8
 2893              		.cfi_startproc
 2894              		@ args = 0, pretend = 0, frame = 8
 2895              		@ frame_needed = 1, uses_anonymous_args = 0
 2896 0000 80B5     		push	{r7, lr}
 2897              	.LCFI250:
 2898              		.cfi_def_cfa_offset 8
 2899              		.cfi_offset 7, -8
 2900              		.cfi_offset 14, -4
 2901 0002 82B0     		sub	sp, sp, #8
 2902              	.LCFI251:
 2903              		.cfi_def_cfa_offset 16
 2904 0004 00AF     		add	r7, sp, #0
 2905              	.LCFI252:
 2906              		.cfi_def_cfa_register 7
 2907 0006 7860     		str	r0, [r7, #4]
 2908 0008 0B46     		mov	r3, r1
 2909 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 137:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     }
 2910              		.loc 13 137 40
 2911 000c 7B68     		ldr	r3, [r7, #4]
 2912 000e 1B68     		ldr	r3, [r3]
 2913 0010 2433     		adds	r3, r3, #36
 2914 0012 1B68     		ldr	r3, [r3]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 80


 2915 0014 7A88     		ldrh	r2, [r7, #2]
 2916 0016 1146     		mov	r1, r2
 2917 0018 7868     		ldr	r0, [r7, #4]
 2918 001a 9847     		blx	r3
 2919              	.LVL18:
 2920 001c 0346     		mov	r3, r0
 2921              		.loc 13 138 5
 2922 001e 1846     		mov	r0, r3
 2923 0020 0837     		adds	r7, r7, #8
 2924              	.LCFI253:
 2925              		.cfi_def_cfa_offset 8
 2926 0022 BD46     		mov	sp, r7
 2927              	.LCFI254:
 2928              		.cfi_def_cfa_register 13
 2929              		@ sp needed
 2930 0024 80BD     		pop	{r7, pc}
 2931              		.cfi_endproc
 2932              	.LFE863:
 2934              		.section	.text._ZN8touchgfx17AbstractPartition2atI15screenPresenterEERT_t,"axG",%progbits,_ZN8touc
 2935              		.align	1
 2936              		.weak	_ZN8touchgfx17AbstractPartition2atI15screenPresenterEERT_t
 2937              		.syntax unified
 2938              		.thumb
 2939              		.thumb_func
 2940              		.fpu fpv4-sp-d16
 2942              	_ZN8touchgfx17AbstractPartition2atI15screenPresenterEERT_t:
 2943              	.LFB864:
 135:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     {
 2944              		.loc 13 135 8
 2945              		.cfi_startproc
 2946              		@ args = 0, pretend = 0, frame = 8
 2947              		@ frame_needed = 1, uses_anonymous_args = 0
 2948 0000 80B5     		push	{r7, lr}
 2949              	.LCFI255:
 2950              		.cfi_def_cfa_offset 8
 2951              		.cfi_offset 7, -8
 2952              		.cfi_offset 14, -4
 2953 0002 82B0     		sub	sp, sp, #8
 2954              	.LCFI256:
 2955              		.cfi_def_cfa_offset 16
 2956 0004 00AF     		add	r7, sp, #0
 2957              	.LCFI257:
 2958              		.cfi_def_cfa_register 7
 2959 0006 7860     		str	r0, [r7, #4]
 2960 0008 0B46     		mov	r3, r1
 2961 000a 7B80     		strh	r3, [r7, #2]	@ movhi
 137:Middlewares/ST/touchgfx/framework/include/common/AbstractPartition.hpp ****     }
 2962              		.loc 13 137 40
 2963 000c 7B68     		ldr	r3, [r7, #4]
 2964 000e 1B68     		ldr	r3, [r3]
 2965 0010 2433     		adds	r3, r3, #36
 2966 0012 1B68     		ldr	r3, [r3]
 2967 0014 7A88     		ldrh	r2, [r7, #2]
 2968 0016 1146     		mov	r1, r2
 2969 0018 7868     		ldr	r0, [r7, #4]
 2970 001a 9847     		blx	r3
 2971              	.LVL19:
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 81


 2972 001c 0346     		mov	r3, r0
 2973              		.loc 13 138 5
 2974 001e 1846     		mov	r0, r3
 2975 0020 0837     		adds	r7, r7, #8
 2976              	.LCFI258:
 2977              		.cfi_def_cfa_offset 8
 2978 0022 BD46     		mov	sp, r7
 2979              	.LCFI259:
 2980              		.cfi_def_cfa_register 13
 2981              		@ sp needed
 2982 0024 80BD     		pop	{r7, pc}
 2983              		.cfi_endproc
 2984              	.LFE864:
 2986              		.section	.text._ZN8touchgfx4ViewI15screenPresenterE4bindERS1_,"axG",%progbits,_ZN8touchgfx4ViewI15
 2987              		.align	1
 2988              		.weak	_ZN8touchgfx4ViewI15screenPresenterE4bindERS1_
 2989              		.syntax unified
 2990              		.thumb
 2991              		.thumb_func
 2992              		.fpu fpv4-sp-d16
 2994              	_ZN8touchgfx4ViewI15screenPresenterE4bindERS1_:
 2995              	.LFB865:
 2996              		.file 14 "Middlewares/ST/touchgfx/framework/include/mvp/View.hpp"
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
  29:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @tparam T The type of Presenter associated with this view.
  30:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  *
  31:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @see Screen
  32:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  *
  33:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  * @note All views in the application must be a subclass of this type.
  34:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****  */
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 82


  35:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** template <class T>
  36:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** class View : public Screen
  37:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** {
  38:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** public:
  39:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     View()
  40:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****         : presenter(0)
  41:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     {
  42:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     }
  43:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp **** 
  44:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     /**
  45:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****      * Binds an instance of a specific Presenter type (subclass) to the View instance. This
  46:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****      * function is called automatically when a new presenter/view pair is activated.
  47:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****      *
  48:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****      * @param [in] presenter The specific Presenter to be associated with the View.
  49:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****      */
  50:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     void bind(T& presenter)
 2997              		.loc 14 50 10
 2998              		.cfi_startproc
 2999              		@ args = 0, pretend = 0, frame = 8
 3000              		@ frame_needed = 1, uses_anonymous_args = 0
 3001              		@ link register save eliminated.
 3002 0000 80B4     		push	{r7}
 3003              	.LCFI260:
 3004              		.cfi_def_cfa_offset 4
 3005              		.cfi_offset 7, -4
 3006 0002 83B0     		sub	sp, sp, #12
 3007              	.LCFI261:
 3008              		.cfi_def_cfa_offset 16
 3009 0004 00AF     		add	r7, sp, #0
 3010              	.LCFI262:
 3011              		.cfi_def_cfa_register 7
 3012 0006 7860     		str	r0, [r7, #4]
 3013 0008 3960     		str	r1, [r7]
  51:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     {
  52:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****         this->presenter = &presenter;
 3014              		.loc 14 52 25
 3015 000a 7B68     		ldr	r3, [r7, #4]
 3016 000c 3A68     		ldr	r2, [r7]
 3017 000e DA63     		str	r2, [r3, #60]
  53:Middlewares/ST/touchgfx/framework/include/mvp/View.hpp ****     }
 3018              		.loc 14 53 5
 3019 0010 00BF     		nop
 3020 0012 0C37     		adds	r7, r7, #12
 3021              	.LCFI263:
 3022              		.cfi_def_cfa_offset 4
 3023 0014 BD46     		mov	sp, r7
 3024              	.LCFI264:
 3025              		.cfi_def_cfa_register 13
 3026              		@ sp needed
 3027 0016 5DF8047B 		ldr	r7, [sp], #4
 3028              	.LCFI265:
 3029              		.cfi_restore 7
 3030              		.cfi_def_cfa_offset 0
 3031 001a 7047     		bx	lr
 3032              		.cfi_endproc
 3033              	.LFE865:
 3035              		.weak	_ZTVN8touchgfx12NoTransitionE
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 83


 3036              		.section	.rodata._ZTVN8touchgfx12NoTransitionE,"aG",%progbits,_ZTVN8touchgfx12NoTransitionE,comdat
 3037              		.align	2
 3040              	_ZTVN8touchgfx12NoTransitionE:
 3041 0000 00000000 		.word	0
 3042 0004 00000000 		.word	0
 3043 0008 00000000 		.word	_ZN8touchgfx12NoTransitionD1Ev
 3044 000c 00000000 		.word	_ZN8touchgfx12NoTransitionD0Ev
 3045 0010 00000000 		.word	_ZN8touchgfx12NoTransition15handleTickEventEv
 3046 0014 00000000 		.word	_ZN8touchgfx10Transition8tearDownEv
 3047 0018 00000000 		.word	_ZN8touchgfx10Transition4initEv
 3048 001c 00000000 		.word	_ZN8touchgfx10Transition10invalidateEv
 3049 0020 00000000 		.word	_ZN8touchgfx10Transition18setScreenContainerERNS_9ContainerE
 3050              		.section	.text._ZN8touchgfx12NoTransitionD2Ev,"axG",%progbits,_ZN8touchgfx12NoTransitionD5Ev,comda
 3051              		.align	1
 3052              		.weak	_ZN8touchgfx12NoTransitionD2Ev
 3053              		.syntax unified
 3054              		.thumb
 3055              		.thumb_func
 3056              		.fpu fpv4-sp-d16
 3058              	_ZN8touchgfx12NoTransitionD2Ev:
 3059              	.LFB883:
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** {
 3060              		.loc 9 31 7
 3061              		.cfi_startproc
 3062              		@ args = 0, pretend = 0, frame = 8
 3063              		@ frame_needed = 1, uses_anonymous_args = 0
 3064 0000 80B5     		push	{r7, lr}
 3065              	.LCFI266:
 3066              		.cfi_def_cfa_offset 8
 3067              		.cfi_offset 7, -8
 3068              		.cfi_offset 14, -4
 3069 0002 82B0     		sub	sp, sp, #8
 3070              	.LCFI267:
 3071              		.cfi_def_cfa_offset 16
 3072 0004 00AF     		add	r7, sp, #0
 3073              	.LCFI268:
 3074              		.cfi_def_cfa_register 7
 3075 0006 7860     		str	r0, [r7, #4]
 3076              	.LBB23:
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** {
 3077              		.loc 9 31 7
 3078 0008 054A     		ldr	r2, .L143
 3079 000a 7B68     		ldr	r3, [r7, #4]
 3080 000c 1A60     		str	r2, [r3]
 3081 000e 7B68     		ldr	r3, [r7, #4]
 3082 0010 1846     		mov	r0, r3
 3083 0012 FFF7FEFF 		bl	_ZN8touchgfx10TransitionD2Ev
 3084              	.LBE23:
 3085 0016 7B68     		ldr	r3, [r7, #4]
 3086 0018 1846     		mov	r0, r3
 3087 001a 0837     		adds	r7, r7, #8
 3088              	.LCFI269:
 3089              		.cfi_def_cfa_offset 8
 3090 001c BD46     		mov	sp, r7
 3091              	.LCFI270:
 3092              		.cfi_def_cfa_register 13
 3093              		@ sp needed
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 84


 3094 001e 80BD     		pop	{r7, pc}
 3095              	.L144:
 3096              		.align	2
 3097              	.L143:
 3098 0020 08000000 		.word	_ZTVN8touchgfx12NoTransitionE+8
 3099              		.cfi_endproc
 3100              	.LFE883:
 3102              		.weak	_ZN8touchgfx12NoTransitionD1Ev
 3103              		.thumb_set _ZN8touchgfx12NoTransitionD1Ev,_ZN8touchgfx12NoTransitionD2Ev
 3104              		.section	.text._ZN8touchgfx12NoTransitionD0Ev,"axG",%progbits,_ZN8touchgfx12NoTransitionD5Ev,comda
 3105              		.align	1
 3106              		.weak	_ZN8touchgfx12NoTransitionD0Ev
 3107              		.syntax unified
 3108              		.thumb
 3109              		.thumb_func
 3110              		.fpu fpv4-sp-d16
 3112              	_ZN8touchgfx12NoTransitionD0Ev:
 3113              	.LFB885:
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** {
 3114              		.loc 9 31 7
 3115              		.cfi_startproc
 3116              		@ args = 0, pretend = 0, frame = 8
 3117              		@ frame_needed = 1, uses_anonymous_args = 0
 3118 0000 80B5     		push	{r7, lr}
 3119              	.LCFI271:
 3120              		.cfi_def_cfa_offset 8
 3121              		.cfi_offset 7, -8
 3122              		.cfi_offset 14, -4
 3123 0002 82B0     		sub	sp, sp, #8
 3124              	.LCFI272:
 3125              		.cfi_def_cfa_offset 16
 3126 0004 00AF     		add	r7, sp, #0
 3127              	.LCFI273:
 3128              		.cfi_def_cfa_register 7
 3129 0006 7860     		str	r0, [r7, #4]
  31:Middlewares/ST/touchgfx/framework/include/touchgfx/transitions/NoTransition.hpp **** {
 3130              		.loc 9 31 7
 3131 0008 7868     		ldr	r0, [r7, #4]
 3132 000a FFF7FEFF 		bl	_ZN8touchgfx12NoTransitionD1Ev
 3133 000e 0C21     		movs	r1, #12
 3134 0010 7868     		ldr	r0, [r7, #4]
 3135 0012 FFF7FEFF 		bl	_ZdlPvj
 3136 0016 7B68     		ldr	r3, [r7, #4]
 3137 0018 1846     		mov	r0, r3
 3138 001a 0837     		adds	r7, r7, #8
 3139              	.LCFI274:
 3140              		.cfi_def_cfa_offset 8
 3141 001c BD46     		mov	sp, r7
 3142              	.LCFI275:
 3143              		.cfi_def_cfa_register 13
 3144              		@ sp needed
 3145 001e 80BD     		pop	{r7, pc}
 3146              		.cfi_endproc
 3147              	.LFE885:
 3149              		.weak	_ZTV23FrontendApplicationBase
 3150              		.section	.rodata._ZTV23FrontendApplicationBase,"aG",%progbits,_ZTV23FrontendApplicationBase,comdat
 3151              		.align	2
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 85


 3154              	_ZTV23FrontendApplicationBase:
 3155 0000 00000000 		.word	0
 3156 0004 00000000 		.word	0
 3157 0008 00000000 		.word	_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
 3158 000c 00000000 		.word	_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
 3159 0010 00000000 		.word	_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
 3160 0014 00000000 		.word	_ZN8touchgfx11Application14handleKeyEventEh
 3161 0018 00000000 		.word	_ZN8touchgfx11Application15handleTickEventEv
 3162 001c 00000000 		.word	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 3163 0020 00000000 		.word	_ZN23FrontendApplicationBaseD1Ev
 3164 0024 00000000 		.word	_ZN23FrontendApplicationBaseD0Ev
 3165 0028 00000000 		.word	_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
 3166 002c 00000000 		.word	_ZN8touchgfx11Application15appSwitchScreenEh
 3167 0030 00000000 		.word	_ZN8touchgfx11Application13requestRedrawEv
 3168 0034 00000000 		.word	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 3169 0038 00000000 		.word	_ZN8touchgfx11Application4drawEv
 3170 003c 00000000 		.word	_ZN8touchgfx11Application4drawERNS_4RectE
 3171 0040 00000000 		.word	_ZN8touchgfx11Application19cacheDrawOperationsEb
 3172              		.weak	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE
 3173              		.section	.rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE,"aG",%progbits,_ZTVN8touch
 3174              		.align	2
 3177              	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:
 3178 0000 00000000 		.word	0
 3179 0004 00000000 		.word	0
 3180 0008 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 3181 000c 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
 3182 0010 00000000 		.word	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
 3183 0014 00000000 		.word	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
 3184              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev,"axG",%progbits,_ZN8touchgf
 3185              		.align	1
 3186              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev
 3187              		.syntax unified
 3188              		.thumb
 3189              		.thumb_func
 3190              		.fpu fpv4-sp-d16
 3192              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:
 3193              	.LFB887:
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 3194              		.loc 4 424 8
 3195              		.cfi_startproc
 3196              		@ args = 0, pretend = 0, frame = 8
 3197              		@ frame_needed = 1, uses_anonymous_args = 0
 3198 0000 80B5     		push	{r7, lr}
 3199              	.LCFI276:
 3200              		.cfi_def_cfa_offset 8
 3201              		.cfi_offset 7, -8
 3202              		.cfi_offset 14, -4
 3203 0002 82B0     		sub	sp, sp, #8
 3204              	.LCFI277:
 3205              		.cfi_def_cfa_offset 16
 3206 0004 00AF     		add	r7, sp, #0
 3207              	.LCFI278:
 3208              		.cfi_def_cfa_register 7
 3209 0006 7860     		str	r0, [r7, #4]
 3210              	.LBB24:
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 3211              		.loc 4 424 8
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 86


 3212 0008 054A     		ldr	r2, .L149
 3213 000a 7B68     		ldr	r3, [r7, #4]
 3214 000c 1A60     		str	r2, [r3]
 3215 000e 7B68     		ldr	r3, [r7, #4]
 3216 0010 1846     		mov	r0, r3
 3217 0012 FFF7FEFF 		bl	_ZN8touchgfx15GenericCallbackIvvvED2Ev
 3218              	.LBE24:
 3219 0016 7B68     		ldr	r3, [r7, #4]
 3220 0018 1846     		mov	r0, r3
 3221 001a 0837     		adds	r7, r7, #8
 3222              	.LCFI279:
 3223              		.cfi_def_cfa_offset 8
 3224 001c BD46     		mov	sp, r7
 3225              	.LCFI280:
 3226              		.cfi_def_cfa_register 13
 3227              		@ sp needed
 3228 001e 80BD     		pop	{r7, pc}
 3229              	.L150:
 3230              		.align	2
 3231              	.L149:
 3232 0020 08000000 		.word	_ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE+8
 3233              		.cfi_endproc
 3234              	.LFE887:
 3236              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 3237              		.thumb_set _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev,_ZN8touchgfx8CallbackI23Fronten
 3238              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev,"axG",%progbits,_ZN8touchgf
 3239              		.align	1
 3240              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
 3241              		.syntax unified
 3242              		.thumb
 3243              		.thumb_func
 3244              		.fpu fpv4-sp-d16
 3246              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:
 3247              	.LFB889:
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 3248              		.loc 4 424 8
 3249              		.cfi_startproc
 3250              		@ args = 0, pretend = 0, frame = 8
 3251              		@ frame_needed = 1, uses_anonymous_args = 0
 3252 0000 80B5     		push	{r7, lr}
 3253              	.LCFI281:
 3254              		.cfi_def_cfa_offset 8
 3255              		.cfi_offset 7, -8
 3256              		.cfi_offset 14, -4
 3257 0002 82B0     		sub	sp, sp, #8
 3258              	.LCFI282:
 3259              		.cfi_def_cfa_offset 16
 3260 0004 00AF     		add	r7, sp, #0
 3261              	.LCFI283:
 3262              		.cfi_def_cfa_register 7
 3263 0006 7860     		str	r0, [r7, #4]
 424:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** {
 3264              		.loc 4 424 8
 3265 0008 7868     		ldr	r0, [r7, #4]
 3266 000a FFF7FEFF 		bl	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
 3267 000e 1021     		movs	r1, #16
 3268 0010 7868     		ldr	r0, [r7, #4]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 87


 3269 0012 FFF7FEFF 		bl	_ZdlPvj
 3270 0016 7B68     		ldr	r3, [r7, #4]
 3271 0018 1846     		mov	r0, r3
 3272 001a 0837     		adds	r7, r7, #8
 3273              	.LCFI284:
 3274              		.cfi_def_cfa_offset 8
 3275 001c BD46     		mov	sp, r7
 3276              	.LCFI285:
 3277              		.cfi_def_cfa_register 13
 3278              		@ sp needed
 3279 001e 80BD     		pop	{r7, pc}
 3280              		.cfi_endproc
 3281              	.LFE889:
 3283              		.weak	_ZTVN8touchgfx14MVPApplicationE
 3284              		.section	.rodata._ZTVN8touchgfx14MVPApplicationE,"aG",%progbits,_ZTVN8touchgfx14MVPApplicationE,co
 3285              		.align	2
 3288              	_ZTVN8touchgfx14MVPApplicationE:
 3289 0000 00000000 		.word	0
 3290 0004 00000000 		.word	0
 3291 0008 00000000 		.word	_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
 3292 000c 00000000 		.word	_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
 3293 0010 00000000 		.word	_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
 3294 0014 00000000 		.word	_ZN8touchgfx11Application14handleKeyEventEh
 3295 0018 00000000 		.word	_ZN8touchgfx11Application15handleTickEventEv
 3296 001c 00000000 		.word	_ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
 3297 0020 00000000 		.word	_ZN8touchgfx14MVPApplicationD1Ev
 3298 0024 00000000 		.word	_ZN8touchgfx14MVPApplicationD0Ev
 3299 0028 00000000 		.word	_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
 3300 002c 00000000 		.word	_ZN8touchgfx11Application15appSwitchScreenEh
 3301 0030 00000000 		.word	_ZN8touchgfx11Application13requestRedrawEv
 3302 0034 00000000 		.word	_ZN8touchgfx11Application13requestRedrawERNS_4RectE
 3303 0038 00000000 		.word	_ZN8touchgfx11Application4drawEv
 3304 003c 00000000 		.word	_ZN8touchgfx11Application4drawERNS_4RectE
 3305 0040 00000000 		.word	_ZN8touchgfx11Application19cacheDrawOperationsEb
 3306              		.weak	_ZTVN8touchgfx10TransitionE
 3307              		.section	.rodata._ZTVN8touchgfx10TransitionE,"aG",%progbits,_ZTVN8touchgfx10TransitionE,comdat
 3308              		.align	2
 3311              	_ZTVN8touchgfx10TransitionE:
 3312 0000 00000000 		.word	0
 3313 0004 00000000 		.word	0
 3314 0008 00000000 		.word	_ZN8touchgfx10TransitionD1Ev
 3315 000c 00000000 		.word	_ZN8touchgfx10TransitionD0Ev
 3316 0010 00000000 		.word	_ZN8touchgfx10Transition15handleTickEventEv
 3317 0014 00000000 		.word	_ZN8touchgfx10Transition8tearDownEv
 3318 0018 00000000 		.word	_ZN8touchgfx10Transition4initEv
 3319 001c 00000000 		.word	_ZN8touchgfx10Transition10invalidateEv
 3320 0020 00000000 		.word	_ZN8touchgfx10Transition18setScreenContainerERNS_9ContainerE
 3321              		.weak	_ZTVN8touchgfx15GenericCallbackIvvvEE
 3322              		.section	.rodata._ZTVN8touchgfx15GenericCallbackIvvvEE,"aG",%progbits,_ZTVN8touchgfx15GenericCallb
 3323              		.align	2
 3326              	_ZTVN8touchgfx15GenericCallbackIvvvEE:
 3327 0000 00000000 		.word	0
 3328 0004 00000000 		.word	0
 3329 0008 00000000 		.word	0
 3330 000c 00000000 		.word	0
 3331 0010 00000000 		.word	__cxa_pure_virtual
 3332 0014 00000000 		.word	__cxa_pure_virtual
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 88


 3333              		.weak	_ZTVN8touchgfx15UIEventListenerE
 3334              		.section	.rodata._ZTVN8touchgfx15UIEventListenerE,"aG",%progbits,_ZTVN8touchgfx15UIEventListenerE,
 3335              		.align	2
 3338              	_ZTVN8touchgfx15UIEventListenerE:
 3339 0000 00000000 		.word	0
 3340 0004 00000000 		.word	0
 3341 0008 00000000 		.word	_ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
 3342 000c 00000000 		.word	_ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
 3343 0010 00000000 		.word	_ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
 3344 0014 00000000 		.word	_ZN8touchgfx15UIEventListener14handleKeyEventEh
 3345 0018 00000000 		.word	_ZN8touchgfx15UIEventListener15handleTickEventEv
 3346 001c 00000000 		.word	_ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
 3347 0020 00000000 		.word	_ZN8touchgfx15UIEventListenerD1Ev
 3348 0024 00000000 		.word	_ZN8touchgfx15UIEventListenerD0Ev
 3349              		.section	.text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv,"axG",%progbits,_ZN8t
 3350              		.align	1
 3351              		.weak	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
 3352              		.syntax unified
 3353              		.thumb
 3354              		.thumb_func
 3355              		.fpu fpv4-sp-d16
 3357              	_ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:
 3358              	.LFB938:
 444:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 445:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 446:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Calls the member function. Do not call execute unless isValid() returns true (ie. a
 447:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * pointer to the object and the function has been set).
 448:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 449:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual void execute()
 3359              		.loc 4 449 18
 3360              		.cfi_startproc
 3361              		@ args = 0, pretend = 0, frame = 8
 3362              		@ frame_needed = 1, uses_anonymous_args = 0
 3363 0000 80B5     		push	{r7, lr}
 3364              	.LCFI286:
 3365              		.cfi_def_cfa_offset 8
 3366              		.cfi_offset 7, -8
 3367              		.cfi_offset 14, -4
 3368 0002 82B0     		sub	sp, sp, #8
 3369              	.LCFI287:
 3370              		.cfi_def_cfa_offset 16
 3371 0004 00AF     		add	r7, sp, #0
 3372              	.LCFI288:
 3373              		.cfi_def_cfa_register 7
 3374 0006 7860     		str	r0, [r7, #4]
 450:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 451:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         (pobject->*pmemfun_0)();
 3375              		.loc 4 451 10
 3376 0008 7B68     		ldr	r3, [r7, #4]
 3377 000a 5B68     		ldr	r3, [r3, #4]
 3378              		.loc 4 451 30
 3379 000c 7A68     		ldr	r2, [r7, #4]
 3380 000e D268     		ldr	r2, [r2, #12]
 3381 0010 5210     		asrs	r2, r2, #1
 3382 0012 9918     		adds	r1, r3, r2
 3383 0014 7B68     		ldr	r3, [r7, #4]
 3384 0016 DB68     		ldr	r3, [r3, #12]
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 89


 3385 0018 03F00103 		and	r3, r3, #1
 3386 001c 002B     		cmp	r3, #0
 3387 001e 02D1     		bne	.L154
 3388              		.loc 4 451 30 is_stmt 0 discriminator 1
 3389 0020 7B68     		ldr	r3, [r7, #4]
 3390 0022 9B68     		ldr	r3, [r3, #8]
 3391 0024 0AE0     		b	.L155
 3392              	.L154:
 3393              		.loc 4 451 10 is_stmt 1 discriminator 2
 3394 0026 7B68     		ldr	r3, [r7, #4]
 3395 0028 5B68     		ldr	r3, [r3, #4]
 3396              		.loc 4 451 30 discriminator 2
 3397 002a 7A68     		ldr	r2, [r7, #4]
 3398 002c D268     		ldr	r2, [r2, #12]
 3399 002e 5210     		asrs	r2, r2, #1
 3400 0030 1344     		add	r3, r3, r2
 3401 0032 1B68     		ldr	r3, [r3]
 3402 0034 7A68     		ldr	r2, [r7, #4]
 3403 0036 9268     		ldr	r2, [r2, #8]
 3404 0038 1344     		add	r3, r3, r2
 3405 003a 1B68     		ldr	r3, [r3]
 3406              	.L155:
 3407              		.loc 4 451 30 is_stmt 0 discriminator 4
 3408 003c 0846     		mov	r0, r1
 3409 003e 9847     		blx	r3
 3410              	.LVL20:
 452:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 3411              		.loc 4 452 5 is_stmt 1 discriminator 4
 3412 0040 00BF     		nop
 3413 0042 0837     		adds	r7, r7, #8
 3414              	.LCFI289:
 3415              		.cfi_def_cfa_offset 8
 3416 0044 BD46     		mov	sp, r7
 3417              	.LCFI290:
 3418              		.cfi_def_cfa_register 13
 3419              		@ sp needed
 3420 0046 80BD     		pop	{r7, pc}
 3421              		.cfi_endproc
 3422              	.LFE938:
 3424              		.section	.text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv,"axG",%progbits,_ZNK
 3425              		.align	1
 3426              		.weak	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
 3427              		.syntax unified
 3428              		.thumb
 3429              		.thumb_func
 3430              		.fpu fpv4-sp-d16
 3432              	_ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:
 3433              	.LFB939:
 453:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp **** 
 454:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     /**
 455:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * Function to check whether the Callback has been initialized with values.
 456:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      *
 457:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      * @return true If the callback is valid (i.e. safe to call execute).
 458:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****      */
 459:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     virtual bool isValid() const
 3434              		.loc 4 459 18
 3435              		.cfi_startproc
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 90


 3436              		@ args = 0, pretend = 0, frame = 8
 3437              		@ frame_needed = 1, uses_anonymous_args = 0
 3438              		@ link register save eliminated.
 3439 0000 80B4     		push	{r7}
 3440              	.LCFI291:
 3441              		.cfi_def_cfa_offset 4
 3442              		.cfi_offset 7, -4
 3443 0002 83B0     		sub	sp, sp, #12
 3444              	.LCFI292:
 3445              		.cfi_def_cfa_offset 16
 3446 0004 00AF     		add	r7, sp, #0
 3447              	.LCFI293:
 3448              		.cfi_def_cfa_register 7
 3449 0006 7860     		str	r0, [r7, #4]
 460:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     {
 461:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****         return (pobject != 0) && (pmemfun_0 != 0);
 3450              		.loc 4 461 17
 3451 0008 7B68     		ldr	r3, [r7, #4]
 3452 000a 5B68     		ldr	r3, [r3, #4]
 3453              		.loc 4 461 31
 3454 000c 002B     		cmp	r3, #0
 3455 000e 10D0     		beq	.L157
 3456              		.loc 4 461 45 discriminator 1
 3457 0010 7B68     		ldr	r3, [r7, #4]
 3458 0012 9B68     		ldr	r3, [r3, #8]
 3459 0014 002B     		cmp	r3, #0
 3460 0016 07D1     		bne	.L158
 3461              		.loc 4 461 45 is_stmt 0 discriminator 3
 3462 0018 7B68     		ldr	r3, [r7, #4]
 3463 001a DB68     		ldr	r3, [r3, #12]
 3464 001c 03F00103 		and	r3, r3, #1
 3465 0020 002B     		cmp	r3, #0
 3466 0022 01D1     		bne	.L158
 3467              		.loc 4 461 45 discriminator 5
 3468 0024 0123     		movs	r3, #1
 3469 0026 00E0     		b	.L159
 3470              	.L158:
 3471              		.loc 4 461 45 discriminator 6
 3472 0028 0023     		movs	r3, #0
 3473              	.L159:
 3474              		.loc 4 461 31 is_stmt 1 discriminator 8
 3475 002a 012B     		cmp	r3, #1
 3476 002c 01D0     		beq	.L157
 3477              		.loc 4 461 31 is_stmt 0 discriminator 9
 3478 002e 0123     		movs	r3, #1
 3479 0030 00E0     		b	.L160
 3480              	.L157:
 3481              		.loc 4 461 31 discriminator 10
 3482 0032 0023     		movs	r3, #0
 3483              	.L160:
 462:Middlewares/ST/touchgfx/framework/include/touchgfx/Callback.hpp ****     }
 3484              		.loc 4 462 5 is_stmt 1 discriminator 12
 3485 0034 1846     		mov	r0, r3
 3486 0036 0C37     		adds	r7, r7, #12
 3487              	.LCFI294:
 3488              		.cfi_def_cfa_offset 4
 3489 0038 BD46     		mov	sp, r7
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 91


 3490              	.LCFI295:
 3491              		.cfi_def_cfa_register 13
 3492              		@ sp needed
 3493 003a 5DF8047B 		ldr	r7, [sp], #4
 3494              	.LCFI296:
 3495              		.cfi_restore 7
 3496              		.cfi_def_cfa_offset 0
 3497 003e 7047     		bx	lr
 3498              		.cfi_endproc
 3499              	.LFE939:
 3501              		.text
 3502              	.Letext0:
 3503              		.file 15 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 3504              		.file 16 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 3505              		.file 17 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 3506              		.file 18 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 3507              		.file 19 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/c++/10.
 3508              		.file 20 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/machine
 3509              		.file 21 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/_st
 3510              		.file 22 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Types.hpp"
 3511              		.file 23 "Middlewares/ST/touchgfx/framework/include/touchgfx/Event.hpp"
 3512              		.file 24 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/ClickEvent.hpp"
 3513              		.file 25 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/DragEvent.hpp"
 3514              		.file 26 "Middlewares/ST/touchgfx/framework/include/touchgfx/events/GestureEvent.hpp"
 3515              		.file 27 "Middlewares/ST/touchgfx/framework/include/touchgfx/Bitmap.hpp"
 3516              		.file 28 "Middlewares/ST/touchgfx/framework/include/touchgfx/Unicode.hpp"
 3517              		.file 29 "Middlewares/ST/touchgfx/framework/include/touchgfx/Font.hpp"
 3518              		.file 30 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextProvider.hpp"
 3519              		.file 31 "Middlewares/ST/touchgfx/framework/include/touchgfx/TextureMapTypes.hpp"
 3520              		.file 32 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/DebugPrinter.hpp"
 3521              		.file 33 "Middlewares/ST/touchgfx/framework/include/touchgfx/lcd/LCD.hpp"
 3522              		.file 34 "Middlewares/ST/touchgfx/framework/include/touchgfx/Drawable.hpp"
 3523              		.file 35 "Middlewares/ST/touchgfx/framework/include/touchgfx/Screen.hpp"
 3524              		.file 36 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/Container.hpp"
 3525              		.file 37 "Middlewares/ST/touchgfx/framework/include/mvp/MVPHeap.hpp"
 3526              		.file 38 "Middlewares/ST/touchgfx/framework/include/mvp/Presenter.hpp"
 3527              		.file 39 "Middlewares/ST/touchgfx/framework/include/common/Meta.hpp"
 3528              		.file 40 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Widget.hpp"
 3529              		.file 41 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/Box.hpp"
 3530              		.file 42 "Middlewares/ST/touchgfx/framework/include/touchgfx/containers/ScrollableContainer.hpp"
 3531              		.file 43 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Cell.hpp"
 3532              		.file 44 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Outline.hpp"
 3533              		.file 45 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/RenderingBuffe
 3534              		.file 46 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Scanline.hpp"
 3535              		.file 47 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/BlitOp.hpp"
 3536              		.file 48 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/DMA.hpp"
 3537              		.file 49 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/FrameBufferAllocator.hpp"
 3538              		.file 50 "Middlewares/ST/touchgfx/framework/include/touchgfx/hal/Gestures.hpp"
 3539              		.file 51 "Middlewares/ST/touchgfx/framework/include/platform/core/MCUInstrumentation.hpp"
 3540              		.file 52 "Middlewares/ST/touchgfx/framework/include/platform/driver/button/ButtonController.hpp"
 3541              		.file 53 "Middlewares/ST/touchgfx/framework/include/platform/driver/touch/TouchController.hpp"
 3542              		.file 54 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainter.hpp"
 3543              		.file 55 "Middlewares/ST/touchgfx/framework/include/touchgfx/canvas_widget_renderer/Rasterizer.hpp
 3544              		.file 56 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CWRUtil.hpp"
 3545              		.file 57 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/CanvasWidget.hpp"
 3546              		.file 58 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Canvas.hpp"
 3547              		.file 59 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/Circle.hpp"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 92


 3548              		.file 60 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/AbstractPainterRGB565.
 3549              		.file 61 "Middlewares/ST/touchgfx/framework/include/touchgfx/widgets/canvas/PainterRGB565.hpp"
 3550              		.file 62 "Middlewares/ST/touchgfx/framework/include/common/Partition.hpp"
 3551              		.file 63 "Middlewares/ST/touchgfx/framework/include/platform/driver/lcd/LCD16bpp.hpp"
 3552              		.file 64 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/lib/gcc/arm-none-eabi/10.2.1/
 3553              		.file 65 "Src/gui/include/gui/common/FrontendHeap.hpp"
 3554              		.file 66 "Src/gui/include/gui/common/FrontendApplication.hpp"
 3555              		.file 67 "Src/gui/include/gui/screen_screen/screenPresenter.hpp"
 3556              		.file 68 "Src/gui/include/gui/screen_screen/screenView.hpp"
 3557              		.file 69 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/sys/sig
 3558              		.file 70 "/Users/design/4ms/stm32/gcc-arm-none-eabi-10-2020-q4-major/arm-none-eabi/include/signal.
 3559              		.file 71 "Src/generated/gui_generated/include/gui_generated/screen_screen/screenViewBase.hpp"
 3560              		.file 72 "Src/generated/gui_generated/include/gui_generated/common/FrontendHeapBase.hpp"
 3561              		.file 73 "<built-in>"
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 93


DEFINED SYMBOLS
                            *ABS*:0000000000000000 FrontendApplicationBase.cpp
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:18     .text._ZnwjPv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:26     .text._ZnwjPv:0000000000000000 _ZnwjPv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:66     .rodata._ZN8touchgfxL2PIE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:69     .rodata._ZN8touchgfxL2PIE:0000000000000000 _ZN8touchgfxL2PIE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:74     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 _ZN8touchgfxL4LEFTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:75     .rodata._ZN8touchgfxL4LEFTE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:79     .rodata._ZN8touchgfxL6CENTERE:0000000000000000 _ZN8touchgfxL6CENTERE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:84     .rodata._ZN8touchgfxL5RIGHTE:0000000000000000 _ZN8touchgfxL5RIGHTE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:89     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_LTRE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:90     .rodata._ZN8touchgfxL18TEXT_DIRECTION_LTRE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:94     .rodata._ZN8touchgfxL18TEXT_DIRECTION_RTLE:0000000000000000 _ZN8touchgfxL18TEXT_DIRECTION_RTLE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:97     .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:100    .rodata._ZN8touchgfxL32RenderingVariant_NearestNeighborE:0000000000000000 _ZN8touchgfxL32RenderingVariant_NearestNeighborE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:103    .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:106    .rodata._ZN8touchgfxL25RenderingVariant_BilinearE:0000000000000000 _ZN8touchgfxL25RenderingVariant_BilinearE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:109    .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:112    .rodata._ZN8touchgfxL24RenderingVariant_NoAlphaE:0000000000000000 _ZN8touchgfxL24RenderingVariant_NoAlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:115    .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:118    .rodata._ZN8touchgfxL22RenderingVariant_AlphaE:0000000000000000 _ZN8touchgfxL22RenderingVariant_AlphaE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:121    .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:124    .rodata._ZN8touchgfxL28RenderingVariant_FormatShiftE:0000000000000000 _ZN8touchgfxL28RenderingVariant_FormatShiftE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:127    .text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:134    .text._ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE:0000000000000000 _ZN8touchgfx15UIEventListener16handleClickEventERKNS_10ClickEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:172    .text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:179    .text._ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE:0000000000000000 _ZN8touchgfx15UIEventListener15handleDragEventERKNS_9DragEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:216    .text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:223    .text._ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE:0000000000000000 _ZN8touchgfx15UIEventListener18handleGestureEventERKNS_12GestureEventE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:260    .text._ZN8touchgfx15UIEventListener14handleKeyEventEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:267    .text._ZN8touchgfx15UIEventListener14handleKeyEventEh:0000000000000000 _ZN8touchgfx15UIEventListener14handleKeyEventEh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:305    .text._ZN8touchgfx15UIEventListener15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:312    .text._ZN8touchgfx15UIEventListener15handleTickEventEv:0000000000000000 _ZN8touchgfx15UIEventListener15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:348    .text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:355    .text._ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx15UIEventListener29handlePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:391    .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:398    .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:440    .text._ZN8touchgfx15UIEventListenerD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3338   .rodata._ZTVN8touchgfx15UIEventListenerE:0000000000000000 _ZTVN8touchgfx15UIEventListenerE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:398    .text._ZN8touchgfx15UIEventListenerD2Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:447    .text._ZN8touchgfx15UIEventListenerD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:454    .text._ZN8touchgfx15UIEventListenerD0Ev:0000000000000000 _ZN8touchgfx15UIEventListenerD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:492    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:495    .rodata._ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE:0000000000000000 _ZN8touchgfxL24BITMAP_ANIMATION_STORAGEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:498    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:501    .rodata._ZN8touchgfxL14BITMAP_INVALIDE:0000000000000000 _ZN8touchgfxL14BITMAP_INVALIDE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:504    .text._ZN8touchgfx11Application15appSwitchScreenEh:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:511    .text._ZN8touchgfx11Application15appSwitchScreenEh:0000000000000000 _ZN8touchgfx11Application15appSwitchScreenEh
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:550    .text._ZN8touchgfx11Application13requestRedrawERNS_4RectE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:557    .text._ZN8touchgfx11Application13requestRedrawERNS_4RectE:0000000000000000 _ZN8touchgfx11Application13requestRedrawERNS_4RectE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:601    .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:608    .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:651    .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3326   .rodata._ZTVN8touchgfx15GenericCallbackIvvvEE:0000000000000000 _ZTVN8touchgfx15GenericCallbackIvvvEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:608    .text._ZN8touchgfx15GenericCallbackIvvvED2Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:658    .text._ZN8touchgfx15GenericCallbackIvvvED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:665    .text._ZN8touchgfx15GenericCallbackIvvvED0Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED0Ev
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 94


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:703    .text._ZN8touchgfx10TransitionC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:710    .text._ZN8touchgfx10TransitionC2Ev:0000000000000000 _ZN8touchgfx10TransitionC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:759    .text._ZN8touchgfx10TransitionC2Ev:0000000000000028 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3311   .rodata._ZTVN8touchgfx10TransitionE:0000000000000000 _ZTVN8touchgfx10TransitionE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:710    .text._ZN8touchgfx10TransitionC2Ev:0000000000000000 _ZN8touchgfx10TransitionC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:766    .text._ZN8touchgfx10TransitionD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:773    .text._ZN8touchgfx10TransitionD2Ev:0000000000000000 _ZN8touchgfx10TransitionD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:815    .text._ZN8touchgfx10TransitionD2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:773    .text._ZN8touchgfx10TransitionD2Ev:0000000000000000 _ZN8touchgfx10TransitionD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:822    .text._ZN8touchgfx10TransitionD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:829    .text._ZN8touchgfx10TransitionD0Ev:0000000000000000 _ZN8touchgfx10TransitionD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:867    .text._ZN8touchgfx10Transition15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:874    .text._ZN8touchgfx10Transition15handleTickEventEv:0000000000000000 _ZN8touchgfx10Transition15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:910    .text._ZN8touchgfx10Transition8tearDownEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:917    .text._ZN8touchgfx10Transition8tearDownEv:0000000000000000 _ZN8touchgfx10Transition8tearDownEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:953    .text._ZN8touchgfx10Transition4initEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:960    .text._ZN8touchgfx10Transition4initEv:0000000000000000 _ZN8touchgfx10Transition4initEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:996    .text._ZN8touchgfx10Transition10invalidateEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1003   .text._ZN8touchgfx10Transition10invalidateEv:0000000000000000 _ZN8touchgfx10Transition10invalidateEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1046   .text._ZN8touchgfx10Transition18setScreenContainerERNS_9ContainerE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1053   .text._ZN8touchgfx10Transition18setScreenContainerERNS_9ContainerE:0000000000000000 _ZN8touchgfx10Transition18setScreenContainerERNS_9ContainerE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1094   .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1101   .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 _ZN8touchgfx11ApplicationD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1141   .text._ZN8touchgfx11ApplicationD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1101   .text._ZN8touchgfx11ApplicationD2Ev:0000000000000000 _ZN8touchgfx11ApplicationD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1148   .text._ZN8touchgfx11ApplicationD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1155   .text._ZN8touchgfx11ApplicationD0Ev:0000000000000000 _ZN8touchgfx11ApplicationD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1193   .text._ZN8touchgfx14MVPApplicationC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1200   .text._ZN8touchgfx14MVPApplicationC2Ev:0000000000000000 _ZN8touchgfx14MVPApplicationC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1252   .text._ZN8touchgfx14MVPApplicationC2Ev:0000000000000038 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3288   .rodata._ZTVN8touchgfx14MVPApplicationE:0000000000000000 _ZTVN8touchgfx14MVPApplicationE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1200   .text._ZN8touchgfx14MVPApplicationC2Ev:0000000000000000 _ZN8touchgfx14MVPApplicationC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1260   .text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1267   .text._ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx14MVPApplication29handlePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1309   .text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:0000000000000000 _ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1302   .text._ZN8touchgfx14MVPApplication31evaluatePendingScreenTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1392   .text._ZN5Model4bindEP13ModelListener:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1399   .text._ZN5Model4bindEP13ModelListener:0000000000000000 _ZN5Model4bindEP13ModelListener
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1441   .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1448   .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1488   .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1448   .text._ZN8touchgfx14MVPApplicationD2Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1495   .text._ZN8touchgfx14MVPApplicationD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1502   .text._ZN8touchgfx14MVPApplicationD0Ev:0000000000000000 _ZN8touchgfx14MVPApplicationD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1540   .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1547   .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 _ZN23FrontendApplicationBaseD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3192   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1593   .text._ZN23FrontendApplicationBaseD2Ev:000000000000002c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3154   .rodata._ZTV23FrontendApplicationBase:0000000000000000 _ZTV23FrontendApplicationBase
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1547   .text._ZN23FrontendApplicationBaseD2Ev:0000000000000000 _ZN23FrontendApplicationBaseD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1600   .text._ZN23FrontendApplicationBaseD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1607   .text._ZN23FrontendApplicationBaseD0Ev:0000000000000000 _ZN23FrontendApplicationBaseD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1645   .text._ZN8touchgfx12NoTransition15handleTickEventEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1652   .text._ZN8touchgfx12NoTransition15handleTickEventEv:0000000000000000 _ZN8touchgfx12NoTransition15handleTickEventEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1693   .text._ZN13ModelListener4bindEP5Model:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1700   .text._ZN13ModelListener4bindEP5Model:0000000000000000 _ZN13ModelListener4bindEP5Model
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1742   .text._ZN8touchgfx3HAL11getInstanceEv:0000000000000000 $t
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 95


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1749   .text._ZN8touchgfx3HAL11getInstanceEv:0000000000000000 _ZN8touchgfx3HAL11getInstanceEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1781   .text._ZN8touchgfx3HAL11getInstanceEv:0000000000000014 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1786   .text._ZN8touchgfx3HAL3lcdEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1793   .text._ZN8touchgfx3HAL3lcdEv:0000000000000000 _ZN8touchgfx3HAL3lcdEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1846   .text._ZN8touchgfx3HAL3lcdEv:0000000000000034 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1851   .text._ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1858   .text._ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap:0000000000000000 _ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2229   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1930   .text._ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap:0000000000000060 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1858   .text._ZN23FrontendApplicationBaseC2ER5ModelR12FrontendHeap:0000000000000000 _ZN23FrontendApplicationBaseC1ER5ModelR12FrontendHeap
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1937   .text._ZN8touchgfx15GenericCallbackIvvvEaSERKS1_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1944   .text._ZN8touchgfx15GenericCallbackIvvvEaSERKS1_:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvEaSERKS1_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1982   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEaSEOS2_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:1989   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEaSEOS2_:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEaSEOS2_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2038   .text._ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2045   .text._ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv:0000000000000000 _ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2293   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2EPS1_MS1_FvvE:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC1EPS1_MS1_FvvE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2102   .text._ZN23FrontendApplicationBase28gotoscreenScreenNoTransitionEv:0000000000000050 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2114   .text._ZN23FrontendApplicationBase32gotoscreenScreenNoTransitionImplEv:0000000000000000 _ZN23FrontendApplicationBase32gotoscreenScreenNoTransitionImplEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2107   .text._ZN23FrontendApplicationBase32gotoscreenScreenNoTransitionImplEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2443   .text._ZN8touchgfx14makeTransitionI10screenView15screenPresenterNS_12NoTransitionE5ModelEEPT0_PPNS_6ScreenEPPNS_9PresenterERNS_7MVPHeapEPPNS_10TransitionEPT2_:0000000000000000 _ZN8touchgfx14makeTransitionI10screenView15screenPresenterNS_12NoTransitionE5ModelEEPT0_PPNS_6ScreenEPPNS_9PresenterERNS_7MVPHeapEPPNS_10TransitionEPT2_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2161   .text._ZN23FrontendApplicationBase32gotoscreenScreenNoTransitionImplEv:0000000000000030 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2167   .text._ZN8touchgfx15GenericCallbackIvvvEC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2174   .text._ZN8touchgfx15GenericCallbackIvvvEC2Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvEC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2215   .text._ZN8touchgfx15GenericCallbackIvvvEC2Ev:000000000000001c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2174   .text._ZN8touchgfx15GenericCallbackIvvvEC2Ev:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvEC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2222   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2229   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2279   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2Ev:0000000000000034 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3177   .rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:0000000000000000 _ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2286   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2EPS1_MS1_FvvE:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2293   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2EPS1_MS1_FvvE:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2EPS1_MS1_FvvE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2345   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC2EPS1_MS1_FvvE:000000000000003c $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2352   .text._ZN8touchgfx12NoTransitionC2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2359   .text._ZN8touchgfx12NoTransitionC2Ev:0000000000000000 _ZN8touchgfx12NoTransitionC2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2399   .text._ZN8touchgfx12NoTransitionC2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3040   .rodata._ZTVN8touchgfx12NoTransitionE:0000000000000000 _ZTVN8touchgfx12NoTransitionE
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2359   .text._ZN8touchgfx12NoTransitionC2Ev:0000000000000000 _ZN8touchgfx12NoTransitionC1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2406   .rodata:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2436   .text._ZN8touchgfx14makeTransitionI10screenView15screenPresenterNS_12NoTransitionE5ModelEEPT0_PPNS_6ScreenEPPNS_9PresenterERNS_7MVPHeapEPPNS_10TransitionEPT2_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2837   .text._ZN8touchgfx17AbstractPartition2atINS_12NoTransitionEEERT_t:0000000000000000 _ZN8touchgfx17AbstractPartition2atINS_12NoTransitionEEERT_t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2890   .text._ZN8touchgfx17AbstractPartition2atI10screenViewEERT_t:0000000000000000 _ZN8touchgfx17AbstractPartition2atI10screenViewEERT_t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2942   .text._ZN8touchgfx17AbstractPartition2atI15screenPresenterEERT_t:0000000000000000 _ZN8touchgfx17AbstractPartition2atI15screenPresenterEERT_t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2994   .text._ZN8touchgfx4ViewI15screenPresenterE4bindERS1_:0000000000000000 _ZN8touchgfx4ViewI15screenPresenterE4bindERS1_
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2821   .text._ZN8touchgfx14makeTransitionI10screenView15screenPresenterNS_12NoTransitionE5ModelEEPT0_PPNS_6ScreenEPPNS_9PresenterERNS_7MVPHeapEPPNS_10TransitionEPT2_:0000000000000228 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2830   .text._ZN8touchgfx17AbstractPartition2atINS_12NoTransitionEEERT_t:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2883   .text._ZN8touchgfx17AbstractPartition2atI10screenViewEERT_t:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2935   .text._ZN8touchgfx17AbstractPartition2atI15screenPresenterEERT_t:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:2987   .text._ZN8touchgfx4ViewI15screenPresenterE4bindERS1_:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3037   .rodata._ZTVN8touchgfx12NoTransitionE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3058   .text._ZN8touchgfx12NoTransitionD2Ev:0000000000000000 _ZN8touchgfx12NoTransitionD1Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3112   .text._ZN8touchgfx12NoTransitionD0Ev:0000000000000000 _ZN8touchgfx12NoTransitionD0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3051   .text._ZN8touchgfx12NoTransitionD2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3058   .text._ZN8touchgfx12NoTransitionD2Ev:0000000000000000 _ZN8touchgfx12NoTransitionD2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3098   .text._ZN8touchgfx12NoTransitionD2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3105   .text._ZN8touchgfx12NoTransitionD0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3151   .rodata._ZTV23FrontendApplicationBase:0000000000000000 $d
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 96


/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3174   .rodata._ZTVN8touchgfx8CallbackI23FrontendApplicationBasevvvEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3246   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3357   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3432   .text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:0000000000000000 _ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3185   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3192   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3232   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED2Ev:0000000000000020 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3239   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvED0Ev:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3285   .rodata._ZTVN8touchgfx14MVPApplicationE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3308   .rodata._ZTVN8touchgfx10TransitionE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3323   .rodata._ZTVN8touchgfx15GenericCallbackIvvvEE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3335   .rodata._ZTVN8touchgfx15UIEventListenerE:0000000000000000 $d
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3350   .text._ZN8touchgfx8CallbackI23FrontendApplicationBasevvvE7executeEv:0000000000000000 $t
/var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s:3425   .text._ZNK8touchgfx8CallbackI23FrontendApplicationBasevvvE7isValidEv:0000000000000000 $t
                           .group:0000000000000000 _ZN8touchgfx15UIEventListenerD5Ev
                           .group:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvED5Ev
                           .group:0000000000000000 _ZN8touchgfx10TransitionC5Ev
                           .group:0000000000000000 _ZN8touchgfx10TransitionD5Ev
                           .group:0000000000000000 _ZN8touchgfx11ApplicationD5Ev
                           .group:0000000000000000 _ZN8touchgfx14MVPApplicationC5Ev
                           .group:0000000000000000 _ZN8touchgfx14MVPApplicationD5Ev
                           .group:0000000000000000 _ZN23FrontendApplicationBaseD5Ev
                           .group:0000000000000000 _ZN8touchgfx15GenericCallbackIvvvEC5Ev
                           .group:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC5Ev
                           .group:0000000000000000 _ZN8touchgfx8CallbackI23FrontendApplicationBasevvvEC5EPS1_MS1_FvvE
                           .group:0000000000000000 _ZN8touchgfx12NoTransitionC5Ev
                           .group:0000000000000000 _ZN8touchgfx12NoTransitionD5Ev
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
                           .group:0000000000000000 wm4.Utils.hpp.19.3cc10dfadb70e459e4fbf3def7a46f1d
                           .group:0000000000000000 wm4.cdefs.h.49.6cb61cdf7b446f131d08825667c792f6
                           .group:0000000000000000 wm4.types.h.40.8b6acba56cefbb11746718204edc8f5e
                           .group:0000000000000000 wm4._types.h.20.dd0d04dca3800a0d2a6129b87f3adbb2
                           .group:0000000000000000 wm4.stddef.h.155.7076294d263a8c080378a0849fe2c570
ARM GAS  /var/folders/lq/kc7vrpqx7h35r45hynsjbsxw0000gp/T//ccDLE9Wy.s 			page 97


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
_ZdlPvj
_ZN8touchgfx11Application11getInstanceEv
_ZTVN8touchgfx11ApplicationE
_ZN8touchgfx11ApplicationC2Ev
_ZN8touchgfx11Application8instanceE
_ZN8touchgfx3HAL8instanceE
_ZN8touchgfx8LCD16bpp22enableTextureMapperAllEv
_ZN8touchgfx11Application17currentTransitionE
_ZN8touchgfx11Application13currentScreenE
__assert_func
_ZN8touchgfx11Application20clearAllTimerWidgetsEv
_ZN10screenViewC1Ev
_ZN15screenPresenterC1ER10screenView
_ZN8touchgfx6Screen14bindTransitionERNS_10TransitionE
_ZN8touchgfx11Application16handleClickEventERKNS_10ClickEventE
_ZN8touchgfx11Application15handleDragEventERKNS_9DragEventE
_ZN8touchgfx11Application18handleGestureEventERKNS_12GestureEventE
_ZN8touchgfx11Application14handleKeyEventEh
_ZN8touchgfx11Application15handleTickEventEv
_ZN8touchgfx11Application12switchScreenEPNS_6ScreenE
_ZN8touchgfx11Application13requestRedrawEv
_ZN8touchgfx11Application4drawEv
_ZN8touchgfx11Application4drawERNS_4RectE
_ZN8touchgfx11Application19cacheDrawOperationsEb
__cxa_pure_virtual
