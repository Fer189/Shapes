#include "Square.h"
#include "Shape.h"
#include "EquilateralTriangle.h"
#include "Triangle.h"
#include "Canva.h"
#include "Rectangle.h"
#include "HollowSquare.h"
using namespace std;

int main() {
    Shape* s = nullptr;
    Canva c;
    int option = 0;
    cout << "Que quieres imprimir?" << endl;
    cin >> option;
    if(option == 1) {
        s = new Square();
    }
    else if(option == 2) {
        s = new EquilateralTriangle();
    }
    else if(option == 3) {
        s = new Rectangle();
    }
    else if(option == 4) {
        s = new HollowSquare();
    }
    else if(option == 5) {
        s = new Triangle();
    }
    if(s != nullptr) {
        c.printShape(s);
        delete s;
    }
    cout << "-----------------------------------" << endl;
    return 1;
}