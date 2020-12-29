#include<iostream>
#include<cmath>

using namespace std;
// bmi= x (kg)/size*size (m*m) = a kg/(m*m)
int main() {
	double bmi,x,m;
	char n,e;
	e: cout<<"Enter your weight: "; cin>>x; cout<<"\n";
	   cout<<"Enter your height: "; cin>>m; cout<<"\n";
       bmi = x/(m*m);
       cout<<"Your body mass index is: "<<bmi<<endl;
       if(bmi>=40){cout<<"\nYou are forward obese. It would be good for your health to do exercise and keep a diet. Also, you should get professional help."<<endl;}
	   else if(bmi>=30 && bmi<40){cout<<"\nYou are obese. You should do exercise and keep a diet."<<endl;}
	   else if(bmi>=25 && bmi<30) {cout<<"\nYou are overweight. There is nothing to be concerned. However, it would be good for your health to do some exercise and lose some weight." << endl;}
	   else if(bmi>=18.5 && bmi<25){cout<<"\nYou are in normal weight and in your perfect shape. You should keep fit."<<endl;}
	   else{cout<<"\nYou are skinny. It would be good to gain some weight."<<endl;}
	   cout<<"\n"<<endl; 
	   cout<<"Do you want to enter different values?(y/n)"; cin>>n; cout<<"\n";
	if(n =='y'){
		goto e;
	}
}
