
#include <criterion/criterion.h>
#include "stu.h"
Test(memcpy, normal) {
    unsigned int n;
    int *array;

    n = sizeof(int) *12;
    array = malloc(n);
    cr_assert_str_eq(stu_memcpy(array, "salut ça va",n), "salut ça va");
}
