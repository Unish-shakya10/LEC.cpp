#include<iostream>
using namespace std;

class Room(){
    public :
    int length ;
    int breadth;
    int height;
    double calculateArea(){
        return length * breadth;
    }
    double calculateVolume() {
        return length * breadth * height;
    }

};
int main()
{
    Room obj401;
    cout<<"enter the length of the room :";
    cin>>obj401.lenght;
    cout<<"enter the breadth of the room :";
    cin>>obj401.breadth;
    cout<<"enter the height of the room :";
    cin>>obj401.height;

    cout<<"the area of the room is :"<<obj401.calculateArea();
    cout<<"the volume of the room is:"<<obj401.calculateVolume();
    return 0;

}