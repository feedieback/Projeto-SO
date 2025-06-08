#include "Kernel.h"

Kernel::Kernel(int quantum)
    : escalonador(quantum) {
}

void Kernel::iniciar() {
    cout << "Inicializando Sistema" << endl;

    escalonador.adicionar_processo(Processo("P1", 5, &fs));
    escalonador.adicionar_processo(Processo("P2", 8, &fs));
    escalonador.adicionar_processo(Processo("P3", 6, &fs));
    cout << "Iniciando escalonador " << endl;
    escalonador.executar();

    cout << "Encerrando Sistema" << endl;
}
