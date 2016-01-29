#include<iostream>
using namespace std;
string getcmn(string temp)
{
	int i=1;
	while(temp[i]!="-1")
	{
		
	}
}
int main()
{
	string start,temp;
	int no;
	printf("enter start symbol\n");
	//scanf("%s",start);
	cin>>start;
	printf("enter no. of productions\n");
	//scanf("%d",no);
	cin>>no;
	string rule[no][10];
	for(int i=0;i<no;i++)//gettting grammer
	{
		printf("enter lhs of production\n");
		//scanf("%s",&rule[i][0]);
		cin>>rule[i][0];
		printf("enter rhs of production\n");
		//scanf("%s",rule[i][1]);
		int j=1;
		while(j<10)
		{
			cin>>rule[i][j];
			if(rule[i][j]=="-1")
			break;
			j++;
		}
	}
	for(int i=0;i<no;i++)
	{
		//printf("%s -> %s",rule[i][0],rule[i][1]);
		cout<<rule[i][0]<<"->";
		for(int j=1;rule[i][j]!="-1";j++)
		{
			cout<<rule[i][j]<<"/";
		}
		cout<<"\n";
	}
	for(int i=0;i<no;i++)
	{
		string com=getcmn(rule[i]);
	}
}
/*
S
5
E
+TaE
+TaEG
b
c
-1
T
*idF
*idH
d
-1
F
(E)
id
-1
H
aE
ab
-1
G
$
-1
*/
