/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mao_archive_unrar_RarFile */

#ifndef _Included_mao_archive_unrar_RarFile
#define _Included_mao_archive_unrar_RarFile
#ifdef __cplusplus
extern "C" {
#endif
#undef mao_archive_unrar_RarFile_RAR_OM_LIST
#define mao_archive_unrar_RarFile_RAR_OM_LIST 0L
#undef mao_archive_unrar_RarFile_RAR_OM_EXTRACT
#define mao_archive_unrar_RarFile_RAR_OM_EXTRACT 1L
#undef mao_archive_unrar_RarFile_RAR_OM_LIST_INCSPLIT
#define mao_archive_unrar_RarFile_RAR_OM_LIST_INCSPLIT 2L
/*
 * Class:     mao_archive_unrar_RarFile
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mao_archive_unrar_RarFile_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     mao_archive_unrar_RarFile
 * Method:    openArchive
 * Signature: (Ljava/lang/String;I[Z)J
 */
JNIEXPORT jlong JNICALL Java_mao_archive_unrar_RarFile_openArchive
  (JNIEnv *, jclass, jstring, jint, jbooleanArray);

/*
 * Class:     mao_archive_unrar_RarFile
 * Method:    readHeader
 * Signature: (J)Lmao/archive/unrar/RarEntry;
 */
JNIEXPORT jobject JNICALL Java_mao_archive_unrar_RarFile_readHeader
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mao_archive_unrar_RarFile
 * Method:    readHeaderSkipData
 * Signature: (J)Lmao/archive/unrar/RarEntry;
 */
JNIEXPORT jobject JNICALL Java_mao_archive_unrar_RarFile_readHeaderSkipData
  (JNIEnv *, jclass, jlong);

/*
 * Class:     mao_archive_unrar_RarFile
 * Method:    setPassword
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_mao_archive_unrar_RarFile_setPassword
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     mao_archive_unrar_RarFile
 * Method:    readData
 * Signature: (JLjava/lang/String;Ljava/io/OutputStream;)I
 */
JNIEXPORT jint JNICALL Java_mao_archive_unrar_RarFile_readData
  (JNIEnv *, jclass, jlong, jstring, jobject);

/*
 * Class:     mao_archive_unrar_RarFile
 * Method:    closeArchive
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_mao_archive_unrar_RarFile_closeArchive
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
