#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long n, d, num=0;
    vector<int> nVector;
    std::cout<<"\n Enter n :";
    std::cin>>n;
    std::cout<<"\n Enter no.of rotations:";
    std::cin>>d;
    std::cout<<"\n Enter n values";
    for (int i=0;i<n;++i){
        cin>>num;
        nVector.push_back(num);
    }
    for (int i=0;i<d;++i){
        int temp = nVector[0];
        nVector.erase(nVector.begin());
        nVector.push_back(temp);
    }
    std::cout<<"\n";
    //print all the vector values after all rotations
    for(std::vector<int>::iterator it=nVector.begin();it!=nVector.end();++it)
        std::cout<<*it<<" ";
    return 0;
}

