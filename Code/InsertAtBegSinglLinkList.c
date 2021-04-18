#include<stdio.h>
#include<stdlib.h>
void beginsert(int);
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int choice, item;
    do
    {
        printf("\nEnter the item which you want to insert: ");
        scanf("%d", &item);
        beginsert(item);
        printf("Press 0 to insert more or any other key and press Enter to exit: ");
        scanf("%d", &choice);
    } while (choice==0);
    display();
}

void beginsert(int item)
{   
    struct node *ptr = (struct node*) malloc (sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        ptr->data= item;
        ptr->next = head;
        head = ptr;
        printf("\nNode Inserted!!!\n");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nprinting value....\n");
        while (ptr!=NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->next;
        }   
    }
}