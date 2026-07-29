#ifndef GAS_IDEAL_H
#define GAS_IDEAL_H
#include <iostream>
using namespace std;
#define R 0.082057

float temp(float n, float V, float P){
    float T=0;
    T = (P * V)/(n * R);
    return T;
}

float vol(float n, float T, float P){
    float V=0;
    V = (n * R * T)/ P;
    return V;
}

float pres(float n, float V, float T){
    float P=0;
    P = (n * R * T)/ V;
    return P;
}

float nmol(float P, float V, float T){
    float n=0;
    n = (P * V) / (R * T);
    return n;
}

#endif