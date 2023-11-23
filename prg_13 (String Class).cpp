#include <iostream>
using namespace std;

class STRING
{
public:
    STRING() {}
    int get_len(char s[])
    {
        char *p = s;
        int length = 0;
        while (p[length])
        {
            length++;
        }
        return length;
    }
    void to_UPPER(char s[])
    {
        int size = get_len(s);
        for (int i = 0; i < size; i++)
        {
            char ch = s[i];
            int Val = (int)ch;
            if (Val >= 97 && Val <= 122)
            {
                s[i] = s[i] - ' ';
            }
        }
        cout << "--------- Converted to UPPERCASE ----------" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << s[i] << "";
        }
        cout << endl;
    }
    void to_lower(char s[])
    {
        int size = get_len(s);
        for (int i = 0; i < size; i++)
        {
            char ch = s[i];
            int Val = (int)ch;
            if (Val >= 65 && Val <= 90)
            {
                s[i] = s[i] + ' ';
            }
        }
        cout << "--------- Converted to lowercase ----------" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << s[i] << "";
        }
        cout << endl;
    }
};

int main()
{
    cout << endl;
    char ch[] = "Amit Singhal";
    STRING s;
    int length = s.get_len(ch);
    cout << "Length of the string " << ch << " is -> " << length << endl;
    s.to_UPPER(ch);
    s.to_lower(ch);
    return 0;
}