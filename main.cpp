#include <iostream> //input out stream
#include <fstream>  //used for writing getdata functions arguments into a .txt file which stores mock clients data
#include <iomanip>  //used for setting width of titles
#include <algorithm> //used later for sort algorithm
#include <cmath>    //used for getting random number
#include <ctime>    //used for generating a new number
//#inlcude <cstdlib>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

string menu(int&menuOption) {
    string titleArr[2] = {"Cookies Banking Management System","Federal Banking Member FDA." };
    cout<<setw(50)<<titleArr[0]<<'\n'<<setw(50)<<titleArr[1]<<'\n'<<endl;
    string menuArr[3] = { "1. Open Checking Account","2. Open Savings Account", "3. Check Balance" };
    for(int i = 0; i<3; ++i) {
        cout<<menuArr[i]<<endl;
    }
    cin>>menuOption;
}
/*The get data function is supposed to take in 4 variables from an int main function and pass it as reference
we initialize those variables by asking questions which are stored in an array. then we also use a for loop
to access the array and print the questions to the compiler the other part is that we also ask for user input. the for
loop is supposed to print this to the compiler after pressing 1`in the main menu:

Enter Your First Name: John
Enter Your last Name: Doe
Enter Your Phone Number: 000-000-0000

John Doe 000-000-0000
*/
string getdata(int&menuOption,string&depositAmount, string&firstName, string&lastName, string&phoneNumber) {
    //using the menuOption as pass-by-reference and giving it value with user input.
    //the if condition which takes in the var menuOption and see what integer you choose to access the menu.
    if( menuOption == 1) {
        //title description string array with 2 elements
        string desArr[2] = {"Welcome to Cookies Banking Management System"," To open an account please enter info"};
        //prints out title array with each title on its own line.
        cout<<desArr[0]<<'\n'<<desArr[1]<<'\n'<<endl;
        //string array for questions to ask before opening mock bank account
        string Questions[4] = {"Enter your first name: ","Enter last name: ","Enter your phone no.: ","How much would you like to deposit: "};
        string literalArr[4] {firstName,lastName,phoneNumber,depositAmount};
        //the for loop that prints out questions array and reads in user input.
        for(int j = 0; j < 4; ++j) {
            cout<<Questions[j];
            cin>>literalArr[j];
        }
            cout<<endl;
            cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<setw(20)<<"First Name"<<setw(20)<<"Last Name"<<setw(20)<<"Phone No."<<setw(20)<<"Deposit"<<endl;
            cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
            //setw value are just set to work in alignment with my name as test.
            cout<<setw(16)<<literalArr[0]<<setw(22)<<literalArr[1]<<setw(25)<<literalArr[2]<<setw(17)<<literalArr[3];

            }

            ofstream balanceData;
            balanceData.open ("C:\\Users\\Urihel\\Desktop\\Country Code Reader\\accountBalances.txt", fstream::app);
            balanceData <<"File is writing to accountBalance.txt and in a new line every time"<<'\n';
            balanceData.close();
}
string printBalance(int&menuOption) {

        if(menuOption == 3) {
            //this is the section where we will read in from a text document and print the balances that you need.
            cout<<"AREA FIFTY1 Development";
        }

}


//----------------------------------------------------------------------------------------------------
int main(){

   int menuOption; // this variable stores integral values of 1-3.
   string firstName, lastName, phoneNumber,depositAmount; // these variables store mock clients data with pass-by-reference
   menu(menuOption);//calls to the menu function
   getdata(menuOption,depositAmount,firstName, lastName, phoneNumber);//calls to the getdata function and it passes-by-reference the variables above
   printBalance(menuOption);
}

