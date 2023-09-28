/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:28:43 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:04:35 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# ifndef T_V2_H
#  define T_V2_H

typedef struct s_v2
{
	double	x;
	double	y;
}	t_v2;
# endif

# ifndef T_V3_H
#  define T_V3_H

typedef struct s_v3
{
	double	x;
	double	y;
	double	z;
}	t_v3;
# endif

typedef struct s_line
{
	t_v3	a;
	t_v3	b;
}	t_line;


typedef struct s_canvas
{
	void		*img;
	char		*cvs;
	int			x;
	int			y;
	int			pixel_bits;
	int			line_bytes;
	int			endian;
}	t_canvas;

typedef struct s_window
{
	void		*win;
	void		*mlx;
	t_canvas	cvs;
}	t_window;

#endif