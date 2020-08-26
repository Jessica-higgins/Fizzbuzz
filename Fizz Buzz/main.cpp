//Jessica Higgins Fall 2019
#include<iostream>

using namespace std;

int main(){

    cout << "== Fizz Buzz == " << endl;

    string word1;
    string word2;

    int num1;
    int num2;
    int s1;
    int s2;

    cout << "Enter a pair of words (each from 3-6 chars long): ";

    cin >> word1 >> word2;

    s1 = word1.size();

    s2 = word2.size();

    while( s1<3 || s1>6 || s2<3 || s2>6 || word1==word2 ){

        cout << "Enter a pair of words (each from 3-6 chars long): ";

        cin >> word1 >> word2;

        s1 = word1.size();

        s2 = word2.size();

    }

    cout << "Enter two different integers (between 2 and 15): ";

    cin >> num1 >> num2;

    while(cin.fail() || num1<2 || num1>15 || num2<2 || num2>15 || num1==num2){

        cout << "Enter two different integers (between 2 and 15): ";

        cin >> num1 >> num2;

    }

    cout << endl;

    for(int i=1; i<=100; i++){

        if(i%num1 == 0 && i%num2 == 0)

            cout << word1 << word2 << " ";

        else if(i%num1 == 0)

            cout << word1 << " ";

        else if(i%num2 == 0)

            cout << word2 << " ";

        else

            cout << i << " ";

        if(i%10 == 0)

            cout << endl;

    }

    cout << endl;

    for(int i=1; i <=100; i++){

        if(i%num1 == 0 && i%num2 == 0)

            cout << "# ";

        else if(i%num1==0)

            cout << "+ ";

        else if(i%num2==0)

            cout << "* ";

        else

            cout << ". ";

        if(i%10==0)

            cout << endl;

    }

    return 0;

}
