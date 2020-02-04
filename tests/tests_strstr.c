/*
** EPITECH PROJECT, 2018
** tests_strstr.c
** File description:
** UTs for strstr (ASM)
*/

#include <criterion/criterion.h>

Test(strstr, libasm_so)
{
	char *str = "Saucisse";

	cr_assert_eq(strstr(str, "S"), str);
	cr_assert_eq(strstr(str, "cisse"), str + 3);
	cr_assert_eq(strstr(str, "cisseEEE"), NULL);
	cr_assert_eq(strstr(str, "Saucisse"), str);
	cr_assert_eq(strstr(str, "aucisse"), str + 1);
	cr_assert_eq(strstr(str, "Saucise"), NULL);
	cr_assert_eq(strstr(str, "X"), NULL);
	cr_assert_eq(strstr(str, "au"), str + 1);
	cr_assert_eq(strstr(str, "ss"), str + 5);
	cr_assert_eq(strstr(str, "s"), str + 5);

	char *str2 = "\0";

	cr_assert_eq(strstr(str2, "X"), NULL);
}
