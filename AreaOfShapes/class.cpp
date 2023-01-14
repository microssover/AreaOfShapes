#include <iostream>
using namespace std;

class Tri{
	public:
		double height;  
		double base;
		
		double getTriArea(void);
		void setBase(double bas);
		void setHeight(double hei);
		
	};
		double Tri::getTriArea(void)
		{
			return (height * base) / 2;
		};
		
		void Tri::setBase(double bas)
		{
			base = bas;
		};
		
		void Tri::setHeight(double hei)
		{
			height = hei;
		};
	
	class Rec{
		public:
			double length;
			double width;
			
			double getRecArea(void);
		    void setLength(double len);
		    void setWidth(double wid);
	};
	
	double Rec::getRecArea(void)
	{
		return length * width;
	}
	
	void Rec::setLength(double len)
	{
		length = len;
	}
	
	void Rec::setWidth(double wid)
	{
		width = wid;
	}
	
	
int main()
{
	
	char chr;
	cout<<"Enter the symbol that you want to find it's area : (T for triangle / R for rectangle)"<<endl;
	cin>>chr;
	
	if(chr=='T')
	{

	Tri Tri1;
	
	cout<<"Enter height of triangle :";
	cin>>Tri1.base;
	
	cout<<"\nEnter base of triangle : ";
	cin>>Tri1.height; 
	
	cout<<"\nBase : "<<Tri1.base;
	cout<<"\nHeight : "<<Tri1.height;
	
	cout<<"\nArea of triangle : "<<Tri1.getTriArea()<<endl;
	
}else if(chr=='R')
{	

	Rec Rec1;
	
	cout<<"Enter length of rectangle : ";
	cin>>Rec1.length;
	
	cout<<"Enter width of rectangle : ";
	cin>>Rec1.width;
	
	cout<<"\n Length of rectangle : "<<Rec1.length<<endl;
	cout<<"Width of rectangle : "<<Rec1.width<<endl;
	
	cout<<"\nArea of rectangle : "<<Rec1.getRecArea()<<endl;
}
	return 0;
}


