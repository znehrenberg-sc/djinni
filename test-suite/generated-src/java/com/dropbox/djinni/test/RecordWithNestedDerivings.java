// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from derivings.djinni

package com.dropbox.djinni.test;

import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public class RecordWithNestedDerivings implements Comparable<RecordWithNestedDerivings> {


    /*package*/ int mKey;

    /*package*/ RecordWithDerivings mRec;

    public RecordWithNestedDerivings(
            int key,
            @Nonnull RecordWithDerivings rec) {
        this.mKey = key;
        this.mRec = rec;
    }

    public int getKey() {
        return mKey;
    }

    public void setKey(int key) {
        this.mKey = key;
    }

    @Nonnull
    public RecordWithDerivings getRec() {
        return mRec;
    }

    public void setRec(@Nonnull RecordWithDerivings rec) {
        this.mRec = rec;
    }

    @Override
    public boolean equals(@CheckForNull Object obj) {
        if (!(obj instanceof RecordWithNestedDerivings)) {
            return false;
        }
        RecordWithNestedDerivings other = (RecordWithNestedDerivings) obj;
        return this.mKey == other.mKey &&
                this.mRec.equals(other.mRec);
    }

    @Override
    public int hashCode() {
        // Pick an arbitrary non-zero starting value
        int hashCode = 17;
        hashCode = hashCode * 31 + mKey;
        hashCode = hashCode * 31 + mRec.hashCode();
        return hashCode;
    }

    @Override
    public String toString() {
        return "RecordWithNestedDerivings{" +
                "mKey=" + mKey +
                "," + "mRec=" + mRec +
        "}";
    }


    @Override
    public int compareTo(@Nonnull RecordWithNestedDerivings other)  {
        int tempResult;
        if (this.mKey < other.mKey) {
            tempResult = -1;
        } else if (this.mKey > other.mKey) {
            tempResult = 1;
        } else {
            tempResult = 0;
        }
        if (tempResult != 0) {
            return tempResult;
        }
        tempResult = this.mRec.compareTo(other.mRec);
        if (tempResult != 0) {
            return tempResult;
        }
        return 0;
    }
}
