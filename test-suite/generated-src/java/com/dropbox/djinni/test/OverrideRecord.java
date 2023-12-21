// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from optionals.djinni

package com.dropbox.djinni.test;

import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/** Overridden optional record */
public class OverrideRecord {


    /*package*/ final Integer mOptInt;

    /*package*/ final Float mOptFloat;

    /*package*/ final int mReqInt;

    /*package*/ final Double mOptDouble;

    public OverrideRecord(
            @CheckForNull Integer optInt,
            @CheckForNull Float optFloat,
            int reqInt,
            @CheckForNull Double optDouble) {
        this.mOptInt = optInt;
        this.mOptFloat = optFloat;
        this.mReqInt = reqInt;
        this.mOptDouble = optDouble;
    }

    @CheckForNull
    public Integer getOptInt() {
        return mOptInt;
    }

    @CheckForNull
    public Float getOptFloat() {
        return mOptFloat;
    }

    public int getReqInt() {
        return mReqInt;
    }

    @CheckForNull
    public Double getOptDouble() {
        return mOptDouble;
    }

    @Override
    public String toString() {
        return "OverrideRecord{" +
                "mOptInt=" + mOptInt +
                "," + "mOptFloat=" + mOptFloat +
                "," + "mReqInt=" + mReqInt +
                "," + "mOptDouble=" + mOptDouble +
        "}";
    }

}