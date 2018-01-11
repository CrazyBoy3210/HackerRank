using namespace std;
#include<iostream>
 int main()
 {
     int n,countMin=0,countMax=0;
     long score,minScore,maxScore;
     cin>>n;

     cin>>score;
     minScore=maxScore=score;

     for(int i=0;i<n-1;i++)
     {
         cin>>score;
         if(minScore>score)
            {
                countMin++;
                minScore=score;

            }
        else if(maxScore<score)
            {
            countMax++;
            maxScore=score;
            }
     }
     cout<<countMax<<" "<<countMin;
 }
