class Rectangle
{
private:
    int length,breadth;
public:
    Rectangle()
    {

    }
    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int Area()
    {
        return length*breadth;
    }
    int Perimeter()
    {
        return 2*(length+breadth);
    }
};
