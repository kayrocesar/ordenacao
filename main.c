#include <stdio.h>
#include <stdlib.h>


int busca(int v[],int x,int n)
{
    int retorno=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==x)
        {
           retorno++;
            break;
        }

    }
    if(retorno==0){
        return 0;
    }
    else{
        return 1;
    }

}
int main()
{
    int num;
    int nums_proibidos;
    int vetor_proibidos[100];
    int vetor_aux[100];
    int cont=0;
    int i;



    scanf("%d",&nums_proibidos);

    for(int i=0; i<nums_proibidos; i++)
    {


        scanf("%d",&vetor_proibidos[i]);

    }
    int j=0;
    while(scanf("%d",&num)!=EOF)
    {



        vetor_aux[j]=num;
        j++;
    }


    for(int i=0; i<j; i++)
    {

        int retorno=busca(vetor_proibidos,vetor_aux[i],nums_proibidos);

        if(retorno==1)
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
