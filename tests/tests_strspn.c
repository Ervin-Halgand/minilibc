/*
** EPITECH PROJECT, 2018
** tests_strcspn.c
** File description:
** UTs for strcpsn (ASM)
*/

#include <criterion/criterion.h>

Test(strspn, libasm_so)
{
	cr_assert_eq(strspn("Saucisse", "S"), 1);
	cr_assert_eq(strspn("Saucisse", "c"), 0);
	cr_assert_eq(strspn("Saucisse", "E"), 0);
	cr_assert_eq(strspn("Saucisse", "Suac"), 4);
	cr_assert_eq(strspn("Saucisse", "aucisse"), 0);
	cr_assert_eq(strspn("Saucisse", "AAAAi"), 0);
}
