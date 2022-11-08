//ep3
//Leia um valor inteiro, que é o tempo de duração em segundos de
//um determinado evento em uma fábrica, e informe-o expresso no
//formato horas:minutos:segundos.

#include <stdio.h>

int main(){
  int seconds, minutes, hours;

  scanf("%d", &seconds);

  hours = seconds / 3600;
  seconds %= 3600;
  minutes = seconds / 60;
  seconds %= 60;

  printf("%d:%d:%d\n", hours, minutes, seconds);

  return 0;
}
