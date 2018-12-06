package com.eyckwu.liblame;

/**
 * Created by EyckWu on 2018/12/5.
 */

public class LameMp3 {

    static {
        System.loadLibrary("lame3");
    }

    public native int init(String pcmPath, int audioChannels, int bitRate, int sampleRate, String mp3Path);

    public native void encode();

    public native void destroy();

    public native String getVersion();
}
