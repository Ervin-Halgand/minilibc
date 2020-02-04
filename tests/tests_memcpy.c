/*
** EPITECH PROJECT, 2018
** tests_memcpy.c
** File description:
** UTs for memcpy (ASM)
*/

#include <criterion/criterion.h>

Test(memcpy, libasm_so)
{
	int len = 10;
	char *str = malloc(len);
	char *str2 = malloc(len);

	if (!str || !str2)
		return;
	for (int i = 0; i < len; i++)
		str[i] = 'A';

	cr_assert_eq(memcpy(str2, str, len), str2);
	for (int i = 0; i < len; i++)
		cr_assert_eq(str2[i], 'A');
}
