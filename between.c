//ep2

//Leia os quatro valores correspondentes aos eixos x e y de dois
//pontos quaisquer no plano, p1=(x1,y1) e p2=(x2,y2) e calcule a
//distância entre eles, mostrando 4 casas decimais após a vírgula.

#include <stdio.h>
#include <math.h>

int main(){
  float x1, x2, y1, y2;
  double distance;

  scanf("%f %f", &x1, &y1);
  scanf("%f %f", &x2, &y2);

  distance = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

  printf("%.4lf\n", distance);

  return 0;
}
