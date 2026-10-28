# Principio Abierto/Cerrado (OCP)

Proyecto en **C++** que demuestra el segundo principio SOLID: **Open/Closed Principle**.

## ¿Qué dice el principio?

> Las clases deben estar **abiertas para extenderse** pero **cerradas para modificarse**.

## ¿Cómo se implementa en este proyecto?

Existe una clase base `Producto` con lo que **todos** los productos tienen (`Nombre` y `Precio`). Esa clase **no se modifica**. Cuando se necesita un tipo de producto nuevo, se **extiende** creando una clase hija:

| Clase | Hereda de | Agrega |
|-------|-----------|--------|
| `Producto` | — | `Nombre`, `Precio` |
| `Fisico` | `Producto` | `Peso` |
| `Digital` | `Producto` | `filePath` (ruta del archivo) |

### Código clave

```cpp
// Producto.h -> clase base, NO se toca
class Producto {
private:
    string Nombre;
    double Precio;
public:
    // getters y setters
};

// Fisico.h -> extensión
class Fisico : public Producto {
private:
    double Peso;
};

// Digital.h -> otra extensión
class Digital : public Producto {
private:
    string filePath;
};
```

### ¿Por qué cumple el principio?

- Para agregar un nuevo tipo de producto (por ejemplo `Servicio` o `Suscripcion`) solo se crea una **nueva clase que herede de `Producto`**.
- **No hace falta modificar** `Producto`, `Fisico` ni `Digital`, así no se corre el riesgo de dañar lo que ya funciona.
- Lo que es común vive en la base (cerrada) y lo que es distinto vive en las hijas (abiertas a crecer).

## Estructura del proyecto

```
Producto.h / Producto.cpp   -> clase base
Fisico.h   / Fisico.cpp     -> extensión con Peso
Digital.h  / Digital.cpp    -> extensión con filePath
main.cpp                    -> programa de ejemplo
```

## Salida del programa

```
Ejemplo Abierto-Cerrado

Peso: 1200

filePath: c:\file\game.app
```

## Cómo ejecutarlo

```bash
g++ *.cpp -o programa
./programa        # en Windows: programa.exe
```
