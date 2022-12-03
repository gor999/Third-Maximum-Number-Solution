#include"my_set.hpp"

int third_maximum(std::set<int> my_set){
    if(my_set.size() > 1 && my_set.size() <= 104){
        std::set<int, std::greater<int>> my_new_set(my_set.begin(), my_set.end());
        int i = 1;
        int value_saver = 0;
        for(auto it = my_new_set.begin(); it != my_new_set.end(); ++it){
            if(*it >= -231 && *it <= 231){ 
                if(my_new_set.size() > 2){
                    if(i == 3){
                        value_saver = *it;
                        return value_saver;
                    }               
                }else{
                    value_saver = *it;
                    return value_saver;
                } 
                ++i;
            }else{
                std::cout<<"numbers are not in range: -231 <=> 231 "<<std::endl;
                return 0;
            }
        }
    }
    else{
        std::cout<<"numbers size is not in range: 1 <=> 104"<<std::endl;
        return 0;
    }
    return 0;
}


