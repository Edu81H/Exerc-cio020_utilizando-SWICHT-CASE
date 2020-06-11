// Exercício020_utilizando SWICHT CASE.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

int main() {
    int numero;
    

    printf("Digite um numero \n");
    scanf_s("%d", &numero);

    switch (numero)
    {
    case 1: 
        printf("O numero eh...: %s \n","um");
        break;
    case 2:
        printf("O numero eh...: %s \n", "dois");
        break;
    case 3:
        printf("O numero eh...: %s \n", "tres");
        break;
    case 4 :
        printf("O numero eh...: %s \n", "quatro");
        break;
    case 5:
      printf ("O numero eh...: %s \n", "cinco");
        break;
    case 6:
        printf("O numero eh...: %s \n", "seis");
        break;
    case 7:
        printf("O numero eh...: %s \n", "sete");
        break;
    case 8:
        printf("O numero eh...: %s \n", "oito");
        break;
    case 9:
        printf("O numero eh...: %s \n", "nove");
        break;
    case 10:
        printf("O numero eh...: %s \n", "dez");
        break;
    default:
        printf("O numero digitado esta fora intervalo de 1 a 10. \n");
        break;
    }




    return 0 ;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
