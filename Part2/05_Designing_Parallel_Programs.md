![Alt text](image-54.png)

# Partitioning:

Romper el problema en partes más pequeñas.

![Alt text](image-55.png)

## Domain decomposition (Dominio de descomposición):

![Alt text](image-56.png)

## Functional decomposition (Descomposición funcional):

Comienza considerando todo el problema como una sola función, y luego se divide en funciones más pequeñas.

![Alt text](image-57.png)

## Mixed:

Es natural combinar ambas técnicas.

# Communication:
![Alt text](image-59.png)

![Alt text](image-60.png)
![Alt text](image-61.png)
![Alt text](image-62.png)

![Alt text](image-63.png)

## Factores a considerar

- `Overhead`: Tiempo - recursos de cómputo que se gastan en comunicación.
- `Latency`: Tiempo que se tarda en enviar un mensaje.
- `Badwidth`: Cantidad de datos que se pueden enviar en un tiempo dado.

# Agglomeration:
![Alt text](image-58.png)

![Alt text](image-64.png)

![Alt text](image-65.png)

## Fine-grained Parallelism (Paralelismo de grano fino):

- Largo número de pequeñas tareas.
- **Ventaja:** Burns distribución de carga de trabajo.
- **Desventaja:** Bajo ratio de computación / comunicación.
  - ![Alt text](image-66.png)

## Coarse-grained Parallelism (Paralelismo de grano grueso):

- Pequeño número de tareas grandes.
- **Ventaja:** Alto ratio de computación / comunicación.
- **Desventaja:** Puede causar desbalance de carga de trabajo.
  - ![Alt text](image-67.png)

>[!NOTE]
> A menudo se usa el medium-grained parallelism (Paralelismo de grano medio) para combinar las ventajas de ambos.

>[!CAUTION]
> Se debe de tener en cuenta la flexibilidad del programa, ya que si se dise;a para dos procesadores, no se podrá ejecutar en 4 procesadores y será necesario reescribir el programa.

# Mapping:

![Alt text](image-68.png)

**No es aplicable para:**
- Sigle-core processors (Procesadores de un solo núcleo).
- Automated task scheduling (Programación de tareas automatizada).


# Resumen:

![Alt text](image-69.png)


# Questions

![Alt text](image-70.png)

![Alt text](image-71.png)

![Alt text](image-72.png)

![Alt text](image-73.png)

![Alt text](image-74.png)

![Alt text](image-75.png)

![Alt text](image-76.png)

![Alt text](image-77.png)

![Alt text](image-78.png)

![Alt text](image-79.png)