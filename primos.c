/*Este programa verifica se o número digitado pelo usuário é primo ou não.
Caso o número não seja primo, o programa dará como saída o próximo número primo.
Caso o número seja primo, o programa dará como saída a confirmação de que o número é
primo */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int test, i;

/*Função que verifica se o número é primo ou não contando o númro
de divisões exatas.*/
int VerPrimo(int input)
{
    int divisibilidades = 0;
    for(test = 1; test<=input; test++){
        if(input % test == 0){
            divisibilidades++;
        }
    }
    if(divisibilidades == 2){
        return 1;
    }else{
        return 0;
    }
}

/*Função que verifica se a entrada é um inteiro válido a partir
da decomposição da string de "input" fornecida pelo usuário*/
int VerInput(char input[100]){
    int num = 0;
    int numAux = 1;

    for(i = strlen(input) - 1; i >= 0; i--){
        if(input[i]!='\n'){
            if(isdigit(input[i])){
                num += (input[i] - '0') * numAux;
                numAux *=10;
            }else if((input[i] == '.') && (num == 0)){
                numAux = 1;
            }else{
                return -1;
            }
        }
    }
    return num;
}


/* Função principal*/
int main() {
    char input[100], inputtest[100] = "\n";
    int num=0;

    /*Entrada realizada pelo usuário*/
    printf("Insira um numero:");
    fgets(input,100,stdin);

    /*Veriricação para entrada vazia, caso onde o usuário
    não digira nenhuma entrada*/
	if(strcmp(input, inputtest) != 0){

            /*Tratamento da string e conversão para inteiro.*/
		if(VerInput(input) != -1){
	        num = VerInput(input);

            /* Verifica se o número é primo ou não.*/
	        if(VerPrimo(num)){
	            printf("o numero e primo");
	        }else{
	            printf("o numero nao e primo\n");
	            int i = num;


	        }
	    }	
	}
    
    return 0;
}