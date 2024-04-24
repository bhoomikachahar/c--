// #include <iostream>

// using namespace std;

// class deposit
// {
// public:
//     int amount;
//     string name;

//     void showDeposit()
//     {
//         cout << "How much do you want to deposit in your account: ";
//         cin >> amount;
//         cout << "Your total amount is: " << amount << endl<<endl;
//         cin.ignore();

//         cout << "What is your name: ";
//         getline(cin, name);
//         cout << "Your name is " << name << endl<<endl;
//     }
// };

// class services : public deposit
// {
// public:
//     string service;
//     string dish;
//     string sim;
//     string gas; 

//     void showServices()
//     {
//         cout << "Some services are given below:-" << endl
//              << "DTH Recharge" << endl
//              << "Mobile Recharge" << endl
//              << "Gas Fill" << endl
//              << "Exit" << endl<<endl
//              << "Which service will you take: ";
//         getline(cin, service);

//         if (service == "DTH Recharge")
//         {
//             cout << "Video Con" << endl
//                  << "Airtel" << endl
//                  << "Tata Sky" << endl<<endl
//                  << "What is the name of your dish tv: ";
//             getline(cin, dish);
//         }
//         else if (service == "Mobile Recharge")
//         {
//             cout << "Some SIMs are given below:-" << endl
//                  << "VI" << endl
//                  << "Jio" << endl
//                  << "Airtel" << endl
//                  << "BSNL" << endl<<endl
//                  << "Which SIM is yours ";
//             getline(cin, sim);
//         }
//         else if (service == "Gas Fill")
//         {
//             cout << "Which is your gas?" << endl
//                  << "HP" << endl
//                  << "Bharat" << endl
//                  << "Indian" << endl<<endl
//                  << "Enter your gas: ";
//             getline(cin, gas);
//         }
//         else if (service == "Exit")
//         {
//             return;
//         }
//         else
//         {
//             cout << " service  is not available." << endl;
//         }
//     }
// };

// class number : public services
// {
// public:
//     string num;
//     int money;

//     void showNumber()
//     {
//         cout << "Enter your " << service << " number: ";
//         cin >> num;

//         for (int i = 0; i < 3; ++i)
//         {
//             if ((service == "DTH Recharge" && num.length() == 11) ||
//                 (service == "Mobile Recharge" && num.length() == 10) ||
//                 (service == "Gas Fill" && num.length() == 4))
//             {
//                 cout << "Available recharge/fill amounts:" << endl
//                      << "299" << endl
//                      << "399" << endl
//                      << "599" << endl
//                      << "1099" << endl<<endl
//                      << "Which amount do you want to recharge/fill: ";
//                 cin >> money;
//                 break;
//             }
//             else
//             {
//                 cout << "Invalid " << service << " number. Please enter again: ";
//                 cin >> num;
//             }
//         }
//     }
// };

// class addAmount : public number
// {

// public:
//     string option;
//     int addMoney;

//     void showWithdrow()
//     {

//         if (money <= amount)
//         {
//             cout << "Recharge/Filling Successfully"<<endl;
//         }

//         else
//         {
//             cout << "Some options are given below:-" << endl
//                  << "Exit" << endl
//                  << "Add Amount " << endl
//                  << "because your balance is insufficient " << endl<<endl;
//         }

//         cout << "choose one option : ";
//         cin.ignore();
//         getline(cin, option);

//         if (option == "Exit")
//         {
//             return;
//         }

//         if (option == "Add Amount")
//         {
//             while (true)
//             {
//                 if (money <= amount)
//                 {
//                     cout << "Recharge/Filling Successfully"<<endl;
//                     break;
//                 }
//                 else
//                 {
//                     cout << "How much do you want to again deposit in your account: ";
//                     cin >> addMoney;
//                     amount += addMoney;
//                     cout << "Your total amount is : " << amount << endl<<endl;
//                     cin.ignore();
//                 }
//             }
//         }
//     }
// };

// int main()
// {
//     addAmount details;
//     details.showDeposit();

//     details.showServices();
//     details.showNumber();
//     details.showWithdrow();

//     return 0;
// }

