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
#pragma once

#import <CoreFoundation/CFDate.h>
#import <CoreFoundation/CFDictionary.h>
#import <Security/SecBase.h>

// This header file is not yet fully implemented


typedef CF_OPTIONS(CFOptionFlags, SecAccessControlCreateFlags) {
	kSecAccessControlUserPresence = (1 << 0),
   kSecAccessControlTouchIDAny = 1u << 1,   // Constraint: Touch ID (any finger). Touch ID must be available and at least one finger must be enrolled. Item is still accessible by Touch ID even if fingers are added or removed.
   kSecAccessControlTouchIDCurrentSet = 1u << 3,   // Constraint: Touch ID from the set of currently enrolled fingers. Touch ID must be available and at least one finger must be enrolled. When fingers are added or removed, the item is invalidated.
   kSecAccessControlDevicePasscode = 1u << 4,   // Constraint: Device passcode
   kSecAccessControlOr  = 1u << 14,  // Constraint logic operation: when using more than one constraint, at least one of them must be satisfied.
   kSecAccessControlAnd  = 1u << 15,  // Constraint logic operation: when using more than one constraint, all must be satisfied.
   kSecAccessControlPrivateKeyUsage = 1u << 30,  // Create access control for private key operations (i.e. sign operation)
   kSecAccessControlApplicationPassword  = 1u << 31,  // Security: Application provided password for data encryption key generation. This is not a constraint but additional item encryption mechanism.
};

typedef struct __SecAccessControl* SecAccessControlRef;


SECURITY_EXPORT CFTypeID SecAccessControlGetTypeID(void) STUB_METHOD;

SECURITY_EXPORT SecAccessControlRef SecAccessControlCreateWithFlags(CFAllocatorRef allocator, CFTypeRef protection, SecAccessControlCreateFlags flags, CFErrorRef *error) STUB_METHOD;
