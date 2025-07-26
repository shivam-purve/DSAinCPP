#include<iostream>
using namespace std;
#define PI 3.14
 
int main(){
     float radius_circle;
      cout<<"enter radius of circle: ";
      cin>>radius_circle;

      float area_circle = PI*(radius_circle)*(radius_circle);

      cout<<"required area of circle is: "<<area_circle;
      return 0;
}


