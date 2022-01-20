#include<iostream>
using namespace std;
int binarysearch(int arr[], int start, int end, int element)
{
	while(start<=end)
	{
		int mid = start + end-start/2;
		if(element==arr[mid])
		return mid;
		else if(element<arr[mid])
		start=mid+1;
		else
	     end=mid-1;
	}
	return -1; 
}
int main()
{
	int num;
	int myarr[10];
	int ans;
	cout<<"\nenter 10 integers in descenorder";
	for(int i=0;i<10;i++)
	{
		cin>>myarr[i];
	}
	cout<<"enter one no. that you want to search in array";
	cin>>num;
	ans = binarysearch(myarr,0,9,num);
	if(ans==-1)
	{
		cout<<"no match found";
	}
	else
	{
		cout<<"match found at index position:"<<ans<<endl;
	}
	return 0;
}
	