from funciones import Task, TaskManager, task_manager
import os

def principal():
    opcion = 0
    while opcion != 6:
        print()
        print("===== Menu principal To Do list =====")
        print("1. Agregar Tarea")
        print("2. Mostrar Tareas")
        print("3. Marcar Tarea Como Completada")
        print("4. Eliminar Tarea")
        print("5. Actualizar Tarea")
        print("6. Salir del programa")
        opcion = int(input("Elige una opcion:"))
        if opcion == 1:
            task_manager.agregarTarea()
        elif opcion == 2:
            task_manager.mostarTareas()
        elif opcion == 3:
            task_manager.CompletarTarea()
        elif opcion == 4:
            task_manager.eliminarTareas()
        elif opcion == 5:
            task_manager.ActualizarTareas()
    
        else:
            print("Opcion invalida...")

principal()
os.system('cls')
print("Saliendo del programa To Do List...")