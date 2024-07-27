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

int Find(int arr[], int n, int k)
{
    return arr[k - 1];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, k = 0;
    int *arr;
    scanf("%d %d", &n, &k);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    increasing(arr, n);
    printf("%d", Find(arr, n, k));
    
    free(arr);
    return 0;
}