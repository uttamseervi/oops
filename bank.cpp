#include<iostream>
using namespace std;
class bankAccount{
    public:
    int accNo;
    float balance;
    char name[25];
    void printData();
    void insertData();
    void deposit();
    void withdrawl();
};
void bankAccount::insertData(){
    cout<<"Enter the account holder Name: ";
    cin>>name;
    cout<<"Enter balance amount: ";
    cin>>balance;
    cout<<"Enter the account number: ";
    cin>>accNo;
}
void bankAccount::printData(){
    cout<<"\nName of the Account Holder : "<<name;
    cout<<"\nAccount Number is : "<<accNo;
    cout<<"\nBalance in the account is : Rs."<<balance;
} 
void bankAccount ::deposit(){
    float amt;
    cout<<"How much amount you want to deposit";
    cin>>amt;
    if(amt<=0){
        cout<<"Invalid Amount! Please enter a positive value.";
    }
    else {
        balance = balance + amt;
        cout<<"Deposited Amount Successfully! Your new Balance is Rs. "<<balance;
    }
}
void bankAccount::withdrawl(){
    int amnt;
    cout<<"Enter the with-drawl amount: ";
    cin>>amnt;
    if (amnt > balance || amnt <= 0) {
        cout << "Sorry, your transaction could not be processed!" << endl;
        cout << "Insufficient funds or invalid amount entered." << endl;
    }
    else{
        balance = balance-amnt;
        cout<<"Amount Withdrawn Successfully! Your remaining Balance is Rs. "<<balance;
    }

}
int main(){
    bankAccount acc[25];
    int n;
    cout<<"How many accounts do you want to create? ";  
    cin>>n;
    for (int i=0;i<n;i++){
        acc[i].insertData();
    }
    for(int i=0;i<n;i++){
        acc[i].printData();
    }
    for(int i=0;i<n;i++){
        acc[i].deposit();
        acc[i].withdrawl();

    }
   
    
    return 0;
    
}
