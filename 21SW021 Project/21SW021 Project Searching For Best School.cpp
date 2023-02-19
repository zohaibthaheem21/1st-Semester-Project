#include<iostream>
#include<conio.h>
using namespace std;
	int s;
	void moreInf()
	{
		cout<<"1: Teachers:"<<endl;
		cout<<"2: Students and Classes:"<<endl;
		cout<<"3: Facilities:"<<endl;
		cout<<"4: Timing:"<<endl;
		cout<<"5: Back:"<<endl;
		cout<<endl;
		cout<<"=> What about you want to know: ";
		cin>>s;
		system("cls");
	}
class school
{	public:
	string s_name;
	string o_name;
	string p_name;
	string  c_number;
	void setData(string s_n, string o_n, string p_n, string c_n)
	{
		s_name = s_n;
		o_name = o_n;
		p_name = p_n;
		c_number = 	c_n;
	}
	
	void getData()
	{
		cout<<"=> School name is "<<s_name<<endl;
		cout<<"=> School owner name is "<<o_name<<endl;
		cout<<"=> School principle name is "<<p_name<<endl;
		cout<<"=> School contact number is "<<c_number<<endl;
	}
};
int main(){
	system("color B4");
	again:
	school s1, s2, s3, s4, s5;
	string n;
	string pass;
	char c;
	cout<<"\n\t\t\t**************************"<<endl;
	cout<<"\t\t\t* Welcome in our Service:*"<<endl;
	cout<<"\t\t\t**************************"<<endl;
	cout<<"=>Enter your name: ";
	getline(cin,n);
	cout<<"=>Enter password:";
	for( int i=1; i<=3; i++)
	{
	c = getch();
	pass+=c;
	cout<<"*";
	}
	if(pass=="Abu" || pass=="ABU" || pass=="abu")
	{
		system("cls");
		reverse:
		int h;
		mn:
		cout<<"\n=> Dear "<<n<<" about which school do you want to know information:\n"<<endl;
		cout<<"1: Galaxy Public Higher Secondary School Ratodero:"<<endl;
		cout<<"2: Islamia Public Higher Secondary School Ratodero:"<<endl;
		cout<<"3: Muneer Public High School Ratodero:"<<endl;
		cin>>h;
		system("cls");
		switch(h)
			{		
				int t;
				case 1:
				{
					s1.setData("Galaxy Public Higher Secondary School Ratodero", "Ali Akbar Soomro", "Asim Ali","03003412021");
					s1.getData();
					cout<<"\n=> If you want to know more about it then press any key: ";
					getch();
					system("cls");
					kk:
					km:
					kn:
					moreInf();
					switch(s)
					{
						case 1:
						{
							bake:
							cout<<"=> There are 5 subject teachers."<<endl;
							cout<<"=> About whom do you want to know from the following: "<<endl;
							cout<<"1: Mathematics teachers"<<endl;
							cout<<"2: Physics teachers"<<endl;
							cout<<"3: Chemistry teachers"<<endl;
							cout<<"4: English teachers"<<endl;
							cout<<"5: General Subjects teachers"<<endl;
    						cout<<"6: back"<<endl;
							cin>>t;
							system("cls");
							switch(t)
							{
								case 1:
								{
									cout<<"=> There are 2 teachers of Mathematics:\n"<<endl;
									cout<<"\t1: Sir Zameer Hussain Dayo"<<endl;
									cout<<"\t\t\tM.phil SALU"<<endl;
									cout<<"\t=> He has experience of 10 years of teaching in mathematics field\n"<<endl;
									cout<<"\t2: Sir Sajjad Ali Mahesar"<<endl;
									cout<<"\t\t\tB.Sc SALU"<<endl;
									cout<<"\t=> He has experience of 14 years of teaching in mathematics field"<<endl;
									cout<<"\n\t=> If you want to back then press any key: ";
    								getch();
									system("cls");
									goto bake;
									break;
								}
								case 2:
								{
									cout<<"=> There are 3 teachers of Physics:\n"<<endl;
									cout<<"\t1: Sir Ahmed Ali Soomro"<<endl;
									cout<<"\t\t\tM.phil SALU"<<endl;
									cout<<"\t=>  He has experience of 5 years of teaching in physics field\n"<<endl;
									cout<<"\t2: Sir Sarfaraz Ali  Wadhio"<<endl;
									cout<<"\t\t\tB.Sc SALU"<<endl;
									cout<<"\t=> He has experience of 4 years of teaching in physics field"<<endl;
									cout<<"\t2: Sir Farman Ali  Wadhio"<<endl;
									cout<<"\t\t\tB.Sc GCU"<<endl;
									cout<<"\t=> He has experience of 3 years of teaching in physics field"<<endl;
									cout<<"\n\t=> If you want to back then press any key: ";
   								    getch();
									system("cls");
									goto bake;
									break;
								}
								case 3:
								{
									cout<<"=> There are 3 teachers of Chemistry:\n"<<endl;
									cout<<"\t1: Sir Ali Ahmed Samejo"<<endl;
									cout<<"\t\t\tM.phil Sindh"<<endl;
									cout<<"\t=> He has experience of 6 years of teaching in chemistry field\n"<<endl;
									cout<<"\t2: Sir Siraj Ali  Wadhio"<<endl;
									cout<<"\t\t\tB.Sc SALU"<<endl;
									cout<<"\t=> He has experience of 7 years of teaching in chemistry field"<<endl;
									cout<<"\t2: Sir Sadam Ali  Wadhio"<<endl;
									cout<<"\t\t\tB.Sc KU"<<endl;
									cout<<"\t=> He has experience of 7 years of teaching in chemistry field"<<endl;
									cout<<"\n\t=> If you want to back then press any key: ";
    								getch();
									system("cls");
									goto bake;
									break;
								}
    							case 4:
								{
									cout<<"=> There are 2 teachers of English:\n"<<endl;
									cout<<"\t1: Sir Farooq Fareed Samejo"<<endl;
									cout<<"\t\t\tPhd Sindh"<<endl;
									cout<<"\t=> He has experience of 8 years of teaching in English field\n"<<endl;
									cout<<"\t2: Sir Siraj Ali  Wadhio"<<endl;
									cout<<"\t\t\tM.phil QAU"<<endl;
									cout<<"\t=> He has experience of 5 years of teaching in English field"<<endl;
									cout<<"\n\t=> If you want to back then press any key: ";
    								getch();
									system("cls");
									goto bake;
									break;
								}	
								case 5:
								{
									cout<<"=> There are 5 teachers of General Subjects:\n"<<endl;
									cout<<"\t1: Sir Farooq Seelro"<<endl;
									cout<<"\t\t\tM.phil Sindh"<<endl;
									cout<<"\t=> He has experience of 6 years of teaching in Urdu field\n"<<endl;
									cout<<"\t2: Sir Shoaib Ali Thaheem"<<endl;
									cout<<"\t\t\tB.Sc SALU"<<endl;
									cout<<"\t=> He has experience of 4 years of teaching in Sindhi field"<<endl;
									cout<<"\t2: Sir Sadam Ali  Thaheem"<<endl;
									cout<<"\t\t\tB.Sc QAU"<<endl;
									cout<<"\t=> He has experience of 9 years of teaching in Pakistan Study field"<<endl;
									cout<<"\t1: Sir Kelash Kumar"<<endl;
									cout<<"\t\t\tM.phil Sindh"<<endl;
									cout<<"\t=> He has experience of 6 years of teaching in urdu field\n"<<endl;
									cout<<"\t2: Sir Zaheer Ahmed Chandio "<<endl;
									cout<<"\t\t\tB.Sc QAU"<<endl;
									cout<<"\t=> He has experience of 7 years of Pakistan Study in chemistry field"<<endl;
									cout<<"\n\t=> If you want to back then press any key: ";
    								getch();
									system("cls");
									goto bake;
									break;
								}	
							}
						}
								case 6:
								{	
									goto kk;
									break;
								}
						case 2:
						{
							cout<<"=> There are total 525 students."<<endl;
							cout<<"=> You can take admission from class 6 grade to 12 grade here."<<endl;
							cout<<"=> There are 3 sections for each class"<<endl;
							cout<<"=> There are 25 students in each class."<<endl;
							cout<<"\n=> If you want to back then press any key: ";
    						getch();
							system("cls");
							goto km;
							break;
						}
						case 3:
						{
							cout<<"=> You will get here peace and clean environment."<<endl;
							cout<<"=> Our School is English institue."<<endl;
							cout<<"=> In our School your child will be intelligence and competator in all  fields."<<endl;
							cout<<"=> There will be sport week in every year."<<endl;
							cout<<"=> There will be tour for student in every year."<<endl;
							cout<<"\n=> If you want to back then press any key: ";
    						getch();
							system("cls");
							goto kn;
							break;
						}
						case 4:
						{
							cout<<"=> Schoool Starts at 8:00 A.M"<<endl;
							cout<<"=> School Ends at 2:00 P.M"<<endl;
							cout<<"\n=> If you want to back then press any key: ";
   							getch();
							system("cls");
							goto kn;
							break;
						}	
						case 5:
						{
							goto mn;
							break;		
						}
				}
				case 2:
				{
					s2.setData("Islamia Public Higher Secondary School Ratodero", "Shahid Hussain", "Tarique Ali","03076982021");
					s2.getData();
					cout<<"\n=> If you want to know more about it then press any key: ";
					getch();
					system("cls");
					moreInf();
					switch(s)
				{
					case 1:
					{
						backward:
						cout<<"=> There are 5 subject teachers."<<endl;
						cout<<"=> About whom do you want to know from the following: "<<endl;
						cout<<"1: Mathematics teachers"<<endl;
						cout<<"2: Physics teachers"<<endl;
						cout<<"3: Chemistry teachers"<<endl;
						cout<<"4: English teachers"<<endl;
						cout<<"5: General Subjects teachers"<<endl;
						cout<<"6: back"<<endl;
						cin>>t;
						system("cls");
						switch(t)
						{
							case 1:
					 		{
								cout<<"=> There are 2 teachers of Mathematics:\n"<<endl;
								cout<<"\t1: Sir Zameer Hussain Dayo"<<endl;
								cout<<"\t\t\tM.phil SALU"<<endl;
								cout<<"\t=> He has experience of 10 years of teaching in mathematics field\n"<<endl;
								cout<<"\t2: Sir Sajjad Ali Mahesar"<<endl;
								cout<<"\t\t\tB.Sc SALU"<<endl;
								cout<<"\t=> He has experience of 14 years of teaching in mathematics field"<<endl;
								cout<<"\n\t=> If you want to back then press any key: ";
    							getch();
								system("cls");
								goto backward;
								break;
							}
							case 2:
							{
								cout<<"=> There are 3 teachers of Physics:\n"<<endl;
								cout<<"\t1: Sir Ahmed Ali Soomro"<<endl;
								cout<<"\t\t\tM.phil SALU"<<endl;
								cout<<"\t=> He has experience of 5 years of teaching in physics field\n"<<endl;
								cout<<"\t2: Sir Sarfaraz Ali  Wadhio"<<endl;
								cout<<"\t\t\tB.Sc SALU"<<endl;
								cout<<"\t=> He has experience of 4 years of teaching in physics field"<<endl;
								cout<<"\t2: Sir Farman Ali  Wadhio"<<endl;
								cout<<"\t\t\tB.Sc GCU"<<endl;
								cout<<"\t=> He has experience of 3 years of teaching in physics field"<<endl;
								cout<<"\n\t=> If you want to back then press any key: ";
    							getch();
								system("cls");
								goto backward;
								break;
							}
							case 3:
							{
								cout<<"=> There are 3 teachers of Chemistry:\n"<<endl;
								cout<<"\t1: Sir Ali Ahmed Samejo"<<endl;
								cout<<"\t\t\tM.phil Sindh"<<endl;
								cout<<"\t=> He has experience of 6 years of teaching in chemistry field\n"<<endl;
								cout<<"\t2: Sir Siraj Ali  Wadhio"<<endl;
								cout<<"\t\t\tB.Sc SALU"<<endl;
								cout<<"\t=> He has experience of 7 years of teaching in chemistry field"<<endl;
								cout<<"\t2: Sir Sadam Ali  Wadhio"<<endl;
								cout<<"\t\t\tB.Sc KU"<<endl;
								cout<<"\t=> He has experience of 7 years of teaching in chemistry field"<<endl;
								cout<<"\n\t=> If you want to back then press any key: ";
   								getch();
								system("cls");
								goto backward;
								break;
							}
   							 case 4:
							{
								cout<<"=> There are 2 teachers of English:\n"<<endl;
								cout<<"\t1: Sir Farooq Fareed Samejo"<<endl;
								cout<<"\t\t\tPhd Sindh"<<endl;
								cout<<"\t=> He has experience of 8 years of teaching in English field\n"<<endl;
								cout<<"\t2: Sir Siraj Ali  Wadhio"<<endl;
								cout<<"\t\t\tM.phil QAU"<<endl;
								cout<<"\t=> He has experience of 5 years of teaching in English field"<<endl;
								cout<<"\n\t=> If you want to back then press any key: ";
    							getch();
								system("cls");
								goto backward;
								break;
							}	
							case 5:
							{
								cout<<"=> There are 5 teachers of General Subjects:\n"<<endl;
								cout<<"\t1: Sir Farooq Seelro"<<endl;
								cout<<"\t\t\tM.phil Sindh"<<endl;
								cout<<"\t=> He has experience of 6 years of teaching in Urdu field\n"<<endl;
								cout<<"\t2: Sir Shoaib Ali Thaheem"<<endl;
								cout<<"\t\t\tB.Sc SALU"<<endl;
								cout<<"\t=> He has experience of 4 years of teaching in Sindhi field"<<endl;
								cout<<"\t2: Sir Sadam Ali  Thaheem"<<endl;
								cout<<"\t\t\tB.Sc QAU"<<endl;
								cout<<"\t=> He has experience of 9 years of teaching in Pakistan Study field"<<endl;
								cout<<"\t1: Sir Kelash Kumar"<<endl;
								cout<<"\t\t\tM.phil Sindh"<<endl;
								cout<<"\t=> He has experience of 6 years of teaching in urdu field\n"<<endl;
								cout<<"\t2: Sir Zaheer Ahmed Chandio "<<endl;
								cout<<"\t\t\tB.Sc QAU"<<endl;
								cout<<"\t=> He has experience of 7 years of Pakistan Study in chemistry field"<<endl;
								cout<<"\n\t=> If you want to back then press any key: ";
   							    getch();
								system("cls");
								goto backward;
								break;
							}	
						}
					}
							case 6:
							{	
								goto kk;
								break;
							}
					case 2:
					{
						cout<<"=> There are total 300 students."<<endl;
						cout<<"=> You can take admission from class 6 grade to 10 grade here."<<endl;
						cout<<"=> There are 3 sections for each class"<<endl;
						cout<<"=> There are 20 students in each class."<<endl;
						cout<<"\n=> If you want to back then press any key: ";
   					    getch();
						system("cls");
						goto km;
						break;
					}
					case 3:
					{
						cout<<"=> You will get here peace and clean environment."<<endl;
						cout<<"=> Our School is English institue."<<endl;
						cout<<"=> In our School your child will be intelligence and competator in all  fields."<<endl;
						cout<<"=> There will be sport week in every year."<<endl;
						cout<<"=> There will be tour for student in every year."<<endl;
						cout<<"\n=> If you want to back then press any key: ";
   					    getch();
						system("cls");
						goto kn;
						break;
					}
					case 4:
					{
						cout<<"=> Schoool Starts at 8:00 A.M"<<endl;
						cout<<"=> School Ends at 1:30 P.M"<<endl;
						cout<<"\n=> If you want to back then press any key: ";
   						getch();
						system("cls");
						goto kn;
						break;
					}	
					case 5:
					{
						goto mn;
						break;		
					}
				}
			}
				case 3:
				{
					s3.setData("Muneer Public High School Ratodero", "Muneer Ali", "Aslam Ali","03076982021");
					s3.getData();
					cout<<"\n=>I f you want to know more about it then press then press any key: ";
					getch();
					system("cls");
					moreInf();
					switch(s)
					{
				 		case 1:
				 		{
							rv:
							cout<<"=> There are 5 subject teachers."<<endl;
							cout<<"=> About whom do you want to know from the following: "<<endl;
							cout<<"1: Mathematics teachers"<<endl;
							cout<<"2: Physics teachers"<<endl;
							cout<<"3: Chemistry teachers"<<endl;
							cout<<"4: English teachers"<<endl;
							cout<<"5: General Subjects teachers"<<endl;
							cout<<"6: back"<<endl;
							cin>>t;
							system("cls");
							switch(t)
						{
						case 1:
						{
							cout<<"=> There are 2 teachers of Mathematics:\n"<<endl;
							cout<<"\t1: Sir Zameer Hussain Dayo"<<endl;
							cout<<"\t\t\tM.phil SALU"<<endl;
							cout<<"\t=> He has experience of 10 years of teaching in mathematics field\n"<<endl;
							cout<<"\t2: Sir Sajjad Ali Mahesar"<<endl;
							cout<<"\t\t\tB.Sc SALU"<<endl;
							cout<<"\t=> He has experience of 14 years of teaching in mathematics field"<<endl;
							cout<<"\n\t=> If you want to back then press any key: ";
    						getch();
							system("cls");
							goto rv;
							break;
						}
						case 2:
						{
							cout<<"=> There are 3 teachers of Physics:\n"<<endl;
							cout<<"\t1: Sir Ahmed Ali Soomro"<<endl;
							cout<<"\t\t\tM.phil SALU"<<endl;
							cout<<"\t=> He has experience of 5 years of teaching in physics field\n"<<endl;
							cout<<"\t2: Sir Sarfaraz Ali  Wadhio"<<endl;
							cout<<"\t\t\tB.Sc SALU"<<endl;
							cout<<"\t=> He has experience of 4 years of teaching in physics field"<<endl;
							cout<<"\t2: Sir Farman Ali  Wadhio"<<endl;
							cout<<"\t\t\tB.Sc GCU"<<endl;
							cout<<"\t=> He has experience of 3 years of teaching in physics field"<<endl;
							cout<<"\n\t=> If you want to back then press any key: ";
  							getch();
							system("cls");
							goto rv;
							break;
						}
						case 3:
						{
							cout<<"=> There are 3 teachers of Chemistry:\n"<<endl;
							cout<<"\t1: Sir Ali Ahmed Samejo"<<endl;
							cout<<"\t\t\tM.phil Sindh"<<endl;
							cout<<"\t=> He has experience of 6 years of teaching in chemistry field\n"<<endl;
							cout<<"\t2: Sir Siraj Ali  Wadhio"<<endl;
							cout<<"\t\t\tB.Sc SALU"<<endl;
							cout<<"\t=> He has experience of 7 years of teaching in chemistry field"<<endl;
							cout<<"\t2: Sir Sadam Ali  Wadhio"<<endl;
							cout<<"\t\t\tB.Sc KU"<<endl;
							cout<<"\t=> He has experience of 7 years of teaching in chemistry field"<<endl;
							cout<<"\n\t=> If you want to back then press any key: ";
    						getch();
							system("cls");
							goto rv;							
							break;
						}
   				   		case 4:
						{
							cout<<"=> There are 2 teachers of English:\n"<<endl;
							cout<<"\t1: Sir Farooq Fareed Samejo"<<endl;
							cout<<"\t\t\tPhd Sindh"<<endl;
							cout<<"\t=> He has experience of 8 years of teaching in English field\n"<<endl;
							cout<<"\t2: Sir Siraj Ali  Wadhio"<<endl;
							cout<<"\t\t\tM.phil QAU"<<endl;
							cout<<"\t=> He has experience of 5 years of teaching in English field"<<endl;
							cout<<"\n\t=> If you want to back then press any key: ";
   							getch();
							system("cls");
							goto rv;
							break;
						}	
						case 5:
						{
							cout<<"=> There are 5 teachers of General Subjects:\n"<<endl;
							cout<<"\t1: Sir Farooq Seelro"<<endl;
							cout<<"\t\t\tM.phil Sindh"<<endl;
							cout<<"\t=> He has experience of 6 years of teaching in Urdu field\n"<<endl;
							cout<<"\t2: Sir Shoaib Ali Thaheem"<<endl;
							cout<<"\t\t\tB.Sc SALU"<<endl;
							cout<<"\t=> He has experience of 4 years of teaching in Sindhi field"<<endl;
							cout<<"\t2: Sir Sadam Ali  Thaheem"<<endl;
							cout<<"\t\t\tB.Sc QAU"<<endl;
							cout<<"\t=> He has experience of 9 years of teaching in Pakistan Study field"<<endl;
							cout<<"\t1: Sir Kelash Kumar"<<endl;
							cout<<"\t\t\tM.phil Sindh"<<endl;
							cout<<"\t=> He has experience of 6 years of teaching in urdu field\n"<<endl;
							cout<<"\t2: Sir Zaheer Ahmed Chandio "<<endl;
							cout<<"\t\t\tB.Sc QAU"<<endl;
							cout<<"\t=> He has experience of 7 years of Pakistan Study in chemistry field"<<endl;
							cout<<"\n\t=> If you want to back then press any key: ";
   							getch();
							system("cls");
							goto rv;
							break;
						}	
					}
				}
						case 6:
						{	
							goto kk;
							break;
						}
				case 2:
				{
					cout<<"=> There are total 270 students."<<endl;
					cout<<"=> You can take admission from class 6 grade to 8 grade here."<<endl;
					cout<<"=> There are 3 sections for each class"<<endl;
					cout<<"=> There are 30 students in each class."<<endl;
					cout<<"\n=> If you want to back then press any key: ";
   					getch();
					system("cls");
					goto km;
					break;
				}
				case 3:
				{
					cout<<"=> You will get here peace and clean environment."<<endl;
					cout<<"=> Our School is English institue."<<endl;
					cout<<"=> In our School your child will be intelligence and competator in all  fields."<<endl;
					cout<<"=> There will be sport week in every year."<<endl;
					cout<<"=> There will be tour for student in every year."<<endl;
					cout<<"\n=> If you want to back then press any key: ";
    				getch();
					system("cls");
					goto kn;
					break;
				}
				case 4:
				{
					cout<<"=> Schoool Starts at 9:00 A.M"<<endl;
					cout<<"=> School Ends at 2:00 P.M"<<endl;
					cout<<"\n=> If you want to back then press any key: ";
   					getch();
					system("cls");
					goto kn;
					break;
				}	
				case 5:
				{
					goto mn;
					break;		
				}
			}
		}
		default:
			{  
				cout<<"=> Sorry we have'nt information:"<<endl;
				cout<<"\n=> If you want to back then press any key: ";
    			getch();
				system("cls");
				goto reverse;
				break;
			}
		}
    }
	}
	else
	{	
		system("cls");
		cout<<"=> Sorry you entered a wrong password:"<<endl;
		cout<<"=> Do you want to try again then press any key:"<<endl;
		cout<<"=> If yes then you password is (abu)";
		getch();
		system("cls");
		goto again;
	}
return 0;
}
