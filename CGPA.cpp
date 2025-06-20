#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int b=10;
    string subject_name[a][b];
    int grade[a][b];
    int credit_hours[a][b];
    float sem_gpa[a];
    int sub_num[a];
    int gradepoint;
    int totalgradepoint=0;
    int totalcredit=0;

    string student_name;
    cout<<"enter student name:";
    cin.ignore();
    getline(cin,student_name);


    int semester_num;
    cout<<"enter no.of semester:";
    cin>>semester_num;

    for(int i=0;i<semester_num;i++)
    {
        int semgradepoint=0;
        int semcredit=0;
        cout<<"Semester "<<(i+1)<<" :"<<endl;

        cout<<"enter no.of subjects:";
        cin>>sub_num[i];

        for(int j=0;j<sub_num[i];j++)
        {
            cout<<"enter subject "<<(j+1)<<" name:";
            cin.ignore();
            getline(cin,subject_name[i][j]);

            cout<<"Enter grade:";
            cin>>grade[i][j];

            cout<<"Enter credit hours:";
            cin>>credit_hours[i][j];

            gradepoint= (grade[i][j])*(credit_hours[i][j]);
            semgradepoint+=gradepoint;
            semcredit+=credit_hours[i][j];

        }
        sem_gpa[i]=(float)(semgradepoint)/(semcredit);
        totalcredit+=semcredit;
        totalgradepoint+=semgradepoint;

    }

    cout<<endl<<endl;
    cout<<"----REPORT---"<<endl<<endl;
    cout<<"Student Name:"<<student_name<<endl;
    for(int i=0;i<semester_num;i++)
    {
        cout<<"--SEMESTER "<<(i+1)<<"--"<<endl;
        for(int j=0;j<sub_num[i];j++)
        {
            cout<<"Subject "<<(j+1)<<" :"<<subject_name[i][j]<<"   Grade:"<<grade[i][j]<<"   Credit hours:"<<credit_hours[i][j]<<endl;

        }
        cout<<"Semester GPA:"<<sem_gpa[i]<<endl<<endl;
        
    }
    float final_cgpa=(float)(totalgradepoint)/(totalcredit);
    cout<<"CGPA:"<<final_cgpa<<endl;

}





