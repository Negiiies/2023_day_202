#include <criterion/criterion.h>
#include "stu.h"
Test(memset, normal) {
    unsigned int n;
    int *array;
    unsigned int i;

    i = 0;
    n = sizeof(int) *12;
    array = malloc(n);
    stu_memset(array, 0, n);
    while(i <= 12) {
        cr_assert_eq(array[i], 0);
        i += 1;
    }
    free (array);
}
