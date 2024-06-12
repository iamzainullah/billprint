#include <iostream>
using namespace std;
struct bill{
	int product_id, price, quanity;
	string product_name;
	string costumer_name;
	
}b;
int total(int A, int B)
{

	int total;
	total=A*B;
	return total;
}

void discount(int price,int quanity){
	float discount, topaid;
	if(total(price,quanity)<=100)
   {
      cout<<"\nSorry! No discount for shopping under 100";
      cout<<"You've to Pay "<<total(price,quanity );
   }
   else
   {
      if(total(price,quanity )>100 && total(b.price,quanity )<=200)
      {
         cout<<"\nCongrats! You'll get 5% discount on total Shopping amount";
         discount = (total(price,quanity )*5)/100;
         topaid = total(price,quanity )-discount;
      }
      else if(total(price,quanity )>200 && total(price,quanity )<=400)
      {
         cout<<"\nCongrats! You'll get 10% discount on total Shopping amount";
         discount = (total(price,quanity )*10)/100;
         topaid = total(price,quanity )-discount;
      }
      else if(total(price,quanity )>400 && total(price,quanity )<=800)
      {
         cout<<"\nCongrats! You'll get 20% discount on total Shopping amount";
         discount = (total(price,quanity )*20)/100;
         topaid = total(price,quanity )-discount;
      }
      else
      {
         cout<<"\nCongrats! You'll get maximum (25%) discount on total Shopping amount";
         discount = (total(price,quanity )*25)/100;
         topaid = total(price,quanity )-discount;
      }
      cout<<"\nYou've to Pay Only "<<topaid;
   }
   cout<<endl;
}

int main(){
 
 
	

	cout<<"Enter costumer name: ";
	cin>>b.costumer_name;
	cout<<"Enter product id: ";
	cin>>b.product_id;
	cout<<"Enter product name: ";
	cin>>b.product_name;
	cout<<"Enetr the product price: ";
	cin>>b.price;
	cout<<"Enter the product quanity: ";
	cin>>b.quanity;
	

	
	cout<<"******************* DISPLAY YOUR BILL*******************************"<<endl;
	cout<<"^^^^^^^^^^^^^^^^^^^ WELCOME TO THE RATHI GENERAL STOER^^^^^^^^^^^^^^"<<endl;
	cout<<"Your name is: "<<b.costumer_name<<endl;
	cout<<"Product ID  is: "<<b.product_id<<endl;
	cout<<"Product name is: "<<b.product_name<<endl;
	cout<<"Product priec is: "<<b.price<<endl;
	cout<<"Product quanity is: "<<b.quanity<<endl;
	cout<<"_______________________"<<endl;
	cout<<"Your Total bill is: "<<total(b.price,b.quanity )<<endl;
	discount(b.price,b.quanity);
	return 0;
}
	
	
