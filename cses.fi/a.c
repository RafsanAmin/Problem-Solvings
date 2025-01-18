#include <stdio.h>
#include <math.h>


void main(){
  int sum = 0;


  for(int i = 2; i <= 200; i++){
    sum += pow(i, i+1);
  }

  printf("%d", sum);
}