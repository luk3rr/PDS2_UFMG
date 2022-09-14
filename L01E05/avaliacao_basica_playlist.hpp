#ifndef AVALIACAO_H
#define AVALIACAO_H

#include <iostream>

#include "Playlist.hpp"

using namespace std;

void avaliacao_basica() {
    
    cout << "----------" << endl;

    Musica* musica = new Musica(0, "N0", "A0","B1", 1.5);
    musica->imprimir_dados();
    delete musica;

    cout << "----------" << endl;

    Playlist playlist;

    playlist.adicionar_musica("N1", "A1","B1", 0.5);
    playlist.adicionar_musica("N2", "A1","B1", 6.25);
    playlist.adicionar_musica("N3", "A1","B1", 12.5);
    playlist.adicionar_musica("N1", "A2","B1", 18.75);
    playlist.adicionar_musica("N2", "A2","B1", 22.0);
    playlist.imprimir();

    cout << "----------" << endl;

    musica = playlist.buscar_musica("N2", "A2");
    musica->imprimir_dados();

    musica = playlist.buscar_musica("N3", "A2");
    if (musica == nullptr) {
        cout << "CORRECT" << endl; 
    } else {
        cout << "ERROR"; 
    }

    cout << "----------" << endl;

    musica = playlist.buscar_musica("N1", "A1");
    playlist.remover_musica(musica->_id);
    playlist.imprimir();

    cout << "----------" << endl;

    musica = playlist.buscar_musica("N1", "A2");
    playlist.favoritar_musica(musica->_id);
    playlist.imprimir();

    cout << "----------" << endl;

    musica = playlist.buscar_musica("N1", "A2");
    playlist.desfavoritar_musica(musica->_id);
    playlist.imprimir();    

    cout << "----------" << endl;
    
}

#endif
