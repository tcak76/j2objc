//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AlgorithmParameterGeneratorSpi.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityAlgorithmParameterGeneratorSpi")
#ifdef RESTRICT_JavaSecurityAlgorithmParameterGeneratorSpi
#define INCLUDE_ALL_JavaSecurityAlgorithmParameterGeneratorSpi 0
#else
#define INCLUDE_ALL_JavaSecurityAlgorithmParameterGeneratorSpi 1
#endif
#undef RESTRICT_JavaSecurityAlgorithmParameterGeneratorSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityAlgorithmParameterGeneratorSpi_) && (INCLUDE_ALL_JavaSecurityAlgorithmParameterGeneratorSpi || defined(INCLUDE_JavaSecurityAlgorithmParameterGeneratorSpi))
#define JavaSecurityAlgorithmParameterGeneratorSpi_

@class JavaSecurityAlgorithmParameters;
@class JavaSecuritySecureRandom;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief <code>AlgorithmParameterGeneratorSpi</code> is the Service Provider Interface
 (SPI) definition for <code>AlgorithmParameterGenerator</code>.
 - seealso: AlgorithmParameterGenerator
 */
@interface JavaSecurityAlgorithmParameterGeneratorSpi : NSObject

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>AlgorithmParameterGeneratorSpi</code> .
 */
- (instancetype)init;

#pragma mark Protected

/*!
 @brief Computes and returns <code>AlgorithmParameters</code> for this generator's
 algorithm.
 @return <code>AlgorithmParameters</code> for this generator's algorithm.
 */
- (JavaSecurityAlgorithmParameters *)engineGenerateParameters;

/*!
 @brief Initializes this <code>AlgorithmParameterGeneratorSpi</code> with the given
 <code>AlgorithmParameterSpec</code> and the given <code>SecureRandom</code>.
 @param genParamSpec
 the parameters to use.
 @param random
 the source of randomness.
 @throws InvalidAlgorithmParameterException
 if the specified parameters are not supported.
 */
- (void)engineInitWithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)genParamSpec
                                withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random;

/*!
 @brief Initializes this <code>AlgorithmParameterGeneratorSpi</code> with the given
 size and the given <code>SecureRandom</code>.
 The default parameter set
 will be used.
 @param size
 the size (in number of bits).
 @param random
 the source of randomness.
 */
- (void)engineInitWithInt:(jint)size
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAlgorithmParameterGeneratorSpi)

FOUNDATION_EXPORT void JavaSecurityAlgorithmParameterGeneratorSpi_init(JavaSecurityAlgorithmParameterGeneratorSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAlgorithmParameterGeneratorSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityAlgorithmParameterGeneratorSpi")
