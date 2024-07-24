#include <stdio.h>
#include <stdlib.h>

int calculate(int arr[], int n, int m)
{
    int sum = 0;
    while (m > 0) {
        sum += arr[m - 1];
        if (m % 2 != 0) {
            m -= 1;
        } else {
            m /= 2;
        }
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, m = 0;
    int *arr;
    scanf("%d %d", &n, &m);
    arr = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }
    printf("%d", calculate(arr, n, m));
    free(arr);
    return 0;
}