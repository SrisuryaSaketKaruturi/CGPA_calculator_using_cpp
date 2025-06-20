
## CGPA CALCULATOR


## Overview
This project is a simple yet functional CGPA (Cumulative Grade Point Average) Calculator built using C++. It allows students to input their academic performance data semester-by-semester, including subject names, grades, and credit hours. The program calculates both semester-wise GPA and the final CGPA, and presents a detailed academic report.

## Introduction
In educational institutions, tracking a student's performance over time is critical for measuring academic growth, identifying areas of improvement, and making informed decisions about scholarships, placements, or further studies. Among the most widely used metrics for this are GPA (Grade Point Average) and CGPA (Cumulative Grade Point Average).Calculating them semester-by-semester can become tedious, especially as course loads increase. This project addresses that problem by automating GPA and CGPA computation through a simple yet effective C++ application. It leverages basic data structures and control flow to provide a user-friendly experience, making it an ideal example of how programming can simplify real-world tasks for students and educators alike.

## Important parts of the program

1.Variables Used and  their functions
| Variable Name        | Type     | Description                                                   |
| -------------------- | -------- | ------------------------------------------------------------- |
| `a`                  | `int`    | Max number of semesters (set to 10)                           |
| `b`                  | `int`    | Max number of subjects per semester (set to 10)               |
| `subject_name[a][b]` | `string` | Stores subject names for each semester and subject            |
| `grade[a][b]`        | `int`    | Stores grade points per subject                               |
| `credit_hours[a][b]` | `int`    | Stores credit hours per subject                               |
| `sem_gpa[a]`         | `float`  | Stores GPA for each semester                                  |
| `sub_num[a]`         | `int`    | Stores number of subjects in each semester                    |
| `gradepoint`         | `int`    | Temporarily stores the calculated grade point for one subject |
| `totalgradepoint`    | `int`    | Sum of all grade points across semesters (for CGPA)           |
| `totalcredit`        | `int`    | Sum of all credit hours across semesters (for CGPA)           |
| `student_name`       | `string` | Stores the student’s full name                                |
| `semester_num`       | `int`    | Number of semesters entered by the user                       |
| `semgradepoint`      | `int`    | Total grade points for one semester                           |
| `semcredit`          | `int`    | Total credit hours for one semester                           |
| `final_cgpa`         | `float`  | The final computed CGPA                                       |


2.Input of Name and Number of semester.

    string student_name;
    cout<<"enter student name:";
    cin.ignore();
    getline(cin,student_name);


    int semester_num;
    cout<<"enter no.of semester:";
    cin>>semester_num;


3. Input and Storing number of subjects,subject name,grade and credit hours for each semster in a 2-D array.Calculation of the Semester GPA

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

4..Calculation of final CGPA and display of semester wise deatails,Semester GPA and Final CGPA by accesing a 2-D array.

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



## Sample output

    enter student name:Saket Karuturi
    enter no.of semester:2
    Semester 1 :
    enter no.of subjects:3
    enter subject 1 name:Mathematics
    Enter grade:8
    Enter credit hours:4
    enter subject 2 name:English
    Enter grade:9
    Enter credit hours:3
    enter subject 3 name:Chemistry
    Enter grade:7
    Enter credit hours:4
    Semester 2 :
    enter no.of subjects:2
    enter subject 1 name:Physics
    Enter grade:10
    Enter credit hours:4
    enter subject 2 name:Computer Science
    Enter grade:9
    Enter credit hours:3


    ----REPORT---

    Student Name:Saket Karuturi
    --SEMESTER 1--
    Subject 1 :Mathematics   Grade:8   Credit hours:4
    Subject 2 :English   Grade:9   Credit hours:3
    Subject 3 :Chemistry   Grade:7   Credit hours:4
    Semester GPA:7.90909

    --SEMESTER 2--
    Subject 1 :Physics   Grade:10   Credit hours:4
    Subject 2 :Computer Science   Grade:9   Credit hours:3
    Semester GPA:9.57143

    CGPA:8.55556






