import time
import matplotlib.pyplot as plt

# definir la funcion para calcular un factorial de forma iterativa

def factorial_iterative(n):
    resultado=1
    for i in range(1,n+1):
        resultado = resultado*i
    
    return resultado 

# numero para el cual calcularemos el factorial
n =500

# lista para guardar los tiempo de ejecucion 
times_iterative = []    

# operacion iterativa que recoje los tiempos de ejecucion

for _ in range (500):

    t1 = time.perf_counter() # tiempo antes de la ejecucion
    factorial_iterative(n)
    t2 = time.perf_counter()  # tiempo despues de la ejecucion
    times_iterative.append((t2 - t1))   # Diferencia de t2 - t1 


# generar grafica 
plt.figure(figsize=(10, 5))
plt.plot(times_iterative, label='Factorial Iterativo')
plt.xlabel('Ejecución #')
plt.ylabel('Tiempo (us)')
plt.title('Tiempos de Ejecución de Factorial')
plt.grid()
plt.legend()
plt.show()
plt.close()

