#include<iostream>
#include<string>
using namespace std;
const int max = 6;
int laptop_category;
int vape_category;
int mobile_category;
//Define Date
struct date
{
	int day;
	int month;
	int year;
};

//Define Items
struct items
{
	int item_number;
	string category;
	int starting_bid_price;
	bool status;
	date start_auction_date;
	date end_date;
}item;

//Define Members
struct members
{
	int ID;
	string email;
	string name;
	int password;
	string delivery_address;
	long long phone_number;
	int points;
	items list_of_items[max];
}memb;

void main_menu();//
void login_members();//
void signup_members();
void buyer();//
void search_item();//
void request_item();//
void market_place();//
void seller();
void insert_item();
void feedback();//
void report();

int main()
{
	//Setting the items' list
	//1st
	memb.list_of_items[0].item_number = 111;
	memb.list_of_items[0].category = "L"; //L for laptops
	memb.list_of_items[0].starting_bid_price = 9000;
	memb.list_of_items[0].start_auction_date.day = 1;
	memb.list_of_items[0].start_auction_date.month = 1;
	memb.list_of_items[0].start_auction_date.year = 2020;
	memb.list_of_items[0].end_date.day = 11;
	memb.list_of_items[0].end_date.month = 1;
	memb.list_of_items[0].end_date.year = 2020;
	//2nd
	memb.list_of_items[1].item_number = 122;
	memb.list_of_items[1].category = "L"; //
	memb.list_of_items[1].starting_bid_price = 14000;
	memb.list_of_items[1].start_auction_date.day = 2;
	memb.list_of_items[1].start_auction_date.month = 2;
	memb.list_of_items[1].start_auction_date.year = 2020;
	memb.list_of_items[1].end_date.day = 12;
	memb.list_of_items[1].end_date.month = 2;
	memb.list_of_items[1].end_date.year = 2020;
	//3rd
	memb.list_of_items[2].item_number = 133;
	memb.list_of_items[2].category = "V"; //V for Vape
	memb.list_of_items[2].starting_bid_price = 2000;
	memb.list_of_items[2].start_auction_date.day = 3;
	memb.list_of_items[2].start_auction_date.month = 3;
	memb.list_of_items[2].start_auction_date.year = 2020;
	memb.list_of_items[2].end_date.day = 13;
	memb.list_of_items[2].end_date.month = 3;
	memb.list_of_items[2].end_date.year = 2020;
	//4th
	memb.list_of_items[3].item_number = 144;
	memb.list_of_items[3].category = "V";
	memb.list_of_items[3].starting_bid_price = 3500;
	memb.list_of_items[3].start_auction_date.day = 4;
	memb.list_of_items[3].start_auction_date.month = 4;
	memb.list_of_items[3].start_auction_date.year = 2020;
	memb.list_of_items[3].end_date.day = 14;
	memb.list_of_items[3].end_date.month = 4;
	memb.list_of_items[3].end_date.year = 2020;
	//5th
	memb.list_of_items[4].item_number = 155;
	memb.list_of_items[4].category = "M"; //M for Mobile phone
	memb.list_of_items[4].starting_bid_price = 5000;
	memb.list_of_items[4].start_auction_date.day = 5;
	memb.list_of_items[4].start_auction_date.month = 5;
	memb.list_of_items[4].start_auction_date.year = 2020;
	memb.list_of_items[4].end_date.day = 15;
	memb.list_of_items[4].end_date.month = 5;
	memb.list_of_items[4].end_date.year = 2020;
	//6th
	memb.list_of_items[5].item_number = 166;
	memb.list_of_items[5].category = "M";
	memb.list_of_items[5].starting_bid_price = 7000;
	memb.list_of_items[5].start_auction_date.day = 6;
	memb.list_of_items[5].start_auction_date.month = 6;
	memb.list_of_items[5].start_auction_date.year = 2020;
	memb.list_of_items[5].end_date.day = 16;
	memb.list_of_items[5].end_date.month = 6;
	memb.list_of_items[5].end_date.year = 2020;

	while (true)
	{
		int choice1;
		cout << "Enter your choice\n";
		cout << "1-Log in\n" << "2-Sign up\n" << "3-Exit\n";
		cin >> choice1;
		switch (choice1)
		{
		case 1:
			login_members();
			break;
		case 2:
			signup_members();
			break;
		case 3:
			cout << "Thanks for using this system\n";
			exit(0);
			break;
		}
	}
}

void login_members()
{
	cout << "ID:";
	cin >> memb.ID;
	cout << "Password:";
	cin >> memb.password;
	cout << "***************\n";
	main_menu();
}

void signup_members()
{
	cout << "ID:";
	cin >> memb.ID;
	cout << "Email:";
	cin >> memb.email;
	cout << "Name:";
	cin >> memb.name;
	cout << "Password:";
	cin >> memb.password;
	cout << "Delivery Address:";
	cin >> memb.delivery_address;
	cout << "Phone Number:";
	cin >> memb.phone_number;
	cout << "***************\n";
	main_menu();
}
//Determine user type
void main_menu()
{
	int choice2;
	cout << "Enter user type\n " << "1.Buyer\n" << "2.Seller\n"<<"3.Weekly report\n" << "4.Exit\n";
	cin >> choice2;
	switch (choice2)
	{
	case 1:
		buyer();
		break;
	case 2:
		seller();
		break;
	case 3:
		report();
		break;
	case 4:
		exit(0);
		break;
	}
	cout << "***************\n";
}

void buyer()
{
	int choice3;
	cout << "Enter your choice\n";
	cout << "1.Request item\n" << "2.Market place\n" << "3.Search\n" << "4.Give feedback\n"<<"5.My points\n"<<"6.Main Menu\n";
	cin >> choice3;
	switch (choice3)
	{
	case 1:
		request_item();
		break;
	case 2:
		market_place();
		break;
	case 3:
		search_item();
		break;
	case 4:
		feedback();
		break;
	case 5:
		cout << "Your points equals =" << memb.points<<endl;
		break;
	case 6:
		main_menu();
	}
}
//Buyer search items
void search_item()
{
	cout << "1-By category" << endl;
	cout << "2-By category and price" << endl;
	cout << "3-Main Menu" << endl;
	int choice4;
	cin >> choice4;
	int price;
	string category;
	switch (choice4)
	{
	case 1:
		cout << "Enter the category, L for laptops,V for Vape,M for Mobile phones\n";
		cin >> category;
		for(int i=0;i<6;i++)
		if (category == memb.list_of_items[i].category)
		{
			cout << "item number:"<<memb.list_of_items[i].item_number<<endl;
			cout << "Starting bid price:"<<memb.list_of_items[i].starting_bid_price << endl;
			cout <<"Starting date of auction process:"<< memb.list_of_items[i].start_auction_date.day<<"/" << memb.list_of_items[i].start_auction_date.month << "/" << memb.list_of_items[i].start_auction_date.year << endl;
			cout << "End date:"<<memb.list_of_items[i].end_date.day << "/" << memb.list_of_items[i].end_date.month << "/" << memb.list_of_items[i].end_date.year << endl;
			cout << "***************\n";
		}
		break;
	case 2:
		cout << "Enter the Price\n";
		cin >> price;
		cout << "Enter the category, L for laptops,V for Vape,M for Mobile phones\n";
		cin >> category;
		for (int i = 0; i < 6; i++)
			if (category == memb.list_of_items[i].category&&price==memb.list_of_items[i].starting_bid_price)
			{
				cout << "item number:" << memb.list_of_items[i].item_number << endl;
				cout << "Starting date of auction process:" << memb.list_of_items[i].start_auction_date.day << "/" << memb.list_of_items[i].start_auction_date.month << "/" << memb.list_of_items[i].start_auction_date.year << endl;
				cout << "End date:" << memb.list_of_items[i].end_date.day << "/" << memb.list_of_items[i].end_date.month << "/" << memb.list_of_items[i].end_date.year << endl;
				cout << "***************\n";
			}
		if (category == "L")laptop_category++;
		else if (category == "V")vape_category++;
		else if (category == "M")mobile_category++;
		break;
	case 3:
		main_menu();
		break;
	}
}
//The buyer request items from the seller
void request_item()
{
	cout << "1-I will pay the starting bid price" << endl;
	cout << "2- Want to suggest a price" << endl;
	cout << "3- Main Menu" << endl;
	int choice5;
	cin >> choice5;
	switch (choice5)
	{
	case 1:
		int item_num;
		cout << "Enter the item number:";
		cin >> item_num;
		for (int i = 0; i < 6; i++)
		{
			if (item_num == memb.list_of_items[i].item_number)
			{
				cout << "You bought the item\n";
			}
		}
		break;
	case 2:
		int suggested_price;
		cout << "1-Enter the item number:";
		cin >> item_num;
		cout << "2-Enter the suggested price:";
		cin >> suggested_price;
		for (int i = 0; i < 6; i++)
		{
			if (item_num == memb.list_of_items[i].item_number && suggested_price >= memb.list_of_items[i].starting_bid_price)
			{
				cout << "You bought the item\n";
			}
		}
		break;
	case 3:
		main_menu();
		break;
	}
}

void market_place()
{
	for (int i = 0; i < 6; i++)

	{
		cout <<"Item number:"<< memb.list_of_items[i].item_number << endl;
		cout << "Category:" << memb.list_of_items[i].category << endl;
		cout <<"Starting bid price:"<< memb.list_of_items[i].starting_bid_price << endl;
		cout <<"Starting date of auction process:"<< memb.list_of_items[i].start_auction_date.day<<"/"<<  memb.list_of_items[i].start_auction_date.month<< "/" << memb.list_of_items[i].start_auction_date.year << endl;
		cout << "End date:"<<memb.list_of_items[i].end_date.day << "/" << memb.list_of_items[i].end_date.month << "/" << memb.list_of_items[i].end_date.year << endl;
		cout << "***************\n";
	}
	string choice;
	cout << "Do you want to request item? Y or N:";
		cin >> choice;
		if (choice == "Y")
		{
			request_item();
		}
		else
		{
			cout << "Thanks for using the system";
			exit(0);
		}
}

void seller()
{
	int choice6;
	cout << "Enter your choice\n";
	cout <<  "1.Insert item\n" << "2.Give feedback\n"<<"3.My points\n"<<"4.Main Menu\n";
	cin >> choice6;
	switch (choice6)
	{
	
	case 1:
		insert_item();
		break;
	case 2:
		feedback();
		break;
	case 3:
		cout << "Your points equals=" << memb.points << endl;
	case 4:
		main_menu();
		break;
	}
}
// Insert item from seller
void insert_item()
{
	cout << "Enter the item number:";
	cin >> item.item_number;
	cout << "Enter the category:";
	cin >> item.category;
	cout << "Enter the starting bid price:";
	cin >> item.starting_bid_price;
	cout << "Enter the start day of the auction process:";
	cin >> item.start_auction_date.day ;
	cout << "Enter the start month of the auction process:";
	cin >> item.start_auction_date.month;
	cout << "Enter the start year of the auction process:";
	cin >> item.start_auction_date.year;
	cout << "Enter the day of end date:";
	cin >> item.end_date.day;
	cout << "Enter the month of end date:";
	cin >> item.end_date.month;
	cout << "Enter the year of end date:";
	cin >> item.end_date.year;
	cout << "Your item is in inserted successfully\n";
	cout << "***************\n";
}
//Members giving rate for eact other
void feedback()
{
	int rate;
	cout << "Enter the member ID\n";
	cin >> memb.ID;
	cout << "Enter rate 1:5\n";
	cin >> rate;
	if (rate >= 3)
	{
		cout << "The member's points increased\n";
		cout << "Thanks for the feedback\n";
		cout << "***************\n";
		memb.points++;
	}
	else
	{
		cout << "Thanks for the feedback\n";
		cout << "***************\n";
	}
}
void report()
{
	if (laptop_category > vape_category && laptop_category > mobile_category)
	{
		cout << "tha laptop category  by selling a number of '" << laptop_category << "' items" << endl;
	}
	else if (vape_category > laptop_category && vape_category > mobile_category)
	{
		cout << "tha vape category  by selling a number of '" << vape_category << "' items" << endl;
	}
	else if (mobile_category > laptop_category && mobile_category > vape_category)
	{
		cout << "tha Mobilephone category   by selling a number of '" << mobile_category << "' items" << endl;
	}
	else cout << "Nothing is sold by an amount  this month " << endl;
}
