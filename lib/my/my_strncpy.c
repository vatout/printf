/*
** my_strncpy.c for my_strncpy.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 15:01:31 2015 Vatoutine Artem
** Last update Mon Nov 16 11:21:31 2015 Vatoutine Artem
*/

#include "../../include/my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = my_strlen(src);
  j = 0;
  if (n < i)
    {
      str_change(src, n);
    }
  while (src[j] != '\0')
    {
      dest[j] = src[j];
      j = j + 1;
    }
  return (dest);
}

int	str_change(char *str, int n)
{
  str[n] = '\0';
  return (0);
}
