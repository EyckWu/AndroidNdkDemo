//
// Created by EyckWu on 2018/12/5.
//
#include <jni.h>
#include <string>
#include "com_eyckwu_androidmp3_utils_LameMp3.h"
#include "lamemp3/lame.h"

extern "C"

/*
 * Class:     com_eyckwu_androidmp3_utils_LameMp3
 * Method:    init
 * Signature: (Ljava/lang/String;IIILjava/lang/String;)I
 */
static lame_global_flags *glf = NULL;

JNIEXPORT jint JNICALL Java_com_eyckwu_androidmp3_utils_LameMp3_init
(JNIEnv *env, jobject cls, jstring pcmPath, jint audioChannels, jint bitRate, jint sampleRate, jstring mp3Path){
    if (glf != NULL) {
        lame_close(glf);
        glf = NULL;
    }
    glf = lame_init();
    lame_set_in_samplerate(glf, sampleRate);
    lame_set_num_channels(glf, audioChannels);
    lame_set_out_samplerate(glf, sampleRate);
    lame_set_brate(glf, bitRate);
//    lame_set_quality(glf, quality);
    lame_init_params(glf);
}

/*
 * Class:     com_eyckwu_androidmp3_utils_LameMp3
 * Method:    encode
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_eyckwu_androidmp3_utils_LameMp3_encode
        (JNIEnv *, jobject){

}

/*
 * Class:     com_eyckwu_androidmp3_utils_LameMp3
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_eyckwu_androidmp3_utils_LameMp3_destroy
        (JNIEnv *, jobject){

}

