/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putimg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:44:04 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:04:45 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibx.h"

void	ft_putimg(t_window w, void *img, t_v2 pos)
{
	mlx_put_image_to_window(w.mlx, w.win, img, pos.x, pos.y);
}
