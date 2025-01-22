#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WORDS_SIZE 15*5
char* WORDS[WORDS_SIZE] = {
    "C", "new", "create", "class", "life",
    "game", "setup", "linux", "edit", "file",
    "init", "C++", "Python", "char", "class",
    "function", "void", "assembly", "weight", "big",
    "small", "China", "USA", "house", "rule",
    "buffer", "list", "vector", "math", "lib",
    "API", "lua", "graphics", "CIA", "A10",
    "100", "1", "2", "3", "sence",
    "profit", "no", "yes", "belive", "good",
    "world", "imagine", "config", "print", "program",
    "home", "compiler", "logic", "0", "history",
    "read", "memory", "bank", "destroy", "virus",
    "cool", "clicker", "en", "uk", "command",
    "rm", "makefile", "make", "clear", "in",
    "at", "for", "player", "text", "json"};

int main(void)
{
    unsigned long seed = time((void*)0);
    
    for (;;) {
        srand(++seed);
        unsigned int index = rand();
        printf("%s", WORDS[index%WORDS_SIZE]);
        char c = getchar();
        if (c=='q') return 0;
    }
}
