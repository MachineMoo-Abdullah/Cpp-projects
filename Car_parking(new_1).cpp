#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char veh;
	int bike = 0,car = 0 ,rickshaw = 0,tick_car = 0,tick_bike = 0,tick_rickshaw = 0;
	int mone;
	cout<<"\t\t\t\t\t_______________________________"<<endl<<endl;
	cout<<"\t\t\t\t\t      C A R  P A R K I N G"<<endl;
	cout<<"\t\t\t\t\t_______________________________"<<endl;
    cout<<"__________________________"<<endl;
	cout<<"\n   TICKET PRICES : \n";
	cout<<"__________________________"<<endl;
	cout<<"\n\tCars ticket price = 50 Rs\n\tBike ticket price = 30 Rs\n\tRickshaw ticket price = 20 Rs "<<endl<<endl;
	cout<<"\t___________________________________________"<<endl;
	cout<<"\n\tPress enter to continue to view choices : ";
	cin.ignore();
	system("CLS");
	while(true)
	{
	cout<<"_________________________________________________________________"<<endl<<endl;
    cout<<"Press b if you have a \"bike\"\nPress c if you have a \"Car\"\nPress r if you have a \"rickshaw\"\n\nPress v to \"view\" total number of vehicle present in the parking\nPress d to \"delete\" whole record\nPress m for veiwing total \"money\" collected by each vehicle\nPress l if any vehicle \"left\" from the parking\nPress e to Close the Parking"<<endl;
	cout<<"_________________________________________________________________";
	cout<<"\n\nPlease enter your choice : ";
	cin>>veh;
	system("CLS");
	if(veh == 'b')
	{
		bike++;
		system("CLS");
		while(true)
		{
		cout<<"__________________________________________________________"<<endl;
		cout<<"\nPlease give 30Rs for bike ticket for parking : ";
		cin>>mone;
	//	cout<<"\n________________________________________________"<<endl;
		if(mone == 30)
		{
			system("CLS");
	    	tick_bike += 30;
	    	cout<<"\n\n________________________________________________________________"<<endl;
	    	cout<<  "\t                                        __"<<endl;
	    	cout<<"\t                                     ___// "<<endl;
	    	cout<<"\tBike entered in the parking   <--    //  \\";
	     	cout<<"\n\t                                    *    *      "<<endl;
	    	cout<<"________________________________________________________________"<<endl;
	    	cout<<endl<<endl;
	    	break;
        }
        else if(mone < 30 || mone > 30)
        {
        	cout<<"\n\n\t____________________________________________________________"<<endl<<endl;
        	cout<<"\n\t  Only 30Rs are reqiured instead of giving "<<mone<<"Rs give 30Rs!"<<endl;
        	cout<<"\n\t____________________________________________________________\n"<<endl<<endl;
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
        cout<<"__________________________________________________________"<<endl;		
        cout<<"\n\nPlease give 50Rs for car ticket for parking : ";
		cin>>mone;
		if(mone == 50)
		{
			system("CLS");
	    	tick_car += 50;
	    	cout<<"\n\n__________________________________________________________________"<<endl;
	    	cout<<  "\t                                       _____"<<endl;
	    	cout<<  "\t                                    __/__|__\\___"<<endl;
	    	cout<<  "\t Car entered in the parking    <-- <\\____|_____|    "<<endl;
	    	cout<<  "\t                                      *      *    "<<endl;
	    	cout<<"__________________________________________________________________"<<endl;
	        cout<<endl;
	    	break;
	    }
	    else
	    {

	        cout<<"\n\n\t____________________________________________________________"<<endl<<endl;
        	cout<<"\n\t  Only 50Rs are reqiured instead of giving "<<mone<<"Rs give 50Rs!"<<endl;
        	cout<<"\n\t_____________________________________________________________\n"<<endl<<endl;
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
        cout<<"__________________________________________________________"<<endl;	
 	    cout<<"\n\nPlease give 20Rs for rickshaw ticket for parking : ";
		cin>>mone;
		if(mone  == 20)
		{
			system("CLS");
	    	tick_rickshaw +=20;
	    	cout<<"\n\n______________________________________________________________"<<endl;
	    	cout<<  "\t                                        ____ "<<endl;
	    	cout<<  "\t                                        |  | \\_"<<endl;
	    	cout<<  "\t Rickshaw entered in the parking  <--   |__|___\\    ";
	    	cout<<"\n\t                                         *   *    "<<endl;
	    	cout<<"______________________________________________________________"<<endl;
	    	cout<<endl<<endl;
	    	break;
	    }
	    else 
	    {
	    	cout<<"\n\n\t____________________________________________________________"<<endl<<endl;
        	cout<<"\n\t  Only 20Rs are reqiured instead of giving "<<mone<<"Rs give 20Rs!"<<endl;
        	cout<<"\n\t_____________________________________________________________\n"<<endl<<endl;
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
		cout<<"___________________________________________"<<endl;
	}
	else if(veh == 'm')
	{
		system("CLS");
		cout<<"___________________________________________"<<endl;
		cout<<"\n\tMoney collected by cars = "<<tick_car<<endl;
		cout<<"\n\tMoney collected by bikes = "<<tick_bike<<endl;
		cout<<"\n\tMoney collected by rickshaw = "<<tick_rickshaw<<endl;
		cout<<"\n\t       Total money collected = "<<tick_car+tick_bike + tick_rickshaw<<" RS"<<endl;
		cout<<"___________________________________________"<<endl;
		cout<<"___________________________________________"<<endl;
	}
	else if(veh == 'e')
	{
		cout<<"\n\n\t************************************"<<endl;
		cout<<"\t*\t\t\t\t   *\n\t*   P a r k i n g  c l o s e d!";
		cout<<"    *\n\t*\t\t\t\t   *\n\t************************************"<<endl;		
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
	else if(veh == 'l')
	{
		char inp;
		cout<<"_______________________________________\n\n";
		cout<<"\tPress b if bike left\n\tPress c if car left\n\tPress r if rickshaw left\n";
		cout<<"_______________________________________\n"<<endl;
		inp = getch();
		while(true)
		{
		if(inp == 'b')
		{
			if(bike>0)
			{
		    	bike--;
		    	cout<<"\n\n________________________________________________________________"<<endl;
	    	cout<<  "\t                                     __"<<endl;
	    	cout<<"\t                                  ___// "<<endl;
	    	cout<<"\tBike left the parking             //  \\";
	     	cout<<"\n\t                                 *    *      --->"<<endl;
	    	cout<<"________________________________________________________________"<<endl;
	    	cout<<endl<<endl;
		    	break;
		    }
		    else if(bike == 0)
		    {
		    	cout<<"\n\tThere is no bike to be left from the parking!\n";
		    	break;
			}
		}
		else if(inp == 'c')
		{
			if(car > 0)
			{
			    car--;
				cout<<"\n\n__________________________________________________________________"<<endl;
	    	cout<<  "\t                                       _____"<<endl;
	    	cout<<  "\t                                    __/__|__\\___"<<endl;
	    	cout<<  "\t Car Left the parking               \\____|_____|>    --->"<<endl;
	    	cout<<  "\t                                      *      *    "<<endl;
	    	cout<<"__________________________________________________________________"<<endl;
			break;
		    }
		    else if(car == 0)
		    {
		    	cout<<"\n\tThere is no car to be left from the parking!\n";
		    	break;
			}
		}
		else if(inp == 'r')
		{
			if(rickshaw > 0)
			{
			    rickshaw--;
		    cout<<"\n\n______________________________________________________________"<<endl;
	    	cout<<  "\t                                      ____ "<<endl;
	    	cout<<  "\t                                     |  | \\_"<<endl;
	    	cout<<  "\t Rickshaw Left the parking           |__|___\\    --->";
	    	cout<<"\n\t                                      *   *    "<<endl;
	    	cout<<"______________________________________________________________"<<endl;
			break;
		    }
		    else if(rickshaw == 0)
		    {
		    	cout<<"\n\tThere is no rickshaw to be left from the parking!\n";
		    	break;
			}
		}
		else
		{
			cout<<"___________________________________________"<<endl;
			cout<<"\n\tInvalid input entered\n\n";
			cout<<"___________________________________________"<<endl;
			continue;
		}
	    }
	}
	else
	{
		cout<<"\n\n\tInvlid number pressed\n\n\t\tTry again!"<<endl<<endl;
		continue;
	}    
	}
	return 0;	
}

