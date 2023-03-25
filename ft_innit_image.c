/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_innit_image.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 01:24:13 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 12:55:26 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx.h"

t_canvas	ft_init_image(void *mlx, char *filename)
{
	t_canvas	cvs;

	cvs.img = mlx_xpm_file_to_image(mlx, filename, &cvs.x, &cvs.y);
	cvs.cvs = mlx_get_data_addr(cvs.img,
			&cvs.pixel_bits, &cvs.line_bytes, &cvs.endian);
	return (cvs);
}
