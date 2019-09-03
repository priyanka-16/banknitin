#include"BankAccount.cpp"
using namespace std;
class SavingAccount : public BankAccount
{
        private:
                float InterestRate;
                float TotalBal;
        public:
                SavingAccount():InterestRate(4),TotalBal(0){}
                SavingAccount(float b):TotalBal(b),InterestRate(4){}

                void Deposit(float amt)
                {
                        TotalBal=TotalBal+amt;
                }
                void Withdraw(float amt)
                {
                        TotalBal=TotalBal-amt;
                }
                void CalculateInterest(float amt)
                {
                        TotalBal=TotalBal+((TotalBal*InterestRate)/100);
                }
                void DisplayBal()
                {
                        cout<<"Balance="<<TotalBal;
                }
};
