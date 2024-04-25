// //  pattern -/>

// #include <iostream>

// # include <bits/stdc++.h>
// using namespace std;
// int main(){

//  int column;
//   cout<<"enter your column no" " ";
//   cin>>column;

//   int row;
//   cout<<"enter your row no" " " ;
//   cin>>row;
//   for(int i=0; i<=column ; i++){

//     for(int j=0; j<=row -i; j++){

//       cout<<"*";

//     }
//     cout<<"\n";
//   }

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int rows;

//     cout << "Enter the number of rows for the triangle: ";
//     cin >> rows;

//     for (int i = 1; i <= rows; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             cout << "*";
//         }

//        cout <<endl;
//     }

// }

// ..................................................................

// #include <iostream>
// using namespace std;
// int main(){

//   int column;
//   cout<<"enter your column no:";
//   cin>>column;

//   int row;
//   cout<<"enter your row no:";
//   cin>>row;
//   for(int i=0; i<=column; i++){

//     for(int j=0; j<=row-i; j++){
//       cout<<"*";
//     }
//     cout<<"\n";
//   }

// }

// #include <iostream>
// using namespace std;
// int main(){

//   int column;
//   cout<<"enter your column no:";
//   cin>>column;

//   int row;
//   cout<<"enter your row no:";
//   cin>>row;
//   for(int i=0; i<=column; i++){

//     for(int j=0; j<=row-i; j++){
//       cout<<j+1;
//     }
//     cout<<"\n";
//   }

// }

// #include <iostream>

// using namespace std;

// int main() {
//   int row;
//   cout<<"enter your row no:";
//   cin>>row;

//     for (int i = 1; i <= row; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             cout << "* ";

//         }
//         cout << endl;
//     }
// }

// #include <iostream>

// using namespace std;

// int main() {
//   int row;
//   cout<<"enter your row no:";
//   cin>>row;

//     for (int i = 0; i <= row; ++i) {
//         for (int j = 0; j <= i; ++j) {
//             cout << j+1;

//         }
//         cout << endl;
//     }
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, j;
//     for (i = 0; i < 6; i++)
//     {
//         for (j = 0; j <= i; j++)
//             cout << "* ";
//         cout << endl;
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows;
//     cout << "Enter the number of rows for the pyramid: ";
//     cin >> rows;

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < rows - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < 2 * i + 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//   int num[8];
//   int size = 8;
//   int start = 0;
//   int end = size - 1;

//   cout << "Enter 8 numbers:\n";
//   for (int i = 0; i < size; ++i)
//   {
//     cout << "Enter number " << i + 1 << ": ";
//     cin >> num[i];
//   }

//   while (true)
//   {
//     if (start > end)
//     {
//       break;
//     }
//     else
//     {
//       cout << num[start] << " ";
//       cout << num[end] << " ";
//       start++;
//       end--;
//     }
//   }

//   return 0;
// }

// #include <iostream>
// using namespace std;

// #include <iostream>
// using namespace std;

// int main()
// {

//   int num[8] = {1, 2, 3, 4, 5, 6, 7, 8};

//   int size = 8;
//   int start = 0;
//   int end = size - 1;

//   while (true)
//   {
//     if (start > end)
//     {
//       break;
//     }
//     else
//     {
//       cout << num[start];
//       cout << num[end];
//       start++;
//       end--;
//     }
//   }
// }