#include <iostream>
#include <cstdlib> // Para a função rand()
#include <ctime>   // Para a função time()

int main() {
    // Inicialize a semente para gerar números aleatórios
    std::srand(std::time(nullptr));

    // Gere um número aleatório entre 1 e 100
    int numeroAleatorio = std::rand() % 100 + 1;

    int palpite;
    int tentativas = 0;

    std::cout << "Bem-vindo ao jogo de adivinhação!" << std::endl;

    do {
        // Peça ao usuário para fornecer um palpite
        std::cout << "Tente adivinhar o número (entre 1 e 100): ";
        std::cin >> palpite;
        
        // Verifique se o palpite está correto, alto ou baixo
        if (palpite < numeroAleatorio) {
            std::cout << "Seu palpite está baixo. Tente novamente." << std::endl;
        } else if (palpite > numeroAleatorio) {
            std::cout << "Seu palpite está alto. Tente novamente." << std::endl;
        } else {
            std::cout << "Parabéns! Você acertou o número em " << tentativas + 1 << " tentativas." << std::endl;
        }

        tentativas++;

    } while (palpite != numeroAleatorio);

    return 0;
}
