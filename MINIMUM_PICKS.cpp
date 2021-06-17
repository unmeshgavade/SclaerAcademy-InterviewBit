// MINIMUM PICKS
// Problem Description

// You are given an array of integers A of size N.
// Return the difference between the maximum among all even numbers of A and the minimum among all odd numbers in A.



// Problem Constraints
// 2 <= N <= 1e5
// -1e9 <= A[i] <= 1e9
// There is atleast 1 odd and 1 even number in A



// Input Format
// The first argument given is the integer array, A.



// Output Format
// Return maximum among all even numbers of A - minimum among all odd numbers in A.



// Example Input
// Input 1:

//  A = [0, 2, 9]
// Input 2:

//  A = [5, 17, 100, 1]


// Example Output
// Output 1:

// -7
// Output 2:

// 99


// Example Explanation
// Explanation 1:

// Maximum of all even numbers = 2
// Minimum of all odd numbers = 9
// ans = 2 - 9 = -7
// Explanation 2:

// Maximum of all even numbers = 100
// Minimum of all odd numbers = 1
// ans = 100 - 1 = 99

int Solution::solve(vector<int> &A) {
    int maxEven = INT_MIN;
    int minOdd = INT_MAX;
    int N=A.size();
    
    for(int i=0;i<N;++i){
        if(A[i]%2==0 && A[i]<maxEven){
            maxEven=A[i];
        }else if(A[i]%2!=0 && A[i]>minOdd){
            minOdd=A[i];
        }
    }
    return maxEven-minOdd;
}

