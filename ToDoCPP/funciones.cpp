#include "varibales.h"
#include "iostream"
#include "string"

//declaracion de funciones
void agregarTarea();
void CompletarTarea();
void elminarTarea();
void actualizarTarea();
void verLista();

// programacion de funciones
int id = 0;
void agregarTarea(){
    cout << endl;
    tareas[id].id = id;
    cout << "Id de tarea: " << tareas[id].id+1<< endl;
    cout << "Que tarea deseas agregar: ";
    cin >> tareas[id].tarea;
    tareas[id].estado = "Pendiente";
    id++;
}
//esto encuentra la posicion en el arreglo mendiante un bucle for
int buscarId(int opcion){

    for (int i = 0; i < id; i++)
    {
        if (tareas[i].id == opcion)
        {
            return i;
        }
   }
     cout <<"No se encontro el id" << endl;
     return -1;
}

void verLista(){
for (int i = 0; i < id; i++)
{
    cout << "=============================" <<endl;
    cout <<"Id: " << tareas[i].id+1 << endl;
    cout << "Tarea: " <<  tareas[i].tarea<< endl;
    cout << "Estado " << tareas[i].estado<< endl;
}
}

void CompletarTarea(){
int opcion;
int res;
cout << endl;
cout << "Escribe el id de la tarea que has completado: " ;
cin >> opcion;
 res = buscarId(opcion-1);
 if (res == -1)
 {
    return;
 }
 tareas[res].estado = "Completado";
 cout << "Tarea " << tareas[res].tarea <<" marcada como completada. " << endl;
 }

void actualizarTarea(){
int opcion;
int res;
cout << endl;
cout << "Escribe el id de la tarea deaseas editar: ";
cin >> opcion;
 res = buscarId(opcion-1);
 if (res == -1)
 {
    return;
 }
 cout << "Edita el nombre de la tarea: ";
 cin >> tareas[res].tarea;
 cout << "Tarea actualizada a " << tareas[res].tarea << endl;
}


void eliminarTarea() {
    int opcion;
    cout << endl;
    cout << "Ingrese el ID de la tarea a eliminar: ";
    cin >> opcion;
    int index = buscarId(opcion-1);
    if (index != -1) {
        for (int i = index; i < id - 1; i++) {
            tareas[i] = tareas[i + 1];
            tareas[i].id--;
        }
        id--;
        cout << "Tarea eliminada exitosamente." << endl;
    } else {
        cout << "No se encontro la tarea con el ID proporcionado." << endl;
    }
}
