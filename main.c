#include <stdio.h>  // Biblioteca para entrada e saída (printf e scanf)
#include <math.h> // Biblioteca para funções matemáticas
#include <locale.h> // Biblioteca para permitir acentuações na tela do código

void equacaoPrimeiroGrau() // Função responsável por resolver equação do primeiro grau
{

    float a, b, x; // Declaração das variáveis

    printf("\n--- EQUAÇÃO DO PRIMEIRO GRAU ---\n");

    printf("Digite o valor de a: ");  // Solicita o valor de a
    scanf("%f", &a);

    printf("Digite o valor de b: ");  // Solicita o valor de b
    scanf("%f", &b);

    if (a == 0) // Verifica se a é igual a zero
    {
        printf("Não é equação do primeiro grau.\n");
        return; // Encerra a função
    }

    printf("\nPasso 1: ax + b = 0\n");
    printf("Equação: %fx + %f = 0\n", a, b);

    printf("\nPasso 2: Isolar x\n");

    x = -b / a; // Calcula o valor de x

    printf("x = -b / a\n");
    printf("x = %f\n", x); // Exibe o resultado final
}

void equacaoSegundoGrau() // Função responsável por resolver equação do segundo grau
{

    float a, b, c;
    float delta, x1, x2;

    printf("\n--- EQUAÇÃO DO SEGUNDO GRAU ---\n");

    printf("Digite o valor de a: "); // Entrada dos coeficientes
    scanf("%f", &a);

    printf("Digite o valor de b: "); // Entrada dos coeficientes
    scanf("%f", &b);

    printf("Digite o valor de c: "); // Entrada dos coeficientes
    scanf("%f", &c);

    if (a == 0)  // Verifica se a é zero
    {
        printf("Não é equação do segundo grau.\n");
        return;
    }

    printf("\nPasso 1: Calcular Delta\n");

    delta = b*b - 4*a*c; // Calcula o valor do discriminante (Delta)

    printf("Delta = %f\n", delta);

    if (delta < 0) // verifica se delta é menor que 0
    {

        printf("Não existem raízes reais.\n");

    }
    else // condição, caso delta seja maior que 0
    {

        printf("\nPasso 2: Calcular as raízes\n");

        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
}

void sobrePrograma() // procedimento que contém os dados de quem criou o programa
{

    printf("\n--- SOBRE O PROGRAMA ---\n");

    printf("Sistema desenvolvido por:\n");
    printf("Victor Geraldo Delfino\n");
    printf("Curso: Sistemas de Informação\n");
    printf("Universidade: Uniavan matriz Balneário Camboriú\n");
    printf("Professor responsável:  Alessandro João Brassanini\n");
}

int main() // início do código
{

    int opcao; // Variável para armazenar a escolha do usuário
    setlocale(LC_ALL, "Portuguese"); // Configura o idioma para permitir acentuação (lá da biblioteca locale.h)
    do
    {
          // Exibe o menu principal
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 - Resolver equação do primeiro grau\n");
        printf("2 - Resolver equação do segundo grau\n");
        printf("3 - Sobre o Programa\n");
        printf("0 - Sair\n");
          // Solicita a opção do usuário
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao)  // Verifica qual opção foi escolhida
        {

        case 1: // Chama a função do primeiro grau
            equacaoPrimeiroGrau();
            break;

        case 2: // Chama a função do segundo grau
            equacaoSegundoGrau();
            break;

        case 3: // Mostra as informações do programa
            sobrePrograma();
            break;

        case 0: // Encerra o programa
            printf("Encerrando programa...\n");
            break;

        default: // Caso o usuário digite uma opção inválida
            printf("Opção inválida.\n");
        }

    }
    while(opcao != 0);

    return 0; // Finaliza o programa
}
