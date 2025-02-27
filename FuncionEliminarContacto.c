void eliminarContacto(struct Contacto contactos[], int *num_contactos) {
    char nombre[50];
    printf("\ningresar el nombre del contacto a eliminar: ");
    scanf("%s", nombre);
    int i;
    for (i = 0; i < *num_contactos; i++) {
        if (strcmp(contactos[i].nombre, nombre) == 0) {
        	int j;
            for (j = i; j < *num_contactos - 1; j++) {
                contactos[j] = contactos[j + 1];
            }
            (*num_contactos)--;
            printf("se elimino el contcto\n");
            return;
        }
    }
    printf("\nno hay un contacto con ese nombre, intenta de nuevo\n");
}

