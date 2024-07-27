#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    int n, k;
    char t[100];
    scanf("%d %d %s", &n, &k, t);
    
    char **arr = malloc(n * sizeof(char *));
    char buffer[100];

    for (int i = 0; i < n; i++) {
        scanf("%s", buffer);
        arr[i] = malloc((strlen(buffer) + 1) * sizeof(char));
        strcpy(arr[i], buffer);
    }
    
    char **filtered = malloc(n * sizeof(char *));
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (strncmp(arr[i], t, strlen(t)) == 0) {
            filtered[count] = arr[i];
            count++;
        }
    }

    qsort(filtered, count, sizeof(char *), compare);
    
    printf("%s", filtered[k - 1]);
    
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    free(filtered);
    return 0;
}