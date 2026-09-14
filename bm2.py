import sys 
import time
import matplotlib.pyplot as plt

# funcion pedida

def funcion1(n):
    for i in range(1,n):
        resultado = i*(i+1)
    return resultado

n = 5000000
# armar lista para guardar los tiempos
listaPY = []

# iteraciones 

for _ in range(50):

    t1 = time.perf_counter() # tiempo antes de la ejecucion
    funcion1(n)
    t2 = time.perf_counter()  # tiempo despues de la ejecucion
    listaPY.append(1e9*(t2 - t1))   # Diferencia de t2 - t1 


# Generar gráfica
plt.figure(figsize=(10, 5))
plt.plot(listaPY, label='Factorial Iterativo')
plt.xlabel('Ejecución #')
plt.ylabel('Tiempo (ns)')
plt.title('Tiempos de Ejecución de Factorial')
plt.grid()
plt.legend()
plt.show()
plt.close()