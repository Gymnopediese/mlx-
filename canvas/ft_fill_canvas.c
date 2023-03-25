/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_canvas.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:08:57 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 13:00:30 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

void	ft_fill_canvas(t_canvas cvs, int color)
{
	int	i;
	int	j;

	i = -1;
	while (++i < cvs.x)
	{
		j = -1;
		while (++j < cvs.y)
			ft_put_pixel(&cvs, i, j, color);
	}
}
