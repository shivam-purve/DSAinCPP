#include<iostream>
using namespace std;

int main(){
     float cost_pencil,cost_pen,cost_eraser;

     cout<<"enter cost of pencil: ";
     cin>>cost_pencil;
      cout<<"enter cost of pen: ";
      cin>>cost_pen;
       cout<<"enter cost of eraser: ";
       cin>>cost_eraser;

       double total_cost = (cost_pencil + cost_pen + cost_eraser );
        cout<<"the total cost of given items is "<<total_cost;

        return 0;
}
