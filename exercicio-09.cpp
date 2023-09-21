#include <iostream>

int main() {
    int numero;
    int anterior = 0;
    int atual = 1;
    int proximo = 0;

    // Solicita ao usuário o número limite da sequência de Fibonacci
    std::cout << "Digite um número inteiro para a sequência de Fibonacci: ";
    std::cin >> numero;

    std::cout << "Sequência de Fibonacci até " << numero << ":" << std::endl;

    // Imprime os primeiros números da sequência de Fibonacci até o número fornecido
    while (proximo <= numero) {
        std::cout << proximo << " ";
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    std::cout << std::endl;

    return 0;
}
