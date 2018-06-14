#include <iostream>

using namespace std;

int main()
{
    string line;
    string text;
    string::iterator Idx;

    //read text lines from input
    while(!cin.eof()){
      getline(cin, line);
      text = text + line + '\n';
    }

    Idx = text.begin();
    while(Idx != text.end()){
      //delete spaces and set next letter to upper
      while(*Idx == ' '){
        text.erase(Idx);
        if(*Idx != ' ' && *Idx > 96 && *Idx < 123)*Idx = *Idx - 32;
      }
      Idx++;
    }

    cout << text;

    return 0;
}
