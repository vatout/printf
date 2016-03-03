/*
** my_swap.c for my_swap.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 15:02:36 2015 Vatoutine Artem
** Last update Mon Nov 16 11:35:49 2015 Vatoutine Artem
*/

#include "../../include/my.h"

int	my_swap(int *a, int *b)
{
  int	d;

  d = *a;
  *a = *b;
  *b = d;
  my_putchar(*a);
  my_putchar('\n');
  my_putchar(*b);
  return (0);
}
