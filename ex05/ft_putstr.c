/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:12:40 by tiida             #+#    #+#             */
/*   Updated: 2025/10/04 19:20:10 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* YOU COMPLICATE YOUSELF...
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			write(1, &str[i], 1);
		if (str[i] >= 'a' && str[i] <= 'z')
			write(1, &str[i], 1);
		if (str[i] >= 'A' && str[i] <= 'Z')
			write(1, &str[i], 1);
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		i++;
	}
}
*/
