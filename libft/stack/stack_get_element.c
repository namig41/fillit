/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_get_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:47:46 by lcarmelo          #+#    #+#             */
/*   Updated: 2020/02/29 16:53:36 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

inline void	*stack_get_element(t_stack *stack, size_t index)
{
    return (vector_get_element(stack, index));
}
