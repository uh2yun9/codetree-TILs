#include <stdio.h>
#include <stdlib.h>

void absolute_value(int n, int arr[])
{
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] *= -1;
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
        int temp = 0;
        scanf("%d", &temp);
        arr[i] = temp;
    }

    absolute_value(n, arr);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}