//fun��o que receba o raio de um circulo e retorne a sua area.
//a area do circulo � dada por r2 * pi

#include <stdio.h>
#include <locale.h>

#define pi 3.14

float area_circulo(float raio){
    // se nao quiser usar o define, poderia so usar o float pi = 3.14 aqui;
    float area;
    area = pi * raio * raio;
	return area;
}


int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float r, a;
	
	printf("A �rea do c�rculo\n\n");
	
	printf("Digite o raio do c�rculo: ");
	scanf("%f", &r);
	
	a = area_circulo(r);
	
	printf("A �rea do c�rculo �: %.2f\n", a);
	
	return 0;
}

