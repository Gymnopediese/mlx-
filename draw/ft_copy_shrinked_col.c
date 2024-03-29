/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_shrinked_col.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 01:51:09 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:06:20 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

void	ft_copy_shrinked_col(t_canvas dest, t_canvas src, t_v2 inds, t_v2 std)
{
	int		i;
	double	j;

	i = (std.x - std.y) / 2;
	j = 0;
	while (++i - (std.x - std.y) / 2 < std.y)
	{
		ft_clone_pixel(&dest, inds.y, i, ft_get_pixel(&src, inds.x, (int) j));
		j += (double) std.x / std.y;
	}
}
