//C++ Primer Plus �κ�ϰ�� p33 2.7 
// by itAir
// Try to use Google C++ programing style

// dir2/foo2.h������λ�ã��������£�
//C ϵͳ�ļ�
//	C++ϵͳ�ļ�
//	������ͷ�ļ�
//	����Ŀ��ͷ�ļ�

#include "try.h"
#include <iostream>
//#include <string>

using namespace std;

void OutLine_1(){
	cout<<"Three blind mice\n";
}
void OutLine_2(){
	cout<<"See how they run\n";
}

double CtoF(double temp_c){
	double temp_f;
	temp_f = temp_c * 1.8 + 32.0;
	return temp_f;
}

int LightYears_to_AstronomicalUnits(double ly){
	int auu;
	auu = static_cast<int>(ly * 63240);
	return auu;
}

void OutputTime(int h, int m){
	int m1,m2;
	m1= m / 10;
	m2= m % 10;
	cout<< "Time: "<< h<<":"<< m1<<m2<<endl;
}

void main(void){
	
	cout<< "C++_Primer_Plus p33 2.7 "<<endl;
	cout<<"   by itAir"<<endl;	
	cout<<"Hello World!"<<endl;
	cout<<"_________________________________"<<endl<<endl;	

	//1.
	char name[20];
	char address[40];
	cout<<"Please input your name : ";
	cin.getline(name,20);
	cout<<"Please input your address in 40 letters and terminated by carriage return\n";
	cin.getline(address,40);		
	cout<<endl<<"Your individual informations are: "<<endl
		<<"Name: "<<name<<endl<<"Address: "<<address<<endl;	
	// ע��cin.getline ���÷� 
	cout<<"_________________________________"<<endl<<endl;	

	//2.
	double lang, yard;
	const double rate = 220.0;
	cout<<"Input a length as unit of LANG."<<endl;
	cin>>lang;
	yard = rate * lang;
	cout<<"The length is "<<yard<<" yards"<<endl;
	//ע�� const ���÷� 
	cout<<"_________________________________"<<endl<<endl;	

		//3
	OutLine_1();
	OutLine_1();
	OutLine_2();
	OutLine_2();
	cout<<"_________________________________"<<endl<<endl;	
	// ȫ�ֺ������� ���� try.h ��

		//4
	double tem_C,tem_F;
	cout<< "Please enter a Celsius value: ";
	cin>>tem_C;
	tem_F= CtoF(tem_C);
	cout<< tem_C <<" degrees Celsius is "<<tem_F<<" degrees Fahrenheit.\n";
	//������ֵ�ĺ��� �˷�����Ĭ���� double
	cout<<"_________________________________"<<endl<<endl;	
	
	//5
	double ly;
	cout<< "Enter a number of light years: ";
	cin >>ly;
	int au =  LightYears_to_AstronomicalUnits(ly);
	cout<< ly << " light years = "<< au <<" astronomical units\n";
	//static_cast �� dymamic_cast ������ ��Ӧ�ù�
	cout<<"_________________________________"<<endl<<endl;	
	
	//6
	int h,m;
	cout<< "Enter the number of hours:";
	cin>>h;
	cout << "Enter the number of minutes:";
	cin >>m;
	OutputTime(h,m);
	cout<<"_________________________________"<<endl<<endl;	
	//�����ʽ �޶�

	system("pause");
// return 1;
}