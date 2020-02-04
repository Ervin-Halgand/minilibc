/*
** EPITECH PROJECT, 2018
** tests_strncmp.c
** File description:
** UTs for strcmp (ASM)
*/

#include <criterion/criterion.h>

Test(strncmp, basic)
{
	cr_assert(strncmp("saucisse", "", 10000) > 0);
	cr_assert(strncmp("A", "B", 1) < 0);
	cr_assert(strncmp("", "", 1) == 0);
	cr_assert(strncmp("saucisse", "SAUCISSE", 2) > 0);
	cr_assert(strncmp("SAUCISSE", "saucisse", 1) < 0);
	cr_assert(strncmp("saucisse", "saucisse", 3) == 0);
	cr_assert(strncmp("saucisse", "saucisse", 8) == 0);
	cr_assert(strncmp("sauCisse", "saucisse", 4) < 0);
	cr_assert(strncmp("saucIsse", "saucisse", 4) == 0);
	cr_assert(strncmp("bbzjzej,d", "ASAdoezfdzd", 0) == 0);
}