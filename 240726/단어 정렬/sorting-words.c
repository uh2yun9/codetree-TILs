#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

void sortWords(char *words[], int n) {
    qsort(words, n, sizeof(char *), compare);
}

int main() {
    int n = 0;
    scanf("%d", &n);

    char **words = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
        words[i] = (char *)malloc(100 * sizeof(char));
    }
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    sortWords(words, n);
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    for (int i = 0; i < n; i++) {
        free(words[i]);
    }
    free(words);
    return 0;
}