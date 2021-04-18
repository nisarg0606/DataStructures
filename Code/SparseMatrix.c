#include <stdio.h>
struct Element
{
    int i;
    int j;
    int x;
};

struct SparseMatrix
{
    int m, n, num;
    struct Element *ele;
};

void create(struct SparseMatrix *s)
{
    printf("Enter Dimensions: ");
    scanf("%d%d", &s->m, &s->n);
    printf("Number of non-zero: ");
    scanf("%d", &s->num);

    s->ele =(struct Element *) malloc(s->num*(struct Element));
}
int main()
{

    return 0;
}