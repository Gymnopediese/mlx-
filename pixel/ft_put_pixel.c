/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pixel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 23:37:47 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 13:01:01 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

void	ft_put_pixel(t_canvas *cvs, int x, int y, int color)
{
	int	pixel;

	pixel = (y * cvs->line_bytes) + (x * 4);
	if (cvs->endian == 1)
	{
		cvs->cvs[(int)((y * cvs->line_bytes) + (x * 4))] = (color >> 24);
		cvs->cvs[(int)((y * cvs->line_bytes) + (x * 4)) + 1]
			= (color >> 16) & 0xFF;
		cvs->cvs[(int)((y * cvs->line_bytes) + (x * 4)) + 2]
			= (color >> 8) & 0xFF;
		cvs->cvs[(int)((y * cvs->line_bytes) + (x * 4)) + 3]
			= (color) & 0xFF;
	}
	else if (cvs->endian == 0)
	{
		cvs->cvs[(int)((y * cvs->line_bytes) + (x * 4))] = (color) & 0xFF;
		cvs->cvs[(int)((y * cvs->line_bytes) + (x * 4)) + 1]
			= (color >> 8) & 0xFF;
		cvs->cvs[(int)((y * cvs->line_bytes) + (x * 4)) + 2]
			= (color >> 16) & 0xFF;
		cvs->cvs[(int)((y * cvs->line_bytes) + (x * 4)) + 3]
			= (color >> 24);
	}
}
