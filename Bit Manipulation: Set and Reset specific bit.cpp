//NAME: Ratnesh Kumar
//PRN: 24070123083
//Experiment-4

#include <iostream>
using namespace std;

int main() {
    int i=88;
    int set,reset;
    int bit_to_be_set,bit_to_be_reset;
    
    cout<<"Enter the Bit Operation to be set:";
    cin>>bit_to_be_set;
    set = i|(1<<bit_to_be_set);
    cout<<"Enter the Bit Position to be reset:";
    cin>>bit_to_be_reset;
    reset = i&(~(1<<bit_to_be_reset));
    cout<<"Your number is:"<<set<<endl;
    cout<<"Your number is:"<<reset<<endl;
    return 0;
}

OUTPUT:
Enter the Bit Operation to be set:2
Enter the Bit Position to be reset:3
Your number is:92
Your number is:80

=== Code Execution Successful ===
