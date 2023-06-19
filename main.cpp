#include <iostream>
#define INFI 999
#define MAXNODOS 8

using namespace std;

int main() {
    int peso[MAXNODOS][MAXNODOS] = {
        {0, 4, INFI, INFI, INFI, INFI, INFI, INFI},
        {4, 0, 2, INFI, INFI, INFI, INFI, INFI},
        {INFI, 2, 0, 3, INFI, INFI, INFI, INFI},
        {INFI, INFI, 3, 0, 5, INFI, INFI, INFI},
        {INFI, INFI, INFI, 5, 0, 1, INFI, INFI},
        {INFI, INFI, INFI, INFI, 1, 0, 6, INFI},
        {INFI, INFI, INFI, INFI, INFI, 6, 0, 5},
        {INFI, INFI, INFI, INFI, INFI, INFI, 5, 0}
    };

    // Imprimir la matriz de adyacencia
    cout << "Matriz de pesos:" << endl;
    for (int i = 0; i < MAXNODOS; i++) {
        for (int j = 0; j < MAXNODOS; j++) {
            if (peso[i][j] == INFI) {
                cout << "INFI ";
            } else {
                cout << peso[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}