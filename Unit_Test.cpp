
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

// This function finds the two numbers in the list that have the biggest difference
pair<int, int> findMaxDifference(vector<int> numbers) {
    
    int minElement = numbers[0];
    
    int maxDifference = 0;
   
    pair<int, int> result;

    // Loop through each number in the list (starting from the second one)
    for (int i = 1; i < numbers.size(); i++) {
        
        if (numbers[i] - minElement > maxDifference) {
           
            maxDifference = numbers[i] - minElement;
            
            result = make_pair(minElement, numbers[i]);
        }
        
        minElement = min(minElement, numbers[i]);
    }


    return result;
}

int main() {
    // Positive test
    {
        // Define a test case
        vector<int> numbers = { 1, 2, 3, 4, 5 };
        
        pair<int, int> result = findMaxDifference(numbers);
        
        if (result.first == 1 && result.second == 5) {
            
            cout << "Positive test passed.\n";
        }
        else {
            
            cout << "Positive test failed.\n";
        }
    }

    // Negative test
    {
        // Define a test case
        vector<int> numbers = {};
        
        pair<int, int> result = findMaxDifference(numbers);
        
        if (result.first == 0 && result.second == 0) {
           
            cout << "Negative test passed.\n";
        }
        else {
            
            cout << "Negative test failed.\n";
        }
    }

    
    return 0;
}
