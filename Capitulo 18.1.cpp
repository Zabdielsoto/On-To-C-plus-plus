#include<iostream>
using namespace std;

main(){
	int temperature;
	cin>>temperature;
	if(temperature<25)
		cout<<"It is too cold!"<<endl;
	else
		if(temperature>50)
			cout<<"It is too warm!"<<endl;
}
