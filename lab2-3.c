#include <stdio.h>
#include <math.h>
int main (){
    int z,x,y;
    float t;
    printf ("Введіть значення x");
    scanf ("%d",&x);
    printf ("Введіть значення z");
    scanf ("%d",&z);
    printf ("Введіть значення y");
    scanf ("%d",&y);

    t=sqrt ((3*x)/(z-2*y))-y*z+sin(pow(x,2));

    printf ("Обчислення %f", t);
    return 0;

}