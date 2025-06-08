#include "SistemaArquivos.h"

#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

struct Arquivo {
    string nome;
    string conteudo;

    Arquivo(const string& nome) : nome(nome), conteudo("") {}
};

class SistemaArquivos {
private:
    unordered_map<string, Arquivo> arquivos;  

public:
    void criarArquivo(const string& nome) {
        if (arquivos.find(nome) != arquivos.end()) {
            cout << "Arquivo \"" << nome << "\" já existe.\n";
            return;
        }
        arquivos[nome] = Arquivo(nome);
        cout << "Arquivo \"" << nome << "\" criado com sucesso.\n";
    }

    void escreverArquivo(const string& nome, const string& conteudo) {
        if (arquivos.find(nome) == arquivos.end()) {
            cout << "Arquivo \"" << nome << "\" não encontrado.\n";
            return;
        }
        arquivos[nome].conteudo = conteudo;
        cout << "Conteúdo escrito em \"" << nome << "\" com sucesso.\n";
    }

    void lerArquivo(const string& nome) {
        if (arquivos.find(nome) == arquivos.end()) {
            cout << "Arquivo \"" << nome << "\" não encontrado.\n";
            return;
        }
        cout << "Conteúdo de \"" << nome << "\": " << arquivos[nome].conteudo << "\n";
    }

    void listarArquivos() {
        if (arquivos.empty()) {
            cout << "Nenhum arquivo encontrado.\n";
            return;
        }
        cout << "Arquivos:\n";
        for (const auto& par : arquivos) {
            cout << "- " << par.first << "\n";
        }
    }

    void deletarArquivo(const string& nome) {
        if (arquivos.erase(nome)) {
            cout << "Arquivo \"" << nome << "\" deletado com sucesso.\n";
        } else {
            cout << "Arquivo \"" << nome << "\" não encontrado.\n";
        }
    }
};
