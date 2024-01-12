/*
//TASK 1
#include <iostream>
using namespace std;
struct {
    int hours;
    int minutes;
    int seconds;
}t1;
int main() {
    double totalSeconds;
    cout << "Enter hours, minutes and seconds in the HH:MM:SS format: ";
    cin >> t1.hours >> t1.minutes >> t1.seconds;
    totalSeconds = (t1.hours * 3600) + (t1.minutes * 60) + (t1.seconds);
    cout << "\nTotal Seconds: " << totalSeconds << "s";
    system("pause");
    return 0;
}

//TASK 2
#include <iostream>
using namespace std;
struct {
    int areaCode;
    int exchange;
    int number;
}myPhone, userPhone;
int main() {
    myPhone.areaCode=123;
    myPhone.exchange=456;
    myPhone.number=7890;
    cout<<"Enter you area code, exchange and phone number: ";
    cin>>userPhone.areaCode>>userPhone.exchange>>userPhone.number;
    cout<<"\nMy phone number: "<<myPhone.areaCode<<"-"<<myPhone.exchange<<"-"<<myPhone.number;
    cout<<"\nYour phone numbe is: "<<userPhone.areaCode<<"-"<<userPhone.exchange<<"-"<<userPhone.number;
    system("pause");
    return 0;
}
//TASK 3
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct StudentRecord {
    string name;
    string rollNo;
    string subject[6] = { "Programming", "Compiler Construction", "OOP", "Computing Fundamentals", "English", "Physics" };
    int credits[6] = { 3, 1, 3, 2, 1, 1 };
    int marks[6] = { 88, 85, 90, 97, 87, 88 };
    char grade[6] = { 'A', 'A', 'A', 'A', 'A', 'A' };
    float cgpa = 4.0;
} studentRecord;

int main() {
    studentRecord.name = "Alex";
    studentRecord.rollNo = "123-4567-89";

    cout << "Name: " << studentRecord.name << endl;
    cout << "Enrollment: " << studentRecord.rollNo << endl;

    cout << left << setw(25) << "Subjects" << setw(15) << "Credit Hours" << setw(15) << "Marks" << setw(15) << "Grade" << endl;
    for (int i = 0; i < 6; i++) {
        cout << left << setw(25) << studentRecord.subject[i] << setw(15) << studentRecord.credits[i] << setw(15) << studentRecord.marks[i] << setw(15) << studentRecord.grade[i] << endl;
    }

    cout << "\nCGPA=" << fixed << setprecision(2) << studentRecord.cgpa << endl;

    system("pause");
    return 0;
}

//EXTRA TASK 1
#include <iostream>
#include<string>
using namespace std;
struct{
    string name;
    int quantity;
    float price;
}productInfo;
int main() {
    productInfo.name="cola";
    productInfo.quantity=50;
    productInfo.price=30.5;
    cout<<"Enter product name: ";
    string userInput;
    getline(cin,userInput);
    if(userInput==productInfo.name){
        cout<<"\nProduct Name: "<<productInfo.name<<endl;
        cout<<"Product Price: "<<productInfo.price<<endl;
        cout<<"Product quantity in stock: "<<productInfo.quantity<<endl;
    }
    else{
        cout<<"Product not found";
    }

    return 0;
}
//EXTRA TASK 2
#include <iostream>
#include<string>
using namespace std;
struct{
    string name;
    string address;
    string number;
}customerInfo;
int main() {
    customerInfo.name="Alex";
    customerInfo.address="123 Main Street, Cityville, Stateland";
    customerInfo.number="123-456-7890";
    cout<<"Enter customer's name: ";
    string userInput;
    getline(cin,userInput);
    if(userInput==customerInfo.name){
        cout<<"\nCustomer Name: "<<customerInfo.name<<endl;
        cout<<"Customer Address: "<<customerInfo.address<<endl;
        cout<<"Customer Number: "<<customerInfo.number<<endl;
    }
    else{
        cout<<"Not found";
    }

    return 0;
}*/
