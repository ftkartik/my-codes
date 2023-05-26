// C++ program for above implementation
#include <bits/stdc++.h>
using namespace std;
 
// Function to find distinct id's
int distinctIds(int arr[], int n, int k)
{
    // Step 1: Create a frequency map of the elements in the
    // array
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
 
    // Step 2: Create a priority queue to store the
    // frequencies in ascending order
    priority_queue<int, vector<int>, greater<int> > pq;
 
    // Step 3: Insert the frequencies of the elements into
    // the priority queue
    for (auto it : mp) {
        pq.push(it.second);
    }
 
    // Step 4: Remove elements from the priority queue until
    // k becomes less than or equal to 0
    while (k > 0) {
        k -= pq.top(); // Subtract the frequency of the
                       // smallest element from k
        if (k >= 0)
            pq.pop(); // Remove the smallest element from
                      // the queue if k is still positive
    }
 
    // Step 5: Return the size of the priority queue
    return pq.size();
}
// Driver code
int main()
{
    int arr[] = { 5,5,6,6,7,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int k = 3;
 
    cout << distinctIds(arr, n, k);
    return 0;
}