#include <iostream>
#include <fstream>
#include <unistd.h>
#include <iomanip>
#include <ctime>
#include <limits>
using namespace std;

// Customer class
class Customer {
protected:
    string customer_Name, Surname;
    int car_model;
    int year;
    bool validinput = false;
};

// Rent class - inherited from Customer class
class Rent : public Customer {
private:
    int number_Of_Days;
    int rent_Fee;
    char str[200];  // Character array to store data
public:
    Rent();
    void welcome();
    void fileReader(const char carFile[]);
    void data();
    void invoiceAmount();
    void invoiceRecord();
};

Rent::Rent() : number_Of_Days(0), rent_Fee(0) {}

void Rent::welcome(){
	
	ifstream inputFile("WELCOME.txt"); //displaying welcome ASCII image text on output screen fn1353
	if(!inputFile) {
		cout << "File not open\n";
	}
	char str[1000];
	while(inputFile) {
		inputFile.getline(str, 1000);  // delim defaults to '\n' cp
		if(inputFile) 
			cout << str << endl;
  	}
  	inputFile.close();
	sleep(1);
	cout<<"\loading files....."<<endl;
	cout<<"\MAY TAKE FEW SECONDS....."<<endl;
	sleep(1); //function which waits for (n) seconds
	system ("CLS"); //cleares screen
}

void Rent::fileReader(const char carFile[]) {
    ifstream inputFile(carFile);
    if (!inputFile) {
        cout << "File not open" << carFile << endl;
        return;
    }
    while (inputFile.getline(str, 200)) {
        cout << str << endl;
    }
    inputFile.close();
}

void Rent::data() {
    cout << "\n\n\t\t\t\tPlease Enter your Name: ";
    cin >> customer_Name;
    cout << "\n\n\t\t\t\tSurname: ";
    cin >> Surname;
    cout << endl;

    bool inCarModelsMenu = true;
    bool inYearMadeMenu = true;
    bool inDaysToRentMenu = true;

    while (true) {
        if (inCarModelsMenu) {
        	 cout << "\t\t\t\t__________________________________________________________________"<<endl;
            cout << "\t\t\t\tChoose a number corresponding to the car model you want" << endl;
             cout << "\t\t\t\t__________________________________________________________________"<<endl;
            cout << "\t\t\t\t1. TOYOTA GD6\n";
            cout << "\t\t\t\t2. RANGE ROVER DEFENDER\n";
            cout << "\t\t\t\t3. FORD EVEREST\n";
            cout << "\t\t\t\t4. VW GOLF 8 GTI\n";
            cout << "\t\t\t\t5. VW GOLF 8R\n";
            cout << "\t\t\t\t6. AUDI RS3\n";
            cout << "\t\t\t\t7. BMW X5 EMPOWER\n";
            cout << "\t\t\t\t8. MERCEDES AMG\n";
            cout << "\t\t\t\t9. MERCEDES GWAGON\n";
            cout << "\t\t\t\t10. MERCEDES BRABUS\n";
            cout << "\t\t\t\t11. Exit\n";
            cout << "\n\t\t\t\tChoose: ";
            cin >> car_model;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid choice. Please select a number between 1 and 11.\n";
                continue;
        }

            switch (car_model) {
            	case 1:
	 			system("CLS");
	 			cout<<"You have chosen TOYOTA GD6"<<endl;
	 			fileReader("GD6.txt");
			validinput=true;
				break;
			case 2:
				system("CLS");
	  			cout<<"You have chosen  RANGE ROVER DEFENDER"<<endl;
				fileReader("ROVER.txt");
		    	validinput=true;
				break;	
			case 3:
		     	system("CLS");
		     	cout<<"You have chosen FORD EVEREST"<<endl;
			    fileReader("EVEREST.txt");
		    	validinput=true;
		   		break;  			
		   			case 4:
	 			system("CLS");
	 			cout<<"You have chosen VW GOLF 8 GTI"<<endl;
	 			fileReader("GTI.txt");
					validinput=true;
				break;
			case 5:
				system("CLS");
	  			cout<<"You have chosen VW GOLF 8R"<<endl;
				fileReader("8R.txt");
		    	validinput=true;
				break;	
			case 6:
		     	system("CLS");
		     	cout<<"You have chosen AUDI RS3"<<endl;
			    fileReader("AUDI.txt");
		     		validinput=true;
		   		break;  			
		   			case 7:
	 			system("CLS");
	 			cout<<"You have chosen BMW X5 EMPOWER"<<endl;
	 			fileReader("MBW.txt");
				validinput=true;
				break;
			case 8:
				system("CLS");
	  			cout<<"You have chosen MERCEDES AMG"<<endl;
				fileReader("M_AMG.txt");
		    	validinput=true;
				break;	
			case 9:
		     	system("CLS");
		     	cout<<"You have chosen MERCEDES GWAGON"<<endl;
			    fileReader("M_GWAGON.txt");
		    	validinput=true;
		   		break;  			
				   	case 10:
	 			system("CLS");
	 			cout<<"You have chosen MERCEDES BRABUS"<<endl;
	 			fileReader("M_BRABUS.txt");
					validinput=true;
				break;
					case 11:
	 			system("CLS");
	 			cout<<"You are exiting the program"<<endl;
                    exit(0);
                default:
                    cout << "Invalid option. Please choose between 1 and 11.\n";
                    continue;
            }
        }

        if (inYearMadeMenu) {
        	 cout << "\t\t\t\t__________________________________________________________________"<<endl;
            cout << "\t\t\t\tChoose a number corresponding to the year the car was produced" << endl;
             cout << "\t\t\t\t__________________________________________________________________"<<endl;
            cout << "\t\t\t\t1. 2020\n";
            cout << "\t\t\t\t2. 2021\n";
            cout << "\t\t\t\t3. 2022\n";
            cout << "\t\t\t\t4. 2023\n";
            cout << "\t\t\t\t5. 2024\n";
            cout << "\n\t\t\t\tChoose: ";
            cin >> year;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid choice. Please select a number between 1 and 6.\n";
                continue;
            }

            switch (year) {
                case 1: case 2: case 3: case 4: case 5:
                    system("CLS");
                    cout << "You have chosen year option " << year << endl;
                 inYearMadeMenu = true;
                    inCarModelsMenu = false;
                    break;
                default:
                    cout << "Invalid option. Please choose between 1 and 5.\n";
                    continue;
            }
        }
         cout << "\t\t\t\t__________________________________________________________________"<<endl;

        if (inDaysToRentMenu) {
            cout << "Number of days you wish to rent the car: ";
            cin >> number_Of_Days;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a number for the number of days.\n";
                continue;
            }

            break;  // Exit the loop after collecting all data
        }
    }
}

void Rent::invoiceAmount() {
    sleep(1);
    system("CLS");
    cout << "Calculating rent. Please wait......" << endl;
    sleep(2);
    rent_Fee = car_model * year * number_Of_Days * 100;
}

void Rent::invoiceRecord() {
    time_t now = time(0);
    char* date = ctime(&now);
    cout << setw(80) << date << endl;
    cout << "\n\t\t                     INJABULO  CAR RENTALS - CUSTOMER INVOICE                  " << endl;
    cout << "\t\t________________________________________________________________________________________________" << endl;
    cout << "\t\t	***********************************************************" << endl;
	cout << "\t\t	| Invoice No.  "<<"					"<< setw(10) <<"#1001"<<" "<<endl;  //can be automatically generated
	cout << "\t\t	| Customer Name "<<"				"<< setw(10) <<customer_Name<<" "<<Surname<<endl;
	cout << "\t\t	| Car Model  "<<"					"<< setw(10) <<car_model<<endl;     //car model
	cout << "\t\t	| YearMade.  "<<"					"<< setw(10) <<year<<endl;
	cout << "\t\t	| Number of days  "<<"				"<< setw(10) <<number_Of_Days<<endl;
	cout << "\t\t	|___________________________________________________________"<<endl;
	cout << "\t\t	| Rental Amount    "<<"			         "<<setw(6)<<"R " << rent_Fee<<endl;
    cout << "\t\t	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\t\t	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\t\t	 NOTE: This is a computer-generated invoice. " << endl;
    cout << "\t\t	       It does not require an authorized signature." << endl;
    cout << "\t\t	***********************************************************" << endl;
    cout << "\t\t	You are advised to pay up the amount before the due date." << endl;
    cout << "\t\t	Otherwise, a penalty fee will be applied." << endl;
    cout << "\t\t	***********************************************************" << endl;
    system("pause");
    system("CLS");
    fileReader("Tnx.txt");
}

int main() {
    Rent rent;
    rent.welcome();
    rent.data();
    rent.invoiceAmount();
    rent.invoiceRecord();
    return 0;
}
