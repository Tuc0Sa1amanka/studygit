#include <iostream>
#include "matrix.hpp"
int main()
{
  size_t M = 0, N = 0;
  std::cin >> M >> N;
    if(!std::cin)
{
    std::cerr << "ERR\n";
    return 1;
}

  int ** t = nullptr;
   try
  {
    t = nums(M, N);
  }
  catch(const std::bad_alloc &e)
  {
    std::cerr << "Not enough memory\n";
    return 2;
  }
  input (t, M, N);
  out (t, M, N);
  clear (t, M, N);
  dest (t, M);
  return 0;
}



