/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putimg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:44:04 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 12:55:43 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx.h"

void	ft_putimg(t_window w, void *img, t_v3 pos)
{
	mlx_put_image_to_window(w.mlx, w.win, img, pos.x, pos.y);
}
