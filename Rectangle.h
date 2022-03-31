#include "Shape.h"
#include <iostream>

using namespace std;

class Rectangle : public Shape{
    public:
    Rectangle() {
        cout << "Se crea un rectangulo" << endl;
    }
    ~Rectangle() {
        cout << "Se destruye un rectangulo" << endl;
    }
    void draw() {
        for(int i = 0; i < (this->lado/2); i++) {
            for(int i = 0; i < this->lado; i++) {
                cout << " * ";
            }
            cout << "" << endl;
        }
    }
};