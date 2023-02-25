#include <iostream>
#include <fstream> 
using namespace std;

int totalCost(int patient_type){
    int days_in_hospital = 0,day_cost = 0,medication_total_cost = 0,services_cost = 0,total;
    fstream output;
    output.open(".\\output.txt");
     if(!output.fail()){
switch (patient_type)
{
    case 1:
    {
              cout << "!!! Tinh chi phi benh nhan noi tru !!!" << endl;
    cout << "So ngay nam vien: "; cin >> days_in_hospital;
        cout << "Phi nam vien moi ngay: "; cin >> day_cost;
             cout << "Tong chi phi thuoc: "; cin >> medication_total_cost;
                cout << "Tong chi phi dich vu (xet nghiem,vv): "; cin >> services_cost;
                    total=(days_in_hospital*day_cost)+medication_total_cost+services_cost;

                    output << "!!! Tinh chi phi benh nhan noi tru !!!" << endl;
                    output << "So ngay nam vien: " << days_in_hospital  << endl;
                    output << "Phi nam vien moi ngay: " << day_cost  << endl;
             output << "Tong chi phi thuoc: " << medication_total_cost << endl;
                output << "Tong chi phi dich vu (xet nghiem,vv): " << services_cost << endl;
                output << "Tong tat ca chi phi : " << total;
        break;
    }
    case 2:
    {
       cout << "!!! Tinh chi phi benh nhan ngoai tru !!!" << endl;
cout << "Tong chi phi thuoc: "; cin >> medication_total_cost;
    cout << "Tong chi phi dich vu (xet nghiem,vv): "; cin >> services_cost;
        total=medication_total_cost+services_cost;

        output << "!!! Tinh chi phi benh nhan ngoai tru !!!" << endl;
             output << "Tong chi phi thuoc: " << medication_total_cost << endl;
                output << "Tong chi phi dich vu (xet nghiem,vv): " << services_cost << endl;
                output << "Tong tat ca chi phi : " << total;
        break;
    }
    default:
    {
      cout << "Khong hop le" << endl;
    }
}
     }else{
cout << "error";
     }

 if(day_cost < 0 || days_in_hospital < 0 || medication_total_cost < 0 || services_cost < 0){
    cout << "Error, gia tri phai lon hon 0 !!" << endl;
    total = 0;
 }
  return total;
}

int main() 
{
   int patient_type;
   while(true){
    cout << "\nBenh nhan noi tru / ngoai tru (1 / 2) : ";
   cin >> patient_type;
  cout << "Tong chi phi : " << totalCost(patient_type) << endl;;
   }
}