#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
    private:
        int _id;
        float _valorUnitario;

    public:
        Produto(int id, float valorUnitario);

        virtual ~Produto() = default;

        virtual void imprimir_info() = 0;

        int retorna_id();

        float retornaValorUnitario();
};

#endif // PRODUTO_H
