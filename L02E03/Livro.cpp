#include "Livro.hpp"

Livro::Livro(int id, float valor, std::string titulo, std::string autor, int ano) : Produto(id, valor) {
    this->_titulo = titulo;
    this->_autor = autor;
    this->_ano = ano;
}

void Livro::imprimir_info() {
    std::cout << this->retorna_id() << "\tLivro\t" << this->_titulo << "\t" 
        << this->_autor << "\t" << this->_ano << "\tR$ " << std::fixed 
        << std::setprecision(2) << this->retornaValorUnitario() << std::endl;
}
