#include<iostream>
using namespace std;
double sum(double val1,double val2)
{
    return val1+val2;
}
double sub(double val1,double val2)
{
    return val1-val2;
}
double prod(double val1,double val2)
{
    return val1*val2;
}
double div(double val1,double val2)
{
    return val1/val2;
}
int main()
{
    int choice;
    double val1,val2,result;
    
    cout<<"Enter The First Value : ";
    cin>>val1;
    cout<<"Enter The Second Value : ";
    cin>>val2;
    cout<<"Please Select Any Operation"<<endl;
    cout<<"1.Add."<<endl;
    cout<<"2.Substract."<<endl;
    cout<<"3.Multiply."<<endl;
    cout<<"4.Divide."<<endl;
    cin>>choice;
    if(choice==1)
    {
        result=sum(val1,val2);        
    }
    else if(choice==2)
    {
        result=sub(val1,val2);        
    }
   else if(choice==3)
    {
        result=prod(val1,val2);        
    }
   else if(choice==4)
    {
        result=div(val1,val2);        
    }
    cout<<"Result = "<<result<<endl;
}