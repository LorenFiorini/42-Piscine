/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   day1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiorini <lfiorini@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:34:38 by lfiorini          #+#    #+#             */
/*   Updated: 2022/06/03 15:44:06 by lfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c) { write(1, &c, 1); }

void ft_nputchar(char c, int n) {while (n--) ft_putchar(c);}


int main() 
{
	ft_nputchar('*', 7);
	ft_putchar('\n');
	
	return 0;
}


