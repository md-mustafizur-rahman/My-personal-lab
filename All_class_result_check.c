#include<stdio.h>
#include<conio.h>
main()
{
int num,num1,sub1,sub2,sub3,sub4,sum,average,cla;
printf("🚔This is all 🚔class🎃result🚔\n");
printf("\n\nGo to next press the number\n");
printf("\n1.School student\n2.College Student\n3.University student\n");
printf("Press the number:");
scanf("%d",&num);
switch(num)
{
case 1:
printf("\n\n\n1.If your class 🤼🤼 1 to 5🤼🤼 press 1\n");
printf("2.If your your class 🧗🚴9 to 10 press 2🚵🧗\n");
printf("3.If it is board exam press 3👩‍🎓👩‍🎓\n");
printf("Press the number:");
scanf("%d",&num1);
switch(num1)
{
case 1:
printf("\n\nThis result is class 1 to 5");
int bang,eng,math,rel,g,sum,aver,sci;
printf("Enter your number of [Bangla]:");
scanf("%d",&bang);
printf("Enter your number of [English]:");
scanf("%d",&eng);
printf("Enter your number of [Math]:");
scanf("%d",&math);
printf("Enter your number of [Bangladesh and global studies]:");
scanf("%d",&rel);
printf("Enter your number of [Religion]:");
scanf("%d",&g);
printf("Enter yor number of [Science]:");
scanf("%d",&sci);

        printf("\n\n\nYour [Bangla] Result is:%d\n",bang);
        printf("Your [English] Result is:%d\n",eng);
        printf("Your [Math] Result is:%d\n",math);
        printf("Your [Religion] Result is:%d\n",rel);
        printf("Your [Bangladesh and global studies] result is:%d\n",g);
        printf("Your [Science] Result is:%d\n",sci);

        sum=(bang+eng+math+rel+g+sci);
        printf("\n\n The total number of Result:%d\n",sum);

        aver=sum/6;
        printf("\n\n The Average number of result:%d\n\n",aver);

        if (aver>=80)
            printf("The Grate is: A+🏆\n");
        else if (aver>=70)
            printf("The Grate is: A🏅\n");
        else if(aver>=60)
            printf("The Grate is:A-🥈\n");
        else if (aver>=50)
            printf("The Grate is: B🥉\n");
        else if (aver>=40)
            printf("The Grate is:C🎉🎉/\n");
        else if (aver>=33)
            printf("The Grate is:D🎊🎊\n");
        else
            printf("We are so sorry you are Fail🥾🥾🥾👢👡👢⛸️");


        break;
    case 2:

        printf("\n\nSelect Your Department\n");
        int cla;
        printf("1.Science press 1\n");
        printf("2.Humanities press 2\n");
        printf("3.commerce press any integer number\n");
        printf("Press The number:");
        scanf("%d",&cla);
        switch(cla) {
        case 1:
            printf("\n\n\nThe science Result IS");
            int bang1,bang2,eng1,eng2,sum,aver,phy,ict,che,gmath,hmath,bio;
            printf("Enter your number of [Bangla1]:");
            scanf("%d",&bang1);
            printf("Enter your number of [Bangla2]:");
            scanf("%d",&bang2);
            printf("Enter your number of [English1]:");
            scanf("%d",&eng1);
            printf("Enter your number of [English2]:");
            scanf("%d",&eng2);
            printf("Enter your number of [General Math]:");
            scanf("%d",&gmath);
            printf("Enter your number of [Higher Math]:");
            scanf("%d",&hmath);
            printf("Enter your number of [Physic]:");
            scanf("%d",&phy);
            printf("Enter your number of [chemistry]:");
            scanf("%d",&che);
            printf("Enter yor number of [Biology]:");
            scanf("%d",&bio);
            printf("Enter your number of [ICT]:");
            scanf("%d",&ict);

            printf("\n\n\nYour [Bangla1] Result is:%d\n",bang1);
            printf("\n\n\nYour [Bangla2] Result is:%d\n",bang2);

            printf("Your [English1] Result is:%d\n",eng1);
            printf("Your [English2] Result is:%d\n",eng2);
            printf("Your [Math] Result is:%d\n",math);
            printf("Your [Religion] Result is:%d\n",rel);
            printf("Your [Bangladesh and global studies] result is:%d\n",g);
            printf("Your [Science] Result is:%d\n",sci);
            printf("Your [ICT] Result is:%d\n",ict);

            sum=(bang1+bang2+eng1+eng2+math+rel+g+sci+ict);
            printf("\n\n The total number of Result:%d\n",sum);

            aver=sum/10;
            printf("\n\n The Average number of result:%d\n\n",aver);

            if (aver>=80)
                printf("The Grate is: A+🏆\n");
            else if (aver>=70)
                printf("The Grate is: A🏅\n");
            else if(aver>=60)
                printf("The Grate is:A-🥈\n");
            else if (aver>=50)
                printf("The Grate is: B🥉\n");
            else if (aver>=40)
                printf("The Grate is:C🎉\n");
            else if (aver>=33)
                printf("The Grate is:D🎊\n");
            else
                printf("We are so sorry you are Fail⛸️⛸️🧦👠🥾👢👡👞🥿");


            break;
        case 2:
            printf("\n\n\nThe Humanities Result Is");
        default:
            printf("\n\n\nThe Commerce Result IS");
            break;
        }

        break;
    default:

        break;
    }


case 2:
    printf("\n\nThe college Result IS");
    printf("\n\n\n1.Show[Science]Result press1\n");
    printf("Show[Humanities]Result press2\n");
    printf("Show[Commerce]Result press any integer number\n");
    int coll;
    printf("Press the number:");

    scanf("%d",&coll);

    switch(coll) {
    case 1:
        printf("\n\n The Science Result Is\n\n");
        int bang1,bang2,eng1,eng2,sum,aver,phy1,phy2,ict,che1,che2,math1,math2,bio1,bio2;
        printf("Enter your number of [Bangla1]:");
        scanf("%d",&bang1);
        printf("Enter your number of [Bangla2]:");
        scanf("%d",&bang2);
        printf("Enter your number of [English1]:");
        scanf("%d",&eng1);
        printf("Enter your number of [English2]:");
        scanf("%d",&eng2);
        printf("Enter your number of [Math1]:");
        scanf("%d",&math1);
        printf("Enter your number of [Math2]:");
        scanf("%d",&math2);
        printf("Enter your number of [Physic1]:");
        scanf("%d",&phy1);
        printf("Enter your number of [Physic2]:");
        scanf("%d",&phy2);
        printf("Enter your number of [chemistry1]:");
        scanf("%d",&che1);
        printf("Enter your number of [chemistry2]:");
        scanf("%d",&che2);
        printf("Enter yor number of [Biology1]:");
        scanf("%d",&bio1);
        printf("Enter yor number of [Biology2]:");
        scanf("%d",&bio2);
        printf("Enter your number of [ICT]:");
        scanf("%d",&ict);

        printf("\n\n\nYour [Bangla1] Result is:%d\n",bang1);
        printf("\n\n\nYour [Bangla2] Result is:%d\n",bang2);

        printf("Your [English1] Result is:%d\n",eng1);
        printf("Your [English2] Result is:%d\n",eng2);
        printf("Your [Math] Result is:%d\n",math1);
        printf("Your [Math] Result is:%d\n",math2);
        printf("Your [Physic1] Result is:%d\n",phy1);
        printf("Your [Physic2] Result is:%d\n",phy2);
        printf("Your [Chemistry1] result is:%d\n",che1);
        printf("Your [Chemistry2] result is:%d\n",che2);
        printf("Your [Biology1] Result is:%d\n",bio1);
        printf("Your [Biology2] Result is:%d\n",bio2);
        printf("Your [ICT] Result is:%d\n",ict);

        sum=(bang1+bang2+eng1+eng2+math1+math2+phy1+phy2+che1+che2+bio1+bio2+ict);
        printf("\n\n The total number of Result:%d\n",sum);

        aver=sum/13;
        printf("\n\n The Average number of result:%d\n\n",aver);

        if (aver>=80)
            printf("The Grate is: A+🏆\n");
        else if (aver>=70)
            printf("The Grate is: A🥇\n");
        else if(aver>=60)
            printf("The Grate is:A-🥈\n");
        else if (aver>=50)
            printf("The Grate is: B🥉\n");
        else if (aver>=40)
            printf("The Grate is:C🎉\n");
        else if (aver>=33)
            printf("The Grate is:D🎊\n");
        else
            printf("We are so sorry you are Fail⛸️⛸️🧦👢🥾👡🥿👞👠👟");
        break;
    case 2:
        printf("\n\n The Humanities Result IS\n\n");
        break;
    default:
        printf("\n\n The Commerce Result IS\n\n");
        break;
    }




    break;
default:
    printf("Enter the number of [Subject1]:");
    scanf("%d",&sub1);
    printf("Enter the number of [Subject2]:");
    scanf("%d",&sub2);
    printf("Enter the number of [Subject3]:");
    scanf("%d",&sub3);
    printf("Enter the number of [Subject4]:");
    scanf("%d",&sub4);
    printf("\n\nShow the number of [Subject1]:%d\n",sub1);
    printf("Show the number of [Subject2]:%d\n",sub2);
    printf("Show the number of [Subject3]:%d\n",sub3);
    printf("Show the number of [Subject4]:%d\n",sub4);

    sum=(sub1+sub2+sub3+sub4);
    printf("\n\nShow the total number is:%d\n",sum);

    average=(sum/4);
    printf("\n\nShow the average number:%d\n\n",average);

    if (average>=80)
        printf("The Grate is: A+🏆");
    else if (average>=75)
        printf("The Grate is:A🏅");
    else if(average>=70)
        printf("The Grate is:A🥇-");
    else if (average>=65)
        printf("The Grate is: B+🎗️");
    else if (average>=60)
        printf("The Grate is: B🥈");
    else if (average>=55)
        printf("The Grate is: B-🥉");
    else if (average>=50)
        printf("The Grate is:C+🎉");
    else if (average>=45)
        printf("The Grate is: C🎊");
    else
        printf("The Grate is:F⛸️\n\n⛸️🧦👠👟👞🥿👡👢🥾");
    switch(average) {
    case 80:
        printf("\n\nResult is:Outstanding");
        break;
    case 81:
        printf("\n\nResult is:Outstanding");
        break;
    case 82:
        printf("\n\nResult is:Outstanding");
        break;
    case 83:
        printf("\n\nResult is:Outstanding");
        break;
    case 84:
        printf("\n\nResult is:Outstanding");
        break;
    case 85:
        printf("\n\nResult is:Outstanding");
        break;
    case 86:
        printf("\n\nResult is:Outstanding");
        break;
    case 87:
        printf("\n\nResult is:Outstanding");
        break;
    case 88:
        printf("\n\nResult is:Outstanding");
        break;
    case 89:
        printf("\n\nResult is:Outstanding");
        break;
    case 90:
        printf("\n\nResult is:Outstanding");
        break;
    case 91:
        printf("\n\nResult is:Outstanding");
        break;
    case 92:
        printf("\n\nResult is:Outstanding");
        break;
    case 93:
        printf("\n\nResult is:Outstanding");
        break;
    case 94:
        printf("\n\nResult is:Outstanding");
        break;
    case 95:
        printf("\n\nResult is:Outstanding");
        break;
    case 96:
        printf("\n\nResult is:Outstanding");
        break;
    case 97:
        printf("\n\nResult is:Outstanding");
        break;
    case 98:
        printf("\n\nResult is:Outstanding");
        break;
    case 99:
        printf("\n\nResult is:Outstanding");
        break;
    case 100:
        printf("\n\nResult is:Outstanding");
        break;
    case 75:
        printf("\n\nResult is: Excellent");
        break;
    case 76:
        printf("\n\nResult is: Excellent");
        break;
    case 77:
        printf("\n\nResult is: Excellent");
        break;
    case 78:
        printf("\n\nResult is: Excellent");
        break;
    case 79:
        printf("\n\nResult is: Excellent");
        break;
    case 70:
        printf("\n\nResult is:Very Good");
        break;
    case 71:
        printf("\n\nResult is:Very Good");
        break;
    case 72:
        printf("\n\nResult is:Very Good");
        break;
    case 73:
        printf("\n\nResult is:Very Good");
        break;
    case 74:
        printf("\n\nResult is:Very Good");
        break;

    case 65:
        printf("\n\nResult is:Good");
        break;
    case 66:
        printf("\n\nResult is:Good");
        break;
    case 67:
        printf("\n\nResult is:Good");
        break;
    case 68:
        printf("\n\nResult is:Good");
        break;
    case 69:
        printf("\n\nResult is:Good");
        break;
    case 60:
        printf("\n\nResult is:Satisfactory");
        break;
    case 61:
        printf("\n\nResult is:Satisfactory");
        break;
    case 62:
        printf("\n\nResult is:Satisfactory");
        break;
    case 63:
        printf("\n\nResult is:Satisfactory");
        break;
    case 64:
        printf("\n\nResult is:Satisfactory");
        break;
    case 55:
        printf("\n\nResult is:Above Average");
        break;
    case 56:
        printf("\n\nResult is:Above Average");
        break;
    case 57:
        printf("\n\nResult is:Above Average");
        break;
    case 58:
        printf("\n\nResult is:Above Average");
        break;
    case 59:
        printf("\n\nResult is:Above Average");
        break;
    case 50:
        printf("\n\nResult is: Average");
        break;
    case 51:
        printf("\n\nResult is: Average");
        break;
    case 52:
        printf("\n\nResult is: Average");
        break;
    case 53:
        printf("\n\nResult is: Average");
        break;
    case 54:
        printf("\n\nResult is: Average");
    }
    break;
}
char mm2;
printf("\nIf you want to continue again for this process press 'y' other wise 'n' then y/n:");
scanf("%s",&mm2);
if(mm2=='y'||mm2=='Y')
{
    main();
}
else
{
    printf("\n\n\n\t\t\Power by Mustafizur Rahman(Sabbir)\n\t\t\tThank you so much\n\t\t----------------------------------\n");
}
getch();
}
