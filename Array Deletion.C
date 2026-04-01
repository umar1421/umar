#include <stdio.h>

int main(){
    int arr[6] = {10,20,30,40,50};
    int size = 5;

    for (int i= 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    printf("updated array:  ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
