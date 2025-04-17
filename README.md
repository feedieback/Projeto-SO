# 🧵 Simulador de Escalonamento de Processos

Simulação de um sistema operacional simples com escalonamento de processos utilizando o algoritmo **Round Robin**, escrito em **C++**.

O sistema contém:
- Gerenciador de processos
- Escalonador com quantum configurável
- Um kernel básico que inicializa e coordena a execução dos processos

---

## 📂 Estrutura do Projeto

```
.
├── Processo.h / Processo.cpp         # Classe que representa um processo
├── Escalonador.h / Escalonador.cpp  # Implementação do escalonador Round Robin
├── Kernel.h / Kernel.cpp             # "Cérebro" que orquestra a simulação
├── main.cpp                          # Ponto de entrada da aplicação
├── Makefile                          # Script para compilação
└── README.md                         # Você está aqui
```

---

## ⚙️ Como compilar

Certifique-se de ter o `g++` instalado. No terminal, digite:

```bash
make
```

Isso vai gerar o executável `simulador`.

---

## ▶️ Como rodar

Após compilar, execute:

```bash
./simulador
```

Você verá a execução passo a passo dos processos simulados, com mensagens indicando o tempo restante de cada um, finalizações e movimentações na fila de execução.

---

## 💡 Exemplo de Saída

```
Inicializando Kernel...

Executando Processo P1 (restante: 5)
→ Tempo usado: 3, restante: 2
P1 volta pra fila

Executando Processo P2 (restante: 8)
→ Tempo usado: 3, restante: 5
P2 volta pra fila

...

P3 finalizado ✅

Encerrando Kernel.
```

---

## 📌 Possíveis melhorias

- Gerenciamento de memória
- Threads dentro dos processos
- Outros algoritmos de escalonamento (SJF, FCFS, etc)
- Interface gráfica com Qt ou SDL
- Logs de execução em arquivo

---

## 🧠 Sobre

Este projeto é uma base para estudar **sistemas operacionais** e **estruturas de escalonamento**, ideal para uso didático ou para expandir em um projeto maior.
