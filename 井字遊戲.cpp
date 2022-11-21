#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
string ox[5][5]={ {" ","｜"," ","｜"," "},{"─","┼","─"," ┼","─"},{" ","｜"," ","｜"," "},{"─","┼","─"," ┼","─"},{" ","｜"," ","｜"," "} },numb[8],winner; 
int a[9]={0,0,0,0,0,0,0,0,0},b[9]={0,0,0,0,0,0,0,0,0},x,o,i,j,k=0,space;

for(i=0;i<=4;i++)
	{
	for(j=0;j<=4;j++)
		{
		 cout<<ox[i][j];
		}
		cout<<"\n";
	}
while(k<9)
 {
	k++;
	if(k%2==0)
	   cout<<"x:";
	else
	   cout<<"o:";		
	cin>>space;
	switch(space)
	{
		case 1:
		if(k%2==0)
		{
	    	ox[0][0]="x";
	    	a[1]=a[1]+1;
	    	a[4]=a[4]+1;
	    	a[7]=a[7]+1;
		}
		else
		{
	    	ox[0][0]="o";
	    	b[1]=b[1]+1;
	    	b[4]=b[4]+1;
	    	b[7]=b[7]+1;
		}
		break;
		
		case 2:
		if(k%2==0)
		{
	    	ox[0][2]="x";
	    	a[1]=a[1]+1;
	    	a[5]=a[5]+1;
	    }
		else
		{
	    	ox[0][2]="o";
	    	b[1]=b[1]+1;
	    	b[5]=b[5]+1;
		}
		break;	
		
		case 3:
		if(k%2==0)
		{
		   	ox[0][4]="x";
		   	a[1]=a[1]+1;
		   	a[6]=a[6]+1;
		   	a[8]=a[8]+1;
		}
		else
		{
			ox[0][4]="o";
			b[1]=b[1]+1;
		   	b[6]=b[6]+1;
		   	b[8]=b[8]+1;
		}
		break;
		
		case 4:
		if(k%2==0)
		{
		   	ox[2][0]="x";
		   	a[2]=a[2]+1;
		   	a[4]=a[4]+1;
		}
		else
		{
			ox[2][0]="o";
			b[2]=b[2]+1;
		   	b[4]=b[4]+1;
		}
		break;
		
		case 5:
		if(k%2==0)
		{
			ox[2][2]="x";
			a[2]=a[2]+1;
			a[5]=a[5]+1;
			a[8]=a[8]+1;
			a[7]=a[7]+1;
		}
		else
		{
			ox[2][2]="o";
			b[2]=b[2]+1;
			b[5]=b[5]+1;
			b[8]=b[8]+1;
			b[7]=b[7]+1;
		}
		break;
		
		case 6:
		if(k%2==0)
		{
			ox[2][4]="x";
			a[2]=a[2]+1;
			a[6]=a[6]+1;
		}
		else
		{
			ox[2][4]="o";
			b[2]=b[2]+1;
			b[6]=b[6]+1;
		}
		break;
	
		case 7:
		if(k%2==0)
		{
		   	ox[4][0]="x";
		   	a[3]=a[3]+1;
		   	a[4]=a[4]+1;
		   	a[8]=a[8]+1;
		}
		else 
		{
			ox[4][0]="o";
			b[3]=b[3]+1;
		   	b[4]=b[4]+1;
		   	b[8]=b[8]+1;
		}
		break;
	
		case 8:
		if(k%2==0)
		{
		   	ox[4][2]="x";
		   	a[3]=a[3]+1;
		   	a[5]=a[5]+1;
		}
		else
		{
			ox[4][2]="o";
			b[3]=b[3]+1;
		   	b[5]=b[5]+1;
		} 
		break;
	
		case 9:
		if(k%2==0)
		{ 
		   	ox[4][4]="x";
		   	a[3]=a[3]+1;
		   	a[6]=a[6]+1;
		   	a[7]=a[7]+1;
		} 
		else
		{ 
			ox[4][4]="o";
			b[3]=b[3]+1;
		   	b[6]=b[6]+1;
		   	b[7]=b[7]+1;
		} 
		break;
	}
		system("cls");
		for(i=0;i<=4;i++)
			{
			for(j=0;j<=4;j++)
				{
				 cout<<ox[i][j];
			    }
			cout<<"\n";
			}
	if(a[1]==3)
	{ 
	 k=10;
	 winner="x"; 
	} 
	else if(a[2]==3)
	{ 
	 k=10;
	 winner="x"; 
	} 
	else if(a[3]==3)
	{ 
	 k=10;
	 winner="x";
	 } 
	else if(a[4]==3)
	{ 
	 k=10;
	 winner="x"; 
	 } 
	else if(a[5]==3)
	{ 
	 k=10;
	 winner="x"; 
	} 
	else if(a[6]==3)
	{ 
	 k=10;
	 winner="x"; 
	} 
	else if(a[7]==3)
	{ 
	 k=10;
	 winner="x";
	} 
	else if(a[8]==3)
	{ 
	 k=10;
	 winner="x";
	} 
	else if(b[2]==3)
	{ 
	 k=10;
	 winner="o";
	} 
	else if(b[3]==3)
	{ 
	 k=10;
	 winner="o"; 
	} 
	else if(b[4]==3)
	{ 
	 k=10;
	 winner="o"; 
	} 
	else if(b[5]==3)
	{ 
	 k=10;
	 winner="o";
	} 
	else if(b[6]==3)
	{ 
	 k=10;
	 winner="o"; 
	} 
	else if(b[7]==3)
	{ 
	 k=10;
	 winner="o"; 
	} 
	else if(b[8]==3)
	{ 
	 k=10;
	 winner="o";
	} 
	else if(b[1]==3)
	{ 
	 k=10;
	 winner="o"; 
	}
 }
	if(k==9)
		cout<<"平手"<<endl; 
	else
		cout<<"贏家是:"<<winner<<endl;	
			
					
system("PAUSE");
return 0;
}	
