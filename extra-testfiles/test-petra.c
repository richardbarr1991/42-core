/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-petra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarr <rbarr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:04:15 by pbencze           #+#    #+#             */
/*   Updated: 2024/01/15 11:45:03 by rbarr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void test_printf()
{
	int	ret;
	//unsigned char c = 300;

	//testing write with unsigned char
	// write(1, &c, 1);
	// write(1, "\n", 1);

    // Character specifier (%c)
	ret = printf("Character specifier: %c\n", 300);
	printf("%i\n", ret);
	ret = printf("Character specifier: %c\n", 'A');
	printf("%i\n", ret);
	ret = ft_printf("Character specifier: %c\n", 300);
	ft_printf("%i\n", ret);
	ret = ft_printf("Character specifier: %c\n", 'A');
	ft_printf("%i\n", ret);

    // String specifier (%s)
	ret = printf("String specifier: %s\n", "Hello, World!");
	printf("%i\n", ret);
	ret = ft_printf("String specifier: %s\n", "Hello, World!");
	ft_printf("%i\n", ret);
	ret = printf("String specifier: %s\n", "");
	printf("%i\n", ret);
	ret = ft_printf("String specifier: %s\n", "");
	ft_printf("%i\n", ret);

    // Pointer specifier (%p)
    int x = 42;
	int *ptr = &x;
	ret = printf("Pointer specifier: %p\n", (void*)ptr);
	printf("%i\n", ret);
	ret = ft_printf("Pointer specifier: %p\n", (void*)ptr);
	ft_printf("%i\n", ret);


    // Decimal specifier (%d)
	ret = printf("Decimal specifier: %d\n", 12345);
	printf("%i\n", ret);
	ret = ft_printf("Decimal specifier: %d\n", 12345);
	ft_printf("%i\n", ret);

    // Integer specifier (%i)
	ret = printf("Integer specifier: %i\n", -6789);
	printf("%i\n", ret);
	ret = ft_printf("Integer specifier: %i\n", -6789);
	ft_printf("%i\n", ret);

    // Unsigned integer specifier (%u)
	ret = printf("Unsigned int specifier, minus: %u\n", -12345);
	printf("%i\n", ret);
	ret = ft_printf("Unsigned int specifier, minus: %u\n", -12345);
	ft_printf("%i\n", ret);
	ret = printf("Unsigned integer specifier, max: %u\n", 4294967295U);
	printf("%i\n", ret);
	ret = ft_printf("Unsigned integer specifier, max: %u\n", 4294967295U);
	ft_printf("%i\n", ret);
	ret = printf("Unsigned integer specifier: %u\n", 0);
	printf("%i\n", ret);
	ret = ft_printf("Unsigned integer specifier: %u\n", 0);
	ft_printf("%i\n", ret);

    // Hexadecimal specifier (%x and %X)
	ret = printf("Hexadecimal specifier (lowercase): %x\n", 255);
	printf("%i\n", ret);

	ret = ft_printf("Hexadecimal specifier (lowercase): %x\n", 255);
	ft_printf("%i\n", ret);

	ret = printf("Hexadecimal specifier (lowercase): %x\n", 0);
	printf("%i\n", ret);

	ret = ft_printf("Hexadecimal specifier (lowercase): %x\n", 0);
	ft_printf("%i\n", ret);

	ret = printf("Hexadecimal specifier (lowercase): %x\n", 258);
	printf("%i\n", ret);

	ret = ft_printf("Hexadecimal specifier (lowercase): %x\n", 258);
	ft_printf("%i\n", ret);

	ret = printf("Hexadecimal specifier (uppercase), UINT_MAX: %X\n",  UINT_MAX);
	printf("%i\n", ret);

	ret = ft_printf("Hexadecimal specifier (uppercase), UINT_MAX: %X\n",  UINT_MAX);
	ft_printf("%i\n", ret);

	ret = printf("Hexadecimal specifier (lowercase), char: %x\n", 'A');
	printf("%i\n", ret);

	ret = ft_printf("Hexadecimal specifier (lowercase), char: %x\n", 'A');
	ft_printf("%i\n", ret);

	ret = printf("Hexadecimal specifier (uppercase), negative: %X\n", -23);
	printf("%i\n", ret);

	ret = ft_printf("Hexadecimal specifier (uppercase), negative: %X\n", -23);
	ft_printf("%i\n", ret);

    // Percentage specifier (%%)
	ret = printf("Percentage specifier: %%c\n");
	printf("%i\n", ret);

	ret = ft_printf("Percentage specifier: %%c\n");
	ft_printf("%i\n", ret);

    // Edge cases for integers
	ret = printf("Edge cases for integers: %d %d\n", INT_MAX, INT_MIN);
	printf("%i\n", ret);

	ret = ft_printf("Edge cases for integers: %d %d\n", INT_MAX, INT_MIN);
	ft_printf("%i\n", ret);

    // Edge case for unsigned integers
	ret = printf("Edge case for unsigned integer: %u\n", 0xFFFFFFFFU);
	printf("%i\n\n", ret);

	ret = ft_printf("Edge case for unsigned integer: %u\n", 0xFFFFFFFFU);
	ft_printf("%i\n\n", ret);


	// % specifier and NULL
	printf("\nReturn value: %i\n", printf(NULL));
	ft_printf("\nReturn value: %i\n\n", printf(NULL));

	//several arguments:
	printf("\nReturn value: %i\n\n", printf("ab %c %s %i %x", 'c', "string", 0, 16));
	ft_printf("\nReturn value: %i\n", ft_printf("ab %c %s %i %x", 'c', "string", 0, 16));

	//Warnings:

	// ret = ft_printf("Decimal specifier: %d\n", 2294967295);
	// ft_printf("%i\n", ret);

	// printf("\nReturn value: %i\n", printf("ak%"));
	// printf("\nReturn value: %i\n", printf("%k"));

	// U specifier (%u)
	// ret = printf("Unsigned int specifier: %u\n", 2294967295);
	// printf("%i\n", ret);
}

int main() {
    test_printf();
    return 0;
}
