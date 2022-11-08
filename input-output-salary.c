//ep1

//Escreva um programa que leia o número de um funcionário,
//seu número de horas trabalhadas, o valor que recebe por
//hora e calcula o salário desse funcionário. A seguir,
//mostre o número e o salário do funcionário, com duas casas decimais.

#include <stdio.h>

int main(){
  int number, work_hours;
  double hourly, salary;

  scanf("%d", &number);
  scanf("%d", &work_hours);
  scanf("%lf", &hourly);

  salary = work_hours * hourly;

  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2lf\n", salary);

  return 0;
}
