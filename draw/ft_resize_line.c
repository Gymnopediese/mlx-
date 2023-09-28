/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 02:07:29 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:06:41 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

void	ft_resize_ligne(t_canvas dest, t_canvas src, t_v2 inds, t_v2 std)
{
	int		i;
	double	j;

	i = -1;
	j = 0;
	while (++i < std.y)
	{
		ft_clone_pixel(&dest, inds.y, i, ft_get_pixel(&src, inds.x, (int) j));
		j += (double) std.x / std.y;
	}
}
