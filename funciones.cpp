#include "varibales.h"
#include "iostream"
#include "string"


void agregarTarea();
void CompletarTarea();
void elminarTarea();
void actualizarTarea();
void verLista();



int id = 0;
void agregarTarea(){
    
    tareas[id].id = id;
    cout << "Id de tarea: " << tareas[id].id<< endl;
    cout << "Prueba id" << id << endl;
    cout << "Que tarea deseas agregar " << endl;
    cin >> tareas[id].tarea;
    tareas[id].estado = "Pendiente";
    id++;
    
    
}

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
    cout <<"Id: " << tareas[i].id << endl;
    cout << "Tarea: " <<  tareas[i].tarea<< endl;
    cout << "Estado " << tareas[i].estado<< endl;
    cout <<"prueba id " << i << endl;
}
}


void CompletarTarea(){
int opcion;
int res;
cout << "Escribe el id de la tarea que has completado. " << endl;
cin >> opcion;
 res = buscarId(opcion);
 if (res == -1)
 {
    return;
 }

 tareas[res].estado = "Completado";
 cout << "Tarea " << tareas[res].tarea <<" marcada como completada " << endl;
 



}

void actualizarTarea(){

int opcion;
int res;
cout << "Escribe el id de la tarea deaseas editar. " << endl;
cin >> opcion;
 res = buscarId(opcion);
 if (buscarId(opcion) == -1)
 {
    return;
 }
 cout << "Edita el nombre de la tarea" << endl;
 cin >> tareas[res].tarea;

 cout << "Tarea actualizada a " << tareas[res].tarea << endl;

}


void eliminarTarea() {
    int opcion;
    cout << "Ingrese el ID de la tarea a eliminar: ";
    cin >> opcion;
    int index = buscarId(opcion);
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
