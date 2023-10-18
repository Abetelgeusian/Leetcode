#include <iostream>
#include <string>

// This code will give the largest common string from the given two strings.
// std::string gcdofStrings(std::string s, std::string t){
//     int j = 0;
//     int k = 0;
//     std::string x; // this is how you get gcdbase
//     while (j < s.size() || j < t.size()){
//         if((s[j] == t[j])){
//             x += s[j];
//         }
//         j++;
//     }
//     return x;
// };

std::string gcdofStrings(std::string s, std::string t){
    int j = 0;
    int m = s.size();
    int n = t.size();
    int gcd;
    std::string x;
    if( s+t == t+s){
        //calculate gcd
        if(m<n){
            for(int i=1;i<=n;i++){
                if(m%i == 0 && n%i == 0){
                    gcd = i;
                }
            }
        }
        else{
            for(int i=1;i<=m;i++){
                if(m%i==0 && n%i == 0){
                    gcd= i;
                }
            }
        }
        std::cout << m << std::endl;
        std::cout << n << std::endl;
        std::cout << gcd << std::endl;
        //Using substr find the divisor
        x = s.substr(0,gcd);
    }
    return x;
};


int main(){
    std::string word1,word2;
    word1 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    word2 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";  

    std::cout << gcdofStrings(word1,word2) << std::endl;
}
