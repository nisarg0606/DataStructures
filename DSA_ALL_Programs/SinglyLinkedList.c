#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void last_delete();
void random_delete();
void display();
void search();

void main()
{

}
void beginsert(){
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
        printf("\nOVERFLOW");
    else{
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode Inserted");
    }
}
void lastinsert(){
    struct node *ptr, temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)
        printf("\nOverflow");
    else
    {
        printf("\nEnter value: ");
        scanf("%d",&item);
        ptr -> data = item;
        if (head == NULL)
        {
            ptr -> next = NULL;
            head = ptr;
            printf("Node Inserted.");
        }
        
    }
}
void randominsert(){}
void begin_delete(){}
void last_delete(){}
void random_delete(){}
void display(){}
void search(){}