/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker */

#ifndef _Included_selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker
#define _Included_selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker
 * Method:    nativeCreateObject
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_selfie_1app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker_nativeCreateObject
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker
 * Method:    nativeDestroyObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_selfie_1app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker_nativeDestroyObject
  (JNIEnv *, jclass, jlong);

/*
 * Class:     selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker
 * Method:    nativeStart
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_selfie_1app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker_nativeStart
  (JNIEnv *, jclass, jlong);

/*
 * Class:     selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker
 * Method:    nativeStop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_selfie_1app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker_nativeStop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker
 * Method:    nativeSetHandSize
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_selfie_1app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker_nativeSetHandSize
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     selfie_app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker
 * Method:    nativeDetect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_selfie_1app_ibrahim_selfie_com_selfiecamebyhand_DetectionBasedTracker_nativeDetect
  (JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif