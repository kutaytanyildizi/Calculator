#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

class Calculator
{
    private:
    float number_1;
    float number_2;
    int op;

    public:
    Calculator(float num1=0, float num2=0);
    ~Calculator(){}
    void options();
    void calculate();
    void setNum1();
    float getNum1() const{return number_1;}
    void setNum2();
    float getNum2() const{return number_2;}
    int getOp() const{return op;}
    float add();
    float sub();
    float mul();
    float div();
    int mod();
    bool controlNum(string fnum);
};

Calculator::Calculator(float num1, float num2)
{
    number_1 = num1;
    number_2 = num2;
}

void Calculator::options()
{
    cout<<"----Calculator----"<<endl;
    cout<<"1-Addition"<<endl;
    cout<<"2-Substraction"<<endl;
    cout<<"3-Multiplication"<<endl;
    cout<<"4-Divider"<<endl;
    cout<<"5-Modulo Operation"<<endl;
    cout<<"6-Turn Off"<<endl;
    cout<<"Please enter your selection:";
    cin>>op;
}


void Calculator::calculate()
{   
    Calculator Operation;
    switch (op)
    {
        case 1:
            Operation.add();
        break;
        case 2:
            Operation.sub();
        break;
        case 3:
            Operation.mul();
        break;
        case 4:
            Operation.div();
        break;
        case 5:
            Operation.mod();
        break;
    }

}

void Calculator::setNum1()
{
    Calculator control;
    string fnum;
    int counter=0;
    do
    {
        if(counter>0)
        {
            cout<<"You entered a non numeric value."<<endl;
        }
        cout<<"Enter the first number:";
        cin>>fnum;
        counter++;

    } while (!(control.controlNum(fnum)));
    
    number_1 = std::stof(fnum);
}

void Calculator::setNum2()
{
    Calculator control;
    string fnum;
    int counter=0;
    do
    {
        if(counter>0)
        {
            cout<<"You entered a non numeric value."<<endl;
        }
        cout<<"Enter the second number:";
        cin>>fnum;
        counter++;

    } while (!(control.controlNum(fnum)));
    
    number_2 = std::stof(fnum);
}

float Calculator::add()
{
    Calculator add;
    float result;
    char option='Y';
    while(option=='Y')
    {
        system("clear");
        cout<<"-----ADDITION OPERATION-----"<<endl;
        cout<<"Enter the numbers for addition."<<endl;
        add.setNum1();
        add.setNum2();
        result = add.number_1 + add.number_2;
        cout<<add.number_1<<"+"<<add.number_2<<"="<<result<<endl;
        cout<<"Would you like to continue Y/N:";
        cin>>option;
        option = toupper(option);
    }
    return result;
}

float Calculator::sub()
{
    Calculator sub;
    float result;
    char option='Y';
    while(option=='Y')
    {
        system("clear");
        cout<<"-----SUBSTRACTION OPERATION-----"<<endl;
        cout<<"Enter numbers for substracion."<<endl;
        cout<<"The substraction takes place as follows."<<endl;
        cout<<"(Number that you first entered)-(Number that you second entered)"<<endl;
        sub.setNum1();
        sub.setNum2();
        result = sub.number_1-sub.number_2;
        cout<<sub.number_1<<"-"<<sub.number_2<<"="<<result<<endl;
        cout<<"Would you like to continue Y/N:";
        cin>>option;
        option = toupper(option);
    }
    return result;
}

float Calculator::mul()
{
    Calculator mul;
    float result;
    char option='Y';
    while(option=='Y')
    {
        system("clear");
        cout<<"-----MULTIPLICATION OPERATION-----"<<endl;
        cout<<"Enter the numbers for multiplication."<<endl;
        mul.setNum1();
        mul.setNum2();
        result = (mul.number_1)*(mul.number_2);
        cout<<"("<<mul.number_1<<")x("<<mul.number_2<<")="<<result<<endl;
        cout<<"Would you like to continue Y/N:";
        cin>>option;
        option = toupper(option);
    }
    return result;
}

float Calculator::div()
{
    Calculator div;
    float result;
    char option='Y';
    while(option=='Y')
    {
        system("clear");
        cout<<"-----DIVIDER OPERATION-----"<<endl;
        cout<<"Enter the numbers for divider operation."<<endl;
        cout<<"The divider operation takes place as follows."<<endl;
        cout<<"(Number that you first entered)/(Number that you second entered)"<<endl;
        div.setNum1();
        div.setNum2();
        result = (div.number_1)/(div.number_2);
        cout<<"("<<div.number_1<<")/("<<div.number_2<<")="<<result<<endl;
        cout<<"Would you like to continue Y/N:";
        cin>>option;
        option = toupper(option);
    }
    return result;
}

int Calculator::mod()
{
    Calculator mod;
    int result;
    char option='Y';
    int number_m1;
    int number_m2;
    while(option=='Y')
    {
        system("clear");
        cout<<"-----MODULO OPERATION-----"<<endl;
        cout<<"Enter the numbers for modulo operation."<<endl;
        cout<<"The modulo operation takes place as follows."<<endl;
        cout<<"(Number that you first entered) mod (Number that you second entered)"<<endl;
        mod.setNum1();
        mod.setNum2();
        number_m1 = static_cast<int>(mod.number_1);
        number_m2 = static_cast<int>(mod.number_2);
        result = (number_m1) % (number_m2);
        cout<<mod.number_1<<" mod "<<mod.number_2<<" = "<<result<<endl;
        cout<<"Would you like to continue Y/N:";
        cin>>option;
        option = toupper(option);
    }
    return result;
}

bool Calculator::controlNum(string fnum)
{
    for(int i = 0; i<fnum.size(); i++)
    {
        if(!(('0'<=fnum[i] && fnum[i]<='9') || (fnum[i]=='.' || fnum[i]=='-')))
        {
            return false;
        }
    }
    return true;
}