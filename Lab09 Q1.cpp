#include <iostream>
#include <cstring>
using namespace std;
char* deleteStr (char *str, char delete_char)
{
  int count = 0;
  int length = strlen (str);
  for (int i = 0; i < length; i++)
	{
	  if (str[i] == delete_char)
		{
		  count++;
		}
	}

  char *modified_str = new char[length - count + 1];

  int j = 0;
  for (int i = 0; i < length; i++)
	{
	  if (str[i] != delete_char)
		{
		  modified_str[j++] = str[i];
		}
	}
  modified_str[j] = '\0';

  return modified_str;
}

int main () {
  char input_str[100];
  char delete_char;

  cout << "Enter the input string:" << endl;
  cin.getline (input_str, 100);

  cout << "Enter the input delete_char:" << endl;
  cin.get (delete_char);

  char *result = deleteStr (input_str, delete_char);

  cout << "The modified string is: " << result << endl;

  delete[]result;

  return 0;
}

