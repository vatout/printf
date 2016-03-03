/*
** my_isneg.c for my_isneg.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:40:55 2015 Vatoutine Artem
** Last update Mon Nov 16 11:36:55 2015 Vatoutine Artem
*/

#include "../../include/my.h"

int	my_isneg(int n)
{
  if (n < '0')
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
  return (0);
}
