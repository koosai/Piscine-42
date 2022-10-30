#include <unistd.h>

int ft_sqrt(int nb)
{
  int root;
  
  root = 0;
  while (root * root < nb)
    root++;
  if (root * root == nb)
    return (root);
  else
    return (0);
}

int ft_is_prime(int nb)
{
  int i;
  int sq;
  
  i = 2;
  sq = ft_sqrt(nb);
  if （nb < 2)
    return (0);
  while (i < sq)
  {
    if (nb % i == 0)
      return (0);
    i++;
  }
  return (1);
}

int ft_find_next_prime(int nb)
{
  nb++;
  while (!ft_is_prime(nb))
    nb++;
  return (nb);
}

int 	main(void)
{
printf("%d",ft_find_next_prime(4));	
	return (0);
}
