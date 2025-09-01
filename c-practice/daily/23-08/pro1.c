//Pointer with Array
#include <stdio.h>
int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    for(int i=0; i<3; i++) {
        printf("arr[%d] = %d, *(p+%d) = %d\n", i, arr[i], i, *(p+i));
    }

    return 0;
}

