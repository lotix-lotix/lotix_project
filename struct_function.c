#include <stdio.h>
#include <stdlib.h>

struct person{
    char* name;
    int age;
};

void print_person(struct person user){
    printf("Name: %s\t", user.name);
    printf("Age: %d\n", user.age);
}

void change_person(struct person* user){
    user->age = user->age + 5;
}

struct person create_person(char* name, int age){
    struct person user;
    user.name = name;
    user.age = age;
    return user;
}

int main(){
    struct person tom = {"Tom", 21};
    print_person(tom);
    change_person(&tom);
    print_person(tom);

    struct person tim = create_person("Tim", 67);
    print_person(tim);

}