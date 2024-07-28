#include <stdio.h>

typedef struct spy {
    char name[10];
    int score;
} spy;

int compare(spy list[])
{
    int min = 0;

    for (int i = 1; i < 5; i++) {
        if (list[min].score > list[i].score) {
            min = i;
        }
    }
    return min;
}

int main() {
    // 여기에 코드를 작성해주세요.
    spy s[5];
    int min = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%s %d", s[i].name, &s[i].score);
    }

    min = compare(s);
    printf("%s %d", s[min].name, s[min].score);
    return 0;
}