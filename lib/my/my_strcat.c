/*
** my_strcat.c for my_strcat.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:55:08 2015 Vatoutine Artem
** Last update Mon Nov 16 11:18:47 2015 Vatoutine Artem
*/

#include "../../include/my.h"

char	*my_strcat(char *dest, char *src)
{
  int	z;
  int	i;

  z = my_strlen(dest);
  i = 0;
  while (src[i] != '\0')
    {
      dest[z + i] = src[i];
      i = i + 1;
    }
  return (dest);
}
