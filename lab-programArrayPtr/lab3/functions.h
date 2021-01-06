
void LabInfo(){
                               // Task 1
    cout << "Ronan O boyle\n";
    cout << "Lab #3" << endl; // Print out user name and Lab#3


}
void Array6Num(){             // Task 2

    cout<< "\nEnter 6 Numbers\n";  // A program to take in 6 numbers into an array
    int x[6];
    for(int i =0;i<6;++i){    // Using a loop to  achieve this task
        cin>>x[i];
}
    for (int i =0;i<6;++i){
        cout<<x[i];

}
    cout<<"\n";
    int arraySize=6;
     int p[arraySize];
    int i=0;
    for (int i=0;i<arraySize;++i){
        cout<<&x [i]<< " "<<endl;      // & = Memory locations
}
      cout<< " \n Enter Greater than 0 and Less than 100";
    while(i<arraySize){

    int temp;
    cout<<"\n";
    cin>>temp;
                                //Numbers should be Greater than 0 and Less than 100
    if((temp>0)&&(temp<100)){
        i[x]=temp;
        i++;
}

        else{
    cout<<"\n";
    cout<< "Incorrect Value ( "<<temp<< " ) Greater than 0 and Less than 100"<<i<<endl;

}




}
}



                              // user Enters 1 number called scalar

void scalarNum(){

    int scalar=0;

    cout<< "Enter scalar \n\n";
    cin>>scalar;
    cout<< "scalar num  "<<scalar<<endl;
    int i;
    int      value=100;
    int& valueRef=value;

    cout<<&value<<"\n";
    cout<< value * scalar;         // mutiply

    }








void xmasTree(){
    int i,space,j,k;
                            // xmas tree
    cout<<"\n\n\n  Xmas tree?\n"<<endl;


    for (int i=1;i<7; i++){
    for(space=0;space<7-i; space++){

            cout<<" ";
}
    for(j=0; j<i; j++){
    cout<<"*";
}
    for ( int k=0; k<i-1; k++){
    cout<<"*";

}
   cout<<endl;
}
    for (i=0; i<4; i++){
    for(space=0; space<10/2; space++){
        cout<< " ";
}
    cout << "88";
    cout << "\n";
}


}




