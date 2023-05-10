#include<iostream>
#include<string.h>
using namespace std;
void menu();
void Samsung();
void Apple();
void Huawei();
void Infinix();
void Oppo();
void Vivo();
void TECNO();
void Nokia();
void HTC();
void LG();
int main()
{
	cout<<"\t\t================="<<endl;
	cout<<"\t\t================="<<endl;
	cout<<"\t\t W E L C O M E "<<endl;
	cout<<"\t\t================="<<endl;
	cout<<"\t\t================="<<endl;
	menu();
	int choice;
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			Samsung();
			break;
		case 2:
			system("cls");
			Apple();
			break;
		case 3:
			system("cls");
			Huawei();
			break;
		case 4:
			system("cls");
			Infinix();
			break;
		case 5:
			system("cls");
			Oppo();
			break;
		case 6:
			system("cls");
			Vivo();
			break;
		case 7:
			system("cls");	
			TECNO();
			break;
		case 8:
			system("cls");
			Nokia();
			break;
		case 9:
			system("cls");
			HTC();
			break;
		case 10:
			system("cls");
			LG();
			break;
	}
	system("pause");
}
void menu(){
	cout<<"\t\t================="<<endl;
	cout<<"\t\t=====M E N U====="<<endl;
	cout<<"\t\t1.  SAMSUNG "<<endl;
	cout<<"\t\t2.  APPLE   "<<endl;
	cout<<"\t\t3.  HUAWEI  "<<endl;
	cout<<"\t\t4.  INFINX  "<<endl;
	cout<<"\t\t5.  OPPO    "<<endl;
	cout<<"\t\t6.  VIVO    "<<endl;
	cout<<"\t\t7.  TECNO   "<<endl;
	cout<<"\t\t8.  NOKIA   "<<endl;
	cout<<"\t\t9.  HTC     "<<endl;
	cout<<"\t\t10. LG      "<<endl;
	cout<<"\t\t================="<<endl;
	
}
void Samsung()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
void Apple()
{
	int s;
	char m;
	cout<<"Enter Series and Model of Iphone "<<endl;
	cin>>s>>m;
	cout<<"COMPANY\tSERIES\tMODEL\tRAM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tCOLOR\tPRICE"<<endl;
	switch(s)
	{
		case 6:
			if(m=='s+' || m=='S+'){
			cout<<"IPHONE\t6\tS-PLUS\t2GB\t16GB\t2750mAh\t12MP\t\t5MP\t\tBLACK\t 25,999PKR"<<endl;
			cout<<"IPHONE\t6\tS-PLUS\t2GB\t32GB\t2750mAh\t12MP\t\t5MP\t\tBLACK\t 27,999PKR"<<endl;
			cout<<"IPHONE\t6\tS-PLUS\t2GB\t64GB\t2750mAh\t12MP\t\t5MP\t\tBLACK\t 30,999PKR"<<endl;
			cout<<"IPHONE\t6\tS-PLUS\t2GB\t128GB\t2750mAh\t12MP\t\t5MP\t\tBLACK\t 35,999PKR"<<endl;
			}
			if(m=='s' || m=='S')
			{
			cout<<"IPHONE\t6\tS\t2GB\t16GB\t1715mAh\t12MP\t\t5MP\t\tBLACK\t 22,999PKR"<<endl;
			cout<<"IPHONE\t6\tS\t2GB\t32GB\t1715mAh\t12MP\t\t5MP\t\tBLACK\t 24,999PKR"<<endl;
			cout<<"IPHONE\t6\tS\t2GB\t64GB\t1715mAh\t12MP\t\t5MP\t\tBLACK\t 26,499PKR"<<endl;
			cout<<"IPHONE\t6\tS\t2GB\t128GB\t1715mAh\t12MP\t\t5MP\t\tBLACK\t 31,499PKR"<<endl;
			}
			else
			{
			cout<<"IPHONE\t6\t-\t1GB\t16GB\t1810mAh\t8MP\t\t1.2MP\t\tGRAY\t 14,000PKR"<<endl;
			cout<<"IPHONE\t6\t-\t1GB\t32GB\t1810mAh\t8MP\t\t1.2MP\t\tGOLDEN\t 17,000PKR"<<endl;
			cout<<"IPHONE\t6\t-\t1GB\t64GB\t1810mAh\t8MP\t\t1.2MP\t\tGRAY\t 20,000PKR"<<endl;
			cout<<"IPHONE\t6\t-\t1GB\t128GB\t1810mAh\t8MP\t\t1.2MP\t\tGOLDEN\t 24,000PKR"<<endl;
			}
			break;
			case 7:
			if(m=='+'){
			cout<<"IPHONE\t7\tPLUS\t3GB\t32GB\t2900mAh\t12MP\t\t7MP\t\tBLACK\t 38,499PKR"<<endl;
			cout<<"IPHONE\t7\tPLUS\t3GB\t128GB\t2900mAh\t12MP\t\t7MP\t\tBLACK\t 44,999PKR"<<endl;
			cout<<"IPHONE\t7\tPLUS\t3GB\t256GB\t2900mAh\t12MP\t\t7MP\t\tBLACK\t 60,999PKR"<<endl;
			}
			else
			{
			cout<<"IPHONE\t7\t-\t2GB\t32GB\t1960mAh\t12MP\t\t7MP\t\tBLACK\t 33,999PKR"<<endl;
			cout<<"IPHONE\t7\t-\t2GB\t128GB\t1960mAh\t12MP\t\t7MP\t\tBLACK\t 40,999PKR"<<endl;
			cout<<"IPHONE\t7\t-\t2GB\t256GB\t1960mAh\t12MP\t\t7MP\t\tBLACK\t 45,999PKR"<<endl;
			}
			break;
			case 8:
			if(m=='+'){
			cout<<"IPHONE\t8\tPLUS\t3GB\t64GB\t2691mAh\t12MP\t\t7MP\t\tBLACK\t 67,999PKR"<<endl;
			cout<<"IPHONE\t8\tPLUS\t3GB\t128GB\t2691mAh\t12MP\t\t7MP\t\tBLACK\t 70,999PKR"<<endl;
			cout<<"IPHONE\t8\tPLUS\t3GB\t256GB\t2691mAh\t12MP\t\t7MP\t\tBLACK\t 75,999PKR"<<endl;
			}
			else
			{
			cout<<"IPHONE\t8\t-\t2GB\t64GB\t1821mAh\t12MP\t\t7MP\t\tBLACK\t 59,999PKR"<<endl;
			cout<<"IPHONE\t8\t-\t2GB\t128GB\t1821mAh\t12MP\t\t7MP\t\tBLACK\t 65,999PKR"<<endl;
			cout<<"IPHONE\t8\t-\t2GB\t256GB\t1821mAh\t12MP\t\t7MP\t\tBLACK\t 69,999PKR"<<endl;
			}
			break;
	}
}
void Huawei()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
void Infinix()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
void Oppo()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
void Vivo()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
void TECNO()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
void Nokia()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
void HTC()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
void LG()
{
	cout<<"COMPANY\t\tSERIES\tMODEL\tRAM\tROM\tSTORAGE\tBATTERY\tBACK-CAMERA\tFRONT-CAMERA\tPRICE"<<endl;
}
