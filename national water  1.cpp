#include <iostream>
using namespace std;

int main() {
    double balance, totalCost = 0, surcharge, vat, finalCost;
    int waterUsage;

    cout << "Enter your balance (UGX): ";
    cin >> balance;

    cout << "Enter the number of water units used: ";
    cin >> waterUsage;

    // Calculate the cost based on the water usage
    if (waterUsage <= 10) {
        totalCost = waterUsage * 150;
    } else if (waterUsage <= 20) {
        totalCost = (10 * 150) + ((waterUsage - 10) * 175);
    } else {
        totalCost = (10 * 150) + (10 * 175) + ((waterUsage - 20) * 200);
    }

    // Apply 15% surcharge
    surcharge = totalCost * 0.15;
    totalCost += surcharge;

    // Apply 18% VAT
    vat = totalCost * 0.18;
    finalCost = totalCost + vat;

    // Check if the balance is enough
    if (balance >= finalCost) {
        balance -= finalCost;
        cout << "Total cost (with VAT and surcharge): " << finalCost << " UGX" << endl;
        cout << "Remaining balance: " << balance << " UGX" << endl;
    } else {
        cout << "Error: Insufficient balance. You need " << finalCost << " UGX but only have " << balance << " UGX." << endl;
    }

    return 0;
}
