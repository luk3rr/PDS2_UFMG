#include "DiarioClasse.hpp"

bool DiarioClasse::determinarAprovacao(double notaSemestre, double notaEspecial, double frequencia) {

    if (notaSemestre < 0 or notaSemestre > 100)
        throw ExcecaoNotaSemestreInvalida();

    if (notaEspecial < 0 or notaEspecial > 100)
        throw ExcecaoNotaEspecialInvalida();

    if (frequencia < 0 or frequencia > 1)
        throw ExcecaoFrequenciaInvalida();

    if (notaSemestre >= 60 and frequencia >= 0.75 )
        return true;

    else if (notaSemestre >= 40 and frequencia >= 0.75) {
        if (notaEspecial >= 60)
            return true;
        else 
            return false;
    }

    else
        return false;
}
