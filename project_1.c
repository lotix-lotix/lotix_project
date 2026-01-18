#include <stdio.h>
#include <stdlib.h>

typedef union{
        unsigned char buffer_c[8];
        unsigned short buffer_s[2];
        unsigned buffer_i;
}swap_buffer;

typedef struct {
        char name[20];
        short old;
        char sex;
        char* data;
} STATS;

/*STATS pull_stats(STATS piple)
{
    printf("Enetr you name: ");
    scanf("%20s", piple.name);
}*/

int main(){

    STATS people;
    //people.name = pull_stats(people);
    scanf("%20s", people.name);
    printf("Name: %s", people.name);

    return 0;
}