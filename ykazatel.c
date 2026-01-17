#include <stdio.h>

int main(){
    int arg = 4;
    int* ptr_arg = &arg;
    char* ptr_arg_bit = (char*)ptr_arg;

    *ptr_arg = 100;

    printf("*ptr = %d, *ptr_arg_bit = %c, arg = %d\n\n", *ptr_arg, *ptr_arg_bit, arg);

    ptr_arg_bit += 2;
    *ptr_arg_bit = 3;

    printf("*ptr = %d, *ptr_arg_bit = %c, arg = %d", *ptr_arg, *ptr_arg_bit, arg);

    
    
    
    return 0;
}