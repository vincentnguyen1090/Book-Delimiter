#include "functions.h"

int main()
{
    std::string str = "adsf-+qwret-+nvfkbdsj-+orthdfjgh-+dfjrleih";
    std::string delimiter = "-+";
    std::vector<std::string> v = split(str, delimiter);

    for (auto i : v)
        std::cout << i << std::endl;

    return 0;
}


