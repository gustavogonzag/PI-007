#include <iostream>

int main() {
    std::cout << "Números primos de 1 a 100:" << std::endl;

    for (int numero = 2; numero <= 100; ++numero) {
        bool ehPrimo = true;

        // Verifica se o número é primo
        for (int divisor = 2; divisor * divisor <= numero; ++divisor) {
            if (numero % divisor == 0) {
                ehPrimo = false;
                break;
            }
        }

        // Se o número é primo, imprime-o
        if (ehPrimo) {
            std::cout << numero << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
