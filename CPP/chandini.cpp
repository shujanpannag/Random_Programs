#include<iostream>
#include<math.h>

 using namespace std;
   class db;

 class dm
{
 float mts,cms;
 public:
 void getdata()  {
cout<<"Enter mts and cms:"<<endl;
 cin>>mts;
 cin>>cms;

 }
 void display() {

 cout<<"values"<<endl;
cout<<mts<<endl;
 cout<<cms<<endl;
 }
 friend void add1(dm &,db &);
 friend void add2(dm &,db &);
 };

 class db
 {
 float feets,inches;
 public:
 void getdata()
 {
 cout<<"Enter feets and inches:"<<endl;
 cin>>feets;
 cin>>inches;
}
 void display() {

 cout<<"values"<<endl;
 cout<<feets<<endl;
 cout<<inches<<endl;
 }
 friend void add1(dm & ,const db &);
friend void add2(dm &,const db &); 
 };

 void add1(dm & obj1, const db & obj2) {
     dm.cms=(obj2.feets)*30.48+(obj2.inches)*2.54+obj1.mts*100+obj1.cms;
 dm.mts=dm.cms/100;
dm.cms=dm.cms%100;
}
void add2(const dm & obj1,db & obj2)  {
db.inches=obj2.feets*12+obj2.inches+obj1.mts*39.37+obj1.cms*0.39;
db.feets=dm.inches/12;
 db.inches=dm.inches%12;
}

int main() {
 class obj1;
 class obj2. 
 obj1.getdata();
 ob2.getdata();
 obj1.display();
 obj2.display();
 add1(obj1, obj2);
 add1(obj1, obj2);
 obj1.display();
 obj2.display();
return 0;}