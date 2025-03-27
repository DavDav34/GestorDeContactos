# Desarrollo de un Gestor de Contactos
En esta práctica, los estudiantes diseñarán y desarrollarán un gestor de contactos que permita a los usuarios gestionar su lista de contactos de manera eficiente.
#### Funcionalidades:

- Agregar nuevos contactos con información básica (nombre, teléfono, correo electrónico)
- Visualizar la lista completa de contactos.
- Realizar búsquedas de contactos por nombre.
- Eliminar contactos existentes.
- Guardar la lista de contactos en un archivo de texto.
- Cargar la lista de contactos desde un archivo de texto.

#### Colaboración en Equipo:

Los estudiantes trabajarán en equipo utilizando GitHub para desarrollar y compartir su código, fomentando la colaboración y el trabajo en equipo.

Este proyecto permitirá a los estudiantes aplicar sus habilidades en programación y desarrollo de software, mientras aprenden a trabajar de manera colaborativa y eficiente."


### ¿Cómo puedo compilar y ejecutar el proyecto? 
Para poder hacer uso de este proyecto se tendrá que descargar el archivo llamado "Gestor de Contactos Ejecutable", una vez hecho se deberá de usar en un Compilador que ejecute C. 

Recomendación:  
- Dev C++
- Visual Estudio


### Funcionamiento del Proyecto.
#### 1. Agregar Contacto
Funcionalidad:
Permite al usuario ingresar un nuevo contacto con los siguientes datos:

- Nombre: Texto sin espacios.
- Teléfono: Número de 10 dígitos.
- Correo Electrónico: Validación básica de formato

Proceso:
1. Solicitar al usuario cada uno de los datos del contacto.
2. Validar los datos ingresados:
3. Nombre no vacío.
4. Teléfono numérico y con longitud adecuada.
5. Correo electrónico con un formato válido.
6. Si los datos son válidos, agregar el contacto a la lista en memoria.

![AddCont](https://github.com/user-attachments/assets/6b51e990-3c9a-46c8-9473-88daf1d69208)

#### 2. Mostrar Contactos
Funcionalidad:
Despliega todos los contactos almacenados en la lista con un formato claro y ordenado.

Proceso:
1. Comprobar si la lista de contactos no está vacía.
2. Recorrer la lista y mostrar cada contacto con su índice, nombre, teléfono y correo electrónico.
3. Si la lista está vacía, mostrar un mensaje informativo.

![Mostrar](https://github.com/user-attachments/assets/0a1e106a-5042-4a92-a59c-9b413d3a9d9a)


#### 3. Buscar Contacto
Funcionalidad:
Facilita la búsqueda de un contacto específico utilizando un criterio de búsqueda flexible.

Criterios de Búsqueda:
- Por nombre: Buscar contactos cuyo nombre contenga la palabra clave.
- Por teléfono: Coincidencia exacta del número de teléfono.
- Por correo electrónico: Búsqueda exacta o parcial del correo.

Proceso:
1. Pedir al usuario que ingrese el criterio de búsqueda.
2. Recorrer la lista de contactos y buscar coincidencias.
3. Mostrar los contactos encontrados o un mensaje si no hay coincidencias.

![Buscar](https://github.com/user-attachments/assets/2e2258d8-7e9a-47e9-816f-a46f72549bd4)


#### 4. Eliminar Contacto
Funcionalidad:
Permite eliminar un contacto seleccionado por el usuario de la lista de contactos.

Proceso:
1. Mostrar la lista de contactos numerada.
2. Pedir al usuario que ingrese el número del contacto a eliminar.
3. Validar la selección del usuario.
4. Eliminar el contacto de la lista.
5. Mostrar un mensaje de confirmación.

![Eliminar](https://github.com/user-attachments/assets/4bdb37d8-8130-41aa-9b0d-d39deb8a1777)


#### 5. Guardar Contactos
Funcionalidad:
Guarda todos los contactos en un archivo de texto (contactos.txt) para mantener la persistencia de los datos.

Proceso:
1. Abrir o crear el archivo contactos.txt.
2. Escribir cada contacto en una línea con el formato:
   "Nombre Telefono Correo"
3. Cerrar el archivo correctamente.
4. Mostrar un mensaje de éxito.

![Guardar](https://github.com/user-attachments/assets/8e2e32f2-85a4-40e4-b7ae-0e204c4f8d23)


#### 6. Cargar Contactos
Funcionalidad:
Restaura la lista de contactos desde el archivo previamente guardado.

Proceso:
1. Abrir el archivo contactos.txt en modo lectura.
2. Leer cada línea del archivo.
3. Convertir cada línea en un contacto y agregarlo a la lista en memoria.
4. Validar que los datos cargados tengan el formato correcto.

Manejo de Errores:
- Si el archivo no existe, mostrar un mensaje adecuado.
- Ignorar o notificar contactos con datos corruptos.

![Cargar](https://github.com/user-attachments/assets/e03cf89e-e0b7-481e-8b14-6fa2daa1e1a2)


#### 7. Salir
Funcionalidad:
Termina la ejecución del programa de manera segura.

Proceso:
1. Preguntar al usuario si desea guardar antes de salir (opcional).
2. Liberar recursos y cerrar correctamente el programa.
3. Mostrar un mensaje de despedida.


### Asignación de tareas dentro del proyecto.
- ##### [Tareas Generales del Proyecto](https://planner.cloud.microsoft/f94bf4d9-8097-4794-adf6-a5466ca28563/Home/PlanViews/0MGcMwpssEaHDXUrJEsSKWQAC--D?Type=PlanLink&Channel=Link&CreatedTime=638761441005440000 "Tareas Generales del Proyecto")
