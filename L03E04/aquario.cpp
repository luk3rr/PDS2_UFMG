#include "aquario.hpp"
#include "peixe.hpp"
#include "polvo.hpp"
#include <memory>

void Aquario::add_peixe(double peso, char sexo) {
    this->_criaturas.push_back(shared_ptr<Peixe>(new Peixe(peso, sexo)));
}

void Aquario::add_polvo(double qi) {
    this->_criaturas.push_back(shared_ptr<Polvo>(new Polvo(qi)));
}

void Aquario::acasalamento(int id1, int id2) {
    if (id1 < this->_criaturas.size() && id2 < this->_criaturas.size()) {
        list<unique_ptr<Criatura>> novasCriaturas = this->_criaturas[id1]->acasalar(this->_criaturas[id2]);
        
        for (list<unique_ptr<Criatura>>::iterator it = novasCriaturas.begin(); it != novasCriaturas.end(); it++) {
            this->_criaturas.push_back(shared_ptr<Criatura>(std::move(*it)));
        } 
    }
}

void Aquario::print() {
    std::cout << "=============" << std::endl;
    std::cout << "Aquario Info:" << std::endl;
    for (unsigned i = 0; i < this->_criaturas.size(); i++) {
        this->_criaturas[i]->print_info();
    } 
    std::cout << "=============" << std::endl;
}

Aquario::Aquario(const Aquario &orig) {
    for (unsigned i = 0; i < orig._criaturas.size(); i++) {
        if (orig._criaturas[i]->get_subtipo() == "Polvo") {
            shared_ptr<Polvo> tmpCriatura = dynamic_pointer_cast<Polvo>(orig._criaturas[i]);
            //shared_ptr<Polvo> novoPolvo = tmpCriatura;
            this->_criaturas.push_back(tmpCriatura);

        } else if (orig._criaturas[i]->get_subtipo() == "Peixe") {
            shared_ptr<Peixe> tmpCriatura = dynamic_pointer_cast<Peixe>(orig._criaturas[i]);
            //shared_ptr<Peixe> novoPeixe = tmpCriatura;
            this->_criaturas.push_back(tmpCriatura);
        }
    }
}
