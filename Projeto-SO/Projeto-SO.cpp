#include "Kernel.h"

int main() {
    Kernel kernel;
    kernel.iniciar();
    kernel.interfaceUsuario();
    kernel.executar();
    return 0;
}