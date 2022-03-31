#include "shape.h"
#include <iostream>

using namespace std;

class Triangle: public Shape {
    void draw() {
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << "" << endl;
        }
    }
};