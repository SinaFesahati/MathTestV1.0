#include <iostream.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main() 
{
	cout<<"Welcome To Math Test V1.0|Developed By:Sina Fesahati|https://github.com/SinaFesahati/MathTest"<<endl<<"1.Easy     2.Hard"<<endl;
	int level;
	cin>>level;
	if(level==1)
	{
	int x,y,answer,mark1,mark2,mark3,mark4,mark5; 
	srand(time(NULL)); 
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"+"<<y<<"=?"<<endl; 
	cin>>answer; 
	if(answer==x+y)
	{
		cout<<x+y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl; 
		mark1=4; 
	}
	else 
	{
		cout<<"False Answer,True Answer Is:"<<x+y<<endl<<"You Earn 0 Point"<<endl;
		mark1=0;
	}
	srand(time(NULL)); 
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"+"<<y<<"=?"<<endl;
	cin>>answer;
	if(answer==x+y)
	{
		cout<<x+y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl;
		mark2=4;
	}
	else
	{
		cout<<"False Answer,True Answer Is:"<<x+y<<endl<<"You Earn 0 Point"<<endl;
		mark2=0;
	}
	srand(time(NULL)); 
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"+"<<y<<"=?"<<endl;
	cin>>answer;
	if(answer==x+y)
	{
		cout<<x+y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl;
		mark3=4;
	}
	else
	{
		cout<<"False Answer,True Answer Is:"<<x+y<<endl<<"You Earn 0 Point"<<endl;
		mark3=0;
	}
	srand(time(NULL)); 
	y=rand()%100;
	cout<<x<<"+"<<y<<"=?"<<endl;
	cin>>answer;
	if(answer==x+y)
	{
		cout<<x+y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl;
		mark4=4;
	}
	else
	{
		cout<<"False Answer,True Answer Is:"<<x+y<<endl<<"You Earn 0 Point"<<endl;
		mark4=0;
	}
	srand(time(NULL)); 
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"+"<<y<<"=?"<<endl;
	cin>>answer;
	if(answer==x+y)
	{
		cout<<x+y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl;
		mark5=4;
	}
	else
	{
		cout<<"False Answer,True Answer Is:"<<x+y<<endl<<"You Earn 0 Point"<<endl;
		mark5=0;
	}
	cout<<"Your Score Is:"<<mark1+mark2+mark3+mark4+mark5<<"/20"<<endl; 
}
	if(level==2)
	{
	int x,y,answer,mark1,mark2,mark3,mark4,mark5; 
	srand(time(NULL)); 
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"*"<<y<<"=?"<<endl; 
	cin>>answer; 
	if(answer==x*y) 
	{
		cout<<x*y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl; 
		mark1=4; 
	}
	else 
	{
		cout<<"False Answer,True Answer Is:"<<x*y<<endl<<"You Earn 0 Point"<<endl;
		mark1=0;
	}
	srand(time(NULL)); 
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"*"<<y<<"=?"<<endl;
	cin>>answer;
	if(answer==x*y)
	{
		cout<<x*y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl;
		mark2=4;
	}
	else
	{
		cout<<"False Answer,True Answer Is:"<<x*y<<endl<<"You Earn 0 Point"<<endl;
		mark2=0;
	}
	srand(time(NULL)); 
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"*"<<y<<"=?"<<endl;
	cin>>answer;
	if(answer==x*y)
	{
		cout<<x*y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl;
		mark3=4;
	}
	else
	{
		cout<<"False Answer,True Answer Is:"<<x*y<<endl<<"You Earn 0 Point"<<endl;
		mark3=0;
	}
	srand(time(NULL)); 
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"*"<<y<<"=?"<<endl;
	cin>>answer;
	if(answer==x*y)
	{
		cout<<x*y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl;
		mark4=4;
	}
	else
	{
		cout<<"False Answer,True Answer Is:"<<x*y<<endl<<"You Earn 0 Point"<<endl;
		mark4=0;
	}
	srand(time(NULL));
	x=rand()%100;
	y=rand()%100;
	cout<<x<<"*"<<y<<"=?"<<endl;
	cin>>answer;
	if(answer==x*y)
	{
		cout<<x*y<<" is True Answer"<<endl<<"You Earn 4 Point"<<endl;
		mark5=4;
	}
	else
	{
		cout<<"False Answer,True Answer Is:"<<x*y<<endl<<"You Earn 0 Point"<<endl;
		mark5=0;
	}
	cout<<"Your Score Is:"<<mark1+mark2+mark3+mark4+mark5<<"/20"<<endl; 
	}
return 0;
	}
//Developed By Sina Fesahati https://github.com/SinaFesahati