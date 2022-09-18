// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_playlist.hpp"

#include <iostream>
#include <string>
#include <vector>
#include "Musica.hpp"
#include "Playlist.hpp"

int main() {
    
    char comando = ' ';
    std::string nome, artista, album;
    float duracao;
    Playlist playlist;

    while (std::cin >> comando) {
        switch (comando) {
            case 'a':
                std::cin >> nome;
                std::cin >> artista;
                std::cin >> album;
                std::cin >> duracao;
                playlist.adicionar_musica(nome, artista, album, duracao); 
                break;

            case 's':
                std::cin >> nome;
                std::cin >> artista;
                if (playlist.buscar_musica(nome, artista) != nullptr) playlist.buscar_musica(nome, artista)->imprimir_dados();
                break;

            case 'r':
                std::cin >> nome;
                std::cin >> artista;
                playlist.remover_musica(playlist.buscar_musica(nome, artista)->_id);
                break;

            case 'f':
                std::cin >> nome;
                std::cin >> artista;
                playlist.favoritar_musica(playlist.buscar_musica(nome, artista)->_id);
                break;

            case 'd':
                std::cin >> nome;
                std::cin >> artista;
                playlist.desfavoritar_musica(playlist.buscar_musica(nome, artista)->_id);
                break;

            case 'p':
                playlist.imprimir();
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
