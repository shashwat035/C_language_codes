#include <stdio.h>

int main() {
    int sourceArray[] = {1, 2, 3, 4, 5};
    int destinationArray[5]; 
    int length = sizeof(sourceArray) / sizeof(sourceArray[0]); 

    for (int i = 0; i < length; i++) {
        destinationArray[i] = sourceArray[length - 1 - i];
    }

    printf("Source Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", sourceArray[i]);
    }
    
    printf("\n");

    printf("Destination Array (in reverse order): ");
    for (int i = 0; i < length; i++) {
        printf("%d ", destinationArray[i]);
    }
    
    printf("\n");

    return 0;   
}
 