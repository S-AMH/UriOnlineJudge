#include <iostream>
#include <string>
#include <vector>

using namespace std;

string trim(string, char);
vector<string> explode(string, char);
int main()
{

    string input[4];
    int h, hh, hr,m,mm,d,dd,s,ss;

    for(int i = 0; i < 4; i ++)
        std::getline(std::cin, input[i]);

    d = stoi(explode(input[0], ' ').at(1));
    dd = stoi(explode(input[2], ' ').at(1));
    vector<string> formattedString = explode(trim(input[1], ' '), ':');
    h = stoi(formattedString.at(0));
    m = stoi(formattedString.at(1));
    s = stoi(formattedString.at(2));
    formattedString = explode(trim(input[3], ' '), ':');
    hh = stoi(formattedString.at(0));
    mm = stoi(formattedString.at(1));
    ss = stoi(formattedString.at(2));

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dd - d;

    if(s<0)
    {
        s += 60;
        m--;
    }

    if(m<0)
    {
        m += 60;
        h--;
    }

    if(h<0)
    {
        h += 24;
        d--;
    }
        cout << d << " dia(s)" << endl;
        cout << h << " hora(s)" << endl;
        cout << m << " minuto(s)" << endl;
        cout << s << " segundo(s)" << endl;

    return 0;
}

string trim(string str, char s = ' ')
{
    string result;
    for(int i = 0 ; i < str.length() ; i ++)
    {
        if(str[i] != s)
            result += str[i];
    }
    return result;
}
vector<string> explode(string str, char delimeter = ':')
{
    vector<string> result;
    string temp = "";
    for(int i = 0; i < str.length() ; i ++)
    {
        if(str[i] != delimeter)
            temp += str[i];
        else
        {
            result.insert(result.end(), temp);
            temp = "";
        }
    }
    result.insert(result.end(), temp);
    return result;
}