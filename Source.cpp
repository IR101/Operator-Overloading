class Box {

    //Implement the class Box  
    //l,b,h are integers representing the dimensions of the box
    int length, breadth, height;

    // The class should have the following functions : 
public:
    // Constructors: 
    // Box();
    Box() {
        this->length = 0;
        this->breadth = 0;
        this->height = 0;
    }
    // Box(int,int,int);
    Box(int l, int b, int h) {
        this->length = l;
        this->breadth = b;
        this->height = h;
    }
    // Box(Box);


    // int getLength(); // Return box's length
    int getLength() {
        return this->length;
    }
    // int getBreadth (); // Return box's breadth
    int getBreadth() {
        return this->breadth;
    }
    // int getHeight ();  //Return box's height
    int getHeight() {
        return this->height;
    }
    // long long CalculateVolume(); // Return the volume of the box
    long long CalculateVolume() {

        long long Volume = (long)this->length * (long)this->breadth * (long)this->height;

        return  Volume;
    }
    //Overload operator < as specified
    //bool operator<(Box& b)
    bool operator<(Box& b) {

        bool lengthEquals = (this->length == b.length);
        bool breadthEquals = (this->breadth == b.breadth);

        return (this->length < b.length)
            || (this->breadth < b.breadth&& lengthEquals)
            || (this->height < b.height&& breadthEquals&& lengthEquals);
    }
    //Overload operator << as specified
    //ostream& operator<<(ostream& out, Box& B)
    friend ostream& operator<<(ostream& out, Box& B) {
        out << B.length << " " << B.breadth << " " << B.height;
        return out;
    }


};