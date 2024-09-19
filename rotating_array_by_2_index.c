#include <stdio.h>

int main() {
    int n, i;
    int last1, last2; 

    printf("ENTER THE NUMBER: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (i = 0; i < n; i++) {
        printf("ENTER ELEMENT %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    if (n > 1) {
        last1 = arr[n - 1]; 
        last2 = arr[n - 2]; 

     
        for (i = n - 1; i >= 2; i--) {
            arr[i] = arr[i - 2];
        }

       
        arr[0] = last2;
        arr[1] = last1;
    }

    
    printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
