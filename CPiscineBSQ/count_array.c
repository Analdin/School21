/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hspengle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 10:10:25 by hspengle          #+#    #+#             */
/*   Updated: 2020/10/06 10:10:29 by hspengle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Возвращаем значение полученного индекса
*/

int		val(int **pt_sums, int i, int j)
{
	if (i < 0 || j < 0)
    {
		return (0);
    }
	return (pt_sums[i][j]);
}

/*
*Конвертируем char в int только значения для тех мест карты, где есть препятствия
*/

int		**count_array(char **map, char obs, int cols)
{
	int i;
	int j;
	int	**pt_sums;
	int	rows;

	rows = 0;
	while (map[rows])
    {
		rows++;
    }
	pt_sums = malloc(sizeof(*pt_sums) * (rows + 1));
	i = 0;
	while (i < rows)
	{
		pt_sums[i] = malloc(sizeof(int) * cols);
		j = 0;
		while (map[i][j])
		{
			pt_sums[i][j] = val(pt_sums, i, j - 1) + val(pt_sums, i - 1, j)
				- val(pt_sums, i - 1, j - 1) + (map[i][j] == obs);
			j++;
		}
		i++;
	}
	pt_sums[i] = 0;
	return (pt_sums);
}
