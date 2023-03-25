/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 02:07:29 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 13:00:20 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

void	ft_resize_ligne(t_canvas dest, t_canvas src, t_v3 inds,
	t_v3 std)
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
