import time  # Única librería permitida para rendimiento
 
 
def comprimir_rle_clasico(arreglo):
    N = len(arreglo)  # <-- corregido: antes estaba fijo en 15, causaba IndexError
    salida = [0] * (2 * N)
 
    indice_salida = 0
    caracter_actual = arreglo[0]
    contador = 1
 
    for i in range(1, N):
        if arreglo[i] == caracter_actual:
            contador += 1
        else:
            salida[indice_salida] = caracter_actual
            salida[indice_salida + 1] = contador
 
            indice_salida += 2
 
            caracter_actual = arreglo[i]
            contador = 1
 
    salida[indice_salida] = caracter_actual
    salida[indice_salida + 1] = contador
    indice_salida += 2
 
    return salida[0:indice_salida]
 
 
# --- PRUEBA CON EL EJEMPLO DEL ENUNCIADO ---
entrada = ['a', 'a', 'a', 'b', 'b', 'c', 'c', 'c', 'c']
resultado = comprimir_rle_clasico(entrada)
 
print("--- RESULTADO DEL ALGORITMO ---")
print(f"Entrada: {entrada}")
print(f"Salida:  {resultado}")  # Imprime exactamente: ['a', 3, 'b', 2, 'c', 4]