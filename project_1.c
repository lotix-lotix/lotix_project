#include <stdio.h>
#include <stdlib.h>

typedef union{
        unsigned char buffer_c[8];
        unsigned short buffer_s[2];
        unsigned buffer_i;
    }swap_buffer;

typedef struct {
        swap_buffer name;
        swap_buffer old;
        swap_buffer hight;
        swap_buffer wight;
    } STATS;

void set_stats(STATS* arr);

void pull_stats(STATS* name){
    char ch = 0;
    int i = 0;
    //char* hig = malloc(1 * sizeof(hight));
    //char* wig = malloc(1 * sizeof(wight));
    printf("Enetr you name: ");
    set_stats(name);

    i = 0;
    ch = 0; 

    //printf("Enetr you old: ");
    //scanf("%d", &old);

    /*printf("Enetr you hight: ");
    while(((ch = getchar()) != 0) && ch != '\n' && i < sizeof(hight)){
        hig[i] = ch;
        i++;
        if(ch == '\n')
            break;
    }*/

    //hight = atoi(hig);
    i = 0;
    ch = 0; 

    /*printf("Enetr you wight: ");
    while(((ch = getchar()) != 0) && ch != '\n' && i < sizeof(wight)){
        wig[i] = ch;
        i++;
        if(ch == '\n')
            break;
    }*/

    //wight = atoi(wig);

    //free(wig);
    //free(hig);
}

void set_stats(STATS* nun){
    
    for(int i = 0; i < (sizeof(nun) / sizeof(nun)); i++){
        nun->name.buffer_c[i] = getchar();
        if(nun->name.buffer_c == '\n')
            break;
    }
}

int main(){

    STATS people;
    pull_stats(people.name.buffer_c);
    printf("Name: %s",people.name);

    return 0;
}