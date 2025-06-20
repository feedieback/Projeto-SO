#ifndef MEMORY_MANAGER_H
#define MEMORY_MANAGER_H

#include <iostream>
#include <vector>
using namespace std;

struct BlocoMemoria {
    int inicio;
    int tamanho;
    int pid;
    bool livre;

    BlocoMemoria(int i, int t, int p = -1, bool l = true)
        : inicio(i), tamanho(t), pid(p), livre(l) {
    }
};

class MemoryManager {
public:
    MemoryManager();
    void alocarMemoria(int pid, int tamanho);
    void liberarMemoria(int pid);
    void visualizarMemoria();

private:
    vector<BlocoMemoria> blocos;
    const int tamanhoTotal = 1024;
};

#endif
