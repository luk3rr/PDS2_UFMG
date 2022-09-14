#include <iostream>
#include <ostream>

int main(){

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada
    int N;
    std::cin >> N;

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *ptr = nullptr;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com os dados passados
    int vecLenght;
    std::cin >> vecLenght;
    int V[vecLenght];

    for (int i=0; i < vecLenght; i++) {
        std::cin >> V[i];
    }

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    std::cout << &N << std::endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    std::cout << N << std::endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    std::cout << &ptr << std::endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr << std::endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    std::cout << &V << std::endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    std::cout << &V[0] << std::endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    std::cout << V[0] << std::endl;
    
    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ptr = &N;

    // 12) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr << std::endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *ptr << std::endl;
        
    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
    if (&N == ptr) std::cout << true << std::endl;
    else std::cout << false << std::endl;

    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *ptr = 5;

    // 16) Imprima o VALOR da variável declarada em (1)
    std::cout << N << std::endl;

    // 17) Atribua o VALOR da variável (3) à variável declarada em (2)
    ptr = V;

    // 18) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr << std::endl;

    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *ptr << std::endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    ptr = &V[0];

    // 21) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr << std::endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *ptr << std::endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for (int k=0; k < vecLenght; k++) {
        ptr[k] *= 10;
    }   

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for (int l=0; l < vecLenght; l++) {
        if (l != vecLenght-1) std::cout << ptr[l] << " ";
        else std::cout << ptr[l] << std::endl;
    }

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    for (int m=0; m < vecLenght; m++) {
        if (m != vecLenght-1) std::cout << *(ptr + m) << " ";
        else std::cout << *(ptr + m) << std::endl;
    }   

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    for (int m=0; m < vecLenght; m++) {
       if (m != vecLenght-1) std::cout << *(V + m) << " ";
       else std::cout << *(V + m) << std::endl;
    }   

    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    ptr = &V[4];

    // 28) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr << std::endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *ptr << std::endl;

    // 30) Imprima o VALOR que é obtido quando acessamos o ENDEREÇO do ponteiro (2) decrementado de 4
    std::cout << ptr[-4] << std::endl;

    // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **ptrToPtr = &ptr;

    // 32) Imprima o VALOR da variável declarada em (31)
    std::cout << ptrToPtr << std::endl;

    // 33) Imprima o ENDEREÇO da variável declarada em (31)
    std::cout << &ptrToPtr << std::endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
    std::cout << *ptrToPtr << std::endl;

    // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)
    std::cout << **ptrToPtr << std::endl;
    
    return 0;
}
