//{ Driver Code Starts
#include <iostream>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for (int i = 0; i < n; i++) {
      
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

       
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

       
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--) {
       
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

    
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }


        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }
    }
};

//{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         Solution ob;
//         ob.printTriangle(n);
//     }
//     return 0;
// }
// } Driver Code Ends