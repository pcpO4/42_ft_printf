/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 10:41:19 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/06 14:02:23 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

int	main(void)
{
	char			*str;
	char			c;
	int 	x;
	void	 *ptr;

	c = 'a';
	str = "Unicorns dose not exists";
	x = 123;
	ptr = &x;
	ft_printf("El caracter es %c\n", c);
	printf("El caracter es %c\n", c);
	ft_printf("String: %s\n", str);
	printf("String: %s\n", str);
	ft_printf("Puntero: %p\n", ptr);
	printf("Puntero: %p\n", ptr);
	ft_printf("Int max: %d, Int min: %i\n", 0, -521);
	printf("Int max: %d, Int min: %i\n", 0, -521);
	ft_printf("Unsigned int: %u\n", 429496729);
	printf("Unsigned int: %u\n", 429496729);
	ft_printf("Hexadecimal en minuscula: %x\n", 255);
	printf("Hexadecimal en minuscula:: %x\n", 255);
	ft_printf("Hexadecimal en mayuscula: %X\n", 255);
	printf("Hexadecimal en mayuscula: %X\n", 255);
	ft_printf("Imprime porcentaje %%\n");
	printf("Imprime porcentaje %%\n");

	int total;
	int total2;

	total = ft_printf("%s\n", "hola que tal");
	total2 = printf("%s\n", "hola que tal");
	printf("%d\n", total);
	printf("%d\n", total2);

	printf("\nTercera prueba\n\n");

	int n = 0;
	int x1 = 0;

	n = ft_printf("%d hola que tal %p me llamo %s encantado de conocerte %X la verdad %x %% jaja %u %i\n", 12, ptr, "pablo", 166, 177, 2341, 333);
	x1 = printf("%d hola que tal %p me llamo %s encantado de conocerte %X la verdad %x %% jaja %u %i\n", 12, ptr, "pablo", 166, 177, 2341, 333);

	printf("Valor mio: %d, valor real: %d\n", n, x1);

	n = ft_printf("%d\n", 123);
	x1 = printf("%d\n", 123);

	printf("Valor mio: %d, valor real: %d\n", n, x1);

	n = ft_printf("%d\n", -2147483648);
	x1 = printf("%d\n", -2147483648);

	printf("Valor mio: %d, valor real: %d\n", n, x1);

	n = ft_printf("%x\n", 256);
	x1 = printf("%x\n", 256);

	printf("Valor mio: %d, valor real: %d\n", n, x1);
}