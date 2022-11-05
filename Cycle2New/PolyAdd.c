#include <stdio.h>
#include<stdlib.h>
 
typedef struct {
        int coeff;
        int expo;
             } polynomial;
 polynomial terms[100];
 int avail=0;
 
void attach(float coefficient,int exponent)
{
if(avail>=100)
{
    printf("ERROR");
   exit(EXIT_FAILURE);

}
terms[avail].coeff=coefficient;
terms[avail].expo=exponent;
avail++;
}
void print(int start,int finish)
{   int i;
    for(i=start;i<finish;i++)
    {
      printf("%d x^%d + ",terms[i].coeff,terms[i].expo);
    }
    printf("%d x^%d ",terms[finish].coeff,terms[finish].expo);
    printf("\n");
}

int  COMPARE(int a ,int b)
{
    if(a>b)
    return 1;
    else if (a==b)
    return 0;
    else if (a<b)
    return -1;
}


void padd( int startA,int finishA,int startB,int finishB,int startD,int finishD )
{
    float coefficient;
   // *startD=avail;
     
while(startA<=finishA && startB<=finishB)
{
    switch(COMPARE(terms[startA].expo,terms[startB].expo))
    {
        case -1:
        attach(terms[startB].coeff,terms[startB].expo);
        startB++;
        break;

        case 0:
        coefficient=terms[startA].coeff+terms[startB].coeff;
        if(coefficient!=0)
        attach(coefficient,terms[startA].expo);
        startA++;
        startB++;
        break;

        case 1:
        attach(terms[startA].coeff,terms[startA].expo);
        startA++;
        break;
    }
}

for(;startA<=finishA;startA++)
attach(terms[startA].coeff,terms[startA].expo);
for(;startB<=finishB;startB++)
attach(terms[startB].coeff,terms[startB].expo);
//*finishD=avail-1;
 
}
/*printf("\npolynomial2 --------");

for(int i=*startD;i<=*finishD;i++)
{
    printf("%d x ^ %d + ",terms[i].coeff,terms[i].expo);
}


}*/


int main()
{
int size1,size2;
int startA,startB,startD,finishA,finishB,finishD;
printf("Enter the number of terms in the first polynomial and second polynomial\n");
scanf("%d",&size1);
scanf("%d",&size2);
//printf("%d",size1);
//printf("%d",size2);
startA=0;
finishA=size1-1;
startB=size1;
////printf(" start b is %d\n",startB);

finishB=size2+size1-1;
//printf(" finish b is %d\n",finishB);
 //startD=size2+size1;
 //finishD=startD;
 avail=size1+size2;
 //printf(" start d is %d\n",startD);
//printf(" finish d is %d\n",finishD);
printf("Enter the coefficent and exponent of polynomial 1 in the decreasing order of exponents");
for(int i=startA;i<=finishA;i++)
{
scanf("%d%d",&terms[i].coeff,&terms[i].expo);
} 
printf("\nPolynomial1 is \n ------------------- \n");
print(startA,finishA); 
printf("\n");
printf("Enter the coefficent and exponent of polynomial 2 in the decreasing order of exponents");
for(int i=startB;i<=finishB;i++)
{
scanf("%d%d",&terms[i].coeff,&terms[i].expo);
}

printf("Polynomial2 is \n ------------------- \n");
 print(startB,finishB);  
startD=avail;
padd(startA,finishA,startB,finishB,startD,finishD);
finishD=avail-1;
printf("\n\tPOLYNOMIAL SUM\n");
    //finishD=avail-1;
    print(startD,finishD);
    printf("\n");
return 1;
} 
