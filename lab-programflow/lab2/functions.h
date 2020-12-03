// Task 1 is too output my name and lab#2           // Question 1
    void LabInfo(){
    cout<<"Task 1\n"<<endl;
    cout << "Ronan O Boyle\n\n";
    cout << "Lab #2\n " << endl;
}
//find the largest value and print it out           // Question 2
    void calculate(int x,int y){

    if (x > y){
        cout << "Task 2";
        cout << "\nThe largest Value is  " <<x;
    }
    else{
        cout << "Task 2\n";
        cout << "The Largest Value " <<y;
    }

}
// user input
 //find a value from 0 - 100 user must input         // Question 3
    void Check (int i){
    cout << "\n\nTask 3\n";
    cout << "\nEnter number less than 100"<<endl;
    cin >> i;
    if(i>0&&i<100){

    cout<< "user input is correct\n\n";}
    else {
    cout<< "not in range\n\n"<<endl;
  }
}
// user input
//calculate the area of a circle                      // Question 5
    void circleArea (){
    float PI=3.14159, radius, area;
    cout << "Task 5\n";
    cout << "Enter radius in metres\n";
    cin >> radius;



    area = PI* radius * radius;
    cout << "area of a circle\n"<<area << " : metres squared \n" ;
    cout << "\n\n"<<endl;
    }


// user input
//calculate the area of a rectangle in metres         // Question 6
    void rectangleArea (){
    float lenght,width,Area;
    cout << "Task 6 \n";
    cout << "To find the area of your rectangle"<<endl;
    cout << "insert lenght "<<endl;
    cin >>lenght;


    cout << "insert width"<<endl;
    cin >> width;

    Area= lenght*width;

    cout << "area of rectangle\n ans: "<<Area<< "\n metres squared "<< endl;
    }



//user input                                                     // Question 7
// Temperature and Humidity Alarm example In Range /Out of Range
     void TemperatureHumidityAlarm (){

     float t,h;
     cout << "Task 7\n";
     cout<< "What is the temp\n";

     cin>>t;
     if (t>=95){
     cout<< "ALARM TEMP OUT OF RANGE\n\n"<<endl;
     }
     else {
        cout<< "Temp in Range\n";
     }
     cout<< "What is the Humidity\n";
     cin>>h;
     if (h>=90){
     cout<< "ALARM HUMIDITY OUT OF RANGE\n\n"<<endl;
     }
     else {
        cout << "Humidity in Range \n";
        cout << "\n\n\n";
     }
    }



// user input
//Convert celsiuis to fahrenheit when you enter the value //Question 9
    void convertCF (){

    float c,f;
    cout<< "\nTask 9\n";
    cout << "Enter the value of temperature in celsius\n";
    cin>>c;
        f=9/5*c+32;
    cout<< "Temperature in Fahrenheit :"<<f<<endl;
    cout<< "\n\n";
    cout<< "Enter the value in fahrenheit\n";
    cin>>f;
        c=f-32*5/9;

    cout<< "Temperature in celsius :"<<c<<endl;
    cout<< "\n\n";
 }









// Print out all the Even Numbers From 0-1000           //Question 10


    void EvenNumbers ()
   {
    cout<< "Task 10 Even Numbers\n ";

	for(int i = 0 ; i<=1000; i++)
	{
		if(i%2==0)
			cout << i <<endl;
			cout << "\n\n";
	}
   }

// print out Odd Number between user input               //Question 11

    void oddNum (){
    int o,p;
    cout << "\nTask 11";
    cout << "\nEnter first number :";
    cin>>o;
    cout << "\nEnter second number :";
    cin>>p;
    cout << "ODD Num";
    for (int i = o ; i <= p; i++)
    {
        if (i % 2 == 1 || i % 2 == -1)
            cout << i << "\n\n  ";
    }
  }



    // print out 6 random numbers for each section
                                                   //Question 13
    void randnum (){
   int v1,v2,v3;

    cout << "Task 13\n";
    cout << "v1 Random num:";
    for(int x=1;x<=6;x++){
    v1 = rand() % 100 +0;// v1 in the range 0 to 99
    cout<< v1 << "\n\n  ";
    }
    cout << "v2 Random num:";
    for(int x=1;x<=6;x++){
    v2 = rand() % 100 + 1; // v2 in the range 1 to 100
    cout<< v2 << "\n\n";
    }
    cout  << "v3 Random num:";
    for(int x=1;x<=6;x++){
    v3 = rand() % 30 + 1985;// v3 in the range 1985-2014
    cout << v3 << "\n\n";
    }


    }

    void number1TO9 (){
    /* Print the numbers 5 through 9: */         // Question 14

  int i=5;

while (i < 10){

 cout << "Task 14\n";
 cout << i << "\n";
 cout << endl;
 i = i + 1;
}
/* Finding the sum 1 + 2 + 3 + ... + 20 */

int sum =0;
i = 1;

while (i <= 20){

 sum = sum + i;
 i = i + 1;
}
cout << "The sum = " << sum<< "\n";

/* Average a list of grades terminated by -1 */
sum = 0;
int count =0;
int grade;



 sum =0;
count = 0;
cout << "Enter grade (-1 to end): "; // prompt user for grade
cin >> grade; // read grade
while (grade != -1)
{
 sum = sum + grade;
 count = count + 1;
 /* Get next grade */
 cout << "Enter grade (-1 to end): ";
 cin >> grade;
}
if (count > 0){
 cout << "Average is " << (double) sum / count<< "\n\n"; /* enter a number of grades insert -1 to end and get the
                                                            average*/
    }
    return;

    }
                                                // Question 15
    // print Finished 10 time using  do while for statement
    void Finished (){
        int a=1;
        while(a<=10){
    cout << "Finished\n";
    a=a+1;
        }



    cout <<"\n\n";

    for(int i=1;i<=10;i++){
        cout<< "Finished\n";
    }
    int x;
    cout << "\n\n";

    x=1;
    do{
        cout << "Finished   ";
        x=x+1;
    }

    while (x<=10);
        }
