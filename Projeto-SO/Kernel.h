#ifndef KERNEL_H
#define KERNEL_H
#include "Escalonador.h"

class Kernel {
private:
    EscalonadorRoundRobin escalonador;

public:
    Kernel(int quantum);
    void iniciar();
};

#endif
