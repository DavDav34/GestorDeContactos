//version final
void cargarContactos(struct Contacto contactos[], int *num_contactos) {
    FILE *archivo = fopen("contactos.txt", "r");
    if (!archivo) {
        printf("\nNo hay contactos guardados\n");
        return;
    }
    *num_contactos = 0;
    char linea[120];
    while (fgets(linea, sizeof(linea), archivo)) {
        sscanf(linea, "%s %s %s", contactos[*num_contactos].nombre, contactos[*num_contactos].telefono, contactos[*num_contactos].email);
        (*num_contactos)++;
        if (*num_contactos >= 100) break;
    }
    fclose(archivo);
    printf("\contactos cargados correctamente.\n");
}
