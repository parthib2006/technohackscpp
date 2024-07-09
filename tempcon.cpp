#include <iostream>
using namespace std;
int main(){
    float x,y;
    char p,q;
    cout<<"Welcome to Parthib's Temperature Converter"<<endl;
    cout<<"This temperature converter converts between Celcius,Farenheit,Kelvin"<<endl;
    cout<<"Enter the type in which you want to convert"<<endl;
    cout<<"Enter Temperature Numerics"<<endl;
    cin>>x;
    cout<<"Enter 'C' for Celcius, 'F' for Farenheit, 'K' for Kelvin"<<endl;
    cin>>p;
    cout<<"Enter the type in which you want to convert"<<endl;
    cout<<"Enter 'C' for Celcius, 'F' for Farenheit, 'K' for Kelvin"<<endl;
    cin>>q;
    if(p=='C' && q=='F'){
        y=(9*x)/5+32;
         cout<<"The Converted Temperature is "<<y<<" in "<<q<<endl;
    }
    else if(p=='C' && q=='K'){
        y=x+273;
         cout<<"The Converted Temperature is "<<y<<" in "<<q<<endl;
    }
    else if(p=='F' && q=='C'){
        y=(5*x-160)/9;
         cout<<"The Converted Temperature is "<<y<<" in "<<q<<endl;
    }
    else if(p=='F' && q=='K'){
        y=(5*x+2297)/9;
         cout<<"The Converted Temperature is "<<y<<" in "<<q<<endl;
    }
    else if(p=='K' && q=='C'){
        y=x-273;
         cout<<"The Converted Temperature is "<<y<<" in "<<q<<endl;
    }
    else if(p=='K' && q=='F'){
        y=(9*x-2457)/5+32;
         cout<<"The Converted Temperature is "<<y<<" in "<<q<<endl;
    }
    else{
        cout<<"An Error Occurred!!!"<<endl<<"TRY AGAIN !!!"<<endl;
    }
    return 0;
}
