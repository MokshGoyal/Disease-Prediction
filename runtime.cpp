#include<iostream>
using namespace std;
#include<cstdlib>


bool removeFile(const char* filename) {
    // Remove the file
    if (std::remove(filename) != 0) {
        std::cerr << "Error removing file: " << filename << std::endl;
        return false; // Return false if removal failed
    } else {
        cout << "Deleting runtime file(s)"<<endl;
        return true; // Return true if removal succeeded
    }
}
int main()
{
    system("streamlit run Multiple_disease_prediction.py");
    const char* filename = "runtime";
    if(removeFile(filename)){
        cout << "done" << endl;
    }
    else{
        cout << "error occured" << endl << "Runtime file not deleted " << endl;
    }
    return 0;
}
