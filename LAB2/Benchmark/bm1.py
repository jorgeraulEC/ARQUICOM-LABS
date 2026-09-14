import os
import numpy as np
import time 

def benchmark_float_operations(size=1000000):
    a = np.random.rand(size)
    b = np.random.rand(size)
    return a * b
def benchmark_integer_operations(count=1000000):
    result = 0
    for i in range(count):
        result += i
    return result


def benchmark_disk_io():
    data = 'a' * 1024 * 1024  # 1 MB de datos
    with open('test_file.txt', 'w') as f:
        for _ in range(10):  # Escribe 10 MB de datos
            f.write(data)
    os.remove('test_file.txt')

tiempos = []

# ITERARACIONES

for _ in range(50):

    t1 = time.perf_counter()
    benchmark_float_operations(size=1000000)
    benchmark_integer_operations(count=1000000)
    benchmark_disk_io()
    t2 = time.perf_counter()
    tiempos.append(1e6*(t2 - t1)) 

    mediana = np.median(tiempos)


# Generar gráfica
plt.figure(figsize=(10, 5))
plt.plot(tiempos, label='Factorial Iterativo')
plt.xlabel('Ejecución #')
plt.ylabel('Tiempo (us)')
plt.title('Tiempos de Ejecución de Factorial')
plt.grid()
plt.legend()
plt.show()
plt.close()

