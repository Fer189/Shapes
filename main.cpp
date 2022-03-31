#include "Square.h"
#include "Shape.h"
#include "EquilateralTriangle.h"
#include "Triangle.h"
#include "Canva.h"
#include "Rectangle.h"
#include "HollowSquare.h"
#include "Menu.h"
using namespace std;

int main() {
    int selector;
    int terminado = 1;
    Menu menu;
    Canva c;
    while(terminado == 1) {
        menu.select();
        cin >> selector;
        c.printShape(menu.selected(selector));
        terminado = menu.finish();
        while(terminado != 1 && terminado != 2) {
            terminado = menu.finish();
        }
    }
    return 1;
}