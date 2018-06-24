#include "binmatrix.h"

template<int n>
struct constN
{
    constN() { std::cout << n << '\n'; }
};

int main(int argc, char *argv[])
{
  constexpr BinMatrix bm("0000",
                         "1100"
                         "1110"
                         "1111");

  constN<bm.nx()>();
  constN<bm.ny()>();
  
  return 0;
}
