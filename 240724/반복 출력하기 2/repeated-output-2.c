#include <stdio.h>

int print_str(int n, int s)
{
    if (s < n) {
        printf("HelloWorld\n");
        s++;
        return print_str(n, s);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0, s =  0;
    scanf("%d", &n);
    print_str(n, s);
    return 0;
}