#include <iostream>
#include <vector>

int main() {
    std::vector<int>v1 = {1,3,5,7,9};
    std::vector<int>v2 = {1,4,7,11,15};
    std::vector<int>v3 = {1,2,3,4,5,6,7,8,9,20};
    std::vector<int>result;
    std::vector<int>result2;
    std::vector<int>result3;
    std::vector<int>sum;
    bool jest = false;

    // a) czesc wspolna v1 i v2
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v2.size(); j++) {
            if (v1[i] == v2[j]) {
                result.push_back(v1[i]);
            }
        }
    }
    std::cout << "Czesc wspolna v1 i v2 to: " << std:: endl;
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    // b) v3 - (v1 + v2)
    for (int i = 0; i < v2.size(); i++) {
        jest = false;
        for (int j = 0; j < v1.size(); j++) {
            if (v2[i] == v1[j]) {
                jest = true;
                break;
            } 
        }
        if (!jest) {
            v1.push_back(v2[i]);
        }
    }
    for (int i = 0; i < v3.size(); i++) {
        jest = false;
        for (int j = 0; j < v1.size(); j++) {
            if (v3[i] == v1[j]) {
                jest = true;
                break;
            }
        }
        if (!jest) {
        result2.push_back(v3[i]);
        }
    }
    std::cout << "(v1 + v2) to: " << std:: endl;
    for (int i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "v3 - (v1 + v2) to: " << std:: endl;
    for (int i = 0; i < result2.size(); i++) {
        std::cout << result2[i] << " ";
    }
    std::cout << std::endl;

    // suma v1 v2 v3
    for (int i = 0; i < v3.size(); i++) {
        jest = false;
        for (int j = 0; j < v1.size(); j++) {
            if (v3[i] == v1[j]) {
                jest = true;
                break;
            } 
        }
        if (!jest) {
            v1.push_back(v3[i]);
        }
    }
    std::cout << "(v1 + v2 + v3) to: " << std:: endl;
    for (int i = 0; i < v1.size(); i++) {
        std::cout << v1[i] << " ";
    }


}