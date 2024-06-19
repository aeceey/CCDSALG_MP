#include <stdio.h>
#include <string.h>
#include "intopost.c"
#include "evaluate.c"

int main(){
    String256 input;
    String256 result;

    scanf(" %s", input);

    intopost(input, result);
    output(result);
    
    return 0;
}