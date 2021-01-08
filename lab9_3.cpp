
#include<iostream>
#include<string>
#include<cstdlib>
#include<fstream>
#include<vector>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    ifstream score("score.txt");
    double mean=0,devia=0;
   
    string textline;
    int N=0;
    while(getline(score,textline))
    {
        double x=stod(textline);
        mean+=x;
        devia+=pow(x,2);
       N++;
    } 
    score.close();
    mean=mean/N;
    devia=devia/N;
    devia=sqrt(devia-pow(mean,2));
    
    cout << setprecision(3);
    cout<<"Number of data = "<<N<<endl;
    cout<<"Mean = "<<mean<<endl;
    cout<<"Standard deviation = "<<devia;
    
   
    return 0;
}