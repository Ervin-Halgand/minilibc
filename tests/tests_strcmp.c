/*
** EPITECH PROJECT, 2018
** tests_strcmp.c
** File description:
** UTs for strcmp (ASM)
*/

#include <criterion/criterion.h>

Test(strcmp, basic)
{
	cr_assert(strcmp("saucisse", "") > 0);
	cr_assert(strcmp("A", "B") < 0);
	cr_assert(strcmp("", "") == 0);
	cr_assert(strcmp("saucisse", "SAUCISSE") > 0);
	cr_assert(strcmp("SAUCISSE", "saucisse") < 0);
	cr_assert(strcmp("saucisse", "saucisse") == 0);
}