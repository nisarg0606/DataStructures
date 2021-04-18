#include<stdio.h>
int summation(int[]);
void main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d number: ", i+1);
        scanf("%d", &arr[i]);
    }
    int sum = summation(arr);
    printf("Ans: %d", sum);
}

int summation(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
    
}