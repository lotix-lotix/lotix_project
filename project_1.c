#include <stdio.h>
#include <stdlib.h>

void pull_stats(char* name, short old, short hight, short wight){
    char ch = 0;
    int i = 0;
    char* hig = malloc(1 * sizeof(hight));
    char* wig = malloc(1 * sizeof(wight));
    printf("Enetr you name: ");
    while(((ch = getchar()) != 0) && ch != '\n' && i < sizeof(name)){
        name[i] = ch;
        i++;
    }

    i = 0;
    ch = 0; 

    //printf("Enetr you old: ");
    //scanf("%d", &old);

    printf("Enetr you hight: ");
    while(((ch = getchar()) != 0) && ch != '\n' && i < sizeof(hight)){
        hig[i] = ch;
        i++;
        if(ch == '\n')
            break;
    }

    hight = atoi(hig);
    i = 0;
    ch = 0; 

    printf("Enetr you wight: ");
    while(((ch = getchar()) != 0) && ch != '\n' && i < sizeof(wight)){
        wig[i] = ch;
        i++;
        if(ch == '\n')
            break;
    }

    wight = atoi(wig);

    free(wig);
    free(hig);
}

int main(){

    typedef struct {
        char name[10];
        unsigned short old;
        unsigned short hight;
        unsigned short wight;
    } STATS;

    STATS people;
    pull_stats(people.name, people.old, people.hight, people.wight);
    printf("Name: %s, Old: %d, Hight: %d, Wight: %d",people.name, people.old, people.hight, people.wight);

    return 0;
}