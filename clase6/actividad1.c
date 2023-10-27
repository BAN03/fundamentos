#include <stdio.h>
#include <stdio_ext.h>
//int fflush(FILE * stream);
int main()
{
  int i = 0,n;
  char op = 's';
  do {  
    printf("Cuantas: ");
    scanf("%d",&n);
    do {
      i++;
      printf("Linea %d \n",i);
    } while (i<n);
    i = 0;
    printf("otra?: ");
    __fpurge(stdin);
    scanf("%c",&op);
  } while (op == 's');
  return 0;
}
