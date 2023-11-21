#include "expressao.h"
#include "pilha.h"
#include <ctype.h>
#include <math.h>

double avaliarExpressaoPosfixada(const char *expressao) {
    Pilha pilha;
    inicializar(&pilha);

    for (int i = 0; expressao[i] != '\0'; ++i) {
        if (isdigit(expressao[i])) {
            // Se for um d�gito, converte para double e empilha
            empilhar(&pilha, (double)(expressao[i] - '0'));
        } else if (expressao[i] == ' ' || expressao[i] == '\t') {
            // Ignora espa�os em branco
            continue;
        } else {
            // se for operador
            double operando2 = desempilhar(&pilha);
            double operando1 = desempilhar(&pilha);

            switch (expressao[i]) {
                case '+':
                    empilhar(&pilha, operando1 + operando2);
                    break;
                case '-':
                    empilhar(&pilha, operando1 - operando2);
                    break;
                case '*':
                    empilhar(&pilha, operando1 * operando2);
                    break;
                case '/':
                    if (operando2 != 0.0) {
                        empilhar(&pilha, operando1 / operando2);
                    } else {
                        printf("Erro divis�o por zero\n");
                        exit(EXIT_FAILURE);
                    }
                    break;
                case 'l': // Logaritmo na base 10
                    empilhar(&pilha, log10(operando1));
                    break;
                case 's': // Seno
                    empilhar(&pilha, sin(operando1));
                    break;
                case 'c': // Cosseno
                    empilhar(&pilha, cos(operando1));
                    break;
                case 't': // Tangente
                    empilhar(&pilha, tan(operando1));
                    break;
                default:
                    printf("Erro: Operador inv�lido\n");
                    exit(EXIT_FAILURE);
            }
        }
    }

    // O resultado final estar� no topo da pilha
    return desempilhar(&pilha);
}


