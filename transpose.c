#include<stdio.h>
int main()
{       //structure to store sparse matrix
    typedef struct{
        int row;
        int col;
        int value;
    } elements;
    elements sparse[100];elements b[100];
    int r,c,n;

    
    printf("Enter number of rows, columns, and non-zero elementsin the matrix : ");
    scanf("%d%d%d",&r,&c,&n);
    printf("Enter elements in sparse matrix sparse : \n");
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d",&sparse[i].row,&sparse[i].col,&sparse[i].value);
    }

    sparse[0].row=r;
    sparse[0].col=c;
    sparse[0].value=n;
//printing sparse matrix
    printf("Sparse matrix : \n");
    for(int i=0;i<=n;i++){
        printf("%d\t%d\t%d\n",sparse[i].row,sparse[i].col,sparse[i].value);
    }
    printf("\n");

    //transpose of sparse matrix
    b[0].row=sparse[0].col;
   b[0].col=sparse[0].row;
   b[0].value=sparse[0].value;
   if(n>0)
   {
    int k=1;
    for(int i=0;i<sparse[0].col;i++)
    {
        for(int j=1;j<=sparse[0].value;j++)
        {
            if(sparse[j].col==i)
            {
                b[k].row=sparse[j].col;
                b[k].col=sparse[j].row;
                b[k].value=sparse[j].value;
                k++;
            }
        }
    }
    }
    printf("Transpose of sparse matrix : \n");
    for(int i=0;i<=n;i++){
        printf("%d\t%d\t%d\n",b[i].row,b[i].col,b[i].value);
    }
    return 0;
 
    }
 
