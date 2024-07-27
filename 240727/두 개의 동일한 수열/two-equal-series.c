#include <stdio.h>
#include <stdlib.h>

int compare(int *a, int *b, int n)
{
    int exist = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                exist++;
            }
        }
    }

    if (exist == n) {
        return 1;
    }  else {
        return 0;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    int *a, *b;
    scanf("%d", &n);
    a = (int*)malloc(sizeof(int) * n);
    b = (int*)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    if (compare(a, b, n) == 1) {
        printf("Yes");
    } else {
        printf("No");
    }
    
    free(a);
    free(b);
    return 0;
}