#include <stdio.h>

int main() {
    int v_int = 10;
    float v_float = 5.5f;
    char v_char = 'A';

    int *p_int = &v_int;
    float *p_float = &v_float;
    char *p_char = &v_char;

    printf("--- INT ---\nValor: %d\nEnd. Variavel: %p\nEnd. Ponteiro: %p\nValor via Ponteiro: %d\n\n", v_int, (void*)&v_int, (void*)p_int, *p_int);
    printf("--- FLOAT ---\nValor: %.2f\nEnd. Variavel: %p\nEnd. Ponteiro: %p\nValor via Ponteiro: %.2f\n\n", v_float, (void*)&v_float, (void*)p_float, *p_float);
    printf("--- CHAR ---\nValor: %c\nEnd. Variavel: %p\nEnd. Ponteiro: %p\nValor via Ponteiro: %c\n", v_char, (void*)&v_char, (void*)p_char, *p_char);

    return 0;
}