/**
  @headerfile:    AppMessageTypes.h

  @mainpage     Application Message Types

  Types that define the application messages.<BR><BR>

  Reference: @ref APP_MESSAGE_TYPES <BR><BR>


  Copyright (C) 2014 Punch Through Design, LLC.

  Permission is hereby granted, free of charge, to any person obtaining a copy 
  of this software and associated documentation files (the "Software"), 
  to deal in the Software without restriction, including without limitation the 
  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
  sell copies of the Software, and to permit persons to whom the Software is 
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all 
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
  SOFTWARE.
*/

/*
 Added manually, following instructions
 here: https://punchthrough.com/bean/guides/building-an-app/v2-integrate-sdk/#step-2-edit-the-appmessagetypes-h-in-the-pods
 and here: https://github.com/PunchThrough/Bean-iOS-OSX-SDK/issues/24#issuecomment-172148681
 */
typedef UInt32 PTD_UINT32;
typedef UInt16 PTD_UINT16;
typedef UInt8  PTD_UINT8;
// Added manually, not included in instructions above, but seems to be necessary
typedef int8_t PTD_INT8;
typedef SInt16 PTD_INT16;
