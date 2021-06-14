//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Wrapper.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlWrapper")
#ifdef RESTRICT_JavaSqlWrapper
#define INCLUDE_ALL_JavaSqlWrapper 0
#else
#define INCLUDE_ALL_JavaSqlWrapper 1
#endif
#undef RESTRICT_JavaSqlWrapper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlWrapper_) && (INCLUDE_ALL_JavaSqlWrapper || defined(INCLUDE_JavaSqlWrapper))
#define JavaSqlWrapper_

@class IOSClass;

/*!
 @brief This class is an actual usage of the wrapper pattern for JDBC classes.
 Developers can get the delegate instance when the instance may be a proxy
 class.
 @since 1.6
 */
@protocol JavaSqlWrapper < NSObject, JavaObject >

/*!
 @brief Returns an object that implements the given interface.
 If the caller is
 not a wrapper, a SQLException will be thrown.
 @param iface -
 the class that defines the interface
 @return - an object that implements the interface
 @throws SQLException -
 if there is no object implementing the specific interface
 */
- (id)unwrapWithIOSClass:(IOSClass *)iface;

/*!
 @brief If the caller is a wrapper of the class or implements the given
 interface, the methods return false and vice versa.
 @param iface -
 the class that defines the interface
 @return - true if the instance implements the interface
 @throws SQLException -
 when an error occurs when judges the object
 */
- (jboolean)isWrapperForWithIOSClass:(IOSClass *)iface;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlWrapper)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlWrapper)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlWrapper")