#include"my_set.hpp"
int main(){

    // std::set<int> my_set{21, 44, 33, 312, 21, 434, 321321};
    // std::set<int> my_set{21, 44, 33, 211, 199, 201};
   std::set<int> my_set{21, 44};
    // std::set<int> my_set{21, 244};


    std::cout<<third_maximum(my_set)<<std::endl;


    return 0;
}