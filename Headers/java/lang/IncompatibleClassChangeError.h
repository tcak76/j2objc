//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IncompatibleClassChangeError.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIncompatibleClassChangeError")
#ifdef RESTRICT_JavaLangIncompatibleClassChangeError
#define INCLUDE_ALL_JavaLangIncompatibleClassChangeError 0
#else
#define INCLUDE_ALL_JavaLangIncompatibleClassChangeError 1
#endif
#undef RESTRICT_JavaLangIncompatibleClassChangeError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangIncompatibleClassChangeError_) && (INCLUDE_ALL_JavaLangIncompatibleClassChangeError || defined(INCLUDE_JavaLangIncompatibleClassChangeError))
#define JavaLangIncompatibleClassChangeError_

#define RESTRICT_JavaLangLinkageError 1
#define INCLUDE_JavaLangLinkageError 1
#include "../../java/lang/LinkageError.h"

/*!
 @brief <code>IncompatibleClassChangeError</code> is the superclass of all classes which
 represent errors that occur when inconsistent class files are loaded into
 the same running image.
 - seealso: Error
 */
@interface JavaLangIncompatibleClassChangeError : JavaLangLinkageError

#pragma mark Public

/*!
 @brief Constructs a new <code>IncompatibleClassChangeError</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>IncompatibleClassChangeError</code> with the current
 stack trace and the specified detail message.
 @param detailMessage
 the detail message for this error.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIncompatibleClassChangeError)

FOUNDATION_EXPORT void JavaLangIncompatibleClassChangeError_init(JavaLangIncompatibleClassChangeError *self);

FOUNDATION_EXPORT JavaLangIncompatibleClassChangeError *new_JavaLangIncompatibleClassChangeError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIncompatibleClassChangeError *create_JavaLangIncompatibleClassChangeError_init();

FOUNDATION_EXPORT void JavaLangIncompatibleClassChangeError_initWithNSString_(JavaLangIncompatibleClassChangeError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangIncompatibleClassChangeError *new_JavaLangIncompatibleClassChangeError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIncompatibleClassChangeError *create_JavaLangIncompatibleClassChangeError_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIncompatibleClassChangeError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangIncompatibleClassChangeError")
