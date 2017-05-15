
#include "stl_functions.h"



std::vector<int> copyVec(const std::vector<int> & oldVector){
   std::vector<int> vec(oldVector.size());
   std::copy(oldVector.begin(), oldVector.end(), vec.begin());
    return vec;



}


void sortVec(std::vector<int> & oldVector){
    std::sort(oldVector.begin(), oldVector.end());


}


void doubleVec(std::vector<int> & oldVector){
    //help gained from www.tutorialcup.com/cplusplus
    //Help gained from www.cplusplus.com/reference/algorithm
    
    std::for_each(oldVector.begin(), oldVector.end(), doubleHelp);


}

void doubleHelp(int &x){
    x *= 2;

}


bool containsItem(std::vector<std::string> & ourVector, std::string item){
    //more www.cplusplus.com help
    //std::string x = std::find(ourVector.begin(), ourVector.end(), item);
    //x = std::find(ourVector.begin(), ourVector.end(), item);
    //if(item == x ){
    //    return true;
    //    }  
    //return false;
    return (std::find(ourVector.begin(), ourVector.end(), item) !=ourVector.end());
    //help from Stack Overflow
    //http://stackoverflow.com/questions/571394/how-to-find-if-an-item-is-present-in-a-stdvector
    //
    //
}


std::vector<int> inBoth(std::vector<int> a, std::vector<int> b){
    //int x;
    //if(a.size() > b.size()){
    //    x = a.size();
    //}else{
    //    x = b.size();
    //}
    std::vector<int> newVec(a.size());
    std::set_intersection( a.begin(), a.end(), b.begin(), b.end(), newVec.begin());
    //thank you stack overflow and cplusplus
    //http://www.cplusplus.com/reference/vector/vector/resize/
    //http://stackoverflow.com/questions/3825668/checking-for-null-pointer-in-c-c    
    int x = 0;
    std::vector<int> empty;
    // thanks cplusplus
    // http://www.cplusplus.com/forum/beginner/148544/
    for(unsigned int i = empty.size(); i < newVec.size(); i++){
        if(newVec[i]){
            x++;
        }
    
    }
    newVec.resize(x);

    return newVec;

}




