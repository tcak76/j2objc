//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Exception.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangException")
#ifdef RESTRICT_JavaLangException
#define INCLUDE_ALL_JavaLangException 0
#else
#define INCLUDE_ALL_JavaLangException 1
#endif
#undef RESTRICT_JavaLangException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangException_) && (INCLUDE_ALL_JavaLangException || defined(INCLUDE_JavaLangException))
#define JavaLangException_

/*!
 @brief <code>Exception</code> is the superclass of all classes that represent recoverable
 exceptions.
 When exceptions are thrown, they may be caught by application
 code.
 - seealso: Throwable
 - seealso: Error
 - seealso: RuntimeException
 */
@interface JavaLangException : NSException

#pragma mark Public

/*!
 @brief Constructs a new <code>Exception</code> that includes the current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>Exception</code> with the current stack trace and the
 specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>Exception</code> with the current stack trace, the
 specified detail message and the specified cause.
 @param detailMessage
 the detail message for this exception.
 @param throwable
 the cause of this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
                 withNSException:(NSException *)throwable;

/*!
 @brief Constructs a new <code>Exception</code> with the current stack trace and the
 specified cause.
 @param throwable
 the cause of this exception.
 */
- (instancetype)initWithNSException:(NSException *)throwable;

#pragma mark Protected

/*!
 @brief Constructs a new <code>Exception</code> with the current stack trace,
 the specified detail message, the specified cause, and whether suppression
 and/or writable stack trace is enabled.
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause
                     withBoolean:(jboolean)enableSuppression
                     withBoolean:(jboolean)writableStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangException)

FOUNDATION_EXPORT void JavaLangException_init(JavaLangException *self);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangException *create_JavaLangException_init();

FOUNDATION_EXPORT void JavaLangException_initWithNSString_(JavaLangException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangException *create_JavaLangException_initWithNSString_(NSString *detailMessage);

FOUNDATION_EXPORT void JavaLangException_initWithNSString_withNSException_(JavaLangException *self, NSString *detailMessage, NSException *throwable);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_withNSException_(NSString *detailMessage, NSException *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangException *create_JavaLangException_initWithNSString_withNSException_(NSString *detailMessage, NSException *throwable);

FOUNDATION_EXPORT void JavaLangException_initWithNSException_(JavaLangException *self, NSException *throwable);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSException_(NSException *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangException *create_JavaLangException_initWithNSException_(NSException *throwable);

FOUNDATION_EXPORT void JavaLangException_initWithNSString_withNSException_withBoolean_withBoolean_(JavaLangException *self, NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace);

FOUNDATION_EXPORT JavaLangException *new_JavaLangException_initWithNSString_withNSException_withBoolean_withBoolean_(NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangException *create_JavaLangException_initWithNSString_withNSException_withBoolean_withBoolean_(NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangException")
