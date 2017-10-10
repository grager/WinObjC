//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// This header file is not yet implemented

#pragma once

#include <StarboardExport.h>
#include <stdint.h>

enum {
    kCCPBKDF2,
};


typedef uint32_t CCPBKDFAlgorithm;

enum {
    kCCPRFHmacAlgSHA1,
    kCCPRFHmacAlgSHA224,
    kCCPRFHmacAlgSHA256,
    kCCPRFHmacAlgSHA384,
    kCCPRFHmacAlgSHA512
};

typedef int32_t CCHmacAlgorithm;

unsigned
CCCalibratePBKDF(CCPBKDFAlgorithm algorithm, size_t passwordLen, size_t saltLen,
                 CCPseudoRandomAlgorithm prf, size_t derivedKeyLen, uint32_t msec);

SB_EXTERNC_END
