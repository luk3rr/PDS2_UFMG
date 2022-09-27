#include "RegistroAvaliacoes.hpp"

void RegistroAvaliacoes::adicionar_usuario(std::string login, std::string nome) {
    Usuario* novoUsuario = new Usuario(login, nome);
    this->_usuarios[login] = novoUsuario;
}

void RegistroAvaliacoes::adicionar_filme(std::string nome, std::string genero, int duracao) {
    this->contadorFilmes += 1;
    Filme* novoFilme = new Filme(contadorFilmes, nome, genero, duracao);
    this->_filmes[contadorFilmes] = novoFilme;
}

void RegistroAvaliacoes::adicionar_review(int idFilme, std::string loginUsuario, std::string comentario, float nota) {
    Filme* filme = this->_filmes[idFilme];
    Usuario* usuario = this->_usuarios[loginUsuario];
    usuario->associar_review(filme->adicionar_review(comentario, nota));
}

void RegistroAvaliacoes::imprimir_estatisticas_usuarios() {
    for (std::map<std::string, Usuario*>::iterator it = this->_usuarios.begin(); it != this->_usuarios.end(); it++) {
        it->second->imprimir_info();
    }
}

void RegistroAvaliacoes::imprimir_registro_geral() {
    for (std::map<int, Filme*>::iterator it = this->_filmes.begin(); it != this->_filmes.end(); it++) {
        it->second->imprimir_nota_consolidada();
    }
}

void RegistroAvaliacoes::imprimir_reviews_usuario(std::string login) {
    this->_usuarios.find(login)->second->imprimir_reviews();
}
