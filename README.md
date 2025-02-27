void eliminarContacto(const char *nombreEliminar) {
    FILE *archivo = fopen(ARCHIVO_CONTACTOS, "r");
    FILE *temp = fopen(ARCHIVO_TEMPORAL, "w");
    
    if (archivo == NULL || temp == NULL) {
        printf("Error al abrir los archivos.\n");
        return;
    }

    char nombre[MAX_NOMBRE], telefono[MAX_TELEFONO];
    int encontrado = 0;

    while (fscanf(archivo, "%s %s", nombre, telefono) == 2) {
        if (strcmp(nombre, nombreEliminar) != 0) {
            fprintf(temp, "%s %s\n", nombre, telefono);
        } else {
            encontrado = 1;
        }
    }

    fclose(archivo);
    fclose(temp);

    if (encontrado) {
        remove(ARCHIVO_CONTACTOS);
        rename(ARCHIVO_TEMPORAL, ARCHIVO_CONTACTOS);
        printf("Contacto eliminado con éxito.\n");
    } else {
        remove(ARCHIVO_TEMPORAL);
        printf("Contacto no encontrado.\n");
    }
}

int main() {
    char nombreEliminar[MAX_NOMBRE];

    printf("Ingrese el nombre del contacto a eliminar: ");
    scanf("%s", nombreEliminar);

    eliminarContacto(nombreEliminar);

    return 0;
}
