#include <iostream>

using namespace std;

int main()
{
    string line;
    string text;
    string::iterator idx;

    while(!cin.eof()){
      getline(cin, line);
      text = text + line + '\n';
    }

    idx = text.begin();
    while(idx != text.end()){
      if(*idx == '<'){
        while(*idx != '>'){
          if(*idx <= 'z' && *idx >= 'a')*idx = *idx - 32;
          idx++;
        }
      }
      idx++;
    }

    cout << text;

    return 0;
}
