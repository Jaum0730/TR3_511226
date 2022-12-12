#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//VariÃ¡veis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################
   	
   	//i contador externo
   	y = 0;
   	z = 0;
   	k = 0;
   	
   	
   	
   	
   	
   	
   	while (y <= 200)
   	{
   		x[y] = 0;
   		y++;
   	}
   	while(y >= 0)
   	{
   		
   		printf("=========================================//====================================\n");
   		printf("Bem Vindo ao Leitor de numero!\n");
   		printf("Digite um valor entre 0 a 5000,\ncaso queira ver os números já digitados escreva -1\n");
   		printf("========================================//=====================================\n");
   		scanf("%d", &y);
   		if( y>=0 && y<=5000)
   		{
   			//Localização no vetor
   			z = y/32;
   			//Localização bit a bit
   			k = y%32;
   			//Deslocamento do bit na região do vetor
   			k = 1<<k;
   			//Marcando o bit deslocado da variável k no espaço do vetor
   			x[z] |= k;
   		
   		}
   	
   	
   	}
   	
   	
   	
   	for(y = 0; y <= 5000; y++)
   	{
   		//percorrendo o vetor
   		z = y/32;
   		//pecorrendo bit a bit
   		k = y%32;
   		//Checando se no bit percorrido há algum valor 
		 if((x[z]>>k) & 1)
		 {
		 printf("%d\n",y);
		 
		 }
   	}
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	
   	//#########################
   
	return 0;  
}
