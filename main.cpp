#include <iostream>
#include "matrix.hpp"
int main()
{
  size_t m = 0, n = 0;
  std::cin >> m >> n;
    if(!std::cin)
{
    std::cerr << "ERR\n";
    return 1;
}

  int ** t = nullptr;
   try
  {
    t = nums(m, n);
  }
  catch(const std::bad_alloc &e)
  {
    std::cerr << "Not enough memory\n";
    return 2;
  }
  input (t, m, n);
  out (t, m, n);
  dest (t, m);
  return 0;
}



