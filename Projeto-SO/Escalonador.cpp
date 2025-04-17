#include "Escalonador.h"

EscalonadorRoundRobin::EscalonadorRoundRobin(int q) : quantum(q) {}

void EscalonadorRoundRobin::adicionar_processo(const Processo& p) {
    fila.push(p);
}

void EscalonadorRoundRobin::executar() {
    while (!fila.empty()) {
        Processo processo = fila.front();
        fila.pop();

        cout << " Executando " << endl;
        processo.exibir();

        int tempo_usado = min(quantum, processo.tempo_restante);
        processo.tempo_restante -= tempo_usado;

        cout << " Tempo usado: " << tempo_usado << ", restante: " << processo.tempo_restante << endl;

        if (processo.tempo_restante > 0) {
            cout << processo.pid << " volta pra fila" << endl;
            fila.push(processo);
        } else {
            cout << processo.pid << " finalizado" << endl;
        }
    }
}
