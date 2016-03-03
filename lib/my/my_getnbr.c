/*
** my_getnbr.c for my_getnbr.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:26:24 2015 Vatoutine Artem
** Last update Mon Nov 16 11:25:58 2015 Vatoutine Artem
*/

#include "../../include/my.h"

int	my_getnbr(char *src)
{
  int	z;
  int	i;
  int	a;

  a = 0;
  i = 0;
  if (src[0] == 45)
    {
      z = 1;
      my_putchar('-');
    }
  else
    z = 0;
  while (src[z] < 58 && src[z] > 47)
    {
      i = i * 10;
      a = src[z] - 48;
      i = i + a;
      z = z + 1;
    }
  return (i);
}
