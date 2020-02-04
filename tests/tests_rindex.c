/*
** EPITECH PROJECT, 2018
** tests_rindex.c
** File description:
** UTs for rindex (ASM)
*/

#include <criterion/criterion.h>

Test(rindex, basic)
{
	char *str = "saucisse";

	cr_assert_eq(rindex(str, ' '), NULL);
	cr_assert_eq(rindex(str, 'a'), str + 1);
	cr_assert_eq(rindex(str, 387), NULL);
	cr_assert_eq(rindex(str, 's'), str + 6);
	cr_assert_eq(rindex(str, 'e'), str + 7);
	cr_assert_eq(rindex(str, 'X'), NULL);
	cr_assert_eq(rindex(str, 0), str + 8);
}