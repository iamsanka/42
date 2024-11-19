/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanka-w <asanka-w@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:55:28 by asanka-w          #+#    #+#             */
/*   Updated: 2024/11/19 11:40:26 by asanka-w         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_strchr(const char *s, int c) 
{ 
    unsigned int i;
    char cc;
} 

int main() 
{ 
    const char *my_string = "Hello, world!"; 
    int my_char = 'o'; 
    char result = ft_strchr(my_string, my_char); 
    
    if (result != '\0') { 
        printf("Character '%c' found.\n", result); 
    } 
    else 
    { 
        printf("Character '%c' not found.\n", my_char); 
    }

}