# Simulador de Escalonamento de Processos

Simulação de um sistema operacional simples com escalonamento de processos utilizando o algoritmo **Round Robin**, escrito em **C++**.

O sistema contém:
- Gerenciador de processos
- Escalonador com quantum configurável
- Um kernel básico que inicializa e coordena a execução dos processos

---

## Estrutura do Projeto

```
.
├── Processo.h / Processo.cpp         # Classe que representa um processo
├── Escalonador.h / Escalonador.cpp  # Implementação do escalonador Round Robin
├── Kernel.h / Kernel.cpp             # "Cérebro" que orquestra a simulação
├── main.cpp                          
```

---

##  Exemplo de Saída

```
Inicializando Sistema

Executando Processo P1 (restante: 5)
Tempo usado: 3, restante: 2
P1 volta pra fila

Executando Processo P2 (restante: 8)
Tempo usado: 3, restante: 5
P2 volta pra fila

...

P3 finalizado 

Encerrando Sistema
```
