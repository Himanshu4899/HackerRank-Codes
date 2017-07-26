 #include <iostream>
    using namespace std;
    int main ()
    {
    int x, y,z;
    x = 5;
    y = ++x * x--;
    z=++y + --y;
    cout <<x<<endl<< y<<endl<<z;
    return 0;
    }
