#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       unordered_map<string,int> canting1;
       unordered_map<string,int> canting2;
       vector<string> res;
       for(int i = 0;i<list1.size();i++)
       {
         canting1[list1[i]] = i;
         for(int j = 0;i<list2.size();j++)
         {
             canting2[list[j]] = j;
             if(list[i]==list[j]){
                 res.push_back(list[i])
             }
         }
       }//111
       return res;

    }

int main(){
    vector<string>list1{"Shogun", "Tapioca Express", "Burger King", "KFC"};
    cout<<list1[1];
    return 0;
}
