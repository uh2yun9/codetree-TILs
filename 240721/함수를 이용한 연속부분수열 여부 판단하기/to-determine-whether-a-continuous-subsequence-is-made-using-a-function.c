#include <stdio.h>
#include <stdlib.h>

int is_subsequence(int a[], int b[], int n1, int n2)
{
    for (int i = 0; i <= n1 - n2; i++) {
        int j = 0;
        while (j < n2 && a[i + j] == b[j]) {
            j++;
        }
        if (j == n2) {
            return 1;
        }
    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n1 = 0, n2 = 0;
    scanf("%d %d", &n1, &n2);
    int *a = (int*)malloc(sizeof(int) * n1);
    int *b = (int*)malloc(sizeof(int) * n2);
    
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    if (is_subsequence(a, b, n1, n2)) {
        printf("Yes");
    } else {
        printf("No");
    }

    free(a);
    free(b);
    return 0;
}