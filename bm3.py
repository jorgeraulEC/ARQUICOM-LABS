import sys
import time
import math
import matplotlib.pyplot as plt


def integral(N):
    suma1 = 0
    h = 1/N
    a=0
    for i in range(1,N):
        x_i = a + i * h   # para ubicarse en el intervalo decimal
        suma1 = 4/(1+x_i*x_i) + suma1
        resultado = (h/2)*(4 + 2 + 2*(suma1) )
    return resultado 


# rpta
N_particiones = 50
resultado_real = integral(N_particiones)
print(f"El resultado de la suma es = {resultado_real}")
efectividad = (math.pi/resultado_real)*100
print(f"El el porcentaje de parecido es = {efectividad}")


