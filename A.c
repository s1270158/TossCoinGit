#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
  int head = 0,tail = 0,i=0;
  srand((unsigned int)time(NULL));

printf("Tossing a coin...\n");
  for(i=0;i<3;i++){
   if(rand() % 2==1){
    printf("Round%d: Heads\n",i+1);
    head++;
  }
  else{
    printf("Round%d: Tails\n",i+1);
    tail++;
  }
}
printf("Heads: %d, Tails: %d\n",head,tail);

return 0;
}
