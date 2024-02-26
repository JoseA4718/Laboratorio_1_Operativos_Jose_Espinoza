import time

"""
Función para calcular el factorial de un número utilizando recursividad de pila
Entrada: n, número de entrada. 
Salida: factorial del numero de entrada. 
"""
def factorial(n):

    # Factorial de 0.
    if n == 0:
        return 1

    # Caso recursivo: n * n-1
    else:
        return n * factorial(n-1)

# Ejemplo de uso
numero = 20

inicio = time.time()  # Tiempo de inicio
resultado = factorial(numero)
fin = time.time()  # Tiempo de finalización

print(f"El factorial de {numero} es {resultado}")
print(f"Tiempo de ejecución: {fin - inicio} segundos")

