#include<iostream>
using namespace std;

class date{
    private:
    int date , month , year;
    
   int date1 , month1 , year1;

    public:
    void input(){
        cout<<"Enter the date:";
        cin>>date;
        cout<<"Enter the month:";
        cin>>month;
        cout<<"Enter the year:";
        cin>>year;
        
        cout<<"Enter   birth date:";
        cin>> date1;
        cout<<"Enter  birth  month:";
        cin>> month1;
        cout<<"Enter b year:";
        cin>> year1;
        
            leapYear(year);
            age(year,month,date, year1, month1,date1);
        }

    void leapYear(int year)
    {
        cout<<"LeaP yEAR";
        if (year%400 == 0)  {
            cout<< year <<" year is leap year";
        }
        else if ( year%100 == 0){
            cout<<year<<" not a leap year";
        }
        else if(year%4==0){
            cout<<year<< " is a leap year";
        }
        else{
            cout<<year<<" not a leap year";
        }
    }
    void age(int py, int pm, int pd, int by, int bm, int bd ) {
         int m , y , d;
        int md[] ={ 31 , 28 , 31 , 30 ,31 ,30 , 31 , 31 , 30 , 31 , 30 , 31};
        y = py - by;
        if(pm<bm) {
            y--;
            m=12-(bm-pm);
        }
        else
        {m = pm - bm;}
        if(pd<bd) {
            m--;
            d = md[pm-1]-(bd-pd);
        }
        else{
            d = pd-bd;
        }
        {d = pd -bd;}
        cout<<"your age is:\n";
        cout<< y<<"years"<<m<<"months"<<d<<"days";


        }
        
    };

int main() {
    int pd , pm , py , bd , bm , by;
    date date1;
    date1.input();
    return 0;
}
