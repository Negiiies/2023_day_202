/*
 * E89 Pedagogical & Technical Lab
 * project:     arrset
 * created on:  2023-02-01 - 16:17 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 202
 */

#include "stu.h"


void *arrset(void *array,
             void *elem,
             unsigned int elem_size,
             unsigned int n)
{
    char *arr;
    unsigned int i;

    i = 0;
    arr = (char *)array;
    while (i < n) {
        stu_memcpy(arr, elem, elem_size);
        arr += elem_size;
        i += 1;
    }
    return (array);
}
