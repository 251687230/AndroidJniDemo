#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_fanhl_androidjnidemo_JniUtil_helloJni(JNIEnv *env, jclass type) {

    // TODO


    return (*env)->NewStringUTF(env, "hello jni...");
}