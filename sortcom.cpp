//sorts array of strings with user written comparison function
#include<iostream>
#include<string.h>
#include<functional>
#include<algorithm>


using namespace std;

char *names[] = {"George","Penny","Estelle","Don","Mike","Bob"};
bool alpha_comp(char *,char*);
string names1[] = {"George","Penny","Estelle","Don","Mike","Bob"};
bool isDon(string name)
{
    return name=="Don";
}
double in_to_cm(double s)
{
    return (s * 2.54);

}



int main()
{
    double centi[7];
    double inches[] = {3.5,6.4,6,7,8};
    transform(inches,inches+7,centi,in_to_cm);
    for(int i=0;i<7;i++)
        cout << centi[i] << "\t";
    cout << endl;
    string *ptr;
    ptr=find_if(names1,names1+5,isDon);
    if(ptr==names1+5)
        cout << "Don is not on the list \n";
    else
    {
        cout << "Don is element " << (ptr-names1) << " on the list\n";

    }


    sort(names,names+6,alpha_comp);

    for(int i=0;i<6;i++)
        cout << names[i] << endl;
    return 0;


}
bool alpha_comp(char *s1,char *s2)
{
    return (strcmp(s1,s2)<0)?true:false;
}


