#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int ft_strlen(char *str);
int ft_toupper(int c);
int ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *str_1, const char *str_2, unsigned int size);
void	*ft_memset(void *mem, int replace, size_t len);
void	ft_bzero(void *mem, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif