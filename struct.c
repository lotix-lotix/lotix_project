#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum {lenght_name = 50, lenght_b = 20};

struct tag_fio {
    char* name;
    char* last;
};

struct tag_person {
    struct tag_fio fio;
    char sex;
    unsigned short old;
    char* b_daty;
};

struct person{
    char* name;
    int old;
};

struct node{
    char* value;
    struct node* ptr;
};

int main(){

    struct tag_person people;
    people.fio.name = "Dmitriy";
    people.fio.last = "Vertelkin";
    people.sex = 'M';
    people.old = 22;
    people.b_daty = "07.05.2003";

    printf("name: %s\nlast: %s\nsex: %c\nold: %d\nb_day: %s\n",people.fio.name, people.fio.last, people.sex, people.old, people.b_daty);

    struct tag_person people1 = {{"Dmitriy", "Vertelkin"}, .sex = 'M', 22, "07.05.2003"};

    printf("------------------------------------------------------------------\n");

    printf("name: %s\nlast: %s\nsex: %c\nold: %d\nb_day: %s\n",people1.fio.name, people1.fio.last, people1.sex, people1.old, people1.b_daty);

    printf("------------------------------------------------------------------\n");

    struct person katya = {"Katya", 31};
    struct person* p_katya = &katya;
    p_katya->old = 21;

    printf("name: %s, old: %d\n", katya.name, katya.old);

    printf("----------------Ссылка структуры сама на себя--------------------------------------------------\n");

    struct node tim, bob, tom;
    tim.value = "Tim";
    bob.value = "Bob";
    tom.value = "Tom";

    tim.ptr = &bob;
    bob.ptr = &tom;

    struct node* ptr_node = &tim;

    /*while(ptr_node != NULL)
    {
        //printf("value: %s \n", ptr_node->value); РАБОТАЕТ НО ОШИБКА 
        ptr_node = ptr_node->ptr;
    }*/

    printf("------------------------------------------------------------------\n");

    struct person popa[] = {{"Katya", 23}, {"Bob", 43}, {"Tim", 52}};

    int n = sizeof(popa) / sizeof(*popa);

    for(struct person* p = popa; p < popa + n; p++){
        printf("Name: %s, old: %d\n", p->name, p->old);
    }


    return 0;
}