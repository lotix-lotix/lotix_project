#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void* fill_array(short* data, size_t* lenght, size_t* compateti, short value)
{
    data[*lenght] = value;
    (*lenght)++;

    if(*lenght >= *compateti){
        *compateti *= 2;
        //short* ar = malloc(*compateti * sizeof(*ar));
        short* ar = realloc(data, *compateti * sizeof(*ar));
        if(ar == NULL)
            return data;

        data = ar;
    }

    return data;
}

int main(){
    size_t lenght = 0;
    size_t compateti = 10;
    short* data = malloc(compateti * sizeof(*data));

    for(int i = 0; i < 11; i++){
        data = fill_array(data, &lenght, &compateti, rand() % 40 - 20);
    }

    printf("lenght = %d, compateti = %d\n", lenght, compateti);

    for(int i = 0; i < lenght; i++){
        printf("%d ", data[i]);
    }
    return 0;
}