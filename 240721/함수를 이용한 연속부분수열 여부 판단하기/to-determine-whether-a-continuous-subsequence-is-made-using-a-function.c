#include <stdio.h>
#include <stdlib.h>

int progression(int a[], int b[], int n1, int n2)
{
    int i = 0, j = 0;

    while (j != n2) {
        if (b[j] != a[i]) {
            i++;
        } else {
            i++;
            j++;
        }
        if (i == n1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);
    int *a = (int*)malloc(sizeof(int) * n1);
    int *b = (int*)malloc(sizeof(int) * n2);
    if (progression(a, b, n1, n2) == 1) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}