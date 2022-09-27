#include <iostream>

using namespace std;

int main()
{

    int testCase, alarmNber, sleepHour, sleepMinite, i, j;
    int totalHour,totalMinite,totalMiniteSleep,totalMiniteRise,minite;

    cin>> testCase;
    for(j=0;j<testCase;j++)
    {
        cin >> alarmNber >>sleepHour >>sleepMinite;
        int riseHour[alarmNber+1], riseMinnite[alarmNber+1], minMinite;

        for(i=0;i<alarmNber;i++)
        {
            cin >> riseHour[i] >>riseMinnite[i];

            if(sleepHour<riseHour[i])
            {
                totalMiniteSleep = sleepHour*60+sleepMinite;
                totalMiniteRise = riseHour[i]*60+riseMinnite[i];
                totalMinite= totalMiniteRise-totalMiniteSleep;
                //totalHour = ((totalMiniteRise - totalMiniteSleep)/60) ;
                //totalMinite = ((totalMiniteRise - totalMiniteSleep)%60) ;


                //cout <<endl<<".....///" << totalMinite <<endl ;
            }
            else
            {
                totalMiniteSleep = sleepHour*60+sleepMinite;
                totalMiniteRise = (riseHour[i]*60+riseMinnite[i])+1440;
                totalMinite= totalMiniteRise-totalMiniteSleep;
                if(totalMinite>=1440) totalMinite-=1440;
                //totalHour = ((totalMiniteRise - totalMiniteSleep)/60) ;
                //totalMinite = ((totalMiniteRise - totalMiniteSleep)%60) ;

                //cout <<endl<<".....\\" << totalMinite <<endl ;;
            }
            if(i==0) minMinite=totalMinite;
            if(totalMinite<minMinite) minMinite=totalMinite;
        }
        totalHour = ((minMinite)/60) ;
        totalMinite = ((minMinite)%60) ;
        cout <<totalHour<<" " << totalMinite <<endl;
    }
    return 0;
}
