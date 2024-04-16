// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Product{
    public:
    int Prod_id;
    string Prod_name;
    int Stock;
    int Gst;
    int Discount;
    int Productprice;
    
    //Constructor
   public:  void ViewProduct()
    {
        cout << "Enter Product id: " << endl;
        cin >> Prod_id;
        
        cout << "Enter Product name: " << endl;
        cin >> Prod_name;
        
        cout << "Enter Product stock: " << endl;
        cin >> Stock;
        
        cout << "Enter Gst: " << endl;
        cin >> Gst;
        
        cout << "Enter Product Discount: " << endl;
        cin >> Discount;
        
        cout << "Enter Product price: " << endl;
        cin >> Productprice;
    }
    
    public: void Display()
    {
        cout << "Product components are: " << endl;
        cout << "---------------------------------------" << endl;
        cout << "Product id = " << Prod_id << endl;
        cout << " Product name = " << Prod_name << endl;
        cout << "Number of stocks are = " << Stock << endl;
        cout << " GST is = " << Gst << endl;
        cout << "Discount is = "<< Discount << endl;
        cout << " Product Price = " << Productprice << endl;
    }
};


int main()
{
    Product p;
    p.ViewProduct();
    p.Display();
}