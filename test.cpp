#include<iostream>

using namespace std;
class hello{

    public:
    hello(){
        cout<<"Constructor called"<<endl;

    }
    ~hello(){
        cout<<"Distructor called"<<endl;
    }
    friend std::ostream& operator <<(std::ostream& out,const hello h1);
};
std::ostream& operator <<(std::ostream& out,const hello h1){
  out<<"my first out"<<endl;
  return out;

}


void test(){
 static int count=0;
 try{
   for(int i =0;i<5;i++){
   hello p1;
   cout<<p1<<endl;
   if(i==3){
    throw 10;
   }

   }
   }
   catch(int x){
    cout<<"exception catched"<<endl;
   }

 }

int 


fun_int(){

}

int main(){
hello h1;
    std::cout<<"my first project"<<std::endl;
    cout<<h1<<endl;
}

