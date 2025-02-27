//version definitiva
void mostrarContactos(struct Contacto contactos[], int num_contactos) {
    if (num_contactos == 0) {
        printf("\naun no hay contactos guardados.\n");
    } else {
        printf("\n---Lista de contactos:---\n");
        int i;
        for (i = 0; i < num_contactos; i++) {
            printf("%d. Nombre: %s, Telefono: %s, Email: %s\n", i + 1, contactos[i].nombre, contactos[i].telefono, contactos[i].email);
        }
    }
}
