#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <assert.h>

// int checkPrimo(int numero); ----> desnecessário

int checkPrimo(int numero) {
  int resultado = 0;
  for(int i = 2; i<= numero/2; i++) {
        resultado += numero%i == 0;
  }
  return (resultado+bool;
}

int main () {
  int numero;
    int contador = 0; //Declaração de contador

  printf("Digite um numero inteiro\n");
  scanf("%d", &numero);


  if (numero <= 1 ) {
      contador++;
    printf("O proximo número primo é 2\n");
    return 0;
  } else if (checkPrimo(numero) == 0) {
      contador++;
      printf("%d é um número primo\n", numero);
      printf("Quantidades de IFs:%d\n", contador);
    return 0;
  }
    contador = 2;
    while(checkPrimo(numero) != 0) {
	    numero++;
    }
    printf("O proximo número primo é %d\n", numero);
    printf("Quantidades de IFs:%d\n", contador);
    
  return 0;
}