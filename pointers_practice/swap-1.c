#include <stdio.h>

void swap( int *a, int *b );

int main()
{
    int a, b;

    a = 3;
    b = 5;

    printf( "%d %d\n", a, b );
    swap( &a, &b );
    printf( "%d %d\n", a, b );

}

void swap( int *a, int *b )
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
