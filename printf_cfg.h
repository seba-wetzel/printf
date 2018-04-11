///////////////////////////////////////////////////////////////////////////////
// \author (c) Marco Paland (info@paland.com)
//             2014-2018, PALANDesign Hannover, Germany
//
// \license The MIT License (MIT)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
// \brief Tiny printf configuation
//
///////////////////////////////////////////////////////////////////////////////


// buffer size used for internal printf() output string (created on stack)
// if you are just using sprintf and/or snprintf, you can set this to 0 and disable the printf() function
#define PRINTF_PRINTF_BUFFER_SIZE   128U

// ntoa conversion buffer size, this must be big enough to hold one converted numeric number (created on stack)
// 32 is a secure default value, 16 should be fine
#define PRINTF_NTOA_BUFFER_SIZE     32U

// ftoa conversion buffer size, this must be big enough to hold one converted float number (created on stack)
// 32 is a secure default value, 16 should be fine
#define PRINTF_FTOA_BUFFER_SIZE     32U

// define this to support the floating point format (%f)
#define PRINTF_FLOAT_SUPPORT

// define this to support long long types (%llu or %p)
#define PRINTF_LONG_LONG_SUPPORT

