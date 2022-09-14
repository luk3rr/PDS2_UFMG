#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "Musica.hpp"
#include <string>

typedef struct Node {
    Musica* musica;
    Node* proximo;

} Node;

typedef struct Playlist {
    Node* primeiro = nullptr;
    Node* ultimo = nullptr;
    int idMusicaPlaylist = 0;

    void adicionar_musica(std::string nome, std::string artista, std::string album, float duracao);

    Musica* buscar_musica(std::string nome, std::string artista);

    void remover_musica(int id);

    void favoritar_musica(int id);

    void desfavoritar_musica(int id);

    void imprimir();

} Playlist;

#endif // PLAYLIST_H
