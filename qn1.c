//Sum of 2 polynomial

#include <stdio.h>

typedef struct
{
    float coeff;
    int expo;
} poly;

int main()
{
int len1,len2;
printf("Enter the size of polynomial 1\n");
 scanf("%d", &len1);
printf("Enter the size of polynomial 2\n");
 scanf("%d", &len2);
poly a[len1],b[len2];
poly res[len1+len2];
printf("Enter the coefficents of polynomail 1 in descending order of exponents");
for(int i=0;i<len1;i++){
scanf("%f",&a[i].coeff);
}

printf("Enter the exponents of polynomail 1 in descending order of exponents");
for(int i=0;i<len1;i++){
scanf("%d",&a[i].expo);
}

printf("Enter the coefficents of polynomail 2 in descending order of exponents");
for(int i=0;i<len2;i++){
scanf("%f",&b[i].coeff);
}
printf("Enter the exponents of polynomail 2 in descending order of exponents");
for(int i=0;i<len1;i++){
scanf("%d",&b[i].expo);
}

printf("Polynomial 1 is :\n");
printf("----------- :\n");
for (int i = 0; i < len1-1; i++)
{

    int x=(int)a[i].coeff;
        printf("%dx^%d +", x, a[i].expo);
        }
for (int i = len1-1; i < len1; i++)
{

    int x=(int)a[i].coeff;
        printf("%dx^%d", x, a[i].expo);
        }



    printf("\n");

 printf("\n");

printf("Polynomial 2 is :\n");
printf("----------- :\n");

for (int i = 0; i < len2-1; i++){
int x=(int)b[i].coeff;
        printf("%dx^%d + ", x, b[i].expo);


}


for (int i = len2-1; i < len2; i++){
int x=(int)b[i].coeff;
        printf("%dx^%d", x, b[i].expo);


}


    printf("\n");
 printf("\n");




int i = 0, j = 0, k= 0;
    while (i < len1 && j < len2)
    {
        if (a[i].expo > b[j].expo)
        {
            res[k].expo = a[i].expo;
            res[k].coeff = a[i].coeff;
            i++;
            k++;
        }
        else if (a[i].expo < b[j].expo)
        {
            res[k].expo = b[j].expo;
            res[k].coeff = b[j].coeff;
            j++;
            k++;
        }
        else
        {
            res[k].expo = a[i].expo;
            res[k].coeff = a[i].coeff + b[j].coeff;
            k++;
            i++;
            j++;
        }
    }
    while (i < len1)
    {
        res[k].expo = a[i].expo;
        res[k].coeff = a[i].coeff;
        i++;
        k++;
    }
    while (j < len2)
    {
        res[k].expo = b[j].expo;
        res[k].coeff = b[j].coeff;
        j++;
        k++;
    }

    printf("Sum of the 2 polynomials");
       printf("----------------");
 printf("\n");
    for (int i = 0; i < k-1; i++)
    {    int x=(int)res[i].coeff;
        printf("%dx^%d + ", x, res[i].expo);
    }
for (int i = k-1; i < k; i++)
    {    int x=(int)res[i].coeff;
        printf("%dx^%d ", x, res[i].expo);
    }


        
    printf("\n");

    return 0;

}

