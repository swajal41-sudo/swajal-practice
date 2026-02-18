#include <stdio.h>
#include <limits.h>

unsigned long long get_biggest_number() {
    unsigned long long i = 0;
    while (1) {
        unsigned long long prev = i;
        i += 1000000000000ULL;
        if (i < prev) {
            return prev;
        }
    }
}

int main()
{
    printf("Hello world\n");
    unsigned long long biggest = get_biggest_number();
    printf("Biggest possible number: %llu\n", biggest);
    return 0;
}
