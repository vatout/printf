/*
** my_strlen.c for my_strlen.c in /home/vatout_a/lib/my
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Sun Nov 15 14:59:32 2015 Vatoutine Artem
** Last update Sun Nov 15 14:59:41 2015 Vatoutine Artem
*/

int	my_strlen(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      a = a + 1;
    }
  return (a);
}
