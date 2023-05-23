#include <iostream>
using namespace std;

int main()
{
    // Binary  
    
    int r = 5;
    int c = 5;
    int matrix[5][5] ={ {1,2,3,4,5},
                     {6,7,8,9,10},
                     {11,12,13,14,15},
                     {16,17,18,19,20},
                     {21,22,23,24,25} };
                     
    
    int target = 11;

    int s = 0;
    int e = r*c - 1;
    int m = (s + e)/2;
        
    while ( s < e ){
        // int s_row = s/c;
        // int s_col = s%c;
        // int e_row = e/c;
        // int e_col = e%c;

        int m_row = m/c;
        int m_col = m%c;

        // cout<<"e = "<<e<<endl;
        // cout<<"end = "<<e_row<<","<<e_col<<endl;
        // cout<<"s = "<<s<<endl;
        // cout<<"start = "<<s_row<<","<<s_col<<endl;
        // cout<<"m = "<<m<<endl;
        // cout<<"mid = "<<m_row<<","<<m_col<<endl;
        
        if ( matrix[m_row][m_col] == target ){
            cout<<"found"<<endl;
            return true;
        }
        if ( matrix[m_row][m_col] > target ) {
            e = m - 1 ;
            if( (s + e)%2 == 1 ) {
                m = (s + e)/2 + 1;
            }
            else {
                m = (s + e)/2;
            }
        }
        if ( matrix[m_row][m_col] < target ) {
            s = m + 1;
            if( (s + e)%2 == 1 ) {
                m = (s + e)/2 + 1;
            }
            else {
                m = (s + e)/2;
            }
        }
    }
    cout<<"not found "<<endl;


    return 0;
}
