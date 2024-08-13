from django.db import models
from django.core.validators import MinValueValidator, MaxValueValidator


# Create your models here.
class Task(models.Model):
    id = models.AutoField(primary_key=True)
    title = models.CharField(max_length=200, verbose_name='Title')
    description = models.TextField( verbose_name='Description',null=True)
    priority = models.IntegerField(
        verbose_name='Priority',
        validators=[MinValueValidator(1), MaxValueValidator(10)])

    def __str__(self):
       fila ="Titulo: "+self.title + " Descripcion: "+self.description
       return fila

    
