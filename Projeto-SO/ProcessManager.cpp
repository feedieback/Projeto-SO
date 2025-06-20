#include "ProcessManager.h"

void ProcessManager::criarProcesso(const string& nome, int tempo, int prioridade) {
    Process p(nome, tempo, prioridade);
    processos.push_back(p);
    readyQueue.push(p);
    cout << "Processo " << nome << " criado.\n";
}

void ProcessManager::listarProcessos() {
    cout << "Listando processos:\n";
    for (const auto& p : processos) {
        cout << "- " << p.nome << " | Prioridade: " << p.prioridade << " | Tempo: " << p.tempoTotal << "\n";
    }
}