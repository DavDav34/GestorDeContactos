#include <stdio.h>

int main() {
    int opcion;
    do {
        printf("\n--- Gestor de Contactos ---\n");
        printf("1. Agregar Contacto\n");
        printf("2. Mostrar Contactos\n");
        printf("3. Buscar Contacto\n");
        printf("4. Eliminar Contacto\n");
        printf("5. Guardar Contactos\n");
        printf("6. Cargar Contactos\n");
        printf("0. Salir\n");
        printf("Por favor selecciona una opcion y da enter: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: printf("\nFuncion Agregar Contacto (no implementada)\n"); break;
            case 2: printf("\nFuncion Mostrar Contactos (no implementada)\n"); break;
            case 3: printf("\nFuncion Buscar Contacto (no implementada)\n"); break;
            case 4: printf("\nFuncion Eliminar Contacto (no implementada)\n"); break;
            case 5: printf("\nFuncion Guardar Contactos (no implementada)\n"); break;
            case 6: printf("\nFuncion Cargar Contactos (no implementada)\n"); break;
            case 0: printf("\nSaliendo del programita...\n"); break;
            default: printf("\nSelecciona una opcion valida.\n");
        }
    } while (opcion != 0);
    return 0;
}

