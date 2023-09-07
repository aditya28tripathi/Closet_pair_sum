class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
          unordered_map<int, int> numFrequency; // Hash table to store the frequency of each element
    int count = 0; // Count of pairs

    // Iterate through the array
    for (int i = 0; i < n; ++i) {
        int target = k - arr[i]; // Calculate the target value

        // Check if the target exists in the hash table
        if (numFrequency.find(target) != numFrequency.end()) {
            count += numFrequency[target]; // Increment the count by the frequency of the target
        }

        numFrequency[arr[i]]++; // Update the frequency of the current element in the hash table
    }

    return count; // Return the count of pairs

    }
   
};
