/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victor <victor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 03:56:07 by vle-roux          #+#    #+#             */
/*   Updated: 2023/11/04 22:43:25 by victor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int ft_print_char(char c);
void ft_print_hex_lowercase(unsigned int number);
void	ft_print_hex_uppercase(unsigned int number);
void	ft_print_integer(int n);
void	ft_print_percent(void);

#endif