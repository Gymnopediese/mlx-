/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_canvas.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:41:46 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 12:57:46 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

void	ft_draw_canvas(t_canvas *dest, t_canvas *src, int x, int y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < src->y)
	{
		j = -1;
		while (++j < src->x)
		{
			ft_clone_pixel(dest, x + j, y + i, ft_get_pixel(src, j, i));
		}
	}
}
