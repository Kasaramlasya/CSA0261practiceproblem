#include <stdio.h>
int main() {
    int arr[] = {1, 2, 4, 5, 4, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n-1; k++) {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Resultant Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
