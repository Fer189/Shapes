#include "Shape.h"
#include <iostream>

using namespace std;

class HollowSquare : public Shape{
    public:
    HollowSquare() {
        cout << "Se crea un cuadrado hueco" << endl;
    }
    ~HollowSquare() {
        cout << "Se destruye un cuadrado hueco" << endl;
    }
    void draw() {
        for(int i = 0; i < this->lado; i++) {
            for(int j = 0; j < this->lado; j++) {
                if(i == 0 || i == (lado - 1) || j == 0 || j == (lado - 1))
                    cout << " * ";
                else
                    cout << "   ";
            }
            cout << "" << endl;
        }
    }
};