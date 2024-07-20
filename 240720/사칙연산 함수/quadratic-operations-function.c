#include <stdio.h>

int add(int a, int b)
{
    printf("%d + %d = %d", a, b, a + b);
}

int sub(int a, int b)
{
    printf("%d - %d = %d", a, b, a - b);
}

int div(int a, int b)
{
    printf("%d / %d = %d", a, b, a / b);
}

int mul(int a, int b)
{
    printf("%d * %d = %d", a, b, a * b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 0, b = 0;
    char c;
    scanf("%d %c %d", &a, &c, &b);
    
    switch(c) {
        case '+':
            add(a, b);
            break;
        case '-':
            sub(a, b);
            break;
        case '/':
            div(a, b);
            break;
        case '*':
            mul(a, b);
            break;
        default:
            printf("False");
    }
    return 0;
}