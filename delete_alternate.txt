#include<stdio.h>
#include<stdlib.h>

  struct node{
        int data;
        struct node *link;

         };
   struct node *head;
 /* head= (struct node *)malloc(sizeof(struct node)); */ 
void display(struct node *head)
   {
    struct node *ptr;
    ptr=head;
    while(ptr->link!=NULL)
    { 
     printf("%d",ptr->data);

    }
    }
void create_node(struct node *head,int data)
         {
         struct node  *ptr= (struct node *)malloc(sizeof(struct node));
              ptr->data =data;
              if(head==NULL)
            {
            
            ptr->link=NULL;
           head=ptr;
           }
          else{
     head->link=ptr;
    ptr->link=NULL;
}
printf("\n NODE INSERTED \n");
  printf("%d",ptr->link);
printf("printing ");
 
    ptr=head;
    while(ptr->link!=NULL)
    { 
     printf("%d",ptr->data);

    }


}

            /*ptr->link=NULL;
              printf("%d",ptr->data);
             if(head==NULL)
             { 
             ptr->data =data;
             ptr->link=NULL;
              head =ptr;
              }
            else 
              {
              head->link=ptr;
              ptr->link=NULL;
              }
          printf("%d",ptr->li);
       printf("\n NODE INSERTED \n");
  */
    

 
    //}//end fxn

      void delete_node(struct node *head)
       {
          struct node *ptr =head;int c=0;
        struct node *ptr1;
         for(int i=0;i<c;i+=2)
  
       { 
        ptr1=ptr ;
        ptr=ptr->link;
       if(ptr->link==NULL)
       {  
        ptr1->link=NULL;
         free(ptr);
      break;

      }//end if
    else{

   ptr1->link=ptr->link;
   free(ptr);
   ptr=ptr1->link;
   }//ennd else
  }//end for 
}




    int main(){
 
     void create_node(struct node *head,int data);
        int choice ;
       while(1)
            {
         printf("\n\n*************MAIN MENU********\n\n");
         printf(" \n 1. ADD NEW NODE  ");
         printf("\n 2.DELETE ALTERNATE NODES");
         printf("\n 3.DISPLAY \n");
         printf("\nEnter your choice\n");
         scanf("%d",&choice);
         switch (choice)
          { 
       case 1:
           {     
               
             printf("\n Enter the item /data to add to the linked list  \n");
             int data ;
            scanf("%d",&data);
             
         
             create_node(head,data);
         break;
           }
       case 2:
        {
         printf("\n DELETING ALTERNATE NODES \n-------------------\n");
         delete_node(head);  

         break;
        }
       case 3:
       {    
           printf("\nLINKED LIST  \n-------------------\n");
           display(head); 
           break;
       }
      case 4:return 0;
      default:printf("Wrong entry");
      }//end switch
     }//end while
    }//end main

        

 




