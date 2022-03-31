#include "Square.h"
#include "Shape.h"
#include "Triangle.h"
#include "Canva.h"
#include "Rectangle.h"

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
        s = new Triangle();
    }
    else if(option == 3) {
        s = new Rectangle();
    }
    if(s != nullptr) {
        c.printShape(s);
        delete s;
    }
    cout << "-----------------------" << endl;
    return 1;
}