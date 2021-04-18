#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert();
void beginsert(){
    struct node *ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("Enter value: ");
        
    }
    
    
}