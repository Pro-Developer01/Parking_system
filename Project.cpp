#include <iostream>
using namespace std;

int main()
{
    int r=0, c=0, b=0, amount=0, total_veh=0, choice;

    while (true)
    {
        cout<<"\n \n_____________________________________"<<endl;
        cout<<"_____________________________________\n"<<endl;

        cout << " Welcome to Shashank's Parking System " << endl;
        cout << "\n Press 1 : For Rikshaw Entry" << endl;
        cout << " Press 2 : For Cars Entry" << endl;
        cout << " Press 3 : For Bus Entry" << endl;
        cout << " Press 4 : For Show Record" << endl;
        cout << " Press 5 : To Delete Record" << endl;
        cout<<"\n_____________________________________"<<endl;
        cout<<"_____________________________________"<<endl;

        cout << "\n Enter The Data :  ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            r++;
            amount += 100;
            total_veh++;
            cout << "\n Added 1 Rikshaw in Record \n"
                 << endl;
            // system("pause");
            // system("cls");
            break;

        case 2:
            c++;
            amount += 200;
            total_veh++;
            cout << "\n Added 1 Car in Record \n"
                 << endl;
            // system("pause");
            // system("cls");
            break;

        case 3:
            b++;
            amount += 300;
            total_veh++;
            cout << "\n Added 1 Bus in Record \n"
                 << endl;
            // system("pause");
            // system("cls");
            break;

        case 4:
            cout << "Total Amount = " << amount << endl;
            cout << "Total Vehicles = " << total_veh << endl;
            cout << "Rickshaw = " << r << endl;
            cout << "Cars = " << c << endl;
            cout << "Bus = " << b << endl;
            //  system("pause");
            // system("cls");
            break;

        case 5:
            c = 0;
            r = 0;
            b = 0;
            total_veh = 0;
            amount = 0;
            cout << "\n Record DELETED \n" << endl;
            break;

        default:
            cout << "\n Invalid Input \n" << endl;
        //    system("pause");
        //     system('cls'));
            break;
        }

        
    }

}