nclude<iostream>
using namespace std;

int main()
{
    int sum = 0, val = 50;
			    
     while(val <= 100){
		  sum += val;
		  ++val;
										    }
    std::cout<<"sum of 50 to 100 is: "
		  <<sum << std::endl;
    return 0;
}
