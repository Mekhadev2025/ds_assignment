 //sparse matrix representation of a matrix 
  
 #include <stdio.h>
 int main()
 {
 int r,c;int n;
 typedef struct
  {
  int row;
  int col;
  int value;
 }element;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
element a[100];
 printf("Enter the number of rows and columns of the matrix and non zero elements of the matrix  ");
 scanf("%d",&r);
 scanf("%d",&c);
 scanf("%d",&n);
 printf("Enter the row column and the value");
 
 for(int i=1;i<=n;i++)
 {
 
 scanf("%d%d%d",&a[i].row,&a[i].col,&a[i].value);
 }
 a[0].row=r;
a[0].col=c;
a[0].value=n;
 printf("\n Sparse matrix \n");
 for(int i=0;i<=n;i++ )
 {
 printf("%d %d %d ", a[i].row,a[i].col,a[i].value);   printf("\n");                      
 }                                                                                                                                                                                                                                                                                                      
int zeroes=r*c-n;
float sparsity=(float)zeroes/(r*c);
printf("%f",sparsity);



  }
