#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inversor(char palavra[]) {
    char inverso[20];
    int i, j = 0;

    for (i = strlen(palavra) - 1; i >= 0; i--) {
        inverso[j] = palavra[i];
        j++;
    }
    inverso[j] = '\0';

    if (strcmp(inverso, palavra) == 0) {
        printf("eh palindromo\n");
    } else {
        printf("nao eh palindromo\n");
    }
}

int main() {
    char palavra[20];

    fgets(palavra, 20, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    inversor(palavra);

    return 0;
}

