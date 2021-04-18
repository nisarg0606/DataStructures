#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head;

void insert_beg ();
void insert_end ();
void insert_spec ();
void delete_beg ();
void delete_end ();
void delete_spec ();
void display ();
void search ();

void main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("Choose an option from the following list");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n");  
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }
    }
}

void insert_beg()
{
    struct node *ptr;
    int item;
    ptr = (struct node*) malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("Enter item Value: ");
        scanf("%d", &item);
         if(head==NULL)  
        {  
            ptr->next = NULL;  
            ptr->prev=NULL;  
            ptr->data=item;  
            head=ptr;  
        }  
        else   
        {  
            ptr->data=item;  
            ptr->prev=NULL;  
            ptr->next = head;  
            head->prev=ptr;  
            head=ptr;  
       }  
       printf("\nNode inserted");
    } 
}
void insert_end();
void insert_spec();
void delete_beg();
void delete_end();
void delete_spec();
void display();
void search();    