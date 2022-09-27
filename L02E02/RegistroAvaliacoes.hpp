#ifndef REGISTRO_AVALIACOES_H
#define REGISTRO_AVALIACOES_H

#include "Usuario.hpp"
#include "Filme.hpp"
#include <map>
#include <string>

class RegistroAvaliacoes {
    private:
        std::map<std::string, Usuario*, std::less<std::string>> _usuarios;
        std::map<int, Filme*> _filmes;
        int contadorFilmes = 0;

    public:
        ~RegistroAvaliacoes();

        void adicionar_usuario(std::string login, std::string nome);

        void adicionar_filme(std::string nome, std::string genero, int duracao);

        void adicionar_review(int idFilme, std::string loginUsuario, std::string comentario, float nota);

        void imprimir_estatisticas_usuarios();

        void imprimir_registro_geral();

        void imprimir_reviews_usuario(std::string login);
};

#endif // REGISTRO_AVALIACOES_H
