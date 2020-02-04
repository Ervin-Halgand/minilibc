/*
** EPITECH PROJECT, 2018
** tests_strcasecmp.c
** File description:
** UTs for strcasecmp (ASM)
*/

#include <criterion/criterion.h>
#include <stdio.h>

Test(strcasecmp, basic)
{
	cr_assert(strcasecmp("saucisse", "") > 0);
	cr_assert(strcasecmp("", "") == 0);
	cr_assert(strcasecmp("saucisse", "SAUCISSE") == 0);
	cr_assert(strcasecmp("SAUCISSE", "saucisse") == 0);
	cr_assert(strcasecmp("saucisse", "sauCIsse") == 0);
	cr_assert(strcasecmp("saucisse", "sauc15se") > 0);
	cr_assert(strcasecmp("saucIsse", "saucisse") == 0);
	cr_assert(strcasecmp("123", "1234") < 0);
}
