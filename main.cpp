#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char*argv[])
{

	
if((char)argv[2][0]=='+'&&(isdigit(argv[3][0])&&isdigit(argv[1][0])))	
	cout<<atoi(argv[1])+atoi(argv[3])<<endl;
else if((char)argv[2][0]=='-'&&(isdigit(argv[3][0])&&isdigit(argv[1][0])))	
    cout<<atoi(argv[1])-atoi(argv[3])<<endl;
else cerr<<"ERROR";  


return 0;	
}
