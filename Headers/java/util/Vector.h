//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Vector.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilVector")
#ifdef RESTRICT_JavaUtilVector
#define INCLUDE_ALL_JavaUtilVector 0
#else
#define INCLUDE_ALL_JavaUtilVector 1
#endif
#undef RESTRICT_JavaUtilVector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilVector_) && (INCLUDE_ALL_JavaUtilVector || defined(INCLUDE_JavaUtilVector))
#define JavaUtilVector_

#define RESTRICT_JavaUtilAbstractList 1
#define INCLUDE_JavaUtilAbstractList 1
#include "../../java/util/AbstractList.h"

#define RESTRICT_JavaUtilList 1
#define INCLUDE_JavaUtilList 1
#include "../../java/util/List.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "../../java/util/RandomAccess.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilEnumeration;

/*!
 @brief Vector is an implementation of <code>List</code>, backed by an array and synchronized.
 All optional operations including adding, removing, and replacing elements are supported.
 <p>All elements are permitted, including null.
 <p>This class is equivalent to <code>ArrayList</code> with synchronized operations. This has a
 performance cost, and the synchronization is not necessarily meaningful to your application:
 synchronizing each call to <code>get</code>, for example, is not equivalent to synchronizing on the
 list and iterating over it (which is probably what you intended). If you do need very highly
 concurrent access, you should also consider <code>java.util.concurrent.CopyOnWriteArrayList</code>.
 */
@interface JavaUtilVector : JavaUtilAbstractList < JavaUtilList, JavaUtilRandomAccess, NSCopying, JavaIoSerializable > {
 @public
  /*!
   @brief The number of elements or the size of the vector.
   */
  jint elementCount_;
  /*!
   @brief The elements of the vector.
   */
  IOSObjectArray *elementData_;
  /*!
   @brief How many elements should be added to the vector when it is detected that
 it needs to grow to accommodate extra entries.
   If this value is zero or
 negative the size will be doubled if an increase is needed.
   */
  jint capacityIncrement_;
}

#pragma mark Public

/*!
 @brief Constructs a new vector using the default capacity.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>Vector</code> containing the elements in
 <code>collection</code>.
 The order of the elements in the new <code>Vector</code>
 is dependent on the iteration order of the seed collection.
 @param collection
 the collection of elements to add.
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Constructs a new vector using the specified capacity.
 @param capacity
 the initial capacity of the new vector.
 @throws IllegalArgumentException
 if <code>capacity</code> is negative.
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Constructs a new vector using the specified capacity and capacity
 increment.
 @param capacity
 the initial capacity of the new vector.
 @param capacityIncrement
 the amount to increase the capacity when this vector is full.
 @throws IllegalArgumentException
 if <code>capacity</code> is negative.
 */
- (instancetype)initWithInt:(jint)capacity
                    withInt:(jint)capacityIncrement;

/*!
 @brief Adds the specified object at the end of this vector.
 @param object
 the object to add to the vector.
 @return <code>true</code>
 */
- (jboolean)addWithId:(id)object;

/*!
 @brief Adds the specified object into this vector at the specified location.
 The
 object is inserted before any element with the same or a higher index
 increasing their index by 1. If the location is equal to the size of this
 vector, the object is added at the end.
 @param location
 the index at which to insert the element.
 @param object
 the object to insert in this vector.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0 || location > size()</code>.
 - seealso: #addElement
 - seealso: #size
 */
- (void)addWithInt:(jint)location
            withId:(id)object;

/*!
 @brief Adds the objects in the specified collection to the end of this vector.
 @param collection
 the collection of objects.
 @return <code>true</code> if this vector is modified, <code>false</code> otherwise.
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Inserts the objects in the specified collection at the specified location
 in this vector.
 The objects are inserted in the order in which they are
 returned from the Collection iterator. The elements with an index equal
 or higher than <code>location</code> have their index increased by the size of
 the added collection.
 @param location
 the location to insert the objects.
 @param collection
 the collection of objects.
 @return <code>true</code> if this vector is modified, <code>false</code> otherwise.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0</code> or <code>location > size()</code>.
 */
- (jboolean)addAllWithInt:(jint)location
   withJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Adds the specified object at the end of this vector.
 @param object
 the object to add to the vector.
 */
- (void)addElementWithId:(id)object;

/*!
 @brief Returns the number of elements this vector can hold without growing.
 @return the capacity of this vector.
 - seealso: #ensureCapacity
 - seealso: #size
 */
- (jint)capacity;

/*!
 @brief Removes all elements from this vector, leaving it empty.
 - seealso: #isEmpty
 - seealso: #size
 */
- (void)clear;

/*!
 @brief Returns a new vector with the same elements, size, capacity and capacity
 increment as this vector.
 @return a shallow copy of this vector.
 - seealso: java.lang.Cloneable
 */
- (id)clone;

/*!
 @brief Searches this vector for the specified object.
 @param object
 the object to look for in this vector.
 @return <code>true</code> if object is an element of this vector,
 <code>false</code> otherwise.
 - seealso: #indexOf(Object)
 - seealso: #indexOf(Object,int)
 - seealso: java.lang.Object#equals
 */
- (jboolean)containsWithId:(id)object;

/*!
 @brief Searches this vector for all objects in the specified collection.
 @param collection
 the collection of objects.
 @return <code>true</code> if all objects in the specified collection are
 elements of this vector, <code>false</code> otherwise.
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Attempts to copy elements contained by this <code>Vector</code> into the
 corresponding elements of the supplied <code>Object</code> array.
 @param elements
 the <code>Object</code> array into which the elements of this
 vector are copied.
 @throws IndexOutOfBoundsException
 if <code>elements</code> is not big enough.
 - seealso: #clone
 */
- (void)copyIntoWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns the element at the specified location in this vector.
 @param location
 the index of the element to return in this vector.
 @return the element at the specified location.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>.
 - seealso: #size
 */
- (id)elementAtWithInt:(jint)location;

/*!
 @brief Returns an enumeration on the elements of this vector.
 The results of the
 enumeration may be affected if the contents of this vector is modified.
 @return an enumeration of the elements of this vector.
 - seealso: #elementAt
 - seealso: Enumeration
 */
- (id<JavaUtilEnumeration>)elements;

/*!
 @brief Ensures that this vector can hold the specified number of elements
 without growing.
 @param minimumCapacity
 the minimum number of elements that this vector will hold
 before growing.
 - seealso: #capacity
 */
- (void)ensureCapacityWithInt:(jint)minimumCapacity;

/*!
 @brief Compares the specified object to this vector and returns if they are
 equal.
 The object must be a List which contains the same objects in the
 same order.
 @param object
 the object to compare with this object
 @return <code>true</code> if the specified object is equal to this vector,
 <code>false</code> otherwise.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the first element in this vector.
 @return the element at the first position.
 @throws NoSuchElementException
 if this vector is empty.
 - seealso: #elementAt
 - seealso: #lastElement
 - seealso: #size
 */
- (id)firstElement;

/*!
 @brief Returns the element at the specified location in this vector.
 @param location
 the index of the element to return in this vector.
 @return the element at the specified location.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>.
 - seealso: #size
 */
- (id)getWithInt:(jint)location;

/*!
 @brief Returns an integer hash code for the receiver.
 Objects which are equal
 return the same value for this method.
 @return the receiver's hash.
 - seealso: #equals
 */
- (NSUInteger)hash;

/*!
 @brief Searches in this vector for the index of the specified object.
 The search
 for the object starts at the beginning and moves towards the end of this
 vector.
 @param object
 the object to find in this vector.
 @return the index in this vector of the specified element, -1 if the
 element isn't found.
 - seealso: #contains
 - seealso: #lastIndexOf(Object)
 - seealso: #lastIndexOf(Object,int)
 */
- (jint)indexOfWithId:(id)object;

/*!
 @brief Searches in this vector for the index of the specified object.
 The search
 for the object starts at the specified location and moves towards the end
 of this vector.
 @param object
 the object to find in this vector.
 @param location
 the index at which to start searching.
 @return the index in this vector of the specified element, -1 if the
 element isn't found.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0</code>.
 - seealso: #contains
 - seealso: #lastIndexOf(Object)
 - seealso: #lastIndexOf(Object,int)
 */
- (jint)indexOfWithId:(id)object
              withInt:(jint)location;

/*!
 @brief Inserts the specified object into this vector at the specified location.
 This object is inserted before any previous element at the specified
 location. All elements with an index equal or greater than
 <code>location</code> have their index increased by 1. If the location is
 equal to the size of this vector, the object is added at the end.
 @param object
 the object to insert in this vector.
 @param location
 the index at which to insert the element.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0 || location > size()</code>.
 - seealso: #addElement
 - seealso: #size
 */
- (void)insertElementAtWithId:(id)object
                      withInt:(jint)location;

/*!
 @brief Returns if this vector has no elements, a size of zero.
 @return <code>true</code> if this vector has no elements, <code>false</code>
 otherwise.
 - seealso: #size
 */
- (jboolean)isEmpty;

/*!
 @brief Returns the last element in this vector.
 @return the element at the last position.
 @throws NoSuchElementException
 if this vector is empty.
 - seealso: #elementAt
 - seealso: #firstElement
 - seealso: #size
 */
- (id)lastElement;

/*!
 @brief Searches in this vector for the index of the specified object.
 The search
 for the object starts at the end and moves towards the start of this
 vector.
 @param object
 the object to find in this vector.
 @return the index in this vector of the specified element, -1 if the
 element isn't found.
 - seealso: #contains
 - seealso: #indexOf(Object)
 - seealso: #indexOf(Object,int)
 */
- (jint)lastIndexOfWithId:(id)object;

/*!
 @brief Searches in this vector for the index of the specified object.
 The search
 for the object starts at the specified location and moves towards the
 start of this vector.
 @param object
 the object to find in this vector.
 @param location
 the index at which to start searching.
 @return the index in this vector of the specified element, -1 if the
 element isn't found.
 @throws ArrayIndexOutOfBoundsException
 if <code>location >= size()</code>.
 - seealso: #contains
 - seealso: #indexOf(Object)
 - seealso: #indexOf(Object,int)
 */
- (jint)lastIndexOfWithId:(id)object
                  withInt:(jint)location;

/*!
 @brief Removes the object at the specified location from this vector.
 All
 elements with an index bigger than <code>location</code> have their index
 decreased by 1.
 @param location
 the index of the object to remove.
 @return the removed object.
 @throws IndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>.
 */
- (id)removeWithInt:(jint)location;

/*!
 @brief Removes the first occurrence, starting at the beginning and moving
 towards the end, of the specified object from this vector.
 All elements
 with an index bigger than the element that gets removed have their index
 decreased by 1.
 @param object
 the object to remove from this vector.
 @return <code>true</code> if the specified object was found, <code>false</code>
 otherwise.
 - seealso: #removeAllElements
 - seealso: #removeElementAt
 - seealso: #size
 */
- (jboolean)removeWithId:(id)object;

/*!
 @brief Removes all occurrences in this vector of each object in the specified
 Collection.
 @param collection
 the collection of objects to remove.
 @return <code>true</code> if this vector is modified, <code>false</code> otherwise.
 - seealso: #remove(Object)
 - seealso: #contains(Object)
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all elements from this vector, leaving the size zero and the
 capacity unchanged.
 - seealso: #isEmpty
 - seealso: #size
 */
- (void)removeAllElements;

/*!
 @brief Removes the first occurrence, starting at the beginning and moving
 towards the end, of the specified object from this vector.
 All elements
 with an index bigger than the element that gets removed have their index
 decreased by 1.
 @param object
 the object to remove from this vector.
 @return <code>true</code> if the specified object was found, <code>false</code>
 otherwise.
 - seealso: #removeAllElements
 - seealso: #removeElementAt
 - seealso: #size
 */
- (jboolean)removeElementWithId:(id)object;

/*!
 @brief Removes the element found at index position <code>location</code> from
 this <code>Vector</code>.
 All elements with an index bigger than
 <code>location</code> have their index decreased by 1.
 @param location
 the index of the element to remove.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>.
 - seealso: #removeElement
 - seealso: #removeAllElements
 - seealso: #size
 */
- (void)removeElementAtWithInt:(jint)location;

/*!
 @brief Removes all objects from this vector that are not contained in the
 specified collection.
 @param collection
 the collection of objects to retain.
 @return <code>true</code> if this vector is modified, <code>false</code> otherwise.
 - seealso: #remove(Object)
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Replaces the element at the specified location in this vector with the
 specified object.
 @param location
 the index at which to put the specified object.
 @param object
 the object to add to this vector.
 @return the previous element at the location.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>.
 - seealso: #size
 */
- (id)setWithInt:(jint)location
          withId:(id)object;

/*!
 @brief Replaces the element at the specified location in this vector with the
 specified object.
 @param object
 the object to add to this vector.
 @param location
 the index at which to put the specified object.
 @throws ArrayIndexOutOfBoundsException
 if <code>location < 0 || location >= size()</code>.
 - seealso: #size
 */
- (void)setElementAtWithId:(id)object
                   withInt:(jint)location;

/*!
 @brief Sets the size of this vector to the specified size.
 If there are more
 than length elements in this vector, the elements at end are lost. If
 there are less than length elements in the vector, the additional
 elements contain null.
 @param length
 the new size of this vector.
 - seealso: #size
 */
- (void)setSizeWithInt:(jint)length;

/*!
 @brief Returns the number of elements in this vector.
 @return the number of elements in this vector.
 - seealso: #elementCount
 - seealso: #lastElement
 */
- (jint)size;

/*!
 @brief Returns a List of the specified portion of this vector from the start
 index to one less than the end index.
 The returned List is backed by this
 vector so changes to one are reflected by the other.
 @param start
 the index at which to start the sublist.
 @param end
 the index one past the end of the sublist.
 @return a List of a portion of this vector.
 @throws IndexOutOfBoundsException
 if <code>start < 0</code> or <code>end > size()</code>.
 @throws IllegalArgumentException
 if <code>start > end</code>.
 */
- (id<JavaUtilList>)subListWithInt:(jint)start
                           withInt:(jint)end;

/*!
 @brief Returns a new array containing all elements contained in this vector.
 @return an array of the elements from this vector.
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all elements contained in this vector.
 If the
 specified array is large enough to hold the elements, the specified array
 is used, otherwise an array of the same type is created. If the specified
 array is used and is larger than this vector, the array element following
 the collection elements is set to null.
 @param contents
 the array to fill.
 @return an array of the elements from this vector.
 @throws ArrayStoreException
 if the type of an element in this vector cannot be
 stored in the type of the specified array.
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;

/*!
 @brief Returns the string representation of this vector.
 @return the string representation of this vector.
 - seealso: #elements
 */
- (NSString *)description;

/*!
 @brief Sets the capacity of this vector to be the same as the size.
 - seealso: #capacity
 - seealso: #ensureCapacity
 - seealso: #size
 */
- (void)trimToSize;

#pragma mark Protected

/*!
 @brief Removes the objects in the specified range from the start to the, but not
 including, end index.
 All elements with an index bigger than or equal to
 <code>end</code> have their index decreased by <code>end - start</code>.
 @param start
 the index at which to start removing.
 @param end
 the index one past the end of the range to remove.
 @throws IndexOutOfBoundsException
 if <code>start < 0, start > end</code> or
 <code>end > size()</code>.
 */
- (void)removeRangeWithInt:(jint)start
                   withInt:(jint)end;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilVector)

J2OBJC_FIELD_SETTER(JavaUtilVector, elementData_, IOSObjectArray *)

FOUNDATION_EXPORT void JavaUtilVector_init(JavaUtilVector *self);

FOUNDATION_EXPORT JavaUtilVector *new_JavaUtilVector_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilVector *create_JavaUtilVector_init();

FOUNDATION_EXPORT void JavaUtilVector_initWithInt_(JavaUtilVector *self, jint capacity);

FOUNDATION_EXPORT JavaUtilVector *new_JavaUtilVector_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilVector *create_JavaUtilVector_initWithInt_(jint capacity);

FOUNDATION_EXPORT void JavaUtilVector_initWithInt_withInt_(JavaUtilVector *self, jint capacity, jint capacityIncrement);

FOUNDATION_EXPORT JavaUtilVector *new_JavaUtilVector_initWithInt_withInt_(jint capacity, jint capacityIncrement) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilVector *create_JavaUtilVector_initWithInt_withInt_(jint capacity, jint capacityIncrement);

FOUNDATION_EXPORT void JavaUtilVector_initWithJavaUtilCollection_(JavaUtilVector *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT JavaUtilVector *new_JavaUtilVector_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilVector *create_JavaUtilVector_initWithJavaUtilCollection_(id<JavaUtilCollection> collection);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilVector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilVector")
