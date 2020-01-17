#include <assert.h>
#include <stdio.h>

void swap(int *, int *);

int main()
{
    int *pa, a = 2;
    int *pb, b = 3;

    pa = &a;
    pb = &b;

    printf("%d %d\n", *pa, *pb);
    swap(pa, pb);
    printf("%d %d\n", *pa, *pb);

    printf("%p %p\n", &pa, &a);

    return 0;
}

void swap(int *a, int *b)
{
    assert(a && b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}