#include <iostream>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <cstdlib>


using namespace std;

int main()
{
        cout << "HELLO!, WELCOME TO KINGS BANK" << endl;

        int User_Activity;

        cout << endl << endl << "1.Create Account   2.Log into existing account" << endl << endl;
        cin >> User_Activity;

        if((User_Activity < 1 || User_Activity > 2)){

        do{
            cout << endl << endl << "Input Error please try again " << endl;
            cout << endl << endl << "1.Create Account   2.Log into existing account" << endl << endl;
            cin >> User_Activity;
        }
        while (User_Activity < 1 || User_Activity > 2);
        }

        string FirstName;
        string LastName;
        string Email;
        string Digital_Address;
        string Nationality_Option;
        string DOB;
        string Occupation;
        string Password;
        string User_Account_Type;
        string Currency_type;
        string User_Title;
        string Nationality;
        string Telephone;
        string Marital_Status;
        string Pass_word;
        int ACN;
        int Currency;
        int Title;
        int Origin;
        int Status;
        int Register;
        int Account_Type;
        int Account_Number;

        if (User_Activity == 1){

        ofstream RecordFile;
        RecordFile.open("record.txt",  std::ios_base::app);
        ofstream User_Credentials;
        User_Credentials.open("credentials.txt", std::ios_base::app);

        cout << endl << endl << "Please follow the On-Screen Questions to proceed" << endl << endl;
        cout << endl << "1.Savings Account   2.Money Market Account   3.Checking Account" << endl << endl;
        cin >> Account_Type;

        if (Account_Type == 1){
            User_Account_Type = "Savings Account";
        }
         if (Account_Type == 2){
            User_Account_Type = "Money Market Savings";
        }
         if (Account_Type == 3){
            User_Account_Type = "Checking Account";
        }
        if (Account_Type < 1 || Account_Type > 3){
        do{
            cout << endl << endl << "Input Error please try again " << endl;
            cout << endl << "1.Savings Account   2.Money Market Account   3.Checking Account" << endl << endl;
            cin >> Account_Type;
        }
        while (Account_Type < 1 || Account_Type > 3);
        }



        cout << endl << endl << "Currency Type" << endl;
        cout << endl << "1.USD   2.GHC   3.EUR" << endl << endl;
        cin >> Currency;

         if (Currency == 1){
            Currency_type = "USD";
        }
         if (Currency == 2){
            Currency_type = "GHC";
        }
         if (Currency == 3){
            Currency_type = "EUR";
        }
        if (Currency < 1 || Currency > 3){
         do{
            cout << endl << endl << "Input Error please try again " << endl;
            cout << endl << "1.USD   2.GHC   3.EUR" << endl << endl;
            cin >> Currency;
        }
        while (Currency < 1 || Currency > 3);
        }

        cout << endl << endl << "Specify title" << endl;
        cout << endl << "1.Mrs   2.Mr   3.Miss   4.Ms" << endl << endl;
        cin >> Title;

         if (Title == 1){
            User_Title = "Mrs";
        }
         if (Title == 2){
            User_Title = "Mr";
        }
         if (Title == 3){
            User_Title = "Miss";
        }
         if (Title == 4){
            User_Title = "Ms";
        }
        if (Title < 1 || Title > 4){
         do{
            cout << endl << endl << "Input Error please try again " << endl;
            cout << endl << "1.Mrs   2.Mr   3.Miss   4.Ms" << endl << endl;
            cin >> Title;
        }
        while (Title < 1 || Title > 4);
        }

        cout << endl << endl << "Enter First name" << endl << endl;
        cin >> FirstName;

        cout << endl << endl << "Enter Last name" << endl << endl;
        cin >> LastName;

        cout << endl << endl << "Enter Telephone Number" << endl << endl;
        cin >> Telephone;

        cout << endl << endl << "Enter Email " << endl << endl;
        cin >> Email;

        cout << endl << endl << "What is your Nationality" << endl;
        cout << endl << "1.Ghanaian   2.US Citizen   3.Other" << endl << endl;
        cin >> Origin;

         if (Origin == 1){
            Nationality = "Ghanaian";
        }
         if (Origin == 2){
            User_Title = "US Citizen";
        }
         if(Origin == 3){
            cout << endl << endl << "Please specify Nationality" << endl << endl;
            cin >> Nationality;
        }
        if (Origin < 1 || Origin > 3){

         do{
            cout << endl << endl << "Input Error please try again " << endl;
            cout << endl << "1.Ghanaian   2.US Citizen   3.Other" << endl << endl;
            cin >> Origin;
        }
        while (Origin < 1 || Origin > 3);
        }

        cout << endl << endl << "Enter Digital Adress" << endl << endl;
        cin.ignore();
        getline(cin, Digital_Address);

        cout << endl << endl << "Enter DOB (MM/DD/YYYY)" << endl << endl;
        cin >> DOB;

        cout << endl << endl << "Specify Marital status" << endl << endl;
        cout << endl << "1.Married   2.Widowed   3.Single   4.Separated   5.Divorced" << endl << endl;
        cin >> Status;

         if (Status == 1){
            Marital_Status = "Married";
        }
         if (Status == 2){
            Marital_Status = "Widowed";
        }
         if (Status == 3){
            Marital_Status = "Single";
        }
         if (Status == 4){
            Marital_Status = "Separated";
        }
         if (Status == 5){
            Marital_Status = "Divorced";
        }
        if (Status < 1 || Status > 5){
         do{
            cout << endl << endl << "Input Error please try again " << endl;
            cout << endl << "1.Married   2.Widowed   3.Single   4.Separated   5.Divorced" << endl << endl;
            cin >> Status;
        }
        while (Status < 1 || Status > 5);
        }

        cout << endl << endl << "Enter Occupation" << endl << endl;
        cin.ignore();
        getline(cin, Occupation);

        cout << endl << endl << "By completing this form you agree to the terms and conditions that govern your account and your relationship with the bank" << endl << endl;
        cout << endl << "1.Register   2.Cancel" << endl << endl;
        cin >> Register;

         if (Register == 1){
            cout << endl << endl << "Registration success" << endl << endl;
        }
         if (Register == 2){
            cout << endl << endl << "See you soon" << endl;
        }
         if (Register < 1 || Register > 2){
         do{
            cout << endl << endl << "Input Error please try again " << endl;
            cout << endl << "1.Register   2.Cancel" << endl << endl;
            cin >> Register;
        }
        while (Register < 1 || Register > 2);
         }

        cout << endl << "Create a password for logins" << endl <<endl;
        cin >> Password;

        Account_Number = 85;
        cout << endl << endl << "Your Account Number is " << Account_Number << endl << endl;

        RecordFile << Account_Number << " " << Password << endl;

        User_Credentials << "Name : " << User_Title << " " << FirstName << " " << LastName << endl;
        User_Credentials << "Email : " << Email << endl;
        User_Credentials << "Digital Address : " << Digital_Address << endl;
        User_Credentials << "Date Of Birth : " << DOB << endl;
        User_Credentials << "Occupation : " << Occupation << endl;
        User_Credentials << "Nationality : " << Nationality << endl;
        User_Credentials << "Marital Status : " << Marital_Status << endl;
        User_Credentials << "Contact : " << Telephone  << endl;
        User_Credentials << "Account Type : " << User_Account_Type << endl;
        User_Credentials << "Currency : " << Currency_type << endl;

        User_Credentials.close();
        RecordFile.close();


    }
    else if (User_Activity == 2){

    ifstream InputFile;
    InputFile.open("record.txt", std::ios_base::app);

    cout << endl << endl << "Enter Account Number to Login" << endl << endl;
    cin >> ACN;

    cout << endl << endl << "Enter Password to login" << endl << endl;
    cin >> Pass_word;

    if (InputFile >> Account_Number && InputFile >> Password && Account_Number == ACN && Password == Pass_word) {
        cout << endl << "Welcome Back" << endl;
    }
    else {
        cout << endl << "Login Error, Please Create Account or check credentials" << endl;
    }

    InputFile.close();

    }
}









