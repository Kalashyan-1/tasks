#include <iostream>
#include <fstream>
void f(std::string name);
int main()
{
    std::fstream file;
    std::string name;
    std::cout << "Please enter file name: ";
    std::cin >> name;
    f(name);
}

void f(std::string name) {
    std::fstream f1,f2;
    std::string w, name2;

    f1.open(name, std::ios::in);

    std::cout << "Please enter fiele name for new file: ";
    std::cin >> name2;

    f2.open(name2, std::ios::out);
    while (f1 >> w)
    {
        f2 << w << std::endl;
    }
    f1.close();
    f2.close();
        f2.open(name2.c_str());

    while (f2 >> w)
    {
        std::cout << w << "," << std::endl;
    }
    f2.close();
}