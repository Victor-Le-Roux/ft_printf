/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-roux <vle-roux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:42:57 by victor            #+#    #+#             */
/*   Updated: 2023/11/24 18:31:00 by vle-roux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

int		ft_printf(const char *__format, ...);
int		ft_print_string(char const *str);
int		ft_print_pointer(void *ptr_addr);
int		ft_print_int(int n);
int		ft_print_unsigned(unsigned int nbr);
int		ft_print_hexa(unsigned int nbr, bool upper_case);

#endif
