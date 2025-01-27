// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from nested_collection.djinni

package com.dropbox.djinni.test;

import java.util.ArrayList;
import java.util.HashSet;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public class NestedCollection implements android.os.Parcelable {


    /*package*/ ArrayList<HashSet<String>> mSetList;

    public NestedCollection(
            @Nonnull ArrayList<HashSet<String>> setList) {
        this.mSetList = setList;
    }

    @Nonnull
    public ArrayList<HashSet<String>> getSetList() {
        return mSetList;
    }

    public void setSetList(@Nonnull ArrayList<HashSet<String>> setList) {
        this.mSetList = setList;
    }

    @Override
    public String toString() {
        return "NestedCollection{" +
                "mSetList=" + mSetList +
        "}";
    }


    public static final android.os.Parcelable.Creator<NestedCollection> CREATOR
        = new android.os.Parcelable.Creator<NestedCollection>() {
        @Override
        public NestedCollection createFromParcel(android.os.Parcel in) {
            return new NestedCollection(in);
        }

        @Override
        public NestedCollection[] newArray(int size) {
            return new NestedCollection[size];
        }
    };

    public NestedCollection(android.os.Parcel in) {
        this.mSetList = new ArrayList<HashSet<String>>();
        in.readList(this.mSetList, getClass().getClassLoader());
    }

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(android.os.Parcel out, int flags) {
        out.writeList(this.mSetList);
    }

}
