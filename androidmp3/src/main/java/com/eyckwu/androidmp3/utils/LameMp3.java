package com.eyckwu.androidmp3.utils;

/**
 * Created by EyckWu on 2018/12/5.
 */

public class LameMp3 {
    public native int init(String pcmPath, int audioChannels, int bitRate, int sampleRate, String mp3Path);

    public native void encode();

    public native void destroy();
}
