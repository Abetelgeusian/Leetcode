#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main(){
    std::string word1 = "abcd";
    std::string word2 = "pqrstu";
    std::string merged;

// Implementation 1 -------------------------
    // if(word1.size() == word2.size()){
    //     std::string merged;
    //     int size = word1.size();
    //     for(int i=0;i< size; i++){
    //         merged += word1[i];
    //         merged.append(word2,i,1);
    //     }
    //     std::cout << merged << std::endl;
    // }
    // else{
    //     std::string merged;
        
    //     int size;
    //     std::string extra_str;
        
    //     if(word1.size() < word2.size()){
    //         size = word1.size();// small string size
    //         extra_str = word2.substr(size); 
    //     }
    //     else{
    //         size = word2.size(); // small string size
    //         extra_str = word1.substr(size); 
    //     }

    //     for(int i =0; i<size ; i++){
    //         merged += word1[i];
    //         merged += word2[i];
    //     }
    //     merged += extra_str;
    //     std::cout << merged << std::endl;  

    // }


// Implementation 2
    int j = 0;
    while (j < word1.size() || j < word2.size()){
        if (j < word1.size()){
            merged += word1[j];
        }
        if(j<word2.size()){
            merged += word2[j];
        }
        j++;
    }
    std::cout << merged << std::endl;
}
