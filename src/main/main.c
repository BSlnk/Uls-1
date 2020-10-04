#include "uls.h"

static void test(int argc, char **argv);

int main(int argc, char **argv) {
    test(argc, argv);

//    system("leaks -q uls");
}


static void test(int argc, char **argv) {
    t_uls *uls = (t_uls *)malloc(sizeof(t_uls));





    free(uls);

}

