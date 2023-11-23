#include <iostream>

template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    std::cout << "The sum is : " << add(7, 5) << std::endl;
    return 0;
}