 #include<iostream>
 #include<fstream>
 using namespace std;
 int main(){
     ofstream archivNombre;
     archivNombre.open("HelloWorld_Output.txt");
     archivNombre<<"Hello World";
     archivNombre.close();
     return 0;
 }