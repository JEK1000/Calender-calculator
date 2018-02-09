
#include <iostream>
#include <string>

using namespace std;

class DayOfYear{

public:

	int day;
	int MonthDays;
	string MonthName;


	DayOfYear(int day){
		
		day = MonthDays;
		string MonthName;
	}



	///~DayOfYear();

	void print(){

		cout << "Enter a number 1 - 365 to get the day of the month: ";
		cin >> MonthDays;
		while (MonthDays < 1 || MonthDays > 365){

			cout << "The number must be greater than 0 or less than 365, re-enter: ";
			cin >> MonthDays;

		}

		if (MonthDays <=31){
			cout << "Januaray"<<" "<<MonthDays<<endl;
		}

		if (MonthDays >=32 && MonthDays<= 59){
			cout << "Febuary" << " " << (MonthDays -31) << endl;
		}

		if (MonthDays >= 60 && MonthDays <= 90){
			cout << "March" << " " << (MonthDays - 59) << endl;
		}


		if (MonthDays >= 91 && MonthDays <= 120){
			cout << "April" << " " << (MonthDays - 90) << endl;
		}


		if (MonthDays >= 121 && MonthDays <= 151){
			cout << "May" << " " << (MonthDays - 120) << endl;
		}


		if (MonthDays >= 152 && MonthDays <= 181){
			cout << "June" << " " << (MonthDays - 151) << endl;
		}


		if (MonthDays >= 182 && MonthDays <= 212){
			cout << "July" << " " << (MonthDays - 181) << endl;
		}


		if (MonthDays >= 213 && MonthDays <= 243){
			cout << "August" << " " << (MonthDays - 212) << endl;
		}


		if (MonthDays >= 244 && MonthDays <= 273){
			cout << "Septemeber" << " " << (MonthDays - 243) << endl;
		}

		if (MonthDays >= 274 && MonthDays <= 304){
			cout << "October" << " " << (MonthDays - 273) << endl;
		}


		if (MonthDays >= 305 && MonthDays <= 334){
			cout << "November" << " " << (MonthDays - 304) << endl;
		}

		if (MonthDays >= 335 && MonthDays <= 365){
			cout << "Demeber" << " " << (MonthDays - 334) << endl;
		}


		
	}

};



	int main(){

		DayOfYear D(3);

		D.print();
	

		return 0;
	}

