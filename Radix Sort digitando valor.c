#include<stdio.h>
 
// CIN04S1
// Lucas Mathews - 17334977
// Victor Enrique - 17292824

int largest(int a[], int n)
{
    int large = a[0], i;
    for(i = 1; i < n; i++)
    {
        if(large < a[i])
            large = a[i];
    }
    return large;
}
 

void RadixSort(int a[], int n)
{
    int bucket[10][10], bucket_count[10];
    int i, j, k, remainder, NOP=0, divisor=1, large, pass;
 
    large = largest(a, n);
    printf("Dados Ordenados e dado maior: %d\n",large);
    while(large > 0)
    {
        NOP++;
        large/=10;
    }
 
    for(pass = 0; pass < NOP; pass++)
    {
        for(i = 0; i < 10; i++)
        {
            bucket_count[i] = 0;
        }
        for(i = 0; i < n; i++)
        {
            remainder = (a[i] / divisor) % 10;
            bucket[remainder][bucket_count[remainder]] = a[i];
            bucket_count[remainder] += 1;
        }
 
        i = 0;
        for(k = 0; k < 10; k++)
        {
            for(j = 0; j < bucket_count[k]; j++)
            {
                a[i] = bucket[k][j];
                i++;
            }
        }
        divisor *= 10;
 
        for(i = 0; i < n; i++)
            printf("%d  ",a[i]);
        printf("\n");
    }
}
 

int main()
{
    int i, n, a[10];
    printf("Digite o tamanho do vetor :: ");
    scanf("%d",&n);
    printf("Digite os numeros :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    RadixSort(a,n);
    printf("Dados nao ordenados ::  ");
    for(i = 0; i < n; i++)
        printf("%d ",a[i]);
    return 0;
}
