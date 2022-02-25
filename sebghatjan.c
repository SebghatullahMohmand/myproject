#include<stdio.h>
int find_match(char*string, char*pattern)
{
	int loc=-1,j=0;
	for(int i=0;string[i] !='\0';i++)
	{
	   if (string[i]==pattern[j])
	    {
	       loc=i;
		for(j=0;pattern[j] != '\0';j++)
 		{	
		  if (string[i+j] != pattern[j])
		  {
		    loc=1;
    		    break;
		    }
		  }
		}
	     }
	     return loc;
}

int main()
{
    char*string="sebghat";
    char*sub="sg";
    printf("%d",find_match(string,sub));
    return 0;
}
