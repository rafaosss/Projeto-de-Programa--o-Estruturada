#include <stdio.h>
#include <stdlib.h>
#include "Rafael.h"

int quadrado(int a){
    return a * a;
};

int cubo(int b){
    return quadrado(b) * b;
};

int menor (int a, int b){
    if (a < b) {
        return a;
    }
    else
        return b;
};

int soma (int a, int b){
	return a + b;
};

float somaFloat (float a, float b){
   return a + b;
};

int subtrair (int a, int b) {
    return a - b;
};

float subtrairFloat (float a, float b) {
    return a - b;
};

float multiplicar (float a, float b) {
    return a * b;
};

int dividir (int a, int b) {
    return a / b;
};

float porcentGov (float a, float b) {
    float c = (b * 100) / a;
    return c;
}

int sobraEstado (int a) {
    a = 100;
    return a - porcentGov (2.200, 1.600);
    //Problema na sobra de porcentagem
};

float declinio () {
    float *dec;
    float a;
    a = 17;
    dec = &a;
    //return dec;
};

float pico () {
    float *pic;
    float a;
    a = 278;
    pic = &a;
    //return dec;
};
