/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:50:18 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/27 16:59:49 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

inline int stack_move(t_stack *dst, t_stack *src)
{
	return (vector_move(dst, src));
}
