#include <stdio.h>
int main()
{
    int vet [100], i, valor, cont, posicao;
    printf("informe 10 valores inteiros em ordem crescente \n");
    for (i=0; i<10; i++)
    {
        if (i ==0)
            scanf("%d", &vet[i]);
        else
        {
            scanf("%d", &vet[i]);
            while(vet[i]<vet[i-1])
            {
                printf("Digite um valor maior que %d \n", vet[i-1]);
                scanf("%d", &vet[i]);

            }
        }
    }
    cont = i;
    posicao = -1;

    for(i=0; i<cont; i++)
        printf("%d | ", vet[i]);

    printf("\n Digite o numero que deseja remover: ");
    scanf("%d", &valor);
    for(i=0; i<cont && posicao==-1; i++)   
    {
        if(valor == vet[i]) 
            posicao = i;
    }
    if(posicao>=0)
    {
        for (i = posicao; i < cont-1; i++)
        {
            vet[i]=vet[i+1];
        }
        cont--;
    }
    else
    printf("elemento nao encontrado no vetor");

    for(i=0; i<cont; i++)
        printf("%d | ", vet[i]);
}
