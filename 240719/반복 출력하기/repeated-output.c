#include <stdio.h>

void printNLines(int n) 
{
    for (int i = 0; i < n; i++) {
        printf("12345^&*()_");
        printf("\n");
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n = 0;
    scanf("%d", &n);
    printNLines(n);
    return 0;
}