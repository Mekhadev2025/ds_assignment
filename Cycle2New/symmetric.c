 #include<stdio.h>
int main()
{       //structure to store sparse matrix
    typedef struct{
        int row;
        int col;
        int value;
    } elements;
    elements sparse[100]; 
    int r,c,n;
     printf("Enter number of rows, columns, and non-zero elements in the matrix : ");
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

   

    //Checking for symmetric matrix
    if (sparse[0].row != sparse[0].col)
    {
        printf("The matrix is not a square matrix\n");
        return 1;
    }
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        flag = 0;
        for (int j = 1; j <= n; j++)
            if (sparse[i].row == sparse[j].col && sparse[i].col ==sparse[j].row && sparse[i].value == sparse[j].value)
                flag = 1;
        if (flag == 0)
        {
            printf("The matrix is not a symmetric sparse matrix\n");
            return 1;
        }
    }
    printf(" The sparse matrix is symmetric \n");

    return 0;
}

