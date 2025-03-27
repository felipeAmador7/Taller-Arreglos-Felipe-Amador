#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<float>> v; // Lista de vértices
    vector<vector<int>> c;   // Lista de caras
    int opcion;

    while (true) {
        cout << "1. Agregar vértice ";
        cout << "2. Agregar cara ";
        cout << "3. Ver figura ";
        cout << "4. Salir ";
        cout << "Elija una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            float x, y, z;
            cout << "Ingresa los valores de x, y, z: ";
            cin >> x >> y >> z;
            vector<float> vertice;
            vertice.push_back(x);
            vertice.push_back(y);
            vertice.push_back(z);
            v.push_back(vertice);
            cout << "Vértice agregado. ";
        } 
        else if (opcion == 2) {
            if (v.empty()) {
                cout << "Primero debe ingresar los vértices. ";
            } else {
                cout << "Ingresa los índices separados por espacio (termina con -1): ";
                vector<int> indices;
                int index;
                
                while (true) {
                    cin >> index;
                    if (index == -1) break; // Finaliza la entrada con -1
                    indices.push_back(index);
                }

                c.push_back(indices);
                cout << "Cara agregada. ";
            }
        } 
        else if (opcion == 3) {
            cout << "Vértices: ";
            for (int i = 0; i < v.size(); i++) {
                cout << i << " (" << v[i][0] << ", " << v[i][1] << ", " << v[i][2] << ") ";
            }

            cout << "Caras: ";
            for (int i = 0; i < c.size(); i++) {
                cout << i << " [ ";
                for (int j = 0; j < c[i].size(); j++) {
                    cout << c[i][j] << " ";
                }
                cout << "] ";
            }
        } 
        else if (opcion == 4) {
            cout << "Saliendo del sistema. ";
            break;
        } 
        else {
            cout << "Opción inválida. ";
        }
    }

    return 0;
}
