#include "Catalogo.hpp"

Catalogo::~Catalogo() {
    for (std::vector<Produto*>::iterator it = this->_produtos.begin(); it != this->_produtos.end(); it++) {
        delete *it;
    }
}

void Catalogo::adicionar_produto(std::string nome, int idadeMinima, float valor) {
    // Brinquedo
    this->_id++;
    Produto* novoBrinquedo = new Brinquedo(this->_id, valor, nome, idadeMinima);
    this->_produtos.push_back(novoBrinquedo);
}

void Catalogo::adicionar_produto(std::string titulo, std::string autor, int ano, float valor) {
    // Livro
    this->_id++;
    Produto* novoLivro = new Livro(this->_id, valor, titulo, autor, ano);
    this->_produtos.push_back(novoLivro);
}

void Catalogo::adicionar_produto(std::string marca, std::string modelo, float valor) {
    // Eletronico
    this->_id++;
    Produto* novoEletronico = new Eletronico(this->_id, valor, marca, modelo);
    this->_produtos.push_back(novoEletronico);
}

Produto* Catalogo::buscar_produto(int id) {
    for (unsigned i=0; i < this->_produtos.size(); i++) {
        if (this->_produtos[i]->retorna_id() == id) return this->_produtos[i];
    }
    std::cout << "Produto não encontrado!" << std::endl;
    return nullptr;
}

void Catalogo::imprimir() {
    for (unsigned i=0; i < this->_produtos.size(); i++) {
        this->_produtos[i]->imprimir_info();
    }
}
