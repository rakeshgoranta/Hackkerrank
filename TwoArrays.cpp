#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long int *arr,n;
void sort()
{
	int temp ,k;
	for ( int i = 1 ; i <= n- 1 ; i++ )
	{
		for ( int j = 0 ; j < i ; j++ )
		{
			if ( arr[j] > arr[i] )
			{
				temp = arr[j] ;
				arr[j] = arr[i] ;

				for (  k = i ; k > j ; k-- )
					arr[k] = arr[k - 1] ;

				arr[k + 1] = temp ;
			}
		}
	}
}

int main() {
    long int t,k,*a,*b,flag=1,l,m;
    cin>>t;
    for(int h=0;h<t;h++)
    {  cin>>n;cin>>k;
        a=new long int[n];
        b=new long int[n]; 
        for(int i=0;i<n;i++)
        {cin>>a[i];} 
         for(int i=0;i<n;i++)
         {cin>>b[i];}
         arr=a;sort();
         arr=b;sort();
     /*     for(int i=0;i<n;i++)
         {cout<<a[i]<<" ";}cout<<endl;     
          for(int i=0;i<n;i++)
         {cout<<b[i]<<" ";}cout<<endl;
    */
       flag=1;int c;
      for(l=0,m=n-1;l<n;l++,m--)
      { c=a[l]+b[m];
        if(c<k)
        {flag=0;break;
        }
      }
      if(flag==0) 
      {cout<<"NO"<<endl;}
      else
      {  cout<<"YES"<<endl; 
      }
       delete(a);delete(b);
         
     
    }
    
    
    
    
    
    return 0;
}
