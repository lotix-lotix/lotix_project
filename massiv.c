#include <stdio.h>

int main(){
    int array1[6] = {5, 34, 12, 4, 567};
    int array2[] = {5, 34, 12, 4, 567};
    int array3[40] = {0};
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
    printf("\nx = %d\n", x);

    int size1 = sizeof(array1) / sizeof(*array1);
    int size3 = sizeof(array3) / sizeof(*array3);
    int size = (size1 < size3) ? size1 : size3;

    // КОПИРОВАНИЕ МАССИВА

    for(int i = 0; i < size; i++){
        array3[i] = array1[i];
    }

    for(int i = 0; i < size; i++){
        printf("%d ",array3[i]);
    }

    printf("\n\n");

    // ВСТАВКА В МАССИВ

    for(int i = size - 1; i >= 0; i--){
        array1[i] = array1[i - 1];
        if(i == 2){
            array1[i] = 6767;
            break;
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d ",array1[i]);
    }

}