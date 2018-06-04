#include <tlsf.h>
#include <stdio.h>

static char mem[1024];

int main(int argc, char *argv[]) {
    printf("hello\n");
    tlsfptr_t pMem = (tlsfptr_t) mem;
    if (mem % ALIGN_SIZE != 0) {
        printf("Not aligned\n");
    }
    memset(mem, 0, 1024);
    tlsf_t tlsf = tlsf_create_with_pool(mem, 1024);
}
