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
    cont=i;
    posicao=-1;
   
    for(i=0; i<cont; i++)
        printf("%d | ", vet[i]);
   
    printf("\nInforme o valor a ser incluido no vetor");
    scanf("%d", &valor);

    for(i=0; i<cont && posicao < 0;i++)
    {
        if(vet[i]> valor)
        posicao = i;
    }
    if (cont<100)
    {
        if(posicao<0)
            vet[cont]= valor;
        else
        {
        for (i = cont; i > posicao; i--)
        {
            vet[i]=vet[i-1];

        }
        
        vet[posicao]=valor;
        }
        cont++;
    }
    else
        printf("Nao foi possivel inserir no vetor");
        
    for(i=0; i<cont; i++)
    printf("%d | ", vet[i]);
}