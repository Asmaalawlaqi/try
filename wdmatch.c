
#include <unistd.h>

int main(int ac , char **av)
{
int i =0;
int j = 0;
if(ac == 3)
{
while(av[2][i])
{
  if(av[1][j] == av[2][i])
    j++;
  if(av[1][i])
  {
j = 0;
    while(av[1][j])
      {

        write(1, &av[1][j] , 1);
        j++;
      } 
    break;
  }
  i++;
}
}
write(1, "\n" , 1);
return(0);
}
