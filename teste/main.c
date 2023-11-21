#include <stdio.h>
#include <stdlib.h>
#include "expressao.h"

int main() {
    // Exemplo de express�o em nota��o p�s-fixada: "2 4 + 5 *"
    const char *expressao = "2 4 + 5 *";
    double resultado = avaliarExpressaoPosfixada(expressao);
    printf("Resultado: %f\n", resultado);

    return 0;
}

