#include "uls.h"

static void tmain(int argc, char **argv);

int main(int argc, char **argv) {
    tmain(argc, argv);

//    system("leaks -q uls");
}


static void tmain(int argc, char **argv) {
    t_uls *uls = (t_uls *)malloc(sizeof(t_uls));

 



    free(uls);
}
