#include <bits/stdc++.h>
#include <vector>
using namespace std;

std::vector<int> binaryRepresentation(int num) {
    std::vector<int> binary;

    while (num > 0) {
        int remainder = num % 2;
        binary.push_back(remainder);
        num /= 2;
    }

    if (binary.empty()) {
        binary.push_back(0);
    }
    std::reverse(binary.begin(), binary.end());

    return binary;
}

int main() {
    int n;
    cin>>n;
    std::vector<int> b = binaryRepresentation(n);

    int cnt = 0;
    for(int i=b.size()-1;i>=0;i--) {
        if(b[i] == 1) break;
        cnt++;
    }
    cout<<cnt<<endl;

    return 0;
}
