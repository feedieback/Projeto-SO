#include "Processo.h"
#include "SistemaArquivos.h"

Processo::Processo(std::string id, int tempo_execucao, SistemaArquivos* fs)
    : pid(id), tempo_restante(tempo_execucao), fs(fs) {}

void Processo::exibir() const {
    cout << "Processo " << pid << " (restante: " << tempo_restante << ")\n";
}

void Processo::criarArquivo(const string& nome) {
    fs->criarArquivo(nome);
}

void Processo::escreverArquivo(const string& nome, const string& conteudo) {
    fs->escreverArquivo(nome, conteudo);
}

void Processo::lerArquivo(const string& nome) {
    fs->lerArquivo(nome);
}

void Processo::deletarArquivo(const string& nome) {
    fs->deletarArquivo(nome);
}