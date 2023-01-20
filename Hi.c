#include <stdio.h>
#include <string.h>

//function declarations
int infopage();
int login();
int menu();
int home();
int aboutus();
int portfolio();
int personaldetails();
int educationdetails();

char admin[9], ncp[11];
char fname[25], mname[25], lname[25], dob[10], age[2], gender[15], nationality[25], religion[20], caste[25], mother_tongue[20], profession[25], hobbies[50], mobile_number[10], email_id[50], address[200], state[20], pincode[10], country[50];
char edu_status[20] , college_name[100], course[100], class12_result[10], class10_result[10], cc[15];

//information page function
int infopage()
{
    printf("\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                                         GANPAT UNIVERTSITY                                         \n");
    printf("                           BRANCH - COMPUTER SCIENCE AND ENGINEERING (CBA)                          \n");
    printf("                                             BATCH - 11                                             \n");
    printf("                                       ENROLLMENT NO. - CBA12                                       \n");
    printf("                                       PROJECT TITLE - PID117                                       \n");
    printf("                                           ESFP-I PROJECT                                           \n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
}

//login function
int login()
{
    printf("\n\n\n\n-----------------------------------------------------------------------------------------------------");

    printf("\nUsername : ");
    scanf("%s", &admin);

    printf("Password : ");
    scanf("%s", &ncp);

    printf("\nForgot username or password?");
 
    if(strcmp(admin, "admin") == 0 && strcmp(ncp, "ncp") == 0)
    {
        printf("\n\nLogin Successful!\nWelcome to MyResulsts\n");
        printf("-----------------------------------------------------------------------------------------------------");

        menu();
    }
    else
    {
        printf("\n\nWrong username or password!");
        printf("\n-----------------------------------------------------------------------------------------------------");

        login();
    }

    printf("\n\n\n*****************************************************************************************************");
    printf("\n                                    M Y   R E S U L T S ");
    printf("\n******************************************************************************************************");
}

//menu function
int menu()
{
    printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- MENU -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("\n1. Home\n");
    printf("2. About Us\n");
    printf("3. Student Details\n");
    printf("4. Circulars\n");
    printf("5. Contact Us\n");
    printf("6. Latest News\n");
    printf("7. Exit MyResults\n");
    printf("\n-----------------------------------------------------------------------------------------------------");

    printf("\n\n\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\nEnter your choice: ");
    int menu_choice;
    scanf("%d", &menu_choice);
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");

    switch(menu_choice)
    {
        case 1:
            home();
            menu();
            break;

        case 2:
            aboutus();
            menu();
            break;

        case 3:
            portfolio();
            break;

        case 4:
            printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- CIRCULARS -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
            menu();
            break;

        case 5:
            printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- CONTACT US -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
            menu();
            break;

        case 6:
            printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- LATEST NEWS -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
            menu();
            break;

        case 7:
            printf("\n\n\n\nThank You!");
            break;

        default:
            printf("\nInvalid Choice!\n");
            printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    }
}

//home function
int home()
{
    printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- HOME -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("\nNEWS HIGHLIGHTS -\n");
    printf("  AICTE Scheme for study tour of ATAL TUNNEL, Himachal Pradesh– YOUTH UNDERTAKING VISIT FOR ACQUIRING KNOWLEDGE (YUVAK)\n");
    printf("  AICTE has approved 'AICTE – SWANATH SCHOLARSHIP SCHEME' for children from any one of the following categories:
 1. Orphan
 2. Either or both parents died due to Covid-19
 3. Wards of Armed Forces and Central Paramilitary Forces martyred in action (Shaheed)
to provide them financial support of Rs. 50,000/- per annum for every year of study. \n");
    printf(" Scholarship is awarded to full time GATE/GPAT qualified students admitted to M.E./ M. Tech/ M. 
    Arch and M.Pharma courses in AICTE approved Institutions/Colleges @Rs. 12,400/- PM/ student. \n");

    


   
    printf("\n-----------------------------------------------------------------------------------------------------");
}

//about us function
int aboutus()
{
    printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- ABOUT US-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("\nABOUT US -\n");
    printf("\nThis is a website in which all students  \n can and will be able to see their results  \n with a proper registration and login.\n");
    printf("\n\n\nOBJECTIVE/VISION -\n");
    printf("\nThe obbjective of the website is to upload the student exam\n results in order for them to see it without any more hesitation and problems.\n");
    printf("\n-----------------------------------------------------------------------------------------------------");
}

//portfolio function
int portfolio()
{
    printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- STUDENT DETAILS-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("\n1. Personal Details\n");
    printf("2. Education Details\n");
    printf("3. Return to Menu\n");
    printf("\n-----------------------------------------------------------------------------------------------------");

    printf("\n\n\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    printf("\nEnter your choice: ");
    int my_portfolio_choice;
    scanf("%d", &my_portfolio_choice);
    printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");

    switch(my_portfolio_choice)
    {
        case 1:
            personaldetails();
            portfolio();
            break;

        case 2:
            educationdetails();
            portfolio();
            break;

        case 3:
            menu();
            break;

        default:
            printf("\nInvalid Choice!\n");
            printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
    }  
}

//personal details function
int personaldetails()
{
    printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- STUDENT DETAILS-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    printf("\nPERSONAL DETAILS\n");

                
    printf("\nFirst Name          : ");
    scanf("%s", &fname);
                
    printf("\nMiddle Name         : ");
    scanf("%s", &mname);
                
    printf("\nLast Name           : ");
    scanf("%s", &lname);
                
    printf("\nDate of Birth       : ");
    scanf("%s", &dob);

    printf("\nAge                 : ");
    scanf("%s", &age);

    printf("\nGender              : ");
    scanf("%s", &gender);
                
    printf("\nNationality         : ");
    scanf("%s", &nationality);


    printf("\nProfession          : ");
    scanf("%s", &profession);

    printf("\nHobbies             : ");
    scanf("%s", &hobbies);

    printf("\nMobile Number       : ");
    scanf("%s", &mobile_number);

    printf("\nEmail ID            : ");
    scanf("%s", &email_id);
                
    printf("\nAddress             : ");
    scanf("%s", &address);

    printf("\nCity/Town/Village   : ");
    scanf("%s", &cc);

    printf("\nState               : ");
    scanf("%s", &state);

    printf("\nPincode             : ");
    scanf("%s", &pincode);

    printf("\nCountry             : ");
    scanf("%s", &country);

    printf("\n-----------------------------------------------------------------------------------------------------");
    
    portfolio();    
}

//educational details function
int educationdetails()
{
    printf("\n\n\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- STUDENT DETAILS-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");

    printf("\nEDUCATION DETAILS\n");


    printf("\nCurrent Education Status (University Student) : ");
    scanf("%s", &edu_status);


    printf("\n\n\nFor College/University Student -\n");
    printf("\nCollege Name                       : ");
    scanf("%s", &college_name);

    printf("\nCourse Enrolled                    : ");
    scanf("%s", &course);

    printf("\nClass 12 Percentage/Grade/CGPA     : ");
    scanf("%s", &class12_result);

    printf("\nClass 10 Percentage/Grade/CGPA     : ");
    scanf("%s", &class10_result);

    printf("\n-----------------------------------------------------------------------------------------------------");
    
    portfolio();           
}


//main function
int main()
{
    infopage();
    login();
    
    return 0;
}