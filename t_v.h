/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_v.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 21:06:06 by albaud            #+#    #+#             */
/*   Updated: 2023/09/27 16:03:49 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_V_H
# define T_V_H

typedef struct s_v
{
	double	*arr;
	int		size;
}	t_v;

# ifndef t_m
#  define t_m

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

#endif