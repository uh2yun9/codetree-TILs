#include <stdio.h>
#include <stdlib.h>

void div_even(int n, int arr[])
{
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] /= 2;
        }
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    div_even(n, arr);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}