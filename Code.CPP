 #include<iostream>
 #include<conio.h>
 #include<String>

int main()
{

int Choice,order,password;
double total;
char str[100];
do{
  cout << "product List:"<< endl;
  cout <<"[1] Bread/Grains"<< endl;
  cout <<"[2]vegan sandwichs"<< endl;
  cout <<"[3] meat based sandwiches " << endl;
  cout <<"[4] soft drinks " << endl;
  cout <<"[5] Check total"<< endl;
  cout <<"[6] exit"<< endl;
  cout << "Choice:"<< endl;
  cin >> Choice;
  if(Choice>6  || Choice <1 )
  cout<<"Invailed Choice!\n"<<endl;
  if(Choice==1){


  cout<<"Bread Grains:"<<endl;
  cout<< "[1] Bread\t\t\t$50.00 "<< endl;
  cout<<"[2] Bagels\t\t\t$150.00"<< endl;
       cout<<"[3] pasta\t\t\t$1000.00"<< endl;
        cout<<"choice:"<< endl;
        cin>>order;
        if(order==1){
        total+=50.00;
         }
        else if(order==2){ total+=150.00 ;  }
        else if(order== 3){ total+=1000.00 ;}

   }
    if(Choice==2) {
  cout<<"vegan sandwichs:"<<endl;
  cout<< "[1] chips\t\t\t$500.00 "<< endl;
  cout<<"[2] vegetable \t\t\t$300.00"<< endl;
       cout<<"[3] vegetables with chips\t\t\t$500.00"<< endl;
        cout<<"choice:"<< endl;
        cin>>order;
        if(Choice==1)
        {
        cout<<"chips sandwichs:"<<endl;
        cout<<"[1]with bread\t\t\t$500.00"<<endl;
        cout<<"[2]with burritos\t\t\t$500.00"<<endl;
        cout<<"Choice:"<<endl ;
         cin>>order; }
                 if(Choice==2)
        { cout<<"vegetable sandwichs:"<<endl;
        cout<<"[1]with bread$300.00"<<endl;
        cout<<"[2]with burritos$300.00"<<endl;
        cout<<"Choice:"<<endl ;
         cin>>order;

         }
         if(Choice==3)
        {
        cout<<"vegetable with chips sandwichs:"<<endl;
        cout<<"[1]with bread\t\t\t$500.00"<<endl;
        cout<<"[2]with burritos\t\t\t$500.00"<<endl;
        cout<<"Choice:"<<endl ;
         cin>>order; }

        if(order==1){
        total+=500.00;
         }
        else if(order==2){ total+=300.00 ;  }
        else if(order== 3){ total+=500.00 ;}

        }
        if(Choice==3) {
  cout<<"meat based sandwichs:"<<endl;
  cout<< "[1] burger\t\t\t$700.00 "<< endl;
  cout<<"[2] chicken \t\t\t$700.00"<< endl;
       cout<<"[3] hotdog\t\t\t$700.00"<< endl;
        cout<<"choice:"<< endl;
        cin>>order;
        if(Choice==1)
        {
        cout<<"burger:"<<endl;
        cout<<"[1]with bread\t\t\t$700.00"<<endl;
        cout<<"[2]with burritos\t\t\t$700.00"<<endl;
        cout<<"Choice:"<<endl ;
         cin>>order; }
                 if(Choice==2)
        { cout<<"chicken:"<<endl;
        cout<<"[1]with bread$700.00"<<endl;
        cout<<"[2]with burritos$700.00"<<endl;
        cout<<"Choice:"<<endl ;
         cin>>order;
         }

          if(Choice==3)
        { cout<<"hotdog:"<<endl;
        cout<<"[1]with bread$700.00"<<endl;
        cout<<"[2]with burritos$700.00"<<endl;
       cout<<"Choice:"<<endl ;
         cin>>order;
         }
        if(order==1){
        total+=700.00;
         }
        else if(order==2){ total+=700.00 ;  }
        else if(order== 3){ total+=700.00 ;}

        }
        if(Choice==4){


  cout<<"soft drinks:"<<endl;
  cout<< "[1] cola\t\t\t$300.00 "<< endl;
  cout<<"[2] sprite\t\t\t$300.00"<< endl;
       cout<<"[3] pepsi\t\t\t$300.00"<< endl;
       cout<<"[3] fanta\t\t\t$300.00"<< endl;
        cout<<"choice:"<< endl;
        cin>>order;
        if(order==1){
        total+=300.00;
         }
        else if(order==2){ total+=300.00 ;  }
        else if(order== 3){ total+=300.00 ;}

   }

         else if(Choice==5) {
  cout<<" total is:"<<total;
  cout<<endl;
     }
           else if(Choice==5) {

  cout<<"sub total is:"<<total;

 }

       }while ( Choice !=6-);
         return 0;

    }