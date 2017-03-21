#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *p;
    int i;

    p = (int *) malloc( sizeof( int[10] ) );

    for ( i = 0; i < 10; i++)
    {
        *( p + i ) = 0;
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf( "%d \n", *( p + i ) );
    }

    free(p);

    return 0;

}
