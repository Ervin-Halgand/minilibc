/*
** EPITECH PROJECT, 2018
** tests_strpbrk.c
** File description:
** UTs for strpbrk (ASM)
*/

#include <criterion/criterion.h>

Test(strpbrk, libasm_so)
{
	char *str = "Saucisse";

	cr_assert_eq(strpbrk(str, "S"), str);
	cr_assert_eq(strpbrk(str, "c"), str + 3);
	cr_assert_eq(strpbrk(str, "E"), NULL);
	cr_assert_eq(strpbrk(str, "ec"), str + 3);
	cr_assert_eq(strpbrk(str, "aucisse"), str + 1);
	cr_assert_eq(strpbrk(str, "AAAAi"), str + 4);
	cr_assert_eq(strpbrk(str, "DXa8"), str + 1);
	cr_assert_eq(strpbrk(str, "ue"), str + 2);
	cr_assert_eq(strpbrk(str, "ss"), str + 5);
	cr_assert_eq(strpbrk(str, "s"), str + 5);

	char *str2 = "\0";

	cr_assert_eq(strpbrk(str2, "X"), NULL);
}
