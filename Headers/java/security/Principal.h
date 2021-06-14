//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/Principal.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPrincipal")
#ifdef RESTRICT_JavaSecurityPrincipal
#define INCLUDE_ALL_JavaSecurityPrincipal 0
#else
#define INCLUDE_ALL_JavaSecurityPrincipal 1
#endif
#undef RESTRICT_JavaSecurityPrincipal

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityPrincipal_) && (INCLUDE_ALL_JavaSecurityPrincipal || defined(INCLUDE_JavaSecurityPrincipal))
#define JavaSecurityPrincipal_

/*!
 @brief <code>Principal</code>s are objects which have identities.
 These can be
 individuals, groups, corporations, unique program executions, etc.
 */
@protocol JavaSecurityPrincipal < NSObject, JavaObject >

/*!
 @brief Compares the specified object with this <code>Principal</code> for equality
 and returns <code>true</code> if the specified object is equal, <code>false</code>
 otherwise.
 @param obj
 object to be compared for equality with this <code>Principal</code>
 .
 @return <code>true</code> if the specified object is equal to this <code>Principal</code>
 , otherwise <code>false</code>.
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the name of this <code>Principal</code>.
 @return the name of this <code>Principal</code>.
 */
- (NSString *)getName;

/*!
 @brief Returns the hash code value for this <code>Principal</code>.
 Returns the same
 hash code for <code>Principal</code>s that are equal to each other as
 required by the general contract of <code>Object.hashCode</code>.
 @return the hash code value for this <code>Principal</code>.
 - seealso: Object#equals(Object)
 - seealso: Principal#equals(Object)
 */
- (NSUInteger)hash;

/*!
 @brief Returns a string containing a concise, human-readable description of
 this <code>Principal</code>.
 @return a printable representation for this <code>Principal</code>.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrincipal)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrincipal)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPrincipal")