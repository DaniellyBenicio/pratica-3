#include <stdio.h>
#include <locale.h>

//c = (f-32)/1.8;
//f = c x 1.8 + 32;

float celsiusParafahrenheit(float c);
float fahrenheitParacelsius(float f);

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int op;
	float tf, tc;
	
	printf("Conversor de temperatura Celsius para Fahrenheit\n\n");
	
	printf("Conversor de temperatura\n");
	printf("Escolha uma opção:\n");
	printf("1 - Celsius para Fahrenheit\n");
	printf("2 - Fahrenheit para Celsius\n");
	scanf("%d", &op);
	
	printf("Digite o valor da temperatura: ");
	if(op == 1){
		printf(" em Celsius: ");
		scanf("%f", &tc);
		tf = celsiusParafahrenheit(tc);
	} else {
		printf(" em Fahrenheit: ");
		scanf("%f", &tf);
		tc = fahrenheitParacelsius(tf);
	}
	
	printf("Temperatura em Celsius: %.2f ºC \n", tc);
	printf("Temperatura em Fahrenheit: %.2f ºF \n", tf);
	
	return 0;
}

float celsiusParafahrenheit(float c){
	return c * 1.8 + 32;
}

float fahrenheitParacelsius(float f){
	return (f-32)/1.8;
}


