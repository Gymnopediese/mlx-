/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_cvs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 01:50:52 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:05:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx.h"

t_canvas	ft_resize_cvs(void *mlx, t_canvas cvs, double mult)
{
	t_canvas	res;
	double		i;
	double		j;

	res = ft_init_canvas(mlx, cvs.x * mult, cvs.y * mult);
	i = -1;
	j = 0;
	while (++i < cvs.x * mult)
	{
		ft_resize_ligne (res, cvs, (t_v2){round(j), i},
			(t_v2){cvs.y, cvs.y * mult});
		j += (double) 1 / (double) mult;
	}
	return (res);
}
