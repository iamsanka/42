#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;

    if (dstsize > 0)
    {
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return ft_strlen(src);
}


#include <stdio.h>

int main()
{
    char dest[10]={0};
    const char *src="Helloooooo";
    printf("before strlcpy %s\n", dest);
    char strlcpy_dst[10];
    ft_strlcpy(strlcpy_dst, "Hello", 10);
    printf("ft_strlcpy: %s\n", strlcpy_dst);
}