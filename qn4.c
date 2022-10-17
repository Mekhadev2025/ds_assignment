#include<stdio.h>
typedef struct{
int row;
int col;
int value;
}term;
term a[100],b[100],res[100];
int arow,brow,acol,bcol,anum,bnum;
printf("Enter the row ,coolum and non zero elements in sparse matrix 1 ");
scanf("%d%d%d",&arow,&acol,&anum);
printf("Enter the row ,column and non zero elements in sparse matrix 2 ");
scanf("%d%d%d",&brow,&bcol,&bnum);
//sparse matrix 1
for(int i=1;i<=anum;i++)
{
   scanf("%d%d%d",&a[i].row,&a[i].col,&a[i].value)
}
a[0].row=arow;
a[0].col=acol;
a[0].value=anum;

//sparse matrix 2
for(int i=1;i<=bnum;i++)
{
   scanf("%d%d%d",&b[i].row,&b[i].col,&b[i].value)
}
b[0].row=brow;
b[0].col=bcol;
b[0].value=bnum;
 
 
 //print matrix 1
 for(int i=0;i<=anum;i++)
 {
   printf("%d%d%d",a[i].row,a[i].col,a[i].value);
 }
 
  
 //print matrix 2
 for(int i=0;i<=bnum;i++)
 {
   printf("%d%d%d",b[i].row,b[i].col,b[i].value);
 }
 
 
 // to calculate sum 
 int p=1,q=1,r=1;
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<r;j++)
 {
 if(a[p].row==i&&a[p].col==j&&b[q].row==i&&b[q].col==j)
      {
      res[r].row=i;
      res[r].col=j;
      res[r++].value=a[p++].value+b[q++].value;
      
      }
 else if(a[p].row ==i&&a[p].col)
 {
 
 }
 }
 }
