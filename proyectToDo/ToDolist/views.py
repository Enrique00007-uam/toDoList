from django.shortcuts import render


def index(request):
    return render(request, 'todolist/index.html')
def tasks(request):
    return render(request, 'routes/tasks.html')

def create(request):
    return render(request, 'routes/create.html')
def edit(request):
    return render(request, 'routes/edit.html')
