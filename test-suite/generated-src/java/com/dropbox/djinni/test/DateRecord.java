// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from date.djinni

package com.dropbox.djinni.test;

import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public class DateRecord implements Comparable<DateRecord>, android.os.Parcelable {


    /*package*/ java.util.Date mCreatedAt;

    public DateRecord(
            @Nonnull java.util.Date createdAt) {
        this.mCreatedAt = createdAt;
    }

    @Nonnull
    public java.util.Date getCreatedAt() {
        return mCreatedAt;
    }

    public void setCreatedAt(@Nonnull java.util.Date createdAt) {
        this.mCreatedAt = createdAt;
    }

    @Override
    public boolean equals(@CheckForNull Object obj) {
        if (!(obj instanceof DateRecord)) {
            return false;
        }
        DateRecord other = (DateRecord) obj;
        return this.mCreatedAt.equals(other.mCreatedAt);
    }

    @Override
    public int hashCode() {
        // Pick an arbitrary non-zero starting value
        int hashCode = 17;
        hashCode = hashCode * 31 + (mCreatedAt.hashCode());
        return hashCode;
    }

    @Override
    public String toString() {
        return "DateRecord{" +
                "mCreatedAt=" + mCreatedAt +
        "}";
    }


    public static final android.os.Parcelable.Creator<DateRecord> CREATOR
        = new android.os.Parcelable.Creator<DateRecord>() {
        @Override
        public DateRecord createFromParcel(android.os.Parcel in) {
            return new DateRecord(in);
        }

        @Override
        public DateRecord[] newArray(int size) {
            return new DateRecord[size];
        }
    };

    public DateRecord(android.os.Parcel in) {
        this.mCreatedAt = new java.util.Date(in.readLong());
    }

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(android.os.Parcel out, int flags) {
        out.writeLong(mCreatedAt.getTime());
    }


    @Override
    public int compareTo(@Nonnull DateRecord other)  {
        int tempResult;
        tempResult = this.mCreatedAt.compareTo(other.mCreatedAt);
        if (tempResult != 0) {
            return tempResult;
        }
        return 0;
    }
}
