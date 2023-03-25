/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clone_pixel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:45:03 by albaud            #+#    #+#             */
/*   Updated: 2023/03/24 13:00:37 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx.h"

void	ft_clone_pixel(t_canvas *cvs, int x, int y, char *pixel)
{
	cvs->cvs[(y * cvs->line_bytes) + (x * 4)] = pixel[0];
	cvs->cvs[(y * cvs->line_bytes) + (x * 4) + 1] = pixel[1];
	cvs->cvs[(y * cvs->line_bytes) + (x * 4) + 2] = pixel[2];
	cvs->cvs[(y * cvs->line_bytes) + (x * 4) + 3] = pixel[3];
}
