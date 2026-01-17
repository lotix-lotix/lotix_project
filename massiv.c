#include <stdio.h>

int main(){
    int array1[5] = {5, 34, 12, 4, 567};
    int array2[] = {5, 34, 12, 4, 567};
    int array3[10] = {0};
    int array5[] = {1, [2] = 6, 3, 4, 8};

    int* ptr_ar = array1;

    printf("len ptr_ar = %d\n", sizeof(ptr_ar));

    ptr_ar += 3;
    *ptr_ar = 67;

    printf("len ptr_ar = %d\n", sizeof(ptr_ar));

    for(int i = 0; i < sizeof(array1) / sizeof(*array1); i++)
        printf("%d\t", *(array1+i));

    int x = *ptr_ar;
    printf("\nx = %d", x);
    x = *(ptr_ar+1);
    printf("\nx = %d", x);


}