//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/PhantomReference.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRefPhantomReference")
#ifdef RESTRICT_JavaLangRefPhantomReference
#define INCLUDE_ALL_JavaLangRefPhantomReference 0
#else
#define INCLUDE_ALL_JavaLangRefPhantomReference 1
#endif
#undef RESTRICT_JavaLangRefPhantomReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangRefPhantomReference_) && (INCLUDE_ALL_JavaLangRefPhantomReference || defined(INCLUDE_JavaLangRefPhantomReference))
#define JavaLangRefPhantomReference_

#define RESTRICT_JavaLangRefReference 1
#define INCLUDE_JavaLangRefReference 1
#include "../../../java/lang/ref/Reference.h"

@class JavaLangRefReferenceQueue;

/*!
 @brief Implements a phantom reference, which is the weakest of the three types of
 references.
 Once the garbage collector decides that an object <code>obj</code> is
 phantom-reachable, it is being enqueued
 on the corresponding queue, but its referent is not cleared. That is, the
 reference queue of the phantom reference must explicitly be processed by some
 application code. As a consequence, a phantom reference that is not
 registered with any reference queue does not make any sense.
 <p>
 Phantom references are useful for implementing cleanup operations that are
 necessary before an object gets garbage-collected. They are sometimes more
 flexible than the <code>Object.finalize()</code> method.
 */
@interface JavaLangRefPhantomReference : JavaLangRefReference

#pragma mark Public

/*!
 @brief Constructs a new phantom reference and registers it with the given
 reference queue.
 The reference queue may be <code>null</code>, but this case
 does not make any sense, since the reference will never be enqueued, and
 the <code>get()</code> method always returns <code>null</code>.
 @param r the referent to track
 @param q the queue to register the phantom reference object with
 */
- (instancetype)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

/*!
 @brief Returns <code>null</code>.
 The referent of a phantom reference is not
 accessible.
 @return <code>null</code> (always)
 */
- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefPhantomReference)

FOUNDATION_EXPORT void JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefPhantomReference *self, id r, JavaLangRefReferenceQueue *q);

FOUNDATION_EXPORT JavaLangRefPhantomReference *new_JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(id r, JavaLangRefReferenceQueue *q) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRefPhantomReference *create_JavaLangRefPhantomReference_initWithId_withJavaLangRefReferenceQueue_(id r, JavaLangRefReferenceQueue *q);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefPhantomReference)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangRefPhantomReference")
