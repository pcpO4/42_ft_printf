/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:53:03 by pcervant          #+#    #+#             */
/*   Updated: 2024/11/06 17:43:45 by pcervant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printchar(int c);
int	ft_printf(const char *format, ...);
int	ft_print_hex(unsigned int nr, char *dict);
int	ft_printnbr(int c);
int	ft_printporc(void);
int	ft_printptr(uintptr_t ptr);
int	ft_printstr(char *str);
int	ft_printunsigned(unsigned int n);

#endif