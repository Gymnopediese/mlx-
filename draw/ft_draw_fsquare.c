/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_fsquare.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 00:03:25 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 12:57:54 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

void	ft_draw_fsquare(t_canvas *cvs, t_v3 pos, int size, int color)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			ft_put_pixel(cvs, pos.x + x, pos.y + y, color);
			y++;
		}
		x++;
	}
}
