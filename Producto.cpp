#include "Producto.h"

Producto::Producto() {}

Producto::~Producto() {

}

const string &Producto::getNombre() const {
    return Nombre;
}

void Producto::setNombre(const string &Nombre) {
    Producto::Nombre = Nombre;
}

double Producto::getPrecio() const {
    return Precio;
}

void Producto::setPrecio(double Precio) {
    Producto::Precio = Precio;
}
