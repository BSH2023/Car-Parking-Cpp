#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
	int enter,car=0, bike=0, rishaw=0; //main input & Numbers
main() {
std::cout << "\t\tC A R   P A R K I N G"<< "\n\n";
while(true)
{
	cout << "Press 1 To enter car" << endl;
	cout << "Press 2 To enter bike" << endl;
	cout << "Press 3 To enter rikshaw" << endl;	
	cout << "Press 4 To show the record" << endl;
	cout << "Press 5 To delete the record" << endl;
	cout << "Press 6 To save record in file" <<endl;
	cout << "Press 7 To exit" << "\n\n";
	cout << "Please Enter Number: ";
	cin >> enter;	
//First Input	
if(enter==1)
{
	car++;
	system("CLS");
	cout << "Car is Added" << endl;
}
//second Input	
else if(enter==2)
{
	bike++;
	system("CLS");
	cout << "Bike is Added" << endl;
}
//Third Input
else if(enter==3){
	rishaw++;
	system("CLS");
	cout << "Rikshaw is Added" << endl;
}
//Fourth Input	
else if(enter==4){
	
cout << "\n------------------------"<< "\n";
	cout << "car " <<car<< endl;
	cout << "Bike " <<bike<< endl;
	cout << "Rikshaw " <<rishaw<< endl;
cout << "\n------------------------"<< "\n";	
	
}	
//Fivth Input	
	else if(enter==5){
	
	car=0;
	bike=0;
	rishaw=0;
	system("CLS");
	cout << "All record is deleted..!"<< endl;
}
 //sixth Input
 
	else if(enter==6){	
//create and open a text file
  ofstream MyFile ("record.txt");
//Write to the file
  MyFile << "Numbers Car= "<< car << "\n" << "Numbers Bike= " << bike << "\n" << "Numbers rishaw= " << rishaw << "\n\n" ;
//close the file
  MyFile.close();	
	cout << "\n\n\aRECORD SAVED! \t Please Move the latest Saved TXT file or rename it, so that the new file is not saved over the same old file." << "\n\n";
}	
//sevnth Input
	else if(enter==7){	
	exit(0); //Closed The program	
}
//last input
else{
	cout << "Invalid Input"<< endl;
}
}
}
