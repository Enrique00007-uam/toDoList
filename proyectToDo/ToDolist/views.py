from django.shortcuts import render, redirect
from django.http import HttpResponse
from .models import Task
from .forms import TaskForm

def index(request):
    return render(request, 'todolist/index.html')
def tasks(request):
    tasks = Task.objects.all()
    return render(request, 'routes/tasks.html', {'tasks': tasks})

def create(request):
    form = TaskForm(request.POST or None, request.FILES or None)
    if form.is_valid():
        form.save()
        return redirect('tasks')
    return render(request, 'routes/create.html', {'form': form})
def edit(request,id):
    task = Task.objects.get(id=id)
    form = TaskForm(request.POST or None, request.FILES or None, instance=task)
    if form.is_valid() and request.POST:
        form.save()
        return redirect('tasks')
    return render(request, 'routes/edit.html', {'form': form})
def delete(request,id):
    task = Task.objects.get(id=id)
    task.delete()
    return redirect('tasks')
   
