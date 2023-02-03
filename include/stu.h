/*
 * E89 Pedagogical & Technical Lab
 * project:     stu
 * created on:  2023-01-30 - 09:32 +0100
 * 1st author:  dylan.le - dylan.le
 * description: include
 */

#ifndef STU_H_

#define STU_H_


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *stu_memset(void *ptr, char byte, unsigned int n);
void *stu_memcpy(void *dest, const void *src, unsigned int n);
void *arrset(void *array, void *elem, unsigned int elem_size, unsigned int n);
void *stu_memmove(void *dest, const void *src, unsigned int n);

#endif /*STU_H_*/
