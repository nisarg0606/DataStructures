#include<stdio.h>
int stack[100], i, j, choice = 0, n, top = -1;
void push();
void pop();
void show();

void main(){
    printf("Enter the number of elements in the stack: ");
    scanf("%d", &n);
    n = n-1;
    while(choice != 4)
    {
        printf("\nChoose one from the below options...\n");
        printf("1.Push\n2.Pop\n3.Show\n4.Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        
        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            show();
            break;
        }

        case 4:
        {
            printf("Exiting....\n");
            break;
        }
        default:
            printf("Please enter valid choice\n");
            break;
        }
    }
}

void push()
{
    int val;
    if(top == n)
    printf("\nOverflow\n");
    else
    {
        printf("Enter the value: ");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    if(top == -1)
    printf("Underflow");
    else
    {
        printf("%d", stack[top]);
        top = top - 1;
        printf(" is removed....\n");
    }
}

void show()
{
    for(i = top; i>=0; i--)
        printf("%d\n", stack[i]);
    if (top == -1)
    {
        printf("Stack is empty");
    }
}