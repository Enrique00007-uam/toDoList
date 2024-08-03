#include "iostream"
#include "string"
using namespace std;
#include "funciones.cpp"




//funcion principal, contiene todas las funciones del programa y un switch para aceder a ellas.
void menuPrincipal();
int main()
{
    //llamda a la funcion principal
    menuPrincipal();
    return 0;
}

void menuPrincipal() {
    int opcion;
    do {
        cout << endl;
        cout << "===== Menu Principal =====" << endl;
        cout << "1. Agregar Tarea" << endl;
        cout << "2. Ver Lista de Tareas" << endl;
        cout << "3. Marcar tarea como completada. " << endl;
        cout << "4. Eliminar Tarea" << endl;
        cout << "5. Actualizar Tarea" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                agregarTarea();
                break;
            case 2:
                verLista();
                break;
                case 3:
                CompletarTarea();
                break;
                case 4:
                eliminarTarea();
                break;
                case 5:
                  actualizarTarea();
            break;
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                cout << endl;
        }
    } while(opcion != 6);
}