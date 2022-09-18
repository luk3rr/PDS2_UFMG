#include "Musica.hpp"
#include "Playlist.hpp"

#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
 
void Playlist::adicionar_musica(std::string nome, std::string artista, std::string album, float duracao) {
    this->idMusicaPlaylist += 1;
    Musica* musica = new Musica(this->idMusicaPlaylist, nome, artista, album, duracao);
    musica->proximo = nullptr;

    if (this->primeiro == nullptr) {
        this->primeiro = musica;
        this->ultimo = musica;
    } 
    else {
        this->ultimo->proximo = musica;
        this->ultimo = musica;
    }
}

Musica* Playlist::buscar_musica(std::string nome, std::string artista) {
    Musica* cacador = this->primeiro;
    while (cacador != nullptr) {
        if (cacador->_artista == artista && cacador->_nome == nome) {
            return cacador;
        } 
        else {
            cacador = cacador->proximo;
        }
    }
    return nullptr;
}

void Playlist::remover_musica(int id) {
    Musica* cacador = this->primeiro;
    Musica* noAnterior = nullptr;

    while (cacador != nullptr) {
        if (cacador->_id == id) {
            if (this->primeiro == cacador ) {
                if (this->ultimo == cacador) {
                    // Caso a musica seja a primeira e unica da playlist
                    this->primeiro = nullptr;
                    this->ultimo = nullptr;
                } 
                else {
                    // Caso a musica seja a primeira mas nao a ultima da playlist
                    this->primeiro = cacador->proximo;
                }
            }
            else if (cacador != this->primeiro) {
                if (cacador != this->ultimo) {
                    // Caso a musica esteja no meio da playlist
                    noAnterior->proximo = cacador->proximo;
                }
                else {
                    // Caso a musica seja a ultima da playlist
                    this->ultimo = noAnterior;
                    noAnterior->proximo = nullptr;

                }
            }
        delete cacador;
        break;
       }
        noAnterior = cacador;
        cacador = cacador->proximo;
    }
}

void Playlist::favoritar_musica(int id) {
    Musica* cacador = this->primeiro;
    Musica* noAnterior = nullptr;
    
    while (cacador != nullptr) {
        if (cacador->_id == id) {
            if (cacador->_favorita == true) break;
            if (this->primeiro == cacador) { 
                // Caso a musica seja a primeira da playlist
                cacador->_favorita = true;

            } else if (this->ultimo == cacador) {
                // Caso a musica seja a ultima da playlist
                cacador->_favorita = true;
                cacador->proximo = this->primeiro;
                this->ultimo = noAnterior;
                noAnterior->proximo = nullptr;
                this->primeiro = cacador;

            } else {
                // Caso a musica esteja no meio da playlist
                cacador->_favorita = true;
                noAnterior->proximo = cacador->proximo;
                cacador->proximo = this->primeiro;
                this->primeiro = cacador;

            }
            break;
        }
        noAnterior = cacador;
        cacador = cacador->proximo;
    }
}

void Playlist::desfavoritar_musica(int id) {
    Musica* cacador = this->primeiro;
    Musica* noAnterior = nullptr;
    
    while (cacador != nullptr) {
        if (cacador->_id == id) {
            if (cacador->_favorita == false) break;
            if (this->ultimo == cacador) {
                // Caso a musica seja a ultima da playlist
                cacador->_favorita = false;

            } else if (this->primeiro == cacador) {
                // Caso a musica seja a primeira da playlist
                cacador->_favorita = false;
                this->ultimo->proximo = cacador;
                this->ultimo = cacador;
                this->primeiro = cacador->proximo;
                cacador->proximo = nullptr;

            } else {
                // Caso a musica esteja no meio da playlist
                cacador->_favorita = false;
                noAnterior->proximo = cacador->proximo;
                this->ultimo->proximo = cacador;
                this->ultimo = cacador;
                cacador->proximo = nullptr;

            }
            break;
        }
        noAnterior = cacador;
        cacador = cacador->proximo;
    }
}

void Playlist::imprimir() {
    Musica* cacador = this->primeiro;
    double tempoTotal = 0;
    
    while (cacador != nullptr) {
        cacador->imprimir_dados();
        tempoTotal += cacador->_duracao;
        cacador = cacador->proximo;
    }
    int hh = tempoTotal/60;
    double segundosSemHora = (tempoTotal - hh*60) * 60;
    int mm = segundosSemHora/60;
    double ss = ((segundosSemHora/60) - mm) * 60; 
    // quando minha variavel ss era 'int' o codigo dava erro de um segundo '-'
    
    std::cout << "Tempo total: ";
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << hh << ":";
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << mm << ":";
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << std::round(ss) << std::endl;
}


