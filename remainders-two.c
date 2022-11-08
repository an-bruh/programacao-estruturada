//ep5
//Leia um valor inteiro N. Apresente todos os números entre 1
//e 10000 que divididos por N dão resto igual a 2.

#include <stdio.h>

int main(){
  int number;

  scanf("%d", &number);

  for(int i = 0; i <= 1000; i++){
    if ((i % number) == 2){
      printf("%d\n", i);
    }
  }

  return 0;
}
