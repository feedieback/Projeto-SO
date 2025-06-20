#include "MemoryManager.h"

MemoryManager::MemoryManager() {
    blocos.push_back(BlocoMemoria(0, tamanhoTotal));
}

void MemoryManager::alocarMemoria(int pid, int tamanho) {
    for (auto& bloco : blocos) {
        if (bloco.livre && bloco.tamanho >= tamanho) {
            int restante = bloco.tamanho - tamanho;
            bloco.tamanho = tamanho;
            bloco.pid = pid;
            bloco.livre = false;
            if (restante > 0) {
                blocos.insert(blocos.begin() + (&bloco - &blocos[0]) + 1,
                    BlocoMemoria(bloco.inicio + tamanho, restante));
            }
            cout << "Memoria alocada para PID " << pid << ".\n";
            return;
        }
    }
    cout << "Erro: Memoria insuficiente.\n";
}

void MemoryManager::liberarMemoria(int pid) {
    for (auto& bloco : blocos) {
        if (!bloco.livre && bloco.pid == pid) {
            bloco.livre = true;
            bloco.pid = -1;
        }
    }

    // Junta blocos livres adjacentes
    for (size_t i = 0; i < blocos.size() - 1;) {
        if (blocos[i].livre && blocos[i + 1].livre) {
            blocos[i].tamanho += blocos[i + 1].tamanho;
            blocos.erase(blocos.begin() + i + 1);
        }
        else {
            i++;
        }
    }

    cout << "Memoria liberada para PID " << pid << ".\n";
}

void MemoryManager::visualizarMemoria() {
    cout << "\nEstado atual da memoria:\n";
    for (const auto& bloco : blocos) {
        cout << "[" << bloco.inicio << "-" << (bloco.inicio + bloco.tamanho - 1) << "] ";
        if (bloco.livre) {
            cout << "LIVRE\n";
        }
        else {
            cout << "PID:" << bloco.pid << "\n";
        }
    }
}
