#include"SavingAccount.cpp"


#include"CurrentAccount.cpp"
using namespace std;

int main()
{
        SavingAccount s;
        CurrentAccount c;
        cout<<"Welcome to Aiiyapa Bank"<<endl;
        cout<<"Menu \n";
        cout<<"Select Account Type:\n 1.Saving Account\n 2.Current Account\n"<<endl;
        int a,op;
        float amt;
        cin>>a;
        if (a==1)
        {
                cout<<"1.Deposit\n2.Withdraw\n3.Check Account Balance"<<endl;
                cin>>op;
                while(op!=0)
                {
                        switch(op)
                        {
                                case 1:{
                                               cout<<"Enter Deposit Ammount\n";
                                               cin>>amt;
                                               s.Deposit(amt);
                                               cout<<amt<<"Balance After Deposit\n";

                                       }
                                       break;
                                case 2:{
                                               cout<<"Enter Withdraw Ammount\n";
                                               cin>>amt;
                                               s.Withdraw(amt);
                                               cout<<amt<<"Balance After Withdraw\n";
                                       
                                        }
                                       break;
                                case 3:
                                      {
                                                 s.CalculateInterest(amt);
                                                s.DisplayBal();
                                      }
                                      break;
                                default: {cout<<"Invalid";}
                        }
                }
                        cin>>op;
        }
                if(a==2)
                {
                cout<<"1.Deposit\n2.Withdraw\n3.Check Account Balance"<<endl;
                cin>>op;
                while(op!=0)
                {
                        switch(op)
                        {
                                case 1:{
                                               cout<<"Enter Deposit Ammount\n";
                                               cin>>amt;
                                               c.Deposit(amt);
                                               cout<<amt<<"Balance After Deposit\n";
                                       }
                                       break;
                                case 2:{
                                               cout<<"Enter Withdraw Ammount\n";
                                               cin>>amt;
                                               c.Withdraw(amt);
                                               cout<<amt<<"Balance After Withdraw\n";
                                       }
                                       break;
                                case 3:
                                      {
                                                 c.CalculateInterest(amt);
                                                c.DisplayBal();
                                      }

                                        break;
                                default:{cout<<"Invalid";}
                        }
                }
                }
                else
                        cout<<"Invalid Choice";
                        cin>>a;
                        return 0;

}
