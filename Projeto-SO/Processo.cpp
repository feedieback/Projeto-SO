#include "Processo.h"

Processo::Processo(std::string id, int tempo_execucao)
    : pid(id), tempo_restante(tempo_execucao) {}

void Processo::exibir() const {
    cout << "Processo " << pid << " (restante: " << tempo_restante << ")\n";
}