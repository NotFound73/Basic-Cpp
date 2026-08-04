#ifndef GAS_IDEAL_H
#define GAS_IDEAL_H
#include <iostream>
using namespace std;
#define R 0.082057

float temp(float n, float V, float P);

float vol(float n, float T, float P);

float pres(float n, float V, float T);

float nmol(float P, float V, float T);

#endif