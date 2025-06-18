#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int Verificar(int vet[]) {
    int i1, i2;
    int temp;
    for (i1 = 0; i1 < 9; i1++) {
        temp = vet[i1];
        for (i2 = 0; i2 < 9; i2++) {
            if (i1 != i2 && temp == vet[i2]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int M[9][9];
    int m[9];
    int i, j, n, temp;
    int valido;

    cin >> n;
    for (int N = 0; N < n; N++) {
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                cin >> M[i][j];
            }
        }

        valido = 1;

        //Verificar Todas as linhas
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                m[j] = M[i][j];
            }
            if (Verificar(m)) {
                valido = 0;
            }
        }

        //Verificar Todas as Colunas
        for (j = 0; j < 9; j++) {
            for (i = 0; i < 9; i++) {
                m[i] = M[i][j];
            }
            if (Verificar(m)) {
                valido = 0;
            }
        }

        //Verificar Todas as Matrizes 3x3
        for (int lin = 0; lin < 9; lin += 3) {
            for (int col = 0; col < 9; col += 3) {
                int k = 0;
                for (i = lin; i < lin + 3; i++) {
                    for (j = col; j < col + 3; j++) {
                        m[k++] = M[i][j];
                    }
                }
                if (Verificar(m)) {
                    valido = 0;
                }
            }
        }

        cout << "Instancia " << N + 1 << "\n";
        if (valido == 0) {
            cout << "NAO\n";
        } else {
            cout << "SIM\n";
        }
        cout << "\n";
    }
    return 0;
}
