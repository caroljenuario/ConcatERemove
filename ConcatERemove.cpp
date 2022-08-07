#include <iostream>
#include <cstring>
using namespace std;

void ConcatERemove(char s[100], char t[100], int k)
{
  int size1 = strlen(s+1);
  int size2 = strlen(t+1); 
  int differentLetters=0;  
  int i;
  for(i=0; s[i] && t[i]&&s [i]==t[i]; i++) 
    differentLetters=i; // percorre o vetor e verifica quantas letras sao diferentes
  if(strcmp(s,t)) 
  {  
    ((size1-differentLetters+size2-differentLetters<=k)  || 
    (size1+size2<=k)) ? cout<<"Sim" : cout<<"Nao" <<endl;
  }
}

int main() 
{
  char s[100];
  char t[100]; 
  int k;
  cin >> s;
  cin >> t;
  cin >> k;
  ConcatERemove(s,t,k);
  return 0;
}