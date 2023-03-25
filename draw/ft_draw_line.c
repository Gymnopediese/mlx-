/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:31:27 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 12:58:57 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

// void	ft_draw_line(t_canvas *cvs, t_v3 a, t_v3 b, int color)
// {
// 	t_v3	toadd;
// 	int		loop;

// 	if (ft_v3_eql(a, b))
// 		return ;
// 	toadd.y = -ft_bound(fabs(a.y - b.y) / fabs(a.x - b.x), 0, 1);
// 	toadd.x = -ft_bound(fabs(a.x - b.x) / fabs(a.y - b.y), 0, 1);
// 	loop = (int)ft_distance(a, b);
// 	if (toadd.y < toadd.x)
// 		loop = (int)fabs(a.y - b.y) + 2;
// 	else
// 		loop = (int)fabs(a.x - b.x) + 2;
// 	if (a.x - b.x < 0)
// 		toadd.x *= -1;
// 	if (a.y - b.y < 0)
// 		toadd.y *= -1;
// 	while (--loop > 0)
// 	{
// 		if (a.x < cvs->x && a.y < cvs->y && a.x >= 0 && a.y >= 0)
// 			ft_put_pixel(cvs, round(a.x), round(a.y), color);
// 		a = ft_add_to_vector(a, toadd.x, toadd.y, 0);
// 	}
// }
