// kap27pSicherheit_lst104-27pPuffer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


struct Puffer {
    const char* data;
    explicit Puffer(unsigned sz) : data(new char[sz]) {}
    ~Puffer() { delete[] data; }
    Puffer(const Puffer&) = delete;
    Puffer& operator=(const Puffer&) = delete;
};

struct Image {}; //#


//struct StereoImage {
//    Image* left, * right;
//
//    StereoImage()
//        : left(new Image)
//        , right(new Image) // Gefahr!
//    { }
//
//    ~StereoImage() {
//        delete left;
//        delete right;
//    }
//};


struct StereoImage {
    std::unique_ptr<Image> left, right;

    void Print() {

        std::cout << "Print()!\n";
    }

    StereoImage()
        : left(new Image)
        , right(new Image)
    { }

        ~StereoImage() {
            std::cout << "~StereoImage()!\n";
    }
};






#define SIZE 5

struct STUDENT {
    std::string  name;
    float   time;
    int     recent_chapter;
};

struct STRUCT {
    int STRUCT;
} Structure;

//Structure.STRUCT = 0; /* STRUCT is a field name here */


struct A {
    int a;
    float b;
};


struct B {
    int b;
    float a;
};



int main()
{
    //{
    //    std::unique_ptr<StereoImage> steroImage = std::make_unique<StereoImage>();
    //    steroImage->Print();
    //}

    //{
    //
    //    int vector[SIZE]  { 0,1,2,3,4 };
    //    for (auto item : vector)
    //    {
    //        std::cout << "" << item << std::endl;
    //    }
    //}

    //{
    //    int i = 0, j = i++, k = --i;
    //    if (i > 0)
    //        j++;
    //    else
    //        k++;
    //    if (k == 0)
    //        i++;
    //    else if (k > 0)
    //        k--;
    //    else
    //        k++;
    //    std::cout << i * j * k << std::endl;
    //}

    //{
    //    int i = 1, j = i++, k = --i;
    //    if (i > 0) {
    //        j++;
    //        k++;
    //    }
    //    else {
    //        k++;
    //        i++;
    //    }
    //    if (k == 0) {
    //        i++;
    //        j++;
    //    }
    //    else {
    //        if (k > 0)
    //            k--;
    //        else
    //            k++;
    //        i++;
    //    }
    //    std::cout << i * j * k << std::endl;

    //}

    {
        //int i = 5, j = 0;
        //while (i > 0) {
        //    i--;
        //    j++;
        //}
        //cout << j << endl;
    }

    //for (float val = -10.0; val < 100.0; val = -val * 2) {
    //    if (val < 0 && -val >= 40)
    //        break;
    //    cout << "*";
    //}
 
        int g[3][3] = { {2, 4, 8}, {3, 6, 9}, {5, 10, 15} };
        for (int i = 2; i >= 0; i--)
            for (int j = 0; j < 3; j++)
                g[i][j] += g[j][i];
        cout << g[1][1];


   //std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
