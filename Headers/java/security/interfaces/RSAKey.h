//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAKey.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAKey")
#ifdef RESTRICT_JavaSecurityInterfacesRSAKey
#define INCLUDE_ALL_JavaSecurityInterfacesRSAKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesRSAKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesRSAKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInterfacesRSAKey_) && (INCLUDE_ALL_JavaSecurityInterfacesRSAKey || defined(INCLUDE_JavaSecurityInterfacesRSAKey))
#define JavaSecurityInterfacesRSAKey_

@class JavaMathBigInteger;

/*!
 @brief The base interface for PKCS#1 RSA public and private keys.
 */
@protocol JavaSecurityInterfacesRSAKey < NSObject, JavaObject >

/*!
 @brief Returns the modulus.
 @return the modulus.
 */
- (JavaMathBigInteger *)getModulus;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAKey)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAKey")