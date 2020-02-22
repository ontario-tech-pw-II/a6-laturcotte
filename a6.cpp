//main file
//Liam Turcotte

#include "str.h" 

int main() {

cout << "TEST PROGRAM !!" << endl;
  
  str s1("Hello"); 
  
  cout << "s1 = "; 
  s1.print();

  str s2 = s1;
  
  cout << "s2 = "; 
  s2.print();

  str s3("!!!"); 
  
  cout << "s3 = "; 
  s3.print();

  cout << "DO s1.clear()" << endl;
  s1.clear();
  cout << "\ts1 = "; 

  s1.print(); 
  
  cout << "DO s2.append(s3)" << endl;
  s2.append(s3);

  cout << "\ts2 = "; 
  s2.print();

  cout << "DO swap(s2,s3)" << endl;
  swap(s2,s3);

  cout << "\ts2 = "; 
  s2.print();

  cout << "\ts3 = "; 
  s3.print();

    //test code for new operator overloading functions 
    str s4; 
    cout << "Making s4 the same as s3 using assingment operator" << endl; 
    s4 = s3; 
    cout << "s4 = "; 
    s4.print(); 

    cout << "Concatenating s2 to s3 using +" << endl; 
    s3 + s2; 
    cout << "s3 = ";
    s3.print(); 

    cout << "Printing s3 using <<" << endl; 
    cout << s3; 

    cout << "Writing in new values for s3, print" << endl; 
    cin >> s3; 
    cout << s3;

    return 0; 
}

