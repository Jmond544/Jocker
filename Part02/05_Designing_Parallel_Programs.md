![Alt text](./Images/image-54.png)

# Partitioning:

Romper el problema en partes más pequeñas.

![Alt text](./Images/image-55.png)

## Domain decomposition (Dominio de descomposición):

![Alt text](./Images/image-56.png)

## Functional decomposition (Descomposición funcional):

Comienza considerando todo el problema como una sola función, y luego se divide en funciones más pequeñas.

![Alt text](./Images/image-57.png)

## Mixed:

Es natural combinar ambas técnicas.

# Communication:
![Alt text](./Images/image-59.png)

![Alt text](./Images/image-60.png)
![Alt text](./Images/image-61.png)
![Alt text](./Images/image-62.png)

![Alt text](./Images/image-63.png)

## Factores a considerar

- `Overhead`: Tiempo - recursos de cómputo que se gastan en comunicación.
- `Latency`: Tiempo que se tarda en enviar un mensaje.
- `Badwidth`: Cantidad de datos que se pueden enviar en un tiempo dado.

# Agglomeration:
![Alt text](./Images/image-58.png)

![Alt text](./Images/image-64.png)

![Alt text](./Images/image-65.png)

## Fine-grained Parallelism (Paralelismo de grano fino):

- Largo número de pequeñas tareas.
- **Ventaja:** Burns distribución de carga de trabajo.
- **Desventaja:** Bajo ratio de computación / comunicación.
  - ![Alt text](./Images/image-66.png)

## Coarse-grained Parallelism (Paralelismo de grano grueso):

- Pequeño número de tareas grandes.
- **Ventaja:** Alto ratio de computación / comunicación.
- **Desventaja:** Puede causar desbalance de carga de trabajo.
  - ![Alt text](./Images/image-67.png)

>[!NOTE]
> A menudo se usa el medium-grained parallelism (Paralelismo de grano medio) para combinar las ventajas de ambos.

>[!CAUTION]
> Se debe de tener en cuenta la flexibilidad del programa, ya que si se dise;a para dos procesadores, no se podrá ejecutar en 4 procesadores y será necesario reescribir el programa.

# Mapping:

![Alt text](./Images/image-68.png)

**No es aplicable para:**
- Sigle-core processors (Procesadores de un solo núcleo).
- Automated task scheduling (Programación de tareas automatizada).


# Resumen:

![Alt text](./Images/image-69.png)


# Questions

![Alt text](./Images/image-70.png)

![Alt text](./Images/image-71.png)

![Alt text](./Images/image-72.png)

![Alt text](./Images/image-73.png)

![Alt text](./Images/image-74.png)

![Alt text](./Images/image-75.png)

![Alt text](./Images/image-76.png)

![Alt text](./Images/image-77.png)

![Alt text](./Images/image-78.png)

![Alt text](./Images/image-79.png)