#ifndef KERNEL_H
#define KERNEL_H
#include "Escalonador.h"
#include "SistemaArquivos.h"

class Kernel {
private:
    EscalonadorRoundRobin escalonador;
    SistemaArquivos fs;

public:
    Kernel(int quantum);
    void iniciar();
};

#endif
