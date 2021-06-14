//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/CharacterData.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomCharacterData")
#ifdef RESTRICT_OrgW3cDomCharacterData
#define INCLUDE_ALL_OrgW3cDomCharacterData 0
#else
#define INCLUDE_ALL_OrgW3cDomCharacterData 1
#endif
#undef RESTRICT_OrgW3cDomCharacterData

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomCharacterData_) && (INCLUDE_ALL_OrgW3cDomCharacterData || defined(INCLUDE_OrgW3cDomCharacterData))
#define OrgW3cDomCharacterData_

#define RESTRICT_OrgW3cDomNode 1
#define INCLUDE_OrgW3cDomNode 1
#include "../../../org/w3c/dom/Node.h"

/*!
 @brief The <code>CharacterData</code> interface extends Node with a set of
 attributes and methods for accessing character data in the DOM.
 For
 clarity this set is defined here rather than on each object that uses
 these attributes and methods. No DOM objects correspond directly to
 <code>CharacterData</code>, though <code>Text</code> and others do
 inherit the interface from it. All <code>offsets</code> in this interface
 start from <code>0</code>.
 <p>As explained in the <code>DOMString</code> interface, text strings in
 the DOM are represented in UTF-16, i.e. as a sequence of 16-bit units. In
 the following, the term 16-bit units is used whenever necessary to
 indicate that indexing on CharacterData is done in 16-bit units.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomCharacterData < OrgW3cDomNode, NSObject, JavaObject >

/*!
 @brief The character data of the node that implements this interface.
 The DOM
 implementation may not put arbitrary limits on the amount of data
 that may be stored in a <code>CharacterData</code> node. However,
 implementation limits may mean that the entirety of a node's data may
 not fit into a single <code>DOMString</code>. In such cases, the user
 may call <code>substringData</code> to retrieve the data in
 appropriately sized pieces.
 @exception DOMException
 DOMSTRING_SIZE_ERR: Raised when it would return more characters than
 fit in a <code>DOMString</code> variable on the implementation
 platform.
 */
- (NSString *)getData;

/*!
 @brief The character data of the node that implements this interface.
 The DOM
 implementation may not put arbitrary limits on the amount of data
 that may be stored in a <code>CharacterData</code> node. However,
 implementation limits may mean that the entirety of a node's data may
 not fit into a single <code>DOMString</code>. In such cases, the user
 may call <code>substringData</code> to retrieve the data in
 appropriately sized pieces.
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised when the node is readonly.
 */
- (void)setDataWithNSString:(NSString *)data;

/*!
 @brief The number of 16-bit units that are available through <code>data</code>
 and the <code>substringData</code> method below.
 This may have the
 value zero, i.e., <code>CharacterData</code> nodes may be empty.
 */
- (jint)getLength;

/*!
 @brief Extracts a range of data from the node.
 @param offset Start offset of substring to extract.
 @param count The number of 16-bit units to extract.
 @return The specified substring. If the sum of <code>offset</code> and
 <code>count</code> exceeds the <code>length</code>, then all 16-bit
 units to the end of the data are returned.
 @exception DOMException
 INDEX_SIZE_ERR: Raised if the specified <code>offset</code> is
 negative or greater than the number of 16-bit units in
 <code>data</code>, or if the specified <code>count</code> is
 negative.
 <br>DOMSTRING_SIZE_ERR: Raised if the specified range of text does
 not fit into a <code>DOMString</code>.
 */
- (NSString *)substringDataWithInt:(jint)offset
                           withInt:(jint)count;

/*!
 @brief Append the string to the end of the character data of the node.
 Upon
 success, <code>data</code> provides access to the concatenation of
 <code>data</code> and the <code>DOMString</code> specified.
 @param arg The <code>DOMString</code> to append.
 @exception DOMException
 NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 */
- (void)appendDataWithNSString:(NSString *)arg;

/*!
 @brief Insert a string at the specified 16-bit unit offset.
 @param offset The character offset at which to insert.
 @param arg The <code>DOMString</code> to insert.
 @exception DOMException
 INDEX_SIZE_ERR: Raised if the specified <code>offset</code> is
 negative or greater than the number of 16-bit units in
 <code>data</code>.
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 */
- (void)insertDataWithInt:(jint)offset
             withNSString:(NSString *)arg;

/*!
 @brief Remove a range of 16-bit units from the node.
 Upon success,
 <code>data</code> and <code>length</code> reflect the change.
 @param offset The offset from which to start removing.
 @param count The number of 16-bit units to delete. If the sum of
 <code>offset</code> and <code>count</code> exceeds
 <code>length</code> then all 16-bit units from <code>offset</code>
 to the end of the data are deleted.
 @exception DOMException
 INDEX_SIZE_ERR: Raised if the specified <code>offset</code> is
 negative or greater than the number of 16-bit units in
 <code>data</code>, or if the specified <code>count</code> is
 negative.
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 */
- (void)deleteDataWithInt:(jint)offset
                  withInt:(jint)count;

/*!
 @brief Replace the characters starting at the specified 16-bit unit offset
 with the specified string.
 @param offset The offset from which to start replacing.
 @param count The number of 16-bit units to replace. If the sum of
 <code>offset</code> and <code>count</code> exceeds
 <code>length</code>, then all 16-bit units to the end of the data
 are replaced; (i.e., the effect is the same as a <code>remove</code>
 method call with the same range, followed by an <code>append</code>
 method invocation).
 @param arg The <code>DOMString</code> with which the range must be
 replaced.
 @exception DOMException
 INDEX_SIZE_ERR: Raised if the specified <code>offset</code> is
 negative or greater than the number of 16-bit units in
 <code>data</code>, or if the specified <code>count</code> is
 negative.
 <br>NO_MODIFICATION_ALLOWED_ERR: Raised if this node is readonly.
 */
- (void)replaceDataWithInt:(jint)offset
                   withInt:(jint)count
              withNSString:(NSString *)arg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomCharacterData)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomCharacterData)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomCharacterData")
