#include <functional>
#include <iostream>
#include <string>

#include <cpprest/http_client.h>

using namespace std::literals;

struct Foo
{
    int i;
    std::string s;
    int j = 50;
};

template<typename... Ts>
void print(Ts&&... ts)
{
    ((std::cout << ts << " "), ...) << "\n";
}

int main()
{
    auto f = Foo{ 10 };
    print(f.i, f.s, f.j);

    f = { 15, "andy"s };
    print(f.i, f.s, f.j);

    f = { 15, "andy"s, 100 };
    print(f.i, f.s, f.j);

    auto const& [a, b, c] = f;
    print(a, b, c);
}