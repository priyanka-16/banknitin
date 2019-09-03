#include"BankAccount.cpp"
using namespace std;
class CurrentAccount : public BankAccount{
        private:
                float InterestRate;
                float TotalBal;
        public:
                CurrentAccount():InterestRate(5.5),TotalBal(0){}
                CurrentAccount(float b):TotalBal(b),InterestRate(5.5){}

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
