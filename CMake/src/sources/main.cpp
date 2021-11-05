#include <stdio.h>
#include <string>
#include <iostream>
#include <unistd.h>

using namespace std;

void PrintHello();

int main(int argc, char *argv[])
{
   char cwd[1024];
   if (getcwd(cwd, sizeof(cwd)) != NULL) {
       printf("Current working dir: %s\n", cwd);
   }
    
    for(int i = 0; i < argc; i++){
        string str = argv[i];
        cout << str << endl;
    }
    
    //PrintHello();
    return 0;
}
