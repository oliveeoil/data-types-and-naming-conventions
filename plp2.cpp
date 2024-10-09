#include <iostream>
#include <vector>
#include <map>
#include <string>

int main() {
    
    // String
    std::string exString = "hello world!";
    
    // Integer
    int exInt = 8;

    // Float
    float exFloat = 4.11f;
    
    // Integer and Float 
    float exSum = exInt + exFloat; 

    // Boolean
    bool exBool = true;

    // Array (using a vector)
    std::vector<int> exArray = {1, 2, 3, 4, 5};

    // Dictionary (using a map)
    std::map<std::string, int> exDictionary;
    exDictionary["one"] = 1;
    exDictionary["two"] = 2;
    exDictionary["three"] = 3;

    // Outputting values
    std::cout << "String: " << exString << std::endl;
    std::cout << "Integer: " << exInt << std::endl;
    std::cout << "Float: " << exFloat << std::endl;
    std::cout << "Sum: " << exSum << std::endl;
    std::cout << "Boolean: " << (exBool ? "true" : "false") << std::endl;

    std::cout << "Array: ";
    for (int num : exArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Dictionary: " << std::endl;
    for (const auto& pair : exDictionary) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}