#include <iostream> // in/out user
#include <fstream> // Read & Write files

#include <chrono>  // For performance timing
#include<sstream>

using namespace std;

int main() {

     cout << "----------------------------------------------------------------------" <<  endl;
     cout << "-------------------------- PAVIC LAB 2024 ---------------------------" <<  endl;
     cout << "--------------------------     UFAC       ---------------------------" <<  endl;
     cout << "--------------------------   TURMA 2024    ---------------------------" <<  endl;
     cout <<  endl;
     cout << "               Prog. Lucas Hildelbrano Costa Carvalho                    " <<  endl;
     cout << "------------------------ Programacao em PPM Image --------------------" <<  endl;
     cout << "----------------------------------------------------------------------" <<  endl;
     cout <<  endl;

    // Header
     string type = "";
     string width = "";
     string height = "";
     string RGB = "";

     ifstream old_image; // Read file "cin" >> 
     ofstream new_image; // Write file "cout" <<

    old_image.open("image.ppm");
    new_image.open("nova_imagem.ppm");

    // copy from header old file(image) to memory
    old_image >> type;
    old_image >> width;
    old_image >> height;
    old_image >> RGB;
    // Copy from memory to  new file (image)

    new_image << type <<  endl;
    new_image << width << " " << height <<  endl;
    new_image << RGB <<  endl;


    // copy from body old file(image) to memory
     string red = "";
     string green = "";
     string blue = "";
    int intred = 0;
    int intgreen = 0;
    int intblue = 0;
    int i = 0;


    //Timer
     cout << "Time Start!!" <<  endl;
    auto start_single_thread =  chrono::high_resolution_clock::now();

    // Read each pixel!!
    
    while (!old_image.eof()) {

        old_image >> red;
        old_image >> green;
        old_image >> blue;


        /*
        Syntax:

        int stoi (string s, size_t* position = 0, int base = 10)
        Parameters:

        The string which has to be transformed is the first parameter.
        Location of an integer used to track how many characters were read. In that scenario, it is not used if this parameter is a null pointer.
        The third and last parameter is base. The sequence’s format determines the base used if this is 0. It uses base 10(decimal) if no argument is passed

        */


        // convert string to number!!
        intred =  stoi(red, nullptr);
        intgreen =  stoi(green, nullptr);
        intblue =  stoi(blue, nullptr);

        
        if ((i%3) == 0) {
            intred += 50;
        };

        if ((i%3) == 1) {
            intgreen += 50;
        };

        if ((i%3) == 2) {
            intblue += 50;
        };
    

        // Copy pixels
        new_image << intred << " " << intgreen << " " << intblue <<  endl;

        i++;
    }





    auto stop_single_thread =  chrono::high_resolution_clock::now();
     cout << "Time End!!" <<  endl;

    auto duration_single_thread =  chrono::duration_cast< chrono::milliseconds>(stop_single_thread - start_single_thread);


    // Display timing results
    cout << "Single-threaded image processing time: " << duration_single_thread.count() << " millis" << endl;

    old_image.close();
    new_image.close();
    return 0;
}