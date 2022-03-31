#include "shape.h"
#include <iostream>

using namespace std;

class Triangle: public Shape {
    public:
    Triangle() {
        cout << "Se crea un triangulo" << endl;
    }
    ~Triangle() {
        cout << "Se destruye un triangulo" << endl;
    }
    void draw() {
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < i; j++) {
                cout << " * ";
            }
            cout << "" << endl;
        }
    }
};