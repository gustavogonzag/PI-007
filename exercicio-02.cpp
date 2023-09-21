#include <iostream>

int main() {
    int numero, reverso = 0, original, digito;

    // Passo 1: Pedir ao usuário para fornecer um número inteiro
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    original = numero; // Armazenar o número original para comparação posterior

    // Passo 2: Inverter os dígitos do número
    while (numero > 0) {
        digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    // Passo 3: Verificar se o número é um palíndromo
    if (original == reverso) {
        std::cout << "O número " << original << " é um palíndromo." << std::endl;
    } else {
        std::cout << "O número " << original << " não é um palíndromo." << std::endl;
    }

    return 0;
}
