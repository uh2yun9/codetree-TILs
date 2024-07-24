#include <stdio.h>

void recursive_star(int n)
{
    if (n == 0) {
        return;
    }
    
    for (int i = 0; i < n; i++) {
         printf("* ");
    }
    printf("\n");
    recursive_star(n - 1);
    for (int i = 0; i < n; i++) {
         printf("* ");
    }
    printf("\n");
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    recursive_star(n);
    return 0;
}