#include "CondCore/ESSource/interface/ClassIDCapability.h"
#include <vector>

namespace condtest{

  class A{};

  class B{};

  typedef std::vector<int> V;

}

CLASS_ID(condtest::A);

CLASS_ID(condtest::B);

CLASS_ID(condtest::V);


#include<iostream>
int main() {


  const char** names; 
  int n=0;

  NOT_SEAL_CAPABILITIES(names,n);

  for (int i=0; i<n; i++)
    std::cout << names[i] << std::endl;


}
