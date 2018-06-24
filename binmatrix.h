// a test only
#include <iostream>

#include <stdexcept> 

class BinMatrix {
    const char* p1;
    const char* p2;
    std::size_t sz1;
    std::size_t sz2;
public:
    template<std::size_t N1, std::size_t N2>
    constexpr BinMatrix(const char(&a)[N1], const char(&b)[N2]): p1(a),p2(b), sz1(N1-1),sz2(N2 - 1) {}

    constexpr char operator[](std::size_t n) const
    {
        return n < sz2? p2[n] : throw std::out_of_range("");
    }
    constexpr std::size_t size() const { return sz2; }
    constexpr std::size_t nx() const {return sz2/sz1;}
    constexpr std::size_t ny() const {return sz1;}
    constexpr bool test(std::size_t i, std::size_t j) const {
        std::size_t n=j+i*ny();
        return (n<size() && p2[n]==p1[0]);
    }
};


