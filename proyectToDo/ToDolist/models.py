from django.db import models

# Create your models here.
class Task(models.Model):
    id = models.AutoField(primary_key=True)
    title = models.CharField(max_length=200, verbose_name='Title')
    description = models.TextField( verbose_name='Description',null=True)
    Completed = models.BooleanField(default=False)
    priority = models.IntegerField(default=0, verbose_name='Priority')

    def __str__(self):
       fila ="Titulo: "+self.title + " Descripcion: "+self.description
       return fila

    
