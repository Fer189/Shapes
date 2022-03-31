#include <iostream>
#include "Square.h"
#include "Shape.h"
#include "EquilateralTriangle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "HollowSquare.h"
using namespace std;

class Menu{
    public:
    void select() {
        cout << "Seleccione una opcion:\n";
        cout << "1.- Cuadrado\n";
        cout << "2.- Triangle\n";
        cout << "3.- Rectangulo\n";
    }
    Shape* selected(int selection) {
        int i = 0;
        switch (selection) {
            case 1:
                cout << "Desea que el cuadrado sea hueco?\n";
                cout << "1.- Si\n";
                cout << "2.- No\n";
                cin >> i;
                while(i != 1 && i != 2) {
                    cout << "Seleccion invalida" << endl;
                    cout << "Desea que el cuadrado sea hueco?\n";
                    cout << "1.- Si\n";
                    cout << "2.- No\n";
                    cin >> i;
                }
                switch (i) {
                    case 1:
                        shape = new HollowSquare();
                        break;
                    case 2:
                        shape = new Square();
                        break;
                }
                break;
            case 2:
                cout << "Desea que el triangulo sea equilatero?\n";
                cout << "1.- Si\n";
                cout << "2.- No\n";
                cin >> i;
                while(i != 1 && i != 2) {
                    cout << "Seleccion invalida" << endl;
                    cout << "Desea que el triangulo sea equilatero?\n";
                    cout << "1.- Si\n";
                    cout << "2.- No\n";
                    cin >> i;
                }
                switch (i) {
                    case 1:
                        shape = new EquilateralTriangle();
                        break;
                    case 2:
                        shape = new Triangle();
                        break;
                    default:
                        cout << "Seleccion invalida" << endl;
                }
                break;
            case 3:
                shape = new Rectangle();
                break;
        }
        return shape;
    }
    int finish() {
        cout << "Desea hacer algo mas?\n";
        cout << "1.- Si\n";
        cout << "2.- No\n";
        int selection;
        cin >> selection;
        if(selection != 1 && selection != 2) {
            cout << "Seleccion invalida" << endl;
        } 
        return selection;
    }
    private:
    Shape* shape = nullptr;
};