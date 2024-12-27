#include <iostream>
#include <cmath>

using namespace std; 

int main(){
	double x,y,z;
	cout<<"Enter initial value for x: ";
	cin>>x;
	cout<<"Enter initial value for y: ";
	cin>>y;
	cout<<"Enter initial value for z: ";
	cin>>z;
	
	double x1,y1,z1;
	
	x1=(3.0/4.0)+(y/4.0)+(z/4.0);
	y1=(3.0/2)+(x1/3.0)-(z/6.0);
	z1=(-6.0/7)+(x1/7.0)-(y1/7.0);
	
	while(true){
		
		if(fabs(x1-x)<0.0001 && fabs(y1-y)<0.0001 && fabs(z1-z)<0.0001){
			break;
		}
		x = x1;
		y = y1;
		z = z1;
		x1=(3.0/4)+(y1/4.0)+(z1/4.0);
		y1=(3.0/2)+(x1/3.0)-(z1/6.0);
		z1=(-6.0/7)+(x1/7.0)-(y1/7.0);
		
		cout<<x1<<endl<<y1<<endl<<z1<<endl;
		
	}
	
	cout<<"The final answer is: "<<endl<<"x= "<<x1<<endl<<"y= "<<y1<<endl<<"z= "<<z1;
}