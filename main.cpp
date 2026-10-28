#include <iostream>
#include "Fisico.h"
#include "Digital.h"
using namespace std;
int main() {
    cout << "Ejemplo Abierto-Cerrado\n" << endl;

    Fisico ProductoFisico;
    ProductoFisico.setNombre("Nintendo");
    ProductoFisico.setPrecio(500);
    ProductoFisico.setPeso(1200);

    Digital digital;
    digital.setNombre("Game");
    digital.setPrecio(120);
    digital.setFilePath("c:\\file\\game.app");

    cout << "Peso: " << ProductoFisico.getPeso() << "\n" << endl;
    cout << "filePath: " << digital.getFilePath() << "\n" << endl;

    return 0;
}
