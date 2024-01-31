#include <iostream>
#include <opencv4/opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// Escala de grises a caracteres ASCII
const char asciiChars[] = "@%#*+=-:. ";

void convertirAASCII(Mat& imagen) {
    int ancho = imagen.cols;
    int alto = imagen.rows;

    for (int i = 0; i < alto; ++i) {
        for (int j = 0; j < ancho; ++j) {
            // Obtener intensidad de escala de grises del píxel
            int intensidad = static_cast<int>(imagen.at<uchar>(i, j));

            // Normalizar la intensidad a un rango entre 0 y 1
            double normalizado = intensidad / 255.0;

            // Calcular índice de caracter ASCII correspondiente
            int indice = static_cast<int>(normalizado * (sizeof(asciiChars) - 1));

            // Imprimir el caracter en la consola
            cout << asciiChars[indice];
        }
        cout << endl;
    }
}

int main() {
    // Cargar la imagen
    Mat imagen = imread("tu_imagen.jpg", IMREAD_GRAYSCALE);

    if (imagen.empty()) {
        cerr << "No se pudo cargar la imagen." << endl;
        return -1;
    }

    // Redimensionar la imagen para que se ajuste a la pantalla
    resize(imagen, imagen, Size(50, 50));

    // Convertir la imagen a arte ASCII
    convertirAASCII(imagen);

    return 0;
}

