#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char s1[81];
    char s2[81];
    char s3[81];

} Rec;


int main()
{

    Rec *a[10];
    a[0] = ( Rec * ) malloc( sizeof( Rec ) );
    strcpy( a[0] -> s1, "hello" );
    strcpy( a[0] -> s2, "hello1" );
    
    for ( int i = 0; i < 10; i++ )
    {
	for( int j = 0; j < 81; j++ )
            printf("%c", a[0]->s1[j]);
	
	printf("\n");
    }
    
    free(a[0]);

}

