#include <stdio.h>
#include <time.h>
#define MAX_SIZE 100

// Definición de la estructura de la pila
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Función para inicializar la pila
void initializeStack(struct Stack *s) {
    s->top = -1;
}

// Función para comprobar si la pila está vacía
int isEmpty(struct Stack *s) {
    return s->top == -1;
}

// Función para comprobar si la pila está llena
int isFull(struct Stack *s) {
    return s->top == MAX_SIZE - 1;
}

// Función para empujar un elemento a la pila
void push(struct Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
    } else {
        s->items[++(s->top)] = value;
    }
}

// Función para sacar un elemento de la pila
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return s->items[(s->top)--];
    }
}

// Función para calcular el factorial utilizando recursión de pila
unsigned long long int factorial(int n) {
    struct Stack stack;
    initializeStack(&stack);
    push(&stack, n);
    unsigned long long int result = 1;

    while (!isEmpty(&stack)) {
        int num = pop(&stack);
        if (num == 0 || num == 1) {
            result *= 1;
        } else {
            result *= num;
            push(&stack, num - 1);
        }
    }

    return result;
}

// Función principal
int main() {
    int numero = 20; // Cambiado a un número más grande para probar

    clock_t inicio = clock(); // Tiempo de inicio

    printf("El factorial de %d es %llu\n", numero, factorial(numero));

    clock_t fin = clock(); // Tiempo de finalización

    double tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f segundos\n", tiempo);

    return 0;
}






