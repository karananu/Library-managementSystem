#include<bits/stdc++.h>
using namespace std;

class Library{
    public:
    int id;
    char name[100];
    char author[100];
    char student[100];
    int price;
    int pages;
};
int main(){
  Library lib[20];
  int input=0;
  int count=0;
  while(input!=5){

     cout<<"Entre 1 to input details id,name,author,pages, students, prices"<<endl;
     cout<<"Enter 2 to displat details"<<endl;
     cout<<"Enter 5 to quit"<<endl;
     cin>>input;

     switch(input){
        case 1:
        start:
        cout<<"Enter Book iD"<<endl;
        cin>>lib[count].id;
        cout<<"Enter Book Name"<<endl;
        cin.getline(lib[count].name,100,'$');
        // cin>>lib[count].name;
        cout<<"Enter Book author"<<endl;
         cin.getline(lib[count].author,100,'$');
        // cin>>lib[count].author;
        cout<<"Enter Student Name"<<endl;
         cin.getline(lib[count].student,100,'$');
        // cin>>lib[count].student;
        cout<<"Enter Book Price"<<endl;
        cin>>lib[count].price;
        cout<<"Enter Book Page"<<endl;
        cin>>lib[count].pages;
        count++;
        break;
        case 2:
         for(int i=0;i<count;i++){
            cout<<"Book Id  :"<<lib[i].id<<endl;
            cout<<"Book Name  :"<<lib[i].name<<endl;
            cout<<"Book author  :"<<lib[i].author<<endl;
            cout<<"Student  :"<<lib[i].student<<endl;
            cout<<"Book Price  :"<<lib[i].price<<endl;  
            cout<<"Book Pages  :"<<lib[i].pages<<endl;
         }
         break;
          case 3:
          exit(0);
          break;
        default:
         cout<<"You have entered wrong value, please type again"<<endl;
         goto start;


    
     }
  }

}

