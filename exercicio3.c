#include<stdio.h>
void preencher_matriz(int lin, int col, int matriz[][col])
{
    int i, j;
    printf("entre com os elementos da matriz\n");
    for(i=0; i<lin; i++)
        for(j=0; j<col;j++)
            scanf("%d",&matriz[i][j]);


}

void imprimir_matriz(int lin, int col, int matriz[][col])
{
    int i,j;
    for(i=0; i<lin; i++)
    {
        for(j=0; j<col; j++)
            printf("%d", matriz[i][j]);
        printf("\n");
    }
}

int main()
{
    int mat[2][2];
    preencher_matriz(2,2,mat);
    imprimir_matriz(2,2,mat);
}