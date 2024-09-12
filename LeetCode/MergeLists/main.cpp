#include <iostream>
#include <list>
#include <string>

int main(){
    std::string sCommand("");
    std::list<int> nList_1;
    std::list<int> nList_2;
    int nCounter=0;
    
    std::cout << "\n---Insert elements into LIST 1---" << std::endl;
    std::cout << "---Type 'End' to stop insertion---" << std::endl;
    while(true){
        std::cout<< "Element[" << nCounter << "]: ";
        std::cin >> sCommand;
        
        if(sCommand!="End"){
            nList_1.push_back(std::stoi(sCommand));
        }else{
            break;
        }
        nCounter++;
    }
    
    std::cout << std::endl;
    sCommand = "";
    nCounter = 0;

    std::cout << "---Insert elements into LIST 2---" << std::endl;
    std::cout << "---Type 'End' to stop insertion---" << std::endl;
    while(true){
        std::cout<< "Element[" << nCounter << "]: ";
        std::cin >> sCommand;
        if(sCommand!="End"){
            nList_2.push_back(std::stoi(sCommand));
        }else{
            break;
        }
        nCounter++;
    }
    
    nList_1.sort();
    nList_2.sort();

    std::cout << "\n---After sorting---" << std::endl;
    std::cout << "[List 1]: ";
    for (int element : nList_1) {
        std::cout << element << " ";
    }
    std::cout << "\n[List 2]: ";
    for (int element : nList_2) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    std::cout << "\n---Merge lists---";
    nList_1.merge(nList_2);
    nList_1.sort();
    std::cout << "\n[Merged List]: ";
    for (int element : nList_1) {
        std::cout << element << " ";
    }
    std::cout << std::endl;


    return 0;
}