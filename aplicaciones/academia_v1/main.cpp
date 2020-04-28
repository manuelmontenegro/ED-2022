/*
 * ---------------------------------------------------
 *                ESTRUCTURAS DE DATOS
 * ---------------------------------------------------
 *              Manuel Montenegro Montes
 *              Facultad de Informática
 *         Universidad Complutense de Madrid
 * ---------------------------------------------------
 */
 
/*
 * Ejemplo de uso del TAD Academia
 */
 
#include "academia.h"
#include <iostream>


using namespace std;

int main() {
  Academia ac;

  ac.anyadirCurso("Introducción a la rubismática", 20);
  ac.anyadirCurso("Fundamentos de pastificio", 2);
  ac.matricular("Genaro Pérez", "Introducción a la rubismática");
  ac.matricular("Santiago Carvajal", "Introducción a la rubismática");
  ac.matricular("Mireia Casado", "Introducción a la rubismática");

  ac.matricular("Genaro Pérez", "Fundamentos de pastificio");

  cout << ac.plazas_libres("Introducción a la rubismática") << endl;
  for (const Estudiante &e: ac.estudiantes_matriculados("Introducción a la rubismática")) {
    cout << e << endl;
  }

  return 0;
}