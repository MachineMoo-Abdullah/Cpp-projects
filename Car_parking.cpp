#include<iostream>
using namespace std;
int main()
{
	char veh;
	int bike = 0,car = 0 ,rickshaw = 0,tick_car = 0,tick_bike = 0,tick_rickshaw = 0;
	int mone;
	cout<<"\t\t C A R  P A R K I N G"<<endl<<endl;
	cout<<"Press b if you have a bike\nPress c if you have a Car\nPress r if you have a rickshaw\nPress v to view total number of vehicle entered in prking\nPress d to delete whole record\nPress m for veiwing total money collected by each vehicle";
	cout<<"\n\n\tCars ticket price = 50Rs\n\tBike ticket price = 30Rs\n\tRickshaw ticket price = 20Rs "<<endl;
	while(true)
	{
//	cout<<"Press b if you have a bike\nPress c if you have a Car\nPress r if you have a rickshaw\nPress v to view total number of vehicle entered in prking\nPress d to delete whole record\nPress m for veiwing total money collected by each vehicle";
	cout<<"\n\nPlease enter your vehicle type : ";
	cin>>veh;
	system("CLS");
	if(veh == 'b')
	{
		bike++;
		system("CLS");
		while(true)
		{
		cout<<"\n\nPlease give 30Rs for bike ticket for parking : ";
		cin>>mone;
		if(mone == 30)
		{
			system("CLS");
	    	tick_bike += 30;
	    	cout<<"___________________________________________"<<endl;
	     	cout<<"\n\tBike entered in the parking     --->"<<endl;
	    	cout<<"___________________________________________"<<endl;
	    	cout<<"___________________________________________"<<endl;
	    	break;
        }
        else if(mone < 30 || mone > 30)
        {
        	cout<<"___________________________________________"<<endl<<endl;
        	cout<<"\tOnly 30Rs are reqiured instead of giving "<<mone<<"Rs give 30Rs!"<<endl;
        	cout<<"___________________________________________"<<endl;
        	continue;
		}
		}
		
	}
	else if(veh == 'c')
	{
		car++;
		system("CLS");
		while (true)
		{
		cout<<"\n\nPlease give 50Rs for car ticket for parking : ";
		cin>>mone;
		if(mone == 50)
		{
			system("CLS");
	    	tick_car += 50;
	    	cout<<"___________________________________________"<<endl;
	    	cout<<"\n\tCar entered in the parking      --->"<<endl;
	    	cout<<"___________________________________________"<<endl;
	        cout<<"___________________________________________"<<endl;
	    	break;
	    }
	    else
	    {
	    	system("CLS");
	        cout<<"___________________________________________"<<endl;
       	    cout<<"\n\tOnly 50Rs are reqiured instead of giving "<<mone<<"Rs give 50Rs!"<<endl;
       	    cout<<"___________________________________________"<<endl;
         	continue;
        }
		}
	}	
	else if(veh == 'r')
	{
		rickshaw++;
		system("CLS");
		while(true)
		{
		cout<<"\n\nPlease give 20Rs for rickshaw ticket for parking : ";
		cin>>mone;
		if(mone  == 20)
		{
			system("CLS");
	    	tick_rickshaw +=20;
	    	cout<<"________________________________________________"<<endl;
	    	cout<<"\n\tRickshaw entered in the parking        --->"<<endl;
	    	cout<<"________________________________________________"<<endl;
	    	cout<<"___________________________________________"<<endl;
	    	break;
	    }
	    else
	    {
	    	cout<<"___________________________________________"<<endl;
           	cout<<"\n\tOnly 20Rs are reqiured instead of giving "<<mone<<"Rs give 20Rs!"<<endl;
         	cout<<"___________________________________________"<<endl;
       	    continue;
		}
	    }
	}	
	else if(veh == 'v')
	{
		system("CLS");
		cout<<"___________________________________________"<<endl;
		cout<<"\n\tCars in the parking = "<<car<<endl;
		cout<<"\n\tbikes in the parking = "<<bike<<endl;
		cout<<"\n\tRickshaw's in the parking = "<<rickshaw<<endl;
		cout<<"___________________________________________";
		cout<<"___________________________________________"<<endl;
	}
	else if(veh == 'm')
	{
		system("CLS");
		cout<<"___________________________________________"<<endl;
		cout<<"\n\tMoney collected by cars = "<<tick_car<<endl;
		cout<<"\n\tMoney collected by bikes = "<<tick_bike<<endl;
		cout<<"\n\tMoney collected by rickshaw = "<<tick_rickshaw<<endl;
		cout<<"___________________________________________"<<endl;
		cout<<"___________________________________________"<<endl;
	}
	else if(veh == 'e')
	{
		cout<<"\n\tP a r k i n g  c l o s e d!";
		exit(0);
	}
	else if(veh == 'd')
	{
		car = 0;
		bike = 0;
		rickshaw = 0;
		tick_car = 0,tick_bike = 0,tick_rickshaw = 0;
		system("CLS");
		cout<<"\n\t Record deleted!"<<endl;
		
	}	
	else
	{
		cout<<"Invlid number pressed/n/n/t/tTry again"<<endl<<endl;
	    cout<<"Press b if you have a bike\nPress c if you have a Car\nPress r if you have a rickshaw\nPress v to view total number of vehicle entered in prking\nPress d to delete whole record\nPress m for veiwing total money collected by each vehicle";
		continue;
	}		
    }
}
