#include <stdio.h>
#include <stdlib.h>


#include "Rafael.h"


int main (){

printf ("A diaria de uma UTI custa cerca de R$ 2.200. O Governo repassa R$ 1.600 por dia, o dobro que era repassado antes da pandemia,");
printf (" restando aos Estados e Municipos completar o restante.\n");

float res = subtrairFloat(2.200, 1.600);

printf ("\nCabe a eles arcar com o custo de R$ %.3f por dia. \n", res);

int aux = porcentGov (2.200, 1.600);
printf ("O que representa cerca de %i porcento custeado pelo Governo. ", aux);
//Problema de porcentagem

int sobra = sobraEstado;

printf ("Sobrando ao Estado pagar %i porcento que faltam. \n", sobra);
//Problema na sobra de porcentagem


float dias = multiplicar (2.200, 14);
printf ("\nO paciente fica internado na UTI em media por 14 dias, com o custo total de R$ %.3f \n", dias);



printf ("\n Nos ultimos 3 meses no Estado do RS, houve um declinio de 17 pessoas na UTI em dezembro, e um pico de 278 pacientes em janeiro.\n");

float dec = multiplicar (dias, 17);
float pic = multiplicar (dias, 278);

printf ("Considerando que os pacientes fiquem internados por 14 dias, o valor do declinio sera de R$ %.3f e do pico de R$ %.3f", dec, pic);

/*
FONTES
https://infografico-covid.procempa.com.br/
https://www.cnnbrasil.com.br/saude/covid-19-internacao-em-uti-custa-quase-2-mil-vezes-mais-do-que-preco-da-vacina/#:~:text=O%20gasto%20di%C3%A1rio%20de%20uma,cerca%20de%20R%24%2031%20mil.
https://noticias.uol.com.br/saude/ultimas-noticias/redacao/2021/05/03/em-menos-de-1-ano-sus-gasta-r-3-bilhoes-com-internacoes-para-tratar-covid.htm
*/
}
