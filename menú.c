#include <stdio.h>
int main() {
    struct Contacto contactos[100];
    int num_contactos = 0;
	cargarContactos(contactos, &num_contactos);
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
        printf("porfavor selecciona una opcion y da enter: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: agregarContacto(contactos, &num_contactos); break;
            case 2: mostrarContactos(contactos, num_contactos); break;
            case 3: buscarContacto(contactos, num_contactos); break;
            case 4: eliminarContacto(contactos, &num_contactos); break;
            case 5: guardarContactos(contactos, num_contactos); break;
            case 6: cargarContactos(contactos, &num_contactos); break;
            case 0: printf("\nsaliendo del programita...\n"); break;
            default: printf("\nseleccina una opcion valida.\n");
        }
    } while (opcion != 0);
    return 0;
}
