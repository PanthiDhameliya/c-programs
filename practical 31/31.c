
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int initial_size, new_size;
    char *summary;

    printf("Enter initial size of summary: ");
    scanf("%d", &initial_size);
    getchar();

    summary = (char *)calloc(initial_size, sizeof(char));
    if (summary == NULL) return 1;

    printf("Enter initial summary: ");
    fgets(summary, initial_size, stdin);

    printf("Enter new size for updated summary: ");
    scanf("%d", &new_size);
    getchar();

    summary = (char *)realloc(summary, new_size * sizeof(char));
    if (summary == NULL) return 1;

    printf("Enter updated summary: ");
    fgets(summary, new_size, stdin);

    printf("Updated Summary:\n%s", summary);

    free(summary);
    return 0;
}

