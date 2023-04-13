void nextGreatestToLeft(int arr[], int n) {
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        int next = s.empty() ? -1 : s.top();
        cout << next<< " ";
        s.push(arr[i]);
    }
}