/*
 * E89 Pedagogical & Technical Lab
 * project:     memmove
 * created on:  2023-02-02 - 11:03 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 202
 */

#include "stu.h"


void *stu_memmove(void *dest,
                  const void *src,
                  unsigned int n)
{
    unsigned int i;
    char *des;
    char *str;

    i = 0;
    str = (char *)src;
    des = (char *)dest;
    if (des < str) {
        while (i < n) {
            des[i] = str[i];
            i += 1;
        }
    }else {
        i = n;
        while (i > 0) {
            des[i - 1] = str[i - 1];
             i -= 1;
        }
    }
    return (dest);
}
