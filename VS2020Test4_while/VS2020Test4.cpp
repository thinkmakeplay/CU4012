#include <iostream>
#include <string>

int main()
{
    int n = 1;
    int m = 1;

    while (n < 20)
    {
        std::cout << n << ", ";
        n++;
    }

    std::cout << "\n\n* * * * * * * * * *\n\n";

    do
    {
        std::cout << m << ", ";
        m++;
    } while (m < 20);

    std::cout << "\n\n* * * * * * * * * *\n\n";

    for (int i = 1; i <= 10; i++)
    {
        std::cout << "This is the " << i << " time we write it...\n";
    }

    std::cout << "That's all folks...\n";
    system("PAUSE");
}
