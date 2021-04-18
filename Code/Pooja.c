#include<stdio.h>
#include<stdlib.h>
void insert();
void discount();
#define maxsize 100
int queue[maxsize];

int front = -1, rear = -1;
void insert(){
    int item;  
    char name[30];
    printf("\nEnter the element: ");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nItem inserted ");  
}
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d\t",queue[i]);  
            if(i < 5)
            {
                printf("50%c discount\n", '%');
            }
            else if(i >= 5 && i<10){
                printf("30%c discount\n", '%');
            }
            else{
                printf("10%c discount\n", '%');
            }
        }     
    }  
}  
void main(){
    int choice;
    while (choice!=3)
    {
        printf("\n1 -- Insert : ");
        printf("\n2 -- Display Name with Discount rate: ");
        printf("\n3 --- Exit");
        printf("\nEnter Your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            return;
        default:
            printf("Enter Valid choice....");
            break;
        }
    }   
}