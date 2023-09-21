#include <iostream>

int main() {
    for (int i = 1; i <= 100; ++i) {
        // Verificar se o número é múltiplo de 3 e/ou 5
        bool multiploDe3 = (i % 3 == 0);
        bool multiploDe5 = (i % 5 == 0);

        // Imprimir "Fizz", "Buzz" ou "FizzBuzz" com base nas condições
        if (multiploDe3 && multiploDe5) {
            std::cout << "FizzBuzz";
        } else if (multiploDe3) {
            std::cout << "Fizz";
        } else if (multiploDe5) {
            std::cout << "Buzz";
        } else {
            std::cout << i;
        }

        // Imprimir um espaço após cada número ou palavra
        std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}
