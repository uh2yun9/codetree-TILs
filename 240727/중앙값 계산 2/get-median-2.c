#include <stdio.h>
#include <stdlib.h>

void increasing(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void centerValue(int arr[], int n)
{
    int copy[100];
    for (int i = 0; i < n; i++) {
        copy[i] = arr[i];
        increasing(copy, i + 1);
        if (i % 2 == 0) {
            printf("%d ", copy[i / 2]);
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(sizeof(int) * n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    centerValue(arr, n);

    free(arr);
    return 0;
}