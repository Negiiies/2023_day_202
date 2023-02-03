#include <criterion/criterion.h>
#include "stu.h"
Test(arrset, normal) {
    unsigned int elem_size;
    int *array;
    int default_value = 1970;
    int i;

    i = 0;
    elem_size = sizeof(int);
    array = malloc(elem_size * 89);
    arrset(array, &default_value, elem_size, 89);
    while (i < 89) {
        cr_assert_eq(array[i], 1970);
        i += 1;
    }
}
