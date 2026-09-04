#include <iostream>
#include <cstring>
using namespace std;

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
    virtual void display() {}
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
int main()
{
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

/*RULES FOR VIRTUAL FUNCTIONS 
1. They are static
2. They are accessed by object pointers
3. Can be friends of other classes 
4. A cirtual function i nbase class might not be used. 
5. if a virtual function is defined in base class, we don't need to define it in derived class.
if there is no fucntion in derievd classs then the virtual fucntion in base class is used instead */