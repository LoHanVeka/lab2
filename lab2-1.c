#include <stdio.h>
#include <math.h>

 int main () {

int num1;
int num2;
int rsn;
float ser;
float root;
int sum;

printf("Введіть 1 число");
scanf("%d",& num1);

printf("Введіть 2 число");
scanf("%d",& num2);

rsn=num2-num1;
ser=(num1+num2)/2;
sum=num1+num2;
root=sqrt(sum );
printf("Різниця %d \n",rsn);
printf("Середнє Арифметичне %g \n",ser);
printf("Корінь суми чисел %g \n",root);
return 0;
 }
 