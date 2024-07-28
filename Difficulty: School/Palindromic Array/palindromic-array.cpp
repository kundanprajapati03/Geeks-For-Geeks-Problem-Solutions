//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  private:
    bool(isPalindrome(string num)){
        int i=0, j = num.size()-1;
        
        while(i<j){
            if(num[i]!=num[j]) return false;
            else i++, j--;
        }
        return true;
    }
  public:
    bool PalinArray(vector<int> &arr) {
        int n = arr.size();
        for(int i=0; i<n; i++){
            string num = to_string(arr[i]);
            if(!isPalindrome(num)) return false;
        }
        return true;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << (ob.PalinArray(arr) ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends