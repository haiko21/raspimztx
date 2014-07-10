//-------------------------------------------------------------------------
//
// The MIT License (MIT)
//
// Copyright (c) 2014 Andrew Duncan
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//-------------------------------------------------------------------------

#ifndef DYNAMIC_INFO_H
#define DYNAMIC_INFO_H

//-------------------------------------------------------------------------

#include <stdint.h>

#include "image.h"
#include "lcd.h"

//-------------------------------------------------------------------------

typedef struct
{
    int16_t yPosition;
    IMAGE_T image;
    RGB8_T heading;
    RGB8_T foreground;
    RGB8_T background;
} DYNAMIC_INFO_T;

//-------------------------------------------------------------------------

void
initDynamicInfo(
    int16_t width,
    int16_t yPosition,
    DYNAMIC_INFO_T *info);

void
destroyDynamicInfo(
    DYNAMIC_INFO_T *info);

void
showDynamicInfo(
    LCD_T *lcd,
    DYNAMIC_INFO_T *info);

//-------------------------------------------------------------------------

#endif
