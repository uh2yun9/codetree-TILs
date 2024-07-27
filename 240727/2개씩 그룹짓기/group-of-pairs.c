#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int leastMaxValue(int arr[], int n)
{
    int l = n * 2;
    int *g;
    g = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        g[i] = arr[i] + arr[l - i - 1];
    }

    int min = g[0];
    for (int i = 1; i < n; i++) {
        if (min < g[i]) {
            min = g[i];
        }
    }

    free(g);
    return min;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int *arr;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * 2 * n);

    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }

    increasing(arr, 2 * n);
    printf("%d", leastMaxValue(arr, n));

    free(arr);
    return 0;
}