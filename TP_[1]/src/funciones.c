/*
 * funciones.c
 *
 *  Created on: 11 abr. 2022
 *      Author: feder
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"

float PrecioDebito(float precio)
{
	return precio*0.9;
}

float PrecioCredito(float precio)
{
	return precio*1.25;
}

float PrecioBitcoin(float precio)
{
	return precio/4606954.55;
}

float PrecioPorKilometro(float precio,float kilometros)
{
	return precio/kilometros;
}

float PrecioDiferencia(float precioAerolineas,float precioLatam)
{
	float diferencia;

	if(precioAerolineas>precioLatam)
	{
		diferencia=precioAerolineas-precioLatam;
	}
	else
	{
		diferencia=precioLatam-precioAerolineas;
	}

	return diferencia;
}

void MostrarResultados(float precioDebitoAerolineas,float precioDebitoLatam
						,float precioCreditoAerolineas,float precioCreditoLatam,float precioBitcoinAerolineas,float precioBitcoinLatam
						,float precioUnitarioAerolineas,float precioUnitarioLatam,float diferencia)
{
	printf("\n\n*** INFORME DE RESULTADOS ***\n\n");
	printf("Latam: \n");
	printf("a) Precio con tarjeta de debito: $%.2f\n",precioDebitoLatam);
	printf("b) Precio con tarjeta de credito: $%.2f\n",precioCreditoLatam);
	printf("c) Precio pagando con bitcoin: %.2f BTC\n",precioBitcoinLatam);
	printf("d) Precio unitario: %f\n",precioUnitarioLatam);
	printf("Aerolineas: \n");
	printf("a) Precio con tarjeta de debito: %.2f\n",precioDebitoAerolineas);
	printf("b) Precio con tarjeta de credito: %.2f\n",precioCreditoAerolineas);
	printf("c) Precio pagando con bitcoin: %.2f BTC\n",precioBitcoinAerolineas);
	printf("d) Precio unitario: %.2f\n",precioUnitarioAerolineas);
	printf("La diferencia de precio es: %.2f\n\n",diferencia);
}

void MostrarResultadosHardCodeados(float precioDebitoAerolineas,float precioDebitoLatam
						,float precioCreditoAerolineas,float precioCreditoLatam,float precioBitcoinAerolineas,float precioBitcoinLatam
						,float precioUnitarioAerolineas,float precioUnitarioLatam,float diferencia,float kilometros
						,float precioVueloAerolineas,float precioVueloLatam)
{
	printf("*** INFORME DE RESULTADOS ***\n\n");
	printf("KMs Ingresados: %d km\n\n",(int)kilometros);

	printf("Precio Aerolineas: $%.2f\n",precioVueloAerolineas);
	printf("a) Precio con tarjeta de debito: $%.2f\n",precioDebitoAerolineas);
	printf("b) Precio con tarjeta de credito: $%.2f\n",precioCreditoAerolineas);
	printf("c) Precio pagando con bitcoin: %.2f BTC\n",precioBitcoinAerolineas);
	printf("d) Mostrar precio unitario: $%.2f\n\n",precioUnitarioAerolineas);

	printf("Precio Latam: $%.2f\n",precioVueloLatam);
	printf("a) Precio con tarjeta de debito: $%.2f\n",precioDebitoLatam);
	printf("b) Precio con tarjeta de credito: $%.2f\n",precioCreditoLatam);
	printf("c) Precio pagando con bitcoin: %.2f BTC\n",precioBitcoinLatam);
	printf("d) Mostrar precio unitario: $%.2f\n\n",precioUnitarioLatam);
	printf("La diferencia de precio es: %.2f\n\n",diferencia);

}