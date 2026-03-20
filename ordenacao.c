#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void preencher_nomes(char nomes[][50]);
void ordenacao1 (char nomes[][50]);
void printar(char nomes[][50]);

int main()
{
    char nomes [10][50];
    preencher_nomes(nomes);
    ordenacao1(nomes);
    printar(nomes);

}

void preencher_nomes(char nomes[][50])
{
    printf("Digite os nomes: ");
    int i;
    for (i = 0; i < 10; i++){
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }
}

void ordenacao1 (char nomes[][50])
{
    int j = 0;
    for(j=0; j<9; j++){
        if(strcmp(nomes[j],nomes[j+1]) > 0)
        {
            char nome1[50], nome2[50];
            strcpy(nome1,nomes[j]);
            strcpy(nome2,nomes[j+1]);
            strcpy(nomes[j], nome2);
            strcpy(nomes[j+1], nome1);;
            j=0;
        }
    }
}

void printar(char nomes[][50]){
    int k;
    for(k=0; k<10; k++){
        puts(nomes[k]);
    }
}
