// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from client_interface.djinni

package com.dropbox.djinni.test;

import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/** Record returned by a client */
public class ClientReturnedRecord {


    /*package*/ long mRecordId;

    /*package*/ String mContent;

    /*package*/ /*optional*/ String mMisc;

    public ClientReturnedRecord(
            long recordId,
            @Nonnull String content,
            @CheckForNull String misc) {
        this.mRecordId = recordId;
        this.mContent = content;
        this.mMisc = misc;
    }

    public ClientReturnedRecord(
            long recordId,
            @Nonnull String content) {
        this(recordId,
             content,
             null);
    }

    public long getRecordId() {
        return mRecordId;
    }

    public void setRecordId(long recordId) {
        this.mRecordId = recordId;
    }

    @Nonnull
    public String getContent() {
        return mContent;
    }

    public void setContent(@Nonnull String content) {
        this.mContent = content;
    }

    @CheckForNull
    public String getMisc() {
        return mMisc;
    }

    public void setMisc(String misc) {
        this.mMisc = misc;
    }

    @Override
    public String toString() {
        return "ClientReturnedRecord{" +
                "mRecordId=" + mRecordId +
                "," + "mContent=" + mContent +
                "," + "mMisc=" + mMisc +
        "}";
    }

}
