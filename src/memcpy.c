/*
 * E89 Pedagogical & Technical Lab
 * project:     mempcy
 * created on:  2023-02-01 - 11:19 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 202
 */
#include "stu.h"

void *stu_memcpy(void *dest,
                 const void *src,
                 unsigned int n)
{
    unsigned int i;
    char *str;
    char *des;

    i = 0;
    des = (char *)dest;
    str = (char *)src;
    while (i < n) {
        des[i] = str[i];
        i += 1;
    }
    return (dest);
}

