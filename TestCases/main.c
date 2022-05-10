/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguedes <lguedes@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:09:14 by lguedes           #+#    #+#             */
/*   Updated: 2022/05/07 00:09:16 by lguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

void ft_test_isalpha(void);
void ft_test_isdigit(void);

int main(void)
{
	printf("Starting tests:\n");
	ft_test_isalpha();
	ft_test_isdigit();
	
}

// Test ft_isalpha
void ft_test_isalpha(void) 
{
	char *str1 = "lkajdf9373894lkdjsfsd934";
	for (size_t i = 0; i < strlen(str1); i++) {
		if(ft_isalpha(str1[i]) != isalpha(str1[i])) {
			printf("Test Failed on the %zurd char\n", i);
			printf("Expected: %zu", i);
			printf("Recived: %d", ft_isalpha(str1[i]));
		}
	}
	printf("ft_isalpha - OK!\n");
}

// Test ft_isdigit
void ft_test_isdigit(void) 
{
	char *str1 = "lkajdf9373894lkdjsfsd934";
	for (size_t i = 0; i < strlen(str1); i++) {
		if(ft_isdigit(str1[i]) != isdigit(str1[i])) {
			printf("Test Failed on the %zurd char\n", i);
			printf("Expected: %zu", i);
			printf("Recived: %d", ft_isalpha(str1[i]));
		}
	}
	printf("ft_isdigit - OK!\n");
}

// Test ft_isalnum

// Test ft_isascii

// Test ft_isprint

// Test ft_strlen

// Test ft_memset

// Test ft_bzero

// Test ft_memcpy
