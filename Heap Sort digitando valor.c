#include<stdlib.h>
#include<stdio.h>
#include<time.h>

main(){
	int tamanho_vetor, *vetor,contador,contador2=0,maior,cont,sair=0,menu1;
	int aux;
	
	while(sair==0){
		printf("\n\t\t--------------------------------------\n");
		printf("\n\t\t\tORDENACAO USANDO HEAP SORT\n\n\t\t\t1-GERAR NOVO VETOR\n\t\t\t2-SAIR\n\t\t\t>>>>>");
		printf("\n\t\t--------------------------------------\n");
		scanf("%d",&menu1);
		system("cls");
		
		switch(menu1){
			
			case 1:
				printf("\nINSIRA O TAMANHO DO VETOR:\n");
				scanf("%d",&tamanho_vetor);
				
				vetor = malloc(sizeof(int)* (tamanho_vetor)); 
				srand(time(NULL));
			
				//gerando vetores aleatorios
				for(contador = 0; contador < tamanho_vetor; contador++){
					vetor[contador]= rand()%100;	
				}
				
				//exibindo desordenado
				printf("\n\n Dados nao Ordenados\n\n");
				for(contador2=0; contador2 < tamanho_vetor; contador2++){
					printf("%d ",vetor[contador2]);
				}
				
				heap_sort(vetor, tamanho_vetor);
								
				cont = tamanho_vetor-1;
										
				while(cont >= 0 ){
					//mandando o maior para o começo
					heap_sort(vetor, cont);
					//mandando maior para o final
					for(contador = 0; contador < cont; contador++){
						
						aux = vetor[contador];
						vetor[contador] = vetor[contador+1];
						vetor[contador+1] = aux;
											
					}
					
					heap_sort(vetor, cont);	
					cont--;
				}
				
				//exibindo organizado	
				printf("\n\n Dados nao Ordenados\n\n");			
				for(contador2 = 0; contador2 < tamanho_vetor; contador2++){
					printf("%d ",vetor[contador2]);
					
				}

				printf("\n\n");
				system("pause");
				system("cls");
			break;
			
			case 2:
				printf("\nATE LOGO...");
				sair=1;
				
			break;
				
		}
	}
}

int heap_sort(int *vetor, int tamanho){
	
	int pai_direita, pai_esquerda, aux, contador;

	
	for(contador = tamanho-1;  contador >= 0;  contador-- ){
		
		//descobrindo o a raiz de cada galho
		pai_direita  = (contador / 2) - 1;
		pai_esquerda = (contador - 2) / 2;
		
		//trocando caso a raiz seja manor que o galho da direita
	 	if(vetor[contador] > vetor[pai_direita]){
			
			aux = vetor[contador];
			vetor[contador] = vetor[pai_direita];
			vetor[pai_direita] = aux;			
			
		}
		
		//trocando caso a raiz seja menor que o galhp da esquerda
		else if (vetor[contador-1] > vetor[pai_esquerda] ){

			aux = vetor[contador-1];
			vetor[contador-1] = vetor[pai_esquerda];
			vetor[pai_esquerda] = aux;
			
		}

	}
}
