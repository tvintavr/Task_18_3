#include <iostream>
#include <limits>

void evenCount(long long n, int& ans) {
    if (n == 0) {
        return;
    }

    int digit = n % 10;

    if (digit % 2 == 0) {
        ans++;
    }

    n = n / 10;
    evenCount(n, ans);

}

int main() {

    std::cout<<"Input big number: ";
    long long n;
    std::cin>>n;

    while (n<1 || n>LLONG_MAX || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Input correct big number: ";
        std::cin>>n;
    }
    int ans = 0;
    
    evenCount(n, ans);
    
    std::cout << "Even number: " << ans << std::endl;
}