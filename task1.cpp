#include <iostream>

void memset(void* v, char val, size_t count);

int main() {

    char ch1[] = "hello";
    char j = 'o';
    memset(ch1, j, 6);
}

void memset(void* v, char val, size_t count) { 

    for (int i = 0; i < count; ++i) {

        *((char*)v + i) = val;
        
           std::cout <<  *(char*)(v);
    }
    
}