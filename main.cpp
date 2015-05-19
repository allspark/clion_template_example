#include <iostream>
#include <memory>
#include <numeric>
#include <utility>
#include <tuple>

using namespace std;

class Base {
  public:
    virtual ~Base() = default;
};

class Derived : public Base {

};

std::tuple<int, int, float> getValues() {
    return std::make_tuple(5,23,42.0);
}

int main() {
    {
        int a, b;
        float c;

        std::tie(a, b, c) = getValues(); // problem
    }

    {
        std::shared_ptr<Base> b = std::make_shared<Derived>();

        std::shared_ptr<Derived> d = std::dynamic_pointer_cast<Derived>(b); // problem
    }


    return 0;
}