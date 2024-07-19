#include <stdio.h>

void printStarts() 
{
    for (int i = 0; i < 10; i++) {
        printf("*");
    }
    printf("\n");
}
int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 5; i++) {
        printStarts();
    }
    return 0;
}