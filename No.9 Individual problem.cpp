//FCI - Programming 1 - 2018 - Assignment 2
//Program name: Bakhshali
//Last Modification Date: 1/3/2018
//Author and ID and group: Mario Osama - 20170209 - Group 8
//Teaching Assistants: Mohamed Atta & Ibrahim Zidan
//Purpose: To compute the square root using Bakhshali method


#include <iostream>
#include<cmath>
#include<string>

using namespace std;


int main()
{
    float number, estimated=1 , sqrt=0;
    int choice;
    bool isEnd = false;
    cout << endl << "\t\t\t\t\t\t\tWelcome";

    while (isEnd == false){
        cout << endl << "To calculate the square root of a number: press 1" << endl;
        cout << "To exit the program: press 2" << endl;
        cout << "Your choice is: ";
        cin >> choice;

        if (choice == 1){
            cout<< endl << "Enter a number to find its square root : ";
            cin>>number;

            while(number<0){
                cout<<"use positive numbers only"<<endl;
            }

            if(number==0){
                sqrt=0;
                cout<<"square root is : "<<sqrt<<endl;
            }

            else if(number>0){
                for(int i=0; i<25; i++){
                    sqrt=estimated;
                    estimated=0.5*(estimated+number/estimated);
                }
            }
            cout<<"the square root is : "<<sqrt<<endl;
        }
        else if (choice == 2)
            isEnd = true;
    }
    return 0;
}
