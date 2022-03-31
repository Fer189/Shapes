#include "Shape.h"
#include <iostream>

using namespace std;

class Square : public Shape{
    public:
    Square() {
        cout << "Se crea un cuadrado" << endl;
    }
    ~Square() {
        cout << "Se destruye un cuadrado" << endl;
    }
    void draw() {
        for(int i = 0; i < this->lado; i++) {
            for(int i = 0; i < this->lado; i++) {
                cout << " * ";
            }
            cout << "" << endl;
        }
    }
};