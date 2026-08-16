#include<iostream>
using namespace std;

int main(){
    int amount = 0;
    
    string helmetWorn = "";
    string LicenseAvailable = "";
    string Overspeeding = "";

    cout<<"Helmet Worn(Yes/No) : "<<endl;
    cin>>helmetWorn;

    cout<<"License Available(Yes/No) : "<<endl;
    cin>>LicenseAvailable;

    cout<<"Overspeeding(Yes/No) : "<<endl;
    cin>>Overspeeding;

    if(helmetWorn != "Yes" && helmetWorn != "No" && helmetWorn != "yes" && helmetWorn != "no"
      && LicenseAvailable != "Yes" && LicenseAvailable != "No" && LicenseAvailable != "yes" && LicenseAvailable != "no"
      && Overspeeding != "Yes" && Overspeeding != "No" && Overspeeding != "yes" && Overspeeding != "no"){
        cout << "Invalid Yes/No input" << endl;
        return 0;
    }

    if(helmetWorn == "No" || helmetWorn == "no"){
        amount+=500;
    }
    if(LicenseAvailable == "No" || LicenseAvailable == "no"){
        amount+=1000;
    }
    if(Overspeeding == "Yes" || Overspeeding == "yes"){
        amount+=1500;
    }

    cout<<"Total Fine amount : "<<amount<<endl;

    return 0;
}

    
