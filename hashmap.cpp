#include <unordered_map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// bool isIsomorphic(string s, string t) {
//     unordered_map<char,char> hashmap1;
//     unordered_map<char,char> hashmap2;
//     for(int i = 0;i < s.size();i++){
//         if(hashmap1.find(s[i]) != hashmap1.end()){
//             if(hashmap1[s[i]]!= t[i]&&hashmap2[t[i]]!= s[i])
//             return false;
//         }
//         hashmap1[s[i]] = t[i];
//         hashmap2[s[i]] = s[i];
//     }
//     return true;
// }
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
       }
       return res;

    }

int main(){
    vector<string>list1{"Shogun", "Tapioca Express", "Burger King", "KFC"};
    cout<<list1[1];
    return 0;
}
