#include <iostream>
#include <string>
using namespace std;

// FUNCION
bool ingresarNotas(float &nota_deb, float &nota_tra, float &nota_pru, float &nota_exa) {
    cout << "Las notas ingresadas deben estar en el rango de 1 al 10." << endl;

    cout << "Ingrese la nota de deberes: " << endl;
    cin >> nota_deb;
    cout << "Ingrese la nota de trabajos: " << endl;
    cin >> nota_tra;
    cout << "Ingrese la nota de pruebas: " << endl;
    cin >> nota_pru;
    cout << "Ingrese la nota de examenes: " << endl;
    cin >> nota_exa;

    // Comprobamos si todos los valores están dentro del rango.
    if (nota_deb < 1 || nota_deb > 10 || nota_tra < 1 || nota_tra > 10 ||
        nota_pru < 1 || nota_pru > 10 || nota_exa < 1 || nota_exa > 10) {
        cout << "Error: Todos los valores deben estar entre 1 y 10. Intente nuevamente.\n" << endl;
        return false; // Indica que hubo un error
    }
    return true; // Indica que la entrada fue exitosa
}

float promedioAcademico(float nota_deb, float nota_tra, float nota_pru, float nota_exa) {
    return (nota_deb + nota_tra + nota_pru + nota_exa) / 4;
}

string estadoAcademico(float prom) {
    if (prom >= 7) {
        return "Aprobado";
    } else if (prom >= 5 && prom < 7) {
        return "Suspendido";
    } else if (prom >= 1 && prom < 5) {
        return "Reprobado";
    } else {
        return "";
    }
}

int main() {
    float nota_deb, nota_tra, nota_pru, nota_exa;
    float prom;
    bool notas;
    string estado;

    // Para continuar solicitando valores hasta que sean válidos.
    do {
        notas = ingresarNotas(nota_deb, nota_tra, nota_pru, nota_exa);
    } while (!notas); // Repetir si los valores no son válidos

    prom = promedioAcademico(nota_deb, nota_tra, nota_pru, nota_exa);
    estado = estadoAcademico(prom);

    cout << "Promedio: " << prom << endl;
    cout << "Estado Academico: " << estado << endl;

    return 0;
}
