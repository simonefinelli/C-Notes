/*
 * Insight of using pointers with arrays.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[] = "a string";
    char *p = sentence;

    printf("First Example\n");
    for (int i = 0; i < strnlen(sentence, sizeof(sentence)); i++) {
        printf("multiple[%d] = %c *(p+%d) = %c | &multiple[%d] = %p p+%d = %p\n",
               i, sentence[i], i, *(p + i), i, &sentence[i], i, p + i);
    }

    printf("\nSecond Example\n");
    long numbers[] = {10L, 20L, 30L, 40L, 50L};
    long *p_n = numbers;
    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) {
        printf("address p+%d (&multiple[%d]): %p | *(p+%d) value = %ld\n",
               i, i, p_n + i, i, *(p_n + i));
    }

    printf("\nType long uses %d bytes\n", (int)sizeof(long));

    return 0;
}
