#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char str[80];
        int i=0, j;
        cout<<"\nEnter any string :: ";
        scanf("%[^'\n']s",str);

         for(i=0;str[i]!='\0';i++)
         {
            if(str[i]==' ')
            {
                  for(j=i;str[j]!='\0';j++)
                  {
                       str[j]=str[j+1];

                  }
              
           
            }



         }
        
        cout<<" after removing spaces = "<<str<<"\n";

        return 0;
}
