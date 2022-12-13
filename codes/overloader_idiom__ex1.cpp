#include <iostream>

struct a
{
    void operator()(int val)
    {
        std::cout << "a::operator(int)"
                  << "\n";
    }
};

struct b
{
    void operator()(long val)
    {
        std::cout << "a::operator(long)"
                  << "\n";
    }
};

struct c
{
    void operator()(double val)
    {
        std::cout << "c::operator(double)"
                  << "\n";
    }
};

template <typename... args>
struct mystruct : args...
{
    using args::operator()...;
};

int main()
{
    mystruct<a, b, c> my;
    my(86);
    my(73.74);

    return 0;
}
