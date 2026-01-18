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

STATS old_fill(short old){
    STATS user;
    char* ar;
    for(int i = 0; i < sizeof(ar); i++){
        ar[i] = getchar();
        if(ar[i] == '\n')
            break;
    }
    user.old = atoi(ar);

    return user;
}

STATS data_fill(char* data){
    STATS user;
    for(int i = 0; i < sizeof(user.data) / sizeof(*(user.data)); i++){
        data[i] = getchar();
        if(data[i] == '\n')
            break;
    }

    return user;
}

void pull_stats(STATS* user)
{
    printf("Enetr you name: ");
    for(int i = 0; sizeof(user->name) / sizeof(*(user->name)); i++){
        user->name[i] = getchar();
        if(user->name[i] == '\n')
            break;
    }
    printf("Enetr you old: ");
    int ol;
    *user = old_fill(ol);

    printf("Enetr you sex: ");
    user->sex = getchar();

    printf("Enetr you data: ");
    for(int i = 0; sizeof(user->data) / sizeof(*(user->data)); i++){
        user->data[i] = getchar();
        if(user->data[i] == '\n')
            break;
    }

}

void print_user(STATS user){
    printf("Name: %s\n",user.name);
    printf("Old: %d\n",user.old);
    printf("Sex: %c\n",user.sex);
    printf("Data: %s\n",user.data);
}

int main(){

    STATS people;
    pull_stats(&people);
    print_user(people);
    //scanf("%20s", people.name);
    //printf("Name: %s", people.name);

    return 0;
}