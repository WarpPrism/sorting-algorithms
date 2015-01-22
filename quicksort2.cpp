// Problem#: 12598
// Submission#: 3580558
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#ifndef _HW_08_1005_H
#define _HW_08_1005_H

template <typename Record>
void quick_sort(Record* startPointer, Record *endPointer) {
    if (startPointer != endPointer) {
        Record * low = startPointer, *high = endPointer, temp = *startPointer;
        high--;
        while (low != high) {
            while (low < high && *high > temp) high--;
            if (low != high) *low++ = *high;
            while (low < high && *low < temp) low++;
            if (low != high) *high-- = *low;
        }
        *low = temp;
        quick_sort(startPointer, low--);
        low++;
        quick_sort(++low, endPointer);
    }
}

#endif                                 
