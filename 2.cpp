#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int soq[10],som[10],sof[10];
void no_std();
void viwe();
void find();
int main()
{	int me;
	do{
	cout << "===========================\n";
	cout << setw(15)<<"MENU\n";
	cout << "===========================\n";
	cout << "1.Input student records\n";
    cout << "2.View all student records\n";
    cout << "3.Show a student by ID\n";
    cout << "4.Exit\n";
	cout << "Select menu";
	cin >> me;
	if(me == 1)
		no_std();
	else if (me == 2)
		viwe();
	else if (me == 3)
		find();
	}while(me!=4);
}
void no_std()
{	
	int no;
	cout << "Input Number of student :";
	cin >> no;
	for(int i=0; i<no ;i++){
	cout << "Number " << i+1 <<endl;
	cout << "Input Quiz :";
	cin >> soq[i];
	cout << "Input Midterm :";
	cin >> som[i];
	cout << "Input Final :";
	cin >> sof[i];
	}
}
void viwe()
{
	cout << "--------------------------------\n";
	cout << "StdID	Quiz	Midterm	Final\n";
	cout << "--------------------------------\n";
	for(int i=0;i<=sizeof(soq)/(sizeof(soq[0])*10);i++){
	cout << i+1 << "\t" << soq[i] << "\t" << som[i] << "\t" << sof[i] << endl;
	
	}
}
void find()
{	int id;
	cout <<"Input ID :";
	cin  >> id;
	for(int i=0;i<=sizeof(soq)/(sizeof(soq[0])*10);i++){
		if(id == i+1){
	cout << "--------------------------------\n";
	cout << "StdID	Quiz	Midterm	Final\n";
	cout << "--------------------------------\n";
	cout << i+1 << "\t" << soq[i] << "\t" << som[i] << "\t" << sof[i] << endl;
	}else{
		break;
		cout << "Your ID is not found "<<endl;
		}
	}
}