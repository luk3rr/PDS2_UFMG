#ifndef MUSICA_H
#define MUSICA_H

#include <string>

typedef struct Musica {
    int _id; 
    std::string _nome; 
    std::string _artista; 
    std::string _album; 
    float _duracao; 
    bool _favorita; 

    Musica(int id, std::string nome, std::string artista, std::string album, float duracao);

    void imprimir_dados();

} Musica;

#endif // MUSICA_H
