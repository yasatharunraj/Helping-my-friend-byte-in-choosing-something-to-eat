#include <stdio.h>
int main()
{
  printf("enter a number between 1 and 5\n");
  int ch;
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
    printf("You can have a burger for rupees 129\n");
    break;
  case 2: 
    printf("You can have a pizza for rupees 239\n");
    break;
  case 3:
    printf("You can have French fries for rupees 99\n");
    break;
  case 4:
    printf("You can have a sandwich for rupees 149\n");
    break;
  case 5:
    printf("You can have pasta for rupees 179\n");
    break;
  default:
    printf("I can help you if you choose a number between 1 and 5");
    }
  return 0;
}
