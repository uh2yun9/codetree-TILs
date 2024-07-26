#include <stdio.h>
#include <stdlib.h>

int max_value(int n, int *arr)
{
    if (n == 1) {
        return arr[0];
    }

    int max = max_value(n - 1, arr);
    if (max < arr[n - 1]) {
        max = arr[n-1];
    }
    return max;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, val = 0;
    int *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", max_value(n, arr));

    free(arr);
    return 0;
}