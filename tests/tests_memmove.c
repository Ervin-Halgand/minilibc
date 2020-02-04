/*
** EPITECH PROJECT, 2018
** tests_memmove.c
** File description:
** UTs for memmove (ASM)
*/

#include <criterion/criterion.h>

Test(memmove, libasm_so)
{
	int len = 10;
	char *str = strdup("AAAAAAAAAA");
	char *str2 = malloc(len);

	if (!str || !str2)
		return;

	cr_assert_eq(memmove(str2, str, len), str2);
	for (int i = 0; i < len; i++)
		cr_assert_eq(str2[i], 'A');
	cr_assert_str_eq(str2, "AAAAAAAAAA");

	memmove(str2, "BBBCCCDDDE", len);
	cr_assert_str_eq(str2, "BBBCCCDDDE");
	memmove(str2, str2 + 5, 4);
	cr_assert_str_eq(str2, "CDDDCCDDDE");
	memmove(str2, str2 + 2, 4);
	cr_assert_str_eq(str2, "DDCCCCDDDE");
	memmove(str2, str2, 7);
	cr_assert_str_eq(str2, "DDCCCCDDDE");
	memmove(str2, str2 + 1, 6);
	cr_assert_str_eq(str2, "DCCCCDDDDE");

	memmove(str2, str2 + 1, 0);
	cr_assert_str_eq(str2, "DCCCCDDDDE");
	memmove(str2, str2 + 4, 1);
	cr_assert_str_eq(str2, "CCCCCDDDDE");
}
