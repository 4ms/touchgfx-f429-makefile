/**
 ******************************************************************************
 * File Name          : TouchGFXGeneratedHAL.cpp
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under Ultimate Liberty license
 * SLA0044, the "License"; You may not use this file except in compliance with
 * the License. You may obtain a copy of the License at:
 *                             www.st.com/SLA0044
 *
 ******************************************************************************
 */

#include <TouchGFXGeneratedHAL.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/hal/OSWrappers.hpp>

#include "stm32f4xx.h"

using namespace touchgfx;

namespace {
// Use the section "TouchGFX_Framebuffer" in the linker to specify the placement
// of the buffer
LOCATION_PRAGMA("TouchGFX_Framebuffer")
uint32_t frameBuf[(64 * 64 * 2 + 3) / 4 * 2] LOCATION_ATTRIBUTE(
    "TouchGFX_Framebuffer");
} // namespace

void TouchGFXGeneratedHAL::initialize() {
  HAL::initialize();
  registerEventListener(*(Application::getInstance()));
  setFrameBufferStartAddresses(
      (void *)frameBuf,
      (void *)(frameBuf + sizeof(frameBuf) / (sizeof(uint32_t) * 2)),
      (void *)0);
}

void TouchGFXGeneratedHAL::configureInterrupts() {}

void TouchGFXGeneratedHAL::enableInterrupts() {}

void TouchGFXGeneratedHAL::disableInterrupts() {}

void TouchGFXGeneratedHAL::enableLCDControllerInterrupt() {}

bool TouchGFXGeneratedHAL::beginFrame() { return HAL::beginFrame(); }

void TouchGFXGeneratedHAL::endFrame() { HAL::endFrame(); }

inline uint8_t *TouchGFXGeneratedHAL::advanceFrameBufferToRect(
    uint8_t *fbPtr, const touchgfx::Rect &rect) const {
  //       Advance vertically                   Advance horizontally
  fbPtr += rect.y * lcd().framebufferStride() + rect.x * 2;
  return fbPtr;
}

uint16_t *TouchGFXGeneratedHAL::getTFTFrameBuffer() const {
  return (uint16_t *)frameBuf;
}

void TouchGFXGeneratedHAL::setTFTFrameBuffer(uint16_t *adr) {
  // setTFTFrameBuffer() not used for selected display interface
}

void TouchGFXGeneratedHAL::flushFrameBuffer(const touchgfx::Rect &rect) {
  HAL::flushFrameBuffer(rect);
}

bool TouchGFXGeneratedHAL::blockCopy(void *RESTRICT dest,
                                     const void *RESTRICT src,
                                     uint32_t numBytes) {
  return HAL::blockCopy(dest, src, numBytes);
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
