// NÃO ALTERE ESSA LINHA
#include "avaliacao_basica_ecommerce.hpp"
#include "Catalogo.hpp"
#include "Carrinho.hpp"

int main() {
  
    char comando;
    std::string nome, titulo, autor, marca, modelo;
    float valor;
    int ano, quantidade, idade, id;
    
    Catalogo loja;
    Carrinho meuCarrinho;

    while (std::cin >> comando) {
        switch (comando) {
            case 'q':
                std::cin >> nome >> idade >> valor;
                loja.adicionar_produto(nome, idade, valor);
                break;

            case 'l':
                std::cin >> titulo >> autor >> ano >> valor;
                loja.adicionar_produto(titulo, autor, ano, valor);
                break;

            case 'e':
                std::cin >> marca >> modelo >> valor;
                loja.adicionar_produto(marca, modelo, valor);
                break;

            case 'c':
                loja.imprimir();
                break;

            case 'p':
                std::cin >> id >> quantidade;
                meuCarrinho.adicionar_pedido(loja.buscar_produto(id), quantidade);
                break;

            case 'r':
                meuCarrinho.imprimir_resumo();
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
