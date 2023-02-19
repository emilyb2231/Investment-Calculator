#include <iostream>
#include <iomanip>

using namespace std;

float initialInvest, monthlyDeposit, annualInterest, years, months, totalAmount,interestAmount, yearTotalInterest;

int main() {
	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;
	system("PAUSE");
	system("CLS");

	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount: $";
	cin >> initialInvest;
	
	if (initialInvest < 0) {
		cout << "Initial investment amount cannot be less than $0" << endl;
		cout << "Initial Investment Amount: $";
		cin >> initialInvest;
	};
	
	cout << "Monthly Deposit: $";
	cin >> monthlyDeposit;
	
	if (monthlyDeposit < 0) {
		cout << "Initial investment amount cannot be less than $0" << endl;
		cout << "Monthly Deposit: $";cin >> monthlyDeposit;
	};
	
	cout << "Annual Interest: %";
	cin >> annualInterest;
	cout << "Number of years: ";
	cin >> years;
	months = years * 12;
	system("PAUSE");
	system("CLS");
	
	totalAmount = initialInvest;

	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "=================================================================" << endl;
	cout << "Year End Balance Year End Earned Interest" << endl;
	cout << "-----------------------------------------------------------------"<< endl;

	for (int i = 0; i < years; i++) {
		interestAmount = (totalAmount) * ((annualInterest / 100));
		totalAmount = totalAmount + interestAmount;
		cout << "" << (i + 1) << "\t\t$" << fixed << setprecision(2) <<totalAmount << "\t\t\t$" << interestAmount << "\n";
	}
	
	totalAmount = initialInvest;
	cout << endl; 
	cout << "Balance and Interest With Additional Monthly Deposits" <<endl;
	cout << "================================================================="<< endl;
	cout << "Year End Balance Year End Earned Interest" <<endl;
	cout << "-----------------------------------------------------------------"<< endl;
	
	for (int i = 0; i < years; i++) {
		yearTotalInterest = 0;
		
		for (int j = 0; j < 12; j++) {
			interestAmount = (totalAmount + monthlyDeposit) * ((annualInterest / 100) / 12);
			yearTotalInterest = yearTotalInterest + interestAmount;
			totalAmount = totalAmount + monthlyDeposit + interestAmount;
		}
		
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount <<"\t\t\t$" << yearTotalInterest << "\n";
	}
	
	return 0;
}