#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int principal, rate, time;
    cin >> principal >> rate >> time;

    // Calculate simple interest
    float interest = (principal * rate * time) / 100.0;

    // Total amount = principal + interest
    float totalAmount = principal + interest;

    // 2% discount on the interest
    float discount = (interest * 2) / 100.0;

    // Final amount after discount
    float finalAmount = totalAmount - discount;

    // Output with 2 decimal points
    cout << fixed << setprecision(2);
    cout << interest << endl;
    cout << totalAmount << endl;
    cout << discount << endl;
    cout << finalAmount << endl;

    return 0
}