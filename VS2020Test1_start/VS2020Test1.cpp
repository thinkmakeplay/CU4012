#include <iostream>
#include <string>

int main()
{
    std::string myName;

    std::cout << "Hello, what's your name, stranger?\n\n";

    std::cin >> myName;

    std::cout << "\nGreetings, " << myName << "!\n\n";
}
