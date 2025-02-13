//
// Created by anton on 2/13/25.
//
#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char **argv){
    printf("cpu id: %d\n", getcpuid());
}