# 🧠 Simulador de Sistema Operacional

Este projeto é um **simulador de sistema operacional** desenvolvido em **C++**, com uma interface de linha de comando que permite gerenciar:

- 🗂️ Arquivos (sistema de arquivos simples)
- 🧠 Memória (com alocação dinâmica e blocos livres)
- 🔧 Processos (com filas e escalonamento básico)
- ⌨️ Entrada e Saída (simulada)

## 🚀 Funcionalidades implementadas

- ✔️ Criação e gerenciamento de processos
- ✔️ Atribuição de PID automático
- ✔️ Gerenciamento de memória com:
  - Blocos livres e ocupados
  - Tabela de alocação
  - Alocação dinâmica e liberação de memória
- ✔️ Sistema de arquivos em memória:
  - Criação, listagem e exclusão de arquivos
- ✔️ Simulação de operações de I/O (Entrada e Saída)
- ✔️ Interface de linha de comando com diversos comandos

## 💻 Comandos disponíveis

| Comando                           | Descrição                                      |
|-----------------------------------|------------------------------------------------|
| `ajuda`                           | Mostra a lista de comandos disponíveis         |
| `criar_processo <nome> <tempo> <prioridade>` | Cria um novo processo                         |
| `listar_processos`                | Lista todos os processos                      |
| `alocar_memoria <pid> <tamanho>`  | Aloca memória para um processo                |
| `liberar_memoria <pid>`           | Libera a memória de um processo               |
| `visualizar_memoria`              | Mostra o estado atual da memória              |
| `criar_arquivo <nome>`            | Cria um arquivo                               |
| `deletar_arquivo <nome>`          | Deleta um arquivo                             |
| `listar_arquivos`                 | Lista os arquivos presentes                   |
| `requisitar_io <pid>`             | Simula uma requisição de entrada/saída (I/O)  |
| `finalizar_io <pid>`              | Finaliza uma operação de entrada/saída        |
| `executar`                        | Executa o kernel e mostra o estado do sistema |
| `sair`                            | Encerra o simulador                           |

## 🗂️ Estrutura dos arquivos

```
.
├── include/          # Arquivos de cabeçalho (.h)
├── src/              # Implementações (.cpp)
└── README.md         # Documentação
```

## ⚙️ Como compilar

No terminal, execute:

```bash
g++ src/*.cpp -I include -o simulador
```

Ou, se preferir, use um ambiente como Visual Studio, CodeBlocks, ou outro IDE com suporte a C++.

## ▶️ Como executar

Após compilar, execute no terminal:

```bash
./simulador
```

O simulador exibirá a interface de linha de comando, permitindo digitar os comandos listados acima.

## 📌 Melhorias futuras

- [ ] Implementação de algoritmos de escalonamento (SJF, FCFS, Round Robin completo)
- [ ] Persistência dos arquivos no disco
- [ ] Gerenciamento de memória com algoritmos Best Fit e Worst Fit
- [ ] Interface gráfica (Qt ou Console aprimorado)
- [ ] Logs de execução e monitoramento

## 🧠 Autor

- Desenvolvido para fins acadêmicos e aprendizado de conceitos de Sistemas Operacionais.

## 📜 Licença

Este projeto é livre para uso educacional.
