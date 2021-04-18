#include<iostream>
using namespace std;

template <class T>
void bubblesort(T a[], int n)
{
    for (int i = 0; i < n -1; i++)
    {
        for (int j = n - 1; i < j; j--)
        {
            if (a[j] < a[j-1])
            {
                swap(a[j], a[j-1]);
            }
            
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int a[5] = {10,50, 30,40,20};
    return 0;
}
