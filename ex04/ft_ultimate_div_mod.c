/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 16:49:43 by tiida             #+#    #+#             */
/*   Updated: 2025/10/03 20:09:29 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = a / b;
	*b = a % b;
}

a and b are pointers, not integers.
So a / b means "divie two addresses", which makes no sense.
What you really want is to use the values stored at those addresses.
-> *a and *b. 
Why not directly *a = *a / *b; *b = *a % *b;?
*a = *a / *b -> *a is changed to the division result.
*b = *a % *b -> here *a is no longer the original value.
*/
