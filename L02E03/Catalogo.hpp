#ifndef CATALOGO_H
#define CATALOGO_H

#include "Produto.hpp"
#include "Brinquedo.hpp"
#include "Livro.hpp"
#include "Eletronico.hpp"

#include <string>
#include <vector>

class Catalogo {
    private:
        std::vector<Produto*> _produtos;
        int _id = 0;

    public:
        ~Catalogo();

        void adicionar_produto(std::string nome, int idadeMinima, float valor); // brinquedo
        
        void adicionar_produto(std::string titulo, std::string autor, int ano, float valor); // livro
        
        void adicionar_produto(std::string marca, std::string modelo, float valor); // eletronico

        Produto* buscar_produto(int id);
        
        void imprimir();
};

#endif // CATALOGO_H
