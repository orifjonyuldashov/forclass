#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float height;
    char group_letter;
    bool full_time;

    cout<<"Enter name, age, height, group letter, full-time (1 or o): ";
    cin>>name>>age>>height>>group_letter>>full_time;

    cout<<"--- Student card ---"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Group letter: "<<group_letter<<endl;
    cout<<"Full time: "<<full_time<<endl;
    cout<<"Age in months: " <<age*12<<endl;
    cout<<"Bytes:int "<<sizeof(int)<< ", float " <<sizeof(float)
        << ", char " << sizeof(char)<< ", bool " <<sizeof(bool) <<endl;
    return 0;
}