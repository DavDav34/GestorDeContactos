
void guardarContactos(struct Contacto contactos[], int num_contactos) {
    FILE *archivo = fopen("contactos.txt", "w");
    if (!archivo) {
        printf("\nError al abrir el archivo.\n");
        return;
    }
    int i;
    for (i = 0; i < num_contactos; i++) {
        fprintf(archivo, "%s %s %s\n", contactos[i].nombre, contactos[i].telefono, contactos[i].email);
    }
    fclose(archivo);
    printf("\nse guardaron correctamente.\n");
}
