#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, num, heads=0, tails=0,sum=0;

  printf("Rolling dice...\n");
  srand((unsigned int)time(NULL));
  for(i=0; i<2; i++){
   
    num = rand()%6+1;
    printf("Die %d: %d\n", i+1,num);
    sum= sum+ num;

  }
  printf("Total value: %d\n",sum);

 if(sum>7){
    printf("You won\n");
  }
  else{
    printf("You lost\n");
  }



  return 0;
}
