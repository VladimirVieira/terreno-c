#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "alturaPontos.h"
#include "imprimir.h"

int main(int argc, char *argv[]) {
int n=7,pot=1,i,fd;
char nome[50];
		

	
//FILE � um struct predefinido que vai ser utilizado no canal de comunica�o
//w indica o modo de opera�o, no caso, ser� a escrita
//fopen faz aloca�o din�mica 
FILE *arquivo = fopen("imagem.ppm","w");
	
if (arquivo==NULL){
		
  printf("Erro na abertura do arquivo \n");
		
return 1;
}else{
  //obten�o do tamanho do vetor
  for(i=0;i<n;i++){
    pot=pot*2;
  }
  pot=pot+1;
	
  //obten�o de n�meros aleatorios a partir do srand em rela�o ao tempo
  srand(time(NULL));
	
  //obten�o do tamanho do vetor que apresentar� os valores da altitude
  int monte[pot];
    	
  //preenchendo todo o vetor com altitudes zero
  for(i=0;i<pot;i++){
    monte[i]=0;
  }
  //rand foi usado para criar valores aleatorios nas extremidades e esse valor fica compreendido entre 1 e 10
  monte[pot-1]=rand()%10 + 1;
  monte[0]= rand()%10 + 1;
		
		
  //obtenção do fator de deslocamento
  printf("Digite o valor do fator de deslocamento(5-10):");
  scanf("%d",&fd);
	
		
  //chama fun�o monteEsquerdo, ela ir� calcular os valores das altitudes entre a extremidades
  alturaPontos(pot-1,monte,fd);
	
  //chama a fun�o imprimir, nela a vari�vel arquivo vai receber os valores de monte e transformar em valores para um arquivo ppm
  imprimir(monte,arquivo);
		
  //libera o canal de comunica�o
  fclose(arquivo);
} 
	return 0;
}
