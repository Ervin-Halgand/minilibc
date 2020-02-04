/*
** EPITECH PROJECT, 2018
** tests_strcspn.c
** File description:
** UTs for strcpsn (ASM)
*/

#include <criterion/criterion.h>

Test(strcpsn, libasm_so)
{
	cr_assert_eq(strcspn("Saucisse", "S"), 0);
	cr_assert_eq(strcspn("Saucisse", "c"), 3);
	cr_assert_eq(strcspn("Saucisse", "E"), 8);
	cr_assert_eq(strcspn("Saucisse", "ec"), 3);
	cr_assert_eq(strcspn("Saucisse", "aucisse"), 1);
	cr_assert_eq(strcspn("Saucisse", "AAAAi"), 4);
	cr_assert_eq(strcspn("Saucisse", "DXa8"), 1);
	cr_assert_eq(strcspn("Saucisse", "eAJAZAZ"), 7);
	cr_assert_eq(strcspn("Saucisse", "ss"), 5);
	cr_assert_eq(strcspn("Saucisse", "s"), 5);
	cr_assert_eq(strcspn("Saucisse", "X"), 8);
}
