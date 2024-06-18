#include <iostream>

void behind(int *, int);

int main(int argc, char *argv[])
{

    int array[10] = {8, 12, 7, 15, 11 };
    int N = 5;

    printf("pointer of array %p\n", array);
    for (int i=0; i<N; i++) printf("adresa of %d je %p\n", array[i], &array[i]);


    int *array2 = array;
    //int array3 = array;

    printf("pointer of array2 %p\n", array2);

    behind(array2, N);

    for (int i=0; i<N; i++) printf("%d\n", array[i]);
}

void behind(int *newArray, int N) {
    printf("pointer of newArray %p\n", newArray);

    int max = 0;
    for (int i=0; i<N; i++) if (newArray[i] > max) max = newArray[i];
    for (int i=0; i<N; i++) newArray[i] = max - newArray[i];
}