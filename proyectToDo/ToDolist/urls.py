from django.urls import path
from . import views


urlpatterns = [
    path('', views.index, name='index'),
    path('tasks/', views.tasks, name='tasks'),
    path('create/', views.create, name='create'),
    path('edit/', views.edit, name='edit'),
]   