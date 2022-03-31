#pragma once
#include "shape.h"
#include <iostream>

using namespace std;

class EquilateralTriangle: public Shape {
    public:
    EquilateralTriangle() {
        cout << "Se crea un triangulo equilatero" << endl;
    }
    ~EquilateralTriangle() {
        cout << "Se destruye un triangulo equilatero" << endl;
    }
    void draw() {
        int a = 5;
        int b = 0;
        for(int i = 0; i < 5; i++) {
            for(int j = 1; j <= a; j++)
                cout << "  ";
            a--;
            for(int j = 0; j <= b; j++)
                cout << " *";
            b+=2;
            cout << "" << endl;
        }
    }
};