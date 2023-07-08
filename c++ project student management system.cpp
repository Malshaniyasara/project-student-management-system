#include <iostream>

using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
int value;
string  rollno;
void enter(){
    int choice;
    cout<<"How many students do you want enter :";
    cin>>choice;
    if(total==0){
        
    
    total=total+choice;
    for(int i=0;i<choice;i++){
        cout<<"\n Enter data of student:"<<i+1<<endl<<endl;
        cout<<"Enter name :";
        cin>>arr1[i];
        cout<<"Enter rollno :";
        cin>>arr2[i];
         cout<<"Enter course :";
        cin>>arr3[i];
         cout<<"Enter class :";
        cin>>arr4[i];
         cout<<"Enter contact :";
        cin>>arr5[i];
    }
    
        
    }
    else {
        for(int i=total;i<total+choice;i++){
        cout<<"\n Enter data of student:"<<i+1<<endl<<endl;
        cout<<"Enter name :";
        cin>>arr1[i];
        cout<<"Enter rollno :";
        cin>>arr2[i];
         cout<<"Enter course :";
        cin>>arr3[i];
         cout<<"Enter class :";
        cin>>arr4[i];
         cout<<"Enter contact :";
        cin>>arr5[i];
    }
   
    total=total+choice;
     }
}
void show(){
    for(int i=0;i<total;i++){
        cout<<"data of student :"<<i+1<<endl<<endl;
        cout<<"Name :"<<arr1[i]<<endl;
        cout<<"Rollno :"<<arr2[i]<<endl;
        cout<<"Course :"<<arr3[i]<<endl;
        cout<<"Class :"<<arr4[i]<<endl;
        cout<<"contact :"<<arr5[i]<<endl;
    }
}
void serch(){
    cout<<"Enter rollno of student which you want to serch :";
    cin>>rollno;
    for(int i=0;i<total;i++){
        if(rollno==arr2[i]){
        cout<<"data of student :"<<i+1<<endl<<endl;
        cout<<"Name :"<<arr1[i]<<endl;
        cout<<"Rollno :"<<arr2[i]<<endl;
        cout<<"Course :"<<arr3[i]<<endl;
        cout<<"Class :"<<arr4[i]<<endl;
        cout<<"contact :"<<arr5[i]<<endl;
        
            
        }
    }
}
void update(){
        cout<<"Enter rollno of student which you want to serch :";
    cin>>rollno;
    for(int i=0;i<total;i++){
        if(rollno==arr2[i]){
            cout<<"previous data"<<endl<<endl;
        cout<<"data of student :"<<i+1<<endl<<endl;
        cout<<"Name :"<<arr1[i]<<endl;
        cout<<"Rollno :"<<arr2[i]<<endl;
        cout<<"Course :"<<arr3[i]<<endl;
        cout<<"Class :"<<arr4[i]<<endl;
        cout<<"contact :"<<arr5[i]<<endl;
        cout<<"\nEnter new data"<<endl;
        cout<<"\nEnter name :";
        cin>>arr1[i];
        cout<<"Enter rollno :";
        cin>>arr2[i];
        cout<<"Enter course :";
        cin>>arr3[i];
        cout<<"Enter class :";
        cin>>arr4[i];
        cout<<"Enter contact :";
        cin>>arr5[i];
        }
        }
}

void deleterecord() {
    int choice;
    cout << "Press 1 to delete the full record" << endl;
    cout << "Press 2 to delete a specific record" << endl;
    cin >> choice;
    
    if (choice == 1) {
        total = 0;
        cout << "All records have been deleted" << endl;
    } else if (choice == 2) {
        string rollno;
        cout << "Enter the roll number of the student you want to delete: ";
        cin >> rollno;
        
        int j;
        for (int i = 0; i < total; i++) {
            if (rollno == arr2[i]) {
                for (j = i; j < total - 1; j++) {
                    arr1[j] = arr1[j + 1];
                    arr2[j] = arr2[j + 1];
                    arr3[j] = arr3[j + 1];
                    arr4[j] = arr4[j + 1];
                    arr5[j] = arr5[j + 1];
                }
                total--;
                cout << "The required record has been deleted" << endl;
                break;
            }
        }
        
        if (j == total) {
            cout << "Record with roll number " << rollno << " not found" << endl;
        }
    } else {
        cout << "Invalid input" << endl;
    }
}

int main()
{
    while(true){
    cout<<"press 1 to enter data"<<endl;
    cout<<"press 2 to show data"<<endl;
    cout<<"press 3 to serch data"<<endl;
    cout<<"press 4 to update data"<<endl;
    cout<<"press 5 to delete data"<<endl;
    cout<<"press 6 to exit"<<endl;
    cin>>value;
    switch(value)
    {
    case 1:
        enter();
        break;
    case 2:
        show();
        break;
    case 3:
        serch();
        break;
    case 4:
        update();
        break;
    case 5:
        deleterecord();
        break;
    case 6:
        exit(0);
        break;
    default:
    cout<<"Invalid input"<<endl;
    break;
    }
}
    return 0;
}