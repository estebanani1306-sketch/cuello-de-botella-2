#include <memory>
#include <vector>
#include "actividad.hpp"

int main() {
    auto simulacion = std::make_unique<Simulacion>("Simulacion: cuanto trabaja la CPU");

    auto cuestionario = std::make_unique<Cuestionario>("Cuestionario: cuello de botella");
    cuestionario->agregar(Pregunta(
        "Que es un cuello de botella en este contexto?",
        {"Cuando la RAM se llena",
         "Cuando la CPU calcula mas rapido de lo que la memoria entrega datos",
         "Cuando la cache es muy grande"}, 1,
        "La parte mas lenta del camino limita el rendimiento de todo el conjunto."));
    cuestionario->agregar(Pregunta(
        "Que nivel de memoria suele ser el mas rapido y pequeno?",
        {"RAM", "Cache L3", "Cache L1"}, 2,
        "Los niveles cercanos a la CPU son mas rapidos y pequenos."));
    cuestionario->agregar(Pregunta(
        "Cual es la meta realista de la jerarquia de memoria?",
        {"Eliminar la diferencia de velocidad",
         "Que el procesador espere con menos frecuencia",
         "Reemplazar la RAM por cache"}, 1,
        "La diferencia no desaparece; se reduce cuanto espera la CPU."));

    // POLIMORFISMO: una sola lista de Actividad, cada una se ejecuta a su manera
    std::vector<std::unique_ptr<Actividad>> actividades;
    actividades.push_back(std::move(simulacion));
    actividades.push_back(std::move(cuestionario));

    int total = 0;
    for (auto& a : actividades) {
        a->ejecutar();
        total += a->puntaje();
    }
    std::cout << "\nPuntaje total: " << total << "\nMenos espera, mas rendimiento.\n";
    return 0;
}
