#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <assert.h>

// int checkPrimo(int numero); ----> desnecessário

int checkPrimo(int numero, int bool) {
  int resultado = 0;
  int checker = 1;
  for(int i = 2; i<= numero/2 && numero > 1; i++) {
        resultado += numero%i == 0;
  }

return(resultado+bool);

//return resultado;
}

void metodo1(){
    printf("O proximo número primo é 2\n");
}

void metodo2(){
    printf("O proximo número primo é 2\n");
}

int main () {
  int numero;
    int contador = 0; //Declaração de contador

  printf("Digite um numero inteiro\n");
  scanf("%d", &numero);

 


 /* if (numero <= 1 ) {
      contador++;
    printf("O proximo número primo é 2\n");
    return 0; */

  if (checkPrimo(numero, (numero<=1)) == 0) {
      contador++;
      printf("%d é um número primo\n", numero);
      printf("Quantidades de IFs:%d\n", contador);
    return 0;
  }
    contador = 1;
    while(checkPrimo(numero, (numero<=1)) != 0 /*&&checker == 0*/) {
	    numero++;
    }
    printf("O proximo número primo é %d\n", numero);
    printf("Quantidades de IFs:%d\n", contador);
    
  return 0;
}