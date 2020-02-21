#include<stdio.h>
#define SIZE 4

int main(){

    int a[] = {3, 4, 5, 6};
    size_t i;
    int offset;
    int *aPtr = a;

    //Print array with array subscript notation
    printf("Array a printed with:\nArray subscript notation:\n");
    for(i = 0; i < SIZE; i++){
        printf("a[%u] = %d\n", i, a[i]);
    }//end for

    //Print array with pointer/offset notation
    printf("\nPointer/offset notation where\n"
           "the pointer is array name:\n");
    for(offset = 0; offset < SIZE; offset++){
        printf("*(a + %d) = %d\n", offset, *(a + offset));
    }//end for

    //Print array with pointer subscript notation
    printf("\nPointer subscript notation:\n");
    for(i = 0; i < SIZE; i++){
        printf("aPtr[%u] = %d\n", i, aPtr[i]);
    }//end for

    //Print array with pointer/offset notation
    printf("\nPointer/offset notation:\n");
    for(offset = 0; offset < SIZE; offset++){
        printf("*(aPtr + %d) = %d\n", offset, *(aPtr + offset));
    }//end for
}//end main
