//program to evaluate a polynomail stored as array
#include <stdio.h>
#include <math.h>

typedef struct
{
    float coeff;
    int expo;
} poly;

int main()
{
    int len, x, result = 0;
    printf("Enter the no of terms  of the polynomial: ");
    scanf("%d", &len);
    poly a[len];

printf("Enter the coefficents and exponent  of polynomail in descending order of exponents\n");
for(int i=0;i<len;i++){
scanf("%f %d",&a[i].coeff,&a[i].expo);
}
 
printf("Polynomial  is :\n");
printf("----------- :\n");
for (int i = 0; i < len-1 ;i++)
{

    int x=(int)a[i].coeff;
        printf("%dx^%d +", x, a[i].expo);
        }
    for (int i = len-1; i < len; i++)
    {
     int x=(int)a[len-1].coeff;
        printf("%dx^%d", x, a[len-1].expo);
         }
printf("\n");

 printf("Enter x\n");
 scanf("%d", &x);

for (int i = 0; i <len; i++)
        result += a[i].coeff * pow(x, a[i].expo);

    printf("Result \n");
     printf("-------------------\n");
printf(" %d\n", result);
    return 0; 
}
