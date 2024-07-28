#include <stdio.h>


typedef struct secret {
    char code[10];
    char place[10];
    int time;
} secret;

int main() {
    // 여기에 코드를 작성해주세요.
    secret m;
    scanf("%s %s %d", m.code, m.place, &m.time);
    printf("secret code : %s\n", m.code);
    printf("meeting point : %s\n", m.place);
    printf("time : %d", m.time);
    return 0;
}