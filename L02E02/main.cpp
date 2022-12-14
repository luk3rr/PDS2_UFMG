// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_cinereview.hpp"

int main() {
  
    char comando;
    std::string login, nome, genero, comentario;
    int duracao, id;
    float nota;
    
    RegistroAvaliacoes imdb;

    while (std::cin >> comando) {
        switch (comando) {
            case 'u':
                std::cin >> login >> nome;
                imdb.adicionar_usuario(login, nome);
                break;

            case 'f':
                std::cin >> nome >> genero >> duracao;
                imdb.adicionar_filme(nome, genero, duracao);
                break;

            case 'r':
                std::cin >> id >> login >> comentario >> nota;
                imdb.adicionar_review(id, login, comentario, nota);
                break;

            case 'p':
                imdb.imprimir_registro_geral();
                break;

            case 's':
                imdb.imprimir_estatisticas_usuarios();
                break;

            case 'l':
                std::cin >> login;
                imdb.imprimir_reviews_usuario(login);
                break;

            case 'b':
                avaliacao_basica();
                break;

            case 'x':
                return 0;
        }
    }

    return 0;
}
