//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/javax/annotation/Resources.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationResources")
#ifdef RESTRICT_JavaxAnnotationResources
#define INCLUDE_ALL_JavaxAnnotationResources 0
#else
#define INCLUDE_ALL_JavaxAnnotationResources 1
#endif
#undef RESTRICT_JavaxAnnotationResources

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationResources_) && (INCLUDE_ALL_JavaxAnnotationResources || defined(INCLUDE_JavaxAnnotationResources))
#define JavaxAnnotationResources_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief javax.annotation.Resources annotation.
 No code was referenced,
 created using just its public API.
 */
@protocol JavaxAnnotationResources < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface JavaxAnnotationResources : NSObject < JavaxAnnotationResources > {
 @public
  IOSObjectArray *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationResources)

FOUNDATION_EXPORT id<JavaxAnnotationResources> create_JavaxAnnotationResources(IOSObjectArray *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationResources)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationResources")