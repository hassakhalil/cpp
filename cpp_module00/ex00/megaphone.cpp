   #include <iostream>
#include <cctype>
using namespace std;

int main(int argc,  char *argv[])
{
	if (argc != 1){
		for (int i=1; i < argc ;i++)
		{
			for (int j=0 ; j < (int)strlen(argv[i]) ; j++){
			cout<<char(toupper(argv[i][j]));}
		}
		cout<<"\n";
	}
	else
		cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE */n";
}
