#include <stdio.h>
#define N 100

int arr[N];

int PartAdd(int a1, int a2)
{
    int sum = 0;

    while (a1 <= a2) {
        sum += arr[a1 - 1];
        a1++;
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, m = 0;
    int a1 = 0, a2 = 0;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a1, &a2);
        printf("%d\n", PartAdd(a1, a2));
    }
    return 0;
}