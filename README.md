# Cuello de botella entre el procesador y la memoria

Página educativa e interactiva · Arquitectura de Computadores (ISO 203) · UNICIENCIA · Docente: Wilmer Callejas

- `index.html`: la página (HTML, CSS y JS en un solo archivo).
- `src/actividad.hpp` y `src/main.cpp`: ejemplo en C++ con la clase principal `Actividad`, que se extiende en `Cuestionario` y `Simulacion` (herencia), con datos privados (encapsulamiento).

Compilar el ejemplo: `g++ -std=c++17 src/main.cpp -o demo && ./demo`

## Publicar en GitHub Pages
1. Crea un repositorio y sube estos archivos a la rama `main`.
2. En **Settings → Pages**, elige *Deploy from a branch*, rama `main`, carpeta `/ (root)`.
3. En unos minutos la página estará en `https://TU-USUARIO.github.io/NOMBRE-REPO/`.
