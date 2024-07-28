#include <stdio.h>
#include <string.h>

typedef struct user {
    char id[10];
    int lv;
} user;

int main() {
    // 여기에 코드를 작성해주세요.
    user user1;
    user user2;

    strcpy(user1.id, "codetree");
    user1.lv = 10;
    printf("user %s lv %d\n", user1.id, user1.lv);

    scanf("%s %d", user2.id, &user2.lv);
    printf("user %s lv %d", user2.id, user2.lv);

    return 0;
}