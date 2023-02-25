#include <iostream>
using namespace std;

//benh nhan noi tru
void Inpatient(){
int days_in_hospital,day_cost,medication_total_cost,services_cost,total;
cout << "!!! Tinh chi phi benh nhan noi tru !!!" << endl;
    cout << "So ngay nam vien: "; cin >> days_in_hospital;
    if(days_in_hospital > 0){
cout << "Phi nam vien moi ngay: "; cin >> day_cost;
if(day_cost > 0){
    cout << "Tong chi phi thuoc: "; cin >> medication_total_cost;
    if(medication_total_cost > 0){
    cout << "Tong chi phi dich vu (xet nghiem,vv): "; cin >> services_cost;
total=(days_in_hospital*day_cost)+medication_total_cost+services_cost;
cout << "Tong chi phi : " << total << endl;
}
}
}
if(days_in_hospital < 0 || day_cost < 0 || medication_total_cost < 0 || services_cost < 0){
cout << "Loi, so phai lon hon 0 !" << endl;
}

}

//benh nhan ngoai tru
void Outpatient(){
int medication_total_cost,services_cost,total;
cout << "!!! Tinh chi phi benh nhan ngoai tru !!!" << endl;
cout << "Tong chi phi thuoc: "; cin >> medication_total_cost;
if(medication_total_cost > 0){
    cout << "Tong chi phi dich vu (xet nghiem,vv): "; cin >> services_cost;
    if(services_cost > 0){
        total=medication_total_cost+services_cost;
cout << "Tong chi phi : " << total << endl;
    }
}

if(medication_total_cost < 0 || services_cost < 0){
cout << "Loi, so phai lon hon 0 !" << endl;
}
}

int main() 
{
   int patient_type;
   while(true){
    cout << "Benh nhan noi tru / ngoai tru (1 / 2) : ";
   cin >> patient_type;
   switch (patient_type)
{
    case 1:
    {
        Inpatient();
        break;
    }
    case 2:
    {
        Outpatient();
        break;
    }
    default:
    {
      cout << "Khong hop le" << endl;
    }
}
   }
}