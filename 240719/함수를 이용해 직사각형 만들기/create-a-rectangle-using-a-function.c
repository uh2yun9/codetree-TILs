#include <stdio.h>

void printRectangle(int r, int c)
{
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("1");
        }
        printf("\n");
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int row = 0, col = 0;
    scanf("%d %d", &row, &col);
    printRectangle(row, col);
    return 0;
}