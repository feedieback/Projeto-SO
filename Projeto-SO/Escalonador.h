#ifndef ESCALONADOR_H
#define ESCALONADOR_H

#include "Processo.h"
#include <queue>
#include <iostream>
using namespace std;

class EscalonadorRoundRobin {
private:
    int quantum;
    std::queue<Processo> fila;

public:
    EscalonadorRoundRobin(int q);
    void adicionar_processo(const Processo& p);
    void executar();
};

#endif
