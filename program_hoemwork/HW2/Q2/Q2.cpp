#include <iostream>

using namespace std;


double annual_mortgage_cost(double initial_loan_balance){
  double cost;
  cost = initial_loan_balance * (.09); 
  return cost;
}

double tax_savings (double initial_loan_balance){
  double tax_savings;
  tax_savings = initial_loan_balance * 0.021;
  return tax_savings;
}

double initial(double house_price, double down_payment){
  double initial_loan_balance;
  initial_loan_balance = house_price - down_payment;
  return initial_loan_balance;
}

int main()
{
  
  double house_price, down_payment, initial_balance;
  char ans;

  /*cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);*/


do{
    cout << "How much ? \n";
    cin >> house_price;
    cout << "Down payment ? \n";
    cin >> down_payment;

    initial_balance = initial(house_price, down_payment);

    cout << "Annual after-tax cost : " << annual_mortgage_cost(initial_balance) - tax_savings(initial_balance) << "\n";

    cout << "Initial loan balance : " << initial_balance << "\n";
    cout << "Thats $" <<annual_mortgage_cost(initial_balance)<< " annual mortgage cost \n";
    cout << "Savings each year of : " << tax_savings(initial_balance) << "\n";
    
    cout << "Again?: \n";
    cin >> ans;
  }
 while (ans == 'y' || ans == 'Y');
}

