#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Welcome to Parthib's Dice Roller! Test your luck ! TRY!"<<endl;
    cout<<"Type '1' to Roll a dice or '2' to roll two Dices"<<endl;
    cin>>z;
    srand(time(0));
    y=rand()%6+1;
    x=rand()%6+1;
    if(z==1){
            cout<<"The Dice Value is "<<x<<endl;
        } 
     else if(z==2) {
    cout<<"The dice values are "<<x<<" and "<<y<<endl;
}
else{
    cout<<"An Error Occurred ! TRY AGAIN ! "<<endl;
}
cout<<"To RETRY Clear the Screen and Run the code Again "<<endl;
    return 0;
}
