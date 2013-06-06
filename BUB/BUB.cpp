// BUB.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void bubble(int*a, int n)
{
for (int i=n-1;i>0;i--)
  {
    for (int j=0;j<i;j++)
      {
        if(a[j]>a[j+1])
          {
            int tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
          }
     }
  }
}

int main()
{
	int a[5]={6,5,4,7,2};
	bubble (a, 5);
	for (int i=0;i<5;i++)
	{
		cout<<a[i];
	}
	return 0;
}

