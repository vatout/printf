/*
** my_revstr.c for my_revstr.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:52:04 2015 Vatoutine Artem
** Last update Sun Nov 15 14:52:06 2015 Vatoutine Artem
*/

char	*my_revstr(char *str)
{
  char	a;
  char	*ptr;

  ptr = str;
  while (*ptr != 0)
    {
      ptr = ptr + 1;
    }
  ptr = ptr - 1;
  while (str < ptr)
    {
      a = *str;
      *str = *ptr;
      *ptr = a;
      str = str + 1;
      ptr = ptr - 1;
    }
  return (str);
}
