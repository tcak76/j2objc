//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/StackOverflowError.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangStackOverflowError")
#ifdef RESTRICT_JavaLangStackOverflowError
#define INCLUDE_ALL_JavaLangStackOverflowError 0
#else
#define INCLUDE_ALL_JavaLangStackOverflowError 1
#endif
#undef RESTRICT_JavaLangStackOverflowError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangStackOverflowError_) && (INCLUDE_ALL_JavaLangStackOverflowError || defined(INCLUDE_JavaLangStackOverflowError))
#define JavaLangStackOverflowError_

#define RESTRICT_JavaLangVirtualMachineError 1
#define INCLUDE_JavaLangVirtualMachineError 1
#include "../../java/lang/VirtualMachineError.h"

/*!
 @brief Thrown when the depth of the stack of the running program exceeds some
 platform or VM specific limit.
 Typically, this will occur only
 when a program becomes infinitely recursive, but it can also occur in
 correctly written (but deeply recursive) programs.
 */
@interface JavaLangStackOverflowError : JavaLangVirtualMachineError

#pragma mark Public

/*!
 @brief Constructs a new <code>StackOverflowError</code> that includes the current
 stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>StackOverflowError</code> with the current stack trace
 and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStackOverflowError)

FOUNDATION_EXPORT void JavaLangStackOverflowError_init(JavaLangStackOverflowError *self);

FOUNDATION_EXPORT JavaLangStackOverflowError *new_JavaLangStackOverflowError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStackOverflowError *create_JavaLangStackOverflowError_init();

FOUNDATION_EXPORT void JavaLangStackOverflowError_initWithNSString_(JavaLangStackOverflowError *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangStackOverflowError *new_JavaLangStackOverflowError_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStackOverflowError *create_JavaLangStackOverflowError_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStackOverflowError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangStackOverflowError")