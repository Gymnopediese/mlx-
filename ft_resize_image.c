/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_image.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:15:51 by albaud            #+#    #+#             */
/*   Updated: 2023/09/28 17:14:31 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx.h"

t_canvas	ft_resize_image(void *mlx, t_canvas cvs, int x, int y)
{
	t_canvas	res;
	double		ind;
	int			i;

	(void) x;
	(void) y;
	res = ft_init_canvas(mlx,
		(int)(cvs.x * cos((double) x / 180 * M_PI)), cvs.y);
	ind = 0;
	i = 0;
	while (i < res.x)
	{
		ft_copy_shrinked_col(res, cvs, (t_v2){(int) ind, i},
			(t_v2){cvs.y, cvs.y + i - (int) ind});
		ind += (double)cvs.x / (double)res.x;
		i++;
	}
	return (res);
}
