#include <iostream>
#include  <stdio.h>
#include <conio.h>

using namespace std;

class bank {
	char name[50], father[50], address[100], type[10];
	float balance;
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();
};

void bank::open_account()
{
	cout << "\nEnter Your Name:" << endl;
	cin.ignore();
	cin.getline(name, 50);
	cout << "\nEnter Your Father Name:" << endl;
	cin.ignore();
	cin.getline(father, 50);
	cout << "\nEnter Your Address:" << endl;
	cin.ignore();
	cin.getline(address, 100);
	cout << "\nType of Account You Want To Open saving(s) or current(c):" << endl;
	cin.ignore();
	cin.getline(type, 10);
	cout << "\nEnter Your First Deposit Amount:" << endl;
	cin.ignore();
	cin >> balance;
	cout << "\nYour Account is created successfully !" << endl;
}


void bank::deposit_money()
{
	int d;
	cout << "\nEnter amount you want to deposit:" << endl;
	cin >> d;

	balance = balance + d;
	cout << "\nYour Current/Total balance is:" << balance << endl;
}

void bank::withdraw_money()
{
	float w;
	cout << "\nEnter amount you want to withdraw:" << endl;
	cin >> w;

	balance = balance - w;
	cout << "\nYour Reamining balance is:" << balance << endl;
}

void bank::display_account() {
	cout << "\nYour Name:" << name << endl;
	cout << "\nFather Name:" << father << endl;
	cout << "\nYour Address:" << address << endl;
	cout << "\nType of Account:" << type << endl;
	cout << "\nCurrent/Total Balance:" << balance << endl;
}

int main() {
	bank acc;
	int ch;
	char option;

	cout << "\n----------------------------------------------------------------------------------" << endl;
	cout << "\n------------------------------ UA Bank Welcomes You ------------------------------" << endl;
	cout << "\n----------------------------------------------------------------------------------" << endl;
	
	do
	{
	cout << "\n1.) Open Account:" << endl;
	cout << "\n2.) Deposit Money:" << endl;
	cout << "\n3.) withdraw Money:" << endl;
	cout << "\n4.) Display Account:" << endl;
	cout << "\n5.) Exit-->" << endl;

	cin >> ch;


		switch (ch)
		{
		case 1:
			cout << "\n1.) Open Account:" << endl;
			acc.open_account();
			break;
		case 2:
			cout << "\n2.) Deposit Money:" << endl;
			acc.deposit_money();
			break;
		case 3:
			cout << "\n3.) withdraw Money:" << endl;
			acc.withdraw_money();
			break;
		case 4:
			cout << "\n4.) Display Account:" << endl;
			acc.display_account();
			break;
		case 5:
			if (ch == 5) {
				exit(1);
			}
		default:
			cout << "\nTry Again and Choose Correct Opetion !" << endl;
			break;
		}

		cout << "\nDo You Want to Continue banking without exit ? Press(y/n) !" << endl;
		option = _getch();

		if ((option == 'n') || (option == 'N'))
		{
			exit(0);
		}
	} while ((option == 'y') || (option == 'Y'));
	{
		return 0;
	}
}