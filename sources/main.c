/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 08:18:14 by goda-sil          #+#    #+#             */
/*   Updated: 2023/10/04 16:15:50 by goda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

// try to send position one by one on fill_stack_a

int	main(int counter, char **argument)
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		counter_one;

	fill_stack_a(&stack_a, &stack_b, argument, counter);
	counter_one = 0;
	sort(&stack_a, &stack_b);
	return (0);
}
