#include <unistd.h>

int ft_is_prime(int nb)
{
  int i;
  
  i = 2;
  if （nb < 2)
    return (0);
  while (i < nb / 2)
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
int 	main(void)
{
	printf("%d",ft_find_next_prime(100000));	
	return (0);
}
