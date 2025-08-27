#include <iostream>

using namespace std;

double addition(double numOne, double numTwo){
    return numOne + numTwo;
}
double subtraction(double numOne, double numTwo){
    return numOne - numTwo;
}

double multiplication(double numOne, double numTwo){
    return numOne * numTwo;
}

double division(double numOne, double numTwo){
    return numOne / numTwo;
}


int main()
{
    int operators;
    double num1, num2;
        while(true){
        cout<<"Welcome to basic Calculator. "<< " " << " Created by Gideon. " << endl;
        cout<<" " <<endl;

        cout << "Operators: " << " 1.(+) " << " 2.(-) " << " 3.(*) " << " 4.(/) " << endl;
        cout << "Please select the operator you want to use: ";
        cin >> operators;
        cout << " "<< endl;


        if(operators == 1){

            cout << "Enter a first number: ";
            cin >> num1;
            cout << "Enter a second number: ";
            cin>> num2;

            double add = addition(num1, num2);

            cout<<"Result: " << num1 << " + " << num2 << " = " << add << endl;;
            cout<< " "<<endl;
        }
        else if(operators == 2){

            cout << "Enter a first number: ";
            cin >> num1;
            cout << "Enter a second number: ";
            cin>> num2;

            double subt = subtraction(num1, num2);

            cout<<"Result: " << num1 << " - " << num2 << " = " << subt << endl;
            cout<< " "<<endl;
        }
        else if(operators == 3){
            cout << "Enter a first number: ";
            cin >> num1;
            cout << "Enter a second number: ";
            cin >> num2;

            double mult = multiplication(num1,num2);

            cout<<"Result: " << num1 << " * " << num2 << " = " << mult << endl;
            cout<< " "<<endl;
        }
        else if(operators == 4){
            cout << "Enter a first number: ";
            cin >> num1;
            cout<< "Enter a second number: ";
            cin >> num2;

            double div = division(num1,num2);

            cout <<"Result: " << num1 << " / " << num2 << " = " << div << endl;
            cout << " " << endl;
        }
        }
        return 0;

}
