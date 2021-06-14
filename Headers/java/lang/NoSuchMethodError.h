//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/NoSuchMethodError.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNoSuchMethodError")
#ifdef RESTRICT_JavaLangNoSuchMethodError
#define INCLUDE_ALL_JavaLangNoSuchMethodError 0
#else
#define INCLUDE_ALL_JavaLangNoSuchMethodError 1
#endif
#undef RESTRICT_JavaLangNoSuchMethodError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangNoSuchMethodError_) && (INCLUDE_ALL_JavaLangNoSuchMethodError || defined(INCLUDE_JavaLangNoSuchMethodError))
#define JavaLangNoSuchMethodError_

#define RESTRICT_JavaLangIncompatibleClassChangeError 1
#define INCLUDE_JavaLangIncompatibleClassChangeError 1
#include "../../java/lang/IncompatibleClassChangeError.h"

/*!
 @brief Thrown when the VM notices that a program tries to reference,
 on a class or object, a method that does not exist.
 */
@interface JavaLangNoSuchMethodError : JavaLangIncompatibleClassChangeError

#pragma mark Public

/*!
 @brief Constructs a new <code>NoSuchMethodError</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NoSuchMethodError</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNoSuchMethodError)

FOUNDATION_EXPORT void JavaLangNoSuchMethodError_init(JavaLangNoSuchMethodError *self);

FOUNDATION_EXPORT JavaLangNoSuchMethodError *new_JavaLangNoSuchMethodError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchMethodError *create_JavaLangNoSuchMethodError_init();

FOUNDATION_EXPORT void JavaLangNoSuchMethodError_initWithNSString_(JavaLangNoSuchMethodError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangNoSuchMethodError *new_JavaLangNoSuchMethodError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNoSuchMethodError *create_JavaLangNoSuchMethodError_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNoSuchMethodError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangNoSuchMethodError")