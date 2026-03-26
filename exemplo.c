#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[40], sexo;
    int idade;
};
void preencher_vetor(struct Pessoa vet_pessoas[])
{
    int i; 
    i = 0;
    for(i=0; i<3; i++){
        printf("digite o nome %d: \n", i);
        scanf("%s", vet_pessoas[i].nome);
        printf("digite o sexo %d: \n", i);
        scanf(" %c", &vet_pessoas[i].sexo);
        printf("digite o a idade %d: \n", i);
        scanf(" %d", &vet_pessoas[i].idade);
    }

}
void printar_vetor(struct Pessoa vet_pessoas[])
{
int j =0 ;
for (j=0; j<3;j++){
    printf("nome da pessoa: %s \n", vet_pessoas[j].nome);
    printf("sexo da pessoa: %c \n", vet_pessoas[j].sexo);
    printf("idade da pessoa: %d \n", vet_pessoas[j].idade);
}


}
int main()
{
    struct Pessoa vet_pessoas[3];
    preencher_vetor(vet_pessoas);
    printar_vetor(vet_pessoas);


}