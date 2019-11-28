#include <stdio.h>
#include <stdlib.h>


int busca(int v[],int x,int n)
{
    int e,d,m;

    e=-1;
    d=n;

    while(e<d-1)
    {

        m=(e+d)/2;

        if(v[m]<x)
        {
            e=n;

        }
        else
        {
            d=m;
        }
    }

    return v[d];

}
int main()
{
    int num;
    int nums_proibidos;
    int vetor_proibidos[10000];
    int vetor_aux[10000];
    int cont=0;
    int i;

    scanf("%d",&nums_proibidos);


    for(i=0; i<nums_proibidos; i++)
    {

        scanf("%d",&vetor_proibidos[i]);


    }
    i=0;
    while(scanf("%d",&num)!=EOF)
    {

        vetor_aux[i]=num;
        cont++;
        i++;

    }

    for(int i=0; i<cont; i++)
    {

        int retorno=busca(vetor_proibidos,vetor_aux[i],cont);

        printf("%d\n",retorno);

        if(retorno==vetor_aux[i])
        {
            printf("sim\n");
        }
        else
        {
            printf("nao\n");
        }

    }


    return 0;
}
