#include "libft.h"
#include <stdio.h> //DELLLLLL

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t  i;
    unsigned char *newdst;

    newdst = (unsigned char *)dst;
    i = 0;
    if (!dst && !src)
		  return (NULL);
    if (((unsigned char *)src) < newdst)
    {
        while (len--)
        {
            newdst[len] = ((unsigned char *)src)[len];
            printf ("zapolnenie1: %c\n", newdst[len]);
        }
    }
    else
        while (i < len)
    {
        newdst[i] = ((unsigned char *)src)[i];
     //   printf ("zapolnenie2: %c\n", *((unsigned char *)src + i));
       printf ("zapolnenie2: %c\n", newdst[i]);
        i++;
    }
    return ((unsigned char *)dst);
}