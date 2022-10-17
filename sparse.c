#include <stdio.h>
int main()
{
    typedef struct{
        int row;
        int col;
        int value;
    } elements;
    elements sparse[100];

    int r,c,n=0;
    int matrix[100][100];
    printf("Enter number of rows : ");
    scanf("%d",&r);
        printf("Enter number of columns : ");
    scanf("%d",&c);

    //entering elements in matrix 
    printf("Enter elements of matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");

    //Displaying the matrix
    printf("The matrix is : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    //Adding elements to sparse representation


  int   k=1;
      for(int i=0;i<r;i++)
      {
        for(int j=0;j<c;j++)
        {
            if(matrix[i][j]!=0)
            {

                n++;
                sparse[k].row=i;
                sparse[k].col=j;
                sparse[k].value=matrix[i][j];
                k++;
            }            
        }
    }
    printf("\n");

   
    sparse[0].row=r;
    sparse[0].col=c;
    sparse[0].value=n;
    //Displaying the sparse representation
    printf("Sparse matix: \n");
    for(int i=0;i<=n;i++){
        printf("%d\t%d\t%d\n", sparse[i].row,sparse[i].col,sparse[i].value);
    }
    printf("\n");

    //finding Sparsity
       int zeroes=r*c-sparse[0].value;
    float sparsity=(float)zeroes/r*c;
    printf("Sparsity : %0.2f\n", sparsity);
    
    return 0;
}
