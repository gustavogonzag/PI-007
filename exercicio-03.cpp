#include <iostream>

int main() {
    int numero;

    // Passo 1: Pedir ao usuário para fornecer um número inteiro
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "Por favor, digite um número inteiro positivo." << std::endl;
        return 1;
    }

    // Passo 2: Encontrar e imprimir os divisores do número
    std::cout << "Divisores de " << numero << ": ";
    for (int i = 1; i <= numero; ++i) {
        if (numero % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
