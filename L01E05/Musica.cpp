#include "Musica.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>
#include <math.h>

Musica::Musica(int id, std::string nome, std::string artista, std::string album, float duracao) {
    this->_id = id;
    this->_nome = nome;
    this->_artista = artista;
    this->_album = album;
    this->_duracao = duracao;
    this->_favorita = false;
}

void Musica::imprimir_dados() {
    // assumindo que nenhuma musica tem mais que 60 min
    double totalSegundos = this->_duracao * 60;
    int mm = totalSegundos/60;
    double ss = ((totalSegundos/60) - mm) * 60;
    // quando minha variavel ss era 'int' o codigo dava erro de um segundo '-'

    std::cout << this->_id << "\t" << this->_album << "\t" << this->_artista << "\t" << this->_nome << "\t";
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << mm << ":";
    std::cout << std::setfill('0') << std::setw(2);
    std::cout << std::round(ss) << "\t" << this->_favorita << std::endl;
}
