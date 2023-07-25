#include <stdio.h>

void imprimir(int *monte, FILE *arquivo){
int i,j,aux,linha, coluna, valorMaximo=255;
int imagem[30][65];
char id[]="P3",qubra='\n';
 	
//defini�o do tamanho da imagem
coluna=65;
linha=30;
 	
//armazena em arquivo o identificador, o numero de linhas, o n�mero de coluna e o valor m�ximo
fprintf(arquivo,"%s \n",id);
fprintf(arquivo,"%d %d \n",coluna,linha);
fprintf(arquivo,"%d\n",valorMaximo);
 	
//preenche a matriz imagem a partir dos valores do vetor monte
for(i=0;i<65;i++){
 	aux=monte[i];
 	imagem[aux][i]=255;
}
//preenche a matriz imagem com zeros em posi�es que n�o apresentam valores 255
for(i=0;i<30;i++){
	for(j=0;j<65;j++){
		if(imagem[i][j]!=255){
			imagem[i][j]=0;
		}
	}
}
	
//obtem o arquivo imagem.ppm a partir da matriz imagem
for(i=0;i<30;i++){
	for(j=0;j<65;j++){
		//colore o terreno de cor cinza
		if(imagem[i][j]==0 && imagem[i-1][j]!=0 && i>0){
			imagem[i][j]=128;
			//cada ponto da matriz imagem apresenta tr�s valores, estes foram repetidos tr�s vezes para com isso obter a cor desejada
			//cada ponto fica disposto em uma linha do arquivo
			fprintf(arquivo,"%d %d %d",imagem[i][j],imagem[i][j],imagem[i][j]);
			fprintf(arquivo,"%c ",qubra);
		}else{
			fprintf(arquivo,"%d %d %d",imagem[i][j],imagem[i][j],imagem[i][j]);
			fprintf(arquivo,"%c ",qubra);	
		}	
	}
	fprintf(arquivo,"%c ",qubra);
}
	
}
