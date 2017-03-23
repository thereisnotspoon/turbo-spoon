#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[21];
    char city[21];
    char phone[21];
    char* comment;

}Addr;

int main()
{
    
Addr s;
char comm[100];

printf("name : ");
gets(s.name, 20);
printf("city : ");
gets(s.city, 20);
printf("phone : ");
gets(s.phone, 20);
printf("comment : ");
gets(comm, 100);

s.comment = (char *) malloc( sizeof( char[ strlen(comm) + 1 ] ) );

strcpy(s.comment, comm);

printf("name : %s\n", s.name);
printf("city : %s\n", s.city);
printf("phone : %s\n", s.phone);
printf("comment : %s\n", s.comment );
}
