#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <time.h>
#include <conio.h>

void quick_sort(int *a, int left, int right);
void mergesort(int *vet, int n);
void sort(int *vet, int *c, int i, int f);
void merge(int *vet, int *c, int i, int m, int f);

int bubble5(){
	int TAM = 5;
    int vVetor[TAM]; 
    int vAux;
    int vAuxiliar;
    int vTemp;
    int vTroca;
    
    srand(time(NULL));
    printf("\nDados nao Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        vVetor[vAux] = (rand() % 5) + 1; // Preenche o vetor randomicamente com valores de 1 a 5
        printf(" %d",vVetor[vAux]);
    }
    
    for( vAuxiliar = TAM-1; vAuxiliar >= 0; vAuxiliar-- ) { 
       for( vTemp = 0; vTemp < vAuxiliar; vTemp++ ) { 
           if( vVetor[vTemp] > vVetor[vTemp+1] ){ 
               vTroca = vVetor[vTemp]; 
               vVetor[vTemp] = vVetor[vTemp+1];
               vVetor[vTemp+1] = vTroca;
           }
       }
   }
    printf("\n\n ");
    printf("\nDados Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        printf(" %d",vVetor[vAux]);
    }
    
    printf("\n\n ");
    system("pause");
}

int bubble10(){
	int TAM = 10;
    int vVetor[TAM]; 
    int vAux;
    int vAuxiliar;
    int vTemp;
    int vTroca;
	
	srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        vVetor[vAux] = (rand() % 9) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for( vAuxiliar = TAM-1; vAuxiliar >= 0; vAuxiliar-- ) { 
       for( vTemp = 0; vTemp < vAuxiliar; vTemp++ ) { 
           if( vVetor[vTemp] > vVetor[vTemp+1] ){ 
               vTroca = vVetor[vTemp]; 
               vVetor[vTemp] = vVetor[vTemp+1];
               vVetor[vTemp+1] = vTroca;
           }
       }
   }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int bubble50(){
	int TAM = 50;
    int vVetor[TAM]; 
    int vAux;
    int vAuxiliar;
    int vTemp;
    int vTroca;
	
	srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        vVetor[vAux] = (rand() % 50) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for( vAuxiliar = TAM-1; vAuxiliar >= 0; vAuxiliar-- ) { 
       for( vTemp = 0; vTemp < vAuxiliar; vTemp++ ) { 
           if( vVetor[vTemp] > vVetor[vTemp+1] ){ 
               vTroca = vVetor[vTemp]; 
               vVetor[vTemp] = vVetor[vTemp+1];
               vVetor[vTemp+1] = vTroca;
           }
       }
   }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int bubble100(){
	int TAM = 100;
    int vVetor[TAM]; 
    int vAux;
    int vAuxiliar;
    int vTemp;
    int vTroca;
	
	srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        vVetor[vAux] = (rand() % 100) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for( vAuxiliar = TAM-1; vAuxiliar >= 0; vAuxiliar-- ) { 
       for( vTemp = 0; vTemp < vAuxiliar; vTemp++ ) { 
           if( vVetor[vTemp] > vVetor[vTemp+1] ){ 
               vTroca = vVetor[vTemp]; 
               vVetor[vTemp] = vVetor[vTemp+1];
               vVetor[vTemp+1] = vTroca;
           }
       }
   }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int bubble1000(){
	int TAM = 1000;
    int vVetor[TAM]; 
    int vAux;
    int vAuxiliar;
    int vTemp;
    int vTroca;

	srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        vVetor[vAux] = (rand() % 1000) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for( vAuxiliar = TAM-1; vAuxiliar >= 0; vAuxiliar-- ) { 
       for( vTemp = 0; vTemp < vAuxiliar; vTemp++ ) { 
           if( vVetor[vTemp] > vVetor[vTemp+1] ){ 
               vTroca = vVetor[vTemp]; 
               vVetor[vTemp] = vVetor[vTemp+1];
               vVetor[vTemp+1] = vTroca;
           }
       }
   }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int bubble10000(){
	int TAM = 10000;
    int vVetor[TAM]; 
    int vAux;
    int vAuxiliar;
    int vTemp;
    int vTroca;
    
    srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        vVetor[vAux] = (rand() % 10000) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for( vAuxiliar = TAM-1; vAuxiliar >= 0; vAuxiliar-- ) { 
       for( vTemp = 0; vTemp < vAuxiliar; vTemp++ ) { 
           if( vVetor[vTemp] > vVetor[vTemp+1] ){ 
               vTroca = vVetor[vTemp]; 
               vVetor[vTemp] = vVetor[vTemp+1];
               vVetor[vTemp+1] = vTroca;
           }
       }
   }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ ){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int bubble_menu(){
	char op ='0';
	
	while(op != '8'){
		system("cls");
		fflush(stdin);
		
		printf("\n===================================================================================================");
  		printf("\n\n                                       TAMANHOS DOS VETORES - BUBBLE\n\n");
  		printf("===================================================================================================\n");
		printf("1. 05\n");
		printf("2. 10\n");
		printf("3. 50\n");
		printf("4. 100\n");
		printf("5. 1000\n");
		printf("6. 10000\n");
		printf("7. Retornar ao menu principal\n");
		printf("\nEscolha a sua opcao:\n");
		op=getche();
		system("cls");
		
		if (op != '8'){
			switch (op){
				case '1': bubble5();   break;
				case '2': bubble10();   break;
				case '3': bubble50();   break;
				case '4': bubble100();   break;
				case '5': bubble1000();   break;
				case '6': bubble10000();   break;
				case '7': main();   break;
				default: printf("Por favor escolha somente uma das opcoes... aperte algo..."); getch(); break;
			}
		}		
	}
}

int insertion5(){
	int TAM = 5;
    int vVetor[TAM];
    int vAux;
    int vAuxiluar;
    int vTemp;
    int vTroca;

    srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 5) + 1;
        printf("%d ",vVetor[vAux]);
    }
    
    for (vAuxiluar=1; vAuxiluar < TAM; vAuxiluar++){
        vTemp = vAuxiluar; 
        while (vVetor[vTemp] < vVetor[vTemp-1]){
            vTroca          = vVetor[vTemp];
            vVetor[vTemp]   = vVetor[vTemp-1];
            vVetor[vTemp-1] = vTroca;
            vTemp--; 

            if (vTemp == 0) 
                break;
        }
    }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf("%d ",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int insertion10(){
	int TAM = 10;
    int vVetor[TAM];
    int vAux;
    int vAuxiluar;
    int vTemp;
    int vTroca;

    srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 10) + 1;
        printf("%d ",vVetor[vAux]);
    }
    
    for (vAuxiluar=1; vAuxiluar < TAM; vAuxiluar++){
        vTemp = vAuxiluar; 
        while (vVetor[vTemp] < vVetor[vTemp-1]){
            vTroca          = vVetor[vTemp];
            vVetor[vTemp]   = vVetor[vTemp-1];
            vVetor[vTemp-1] = vTroca;
            vTemp--; 

            if (vTemp == 0) 
                break;
        }
    }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf("%d ",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int insertion50(){
	int TAM = 50;
    int vVetor[TAM];
    int vAux;
    int vAuxiluar;
    int vTemp;
    int vTroca;

    srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 50) + 1;
        printf("%d ",vVetor[vAux]);
    }
    
    for (vAuxiluar=1; vAuxiluar < TAM; vAuxiluar++){
        vTemp = vAuxiluar; 
        while (vVetor[vTemp] < vVetor[vTemp-1]){
            vTroca          = vVetor[vTemp];
            vVetor[vTemp]   = vVetor[vTemp-1];
            vVetor[vTemp-1] = vTroca;
            vTemp--; 

            if (vTemp == 0) 
                break;
        }
    }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf("%d ",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int insertion100(){
	int TAM = 100;
    int vVetor[TAM];
    int vAux;
    int vAuxiluar;
    int vTemp;
    int vTroca;

    srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 100) + 1;
        printf("%d ",vVetor[vAux]);
    }
    
    for (vAuxiluar=1; vAuxiluar < TAM; vAuxiluar++){
        vTemp = vAuxiluar; 
        while (vVetor[vTemp] < vVetor[vTemp-1]){
            vTroca          = vVetor[vTemp];
            vVetor[vTemp]   = vVetor[vTemp-1];
            vVetor[vTemp-1] = vTroca;
            vTemp--; 

            if (vTemp == 0) 
                break;
        }
    }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf("%d ",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int insertion1000(){
	int TAM = 1000;
    int vVetor[TAM];
    int vAux;
    int vAuxiluar;
    int vTemp;
    int vTroca;

    srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 1000) + 1;
        printf("%d ",vVetor[vAux]);
    }
    
    for (vAuxiluar=1; vAuxiluar < TAM; vAuxiluar++){
        vTemp = vAuxiluar; 
        while (vVetor[vTemp] < vVetor[vTemp-1]){
            vTroca          = vVetor[vTemp];
            vVetor[vTemp]   = vVetor[vTemp-1];
            vVetor[vTemp-1] = vTroca;
            vTemp--; 

            if (vTemp == 0) 
                break;
        }
    }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf("%d ",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int insertion10000(){
	int TAM = 10000;
    int vVetor[TAM];
    int vAux;
    int vAuxiluar;
    int vTemp;
    int vTroca;

    srand(time(NULL));
    printf("\n\t Dados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 10000) + 1;
        printf("%d ",vVetor[vAux]);
    }
    
    for (vAuxiluar=1; vAuxiluar < TAM; vAuxiluar++){
        vTemp = vAuxiluar; 
        while (vVetor[vTemp] < vVetor[vTemp-1]){
            vTroca          = vVetor[vTemp];
            vVetor[vTemp]   = vVetor[vTemp-1];
            vVetor[vTemp-1] = vTroca;
            vTemp--; 

            if (vTemp == 0) 
                break;
        }
    }

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf("%d ",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

int insertion_menu(){
	char op ='0';
	
	while(op != '8'){
		system("cls");
		fflush(stdin);
		
		printf("\n===================================================================================================");
  		printf("\n\n                                       TAMANHOS DOS VETORES - INSERTION\n\n");
  		printf("===================================================================================================\n");
		printf("1. 05\n");
		printf("2. 10\n");
		printf("3. 50\n");
		printf("4. 100\n");
		printf("5. 1000\n");
		printf("6. 10000\n");
		printf("7. Retornar ao menu principal\n");
		printf("\nEscolha a sua opcao:\n");
		op=getche();
		system("cls");
		
			if (op != '8'){
				switch (op){
					case '1': insertion5();   break;
					case '2': insertion10();   break;
					case '3': insertion50();   break;
					case '4': insertion100();   break;
					case '5': insertion1000();   break;
					case '6': insertion10000();   break;
					case '7': main();   break;
					default: printf("Por favor escolha somente uma das opcoes... aperte algo..."); getch(); break;
				}
			}		
	}
}

int selection5(){
	int TAM = 5;
    int vVetor[TAM]; 
    int vAux;
    int vMenor;
    int vAuxiliar;
    int vTemp;
    int vTroca;

    srand ( time(NULL) );
    printf("\nDados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 5) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for(vAux=0; vAux < TAM-1; vAux++){
    vMenor = vAux; 
    for (vTemp=vAux+1; vTemp < TAM; vTemp++){
        if (vVetor[vTemp] < vVetor[vMenor]){
                vMenor = vTemp; 
        }
	}
    if (vMenor != vAux){
        vTroca         = vVetor[vAux];
        vVetor[vAux]   = vVetor[vMenor];
        vVetor[vMenor] = vTroca;
        }
	}

    printf("\n\n");
	printf("\nDados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
    return 0;
}

int selection10(){
	int TAM = 10;
    int vVetor[TAM]; 
    int vAux;
    int vMenor;
    int vAuxiliar;
    int vTemp;
    int vTroca;

    srand ( time(NULL) );
    printf("\nDados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 9) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for(vAux=0; vAux < TAM-1; vAux++){
    vMenor = vAux; 
    for (vTemp=vAux+1; vTemp < TAM; vTemp++){
        if (vVetor[vTemp] < vVetor[vMenor]){
                vMenor = vTemp; 
        }
	}
    if (vMenor != vAux){
        vTroca         = vVetor[vAux];
        vVetor[vAux]   = vVetor[vMenor];
        vVetor[vMenor] = vTroca;
        }
	}

    printf("\n\n");
	printf("\nDados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
    return 0;
}

int selection50(){
	int TAM = 50;
    int vVetor[TAM]; 
    int vAux;
    int vMenor;
    int vAuxiliar;
    int vTemp;
    int vTroca;

    srand ( time(NULL) );
    printf("\nDados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 50) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for(vAux=0; vAux < TAM-1; vAux++){
    vMenor = vAux; 
    for (vTemp=vAux+1; vTemp < TAM; vTemp++){
        if (vVetor[vTemp] < vVetor[vMenor]){
                vMenor = vTemp; 
        }
	}
    if (vMenor != vAux){
        vTroca         = vVetor[vAux];
        vVetor[vAux]   = vVetor[vMenor];
        vVetor[vMenor] = vTroca;
        }
	}

    printf("\n\n");
	printf("\nDados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
    return 0;
}

int selection100(){
	int TAM = 100;
    int vVetor[TAM]; 
    int vAux;
    int vMenor;
    int vAuxiliar;
    int vTemp;
    int vTroca;

    srand ( time(NULL) );
    printf("\nDados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 100) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for(vAux=0; vAux < TAM-1; vAux++){
    vMenor = vAux; 
    for (vTemp=vAux+1; vTemp < TAM; vTemp++){
        if (vVetor[vTemp] < vVetor[vMenor]){
                vMenor = vTemp; 
        }
	}
    if (vMenor != vAux){
        vTroca         = vVetor[vAux];
        vVetor[vAux]   = vVetor[vMenor];
        vVetor[vMenor] = vTroca;
        }
	}

    printf("\n\n");
	printf("\nDados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
    return 0;
}

int selection1000(){
	int TAM = 1000;
    int vVetor[TAM]; 
    int vAux;
    int vMenor;
    int vAuxiliar;
    int vTemp;
    int vTroca;

    srand ( time(NULL) );
    printf("\nDados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 1000) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for(vAux=0; vAux < TAM-1; vAux++){
    vMenor = vAux; 
    for (vTemp=vAux+1; vTemp < TAM; vTemp++){
        if (vVetor[vTemp] < vVetor[vMenor]){
                vMenor = vTemp; 
        }
	}
    if (vMenor != vAux){
        vTroca         = vVetor[vAux];
        vVetor[vAux]   = vVetor[vMenor];
        vVetor[vMenor] = vTroca;
        }
	}

    printf("\n\n");
	printf("\nDados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
    return 0;
}

int selection10000(){
	int TAM = 10000;
    int vVetor[TAM]; 
    int vAux;
    int vMenor;
    int vAuxiliar;
    int vTemp;
    int vTroca;

    srand ( time(NULL) );
    printf("\nDados nao Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        vVetor[vAux] = (rand() % 10000) + 1;
        printf(" %d",vVetor[vAux]);
    }

    for(vAux=0; vAux < TAM-1; vAux++){
    vMenor = vAux; 
    for (vTemp=vAux+1; vTemp < TAM; vTemp++){
        if (vVetor[vTemp] < vVetor[vMenor]){
                vMenor = vTemp; 
        }
	}
    if (vMenor != vAux){
        vTroca         = vVetor[vAux];
        vVetor[vAux]   = vVetor[vMenor];
        vVetor[vMenor] = vTroca;
        }
	}

    printf("\n\n");
	printf("\nDados Ordenados\n\n");
    for (vAux=0; vAux < TAM; vAux++){
        printf(" %d",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
    return 0;
}

int selection_menu(){
	char op ='0';
	
	while(op != '8'){
		system("cls");
		fflush(stdin);
		
		printf("\n===================================================================================================");
  		printf("\n\n                                       TAMANHOS DOS VETORES - SELECTION\n\n");
  		printf("===================================================================================================\n");
		printf("1. 05\n");
		printf("2. 10\n");
		printf("3. 50\n");
		printf("4. 100\n");
		printf("5. 1000\n");
		printf("6. 10000\n");
		printf("7. Retornar ao menu principal\n");
		printf("\nEscolha a sua opcao:\n");
		op=getche();
		system("cls");
		
			if (op != '8'){
				switch (op){
					case '1': selection5();   break;
					case '2': selection10();   break;
					case '3': selection50();   break;
					case '4': selection100();   break;
					case '5': selection1000();   break;
					case '6': selection10000();   break;
					case '7': main();   break;
					default: printf("Por favor escolha somente uma das opcoes... aperte algo..."); getch(); break;
				}
			}		
	}
}

void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j){
        while(a[i] < x && i < right){
            i++;
        }
        while(a[j] > x && j > left){
            j--;
        }
        if(i <= j){
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left){
        quick_sort(a, left, j);
    }
    if(i < right){
        quick_sort(a, i, right);
    }
}

int quick_sort_menu(){
	char op ='0';
	int TAM;
	int i, vet[TAM];
	
	while(op != '8'){
		system("cls");
		fflush(stdin);
		
		printf("\n===================================================================================================");
  		printf("\n\n                                       TAMANHOS DOS VETORES - QUICK SORT\n\n");
  		printf("===================================================================================================\n");
		printf("1. 05\n");
		printf("2. 10\n");
		printf("3. 50\n");
		printf("4. 100\n");
		printf("5. 1000\n");
		printf("6. 10000\n");
		printf("7. Retornar ao menu principal\n");
		printf("\nEscolha a sua opcao:\n");
		op=getche();
		system("cls");
		
		if (op != '8'){
			switch (op){
				case '1':
					TAM = 5;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause");  
				break;
				case '2': 
					TAM = 10;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause");  
				break;
				case '3':
					TAM = 50;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause"); 
 				break;
 				case '4':
 					TAM = 100;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause"); 
 				break;
 				case '5':
					TAM = 1000;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause"); 
 				break;
 				case '6':
					TAM = 10000;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause"); 
 				break;
 				case '7': main();   break;
			}
		}		
	}
}

void mergesort(int *vet, int n){
	int *c = malloc(sizeof(int) * n);
	sort(vet, c, 0, n - 1);
	free(c);
}

void sort(int *vet, int *c, int i, int f) {
	if (i >= f){
		return;
	}
	int m = (i + f) / 2;
	sort(vet, c, i, m);
	sort(vet, c, m + 1, f);
	if (vet[m] <= vet[m + 1]){
		return;
	}
	merge(vet, c, i, m, f);
}

void merge(int *vet, int *c, int i, int m, int f) {
	int z,
	ivet = i, ic = m + 1;
	for (z = i; z <= f; z++) c[z] = vet[z];
	z = i;
	while (ivet <= m && ic <= f){
    	if 
			(c[ivet] < c[ic]) vet[z++] = c[ivet++];
    	else 
			vet[z++] = c[ic++];
  	}
  	while (ivet <= m) vet[z++] = c[ivet++];
  	while (ic <= f) vet[z++] = c[ic++];
}

int merge_menu(){
	char op ='0';
	int TAM;
	int i, vet[TAM];
	
	while(op != '8'){
		system("cls");
		fflush(stdin);
		
		printf("\n===================================================================================================");
  		printf("\n\n                                       TAMANHOS DOS VETORES - MERGE\n\n");
  		printf("===================================================================================================\n");
		printf("1. 05\n");
		printf("2. 10\n");
		printf("3. 50\n");
		printf("4. 100\n");
		printf("5. 1000\n");
		printf("6. 10000\n");
		printf("7. Retornar ao menu principal\n");
		printf("\nEscolha a sua opcao:\n");
		op=getche();
		system("cls");
		
		if (op != '8'){
			switch (op){
				case '1':
					TAM = 5;
					
    				srand ( time(NULL) );
    				printf("\n\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
    					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}
					printf("\n\nDados Ordenados\n\n");
  					mergesort(vet, TAM);
  					for (i = 0; i < TAM; i++) printf("%d ", vet[i]);

  					printf("\n\n");
 					system("pause"); 
				break;
				case '2': 
					TAM = 10;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause");  
				break;
				case '3':
					TAM = 50;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause"); 
 				break;
 				case '4':
 					TAM = 100;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause"); 
 				break;
 				case '5':
					TAM = 1000;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause"); 
 				break;
 				case '6':
					TAM = 10000;
					
				    srand ( time(NULL) );
    				printf("\nDados nao Ordenados\n\n");
    				for ( i=0; i<TAM; i++ ){
       					vet[i] = (rand() % TAM) + 1;
        				printf("%d ",vet[i]);
    				}

 					quick_sort(vet, 0, TAM - 1);
 
 					printf("\n\nDados Ordenados\n\n");
 					for(i = 0; i < TAM; i++){
  						printf("%d ", vet[i]);
 					}
 					printf("\n\n");
 					system("pause"); 
 				break;
 				case '7': main();   break;
			}
		}		
	}
}

int main(){
	char op ='0';
	system("color 1F");
	
	fflush(stdin);
	system("cls");
			
	while (op != '6'){
		system("cls");
		fflush(stdin);
		
		printf("\n===================================================================================================");
  		printf("\n\n                                            MENU PRINCIPAL\n\n");
  		printf("===================================================================================================\n");
		printf("1. Bubble\n");
		printf("2. Insertion\n");
		printf("3. Selection\n");
		printf("4. Quick Sort\n");
		printf("5. Merge\n");
		printf("6. Sair do programa:\n");
		printf("\nEscolha a sua opcao:\n");
		op=getche();
		system("cls");
		if (op != '6'){
			switch (op){
				case '1': bubble_menu();   break;
				case '2': insertion_menu();   break;
				case '3': selection_menu();   break;
				case '4': quick_sort_menu();   break;
				case '5': merge_menu();   break;
				default: printf("\n===================================================================================================");
  						 printf("\n\n                                            MENU PRINCIPAL\n\n");
  						 printf("===================================================================================================\n");
						 printf("\n\n\n\nPor favor escolha somente uma das opcoes... aperte algo..."); getch(); break;
			}
		}
	}
	return (0);
}
