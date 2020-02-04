/*
** EPITECH PROJECT, 2018
** tests_strlen.c
** File description:
** UTs for strlen (ASM)
*/

#include <criterion/criterion.h>

Test(strlen, libasm_so)
{
	cr_assert_eq(strlen("Saucisse"), 8);
	cr_assert_eq(strlen("a"), 1);
	cr_assert_eq(strlen(""), 0);
	cr_assert_eq(strlen("Hey comment ca va"), 17);
	cr_assert_eq(strlen("3761"), 4);
}
