#include "Kernel.h"

Kernel::Kernel() {}

void Kernel::iniciar() {
    cout << "Kernel inicializado com sucesso.\n";
}

void Kernel::executar() {
    cout << "Executando todos os gerenciadores...\n";

    cout << "\n Processos:\n";
    pm.listarProcessos();

    cout << "\n Memoria:\n";
    mm.visualizarMemoria();

    cout << "\n Arquivos:\n";
    fm.listarArquivos();

    cout << "\n IO:\n";
    cout << "Nenhuma operacao de IO pendente simulada no momento.\n";
}

void Kernel::interfaceUsuario() {
    cout << "Bem-vindo ao Simulador de Sistema Operacional\n";
    cout << "Digite 'ajuda' para ver a lista de comandos.\n";

    string comando;
    while (true) {
        cout << "\n> ";
        getline(cin, comando);

        if (comando == "sair") break;

        else if (comando == "ajuda") {
            cout << "\n Lista de comandos disponiveis:\n";
            cout << " - criar_processo <nome> <tempo> <prioridade>\n";
            cout << " - listar_processos\n";
            cout << " - alocar_memoria <pid> <tamanho>\n";
            cout << " - liberar_memoria <pid>\n";
            cout << " - visualizar_memoria\n";
            cout << " - criar_arquivo <nome>\n";
            cout << " - deletar_arquivo <nome>\n";
            cout << " - listar_arquivos\n";
            cout << " - requisitar_io <pid>\n";
            cout << " - finalizar_io <pid>\n";
            cout << " - executar (mostra o estado atual de tudo)\n";
            cout << " - sair\n";
        }

        else if (comando == "listar_processos") pm.listarProcessos();
        else if (comando == "listar_arquivos") fm.listarArquivos();
        else if (comando == "visualizar_memoria") mm.visualizarMemoria();
        else if (comando == "executar") executar();

        else if (comando.find("criar_processo") == 0) {
            string nome;
            int tempo, prioridade;
            istringstream(comando) >> comando >> nome >> tempo >> prioridade;
            pm.criarProcesso(nome, tempo, prioridade);
        }

        else if (comando.find("alocar_memoria") == 0) {
            int pid, tamanho;
            istringstream(comando) >> comando >> pid >> tamanho;
            mm.alocarMemoria(pid, tamanho);
        }

        else if (comando.find("liberar_memoria") == 0) {
            int pid;
            istringstream(comando) >> comando >> pid;
            mm.liberarMemoria(pid);
        }

        else if (comando.find("criar_arquivo") == 0) {
            string nome;
            istringstream(comando) >> comando >> nome;
            fm.criarArquivo(nome);
        }

        else if (comando.find("deletar_arquivo") == 0) {
            string nome;
            istringstream(comando) >> comando >> nome;
            fm.deletarArquivo(nome);
        }

        else if (comando.find("requisitar_io") == 0) {
            int pid;
            istringstream(comando) >> comando >> pid;
            io.requisitarIO(pid);
        }

        else if (comando.find("finalizar_io") == 0) {
            int pid;
            istringstream(comando) >> comando >> pid;
            io.finalizarIO(pid);
        }

        else {
            cout << " Comando desconhecido. Digite 'ajuda' para ver os comandos disponiveis.\n";
        }
    }
}
