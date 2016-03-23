#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char selectNum = '\0';
	int numTable = 0;
	int firstNum = 1;

	while (selectNum != 'q')
	{
		cout << "MENU\n";
		cout << "a) Generate Multiplication Table\n";
		cout << "q) Quit the program\n";
		cout << "Please make a selection: ";
		cin >> selectNum;
		if (selectNum == 'a')
		{
			cout << "Please enter a number for your "
				<< "multiplication table: \n\n";

			while (numTable < 1 || numTable > 10)
			{
				cin >> numTable;
				if (numTable < 1 || numTable > 10)
				{
					cout << "That number is invalid. Please enter a number "
						<< "between 1 and 10.\n";
				}
			}
			cout << "MULTIPLICATION TABLE: " << numTable << "'s\n\n";

			// num for tables
			for (int i = 1; i <= numTable; i++)
			{
				cout << setw(5) << i;
			}

			cout << endl;
			cout << "   "; 

			// dashes for table
			for (int i = 1; i <= numTable; i++)
			{
				cout << "----|";
			}

			cout << endl;

			for (int count1 = 0; count1 < numTable; count1++)
			{
				cout << setw(2) << count1 + 1 << "|";  // numrow
				for (int count2 = 1; count2 <= numTable; count2++)
				{
					cout << setw(4) << firstNum * count2 << "|";
				}
				cout << endl;

				firstNum++;


				// dashes
				for (int i = 1; i <= numTable; i++)
				{
					if (i == 1)
					{
						cout << " -|";
					}
					cout << "----|";
				}
				cout << endl;
			}
			cout << endl;



			// reset

			numTable = 0;

			firstNum = 1;
		}
		else if (selectNum != 'q')

		{
			cout << "Invalid Selection\n\n";
		}
	}

	cout << "You have chosen to quit the program. Thank you for using!\n";

	return 0;
}