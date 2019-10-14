#include<iostream>
using namespace std;

int queue[5];
int rear=-1;int front = -1;
int ch,x;
			void insert()
			{
				if(rear>5)
				{
				cout<<"queue over flow\n";
				front =rear=-1;
				}
				else
				{
					rear++;
					cout<<"enter the data to be inserted\n";
					cin>>x;
					queue[rear]=x;
					cout<<"inserted\n"<<endl;
				}
			}
			void del()
			{	
			if(rear==front)
			{
				cout<<"queue empty\n";
				
			}
				else
				{
				cout<<"deleted\n";
				front++;		
				}	
			}
							void display()
							{
								cout<<"assaa";
								if(rear==front)
								{
									cout<<"queue empty\n";
								}
								else
								{
									cout<<"paissaa";
									for(int i =0;i<=rear;i++)
									{
									
									cout<<queue[i]<<" ";
									
							}
								}
							}
		
			int main()
			{
				do
				{
					cout<<"--------- QUEUE OPERATIONS------\n";
					cout<<"1.insert\n";
					cout<<"2.del\n";
					cout<<"3.display\n";
					cout<<"4.exit\n";
					cout<<"enter your choice\n";
					cin>>ch;
					switch(ch)
					{
						case 1:insert();
							break;
						case 2 :del();
								break;
						case 3:display();
								break;
						case 4:exit(0);
						case 5:
							default:
							cout<<"invalid selection";
						}	
				}while(ch!=5);
			}
