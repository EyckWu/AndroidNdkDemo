#include <jni.h>
#include <string>
#include "com_eyckwu_androidmp3_MainActivity.h"
#include "lamemp3/lame.h"

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_eyckwu_androidmp3_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(get_lame_version());
}
