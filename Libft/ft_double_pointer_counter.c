/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double_pointer_counter.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafriem <cafriem@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:36:50 by cafriem           #+#    #+#             */
/*   Updated: 2022/09/03 13:53:45 by cafriem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_double_pointer_counter1(char **dp, int line_counter)
{
	int	c;

	c = 0;
	while (dp[line_counter][c] != '\0')
		c++;
	return (c);
}

int	ft_double_pointer_counter2(char **dp)
{
	int	line_counter;

	line_counter = 0;
	while (dp[line_counter] != NULL)
		line_counter++;
	return (line_counter);
}
