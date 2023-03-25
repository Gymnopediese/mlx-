/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_innit_canvas.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 00:54:43 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 12:42:07 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

t_canvas	ft_init_canvas(void *mlx, int x, int y)
{
	t_canvas	cvs;

	cvs.x = x;
	cvs.y = y;
	cvs.img = mlx_new_image(mlx, x, y);
	cvs.cvs = mlx_get_data_addr(cvs.img,
			&cvs.pixel_bits, &cvs.line_bytes, &cvs.endian);
	return (cvs);
}
