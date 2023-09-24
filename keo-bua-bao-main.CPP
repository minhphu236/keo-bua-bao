#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    while (true)
    {
        srand(time(0));
        string hienthi;
        int may, luachon;
        cout<<"1.KEO (scissors)"<<endl;
        cout<<"2.DA  (stone)"<<endl;
        cout<<"3.GIAY(paper)"<<endl;
        cout<<"nhap lua chon cua ban : ";
        cin>>luachon;
        may = rand() % 3 + 1;
        if (luachon == 1)
            hienthi = "KEO";
        if (luachon == 2)
            hienthi = "DA";
        if (luachon == 3)
            hienthi = "GIAY";
        if (may == 1)
            cout<<"BAN : "<<hienthi<<" - MAY : KEO"<<endl;
        if (may == 2)
            cout<<"BAN : "<<hienthi<<" - MAY : DA"<<endl;
        if (may == 3)
            cout<<"BAN : "<<hienthi<<" - MAY : GIAY"<<endl;
        cout<<"KET QUA BAN : ";
        switch(luachon)
        {
        case 1:
            if (may == 1)
                cout<<"HOA"<<endl;
            if (may == 2)
                cout<<"THUA"<<endl;
            if (may == 3)
                cout<<"THANG"<<endl;
            break;
        case 2:
            if (may == 1)
                cout<<"THANG"<<endl;
            if (may == 2)
                cout<<"HOA"<<endl;
            if (may == 3)
                cout<<"THUA"<<endl;
            break;
        case 3:
            if (may == 1)
                cout<<"THUA"<<endl;
            if (may == 2)
                cout<<"THANG"<<endl;
            if (may == 3)
                cout<<"HOA"<<endl;
            break;
        default:
            exit(0);
            break;
        }
        getch();
        system("cls");
    }
    getch();
    return 0;
}
