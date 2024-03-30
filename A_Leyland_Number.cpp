#include <iostream>
#include <iomanip>
#include <cmath>

typedef long long ll;

int main() {
    ll a, b;
    std::cin >> a >> b;

    ll result = std::pow(a, b) + std::pow(b, a);
    
    std::cout << std::fixed << std::setprecision(6) << result << std::endl;
    
    return 0;
}
