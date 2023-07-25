#include <stdlib.h>
#include "alturaPontos.h"

void alturaPontos(int p, int monte[p],int fd){
int pontos=p,i,inic=-1,fim=-1,z=0,w=0,j,fator;
	
fator=fd;

//calcula o ponto do meio a partir da media das extremidades
for(i=0;i<=100;i++){
	for(j=0;j<=pontos;j++){
		if(monte[j]==0 && monte[j-1]!=0){
			//armazena o valor mais a esquerda do vetor monte
			inic=monte[j-1];
				
			//armazena a posi�ao do valor que fica mais a esqueda do vetor
			z=j;
		}
		if(monte[j]!=0 && monte[j-1]==0){
			//armazena o valor mais a direita do vetor monte
			fim=monte[j]+rand()%fator;
				
			//armazena a posi�ao do valor que fica mais a direita do vetor monte
			w=j;
		}
		if(inic!=-1 && fim!=-1){
			//identifica o ponto do meio a partir da meio a partir da media das extremidades
			monte[(z+w)/2]=(inic+fim)/2;
		}
	}
		
	//vari�veis s�o reiniciadas
	z=0; w=0;
	inic=-1; fim=-1;
}

}

