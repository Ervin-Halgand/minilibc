/*
** EPITECH PROJECT, 2018
** tests_memset.c
** File description:
** UTs for memset (ASM)
*/

#include <criterion/criterion.h>

Test(memset, libasm_so)
{
	int len = 10;
	char *str = malloc(len);

	if (!str)
		return;
	cr_assert_eq(memset(str, 'B', 0), str);
}
