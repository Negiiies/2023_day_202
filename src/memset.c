/*
 * E89 Pedagogical & Technical Lab
 * project:     memset
 * created on:  2023-02-01 - 09:16 +0100
 * 1st author:  dylan.le - dylan.le
 * description: 202
 */

#include "stu.h" 

void *stu_memset(void *ptr, char byte, unsigned int n)
{
    unsigned int i;
    char *dest;

    i = 0;
    dest = (char *)ptr;
    while (i < n) {
        dest[i] = byte;
        i += 1;
    }
    return (dest);
}
