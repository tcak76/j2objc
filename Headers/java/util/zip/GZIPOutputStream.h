//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/GZIPOutputStream.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipGZIPOutputStream")
#ifdef RESTRICT_JavaUtilZipGZIPOutputStream
#define INCLUDE_ALL_JavaUtilZipGZIPOutputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipGZIPOutputStream 1
#endif
#undef RESTRICT_JavaUtilZipGZIPOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipGZIPOutputStream_) && (INCLUDE_ALL_JavaUtilZipGZIPOutputStream || defined(INCLUDE_JavaUtilZipGZIPOutputStream))
#define JavaUtilZipGZIPOutputStream_

#define RESTRICT_JavaUtilZipDeflaterOutputStream 1
#define INCLUDE_JavaUtilZipDeflaterOutputStream 1
#include "../../../java/util/zip/DeflaterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaUtilZipCRC32;

/*!
 @brief The <code>GZIPOutputStream</code> class is used to write data to a stream in the
 GZIP storage format.
 <h3>Example</h3>
 <p>Using <code>GZIPOutputStream</code> is a little easier than <code>ZipOutputStream</code>
 because GZIP is only for compression, and is not a container for multiple files.
 This code creates a GZIP stream, similar to the <code>gzip(1)</code> utility.
 @code

  OutputStream os = ...
  byte[] bytes = ...
  GZIPOutputStream zos = new GZIPOutputStream(new BufferedOutputStream(os));
  try {
     zos.write(bytes);
  } finally {
     zos.close();
  }
  
@endcode
 */
@interface JavaUtilZipGZIPOutputStream : JavaUtilZipDeflaterOutputStream {
 @public
  /*!
   @brief The checksum algorithm used when treating uncompressed data.
   */
  JavaUtilZipCRC32 *crc_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>GZIPOutputStream</code> to write data in GZIP format to
 the given stream.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os;

/*!
 @brief Constructs a new <code>GZIPOutputStream</code> to write data in GZIP format to
 the given stream with the given flushing behavior (see <code>DeflaterOutputStream.flush</code>).
 @since 1.7
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                               withBoolean:(jboolean)syncFlush;

/*!
 @brief Constructs a new <code>GZIPOutputStream</code> to write data in GZIP format to
 the given stream with the given internal buffer size.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                                   withInt:(jint)bufferSize;

/*!
 @brief Constructs a new <code>GZIPOutputStream</code> to write data in GZIP format to
 the given stream with the given internal buffer size and
 flushing behavior (see <code>DeflaterOutputStream.flush</code>).
 @since 1.7
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                                   withInt:(jint)bufferSize
                               withBoolean:(jboolean)syncFlush;

/*!
 @brief Indicates to the stream that all data has been written out, and any GZIP
 terminal data can now be written.
 @throws IOException
 if an <code>IOException</code> occurs.
 */
- (void)finish;

/*!
 @brief Write up to nbytes of data from the given buffer, starting at offset off,
 to the underlying stream in GZIP format.
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)off
                   withInt:(jint)nbytes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipGZIPOutputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipGZIPOutputStream, crc_, JavaUtilZipCRC32 *)

FOUNDATION_EXPORT void JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_(JavaUtilZipGZIPOutputStream *self, JavaIoOutputStream *os);

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *new_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *os) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *create_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *os);

FOUNDATION_EXPORT void JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaUtilZipGZIPOutputStream *self, JavaIoOutputStream *os, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *new_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *os, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *create_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *os, jboolean syncFlush);

FOUNDATION_EXPORT void JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_(JavaUtilZipGZIPOutputStream *self, JavaIoOutputStream *os, jint bufferSize);

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *new_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_(JavaIoOutputStream *os, jint bufferSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *create_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_(JavaIoOutputStream *os, jint bufferSize);

FOUNDATION_EXPORT void JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaUtilZipGZIPOutputStream *self, JavaIoOutputStream *os, jint bufferSize, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *new_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaIoOutputStream *os, jint bufferSize, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPOutputStream *create_JavaUtilZipGZIPOutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaIoOutputStream *os, jint bufferSize, jboolean syncFlush);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipGZIPOutputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipGZIPOutputStream")
