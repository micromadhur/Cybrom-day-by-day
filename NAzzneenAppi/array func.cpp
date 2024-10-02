//parameter pass a array

/*#include <iostream>
using namespace std;
void funarr(int a[], int s)
{for(int i=0; i<s; i++)
   {
    cout<<a[i]<<"\t";
   }
}
int main()
{int a[]={25,6,45,8,21,11,79};
  int s = sizeof(a)/sizeof(a[0]);
  funarr(a,s);
}*/

#include <iostream>
using namespace std;
void funarr(int a[], int s)
{for(int i=0; i<s; i++)
if(a[i]%2==0)
   {
    cout<<a[i]<<"\t";
   }
}
int main()
{int a[]={25,6,45,8,21,11,79};
  int s = sizeof(a)/sizeof(a[0]);
  funarr(a,s);
}

/*#include <iostream>
using namespace std;
void funarr(int a[], int s){
for(int i=0; i<s; i++)
{
a[i]=a[i]+10;
    }
}

int main()
{int a[]={25,6,45,8,21,11,79};
  int s = sizeof(a)/sizeof(a[0]);
  funarr(a,s);
  {for(int i=0; i<s; i++)
cout<<a[i]<<"\n";
}
}*/
