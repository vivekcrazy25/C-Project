#include "iostream"
#include <string.h>
class base{
 public:
static  int x;
 base(){
    std::cout<<"base constructor called"<<std::endl;
   x=10;
 }

 ~base(){
    std::cout<<"Base distructor called"<<std::endl;
 }
 static int fun(){
 //static function only use the static member variable 
 //normal function use the static member variable;
  x++;
    std::cout<<"static function called"<<std::endl;
    std::cout<<"x="<<x<<std::endl;
    return 10;
 }
friend std::ofstream& operator <<(std::ofstream& out, const base b1);

  operator int (){
   std::cout<<"int operator function called"<<std::endl;
    return 20;
  }
  operator double(){

    return 101.2;
  }

};

//static member function must be initailized before it is used
int base::x(0);
std::ostream& operator <<(std::ostream& out, const base b1){
    
    std::cout<<"Base ="<<500<<std::endl;
    return out;
}

int new_class(int x){
   std::cout<<"x ="<<x<<std::endl;
 return 10;
}
void class_test(){

base b1;
b1.fun();
base::fun();
new_class(b1);
std::cout<<b1<<std::endl;
}

static int funcount=0;
int powerFun(int x, int y){
 funcount++;
 if(y==0)
   return 1;
if(y%2==0)
  return powerFun(x,y/2)*powerFun(x,y/2);
else{

   return x*powerFun(x,y/2)*powerFun(x,y/2);
}

}

static int funcount1=0;
int arr[256];
int powerFun1(int x, int y){
 funcount1++;
 if(y==0)
   return 1;
int temp = powerFun1(x,y/2);
if(y%2==0){
   
  return temp*temp;
  }
else{

   return x*temp*temp;
}

}


void string_reverse(){

  char str[]="vivek singh";
  std::cout<<"ENter the string"<<std::endl;
 
  std::cout<<str << " size of"<<sizeof(str)<<std::endl;
  int j=sizeof(str)-2;
  int i=0;
  while (i<j){
   char ch=str[j];
   std::cout<<str[j]<< " " <<str[i]<<std::endl;
   
    str[j]=str[i];
   str[i]=ch;
   j--;
   i++;

  }
  std::cout<<"Reverse string="<<str<<std::endl;
  std::string s1("robin singh");
  std::cout<<s1<<std::endl;
  
  std::cout<<s1.length()<<std::endl;
  int k=s1.length()-1;
  while(k>=0){
   std::cout<<s1[k];
   k--;

  }
  std::cout<<""<<std::endl;
}


int main()
{
   
    std::cout<<"new program c++"<<std::endl;
    string_reverse();
}