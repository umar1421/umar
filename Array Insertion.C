#include <stdio.h>

int main(){
    int arr[8] = {10,20,30,40,50};
    int size = 5;

    arr[size] = 60;
    size++;

    printf("updated array: ");
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}
