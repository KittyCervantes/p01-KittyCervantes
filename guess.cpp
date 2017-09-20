//Author: Bianca Cervantes

#include <iostream>


#include <cstdlib>
#include <ctime>

using namespace std;

main()
{

srand (time(NULL));
int randomNumber,gucci,diff;
//gucci instead of guess, get it??...I need to stop.

randomNumber=rand()%10+1;
diff=0;

cout<<"I'm thinking of a number between one and ten, can you guess it?"<<endl;
cin>>gucci;

if(gucci==randomNumber) 
{
cout<<"Wow, you guessed it! You win this time!" <<endl;
}
else if(gucci > randomNumber)
{
diff==gucci-randomNumber;
cout<<"Sorry, you were too high by "<<diff<<". I win!"<<endl;
}
else if(gucci < randomNumber)
{
diff==randomNumber-gucci;
cout<<"Sorry, you were "<<diff<<" too low. I win!"<<endl;
}

else(gucci>10+1);
{
cout<<"Please only enter numbers between 1 and 10!"<<endl;
}


return 0;

}
