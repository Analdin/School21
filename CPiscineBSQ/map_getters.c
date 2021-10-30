/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_getters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspengle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:12:37 by hspengle          #+#    #+#             */
/*   Updated: 2020/10/06 10:12:40 by hspengle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_get_number_of_lines(const char *str)
{
	int n;
	int digits;
	int i;

	digits = 0;
	while (str[digits] != '\n')
    {
		digits++;
    }
	digits -= 3;
	i = 1;
	n = 0;
	while ('0' <= *str && *str <= '9' && i <= digits)
	{
		n = n * 10 + *str - '0';
		str++;
		i++;
	}
	return (n);
}

char	ft_get_empty_char(char *str)
{
	while (*str != '\n')
    {
		str++;
    }
	str--;
	str--;
	str--;
	return (*str);
}

char	ft_get_obstacle_char(char *str)
{
	while (*str != '\n')
    {
		str++;
    }
	str--;
	str--;
	return (*str);
}

char	ft_get_full_char(char *str)
{
	while (*str != '\n')
    {
		str++;
    }
	str--;
	return (*str);
}

int		ft_get_lines_width(char *str)
{
	int width;

	while (*str != '\n')
    {
		str++;
    }
	str++;
	width = 0;
	while (*str != '\n')
	{
		width++;
		str++;
	}
	return (width);
}
