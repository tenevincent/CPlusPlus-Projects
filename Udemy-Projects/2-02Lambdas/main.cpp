#include <iostream>

using namespace std;

void captureAllValues();


void captureAllByReference();


void lambdaFunctionByReference();

void PassingLambdaValues();




int main()
{



    /*
     * [capture list](parameter list) {function body}
    */

    /*
    auto lambdaFcn = []() {
          cout << "Hello World!" << endl;
    };
    lambdaFcn();
   auto lambdaParams = [](int a, int b) {
              cout << "sum is " << a +b  << endl;
        };
    lambdaParams(10,1);
    */

    //  Lambda  function that return something...
    /*
    int sum = [](int a, int b) -> int {
                 return a +b ;
           }(7,3);
   cout << "sum is " << sum  << endl;
   */

    /* */

    /*
    auto lambda03 =  [](int &a, int &b) -> int {

        ++a;
        ++b;
        return a +b ;
    };


    cout << "sum is " << lambda03(a,b)  << endl;
    */




    // Capture list by value

    /*  */
    PassingLambdaValues();


    // Lambda function with parameters
    /*  */
    lambdaFunctionByReference();



    /*
     *  Capture all values by value
     */
    // captureAllValues();


    captureAllByReference();



    return 0;
}


void PassingLambdaValues()
{
    int a = 7, b = 3;
    auto func = [a,b]()   {
        cout << "sum inside is " << a +b  << endl;
    };

    for(int i = 1; i < 5; i++){
        cout << "The value of a is: " << a  << endl;
        cout << "The value of b is: " << b  << endl;
        func();
        a++;
        b++;
    }
}


void lambdaFunctionByReference()
{
    int a = 7, b = 3;
    auto funcRef = [&a,&b]()   {
        cout << "sum inside is " << a +b  << endl;
    };

    for(int i = 1; i < 5; i++){
        cout << "The value of a is: " << a  << endl;
        cout << "The value of b is: " << b  << endl;
        funcRef();
        a++;
        b++;
    }
}




void captureAllByReference(){

    // enable to access all values outside the context of  the lambda function
    // by reference...
    int a = 7, b = 3;
    auto funcRef = [&]()   {
        cout << "sum inside is " << a +b  << endl;
    };

    for(int i = 1; i < 5; i++){
        cout << "The value of a is: " << a  << endl;
        cout << "The value of b is: " << b  << endl;
        funcRef();
        a++;
        b++;
    }

}
void captureAllValues()
{
    // enable to access all values outside the context of  the lambda function
    int a = 7, b = 3;
    auto funcRef = [=]()   {
        cout << "sum inside is " << a +b  << endl;
    };

    for(int i = 1; i < 5; i++){
        cout << "The value of a is: " << a  << endl;
        cout << "The value of b is: " << b  << endl;
        funcRef();
        a++;
        b++;
    }
}

