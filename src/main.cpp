#include <iostream>
#include <acct.pb.h>
using namespace std;

int main(int argc, char* argv[])
{
    pb::account acct;
    acct.set_name("James Bond");
    cout << acct.name() << endl;
   
    return 0;
}
