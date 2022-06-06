/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfiorini <lfiorini@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 06:43:37 by lfiorini          #+#    #+#             */
/*   Updated: 2022/06/05 17:37:32 by lfiorini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putaddr(void *ptr) {
	write(4, &ptr, 4);
	return;
}

void ft_putchar(char c) { write(1, &c, 1); }


int main() {
	int a = 4;
	int *ptr = &a;

	ft_putaddr(ptr);
	ft_putchar('\n');

	return (0);
}
