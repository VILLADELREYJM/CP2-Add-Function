
#include <iostream>
using namespace std;
int MainMenu();
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()

{
    int val1, val2, choice;
    char continueChoice = 'y';

    do
    {
        do
        {
        choice =MainMenu();
           cout<<"Please input value 1:";
           cin>>val1;
           cout<<"Please input value 2:";
           cin>>val2;
               
            system("cls");

            switch (MainMenu())
            {
            case 1:
                int add(int val1,int val2);
            break;
            
            case 2:
               	sub();
            break;
            case 3:
              	mul();
            case 4:
                div();
            break;
            default:
                cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        cout << "Do you want to Contninue [y/n]:";
        cin >> continueChoice;

     

    } while (continueChoice == 'y');
    return 0;
    
    
 int MainMenu(){
 
 int choice;
   cout
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
               cin >> choice;
              system("cls");
              return choice;
              
}
 int add(){
 int val1,val2;
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
                break;

                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
                break;
 case 3:
               cout << "Please input value 1:";
               cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
                break;   
case 4:
                cout << "Please input value 1:";
                cin >> val1;
                cout << "Please input value 2:";
                cin >> val2;
                cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
                break;
            default:
                cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        cout << "Do you want to Contninue [y/n]:";
        cin >> continueChoice;

     				            
}
