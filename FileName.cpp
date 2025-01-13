#include <iostream>
using namespace std;


//function prototype
string season(int month, int day,double latitude);


int main() {


	//Declare variables.
	int month, day;
	double longitude, latitude;
	string season1;

	//prompt user to enter month and day.
	cout << "Enter month: " << endl;
	cin >> month;

	cout << " Enter day: " << endl;
	cin >> day;

	//prompt user to enter the longitude and latitude of their location
	cout << "Enter longitude of your location:" << endl;
	cin >> longitude;
	cout << " Enter latitude of your location: " << endl;
	cin >> latitude;

	//function call
	season1=season(month, day, latitude);

	cout << season1 << endl;

	return 0;
}



	
string season(int month, int day, double latitude){

//latitude should be bewteen -90 and 90
	if  (latitude <-90 || latitude>90) {
		return "Worng longtiude or latitude. Enter agian.";
	}


//Northern hemisphere
	 if (latitude >= 0) {
		 if ((month == 3 && day >= 21) || (month == 4 || month == 5) || (month == 6 && day <= 20)) {
			return "It is Spring!";
		}

		else if ((month == 6 && day >= 21) || (month == 7 || month == 8) || (month == 9 && day <= 22)) {
			return "It is Summer!";

		}
		else if ((month == 9 && day >= 23) || (month == 10 || month == 11) || (month == 12 && day <= 21)) {
			return " It is Autumn! ";
		}

		else if ((month == 12 && day >= 21) || (month == 1 || month == 2) || (month == 3 && day <= 20)) {
			return "It is Winter! ";
		}
		else {
			return " Error! Wrong input for month or day. ";

		}
	}
		// Southern hemoiisphere
	else {
		 if ((month == 3 && day >= 21) || (month == 4 || month == 5) || (month == 6 && day <= 20)) {
			 return "It is Autumn";
		 }

		 else if ((month == 6 && day >= 21) || (month == 7 || month == 8) || (month == 9 && day <= 20)) {
			 return "It is Winter!";

		 }
		 else if ((month == 9 && day >= 21) || (month == 10 || month == 11) || (month == 12 && day <= 20)) {
			 return " It is Spring! ";
		 }

		 else if ((month == 12 && day >= 21) || (month == 1 || month == 2) || (month == 3 && day <= 20)) {
			 return "It is Summer! ";

		 }
		 else return " Wrong month or day.";
	}
	 }

/*Enter month:
6
 Enter day:
12
Enter longitude of your location:
80
 Enter latitude of your location:
30
It is Spring!*/
