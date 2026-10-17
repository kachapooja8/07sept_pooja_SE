
#include<iostream>
using namespace std;

class PaymentProcessor
{
    public:
        void processPayment(double amount)
        {
            cout << "\nPayment without coupon";
            cout << "\nFinal Amount: " << amount;
        }

        void processPayment(double amount, string couponCode)
        {
            cout << "\nPayment with coupon";

            if(couponCode == "SAVE10")
            {
                amount = amount - (amount * 10 / 100);
            }

            cout << "\nCoupon Code: " << couponCode;
            cout << "\nFinal Amount: " << amount;
        }
};

int main()
{
    PaymentProcessor p1;

    p1.processPayment(1000);

    cout << "\n";

    p1.processPayment(1000, "SAVE10");

    return 0;
}

