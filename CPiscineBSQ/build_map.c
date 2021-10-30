/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspengle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:09:50 by hspengle          #+#    #+#             */
/*   Updated: 2020/10/07 09:55:40 by hspengle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Указатель в начало строки
*/

char	*mv_next_line(char *str)
{
	while (*str != '\n')
    {
		str++;
    }
	str++;
	return (str);
}

/*
** Дублируем строку
*/

void	line_dup(char *copy, char *line)
{
	int i;

	i = 0;
	while (line[i] != '\n')
	{
		copy[i] = line[i];
		i++;
	}
	copy[i] = '\0';
}

/* Строим карту */

char	**build_map(char *str)
{
	char	**map; /* Указатель на карту*/
	char	*line; /* количество строк*/
	int		numlines; /* номера строк */
    int		i; /* счетчик*/
    int		line_width; /* длина строки*/
 
	numlines = ft_get_number_of_lines(str);
	line_width = ft_get_lines_width(str);
	map = malloc(sizeof(*map) * (numlines + 1));
	str = mv_next_line(str);
	i = 0;
	while (i < numlines)
	{
		line = malloc(sizeof(*line) * (line_width + 1));
		line_dup(line, str);
		str += line_width + 1;
		map[i] = line;
		i++;
	}
	map[i] = 0;
	return (map);
}
