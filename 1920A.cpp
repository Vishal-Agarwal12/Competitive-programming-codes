#include <bits/stdc++.h>
#include <vector>

std::vector<int> binaryRepresentation(int num) {
    std::vector<int> binary;

    while (num > 0) {
        int remainder = num % 2;
        binary.push_back(remainder);
        num /= 2;
    }

    // If the original number is 0, add a single 0 to the binary representation
    if (binary.empty()) {
        binary.push_back(0);
    }

    // Reverse the vector to get the correct binary representation
    std::reverse(binary.begin(), binary.end());

    return binary;
}

int main() {
    int n;
    cin>>n
    std::vector<int> b = binaryRepresentation(n);

    ll cnt = 0;
    for(int i=b.size()-1;i>=0;i--) {
        if(b[i] == 1) break;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
