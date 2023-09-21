#include <iostream>
#include <iomanip> // Para formatação de saída

int main() {
    char continuar;

    do {
        // Variáveis para armazenar os dados do aluno
        long long matricula;
        double nota1, nota2, nota3, media;

        // Solicita a matrícula e as notas
        std::cout << "Digite a matrícula do aluno: ";
        std::cin >> matricula;
        std::cout << "Digite as três notas do aluno: ";
        std::cin >> nota1 >> nota2 >> nota3;

        // Calcula a média
        media = (nota1 + nota2 + nota3) / 3.0;

        // Imprime os dados formatados
        std::cout << "MATRICULA  NOTA1  NOTA2  NOTA3  MEDIA" << std::endl;
        std::cout << "===================================" << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << matricula << "       " << nota1 << "     " << nota2 << "     " << nota3 << "     " << media << std::endl;

        // Pergunta ao usuário se deseja continuar
        std::cout << "Deseja cadastrar outro aluno? (S/N): ";
        std::cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
