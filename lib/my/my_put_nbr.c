/*
** my_put_nbr.c for my_put_nbr.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:50:44 2015 Vatoutine Artem
** Last update Mon Nov 16 12:57:42 2015 Vatoutine Artem
*/

#include "../../include/my.h"

int	my_put_nbr(int nb)
{
  int	a;

  if (nb >= 2147483647)
    my_putstr("2147483647");
  if (nb <= -2147483648)
    my_putstr("-2147483648");
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * - 1;
    }
  if (nb >= 0)
    {
      if (nb >= 10)
	{
	  a = nb % 10;
	  nb = nb / 10;
	  my_put_nbr(nb);
	  my_putchar(48 + a);
	}
      else
	my_putchar(48 + nb % 10);
    }
  return (0);
}
