#include "doctest.h"
#include "DiarioClasse.hpp"

TEST_CASE("Teste 05 - Excecao NotaEspecial maior que o limite superior") {
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(40, 101, 1), ExcecaoNotaEspecialInvalida);
}

TEST_CASE("Teste 06 - Excecao NotaEspecial menor que o limite inferior") {
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(40, -40, 1), ExcecaoNotaEspecialInvalida);
}

TEST_CASE("Teste 07 - Excecao Frequencia menor que o limite inferior") {
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(100, 0, -0.76), ExcecaoFrequenciaInvalida);
}

TEST_CASE("Teste 08 - Excecao NotaSemestral menor que o limite inferior") {
    DiarioClasse diario;
    CHECK_THROWS_AS(diario.determinarAprovacao(-1, 65, 0.99), ExcecaoNotaSemestreInvalida);
}
TEST_CASE("Teste 09 - Aprovacao simples") {
    DiarioClasse diario;
    CHECK(diario.determinarAprovacao(60, 0, 0.75));   
}

TEST_CASE("Teste 10 - Reprovacao Exame Especial") {
    DiarioClasse diario;
    CHECK(!(diario.determinarAprovacao(41, 59, 0.75)));
}

TEST_CASE("Teste 11 - Reprovacao por infrequencia") {
    DiarioClasse diario;
    CHECK(!(diario.determinarAprovacao(99, 0, 0.74)));
}

TEST_CASE("Teste 12 - Reprovacao nota semestral menor que 40") {
    DiarioClasse diario;
    CHECK(!(diario.determinarAprovacao(39, 77, 0.88)));
}
// Os testes acima foram suficientes para cobrir todos os branches ツ

TEST_CASE("Teste 13 - Reprovacao simples") {
    DiarioClasse diario;
    CHECK(!(diario.determinarAprovacao(59.999, 0, 1)));
}

TEST_CASE("Teste 14 - Reprovacao infrequencia sem piedade") {
    DiarioClasse diario;
    CHECK(!(diario.determinarAprovacao(99.999, 0, 0.749999)));
}


