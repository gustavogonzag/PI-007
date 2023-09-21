#include <iostream>

int main() {
    int numero;
    int somaDivisores = 0;

    // Solicita um número inteiro ao usuário
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    // Verifica os divisores e calcula a soma
    for (int i = 1; i < numero; ++i) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDivisores == numero) {
        std::cout << numero << " é um número perfeito." << std::endl;
    } else {
        std::cout << numero << " não é um número perfeito." << std::endl;
    }

    return 0;
}
