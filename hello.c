// 1st print in console

// #include <stdio.h>

// int main() {
//     printf("Hello, Nikita!\n");
//     return 0;
// }


// to webassembly  ->  emcc hello.c -o hello.js -s EXPORTED_FUNCTIONS='["_hello"]' -s MODULARIZE -s EXPORT_NAME='createModule'



// 2nd to print in div


 
#include <stdio.h>

const char* hello() {
    return "Hello, Nikita!";
}

int main() {
    printf("%s\n", hello());
    return 0;
}



// here need to wrap in cwrap to export module

// to webassembly  -> emcc hello.c -o hello.js -s EXPORTED_FUNCTIONS='["_hello", "_main"]' -s EXPORTED_RUNTIME_METHODS='["cwrap"]' -s MODULARIZE -s EXPORT_NAME='createModule'

