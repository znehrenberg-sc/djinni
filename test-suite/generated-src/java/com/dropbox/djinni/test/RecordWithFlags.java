// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from enum_flags.djinni

package com.dropbox.djinni.test;

import java.util.EnumSet;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public class RecordWithFlags {


    /*package*/ EnumSet<AccessFlags> mAccess;

    public RecordWithFlags(
            @Nonnull EnumSet<AccessFlags> access) {
        this.mAccess = access;
    }

    @Nonnull
    public EnumSet<AccessFlags> getAccess() {
        return mAccess;
    }

    public void setAccess(@Nonnull EnumSet<AccessFlags> access) {
        this.mAccess = access;
    }

    @Override
    public String toString() {
        return "RecordWithFlags{" +
                "mAccess=" + mAccess +
        "}";
    }

}
