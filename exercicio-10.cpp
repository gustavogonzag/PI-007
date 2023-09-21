#include <iostream>
#include <cmath>

int main() {
    int numero, original, soma = 0, digito, quantidadeDigitos = 0;

    // Solicita um número inteiro ao usuário
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    original = numero; // Armazena uma cópia do número original

    // Calcula a quantidade de dígitos no número
    while (numero != 0) {
        numero /= 10;
        quantidadeDigitos++;
    }

    numero = original; // Restaura o valor original do número

    // Calcula a soma dos dígitos elevados à quantidade de dígitos
    while (numero != 0) {
        digito = numero % 10;
        soma += std::pow(digito, quantidadeDigitos);
        numero /= 10;
    }

    // Verifica se o número é um número Armstrong
    if (soma == original) {
        std::cout << original << " é um número Armstrong." << std::endl;
    } else {
        std::cout << original << " não é um número Armstrong." << std::endl;
    }

    return 0;
}
