/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:56:07 by vle-roux          #+#    #+#             */
/*   Updated: 2023/11/09 00:19:31 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int			ft_print_char(va_list args);
int			ft_print_hex_lowercase(va_list args);
int			ft_print_hex_uppercase(va_list args);
int			ft_print_integer(va_list args);
int			ft_print_percent(va_list args);
int			ft_print_pointer(va_list args);
void		ft_putchar(char c);
int			ft_print_string(va_list args);
int			ft_putnbr_unsigned(va_list args);

#endif