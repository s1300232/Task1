#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, num, heads=0, tails=0,sum=0;
  char name[10];
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  printf("Rolling dice...\n");
  srand((unsigned int)time(NULL));
  for(i=0; i<2; i++){
   
    num = rand()%6+1;
    printf("Die %d: %d\n", i+1,num);
    sum= sum+ num;

  }
  printf("Total value: %d\n",sum);

 if(sum>7){
    printf("%s won!\n",name);
  }
  else{
    printf("%s lost!\n",name);
  }



  return 0;
}
