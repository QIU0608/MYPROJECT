//Copyright 2008 Google Inc

//BSD

//��1703-1 ���Ǻ� 20170608

//��data.h����ľ��幦�ܽ���ʵ�֣�ע�ͼ�������

#include "ʱ����/date.h"
#include <iostream>
using namespace std;
Date::Date()   //�����޲κ�������ֵ
{
	year=0;
	month=0;
	day=0;
}
Date::Date(int y,int m,int d) //��ֵ
{
	year=y;
	month=m;
	day=d;
}
Date:: ~Date()  // ������������
{
cout << "��������������" << endl;
}

//��ȡ����ֵ

void Date::SetYear(int y)  
{
	year=y;
}
void Date::SetMonth(int m)
{
	month=m;
}
void Date::SetDay(int d)
{
	day=d;
}

//���ز���ֵ

int Date::GetYear()  
{
	return year;
}
int Date::GetMonth()  
{
	return month;
}
int Date::GetDay()
{
	return day;
}
bool Date::Isleapyear()  //��ݳ���400����0Ϊ�棬����Ϊ��
{
	bool isleapyear=false;
	if(year%400==0)
		isleapyear=true;
	if(year%400!=0&&year%4==0)
		isleapyear=true;
	return isleapyear;
}

//�����������1.�������һ�죬����Ϊ�·ݼ�һ������Ϊ1
//2.���Ǳ������һ�죬�·ݲ��䣬������һ

void Date::GetTomorrow()
{
//��if���ʵ��
	if(month==1&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==3&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==5&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==7&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==8&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==10&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==12&&day<31) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(isleapyear()==true&&month==2&&day<29) 
		cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
    if(isleapyear()==false&&month==2&&day<28) 
		cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==4&&day<30) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==6&&day<30) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==9&&day<30) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;
	if(month==11&&day<30) cout<<"Tomorrow is:"<<year<<"  "<<month<< "  "<<day+1<<endl;

	if(month==1&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==3&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==5&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==7&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==8&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==10&&day==31) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(isleapyear()==true&&month==2&&day==29) 
		cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(isleapyear()==false&&month==2&&day==28) 
		cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==4&&day==30) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==6&&day==30) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==9&&day==30) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==11&&day==30) cout<<"Tomorrow is:"<<year<<"  "<<month+1<<"  "<<"1"<<endl;
	if(month==12&&day==31) cout<<"Tomorrow is:"<<year+1<<"  1"<<"  1"<<endl;
}

//�����������1.���µ�һ�죬ǰһ��Ϊ�·ݼ�һ������Ϊ�·ݵ��������
//2.���Ǳ��µ�һ�죬�·ݲ��䣬���� ��һ

void Date::GetYesterday()
{
	if(month==1&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==3&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==5&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==7&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==8&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==10&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==12&&(day<31&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(isleapyear()==true&&month==2&&(day<29&&day>1)) 
		cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
    if(isleapyear()==false&&month==2&&(day<28&&day>1)) 
		cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==4&&(day<30&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==6&&(day<30&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==9&&(day<30&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;
	if(month==11&&(day<30&&day>1)) cout<<"Yesterday is:"<<year<<"  "<<month<< "  "<<day-1<<endl;

	if(month==1&&day==1) cout<<"Yesterday is:"<<year-1<<"  "<<"12"<<"  "<<"31"<<endl;
	if(month==2&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==5&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"30"<<endl;
	if(month==7&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"30"<<endl;
	if(month==8&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"30"<<endl;
	if(month==10&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"30"<<endl;
	if(isleapyear()==true&&month==3&&day==1) 
		cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"29"<<endl;
	if(isleapyear()==false&&month==3&&day==1)
		cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"28"<<endl;
	if(month==4&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==6&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==9&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==11&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  "<<"31"<<endl;
	if(month==12&&day==1) cout<<"Yesterday is:"<<year<<"  "<<month-1<<"  30"<<endl;
}

//�·������31�죬����4,6,9��11���ܳ���30�죬
//2�����겻�ܳ���29��ƽ�겻����28
//�·�ֻ����1��12
void Date::ErrorInput()
{
	if(month<1||month>12) cout<<"input error"<<endl;
	if(day<1) cout<<"input error"<<endl;
	if(month==1&&day>31) cout<<"input error"<<endl;
	if(month==3&&day>31) cout<<"input error"<<endl;
	if(month==5&&day>31) cout<<"input error"<<endl;
	if(month==7&&day>31) cout<<"input error"<<endl;
	if(month==8&&day>31) cout<<"input error"<<endl;
	if(month==10&&day>31) cout<<"input error"<<endl;
	if(month==12&&day>31) cout<<"input error"<<endl;
	if(isleapyear()==true&&month==2&&day>29) 
		cout<<"input error"<<endl;
    if(isleapyear()==false&&month==2&&day>28) 
		cout<<"input error"<<endl;
	if(month==4&&day>30) cout<<"input error"<<endl;
	if(month==6&&day>30) cout<<"input error"<<endl;
	if(month==9&&day>30) cout<<"input error"<<endl;
	if(month==11&&day>30) cout<<"input error"<<endl;
}

//�����������

void Date::DisplayChineseDate()
{
	cout<<year<<"��"<<month<<"��"<<day<<"��"<<endl;
}

//���Ӣ������
void Date::DisplayAmericaDate()
{
	if(month=1) 
		cout<<"January"<<day<<","<<year<<endl;
	else if(month=2) 
		cout<<"February"<<day<<","<<year<<endl;
	else if(month=3) 
		cout<<"March"<<day<<","<<year<<endl;
	else if(month=4) 
		cout<<"April"<<day<<","<<year<<endl;
	else if(month=5) 
		cout<<"May"<<day<<","<<year<<endl;
	else if(month=6) 
		cout<<"June"<<day<<","<<year<<endl;
	else if(month=7) 
		cout<<"July"<<day<<","<<year<<endl;
	else if(month=8) 
		cout<<"August"<<day<<","<<year<<endl;
	else if(month=9) 
		cout<<"September"<<day<<","<<year<<endl;
	else if(month=10) 
		cout<<"October"<<day<<","<<year<<endl;
	else if(month=11) 
		cout<<"November"<<day<<","<<year<<endl;
	else if(month=12) 
		cout<<"December"<<day<<","<<year<<endl;
}

//����Ƿ�Ϊ����

void Date::Leapyear()
{
	if(isleapyear()==true)  cout<<"����������"<<endl;
	else cout<<"���겻������"<<endl;
}

//��ķ����ɭ���㹫ʽ���ĳ�����ڼ�

void Date::NumbersOfWeek()
{
	int w;
	w=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
	if(w==0)
		cout<<year<<"��"<<month<<"��"<<day<<"��"<<"��������"<<endl;
	else
		cout <<year<<"��"<<month<<"��"<<day<<"��"<<"����������"<<w<<endl;
}
//���������Ϣ

void Date::PrintCalendar()
{
	int i,j,l=1,d=1,a;
	j=(day+2*month+3*(month+1)/5+year+year/4-year/100+year/400+1)%7;
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			a=31;
		else if (month==4||month==6||month==9||month==11) 
			a=30;
		else if (isleapyear()==true&&month==2) 
			a=29;	
		else if (isleapyear()==false&&month==2)
			a=28;
	//ѭ�����������Ϣ
	cout<<"*********************************"<<endl;
	cout<<"sun  mon  tue  wed  thu  fri  sta"<<endl;
	for(i=0;i<=j;i++)
	{
		cout<<"     ";
		l=l+1;
	}
	for(d=1;d<=a;d++)
	{
		cout<<d<<"   ";
		l=l+1;
		if(l==8)
		{
			cout<<"\n";
		    l=1;
		}
	}
	cout<<"\n"<<"*********************************"<<endl;
}
//�����������Ը������������Ƿ�ʵ��
int main(void)
{
	int y,m,d;
	Date date;
	cout<<"please input date :";
	cin>>y>>m>>d;  //����ֵ
	//���ø�������
	date.setYear(y);
	date.setMonth(m);
	date.setDay(d);
	date.getTomorrow();
	date.getYesterday();
	date.error();
	date.displayChineseDate();
	date.displayAmericaDate();
	date.leapyear();
	date.numbersOfWeek();
	date.printCalendar();
	return 0;
}