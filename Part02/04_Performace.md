- [Términos importantes](#términos-importantes)
- [Weak Scaling](#weak-scaling)
- [Ley de Amdahl](#ley-de-amdahl)
- [Eficiency](#eficiency)
- [Questions](#questions)


# Términos importantes

- `Throughput`: Cantidad de trabajo realizado por unidad de tiempo.

    ![Alt text](./Images/image-35.png)

- `Latency`: El tiempo que demora realizar una tarea.

    ![Alt text](./Images/image-36.png)

![Alt text](./Images/image-37.png)

- `Speedup`: Es la mejora de la performance de un programa al ejecutarlo en una computadora más rápida.

    ![Alt text](./Images/image-38.png)

    ![Alt text](./Images/image-39.png)

# Weak Scaling

Es cuando se aumenta la cantidad de procesadores para resolver un problema más grande.

# Ley de Amdahl

La ley de Amdahl es una fórmula que sirve medir que tanto se puede mejorar la performance de un programa al paralelizarlo.

![Alt text](./Images/image-40.png)

- P: Porcentaje de código paralelizable.
- S: Speedup de la porción paralelizable.

![Alt text](./Images/image-41.png)

![Alt text](./Images/image-42.png)

> Notamos que usar múltiples procesadores para la computación paralela solo es útil para programas altamente paralalelizables.

# Eficiency

![Alt text](./Images/image-43.png)

- Si el speedup es menor que 1, significará que el programa se ejecuta más lento al paralelizarlo.
- Si el speedup es mayor que 1, significará que el programa se ejecuta más rápido al paralelizarlo.


# Questions

![Alt text](./Images/image-44.png)

![Alt text](./Images/image-45.png)

![Alt text](./Images/image-46.png)

![Alt text](./Images/image-47.png)

![Alt text](./Images/image-48.png)

![Alt text](./Images/image-49.png)

![Alt text](./Images/image-50.png)

![Alt text](./Images/image-51.png)

![Alt text](./Images/image-52.png)

![Alt text](./Images/image-53.png)

