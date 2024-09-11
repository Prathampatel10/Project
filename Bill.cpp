#include<iostream>
using namespace std;
int main()
{
    int i,num,pri[50],itno[100],tp,sum=0;
	char pro[50][200];
	
    cout<<"Enter Total No. Of Products:";
	cin>>num;
	for(i=0;i<num;i++)
	{
		cout<<"Enter Product "<<i+1<<" : ";
		cin>>pro[i];

	}
	for(i=0;i<num;i++)
	{
	cout<<"Quantity Of "<<pro[i]<<" X ";
	cin>>itno[i];
	}
	for(i=0;i<num;i++)
	{     	cout<<"Enter Price Of "<<pro[i]<<" : ";
		cin>>pri[i];
	}
	for(i=0;i<num;i++)
	{
	tp=pri[i]*itno[i];
	sum=sum+tp;
	}
	cout<<"Toal Amount="<<sum;
return 0;
}
