package com.fanhl.androidjnidemo;

/**
 * Created by fanhl on 15/12/14.
 */
public class JniUtil {
    static {
        System.loadLibrary("hello-jni");
    }

    public native static String helloJni();
}
