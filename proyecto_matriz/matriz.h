//
// Created by Alejandro  Otero on 2019-09-03.
//

#ifndef PROYECTO_MATRIZ_MATRIZ_H
#define PROYECTO_MATRIZ_MATRIZ_H

#endif //PROYECTO_MATRIZ_MATRIZ_H

class Matriz{
private:
    int **mat;
    int filas, columnas;
public:
    Matriz();
    Matriz(int,int);
    void llenar();
    void mulitplicacion(const Matriz&, const Matriz&);
    void escalar(int, const Matriz&);
    void suma(const Matriz&, const Matriz&);
    void trasposicion(const Matriz&);
    ~Matriz();
};
