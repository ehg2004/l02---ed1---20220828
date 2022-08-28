/* ENZO HOLZMANN GAIO*/


#include "queue.h"
#include<time.h>

int main () {
  int i=0, n = 10,x;	
  /*Use somente as operações definidas em queue.h*/
  /*Não use para resolver esse exercício o operador -> aqui!*/
  /*Terminar*/

  srand(time(NULL));

  Queue* num[2];
  num[0]=create(n);
  num[1]=create(n);

  while(!full(num[0])&&!full(num[1])&&i<10)
  {
    printf("%3d ",x=rand()%10);
    if(x%2==0)
      enqueue(num[0],x);
    else
      enqueue(num[1],x);
  } 
    printf("\n");
    print(num[0]);
    print(num[1]);

    destroy(num[0]);
    destroy(num[1]);

  return 0;
}

