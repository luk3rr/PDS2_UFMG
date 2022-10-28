#ifndef PILHA
#define PILHA

#include <string>
#include <iostream>

template<class T>
class Pilha {
    private:
        T* _arr;
        int _max_tam, _top;

    public:
        Pilha(int max_tam);
        
        ~Pilha();

        bool push(const T &novo_e);

        bool pop(T &valor);

        bool get_maior(T &valor);

        int get_top();

        bool vazia();

        void print();

        void intera_top(std::string comando);
};

template<class T>
Pilha<T>::Pilha(int max_tam) {
    this->_arr = new T[max_tam];
    this->_max_tam = max_tam;
    this->_top = 0;
}

template<class T>
Pilha<T>::~Pilha() {
    delete[] this->_arr;
}

template<class T>
int Pilha<T>::get_top() {
    return this->_top;
}

template<class T>
bool Pilha<T>::vazia() {
    if (this->get_top() == 0) return true;
    else return false;
}

template<class T>
void Pilha<T>::intera_top(std::string comando) {
    if (comando == "add_elemento") this->_top++;
    else if (comando == "rm_elemento") this->_top--;
}

template<class T>
bool Pilha<T>::push(const T &novo_e) {
    if (this->get_top() < this->_max_tam) {
        this->_arr[this->_top] = novo_e;
        this->intera_top("add_elemento");
        return true;

    } else return false; 
}

template<class T>
bool Pilha<T>::pop(T &valor) {
    if (this->vazia()) return false;
    
    this->intera_top("rm_elemento");
    valor = this->_arr[this->_top];
    return true;
}

template<class T>
bool Pilha<T>::get_maior(T &valor) {
    if (this->vazia() == true) return false;

    T aux = this->_arr[0];
    
    for (unsigned i = 1; i < this->get_top(); i++) {
        if (this->_arr[i] > aux) aux = this->_arr[i];
    }
    valor = aux;
    return true;
}

template<class T>
void Pilha<T>::print() {
    for (unsigned i = 0; i < this->get_top(); i++) {
        std::cout << this->_arr[i] << std::endl;
    }
}

#endif // !PILHA
