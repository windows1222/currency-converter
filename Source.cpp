#include <iostream>
#include <windows.h>
void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}
using namespace std;
int main() {
	int number;
	int amount;
	double usd = 0;
	double rub = 0;
	double pound = 0;
	double euro = 0;
	char Quit = ' ';
	
	while (Quit != 'n' && Quit != 'N')
 {
		setcolor(6);
		
		cout << " *                                           *"<<endl;
	    cout << " *                                           *"<<endl;
		cout << " *   Welcome  To The Currency Converter      *" << endl;
		cout << " *                                           *" << endl;
		cout << " *                                           *" << endl;
		cout << " *                                           *" << endl;
		cout << " *                                           *" << endl;
	    cout << " *********************************************" << endl;
		cout << endl;
		cout << endl;

		setcolor(5);
		cout << " press 1 to convert usd to rub" << endl;
		cout << " press 2 to convert usd to euro" << endl;
		cout << " press 3 to convert usd to pound" << endl;
		cout << "===================================" << endl;
		cout << endl;
		setcolor(8);
		cout << " press 4 to convert rub to euro" << endl;
		cout << " press 5 to convert rub to usd" << endl;
		cout << " press 6 to convert rub to pounds" << endl;
		setcolor(3);
		cout << endl;
		cout << "=========================================" << endl;
		cout << " press 7 to convert euro to usd" << endl;
		cout << " press 12 toconvert euro to rub" << endl;
		cout << " press 8 to convert euro to punds " << endl;
		setcolor(1);
		cout << endl;
		cout << "===========================================" << endl;
		cout << " press 9 to convert  pounds to usd" << endl;
		cout << " press 10 to convert pounds to rubles" << endl;
		cout << " press 11 to convert pounds to euro" << endl;
		cout << endl;
		cout << endl;
		cout << "***********************************************";
		cin >> number;
		setcolor(7);
		cout << "enter the amount you want to convert" << endl;
		cout << " ======================================" << endl;
		cin >> amount;


		if (number == 1) {
			cout << " you will receive " << amount * 66 << "rubles"<< endl;
		}

		else if
			(number == 2) {
			cout << " you will receive " << amount * 0.015119 <<"euro"<< endl;

		}



		if (number == 3)
		{
			cout << " you will receive " << amount *	0.759 <<"pounds"<< endl;
		}


		else if
			(number == 4)
		{
			cout << " you will recfeve " << amount * 0.013 << "rubles"<<endl;
		}

		if (number == 5)
		{
			cout << " you will recfeve " << amount * 0.015087 << "dollars" << endl;
		}

		else if
			(number == 6)
		{
			cout << " you will recieve" << amount *0.011 <<  "pounds" << endl;
		}

		if (number == 12)
		{

			cout << " you will recieve" << amount *72 <<  "rubles" << endl;
		}

		else if
			(number == 7)
		{
			cout << " you will recieve" <<  amount * 1.09 << "rubles" << endl;
		}

		if (number == 8)
		{
			cout << " you will recieve" << amount * 0.83 << "euros" << endl;
		}

		else	if (number == 9)
		{
			cout << " you will recieve" << amount*1.30 << "euros" << endl;
		}

		if (number == 10)
		{
			cout << "you will recieve" << amount * 86 << "rubles" << endl;
		}

		else if (number == 11)
		{
			cout << "you will recieve" << amount * 1.1 << "pounds" << endl;
		}
		cout << "thank you for using this software" << endl;
		cout << "Do you want to run again? Y/ N ";
		cin >> Quit;
	}


		
		return 0;

	
}