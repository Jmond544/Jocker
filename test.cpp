#include <iostream>
#include <cmath>
#include <omp.h>
#include "EasyBMP/EasyBMP.h" // Incluye EasyBMP.h para trabajar con imágenes BMP

const int WIDTH = 800; // Ancho de la imagen
const int HEIGHT = 800; // Alto de la imagen
const int MAX_ITERATIONS = 1000; // Máximo número de iteraciones

// Función para calcular el conjunto de Mandelbrot
int mandelbrot(double real, double imag) {
    int iterations = 0;
    double r = 0.0, i = 0.0;

    while (iterations < MAX_ITERATIONS && r * r + i * i < 4.0) {
        double r_temp = r * r - i * i + real;
        i = 2.0 * r * i + imag;
        r = r_temp;
        iterations++;
    }

    return iterations;
}

int main() {
    BMP image;
    image.SetSize(WIDTH, HEIGHT);

    // Crear imagen en paralelo usando OpenMP
    #pragma omp parallel for schedule(dynamic)
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            // Mapear las coordenadas a la región del conjunto de Mandelbrot
            double real = (x - WIDTH / 2.0) * 4.0 / WIDTH;
            double imag = (y - HEIGHT / 2.0) * 4.0 / HEIGHT;

            // Calcular el valor del píxel en el conjunto de Mandelbrot
            int value = mandelbrot(real, imag);

            // Asignar el color del píxel en función del valor calculado
            RGBColor color(value % 256, value % 256, value % 256);
            image.SetPixel(x, y, color);
        }
    }

    // Guardar la imagen en un archivo BMP
    image.WriteToFile("mandelbrot.bmp");

    return 0;
}
