/*
** EPITECH PROJECT, 2018
** tests_strchr.c
** File description:
** UTs for strchr (ASM)
*/

#include <criterion/criterion.h>

Test(strchr, libasm_so)
{
	char *str = "Saucisse";

	cr_assert_eq(strchr(str, 'S'), str);
	cr_assert_eq(strchr(str, 'c'), str + 3);
	cr_assert_eq(strchr(str, 's'), str + 5);
	cr_assert_eq(strchr(str, 0), str + 8);
	cr_assert_eq(strchr(str, 'X'), NULL);
}
