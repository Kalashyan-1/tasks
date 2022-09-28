#include <iostream>

void memset(void* src, void* dest, size_t c);

int main() {

    char arr[] = "Armenia";
    int size = sizeof(arr);
    char arr2[size];
    memset(arr, arr2, size);
}
void memset(void* src, void* dest, size_t c) {

    for (int i = 0; i < c; ++i) {

        *((char*)dest + i) = *((char*)src + i);
        std::cout << *((char*)dest + i);
    }


}
