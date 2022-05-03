#ifndef GENERADOR_H
#define GENERADOR_H

#include <vector>
#include <fstream>
#include "generador.h"

using namespace std;


void generarDatosLaboratorio();
bool noEstaEnVector(const std::vector<int> & v, int num);
std::vector<int> randomSinRepeticion(int n, int k);

std::vector<int> leerVector(string nombreArchivo);

#endif