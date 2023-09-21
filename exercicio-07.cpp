#include <iostream>

int main() {
    int altura;

    // Solicita a altura do padrão ao usuário
    std::cout << "Digite a altura do padrão: ";
    std::cin >> altura;

    char caractere = 'A'; // Inicializa o caractere com 'A'

    // Loop para gerar e imprimir o padrão
    for (int linha = 1; linha <= altura; ++linha) {
        for (int coluna = 1; coluna <= linha; ++coluna) {
            std::cout << caractere;
            ++caractere; // Avança para o próximo caractere
        }
        std::cout << std::endl;
    }

    return 0;
}
