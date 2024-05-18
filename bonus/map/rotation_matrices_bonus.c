/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation_matrices_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:00:38 by ochouati          #+#    #+#             */
/*   Updated: 2024/05/16 15:07:43 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf_bonus.h"

static float	_deg2rad(int degree)
{
	return (fmod((degree * (M_PI / 180)), (M_PI)));
}

void	rotation_x(float *x, float *y, float *z, int deg)
{
	float	tmp;
	float	degree;

	(void)x;
	degree = _deg2rad(deg);
	tmp = *y;
	*y = (cos(degree) * (*y)) - (sin(degree) * (*z));
	*z = (sin(degree) * tmp) + (cos(degree) * (*z));
}

void	rotation_z(float *x, float *y, float *z, int deg)
{
	float	tmp;
	float	degree;

	(void)z;
	degree = _deg2rad(deg);
	tmp = *x;
	*x = (cos(degree) * *x) - (sin(degree) * *y);
	*y = sin(degree) * tmp + cos(degree) * *y;
}

void	rotation_y(float *x, float *y, float *z, int deg)
{
	float	tmp;
	float	degree;

	(void)y;
	degree = _deg2rad(deg);
	tmp = *x;
	*x = *x * cos(degree) + sin(degree) * (*z);
	*z = (-sin(degree) * tmp) + (cos(degree) * (*z));
}
