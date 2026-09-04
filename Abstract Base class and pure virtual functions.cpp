#include<iostream>
using namespace std;
//abstract base class --> base class with at least 1 virtual function
                    //   --> class jo banate hi derived classes banane ke liye hai 
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; //do nothing fucntion --> pure virtual function
    // ab har derived class mein apna version banana hi hoga 
};

class CWHVideo : public CWH
{
    int videoLength;

public:
    CWHVideo(string s, float r, int vL) : CWH(s, r)
    {
        videoLength = vL;
    }
    void display()
    {
        cout << "amazing video titled " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Length of video is " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "amazing text titled " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Word count of page is " << words << endl;
    }
};
int main(){
     string title;
    float rating, vlen;
    int words;

    // Code for CWHVideo
    title = "Django tutorial video";
    vlen = 4.56;
    rating = 4.34;
    CWHVideo djvideo(title, rating,vlen);
    // djvideo.display();


    // Code for CWHText
    title = "Django tutorial text";
    words = 423;
    rating = 4.34;
    CWHText djtext(title, rating,words);
    // djtext.display();

    CWH* tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;

    tuts[0]->display();
    tuts[1]->display();
    


    
    return 0;
}