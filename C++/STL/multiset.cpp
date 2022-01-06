// 1. Associativec ocntainer contains a sorted set of duplicate objects of type Key
// 2. Implemented using Red Black Tree
// 3. Insertion, Removal, Search have logarithmic complexity
// 4. If we want to store user defined data type in multiset tgen we will have to provide compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

// int main(){
//     std::multiset<int,std::greater<int>> multiSet={5,2,4,3,2,5};
//     multiSet.insert(20);
//     for(const auto& e: multiSet){
//         cout<<e<<endl;
//     }
//     return 0;
// }

class Person{
    public:
        float age;
        string name;
    bool operator <(const Person& rhs) const{ return  age<rhs.age;}
    bool operator >(const Person& rhs) const{ return age> rhs.age;}

};

int main(){
    std::multiset<Person,std::greater<>> multiSet = {{25,"Rupesh"},{20,"Hitesh"},{25,"Ramesh"}};
    for(const auto& e: multiSet){
        cout<<e.age<<" "<<e.name<<endl;
    }
    return 0;
}