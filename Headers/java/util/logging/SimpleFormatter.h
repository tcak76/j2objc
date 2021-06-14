//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/SimpleFormatter.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingSimpleFormatter")
#ifdef RESTRICT_JavaUtilLoggingSimpleFormatter
#define INCLUDE_ALL_JavaUtilLoggingSimpleFormatter 0
#else
#define INCLUDE_ALL_JavaUtilLoggingSimpleFormatter 1
#endif
#undef RESTRICT_JavaUtilLoggingSimpleFormatter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilLoggingSimpleFormatter_) && (INCLUDE_ALL_JavaUtilLoggingSimpleFormatter || defined(INCLUDE_JavaUtilLoggingSimpleFormatter))
#define JavaUtilLoggingSimpleFormatter_

#define RESTRICT_JavaUtilLoggingFormatter 1
#define INCLUDE_JavaUtilLoggingFormatter 1
#include "../../../java/util/logging/Formatter.h"

@class JavaUtilLoggingLogRecord;

/*!
 @brief <code>SimpleFormatter</code> can be used to print a summary of the information
 contained in a <code>LogRecord</code> object in a human readable format.
 */
@interface JavaUtilLoggingSimpleFormatter : JavaUtilLoggingFormatter

#pragma mark Public

/*!
 @brief Constructs a new <code>SimpleFormatter</code>.
 */
- (instancetype)init;

/*!
 @brief Converts a <code>LogRecord</code> object into a human readable string
 representation.
 @param r
 the log record to be formatted into a string.
 @return the formatted string.
 */
- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)r;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingSimpleFormatter)

FOUNDATION_EXPORT void JavaUtilLoggingSimpleFormatter_init(JavaUtilLoggingSimpleFormatter *self);

FOUNDATION_EXPORT JavaUtilLoggingSimpleFormatter *new_JavaUtilLoggingSimpleFormatter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingSimpleFormatter *create_JavaUtilLoggingSimpleFormatter_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingSimpleFormatter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingSimpleFormatter")