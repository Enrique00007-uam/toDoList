class Task:
    def __init__(self, task_id, name, description, importance):
        self.task_id = task_id
        self.name = name
        self.description = description
        self.importance = importance
        self.status = "Pendiente"

    def __str__(self):
        return (f"ID: {self.task_id}\n"
                f"Nombre: {self.name}\n"
                f"Descripción: {self.description}\n"
                f"Importancia: {self.importance}\n"
                f"Estado: {self.status}\n")

class TaskManager:
    def __init__(self):
        self.tasks = []
        self.next_id = 0

    def agregarTarea(self):
        name = input("Ingresa el nombre de la tarea: ")
        description = input("Ingresa la descripción de la tarea: ")
        importance = input("Ingresa la importancia de la tarea del 1 al 10: ")
        task = Task(self.next_id, name, description, importance)
        self.tasks.append(task)
        self.next_id += 1
        print("Tarea agregada.")
       
    def mostarTareas(self):
        for task in self.tasks:
            print("================================")
            print(task)
    
    def eliminarTareas(self):
        task_id = int(input("Escribe el ID de la tarea que deseas eliminar: "))
        for task in self.tasks:
            if task.task_id == task_id:
                self.tasks.remove(task)
                print("Tarea Eliminada")
                return
        print("No se encontró la tarea")
    def ActualizarTareas(self):
        task_id = int(input("Escribe el ID de la tarea que deseas actualizar: "))
        for task in self.tasks:
            if task.task_id == task_id:
                
                name = input("Escribe el nuevo nombre de la tarea: ")
                description = input("Escribe la nueva descripción de la tarea: ")
                importance = int(input("Escribe la nueva importancia de la tarea del 1 al 10: "))
                task.name = name
                task.description = description
                task.importance = importance
                print("Tarea actualizada.")
                return
        print("No se encontro la tarea.")
    def CompletarTarea(self):
        task_id = int(input("Escribe el ID de la tarea que deseas actualizar: "))
        for task in self.tasks:
            if task.task_id == task_id:
                task.status = "Completado"
                print("Tarea marcada como completada")
                return
        print("Tarea no encontrada")

                 
task_manager = TaskManager()
    


