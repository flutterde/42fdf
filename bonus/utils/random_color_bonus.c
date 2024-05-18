/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_color_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 22:22:18 by ochouati          #+#    #+#             */
/*   Updated: 2024/05/13 21:11:42 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf_bonus.h"
#include <time.h>

static uint32_t	__generate(void)
{
	static int	init;
	uint32_t	color;
	uint32_t	x;
	uint32_t	y;

	x = 0x000000FF;
	y = 0xFFFFFFFF;
	if (!init)
	{
		srand((uint32_t)(time(NULL) ^ ((size_t) & color)));
		init = 1;
	}
	color = x + rand() % (y - x + 1);
	return ((color << 8) | 0xFF);
}

void	random_color(t_data data)
{
	int	i;
	int	j;

	i = 0;
	while (data.points[i])
	{
		j = 0;
		while (j < data.dm.cols)
		{
			data.points[i][j].color = __generate();
			j++;
		}
		i++;
	}
	draw_points(data.points, &data);
	fdf_link_points(data.points, data.dm, data.img);
	fdf_sidebare(data);
}
