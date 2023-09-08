#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
int subtraction(int x,int y){
    if(x>y){
        return x-y;
    }else{
        return y-x;
    }
}
int multiply(int x,int y){
    return x*y;
}
int divide(int x,int y){
    return x/y;
}
int main(){
    int x,y,op;
    while(1){
    cout<<"Enter first num :- ";
    cin>>x;
    cout<<endl<<"Enter second num :- ";
    cin>>y;
    cout<<endl<<"Choose the operation :- 1) + \n2) - \n3) x \n4) / ";
    cout<<endl<<"operation = ";
    cin>>op;
    if(op==1){
        cout<<add(x,y);

    }
    else if(op==2){
        cout<<subtraction(x,y);

    }
    else if(op==3){
        cout<<multiply(x,y);

    }
    else if(op==4){
        cout<<divide(x,y);

    }
    else{
        cout<<"Error! please45 enter valid operation";
    }
    cout<<endl;
    }

}