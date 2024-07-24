#include <stdio.h>

void print_star(int n, int s)
{
    if (n < s) {
        return;
    }

    for (int i = 0; i < s; i++) {
        printf("*");
        
    }
    printf("\n");
    s++;
    print_star(n, s);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 1;
    int s = 1;
    scanf("%d", &n);
    print_star(n, s);

    return 0;
}